
/* v8::internal::Page::ConvertNewToOld(v8::internal::Page*) */

Page * v8::internal::Page::ConvertNewToOld(Page *param_1)

{
  Page *pPVar1;
  PagedSpace *this;
  
  this = *(PagedSpace **)(*(long *)(param_1 + 0x18) + 0xf0);
  *(PagedSpace **)(param_1 + 0x58) = this;
  *(undefined8 *)(param_1 + 8) = 0;
  pPVar1 = (Page *)PagedSpace::InitializePage(this,(MemoryChunk *)param_1);
  PagedSpace::AddPage(this,pPVar1);
  return pPVar1;
}

