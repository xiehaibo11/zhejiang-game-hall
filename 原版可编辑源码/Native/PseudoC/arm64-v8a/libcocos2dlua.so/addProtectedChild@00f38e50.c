
/* cocos2d::ProtectedNode::addProtectedChild(cocos2d::Node*) */

void __thiscall cocos2d::ProtectedNode::addProtectedChild(ProtectedNode *this,Node *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f38e38 with catch @ 00f38e60
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f38cdc with catch @ 00f38e64
                        */
  uVar1 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f38dc8 with catch @ 00f38e80
                        */
  uVar2 = (**(code **)(*(long *)param_1 + 0x2b8))(param_1);
                    /* try { // try from 00f38e94 to 01038f07 has its CatchHandler @ 00f38e94
                       catch(type#1 @ 00000000) { ... } // from try @ 00f38e94 with catch @ 00f38e94
                       catch(type#1 @ 00000000) { ... } // from try @ 00f3900c with catch @ 00f38e94
                       catch(type#1 @ 00000000) { ... } // from try @ 00f39084 with catch @ 00f38e94
                        */
                    /* WARNING: Could not recover jumptable at 0x00f38eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x540))(this,param_1,uVar1,uVar2);
  return;
}

