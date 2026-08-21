
/* v8::platform::DefaultPlatform::MonotonicallyIncreasingTime() */

undefined1  [16] __thiscall
v8::platform::DefaultPlatform::MonotonicallyIncreasingTime(DefaultPlatform *this)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (*(code **)(this + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e9e880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(this + 0x70))();
    return auVar2;
  }
  lVar1 = base::TimeTicks::HighResolutionNow();
  auVar2._0_8_ = (double)lVar1 / 1000000.0;
  auVar2._8_8_ = 0;
  return auVar2;
}

