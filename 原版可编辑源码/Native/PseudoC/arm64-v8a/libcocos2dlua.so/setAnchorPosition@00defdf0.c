
/* cocos2d::ui::LayoutComponent::setAnchorPosition(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::LayoutComponent::setAnchorPosition(LayoutComponent *this,Vec2 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
                    /* catch() { ... } // from try @ 00defe34 with catch @ 00defdf0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00defe2c to 00eefe33 has its CatchHandler @ 00defe80 */
  (**(code **)(**(long **)(this + 0x28) + 0x370))(local_48);
                    /* try { // try from 00defe34 to 00eefe9b has its CatchHandler @ 00defdf0 */
  (**(code **)(**(long **)(this + 0x28) + 0x148))(*(long **)(this + 0x28),param_1);
  (**(code **)(**(long **)(this + 0x28) + 0x370))(local_58);
  puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x28) + 0xb0))();
                    /* catch() { ... } // from try @ 00defe2c with catch @ 00defe80 */
  local_60 = CONCAT44((SUB84(local_48._0_8_,4) - SUB84(local_58._0_8_,4)) +
                      (float)((ulong)*puVar2 >> 0x20),
                      ((float)local_48._0_8_ - (float)local_58._0_8_) + (float)*puVar2);
  setPosition(this,(Vec2 *)&local_60);
                    /* catch() { ... } // from try @ 00defee0 with catch @ 00defe9c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

