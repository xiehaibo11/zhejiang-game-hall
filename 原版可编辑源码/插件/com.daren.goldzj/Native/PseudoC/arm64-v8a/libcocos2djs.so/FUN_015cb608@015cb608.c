
void FUN_015cb608(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  *param_1 = &PTR_FUN_01cc9730;
  pvVar1 = (void *)param_1[1];
  if (pvVar1 == *(void **)(lVar2 + 0x10)) {
    *(undefined8 *)(lVar2 + 0x10) = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    *(undefined8 *)(lVar2 + 0x18) = 0;
  }
  return;
}

