
/* std::__ndk1::function<bool (cocos2d::network::HttpRequest*)>::~function() */

void __thiscall
std::__ndk1::function<bool(cocos2d::network::HttpRequest*)>::~function
          (function<bool(cocos2d::network::HttpRequest*)> *this)

{
  function<bool(cocos2d::network::HttpRequest*)> *pfVar1;
  
  pfVar1 = *(function<bool(cocos2d::network::HttpRequest*)> **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00e9a2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<bool(cocos2d::network::HttpRequest*)> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e9a2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

