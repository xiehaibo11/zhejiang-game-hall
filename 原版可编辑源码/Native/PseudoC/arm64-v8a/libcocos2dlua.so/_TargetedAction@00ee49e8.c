
/* non-virtual thunk to cocos2d::TargetedAction::~TargetedAction() */

void __thiscall cocos2d::TargetedAction::~TargetedAction(TargetedAction *this)

{
                    /* try { // try from 00ee49e8 to 00fe4a2b has its CatchHandler @ 00ee48c4 */
  *(undefined ***)(this + -0x28) = &PTR__TargetedAction_016f89e8;
  *(undefined ***)this = &PTR_clone_016f8a48;
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x38));
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee498c with catch @ 00ee4a24
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee49b4 with catch @ 00ee4a24
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee49dc with catch @ 00ee4a24
                        */
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee492c with catch @ 00ee4a28
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee4958 with catch @ 00ee4a28
                        */
    Ref::release(*(Ref **)(this + 0x30));
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee4a9c with catch @ 00ee4a2c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee4acc with catch @ 00ee4a2c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee4afc with catch @ 00ee4a2c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee4b24 with catch @ 00ee4a2c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee4b50 with catch @ 00ee4a2c
                        */
  Action::~Action((Action *)(this + -0x28));
  return;
}

