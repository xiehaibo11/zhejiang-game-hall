
/* v8::internal::Scanner::SkipSingleHTMLComment() */

undefined8 __thiscall v8::internal::Scanner::SkipSingleHTMLComment(Scanner *this)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  long lVar9;
  long *plVar10;
  
  plVar10 = *(long **)(this + 0x18);
  if (this[0x11b] == (Scanner)0x0) {
    do {
      puVar8 = (ushort *)plVar10[2];
      puVar7 = (ushort *)plVar10[3];
      if (puVar8 == puVar7) {
LAB_0118ffa8:
        if (puVar8 != puVar7) {
          plVar10[2] = (long)(puVar8 + 1);
          uVar6 = (uint)*puVar8;
          goto LAB_0119001c;
        }
      }
      else {
        do {
          uVar3 = *puVar8;
          if (((uVar3 - 0x2028 < 2) || (uVar3 == 10)) || (uVar3 == 0xd)) goto LAB_0118ffa8;
          puVar8 = puVar8 + 1;
        } while (puVar7 != puVar8);
      }
      plVar10[2] = (long)puVar7;
      if ((char)plVar10[6] != '\0') goto LAB_0118ffd4;
      uVar5 = (**(code **)(*plVar10 + 0x28))(plVar10);
    } while ((uVar5 & 1) != 0);
    puVar7 = (ushort *)plVar10[2];
LAB_0118ffd4:
    plVar10[2] = (long)(puVar7 + 1);
    uVar6 = 0xffffffff;
LAB_0119001c:
    uVar4 = 0x6f;
    *(uint *)(this + 0x20) = uVar6;
  }
  else if (*(int *)(this + 0x15c) == 0) {
    lVar1 = plVar10[1];
    lVar2 = plVar10[2];
    lVar9 = plVar10[4];
    *(undefined4 *)(this + 0x15c) = 0x114;
    lVar9 = lVar9 + ((ulong)(lVar2 - lVar1) >> 1);
    *(ulong *)(this + 0x160) = (ulong)((int)lVar9 - 1) | lVar9 << 0x20;
    uVar4 = 0x6d;
  }
  else {
    uVar4 = 0x6d;
  }
  return uVar4;
}

