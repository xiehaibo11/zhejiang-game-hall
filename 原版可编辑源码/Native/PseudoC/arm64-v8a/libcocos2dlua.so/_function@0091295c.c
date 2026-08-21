
/* std::__ndk1::function<void (cocos2d::network::HttpClient*,
   cocos2d::network::HttpResponse*)>::~function() */

void __thiscall
std::__ndk1::function<void(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*)>::
~function(function<void(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*)> *this)

{
  function<void(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*)> *pfVar1;
  
                    /* try { // try from 0091295c to 00a12973 has its CatchHandler @ 00912b70 */
  pfVar1 = *(function<void(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*)> **)
            (this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00912984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(cocos2d::network::HttpClient*,cocos2d::network::HttpResponse*)> *)0x0
     ) {
                    /* WARNING: Could not recover jumptable at 0x00912978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
                    /* try { // try from 00912988 to 00a1299b has its CatchHandler @ 00912af0 */
  return;
}

