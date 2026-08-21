
/* v8::internal::StackFrameBase::GetEvalOrigin() */

long __thiscall v8::internal::StackFrameBase::GetEvalOrigin(StackFrameBase *this)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = (**(code **)(*(long *)this + 0xc0))();
  if (((uVar2 & 1) == 0) || (uVar2 = (**(code **)(*(long *)this + 0x98))(this), (uVar2 & 1) == 0)) {
    lVar4 = *(long *)(this + 8) + 0xa0;
  }
  else {
    uVar1 = *(undefined8 *)(this + 8);
    uVar3 = (**(code **)(*(long *)this + 200))(this);
    lVar4 = FUN_00f5a9f4(uVar1,uVar3);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  return lVar4;
}

