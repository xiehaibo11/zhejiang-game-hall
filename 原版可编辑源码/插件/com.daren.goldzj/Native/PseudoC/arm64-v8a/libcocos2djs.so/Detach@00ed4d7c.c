
/* v8::internal::HandleScopeImplementer::Detach(unsigned long*) */

void v8::internal::HandleScopeImplementer::Detach(ulong *param_1)

{
  DeferredHandles *this;
  Isolate *this_00;
  ulong *in_x1;
  ulong **ppuVar1;
  undefined8 *in_x8;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  this = operator_new(0x38);
  this_00 = (Isolate *)*param_1;
  uVar2 = *(undefined8 *)(this_00 + 0x95a0);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(Isolate **)(this + 0x30) = this_00;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = uVar2;
  Isolate::LinkDeferredHandles(this_00,this);
  *in_x8 = this;
  uVar3 = param_1[3];
  while (uVar3 != 0) {
    ppuVar1 = (ulong **)(param_1[1] + uVar3 * 8 + -8);
    puVar4 = *ppuVar1;
    if (puVar4 + 0x3fe == in_x1) break;
    if (*(undefined8 **)(this + 8) == *(undefined8 **)(this + 0x10)) {
      std::__ndk1::vector<unsigned_long*,std::__ndk1::allocator<unsigned_long*>>::
      __push_back_slow_path<unsigned_long*const&>
                ((vector<unsigned_long*,std::__ndk1::allocator<unsigned_long*>> *)this,ppuVar1);
    }
    else {
      **(undefined8 **)(this + 8) = puVar4;
      *(long *)(this + 8) = *(long *)(this + 8) + 8;
    }
    uVar3 = param_1[3] - 1;
    param_1[3] = uVar3;
  }
  param_1[0xe] = 0;
  return;
}

