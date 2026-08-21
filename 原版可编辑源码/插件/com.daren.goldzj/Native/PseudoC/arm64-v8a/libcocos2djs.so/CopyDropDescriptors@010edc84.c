
/* v8::internal::Map::CopyDropDescriptors(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>) */

long * v8::internal::Map::CopyDropDescriptors(undefined8 param_1,ulong *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong local_18;
  
  uVar3 = *param_2;
  if (*(ushort *)(uVar3 + 7) < 0xaa) {
    iVar2 = 0;
  }
  else {
    iVar2 = (uint)*(byte *)(uVar3 + 3) - (uint)*(byte *)(uVar3 + 4);
  }
  plVar1 = (long *)RawCopy(param_1,param_2,(ulong)*(byte *)(uVar3 + 3) << 2,iVar2);
  uVar3 = *param_2;
  if (0xa9 < *(ushort *)(uVar3 + 7)) {
    *(undefined1 *)(*plVar1 + 5) = *(undefined1 *)(uVar3 + 5);
    uVar3 = *param_2;
  }
  if ((*(uint *)(uVar3 + 0xb) >> 0x19 & 1) == 0) {
    *(uint *)(uVar3 + 0xb) = *(uint *)(uVar3 + 0xb) | 0x2000000;
    local_18 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x1b);
    DependentCode::DeoptimizeDependentCodeGroup(&local_18,param_1,1);
  }
  return plVar1;
}

