
/* v8::internal::DescriptorArray::CopyFrom(v8::internal::InternalIndex,
   v8::internal::DescriptorArray) */

void __thiscall
v8::internal::DescriptorArray::CopyFrom(DescriptorArray *this,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_2 * 0xc00000000 + 0x1000000000 >> 0x20;
  lVar1 = uVar2 + param_3;
  Set(this,param_2,param_3 & 0xffffffff00000000 | (ulong)*(uint *)(lVar1 + -1),
      param_3 & 0xffffffff00000000 | (ulong)*(uint *)(lVar1 + 7),
      *(int *)((uVar2 | 3) + param_3) >> 1);
  return;
}

