
/* v8::internal::wasm::max_table_init_entries() */

uint v8::internal::wasm::max_table_init_entries(void)

{
  uint uVar1;
  
  uVar1 = FLAG_wasm_max_table_size;
  if (9999999 < FLAG_wasm_max_table_size) {
    uVar1 = 10000000;
  }
  return uVar1;
}

