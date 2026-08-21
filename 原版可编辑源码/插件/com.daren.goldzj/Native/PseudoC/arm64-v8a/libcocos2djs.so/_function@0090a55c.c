
/* std::__ndk1::function<void (char const*, char const*, char const*)>::~function() */

void __thiscall
std::__ndk1::function<void(char_const*,char_const*,char_const*)>::~function
          (function<void(char_const*,char_const*,char_const*)> *this)

{
  function<void(char_const*,char_const*,char_const*)> *pfVar1;
  
  pfVar1 = *(function<void(char_const*,char_const*,char_const*)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x0090a584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(char_const*,char_const*,char_const*)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0090a578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

