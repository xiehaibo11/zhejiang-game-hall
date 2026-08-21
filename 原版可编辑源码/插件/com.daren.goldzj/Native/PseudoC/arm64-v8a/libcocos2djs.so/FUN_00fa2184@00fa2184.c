
void FUN_00fa2184(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong local_8;
  
  uVar1 = *param_2;
  if ((*(byte *)(uVar1 + 0x12) >> 5 & 1) != 0) {
    local_8 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb);
    v8::internal::DependentCode::MarkCodeForDeoptimization
              ((DependentCode *)&local_8,*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),5);
    *(uint *)(uVar1 + 0xf) = *(uint *)(uVar1 + 0xf) & 0xdfffffff;
  }
  return;
}

