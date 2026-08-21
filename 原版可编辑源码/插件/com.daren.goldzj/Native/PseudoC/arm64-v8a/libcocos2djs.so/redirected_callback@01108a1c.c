
/* v8::internal::CallHandlerInfo::redirected_callback() const */

void __thiscall v8::internal::CallHandlerInfo::redirected_callback(CallHandlerInfo *this)

{
  uint uVar1;
  undefined8 local_18;
  
  uVar1 = *(uint *)(*(ulong *)this + 3);
  if (uVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined8 *)((*(ulong *)this & 0xffffffff00000000 | (ulong)uVar1) + 3);
  }
  ExternalReference::Create(&local_18,6);
  return;
}

