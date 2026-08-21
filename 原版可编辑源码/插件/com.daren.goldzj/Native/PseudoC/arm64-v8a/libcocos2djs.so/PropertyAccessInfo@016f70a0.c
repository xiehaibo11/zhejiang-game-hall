
/* v8::internal::compiler::PropertyAccessInfo::PropertyAccessInfo(v8::internal::compiler::PropertyAccessInfo
   const&) */

void __thiscall
v8::internal::compiler::PropertyAccessInfo::PropertyAccessInfo
          (PropertyAccessInfo *this,PropertyAccessInfo *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  Zone *pZVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  pZVar4 = *(Zone **)(param_1 + 0x20);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(Zone **)(this + 0x20) = pZVar4;
  uVar2 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  if (uVar2 != 0) {
    if ((ulong)((long)uVar2 >> 3) >> 0x1c != 0) goto LAB_016f71e8;
    puVar3 = *(undefined8 **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar3) < uVar2) {
      puVar3 = (undefined8 *)Zone::NewExpand(pZVar4,uVar2);
    }
    else {
      *(ulong *)(pZVar4 + 0x10) = (long)puVar3 + uVar2;
    }
    *(undefined8 **)(this + 8) = puVar3;
    *(undefined8 **)(this + 0x10) = puVar3;
    *(undefined8 **)(this + 0x18) = puVar3 + ((long)uVar2 >> 3);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    for (puVar5 = *(undefined8 **)(param_1 + 8); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      *puVar3 = *puVar5;
      puVar3 = (undefined8 *)(*(long *)(this + 0x10) + 8);
      *(undefined8 **)(this + 0x10) = puVar3;
    }
  }
  pZVar4 = *(Zone **)(param_1 + 0x40);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(Zone **)(this + 0x40) = pZVar4;
  uVar2 = *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28);
  if (uVar2 != 0) {
    if ((ulong)((long)uVar2 >> 3) >> 0x1c != 0) {
LAB_016f71e8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar3 = *(undefined8 **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar3) < uVar2) {
      puVar3 = (undefined8 *)Zone::NewExpand(pZVar4,uVar2);
    }
    else {
      *(ulong *)(pZVar4 + 0x10) = (long)puVar3 + uVar2;
    }
    *(undefined8 **)(this + 0x28) = puVar3;
    *(undefined8 **)(this + 0x30) = puVar3;
    *(undefined8 **)(this + 0x38) = puVar3 + ((long)uVar2 >> 3);
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    for (puVar5 = *(undefined8 **)(param_1 + 0x28); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      *puVar3 = *puVar5;
      puVar3 = (undefined8 *)(*(long *)(this + 0x30) + 8);
      *(undefined8 **)(this + 0x30) = puVar3;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x78) = uVar6;
  *(undefined8 *)(this + 0x70) = uVar8;
  *(undefined8 *)(this + 0x68) = uVar7;
  *(undefined8 *)(this + 0x60) = uVar10;
  *(undefined8 *)(this + 0x58) = uVar9;
  *(undefined8 *)(this + 0x50) = uVar12;
  *(undefined8 *)(this + 0x48) = uVar11;
  return;
}

