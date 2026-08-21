
/* cocos2d::PUPropertyAbstractNode::PUPropertyAbstractNode(cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUPropertyAbstractNode::PUPropertyAbstractNode
          (PUPropertyAbstractNode *this,PUAbstractNode *param_1)

{
  *(PUAbstractNode **)(this + 0x28) = param_1;
  *(undefined8 *)(this + 0x30) = 0;
  *(PUPropertyAbstractNode **)(this + 0x58) = this + 0x58;
  *(PUPropertyAbstractNode **)(this + 0x60) = this + 0x58;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e4199c with catch @ 00e41b18
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e41b74 with catch @ 00e41b1c
                       catch(type#1 @ 00000000) { ... } // from try @ 00e41d34 with catch @ 00e41b1c
                        */
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__PUPropertyAbstractNode_016f2010;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x24) = 3;
  return;
}

