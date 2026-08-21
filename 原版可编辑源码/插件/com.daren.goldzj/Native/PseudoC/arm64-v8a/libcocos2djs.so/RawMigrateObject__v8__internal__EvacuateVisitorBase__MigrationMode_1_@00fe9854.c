
/* void 
   v8::internal::EvacuateVisitorBase::RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)1>(v8::internal::EvacuateVisitorBase*,
   v8::internal::HeapObject, v8::internal::HeapObject, int, v8::internal::AllocationSpace) */

void v8::internal::EvacuateVisitorBase::
     RawMigrateObject<(v8::internal::EvacuateVisitorBase::MigrationMode)1>
               (long param_1,ulong param_2,long param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_58;
  
  puVar11 = (undefined4 *)(param_2 - 1);
  puVar12 = (undefined4 *)(param_3 + -1);
  if (param_5 == 2) {
    uVar1 = param_4 + 3;
    if (-1 < (int)param_4) {
      uVar1 = param_4;
    }
    if (6 < param_4 + 3) {
      uVar4 = (long)((ulong)uVar1 << 0x20) >> 0x22;
      if ((uint)((int)uVar1 >> 2) < 0x10) {
        puVar5 = puVar12;
        puVar6 = puVar11;
        if ((7 < (uint)((int)uVar1 >> 2)) &&
           ((puVar12 + uVar4 <= puVar11 || (puVar11 + uVar4 <= puVar12)))) {
          uVar7 = uVar4 & 0xfffffffffffffff8;
          puVar8 = (undefined8 *)(param_2 + 0xf);
          puVar9 = (undefined8 *)(param_3 + 0xf);
          uVar10 = uVar7;
          do {
            puVar2 = puVar9 + -1;
            uVar13 = puVar9[-2];
            uVar15 = puVar9[1];
            uVar14 = *puVar9;
            uVar10 = uVar10 - 8;
            puVar9 = puVar9 + 4;
            puVar8[-1] = *puVar2;
            puVar8[-2] = uVar13;
            puVar8[1] = uVar15;
            *puVar8 = uVar14;
            puVar8 = puVar8 + 4;
          } while (uVar10 != 0);
          bVar3 = uVar7 == uVar4;
          puVar5 = puVar12 + uVar7;
          uVar4 = uVar4 - uVar7;
          puVar6 = puVar11 + uVar7;
          if (bVar3) goto LAB_00fe99b8;
        }
        do {
          uVar4 = uVar4 - 1;
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar4 != 0);
      }
      else {
        MemCopy(puVar11,puVar12,uVar4 << 2);
      }
    }
LAB_00fe99b8:
    puVar9 = *(undefined8 **)(param_1 + 0x28);
    for (puVar8 = *(undefined8 **)(param_1 + 0x20); puVar8 != puVar9; puVar8 = puVar8 + 1) {
      (**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,2,param_3,param_2,param_4);
    }
  }
  else {
    uVar1 = param_4 + 3;
    if (-1 < (int)param_4) {
      uVar1 = param_4;
    }
    if (6 < param_4 + 3) {
      uVar4 = (long)((ulong)uVar1 << 0x20) >> 0x22;
      if ((uint)((int)uVar1 >> 2) < 0x10) {
        puVar5 = puVar12;
        puVar6 = puVar11;
        if ((7 < (uint)((int)uVar1 >> 2)) &&
           ((puVar12 + uVar4 <= puVar11 || (puVar11 + uVar4 <= puVar12)))) {
          uVar7 = uVar4 & 0xfffffffffffffff8;
          puVar8 = (undefined8 *)(param_2 + 0xf);
          puVar9 = (undefined8 *)(param_3 + 0xf);
          uVar10 = uVar7;
          do {
            puVar2 = puVar9 + -1;
            uVar13 = puVar9[-2];
            uVar15 = puVar9[1];
            uVar14 = *puVar9;
            uVar10 = uVar10 - 8;
            puVar9 = puVar9 + 4;
            puVar8[-1] = *puVar2;
            puVar8[-2] = uVar13;
            puVar8[1] = uVar15;
            *puVar8 = uVar14;
            puVar8 = puVar8 + 4;
          } while (uVar10 != 0);
          bVar3 = uVar7 == uVar4;
          puVar5 = puVar12 + uVar7;
          uVar4 = uVar4 - uVar7;
          puVar6 = puVar11 + uVar7;
          if (bVar3) goto joined_r0x00fe9a40;
        }
        do {
          uVar4 = uVar4 - 1;
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar4 != 0);
      }
      else {
        MemCopy(puVar11,puVar12,uVar4 << 2);
      }
    }
joined_r0x00fe9a40:
    if (param_5 != 3) {
      puVar9 = *(undefined8 **)(param_1 + 0x28);
      for (puVar8 = *(undefined8 **)(param_1 + 0x20); puVar8 != puVar9; puVar8 = puVar8 + 1) {
        (**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,param_5,param_3,param_2,param_4);
      }
      goto LAB_00fe9a0c;
    }
    local_58 = param_2;
    Code::Relocate((Code *)&local_58,(long)puVar11 - (long)puVar12);
    puVar9 = *(undefined8 **)(param_1 + 0x28);
    for (puVar8 = *(undefined8 **)(param_1 + 0x20); puVar8 != puVar9; puVar8 = puVar8 + 1) {
      (**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,3,param_3,param_2,param_4);
    }
  }
  uVar4 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1);
  BodyDescriptorApply<v8::internal::CallIterateBody,void,v8::internal::Map,v8::internal::HeapObject,int,v8::internal::RecordMigratedSlotVisitor*>
            (*(undefined2 *)(uVar4 + 7),uVar4,param_2,param_4,*(undefined8 *)(param_1 + 0x18));
LAB_00fe9a0c:
  *puVar12 = (int)puVar11;
  return;
}

