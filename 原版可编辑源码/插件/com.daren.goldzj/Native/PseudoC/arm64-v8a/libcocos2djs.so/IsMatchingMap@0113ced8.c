
/* v8::internal::TransitionsAccessor::IsMatchingMap(v8::internal::Map, v8::internal::Name,
   v8::internal::PropertyKind, v8::internal::PropertyAttributes) */

bool v8::internal::TransitionsAccessor::IsMatchingMap
               (ulong param_1,int param_2,uint param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 0x17);
  uVar2 = (long)(int)((*(uint *)(param_1 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 + 0x1000000000 >>
          0x20;
  if (*(int *)(uVar1 + uVar2 + -1) == param_2) {
    return (*(uint *)((uVar2 | 3) + uVar1) >> 1 & 0x39) == (param_3 | param_4 << 3);
  }
  return false;
}

