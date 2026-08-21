
/* v8::internal::JSArray::ArraySetLength(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSArray>, v8::internal::PropertyDescriptor*,
   v8::Maybe<v8::internal::ShouldThrow>) */

undefined2
v8::internal::JSArray::ArraySetLength
          (Factory *param_1,ulong *param_2,byte *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  Factory *pFVar7;
  undefined8 uVar8;
  double dVar9;
  ulong uVar10;
  double dVar11;
  ulong local_98 [5];
  byte local_70 [8];
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_44;
  
  if (*(long *)(param_3 + 8) == 0) {
LAB_0110ed5c:
    uVar2 = JSReceiver::OrdinaryDefineOwnProperty(param_1,param_2,param_1 + 0x7b8,param_3,param_4);
  }
  else {
    local_44 = 0;
    uVar4 = AnythingToArrayLength(param_1,*(long *)(param_3 + 8),&local_44);
    if ((uVar4 & 1) != 0) {
      pFVar7 = param_1 + 0x7b8;
      local_70[0] = 0;
      uStack_60 = 0;
      local_68 = (ulong *)0x0;
      uStack_50 = 0;
      local_58 = 0;
      JSReceiver::GetOwnPropertyDescriptor(param_1,param_2,pFVar7,local_70);
      uVar1 = local_44;
      uVar4 = *local_68;
      if ((uVar4 & 1) == 0) {
        if ((int)uVar4 < 0) goto LAB_0110eed4;
        dVar9 = (double)(uVar4 >> 1 & 0x7fffffff);
      }
      else {
        if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42) {
LAB_0110eed4:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","old_len_desc.value()->ToArrayLength(&old_len)");
        }
        dVar9 = *(double *)(uVar4 + 3) + 4503599627370496.0;
        if (((ulong)dVar9 >> 0x20 != 0x43300000) ||
           (*(double *)(uVar4 + 3) != (double)((ulong)dVar9 & 0xffffffff))) goto LAB_0110eed4;
      }
      if (SUB84(dVar9,0) <= local_44) {
        uVar8 = Factory::NewNumberFromUint(param_1,local_44);
        *(undefined8 *)(param_3 + 8) = uVar8;
        goto LAB_0110ed5c;
      }
      if (((local_70[0] >> 4 & 1) == 0) || ((*param_3 >> 2 & 1) != 0)) {
        iVar3 = GetShouldThrow(param_1,param_4);
        if (iVar3 == 1) {
          return 1;
        }
        uVar8 = 0x96;
        param_2 = (ulong *)0x0;
      }
      else {
        if ((*param_3 & 0x30) == 0x20) {
          local_98[0] = *param_2;
          uVar4 = SetLengthWouldNormalize((JSArray *)local_98,local_44);
          if ((uVar4 & 1) != 0) {
            JSObject::NormalizeElements(param_2);
          }
          plVar5 = *(long **)(ElementsAccessor::elements_accessors_ +
                             ((ulong)*(byte *)((*param_2 & 0xffffffff00000000 | 10) +
                                              (ulong)*(uint *)(*param_2 - 1)) & 0xf8));
          (**(code **)(*plVar5 + 0x40))(plVar5,param_2,uVar1);
          local_98[2] = 0;
          local_98[1] = 0;
          local_98[4] = 0;
          local_98[3] = 0;
          local_98[0] = CONCAT71(local_98[0]._1_7_,0x20);
          JSReceiver::OrdinaryDefineOwnProperty(param_1,param_2,pFVar7,local_98,param_4);
        }
        else {
          local_98[0] = *param_2;
          uVar4 = SetLengthWouldNormalize((JSArray *)local_98,local_44);
          if ((uVar4 & 1) != 0) {
            JSObject::NormalizeElements(param_2);
          }
          plVar5 = *(long **)(ElementsAccessor::elements_accessors_ +
                             ((ulong)*(byte *)((*param_2 & 0xffffffff00000000 | 10) +
                                              (ulong)*(uint *)(*param_2 - 1)) & 0xf8));
          (**(code **)(*plVar5 + 0x40))(plVar5,param_2,uVar1);
        }
        uVar1 = *(uint *)(*param_2 + 0xb);
        if ((uVar1 & 1) == 0) {
          if ((int)uVar1 < 0) goto LAB_0110eee8;
          dVar9 = (double)(ulong)(uVar1 >> 1);
        }
        else {
          uVar10 = *param_2 & 0xffffffff00000000;
          uVar4 = uVar10 | uVar1;
          if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42) {
LAB_0110eee8:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","a->length().ToArrayLength(&actual_new_len)");
          }
          dVar11 = *(double *)(uVar4 + 3);
          dVar9 = dVar11 + 4503599627370496.0;
          if (((ulong)dVar9 >> 0x20 != 0x43300000) ||
             (dVar11 != (double)((ulong)dVar9 & 0xffffffff))) goto LAB_0110eee8;
        }
        if (SUB84(dVar9,0) == local_44) {
          return 0x101;
        }
        iVar3 = GetShouldThrow(param_1,param_4);
        if (iVar3 == 1) {
          return 1;
        }
        pFVar7 = (Factory *)Factory::NewNumberFromUint(param_1,SUB84(dVar9,0) - 1);
        uVar8 = 0xa3;
      }
      puVar6 = (undefined8 *)Factory::NewTypeError(param_1,uVar8,pFVar7,param_2,0);
      Isolate::Throw((Isolate *)param_1,*puVar6,0);
    }
    uVar2 = 0;
  }
  return uVar2;
}

