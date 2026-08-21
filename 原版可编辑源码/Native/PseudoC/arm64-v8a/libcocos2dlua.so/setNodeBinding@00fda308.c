
/* cocos2d::GLProgramState::setNodeBinding(cocos2d::Node*) */

void __thiscall cocos2d::GLProgramState::setNodeBinding(GLProgramState *this,Node *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  plVar2 = *(long **)(this + 0xf0);
  *(Node **)(this + 0xd8) = param_1;
  do {
                    /* catch() { ... } // from try @ 00fda2e8 with catch @ 00fda328 */
    if (plVar2 == (long *)0x0) {
      return;
    }
                    /* catch() { ... } // from try @ 00fda374 with catch @ 00fda344 */
    if (_customAutoBindingResolvers != DAT_01792688) {
      puVar3 = DAT_01792688 + -1;
      puVar4 = _customAutoBindingResolvers;
      do {
                    /* try { // try from 00fda36c to 010da373 has its CatchHandler @ 00fda3b4 */
                    /* try { // try from 00fda374 to 010da3cf has its CatchHandler @ 00fda344 */
        uVar1 = (**(code **)(*(long *)*puVar4 + 0x10))
                          ((long *)*puVar4,this,*(undefined8 *)(this + 0xd8),plVar2 + 2,plVar2 + 5);
        if (puVar3 == puVar4) break;
        puVar4 = puVar4 + 1;
      } while ((uVar1 & 1) == 0);
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}

