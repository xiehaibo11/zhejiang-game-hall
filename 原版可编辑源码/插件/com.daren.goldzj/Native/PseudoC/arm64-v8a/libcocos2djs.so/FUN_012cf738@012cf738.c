
void FUN_012cf738(Zone *param_1,
                 vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
                 *param_2,Hints *param_3,Hints *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_3;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0x30) {
      puVar1 = (undefined8 *)v8::internal::Zone::NewExpand(param_1,0x30);
    }
    else {
      *(undefined8 **)(param_1 + 0x10) = puVar1 + 6;
    }
    puVar1[4] = 0;
    puVar1[5] = param_1;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined8 **)param_3 = puVar1;
  }
  if (*(undefined8 **)(param_2 + 8) == *(undefined8 **)(param_2 + 0x10)) {
    std::__ndk1::
    vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
    ::__push_back_slow_path<v8::internal::compiler::Hints_const&>(param_2,param_3);
    puVar1 = *(undefined8 **)param_4;
  }
  else {
    **(undefined8 **)(param_2 + 8) = puVar1;
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 8;
    puVar1 = *(undefined8 **)param_4;
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < 0x30) {
      puVar1 = (undefined8 *)v8::internal::Zone::NewExpand(param_1,0x30);
    }
    else {
      *(undefined8 **)(param_1 + 0x10) = puVar1 + 6;
    }
    puVar1[4] = 0;
    puVar1[5] = param_1;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined8 **)param_4 = puVar1;
  }
  if (*(undefined8 **)(param_2 + 8) != *(undefined8 **)(param_2 + 0x10)) {
    **(undefined8 **)(param_2 + 8) = puVar1;
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 8;
    return;
  }
  std::__ndk1::
  vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>::
  __push_back_slow_path<v8::internal::compiler::Hints_const&>(param_2,param_4);
  return;
}

