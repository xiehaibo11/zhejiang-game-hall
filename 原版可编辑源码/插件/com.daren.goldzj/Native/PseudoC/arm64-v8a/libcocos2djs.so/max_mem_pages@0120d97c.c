
/* v8::internal::wasm::max_mem_pages() */

uint v8::internal::wasm::max_mem_pages(void)

{
  uint uVar1;
  
  uVar1 = FLAG_wasm_max_mem_pages;
  if (0x7ffe < FLAG_wasm_max_mem_pages) {
    uVar1 = 0x7fff;
  }
  return uVar1;
}

