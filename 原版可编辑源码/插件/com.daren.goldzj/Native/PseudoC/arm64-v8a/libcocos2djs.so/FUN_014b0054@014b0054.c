
ulong * FUN_014b0054(Isolate *param_1,ulong *param_2,char *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  char *local_40;
  size_t sStack_38;
  
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    uVar4 = uVar5 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x41) {
      return param_2;
    }
    if (((*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x411) && ((*(uint *)(uVar5 + 0xb) & 1) != 0))
       && (uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb),
          *(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x41)) {
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
        puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
        return puVar3;
      }
      puVar3 = *(ulong **)(param_1 + 0x95a0);
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar5;
      return puVar3;
    }
  }
  sStack_38 = strlen(param_3);
  local_40 = param_3;
  lVar1 = v8::internal::Factory::NewStringFromOneByte(param_1,&local_40,0);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_1,0x5b,lVar1,param_1 + 0x518,0);
    v8::internal::Isolate::Throw(param_1,*puVar2,0);
    return (ulong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

