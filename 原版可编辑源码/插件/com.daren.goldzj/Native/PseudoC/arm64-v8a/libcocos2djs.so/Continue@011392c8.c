
/* v8::internal::ConsStringIterator::Continue(int*) */

void __thiscall v8::internal::ConsStringIterator::Continue(ConsStringIterator *this,int *param_1)

{
  int iVar1;
  bool local_24 [4];
  
  local_24[0] = *(int *)(this + 0x10c) - *(int *)(this + 0x108) == 0x20;
  if ((local_24[0]) || (iVar1 = NextLeaf(this,local_24), local_24[0] != false)) {
    iVar1 = Search(this,param_1);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(this + 0x108) = 0;
  }
  return;
}

