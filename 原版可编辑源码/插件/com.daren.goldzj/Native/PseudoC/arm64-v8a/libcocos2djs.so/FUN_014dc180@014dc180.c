
ulong FUN_014dc180(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  char *local_50;
  undefined8 uStack_48;
  
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if ((uVar7 & 1) != 0) {
    uVar9 = uVar7 & 0xffffffff00000000;
    if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x431) {
      puVar8 = (uint *)(uVar7 + 0xb);
      uVar7 = uVar9 | *puVar8;
      if (0xa8 < *(ushort *)((uVar9 | 7) + (ulong)*(uint *)(uVar7 - 1))) {
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = puVar2;
          if (puVar3 == puVar2) {
            puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar4 + 1;
          *puVar4 = uVar7;
        }
        else {
          puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
        }
        v8::internal::Heap::KeepDuringJob((Heap *)(param_3 + 0x8850),puVar4);
        uVar9 = *param_2 & 0xffffffff00000000;
        puVar8 = (uint *)(*param_2 + 0xb);
      }
      uVar9 = uVar9 | *puVar8;
      goto LAB_014dc2a8;
    }
  }
  uStack_48 = __strlen_chk("WeakRef.prototype.deref",0x18);
  local_50 = "WeakRef.prototype.deref";
  lVar5 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  puVar6 = (undefined8 *)
           v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar5,param_2,0);
  uVar9 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
LAB_014dc2a8:
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

