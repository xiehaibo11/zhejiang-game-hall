
/* cocos2d::MenuItemSprite::create(cocos2d::Node*, cocos2d::Node*, cocos2d::Node*) */

Node * cocos2d::MenuItemSprite::create(Node *param_1,Node *param_2,Node *param_3)

{
  long lVar1;
  Node *this;
  code *pcVar2;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
                    /* try { // try from 00f1ee28 to 0101eeb7 has its CatchHandler @ 00f1eb98 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (long *)0x0;
  this = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
                    /* catch() { ... } // from try @ 00f1ec00 with catch @ 00f1ee7c */
    *(undefined8 *)(this + 800) = 0;
    *(undefined8 *)(this + 0x330) = 0;
                    /* catch() { ... } // from try @ 00f1ebf4 with catch @ 00f1ee8c */
    *(undefined8 *)(this + 0x340) = 0;
                    /* catch() { ... } // from try @ 00f1ed44 with catch @ 00f1ee90 */
    *(undefined8 *)(this + 0x338) = 0;
                    /* catch() { ... } // from try @ 00f1ed58 with catch @ 00f1ee94 */
                    /* catch() { ... } // from try @ 00f1ed90 with catch @ 00f1ee98 */
    *(undefined ***)this = &PTR__MenuItem_017055a8;
  }
                    /* catch() { ... } // from try @ 00f1edf4 with catch @ 00f1ee9c */
                    /* catch() { ... } // from try @ 00f1ee1c with catch @ 00f1eea0 */
                    /* catch() { ... } // from try @ 00f1ed28 with catch @ 00f1eea4 */
  initWithNormalSprite((MenuItemSprite *)this,param_1,param_2,param_3,(function *)alStack_80);
  Ref::autorelease((Ref *)this);
  if (alStack_80 == local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00f1eee8;
    pcVar2 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar2)();
LAB_00f1eee8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

