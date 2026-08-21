
void FUN_012017d0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 != (void *)0x0) {
    if (-1 < *(int *)((long)pvVar2 + 0x70)) {
      v8::internal::trap_handler::ReleaseHandlerData(*(int *)((long)pvVar2 + 0x70));
    }
    pvVar1 = *(void **)((long)pvVar2 + 0x78);
    *(undefined8 *)((long)pvVar2 + 0x78) = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar2 + 0x20);
    *(undefined8 *)((long)pvVar2 + 0x20) = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    pvVar1 = *(void **)((long)pvVar2 + 0x10);
    *(undefined8 *)((long)pvVar2 + 0x10) = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    operator_delete(pvVar2);
    return;
  }
  return;
}

