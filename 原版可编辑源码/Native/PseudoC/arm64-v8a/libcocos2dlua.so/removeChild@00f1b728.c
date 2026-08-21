
/* cocos2d::Menu::removeChild(cocos2d::Node*, bool) */

void __thiscall cocos2d::Menu::removeChild(Menu *this,Node *param_1,bool param_2)

{
                    /* try { // try from 00f1b728 to 0101b733 has its CatchHandler @ 00f1baa8 */
  if (*(Node **)(this + 0x328) != param_1) {
    Node::removeChild((Node *)this,param_1,param_2);
    return;
  }
  *(undefined8 *)(this + 0x328) = 0;
  Node::removeChild((Node *)this,param_1,param_2);
  return;
}

