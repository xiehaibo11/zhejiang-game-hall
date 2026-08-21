
ulong FUN_014ad9e8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  char *local_60;
  undefined8 uStack_58;
  
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if ((((uVar7 & 1) == 0) ||
      (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x424)) ||
     ((*(uint *)(uVar7 + 0x1b) >> 4 & 1) == 0)) {
    uStack_58 = __strlen_chk("get SharedArrayBuffer.prototype.byteLength",0x2b);
    local_60 = "get SharedArrayBuffer.prototype.byteLength";
    lVar4 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar5 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar4,param_2,0);
    uVar7 = v8::internal::Isolate::Throw(param_3,*puVar5,0);
  }
  else {
    uVar7 = *(ulong *)(uVar7 + 0xb);
    if (uVar7 >> 0x1e == 0) {
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = puVar2;
        if (puVar3 == puVar2) {
          puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar7 << 1;
      }
      else {
        puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7 << 1);
      }
    }
    else {
      puVar6 = (ulong *)v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                  ((Factory *)param_3);
      *(double *)(*puVar6 + 3) = (double)uVar7;
    }
    uVar7 = *puVar6;
  }
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

