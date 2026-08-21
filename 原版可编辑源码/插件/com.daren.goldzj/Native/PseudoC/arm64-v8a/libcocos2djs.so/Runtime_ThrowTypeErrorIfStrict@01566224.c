
/* v8::internal::Runtime_ThrowTypeErrorIfStrict(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ThrowTypeErrorIfStrict(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  Isolate *pIVar6;
  Isolate *pIVar7;
  undefined8 uVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_01566360(param_1,param_2,param_3);
    return uVar4;
  }
  iVar2 = GetShouldThrow(param_3,0);
  if (iVar2 == 1) {
    uVar8 = *(undefined8 *)(param_3 + 0xa0);
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    if ((*param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsSmi()");
    }
    pIVar7 = param_3 + 0xa0;
    pIVar5 = pIVar7;
    pIVar6 = pIVar7;
    if (((1 < param_1) && (pIVar5 = (Isolate *)(param_2 + -1), param_1 != 2)) &&
       (pIVar6 = (Isolate *)(param_2 + -2), 3 < param_1)) {
      pIVar7 = (Isolate *)(param_2 + -3);
    }
    puVar3 = (undefined8 *)
             Factory::NewTypeError((Factory *)param_3,(int)*param_2 >> 1,pIVar5,pIVar6,pIVar7);
    uVar8 = Isolate::Throw(param_3,*puVar3,0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  return uVar8;
}

