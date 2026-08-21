
/* cocos2d::EventController::EventController(cocos2d::EventController::ControllerEventType,
   cocos2d::Controller*, bool) */

void __thiscall
cocos2d::EventController::EventController
          (EventController *this,undefined4 param_2,undefined8 param_3,byte param_4)

{
                    /* catch() { ... } // from try @ 00f9c91c with catch @ 00f9c9b4 */
  Event::Event((Event *)this,5);
  *(undefined4 *)(this + 0x38) = param_2;
  *(undefined8 *)(this + 0x40) = param_3;
                    /* catch() { ... } // from try @ 00f9c904 with catch @ 00f9c9d4 */
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__Event_01722de8;
  this[0x4c] = (EventController)(param_4 & 1);
  return;
}

