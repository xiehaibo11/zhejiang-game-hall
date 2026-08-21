
undefined8 FUN_014cb390(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *local_50;
  undefined8 uStack_48;
  
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  v8::internal::Isolate::CountUsage(param_3,0x41);
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x411)) {
    uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_2 = *(ulong **)pIVar1;
      if (param_2 == *(ulong **)(param_3 + 0x95a8)) {
        param_2 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = param_2 + 1;
      *param_2 = uVar6;
      uVar6 = *param_2;
      goto joined_r0x014cb414;
    }
    param_2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
  }
  uVar6 = *param_2;
joined_r0x014cb414:
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x42)) {
    puVar4 = (undefined8 *)v8::internal::Factory::NumberToString((Factory *)param_3,param_2,1);
    uVar7 = *puVar4;
  }
  else {
    uStack_48 = __strlen_chk("Number.prototype.toLocaleString",0x20);
    local_50 = "Number.prototype.toLocaleString";
    lVar5 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar4 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x5b,lVar5,param_3 + 0x888,0);
    uVar7 = v8::internal::Isolate::Throw(param_3,*puVar4,0);
  }
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

