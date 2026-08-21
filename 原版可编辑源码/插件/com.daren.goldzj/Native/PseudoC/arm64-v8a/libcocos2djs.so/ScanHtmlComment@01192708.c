
/* v8::internal::Scanner::ScanHtmlComment() */

undefined8 __thiscall v8::internal::Scanner::ScanHtmlComment(Scanner *this)

{
  ulong uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  short *psVar5;
  ushort *puVar6;
  uint uVar7;
  long *plVar8;
  
  plVar8 = *(long **)(this + 0x18);
  puVar6 = (ushort *)plVar8[2];
  if (puVar6 < (ushort *)plVar8[3]) {
LAB_0119272c:
    uVar2 = *puVar6;
    plVar8[2] = (long)(puVar6 + 1);
    *(uint *)(this + 0x20) = (uint)uVar2;
    if (uVar2 == 0x2d) {
      plVar8 = *(long **)(this + 0x18);
      psVar5 = (short *)plVar8[2];
      if ((short *)plVar8[3] <= psVar5) {
        if (((char)plVar8[6] != '\0') ||
           (uVar4 = (**(code **)(*plVar8 + 0x28))(plVar8), (uVar4 & 1) == 0)) goto LAB_011927f8;
        psVar5 = (short *)plVar8[2];
      }
      if (*psVar5 == 0x2d) {
        plVar8 = *(long **)(this + 0x18);
        puVar6 = (ushort *)plVar8[2];
        if (puVar6 < (ushort *)plVar8[3]) {
          uVar7 = (uint)*puVar6;
        }
        else if ((char)plVar8[6] == '\0') {
          uVar4 = (**(code **)(*plVar8 + 0x28))(plVar8);
          puVar6 = (ushort *)plVar8[2];
          if ((uVar4 & 1) == 0) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = (uint)*puVar6;
          }
        }
        else {
          uVar7 = 0xffffffff;
        }
        plVar8[2] = (long)(puVar6 + 1);
        *(uint *)(this + 0x20) = uVar7;
        this[0x118] = (Scanner)0x1;
        uVar3 = SkipSingleHTMLComment(this);
        return uVar3;
      }
    }
  }
  else {
    if ((char)plVar8[6] == '\0') {
      uVar4 = (**(code **)(*plVar8 + 0x28))(plVar8);
      puVar6 = (ushort *)plVar8[2];
      if ((uVar4 & 1) != 0) goto LAB_0119272c;
    }
    plVar8[2] = (long)(puVar6 + 1);
    *(undefined4 *)(this + 0x20) = 0xffffffff;
  }
LAB_011927f8:
  plVar8 = *(long **)(this + 0x18);
  uVar4 = plVar8[1];
  uVar1 = plVar8[2];
  if (uVar1 < uVar4 || uVar1 - uVar4 == 0) {
    plVar8[2] = uVar4;
    plVar8[4] = plVar8[4] + ((long)(uVar1 - uVar4) >> 1) + -1;
    if ((char)plVar8[6] == '\0') {
      (**(code **)(*plVar8 + 0x28))();
    }
  }
  else {
    plVar8[2] = uVar1 - 2;
  }
  *(undefined4 *)(this + 0x20) = 0x21;
  return 0x39;
}

