
/* v8::internal::QuickCheckDetails::Clear() */

void __thiscall v8::internal::QuickCheckDetails::Clear(QuickCheckDetails *this)

{
  uint uVar1;
  ulong uVar2;
  QuickCheckDetails *pQVar3;
  
  uVar1 = *(uint *)this;
  if (0 < (int)uVar1) {
    uVar2 = 0;
    pQVar3 = this + 8;
    do {
      uVar2 = uVar2 + 1;
      *(undefined4 *)(pQVar3 + -4) = 0;
      *pQVar3 = (QuickCheckDetails)0x0;
      pQVar3 = pQVar3 + 6;
    } while (uVar2 < uVar1);
  }
  *(undefined4 *)this = 0;
  return;
}

