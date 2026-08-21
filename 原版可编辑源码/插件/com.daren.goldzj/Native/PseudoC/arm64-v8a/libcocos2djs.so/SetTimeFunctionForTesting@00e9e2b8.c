
/* v8::platform::DefaultPlatform::SetTimeFunctionForTesting(double (*)()) */

void __thiscall
v8::platform::DefaultPlatform::SetTimeFunctionForTesting
          (DefaultPlatform *this,_func_double *param_1)

{
  base::Mutex::Lock((Mutex *)(this + 8));
  *(_func_double **)(this + 0x70) = param_1;
  base::Mutex::Unlock((Mutex *)(this + 8));
  return;
}

