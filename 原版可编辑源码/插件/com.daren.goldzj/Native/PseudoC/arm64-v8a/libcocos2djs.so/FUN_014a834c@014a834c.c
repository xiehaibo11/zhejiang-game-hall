
undefined8 FUN_014a834c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  undefined8 local_50;
  ulong *puStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  local_50 = param_1;
  puStack_48 = param_2;
  if (((((uVar8 & 1) != 0) &&
       (uVar9 = uVar8 & 0xffffffff00000000,
       *(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x423)) &&
      ((*(byte *)((uVar9 | 10) + (ulong)*(uint *)(uVar8 - 1)) & 0xf8) != 0x60)) &&
     ((*(uint *)((uVar9 | *(uint *)(uVar8 - 1)) + 0xb) >> 0x1b & 1) != 0)) {
    uVar7 = *(uint *)((uVar9 | *(uint *)(uVar8 - 1)) + 0xf);
    if (uVar7 != *(uint *)(param_3 + 0xb0)) {
      uVar9 = uVar9 | uVar7;
      do {
        uVar8 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 - 1);
        if ((*(ushort *)(uVar8 + 7) < 0x412) ||
           ((*(int *)(uVar9 + 7) != *(int *)(param_3 + 0x168) &&
            (*(int *)(uVar9 + 7) != *(int *)(param_3 + 1000))))) goto LAB_014a84a4;
        uVar7 = *(uint *)(uVar8 + 0xf);
        uVar9 = uVar9 & 0xffffffff00000000 | (ulong)uVar7;
      } while (uVar7 != *(uint *)(param_3 + 0xb0));
    }
    uVar8 = v8::internal::Isolate::IsAnyInitialArrayPrototype(param_3,param_2);
    if ((uVar8 & 1) == 0) {
      iVar3 = (int)param_1 + -5;
      FUN_014aae74(param_3,param_2,&local_50,1,iVar3);
      uVar7 = *(uint *)(*param_2 + 0xb);
      if ((uVar7 & 1) == 0) {
        dVar10 = (double)((int)uVar7 >> 1);
        if (iVar3 == 0) goto LAB_014a84fc;
LAB_014a8498:
        uVar8 = v8::internal::JSArray::HasReadOnlyLength(param_2);
        if ((uVar8 & 1) != 0) goto LAB_014a84a4;
        plVar5 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                           ((ulong)*(byte *)((*param_2 & 0xffffffff00000000 | 10) +
                                            (ulong)*(uint *)(*param_2 - 1)) & 0xf8));
        uVar7 = (**(code **)(*plVar5 + 0x90))(plVar5,param_2,&local_50,iVar3);
      }
      else {
        dVar10 = *(double *)((*param_2 & 0xffffffff00000000 | (ulong)uVar7) + 3);
        if (iVar3 != 0) goto LAB_014a8498;
LAB_014a84fc:
        uVar7 = (uint)dVar10;
      }
      puVar6 = (undefined8 *)v8::internal::Factory::NewNumberFromUint((Factory *)param_3,uVar7);
      uVar4 = *puVar6;
      goto joined_r0x014a84b4;
    }
  }
LAB_014a84a4:
  uVar4 = FUN_014ab0d8(param_3,&local_50);
joined_r0x014a84b4:
  if (param_3 != (Isolate *)0x0) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
  }
  return uVar4;
}

