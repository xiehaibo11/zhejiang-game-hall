
undefined8 FUN_014b861c(undefined8 param_1,long param_2,Factory *param_3)

{
  int iVar1;
  Factory *pFVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  char *local_98;
  undefined8 uStack_90;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pFVar2 = param_3 + 0x95a0;
  lVar3 = *(long *)pFVar2;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uStack_90 = __strlen_chk("Context",8);
  local_98 = "Context";
  uVar6 = v8::internal::Factory::InternalizeUtf8String(param_3,(Vector *)&local_98);
  uVar10 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x2ab);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pFVar2;
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_3);
    }
    *(ulong **)pFVar2 = puVar7 + 1;
    *puVar7 = uVar10;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
  }
  v8::internal::NewFunctionArgs::ForFunctionWithoutCode((NewFunctionArgs *)&local_98,uVar6,puVar7,0)
  ;
  uVar6 = v8::internal::Factory::NewFunction(param_3,(NewFunctionArgs *)&local_98);
  uVar10 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) -
                                                                     1)) + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pFVar2;
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_3);
    }
    *(ulong **)pFVar2 = puVar7 + 1;
    *puVar7 = uVar10;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
  }
  uVar8 = v8::internal::Factory::NewJSObject(param_3,puVar7,0);
  v8::internal::JSFunction::SetPrototype(uVar6,uVar8);
  puVar9 = (undefined8 *)v8::internal::Factory::NewJSObject(param_3,uVar6,1);
  param_2 = param_2 + -8;
  iVar1 = *(int *)(param_3 + 0xb81c) + 1;
  *(int *)(param_3 + 0xb81c) = iVar1;
  FUN_014b901c(param_3,puVar9,"debug",0xf0,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"error",0xf1,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"info",0xf2,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"log",0xf3,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,&DAT_0186871d,0xf4,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"dir",0xf5,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"dirXml",0xf6,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"table",0xf7,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"trace",0xf8,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"group",0xf9,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"groupCollapsed",0xfa,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"groupEnd",0xfb,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"clear",0xfc,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"count",0xfd,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"countReset",0xfe,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"assert",0xff,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"profile",0x100,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"profileEnd",0x101,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"timeLog",0x103,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"time",0x102,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"timeEnd",0x104,iVar1,param_2);
  FUN_014b901c(param_3,puVar9,"timeStamp",0x105,iVar1,param_2);
  uVar6 = *puVar9;
  *(long *)pFVar2 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

