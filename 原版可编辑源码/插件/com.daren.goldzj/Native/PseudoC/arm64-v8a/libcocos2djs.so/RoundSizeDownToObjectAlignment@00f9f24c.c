
/* v8::internal::Space::RoundSizeDownToObjectAlignment(int) */

uint __thiscall v8::internal::Space::RoundSizeDownToObjectAlignment(Space *this,int param_1)

{
  uint uVar1;
  
  uVar1 = 0xffffffe0;
  if (*(int *)(this + 0x48) != 3) {
    uVar1 = 0xfffffffc;
  }
  return uVar1 & param_1;
}

