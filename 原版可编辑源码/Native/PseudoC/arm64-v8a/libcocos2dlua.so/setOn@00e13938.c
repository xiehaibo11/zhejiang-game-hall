
/* cocos2d::extension::ControlSwitch::setOn(bool) */

void __thiscall cocos2d::extension::ControlSwitch::setOn(ControlSwitch *this,bool param_1)

{
  code *pcVar1;
  ControlSwitchSprite *this_00;
  float fVar2;
  float fVar3;
  
  this_00 = *(ControlSwitchSprite **)(this + 0x358);
  this[0x365] = (ControlSwitch)param_1;
                    /* catch() { ... } // from try @ 00e13858 with catch @ 00e13950 */
  if (param_1) {
    pcVar1 = *(code **)(*(long *)this_00 + 0x678);
                    /* catch() { ... } // from try @ 00e13838 with catch @ 00e13960 */
  }
  else {
    pcVar1 = *(code **)(*(long *)this_00 + 0x688);
  }
  fVar2 = (float)(*pcVar1)(this_00);
                    /* catch() { ... } // from try @ 00e138a4 with catch @ 00e13974 */
  fVar3 = *(float *)(this_00 + 0x540);
  if ((*(float *)(this_00 + 0x540) < fVar2) && (fVar3 = fVar2, *(float *)(this_00 + 0x53c) <= fVar2)
     ) {
                    /* catch() { ... } // from try @ 00e1388c with catch @ 00e1398c */
    fVar3 = *(float *)(this_00 + 0x53c);
  }
  *(float *)(this_00 + 0x538) = fVar3;
  ControlSwitchSprite::needsLayout(this_00);
                    /* WARNING: Could not recover jumptable at 0x00e139b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x688))(this,0x100);
  return;
}

