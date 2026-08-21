
undefined8 FUN_014a8728(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  Isolate *pIVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  undefined8 local_b8;
  ulong *puStack_b0;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_9c;
  Isolate *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong *puStack_78;
  undefined8 local_70;
  ulong *puStack_68;
  ulong local_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  local_b8 = param_1;
  puStack_b0 = param_2;
  if (((((uVar8 & 1) != 0) &&
       (uVar9 = uVar8 & 0xffffffff00000000,
       *(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x423)) &&
      ((*(byte *)((uVar9 | 10) + (ulong)*(uint *)(uVar8 - 1)) & 0xf8) != 0x60)) &&
     ((*(uint *)((uVar9 | *(uint *)(uVar8 - 1)) + 0xb) >> 0x1b & 1) != 0)) {
    uVar3 = *(uint *)(uVar8 + 0xb);
    if ((uVar3 & 1) == 0) {
      dVar12 = (double)((int)uVar3 >> 1);
    }
    else {
      dVar12 = *(double *)((uVar9 | uVar3) + 3);
    }
    if ((int)dVar12 == 0) {
      uVar4 = *(undefined8 *)(param_3 + 0xa0);
      goto LAB_014a87e8;
    }
    uVar8 = v8::internal::JSArray::HasReadOnlyLength(param_2);
    if ((uVar8 & 1) == 0) {
      uVar9 = *param_2;
      uVar8 = uVar9 & 0xffffffff00000000;
      uVar3 = *(uint *)((uVar8 | *(uint *)(uVar9 - 1)) + 0xf);
      if (uVar3 != *(uint *)(param_3 + 0xb0)) {
        uVar11 = uVar8 | uVar3;
        do {
          uVar10 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 - 1);
          if ((*(ushort *)(uVar10 + 7) < 0x412) ||
             ((*(int *)(uVar11 + 7) != *(int *)(param_3 + 0x168) &&
              (*(int *)(uVar11 + 7) != *(int *)(param_3 + 1000))))) {
            uVar8 = (ulong)((int)dVar12 - 1);
            local_a8 = 3;
            uStack_88 = 0;
            local_80 = 0;
            local_70 = 0;
            local_9c = 0xc000000000;
            uStack_58 = 0xffffffffffffffff;
            local_90 = param_3;
            puStack_78 = param_2;
            puStack_68 = param_2;
            local_60 = uVar8;
            v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_a8);
            if (local_a4 == 4) {
              pIVar7 = local_90 + 0xa0;
            }
            else {
              pIVar7 = (Isolate *)
                       v8::internal::Object::GetProperty((LookupIterator *)&local_a8,false);
              if (pIVar7 == (Isolate *)0x0) {
                uVar4 = *(undefined8 *)(param_3 + 0x180);
                goto LAB_014a87e8;
              }
            }
            v8::internal::JSArray::SetLength(param_2,uVar8);
            uVar4 = *(undefined8 *)pIVar7;
            goto joined_r0x014a8968;
          }
          uVar3 = *(uint *)(uVar10 + 0xf);
          uVar11 = uVar11 & 0xffffffff00000000 | (ulong)uVar3;
        } while (uVar3 != *(uint *)(param_3 + 0xb0));
      }
      plVar5 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                         ((ulong)*(byte *)((uVar8 | 10) + (ulong)*(uint *)(uVar9 - 1)) & 0xf8));
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0xa0))(plVar5,param_2);
      uVar4 = *puVar6;
joined_r0x014a8968:
      if (param_3 == (Isolate *)0x0) {
        return uVar4;
      }
      goto LAB_014a87e8;
    }
  }
  uVar4 = FUN_014ab3d8(param_3,&local_b8);
LAB_014a87e8:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar4;
}

