
/* v8::internal::Scanner::SkipMultiLineComment() */

undefined8 __thiscall v8::internal::Scanner::SkipMultiLineComment(Scanner *this)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  long *plVar6;
  
  if (*(char *)(*(long *)(this + 8) + 0x4c) == '\0') {
LAB_011907e8:
    do {
      plVar6 = *(long **)(this + 0x18);
      do {
        puVar5 = (ushort *)plVar6[2];
        puVar4 = (ushort *)plVar6[3];
        if (puVar5 == puVar4) {
LAB_01190824:
          if (puVar5 != puVar4) {
            plVar6[2] = (long)(puVar5 + 1);
            uVar3 = (uint)*puVar5;
            goto LAB_0119086c;
          }
        }
        else {
          do {
            uVar1 = *puVar5;
            if ((ulong)uVar1 < 0x80) {
              if (((byte)(&DAT_019dc0ed)[uVar1] >> 5 & 1) != 0) goto LAB_01190824;
            }
            else if (uVar1 >> 1 == 0x1014) goto LAB_01190824;
            puVar5 = puVar5 + 1;
          } while (puVar4 != puVar5);
        }
        plVar6[2] = (long)puVar4;
        if ((char)plVar6[6] != '\0') goto LAB_01190850;
        uVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
      } while ((uVar2 & 1) != 0);
      puVar4 = (ushort *)plVar6[2];
LAB_01190850:
      plVar6[2] = (long)(puVar4 + 1);
      uVar3 = 0xffffffff;
LAB_0119086c:
      *(uint *)(this + 0x20) = uVar3;
      while (uVar3 == 0x2a) {
        plVar6 = *(long **)(this + 0x18);
        puVar5 = (ushort *)plVar6[2];
        if (puVar5 < (ushort *)plVar6[3]) {
LAB_01190888:
          uVar3 = (uint)*puVar5;
        }
        else {
          if ((char)plVar6[6] == '\0') {
            uVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
            puVar5 = (ushort *)plVar6[2];
            if ((uVar2 & 1) != 0) goto LAB_01190888;
          }
          uVar3 = 0xffffffff;
        }
        plVar6[2] = (long)(puVar5 + 1);
        *(uint *)(this + 0x20) = uVar3;
        if (uVar3 == 0x2f) goto LAB_0119090c;
      }
      if ((int)uVar3 < 0x2028) {
        if (uVar3 == 0xffffffff) goto LAB_011906ec;
        if ((uVar3 == 10) || (uVar3 == 0xd)) break;
        goto LAB_011907e8;
      }
    } while (1 < uVar3 - 0x2028);
    *(undefined1 *)(*(long *)(this + 8) + 0x4c) = 1;
  }
LAB_011906ec:
  uVar3 = *(uint *)(this + 0x20);
  do {
    if (uVar3 == 0xffffffff) {
      return 0x6d;
    }
    plVar6 = *(long **)(this + 0x18);
    do {
      puVar5 = (ushort *)plVar6[2];
      puVar4 = (ushort *)plVar6[3];
      if (puVar5 == puVar4) {
LAB_01190724:
        if (puVar5 != puVar4) {
          plVar6[2] = (long)(puVar5 + 1);
          uVar3 = (uint)*puVar5;
          goto LAB_0119076c;
        }
      }
      else {
        do {
          if (*puVar5 == 0x2a) goto LAB_01190724;
          puVar5 = puVar5 + 1;
        } while (puVar4 != puVar5);
      }
      plVar6[2] = (long)puVar4;
      if ((char)plVar6[6] != '\0') goto LAB_01190750;
      uVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
    } while ((uVar2 & 1) != 0);
    puVar4 = (ushort *)plVar6[2];
LAB_01190750:
    plVar6[2] = (long)(puVar4 + 1);
    uVar3 = 0xffffffff;
LAB_0119076c:
    *(uint *)(this + 0x20) = uVar3;
    while (uVar3 == 0x2a) {
      plVar6 = *(long **)(this + 0x18);
      puVar5 = (ushort *)plVar6[2];
      if (puVar5 < (ushort *)plVar6[3]) {
LAB_01190788:
        uVar3 = (uint)*puVar5;
      }
      else {
        if ((char)plVar6[6] == '\0') {
          uVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
          puVar5 = (ushort *)plVar6[2];
          if ((uVar2 & 1) != 0) goto LAB_01190788;
        }
        uVar3 = 0xffffffff;
      }
      plVar6[2] = (long)(puVar5 + 1);
      *(uint *)(this + 0x20) = uVar3;
      if (uVar3 == 0x2f) goto LAB_0119090c;
    }
  } while( true );
LAB_0119090c:
  plVar6 = *(long **)(this + 0x18);
  puVar5 = (ushort *)plVar6[2];
  if (puVar5 < (ushort *)plVar6[3]) {
LAB_0119091c:
    uVar3 = (uint)*puVar5;
  }
  else {
    if ((char)plVar6[6] == '\0') {
      uVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
      puVar5 = (ushort *)plVar6[2];
      if ((uVar2 & 1) != 0) goto LAB_0119091c;
    }
    uVar3 = 0xffffffff;
  }
  plVar6[2] = (long)(puVar5 + 1);
  *(uint *)(this + 0x20) = uVar3;
  return 0x6f;
}

