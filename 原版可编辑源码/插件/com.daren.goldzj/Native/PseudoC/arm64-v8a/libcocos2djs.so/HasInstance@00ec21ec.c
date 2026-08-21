
/* v8::FunctionTemplate::HasInstance(v8::Local<v8::Value>) */

uint __thiscall v8::FunctionTemplate::HasInstance(FunctionTemplate *this,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong local_28;
  
  uVar2 = *param_2;
  if (((uVar2 & 1) != 0) &&
     (0xa9 < *(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)))) {
    local_28 = *(ulong *)this;
    uVar2 = internal::FunctionTemplateInfo::IsTemplateFor
                      ((FunctionTemplateInfo *)&local_28,
                       *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1));
    if ((uVar2 & 1) != 0) {
      uVar1 = 1;
      goto LAB_00ec22b8;
    }
  }
  uVar2 = *param_2;
  if (((uVar2 & 1) == 0) ||
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0xab)) {
    uVar1 = 0;
  }
  else {
    local_28 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1);
    uVar2 = internal::Map::GetPrototypeChainRootMap
                      ((Map *)&local_28,(Isolate *)((ulong)*(uint *)(this + 4) << 0x20));
    local_28 = *(ulong *)this;
    uVar1 = internal::FunctionTemplateInfo::IsTemplateFor
                      ((FunctionTemplateInfo *)&local_28,
                       uVar2 & 0xffffffff00000000 |
                       (ulong)*(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xf))
                                       - 1));
  }
LAB_00ec22b8:
  return uVar1 & 1;
}

