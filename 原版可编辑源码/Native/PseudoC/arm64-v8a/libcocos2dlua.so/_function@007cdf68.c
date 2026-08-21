
/* std::__ndk1::function<void ()>::~function() */

void __thiscall std::__ndk1::function<void()>::~function(function<void()> *this)

{
  function<void()> *pfVar1;
  
  pfVar1 = *(function<void()> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x007cdf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void()> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007cdf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

