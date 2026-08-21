
/* v8::internal::Scanner::SkipSourceURLComment() */

undefined8 __thiscall v8::internal::Scanner::SkipSourceURLComment(Scanner *this)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  long *plVar6;
  
  TryToParseSourceURLComment(this);
  uVar3 = *(int *)(this + 0x20) + 1;
  if (((0xe < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x4801U) == 0)) &&
     (1 < *(int *)(this + 0x20) - 0x2028U)) {
    plVar6 = *(long **)(this + 0x18);
    do {
      puVar5 = (ushort *)plVar6[2];
      puVar4 = (ushort *)plVar6[3];
      if (puVar5 == puVar4) {
LAB_01190178:
        if (puVar5 != puVar4) {
          plVar6[2] = (long)(puVar5 + 1);
          uVar3 = (uint)*puVar5;
          goto LAB_011901c0;
        }
      }
      else {
        do {
          uVar1 = *puVar5;
          if (((uVar1 - 0x2028 < 2) || (uVar1 == 10)) || (uVar1 == 0xd)) goto LAB_01190178;
          puVar5 = puVar5 + 1;
        } while (puVar4 != puVar5);
      }
      plVar6[2] = (long)puVar4;
      if ((char)plVar6[6] != '\0') goto LAB_011901a4;
      uVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
    } while ((uVar2 & 1) != 0);
    puVar4 = (ushort *)plVar6[2];
LAB_011901a4:
    plVar6[2] = (long)(puVar4 + 1);
    uVar3 = 0xffffffff;
LAB_011901c0:
    *(uint *)(this + 0x20) = uVar3;
  }
  return 0x6f;
}

