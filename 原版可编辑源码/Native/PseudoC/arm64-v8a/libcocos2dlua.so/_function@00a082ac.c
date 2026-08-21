
/* std::__ndk1::function<void (int, int, int, universe::network::OStream*, unsigned
   int)>::~function() */

void __thiscall
std::__ndk1::function<void(int,int,int,universe::network::OStream*,unsigned_int)>::~function
          (function<void(int,int,int,universe::network::OStream*,unsigned_int)> *this)

{
  function<void(int,int,int,universe::network::OStream*,unsigned_int)> *pfVar1;
  
  pfVar1 = *(function<void(int,int,int,universe::network::OStream*,unsigned_int)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00a082d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(int,int,int,universe::network::OStream*,unsigned_int)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a082c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

