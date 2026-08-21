
/* v8::internal::PrototypeInfo::PrototypeInfoVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::PrototypeInfo::PrototypeInfoVerify(PrototypeInfo *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  TorqueGeneratedClassVerifiers::PrototypeInfoVerify(*(undefined8 *)this);
  uVar1 = *(uint *)(*(ulong *)this + 7);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) == 0xa7) {
    PrototypeUsers::Verify();
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","prototype_users().IsSmi()");
}

