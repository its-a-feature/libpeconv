#include "module_helper.h"

BYTE* alloc_pe_buffer(size_t buffer_size, DWORD protect)
{
    return (BYTE*) VirtualAlloc(NULL, buffer_size, MEM_COMMIT | MEM_RESERVE, protect);
}

void free_pe_buffer(BYTE* buffer, size_t buffer_size)
{
    if (buffer == NULL) return;
    VirtualFree(buffer, buffer_size, MEM_DECOMMIT);
}

