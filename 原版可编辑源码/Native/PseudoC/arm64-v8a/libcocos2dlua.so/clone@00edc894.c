
/* cocos2d::Sequence::clone() const */

undefined8 __thiscall cocos2d::Sequence::clone(Sequence *this)

{
  FiniteTimeAction *pFVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00edc878 with catch @ 00edc89c */
  if ((*(long **)(this + 0x58) != (long *)0x0) && (*(long *)(this + 0x60) != 0)) {
    pFVar1 = (FiniteTimeAction *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
                    /* catch() { ... } // from try @ 00edc858 with catch @ 00edc8cc */
    uVar2 = (**(code **)(**(long **)(this + 0x60) + 0x18))(*(long **)(this + 0x60));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00edc940 with catch @ 00edc8e8
                       catch(type#1 @ 00000000) { ... } // from try @ 00edcb08 with catch @ 00edc8e8
                        */
    uVar2 = create(pFVar1,uVar2,0);
    return uVar2;
  }
  return 0;
}

