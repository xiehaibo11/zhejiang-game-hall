
/* cocos2d::extension::Control::setOpacityModifyRGB(bool) */

void __thiscall cocos2d::extension::Control::setOpacityModifyRGB(Control *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* catch() { ... } // from try @ 00e0958c with catch @ 00e0963c */
                    /* catch() { ... } // from try @ 00e09504 with catch @ 00e09640 */
  puVar2 = *(undefined8 **)(this + 0x178);
  puVar1 = *(undefined8 **)(this + 0x180);
  this[0x350] = (Control)param_1;
                    /* catch() { ... } // from try @ 00e094f4 with catch @ 00e09658 */
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x4e0))((long *)*puVar2,param_1);
  }
                    /* catch() { ... } // from try @ 00e09444 with catch @ 00e09678 */
                    /* catch() { ... } // from try @ 00e09340 with catch @ 00e0967c */
  return;
}

