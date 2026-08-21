
void FUN_00fae4e0(long param_1)

{
  v8::internal::Heap::IterateStrongRoots(*(Heap **)(param_1 + 0x10),param_1 + 8,0);
  FUN_00fdac6c(param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xe8));
  FUN_00fdad80(param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0));
  FUN_00fdad80(param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf8));
  FUN_00fdad80(param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x100));
  return;
}

