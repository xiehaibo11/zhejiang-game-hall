
/* v8::internal::ICInfo::ICInfo(v8::internal::ICInfo const&) */

void __thiscall v8::internal::ICInfo::ICInfo(ICInfo *this,ICInfo *param_1)

{
  undefined2 uVar1;
  void *pvVar2;
  ICInfo *pIVar3;
  ICInfo *pIVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar7 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar8;
    *(undefined8 *)this = uVar7;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar5) goto LAB_010255dc;
    pvVar2 = *(void **)(param_1 + 0x10);
    if (uVar5 < 0x17) {
      pIVar3 = this + 1;
      *this = SUB41((int)uVar5 << 1,0);
      if (uVar5 != 0) goto LAB_01025484;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pIVar3 = operator_new(uVar6);
      *(ulong *)(this + 8) = uVar5;
      *(ICInfo **)(this + 0x10) = pIVar3;
      *(ulong *)this = uVar6 | 1;
LAB_01025484:
      memcpy(pIVar3,pvVar2,uVar5);
    }
    pIVar3[uVar5] = (ICInfo)0x0;
  }
  uVar1 = *(undefined2 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  pIVar3 = this + 0x40;
  *(undefined8 *)pIVar3 = 0;
  *(undefined2 *)(this + 0x38) = uVar1;
  *(undefined8 *)(this + 0x30) = uVar8;
  *(undefined8 *)(this + 0x28) = uVar7;
  *(undefined8 *)(this + 0x20) = uVar10;
  *(undefined8 *)(this + 0x18) = uVar9;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  if (((byte)param_1[0x40] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(this + 0x48) = uVar8;
    *(undefined8 *)pIVar3 = uVar7;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x48);
    if (0xffffffffffffffef < uVar5) goto LAB_010255dc;
    pvVar2 = *(void **)(param_1 + 0x50);
    if (uVar5 < 0x17) {
      pIVar4 = this + 0x41;
      *pIVar3 = SUB41((int)uVar5 << 1,0);
      if (uVar5 != 0) goto LAB_01025524;
    }
    else {
      uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pIVar4 = operator_new(uVar6);
      *(ulong *)(this + 0x48) = uVar5;
      *(ICInfo **)(this + 0x50) = pIVar4;
      *(ulong *)(this + 0x40) = uVar6 | 1;
LAB_01025524:
      memcpy(pIVar4,pvVar2,uVar5);
    }
    pIVar4[uVar5] = (ICInfo)0x0;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  pIVar3 = this + 0x68;
  *(undefined8 *)pIVar3 = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x60) = uVar8;
  *(undefined8 *)(this + 0x58) = uVar7;
  if (((byte)param_1[0x68] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(this + 0x70) = uVar8;
    *(undefined8 *)pIVar3 = uVar7;
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0x70);
  if (0xffffffffffffffef < uVar5) {
LAB_010255dc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar2 = *(void **)(param_1 + 0x78);
  if (uVar5 < 0x17) {
    pIVar4 = this + 0x69;
    *pIVar3 = SUB41((int)uVar5 << 1,0);
    if (uVar5 == 0) goto LAB_010255c4;
  }
  else {
    uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pIVar4 = operator_new(uVar6);
    *(ulong *)(this + 0x70) = uVar5;
    *(ICInfo **)(this + 0x78) = pIVar4;
    *(ulong *)(this + 0x68) = uVar6 | 1;
  }
  memcpy(pIVar4,pvVar2,uVar5);
LAB_010255c4:
  pIVar4[uVar5] = (ICInfo)0x0;
  return;
}

