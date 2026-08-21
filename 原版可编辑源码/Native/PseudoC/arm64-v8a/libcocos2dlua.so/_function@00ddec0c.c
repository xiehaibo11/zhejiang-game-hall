
/* std::__ndk1::function<void (cocos2d::Ref*,
   cocos2d::experimental::ui::VideoPlayer::EventType)>::~function() */

void __thiscall
std::__ndk1::function<void(cocos2d::Ref*,cocos2d::experimental::ui::VideoPlayer::EventType)>::
~function(function<void(cocos2d::Ref*,cocos2d::experimental::ui::VideoPlayer::EventType)> *this)

{
  function<void(cocos2d::Ref*,cocos2d::experimental::ui::VideoPlayer::EventType)> *pfVar1;
  
                    /* catch() { ... } // from try @ 00dde7f4 with catch @ 00ddec10 */
  pfVar1 = *(function<void(cocos2d::Ref*,cocos2d::experimental::ui::VideoPlayer::EventType)> **)
            (this + 0x20);
                    /* catch() { ... } // from try @ 00dde8a4 with catch @ 00ddec14 */
                    /* catch() { ... } // from try @ 00dde734 with catch @ 00ddec18 */
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00ddec34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
                    /* catch() { ... } // from try @ 00dde2ac with catch @ 00ddec1c */
  if (pfVar1 != (function<void(cocos2d::Ref*,cocos2d::experimental::ui::VideoPlayer::EventType)> *)
                0x0) {
                    /* catch() { ... } // from try @ 00dde2cc with catch @ 00ddec20 */
                    /* catch() { ... } // from try @ 00dde000 with catch @ 00ddec24 */
                    /* WARNING: Could not recover jumptable at 0x00ddec28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00ddd46c with catch @ 00ddec28 */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
                    /* catch() { ... } // from try @ 00ddd480 with catch @ 00ddec38 */
  return;
}

