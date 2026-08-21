
/* v8::Context::GetDataFromSnapshotOnce(unsigned long) */

void __thiscall v8::Context::GetDataFromSnapshotOnce(Context *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this & 0xffffffff00000000;
  FUN_00ec1864(uVar1,uVar1 | *(uint *)(*(ulong *)this + 0x27f),param_1);
  return;
}

