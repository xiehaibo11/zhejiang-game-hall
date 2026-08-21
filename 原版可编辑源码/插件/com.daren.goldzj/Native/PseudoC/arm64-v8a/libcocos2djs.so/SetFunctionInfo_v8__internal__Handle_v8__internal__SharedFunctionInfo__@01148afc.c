
/* void 
   v8::internal::ParseInfo::SetFunctionInfo<v8::internal::Handle<v8::internal::SharedFunctionInfo>
   >(v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

void __thiscall
v8::internal::ParseInfo::SetFunctionInfo<v8::internal::Handle<v8::internal::SharedFunctionInfo>>
          (ParseInfo *this,long *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 8) & 0xfffffff7;
  if ((*(uint *)(*param_2 + 0x1b) & 0x40) != 0) {
    uVar1 = *(uint *)(this + 8) | 8;
  }
  *(uint *)(this + 8) = uVar1;
  this[0x30] = (ParseInfo)((byte)*(undefined4 *)(*param_2 + 0x1b) & 0x1f);
  this[0x31] = (ParseInfo)((byte)(*(uint *)(*param_2 + 0x1b) >> 7) & 7);
  uVar2 = uVar1 & 0xffffbfff;
  if ((*(uint *)(*param_2 + 0x1b) & 0x1000000) != 0) {
    uVar2 = uVar1 | 0x4000;
  }
  *(uint *)(this + 8) = uVar2;
  uVar1 = uVar2 & 0xfffffffe;
  if ((*(uint *)(*param_2 + 0x1b) & 0x10000000) != 0) {
    uVar1 = uVar2 | 1;
  }
  *(uint *)(this + 8) = uVar1;
  if ((*(uint *)(*param_2 + 0x1b) >> 0x1d & 1) == 0) {
    *(uint *)(this + 8) = uVar1 & 0xfbffffff;
    return;
  }
  uVar2 = uVar1 | 0x4000000;
  if ((*(uint *)(*param_2 + 0x1b) & 0x400) != 0) {
    uVar2 = uVar1 & 0xfbffffff;
  }
  *(uint *)(this + 8) = uVar2;
  return;
}

