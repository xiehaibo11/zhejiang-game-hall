
/* v8::internal::Script::GetLineNumber(int) const */

ulong __thiscall v8::internal::Script::GetLineNumber(Script *this,int param_1)

{
  ulong local_20 [2];
  
  local_20[0] = 0xffffffffffffffff;
  local_20[1] = 0xffffffffffffffff;
  GetPositionInfo(this,param_1,local_20,1);
  return local_20[0] & 0xffffffff;
}

