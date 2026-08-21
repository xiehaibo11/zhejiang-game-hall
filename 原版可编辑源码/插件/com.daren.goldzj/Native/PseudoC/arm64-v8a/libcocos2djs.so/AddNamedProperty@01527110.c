
/* v8::internal::ObjectDescriptor::AddNamedProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Name>, v8::internal::ClassBoilerplate::ValueKind, int) */

void __thiscall
v8::internal::ObjectDescriptor::AddNamedProperty
          (ObjectDescriptor *this,Factory *param_1,undefined8 *param_3,int param_4,ulong param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong local_a8;
  undefined8 *local_a0 [4];
  undefined8 *local_80;
  int iStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x10) < 1) && (*(int *)this + *(int *)(this + 4) < 0x3fd)) {
    **(ulong **)(this + 0x38) =
         -(param_5 >> 0x1f & 1) & 0xfffffffe00000000 | (param_5 & 0xffffffff) << 1;
    puVar9 = *(ulong **)(this + 0x18);
    puVar8 = *(undefined8 **)(this + 0x38);
    local_80 = (undefined8 *)*puVar9;
    if (*(short *)(*puVar9 + 5) != 0) {
      uVar2 = (uint)*(short *)(*puVar9 + 5);
      if ((int)uVar2 < 9) {
        if (0 < (int)uVar2) {
          uVar3 = 0;
          lVar6 = 0x1000000000;
          do {
            if (*(int *)((long)local_80 + (lVar6 >> 0x20) + -1) == (int)*param_3) goto LAB_01527230;
            uVar3 = uVar3 + 1;
            lVar6 = lVar6 + 0xc00000000;
          } while (uVar2 != uVar3);
        }
      }
      else {
        uVar2 = BinarySearch<(v8::internal::SearchMode)1,v8::internal::DescriptorArray>
                          (&local_80,*param_3,(ulong)uVar2,0);
        uVar3 = (ulong)uVar2;
LAB_01527230:
        if ((int)uVar3 != -1) {
          lVar6 = (long)(int)uVar3;
          uVar3 = *puVar9;
          uVar7 = lVar6 * 0xc00000000 + 0x1000000000 >> 0x20;
          uVar10 = (ulong)(*(uint *)(uVar3 + (uVar7 | 3)) >> 10) & 0x3ff;
          if (param_4 != 0) {
            uVar2 = *(uint *)(uVar7 + uVar3 + 7);
            local_a0[0] = (undefined8 *)0x0;
            if (((uVar2 & 1) == 0) ||
               (puVar4 = (undefined8 *)(uVar3 & 0xffffffff00000000 | (ulong)uVar2),
               *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)puVar4 + -1)) !=
               0x52)) {
              puVar4 = (undefined8 *)Factory::NewAccessorPair(param_1);
              Descriptor::AccessorConstant((Descriptor *)&local_80,param_3,puVar4,2);
              local_68 = local_68 & 0xfff801ff | (uint)(uVar10 << 9);
              local_a8 = *puVar9;
              uVar5 = *local_80;
              puVar9 = (ulong *)CONCAT44(uStack_6c,local_70);
              if (iStack_78 == 0) {
                if (puVar9 == (ulong *)0x0) goto LAB_01527410;
                uVar3 = *puVar9 | 2;
              }
              else {
                if (puVar9 == (ulong *)0x0) goto LAB_01527410;
                uVar3 = *puVar9;
              }
              DescriptorArray::Set((DescriptorArray *)&local_a8,lVar6,uVar5,uVar3);
              puVar4 = (undefined8 *)*puVar4;
            }
            local_a0[0] = puVar4;
            AccessorPair::set((AccessorPair *)local_a0,param_4 != 1,*puVar8);
            goto LAB_01527184;
          }
          Descriptor::DataConstant((Descriptor *)&local_80,param_3,puVar8,2);
          local_68 = local_68 & 0xfff801ff | (uint)(uVar10 << 9);
          local_a0[0] = (undefined8 *)*puVar9;
          uVar5 = *local_80;
          puVar9 = (ulong *)CONCAT44(uStack_6c,local_70);
          if (iStack_78 == 0) {
            if (puVar9 == (ulong *)0x0) goto LAB_01527410;
            uVar3 = *puVar9 | 2;
          }
          else {
            if (puVar9 == (ulong *)0x0) {
LAB_01527410:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","(location_) != nullptr",uVar5);
            }
            uVar3 = *puVar9;
          }
          DescriptorArray::Set((DescriptorArray *)local_a0,lVar6,uVar5,uVar3);
          goto LAB_01527184;
        }
      }
    }
    Descriptor::Descriptor((Descriptor *)&local_80);
    if (param_4 == 0) {
      Descriptor::DataConstant((Descriptor *)local_a0,param_3,puVar8,2);
    }
    else {
      puVar4 = (undefined8 *)Factory::NewAccessorPair(param_1);
      local_a0[0] = (undefined8 *)*puVar4;
      AccessorPair::set((AccessorPair *)local_a0,param_4 != 1,*puVar8);
      Descriptor::AccessorConstant((Descriptor *)local_a0,param_3,puVar4,2);
    }
    local_80 = local_a0[0];
    uStack_6c = (undefined4)local_a0._20_8_;
    local_68 = SUB84(local_a0._20_8_,4);
    local_a0[0] = (undefined8 *)*puVar9;
    DescriptorArray::Append((DescriptorArray *)local_a0,(Descriptor *)&local_80);
  }
  else {
    *(int *)(this + 8) = (int)param_5 + 6;
    FUN_01525d50(param_1,*(undefined8 *)(this + 0x20),param_3,param_5 & 0xffffffff,param_4);
  }
LAB_01527184:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

