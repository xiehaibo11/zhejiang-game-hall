
/* std::__ndk1::function<unsigned char* (unsigned long*)>::~function() */

void __thiscall
std::__ndk1::function<unsigned_char*(unsigned_long*)>::~function
          (function<unsigned_char*(unsigned_long*)> *this)

{
  function<unsigned_char*(unsigned_long*)> *pfVar1;
  
  pfVar1 = *(function<unsigned_char*(unsigned_long*)> **)(this + 0x20);
                    /* try { // try from 009b6584 to 00ab65d7 has its CatchHandler @ 009b6584
                       catch() { ... } // from try @ 009b6584 with catch @ 009b6584
                       catch() { ... } // from try @ 009b6774 with catch @ 009b6584 */
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x009b65a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<unsigned_char*(unsigned_long*)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009b6594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

