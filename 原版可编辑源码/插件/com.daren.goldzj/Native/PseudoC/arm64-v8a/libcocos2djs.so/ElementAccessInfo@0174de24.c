
/* v8::internal::compiler::ElementAccessInfo::ElementAccessInfo(v8::internal::compiler::ElementAccessInfo
   const&) */

void __thiscall
v8::internal::compiler::ElementAccessInfo::ElementAccessInfo
          (ElementAccessInfo *this,ElementAccessInfo *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  Zone *pZVar4;
  undefined8 *puVar5;
  
  *this = *param_1;
  pZVar4 = *(Zone **)(param_1 + 0x20);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(Zone **)(this + 0x20) = pZVar4;
  uVar2 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  if (uVar2 != 0) {
    if ((ulong)((long)uVar2 >> 3) >> 0x1c != 0) goto LAB_0174df4c;
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
LAB_0174df4c:
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
  return;
}

