
/* v8::internal::ConcurrentBitmap<(v8::internal::AccessMode)1>::Print() */

void __thiscall
v8::internal::ConcurrentBitmap<(v8::internal::AccessMode)1>::Print
          (ConcurrentBitmap<(v8::internal::AccessMode)1> *this)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = 0;
  uVar4 = 0;
  uVar7 = 0;
  iVar3 = 0;
  do {
    uVar2 = *(uint *)(this + uVar5 * 4);
    if (uVar7 == uVar2) {
      iVar3 = iVar3 + 1;
    }
    else {
      if (iVar3 != 0) {
        PrintF("%d: %dx%d\n",(ulong)uVar4,(ulong)(uVar7 != 0),(ulong)(uint)(iVar3 << 5));
      }
      if (uVar2 + 1 < 2) {
        iVar3 = 0;
        uVar4 = (uint)uVar5;
        uVar7 = uVar2;
      }
      else {
        PrintF("%d: ",uVar5 & 0xffffffff);
        uVar6 = 1;
        do {
          pcVar1 = "0";
          if ((uVar6 & uVar2) != 0) {
            pcVar1 = "1";
          }
          PrintF(pcVar1);
          uVar6 = uVar6 << 1;
        } while (uVar6 != 0);
        PrintF("\n");
        iVar3 = 0;
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x800);
  if (iVar3 != 0) {
    PrintF("%d: %dx%d\n",(ulong)uVar4,(ulong)(uVar7 != 0),(ulong)(uint)(iVar3 << 5));
  }
  PrintF("\n");
  return;
}

