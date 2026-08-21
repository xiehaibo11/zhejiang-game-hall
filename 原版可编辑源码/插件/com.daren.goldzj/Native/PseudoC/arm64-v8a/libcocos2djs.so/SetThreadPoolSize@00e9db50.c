
/* v8::platform::DefaultPlatform::SetThreadPoolSize(int) */

void __thiscall v8::platform::DefaultPlatform::SetThreadPoolSize(DefaultPlatform *this,int param_1)

{
  int iVar1;
  
  base::Mutex::Lock((Mutex *)(this + 8));
  if (param_1 < 1) {
    iVar1 = base::SysInfo::NumberOfProcessors();
    param_1 = iVar1 + -1;
  }
  if (7 < param_1) {
    param_1 = 8;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  *(int *)(this + 0x30) = param_1;
  base::Mutex::Unlock((Mutex *)(this + 8));
  return;
}

