
/* v8::internal::AsmJsScanner::Next() */

void __thiscall v8::internal::AsmJsScanner::Next(AsmJsScanner *this)

{
  byte *pbVar1;
  ulong uVar2;
  ushort uVar3;
  short sVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  short *psVar9;
  ushort *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  
  uVar7 = *(uint *)(this + 8);
  if (this[0x30] != (AsmJsScanner)0x0) {
    uVar8 = *(undefined4 *)(this + 0x10);
    uVar11 = *(undefined8 *)(this + 0x28);
    *(uint *)(this + 0xc) = uVar7;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 8) = uVar8;
    *(undefined8 *)(this + 0x18) = uVar11;
    this[0x30] = (AsmJsScanner)0x0;
    return;
  }
  if (0xfffffffd < uVar7) {
    return;
  }
  this[0xe4] = (AsmJsScanner)0x0;
  *(uint *)(this + 0xc) = uVar7;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x18);
switchD_0148e810_caseD_9:
  plVar12 = *(long **)this;
  *(long *)(this + 0x18) = plVar12[4] + (plVar12[2] - plVar12[1] >> 1);
  puVar10 = (ushort *)plVar12[2];
  if ((ushort *)plVar12[3] <= puVar10) {
    if ((char)plVar12[6] != '\0') {
LAB_0148eac8:
      plVar12[2] = (long)(puVar10 + 1);
      *(undefined4 *)(this + 8) = 0xffffffff;
      return;
    }
    uVar5 = (**(code **)(*plVar12 + 0x28))(plVar12);
    puVar10 = (ushort *)plVar12[2];
    if ((uVar5 & 1) == 0) goto LAB_0148eac8;
  }
  uVar3 = *puVar10;
  plVar12[2] = (long)(puVar10 + 1);
  uVar7 = (uint)uVar3;
  switch((uint)uVar3) {
  case 9:
  case 0xd:
  case 0x20:
    goto switchD_0148e810_caseD_9;
  case 10:
    this[0xe4] = (AsmJsScanner)0x1;
    goto switchD_0148e810_caseD_9;
  default:
    break;
  case 0x21:
  case 0x3c:
  case 0x3d:
  case 0x3e:
    ConsumeCompareOrShift(this,uVar7);
    return;
  case 0x22:
  case 0x27:
    lVar13 = 0;
    goto LAB_0148e9bc;
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x3a:
  case 0x3b:
  case 0x3f:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
    *(uint *)(this + 8) = (uint)uVar3;
    return;
  case 0x2f:
    plVar12 = *(long **)this;
    psVar9 = (short *)plVar12[2];
    if (psVar9 < (short *)plVar12[3]) {
LAB_0148e824:
      sVar4 = *psVar9;
      plVar12[2] = (long)(psVar9 + 1);
      if (sVar4 == 0x2f) {
        do {
          plVar12 = *(long **)this;
          psVar9 = (short *)plVar12[2];
          if ((short *)plVar12[3] <= psVar9) {
            if ((char)plVar12[6] == '\0') {
              uVar5 = (**(code **)(*plVar12 + 0x28))(plVar12);
              psVar9 = (short *)plVar12[2];
              if ((uVar5 & 1) != 0) goto LAB_0148e924;
            }
            plVar12[2] = (long)(psVar9 + 1);
            goto switchD_0148e810_caseD_9;
          }
LAB_0148e924:
          sVar4 = *psVar9;
          plVar12[2] = (long)(psVar9 + 1);
        } while (sVar4 != 10);
        this[0xe4] = (AsmJsScanner)0x1;
        goto switchD_0148e810_caseD_9;
      }
      if (sVar4 == 0x2a) {
        do {
          plVar12 = *(long **)this;
          puVar10 = (ushort *)plVar12[2];
          if (puVar10 < (ushort *)plVar12[3]) {
LAB_0148e84c:
            uVar7 = (uint)*puVar10;
          }
          else {
            if ((char)plVar12[6] == '\0') {
              uVar5 = (**(code **)(*plVar12 + 0x28))(plVar12);
              puVar10 = (ushort *)plVar12[2];
              if ((uVar5 & 1) != 0) goto LAB_0148e84c;
            }
            uVar7 = 0xffffffff;
          }
          plVar12[2] = (long)(puVar10 + 1);
          while (uVar7 == 0x2a) {
            plVar12 = *(long **)this;
            puVar10 = (ushort *)plVar12[2];
            if (puVar10 < (ushort *)plVar12[3]) {
LAB_0148e870:
              uVar7 = (uint)*puVar10;
            }
            else {
              if ((char)plVar12[6] == '\0') {
                uVar5 = (**(code **)(*plVar12 + 0x28))(plVar12);
                puVar10 = (ushort *)plVar12[2];
                if ((uVar5 & 1) != 0) goto LAB_0148e870;
              }
              uVar7 = 0xffffffff;
            }
            plVar12[2] = (long)(puVar10 + 1);
            if (uVar7 == 0x2f) goto switchD_0148e810_caseD_9;
          }
          if (uVar7 == 0xffffffff) goto LAB_0148ea94;
          if (uVar7 == 10) {
            this[0xe4] = (AsmJsScanner)0x1;
          }
        } while( true );
      }
    }
    else {
      if ((char)plVar12[6] == '\0') {
        uVar5 = (**(code **)(*plVar12 + 0x28))(plVar12);
        psVar9 = (short *)plVar12[2];
        if ((uVar5 & 1) != 0) goto LAB_0148e824;
      }
      plVar12[2] = (long)(psVar9 + 1);
    }
    plVar12 = *(long **)this;
    uVar5 = plVar12[1];
    uVar2 = plVar12[2];
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      plVar12[2] = uVar5;
      plVar12[4] = plVar12[4] + ((long)(uVar2 - uVar5) >> 1) + -1;
      if ((char)plVar12[6] == '\0') {
        (**(code **)(*plVar12 + 0x28))();
      }
      uVar8 = 0x2f;
    }
    else {
      plVar12[2] = uVar2 - 2;
      uVar8 = 0x2f;
    }
    goto LAB_0148ea98;
  }
  if ((((uVar7 | 0x20) - 0x61 < 0x1a) || (uVar6 = (uint)uVar3, uVar6 == 0x5f)) || (uVar6 == 0x24)) {
    ConsumeIdentifier(this,uVar7);
    return;
  }
  if ((uVar6 == 0x2e) || (uVar6 - 0x30 < 10)) {
    ConsumeNumber(this,uVar7);
    return;
  }
  goto LAB_0148ea94;
  while (pbVar1 = (byte *)("use asm" + lVar13), lVar13 = lVar13 + 1, uVar7 == *pbVar1) {
LAB_0148e9bc:
    plVar12 = *(long **)this;
    puVar10 = (ushort *)plVar12[2];
    if (puVar10 < (ushort *)plVar12[3]) {
      uVar7 = (uint)*puVar10;
    }
    else {
      if ((char)plVar12[6] == '\0') {
        uVar5 = (**(code **)(*plVar12 + 0x28))(plVar12);
        puVar10 = (ushort *)plVar12[2];
        if ((uVar5 & 1) != 0) {
          uVar7 = (uint)*puVar10;
          goto LAB_0148e9d0;
        }
      }
      uVar7 = 0xffffffff;
    }
LAB_0148e9d0:
    plVar12[2] = (long)(puVar10 + 1);
    if (lVar13 == 7) {
      if (uVar7 == uVar3) {
        uVar8 = 0xffffd92f;
        goto LAB_0148ea98;
      }
      break;
    }
  }
LAB_0148ea94:
  uVar8 = 0xfffffffe;
LAB_0148ea98:
  *(undefined4 *)(this + 8) = uVar8;
  return;
}

