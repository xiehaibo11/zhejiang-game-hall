
/* cocos2d::Quaternion::Quaternion(cocos2d::Quaternion const&) */

void __thiscall cocos2d::Quaternion::Quaternion(Quaternion *this,Quaternion *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
                    /* catch() { ... } // from try @ 0099badc with catch @ 0099bb54
                       catch() { ... } // from try @ 0099bb18 with catch @ 0099bb54 */
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}

