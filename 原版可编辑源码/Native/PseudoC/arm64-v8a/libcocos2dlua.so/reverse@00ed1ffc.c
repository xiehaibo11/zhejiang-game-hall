
/* cocos2d::EaseBezierAction::reverse() const */

long * __thiscall cocos2d::EaseBezierAction::reverse(EaseBezierAction *this)

{
  ActionInterval *pAVar1;
  long *plVar2;
  
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  plVar2 = (long *)create(pAVar1);
  (**(code **)(*plVar2 + 0x58))
            (*(undefined4 *)(this + 0x6c),*(undefined4 *)(this + 0x68),*(undefined4 *)(this + 100),
             *(undefined4 *)(this + 0x60));
  return plVar2;
}

