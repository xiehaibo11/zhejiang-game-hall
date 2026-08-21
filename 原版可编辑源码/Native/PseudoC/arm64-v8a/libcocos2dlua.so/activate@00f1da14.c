
/* cocos2d::MenuItemLabel::activate() */

void __thiscall cocos2d::MenuItemLabel::activate(MenuItemLabel *this)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  int local_48 [2];
  MenuItemLabel **local_40;
  MenuItemLabel *local_38;
  undefined8 uStack_30;
  long local_28;
  
                    /* try { // try from 00f1da24 to 0101da2b has its CatchHandler @ 00f1da60 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f1da2c to 0101da73 has its CatchHandler @ 00f1d9d4 */
  if (this[0x2f9] != (MenuItemLabel)0x0) {
    Node::stopAllActions((Node *)this);
    (**(code **)(*(long *)this + 0x80))(*(undefined4 *)(this + 0x334),this);
    if (this[0x2f9] != (MenuItemLabel)0x0) {
      plVar2 = *(long **)(this + 800);
                    /* catch() { ... } // from try @ 00f1da24 with catch @ 00f1da60 */
      if (plVar2 != (long *)0x0) {
        local_38 = this;
                    /* try { // try from 00f1da74 to 0101dacb has its CatchHandler @ 00f1da74
                       catch() { ... } // from try @ 00f1da74 with catch @ 00f1da74
                       catch() { ... } // from try @ 00f1daec with catch @ 00f1da74 */
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_38);
      }
      if (*(int *)(this + 0x208) == 1) {
        local_40 = &local_38;
        uStack_30 = 0;
        local_48[0] = *(int *)(this + 0x208);
        local_38 = this;
        puVar3 = (undefined8 *)ScriptEngineManager::getInstance();
        (**(code **)(*(long *)*puVar3 + 0x78))((long *)*puVar3,local_48);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00f1dacc to 0101dad7 has its CatchHandler @ 00f1db2c */
  __stack_chk_fail();
}

