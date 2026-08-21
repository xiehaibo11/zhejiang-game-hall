
/* std::__ndk1::function<bool (cocos2d::network::HttpResponse*)>::~function() */

void __thiscall
std::__ndk1::function<bool(cocos2d::network::HttpResponse*)>::~function
          (function<bool(cocos2d::network::HttpResponse*)> *this)

{
  function<bool(cocos2d::network::HttpResponse*)> *pfVar1;
  
  pfVar1 = *(function<bool(cocos2d::network::HttpResponse*)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00e9a28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<bool(cocos2d::network::HttpResponse*)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e9a280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

