
/* v8::debug::Script::GetSourceLocation(int) const */

undefined1  [16] __thiscall v8::debug::Script::GetSourceLocation(Script *this,int param_1)

{
  undefined1 auVar1 [16];
  ulong local_20 [2];
  
  local_20[0] = 0xffffffffffffffff;
  local_20[1] = 0xffffffffffffffff;
  internal::Script::GetPositionInfo(this,param_1,local_20,1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20[0];
  return auVar1;
}

