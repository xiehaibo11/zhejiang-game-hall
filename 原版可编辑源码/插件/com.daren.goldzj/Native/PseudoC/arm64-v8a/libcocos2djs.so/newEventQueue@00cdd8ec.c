
/* spine::EventQueue::newEventQueue(spine::AnimationState&, spine::Pool<spine::TrackEntry>&) */

void spine::EventQueue::newEventQueue(AnimationState *param_1,Pool *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = SpineObject::operator_new
                     (0x40,
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.cpp"
                      ,0xc4);
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[6] = param_2;
  puVar1[1] = &PTR__Vector_01c8e548;
  *puVar1 = &PTR__EventQueue_01c8e3e0;
  *(undefined1 *)(puVar1 + 7) = 0;
  return;
}

