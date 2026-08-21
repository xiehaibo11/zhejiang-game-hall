
/* v8::internal::Scanner::TryToParseSourceURLComment() */

void __thiscall v8::internal::Scanner::TryToParseSourceURLComment(Scanner *this)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ushort *puVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  Scanner *this_00;
  long *plVar10;
  long *plVar11;
  char *local_68;
  undefined8 local_60;
  int local_58;
  char local_54;
  
  uVar9 = *(uint *)(this + 0x20);
  if (uVar9 < 0x80) {
    if (((byte)(&DAT_019dc06d)[uVar9] >> 2 & 1) == 0) {
      return;
    }
  }
  else {
    uVar2 = unibrow::WhiteSpace::Is(uVar9);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  plVar10 = *(long **)(this + 0x18);
  puVar5 = (ushort *)plVar10[2];
  if (puVar5 < (ushort *)plVar10[3]) {
LAB_01190230:
    uVar9 = (uint)*puVar5;
  }
  else {
    if ((char)plVar10[6] == '\0') {
      uVar2 = (**(code **)(*plVar10 + 0x28))(plVar10);
      puVar5 = (ushort *)plVar10[2];
      if ((uVar2 & 1) != 0) goto LAB_01190230;
    }
    uVar9 = 0xffffffff;
  }
  plVar10[2] = (long)(puVar5 + 1);
  *(uint *)(this + 0x20) = uVar9;
  local_68 = (char *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_54 = '\x01';
  if (uVar9 != 0xffffffff) {
    if (uVar9 < 0x80) goto LAB_01190308;
LAB_0119026c:
    uVar2 = unibrow::WhiteSpace::Is(uVar9);
    if (((uVar9 >> 1 != 0x1014) && ((uVar2 & 1) == 0)) &&
       (uVar9 = *(uint *)(this + 0x20), uVar9 != 0x3d)) {
      do {
        if (local_54 == '\0') {
LAB_011902d8:
          LiteralBuffer::AddTwoByteChar((LiteralBuffer *)&local_68,uVar9);
        }
        else {
          if (0xff < (int)uVar9) {
            LiteralBuffer::ConvertToTwoByte((LiteralBuffer *)&local_68);
            goto LAB_011902d8;
          }
          if ((int)local_60 <= local_58) {
            LiteralBuffer::ExpandBuffer((LiteralBuffer *)&local_68);
          }
          local_68[local_58] = (char)uVar9;
          local_58 = local_58 + 1;
        }
        plVar10 = *(long **)(this + 0x18);
        puVar5 = (ushort *)plVar10[2];
        if ((ushort *)plVar10[3] <= puVar5) {
          if ((char)plVar10[6] == '\0') {
            uVar2 = (**(code **)(*plVar10 + 0x28))(plVar10);
            puVar5 = (ushort *)plVar10[2];
            if ((uVar2 & 1) != 0) goto LAB_011902f4;
          }
          plVar10[2] = (long)(puVar5 + 1);
          *(undefined4 *)(this + 0x20) = 0xffffffff;
          break;
        }
LAB_011902f4:
        uVar9 = (uint)*puVar5;
        plVar10[2] = (long)(puVar5 + 1);
        *(uint *)(this + 0x20) = uVar9;
        if (0x7f < uVar9) goto LAB_0119026c;
LAB_01190308:
        if ((((byte)(&DAT_019dc06d)[uVar9] >> 3 & 1) != 0) || (uVar9 == 0x3d)) break;
      } while( true );
    }
    if (local_54 != '\0') {
      lVar4 = (long)local_58;
      if (lVar4 == 0x10) {
LAB_011903ac:
        pcVar7 = "sourceMappingURL";
        pcVar6 = local_68;
        do {
          if (*pcVar6 != *pcVar7) goto LAB_011906b8;
          pcVar6 = pcVar6 + 1;
          lVar4 = lVar4 + -1;
          pcVar7 = pcVar7 + 1;
        } while (lVar4 != 0);
        this_00 = this + 0x138;
      }
      else {
        if (lVar4 != 9) goto LAB_011906b8;
        pcVar7 = "sourceURL";
        lVar8 = 9;
        pcVar6 = local_68;
        do {
          if (*pcVar6 != *pcVar7) {
            if (local_58 == 0x10) goto LAB_011903ac;
            goto LAB_011906b8;
          }
          pcVar6 = pcVar6 + 1;
          lVar8 = lVar8 + -1;
          pcVar7 = pcVar7 + 1;
        } while (lVar8 != 0);
        this_00 = this + 0x120;
      }
      if (*(int *)(this + 0x20) == 0x3d) {
        *(undefined4 *)(this_00 + 0x10) = 0;
        *(LiteralBuffer *)(this_00 + 0x14) = (LiteralBuffer)0x1;
        plVar10 = *(long **)(this + 0x18);
        plVar11 = plVar10 + 2;
        puVar5 = (ushort *)*plVar11;
        if (puVar5 < (ushort *)plVar10[3]) goto LAB_0119047c;
        if ((char)plVar10[6] == '\0') {
          uVar2 = (**(code **)(*plVar10 + 0x28))(plVar10);
          puVar5 = (ushort *)plVar10[2];
          if ((uVar2 & 1) != 0) goto LAB_0119047c;
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = 0xffffffff;
        }
LAB_01190480:
        *plVar11 = (long)(puVar5 + 1);
        *(uint *)(this + 0x20) = uVar9;
        if (uVar9 < 0x80) {
          if (((byte)(&DAT_019dc06d)[uVar9] >> 2 & 1) == 0) goto LAB_01190508;
        }
        else {
          uVar2 = unibrow::WhiteSpace::Is(uVar9);
          if ((uVar2 & 1) == 0) {
            uVar9 = *(uint *)(this + 0x20);
            goto LAB_01190508;
          }
        }
        plVar10 = *(long **)(this + 0x18);
        plVar11 = plVar10 + 2;
        puVar5 = (ushort *)*plVar11;
        if ((ushort *)plVar10[3] <= puVar5) goto code_r0x011904c4;
        goto LAB_0119047c;
      }
    }
  }
LAB_011906b8:
  if (local_68 != (char *)0x0) {
    operator_delete__(local_68);
  }
  return;
LAB_01190508:
  uVar1 = uVar9 + 1;
  if (uVar1 < 0x29) {
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x4801U) != 0) goto LAB_01190614;
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x10800000000U) != 0) goto LAB_011906ac;
  }
  if (uVar9 - 0x2028 < 2) goto LAB_01190614;
  if (uVar9 < 0x80) {
    if (((byte)(&DAT_019dc06d)[uVar9] >> 2 & 1) != 0) goto LAB_01190614;
  }
  else {
    uVar2 = unibrow::WhiteSpace::Is(uVar9);
    uVar9 = *(uint *)(this + 0x20);
    if ((uVar2 & 1) != 0) goto LAB_01190614;
  }
  if (*(LiteralBuffer *)(this_00 + 0x14) == (LiteralBuffer)0x0) {
LAB_011905a8:
    LiteralBuffer::AddTwoByteChar((LiteralBuffer *)this_00,uVar9);
  }
  else {
    if (0xff < (int)uVar9) {
      LiteralBuffer::ConvertToTwoByte((LiteralBuffer *)this_00);
      goto LAB_011905a8;
    }
    iVar3 = *(int *)(this_00 + 0x10);
    if (*(int *)(this_00 + 8) <= iVar3) {
      LiteralBuffer::ExpandBuffer((LiteralBuffer *)this_00);
      iVar3 = *(int *)(this_00 + 0x10);
    }
    *(char *)(*(long *)this_00 + (long)iVar3) = (char)uVar9;
    *(int *)(this_00 + 0x10) = *(int *)(this_00 + 0x10) + 1;
  }
  plVar10 = *(long **)(this + 0x18);
  puVar5 = (ushort *)plVar10[2];
  if (puVar5 < (ushort *)plVar10[3]) {
LAB_011905c4:
    uVar9 = (uint)*puVar5;
  }
  else {
    if ((char)plVar10[6] == '\0') {
      uVar2 = (**(code **)(*plVar10 + 0x28))(plVar10);
      puVar5 = (ushort *)plVar10[2];
      if ((uVar2 & 1) != 0) goto LAB_011905c4;
    }
    uVar9 = 0xffffffff;
  }
  plVar10[2] = (long)(puVar5 + 1);
  *(uint *)(this + 0x20) = uVar9;
  goto LAB_01190508;
LAB_01190614:
  if (((uVar9 + 1 < 0xf) && ((1 << (ulong)(uVar9 + 1 & 0x1f) & 0x4801U) != 0)) ||
     (uVar9 - 0x2028 < 2)) goto LAB_011906b8;
  if (uVar9 < 0x80) {
    if (((byte)(&DAT_019dc06d)[uVar9] >> 2 & 1) == 0) goto LAB_011906ac;
  }
  else {
    uVar2 = unibrow::WhiteSpace::Is(uVar9);
    if ((uVar2 & 1) == 0) goto LAB_011906ac;
  }
  plVar10 = *(long **)(this + 0x18);
  puVar5 = (ushort *)plVar10[2];
  if (puVar5 < (ushort *)plVar10[3]) {
LAB_01190668:
    uVar9 = (uint)*puVar5;
  }
  else {
    if ((char)plVar10[6] == '\0') {
      uVar2 = (**(code **)(*plVar10 + 0x28))(plVar10);
      puVar5 = (ushort *)plVar10[2];
      if ((uVar2 & 1) != 0) goto LAB_01190668;
    }
    uVar9 = 0xffffffff;
  }
  plVar10[2] = (long)(puVar5 + 1);
  *(uint *)(this + 0x20) = uVar9;
  goto LAB_01190614;
LAB_011906ac:
  *(undefined4 *)(this_00 + 0x10) = 0;
  *(LiteralBuffer *)(this_00 + 0x14) = (LiteralBuffer)0x1;
  goto LAB_011906b8;
code_r0x011904c4:
  uVar9 = 0xffffffff;
  if ((char)plVar10[6] == '\0') {
    uVar2 = (**(code **)(*plVar10 + 0x28))(plVar10);
    puVar5 = (ushort *)plVar10[2];
    uVar9 = 0xffffffff;
    if ((uVar2 & 1) != 0) {
LAB_0119047c:
      uVar9 = (uint)*puVar5;
    }
  }
  goto LAB_01190480;
}

