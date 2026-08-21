
/* v8::internal::GlobalHandles::CopyTracedGlobal(unsigned long const* const*, unsigned long**) */

void v8::internal::GlobalHandles::CopyTracedGlobal(ulong **param_1,ulong **param_2)

{
  ulong *puVar1;
  GlobalHandles *pGVar2;
  ulong local_28;
  
  puVar1 = *param_1;
  if (puVar1[3] == 0) {
    pGVar2 = (GlobalHandles *)puVar1[(ulong)*(byte *)((long)puVar1 + 10) * -4 + 0x401];
    puVar1 = (ulong *)CreateTraced(pGVar2,*puVar1,param_2,*(byte *)((long)puVar1 + 0xb) >> 4 & 1);
    *param_2 = puVar1;
    if (FLAG_verify_heap != '\0') {
      local_28 = *puVar1;
      Object::ObjectVerify((Object *)&local_28,*(Isolate **)pGVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!node->HasFinalizationCallback()");
}

