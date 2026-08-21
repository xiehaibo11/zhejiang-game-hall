
/* v8::internal::Script::GetColumnNumber(int) const */

undefined4 __thiscall v8::internal::Script::GetColumnNumber(Script *this,int param_1)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0xffffffffffffffff;
  uStack_18 = 0xffffffffffffffff;
  GetPositionInfo(this,param_1,&local_20,1);
  return local_20._4_4_;
}

