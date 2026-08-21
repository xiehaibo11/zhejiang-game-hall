
void FUN_01212984(long *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[4];
  for (puVar2 = (undefined8 *)param_1[3]; puVar2 != puVar3; puVar2 = puVar2 + 2) {
    std::__ndk1::mutex::unlock((mutex *)puVar2[1]);
    std::__ndk1::condition_variable::notify_all((condition_variable *)*puVar2);
  }
  puVar3 = (undefined8 *)param_1[1];
  for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    std::__ndk1::__assoc_sub_state::__make_ready((__assoc_sub_state *)*puVar2);
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar2);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  param_1[1] = (long)pvVar1;
  operator_delete(pvVar1);
  return;
}

