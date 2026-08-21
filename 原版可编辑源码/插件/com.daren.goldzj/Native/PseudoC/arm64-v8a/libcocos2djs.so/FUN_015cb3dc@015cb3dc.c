
void FUN_015cb3dc(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  Mutex *this;
  int iVar1;
  char *__s;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  char *local_50;
  size_t sStack_48;
  
  local_b8 = param_4;
  uStack_b0 = param_5;
  local_a8 = param_6;
  uStack_a0 = param_7;
  local_98 = param_8;
  __s = operator_new__(0x80,(nothrow_t *)&std::nothrow);
  if (__s == (char *)0x0) {
    plVar2 = (long *)v8::internal::V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    __s = operator_new__(0x80,(nothrow_t *)&std::nothrow);
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      v8::internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  puStack_80 = auStack_c0;
  ppuStack_88 = &local_90;
  uStack_78 = 0xffffff80ffffffd8;
  local_90 = (undefined1 *)register0x00000008;
  iVar1 = v8::internal::VSNPrintF(__s,0x80,"%s",&local_90);
  if (iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",&DAT_019ef596);
  }
  sStack_48 = strlen(__s);
  local_50 = __s;
  puVar3 = (undefined8 *)v8::internal::Factory::NewStringFromOneByte(param_1,&local_50,0);
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  lVar6 = *(long *)(param_1 + 0xb6d8);
  uVar4 = *param_2;
  uVar5 = *puVar3;
  this = (Mutex *)(lVar6 + 0x28);
  v8::base::Mutex::Lock(this);
  for (plVar2 = *(long **)(lVar6 + 0x10); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    (**(code **)(*(long *)plVar2[2] + 0x18))((long *)plVar2[2],0x12,uVar4,uVar5);
  }
  v8::base::Mutex::Unlock(this);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  return;
}

