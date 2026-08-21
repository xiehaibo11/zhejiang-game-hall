
/* cocos2d::Sprite::setDirtyRecursively(bool) */

void __thiscall cocos2d::Sprite::setDirtyRecursively(Sprite *this,bool param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
                    /* catch() { ... } // from try @ 00f40604 with catch @ 00f4084c */
  this[0x319] = (Sprite)param_1;
                    /* catch() { ... } // from try @ 00f40728 with catch @ 00f40868 */
  (**(code **)(*(long *)this + 0x5d8))();
  plVar1 = *(long **)(this + 0x178);
  plVar2 = *(long **)(this + 0x180);
  if (plVar1 != plVar2) {
    lVar3 = *plVar1;
    while( true ) {
      if ((lVar3 != 0) &&
         (plVar4 = (long *)__dynamic_cast(lVar3,&Node::typeinfo,&typeinfo,0), plVar4 != (long *)0x0)
         ) {
        (**(code **)(*plVar4 + 0x658))(plVar4,1);
      }
      plVar1 = plVar1 + 1;
      if (plVar2 == plVar1) break;
      lVar3 = *plVar1;
    }
  }
  return;
}

