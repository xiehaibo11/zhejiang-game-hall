
/* v8::internal::compiler::FunctionTemplateInfoRef::LookupHolderOfExpectedType(v8::internal::compiler::MapRef,
   v8::internal::compiler::SerializationPolicy) */

void v8::internal::compiler::FunctionTemplateInfoRef::LookupHolderOfExpectedType
               (undefined8 *param_1,ObjectRef *param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  CallOptimization aCStack_100 [40];
  undefined8 *local_d8;
  long lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined4 local_80;
  undefined3 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined1 uStack_6c;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_d8 = param_3;
  lStack_d0 = param_4;
  if (*(int *)(*(undefined8 **)param_2 + 1) != 2) {
    lVar4 = ObjectRef::data(param_2);
    if (*(int *)(lVar4 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar4 + 0x10) + 0x18) == 0x4e) {
                    /* WARNING: Could not recover jumptable at 0x0172c3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_0172c3d8 +
                (ulong)*(ushort *)(&DAT_01a5d668 + (ulong)*(uint *)(param_4 + 0x70) * 2) * 4))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsFunctionTemplateInfo()");
  }
  CallOptimization::CallOptimization
            (aCStack_100,**(undefined8 **)(param_2 + 8),**(undefined8 **)param_2);
  lVar5 = *(long *)*param_3;
  if ((*(ushort *)(lVar5 + 7) < 0xa9) ||
     (((*(byte *)(lVar5 + 9) >> 5 & 1) != 0 &&
      ((*(byte *)(*(long *)**(undefined8 **)param_2 + 0x2b) >> 6 & 1) == 0)))) {
    *(undefined4 *)param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    *(uint *)((long)param_1 + 0xc) = CONCAT31((undefined3)uStack_c4,local_c8._3_1_);
    *(undefined4 *)((long)param_1 + 9) = local_c8;
    param_1[3] = CONCAT26(uStack_6b,CONCAT15(uStack_6c,CONCAT41(iStack_70,uStack_74._3_1_)));
    *(ulong *)((long)param_1 + 0x11) = CONCAT44(uStack_74,local_78);
  }
  else {
    local_78 = 0;
    iStack_70 = local_80 << 8;
    uStack_6c = local_80._3_1_;
    uStack_6b = (undefined2)uStack_7c;
    uStack_69 = (undefined1)((uint3)uStack_7c >> 0x10);
    local_68 = 0;
    uStack_67 = local_90;
    uStack_60 = uStack_89;
    uStack_5f = uStack_88;
    uVar2 = CallOptimization::LookupHolderOfExpectedType(aCStack_100,(long *)*param_3,&local_78);
    if (local_78 == 2) {
      ObjectRef::ObjectRef((ObjectRef *)&local_c8,*(undefined8 *)(param_2 + 8),uVar2,0);
      puVar3 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_c8);
      if (*(int *)(puVar3 + 1) == 2) {
        uVar6 = *(ulong *)*puVar3;
        if ((uVar6 & 1) == 0) goto LAB_0172c8f8;
        uVar1 = *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1));
      }
      else {
        if (*(int *)(puVar3 + 1) == 0) goto LAB_0172c8f8;
        uVar1 = *(ushort *)(puVar3[2] + 0x18);
      }
      if (uVar1 < 0xaa) {
LAB_0172c8f8:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsJSObject()");
      }
      uStack_60 = (undefined1)uStack_c0;
      uStack_5f = (undefined7)((ulong)uStack_c0 >> 8);
      local_68 = (undefined1)local_c8;
      uStack_67 = (undefined7)(CONCAT44(uStack_c4,local_c8) >> 8);
      if ((char)iStack_70 == '\0') {
        iStack_70 = CONCAT31(iStack_70._1_3_,1);
      }
    }
    param_1[1] = CONCAT17(uStack_69,CONCAT25(uStack_6b,CONCAT14(uStack_6c,iStack_70)));
    *param_1 = CONCAT44(uStack_74,local_78);
    param_1[3] = CONCAT71(uStack_5f,uStack_60);
    param_1[2] = CONCAT71(uStack_67,local_68);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

