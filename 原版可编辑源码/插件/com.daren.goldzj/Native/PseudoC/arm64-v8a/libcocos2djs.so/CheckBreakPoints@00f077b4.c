
/* v8::internal::Debug::CheckBreakPoints(v8::internal::Handle<v8::internal::DebugInfo>,
   v8::internal::BreakLocation*, bool*) */

undefined8 __thiscall
v8::internal::Debug::CheckBreakPoints
          (Debug *this,undefined8 param_2,BreakLocation *param_3,byte *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (this[0xd] == (Debug)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = BreakLocation::HasBreakPoint(param_3,*(undefined8 *)(this + 0x88),param_2);
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = bVar1 & 1;
  }
  if ((bVar1 & 1) != 0) {
    uVar2 = GetHitBreakPoints(this,param_2,*(undefined4 *)(param_3 + 0x10));
    return uVar2;
  }
  return 0;
}

