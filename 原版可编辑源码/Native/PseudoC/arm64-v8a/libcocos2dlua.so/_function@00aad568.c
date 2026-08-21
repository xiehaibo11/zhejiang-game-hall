
/* std::__ndk1::function<void (int)>::~function() */

void __thiscall std::__ndk1::function<void(int)>::~function(function<void(int)> *this)

{
  function<void(int)> *pfVar1;
  
  pfVar1 = *(function<void(int)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00aad590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(int)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00aad584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

