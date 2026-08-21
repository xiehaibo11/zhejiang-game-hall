
/* v8::internal::LowLevelLogger::LogWriteBytes(char const*, int) */

void __thiscall
v8::internal::LowLevelLogger::LogWriteBytes(LowLevelLogger *this,char *param_1,int param_2)

{
  fwrite(param_1,1,(long)param_2,*(FILE **)(this + 0x18));
  return;
}

