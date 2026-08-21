
/* cocos2d::EventController::EventController(cocos2d::EventController::ControllerEventType,
   cocos2d::Controller*, int) */

void __thiscall
cocos2d::EventController::EventController
          (EventController *this,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
                    /* try { // try from 00f9c940 to 0109c9ef has its CatchHandler @ 00f9c8d4 */
                    /* catch() { ... } // from try @ 00f9c93c with catch @ 00f9c954 */
  Event::Event((Event *)this,5);
  *(undefined4 *)(this + 0x38) = param_2;
  *(undefined8 *)(this + 0x40) = param_3;
  *(undefined4 *)(this + 0x48) = param_4;
  *(undefined ***)this = &PTR__Event_01722de8;
  this[0x4c] = (EventController)0x1;
                    /* catch() { ... } // from try @ 00f9c92c with catch @ 00f9c994 */
  return;
}

