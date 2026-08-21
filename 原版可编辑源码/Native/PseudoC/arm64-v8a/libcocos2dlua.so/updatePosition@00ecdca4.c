
/* cocos2d::CardinalSplineBy::updatePosition(cocos2d::Vec2 const&) */

void __thiscall cocos2d::CardinalSplineBy::updatePosition(CardinalSplineBy *this,Vec2 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ecdd18 with catch @ 00ecdca8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ecdd48 with catch @ 00ecdca8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ecdd78 with catch @ 00ecdca8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ecdda0 with catch @ 00ecdca8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ecddcc with catch @ 00ecdca8
                        */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20),
                      (float)*(undefined8 *)param_1 + (float)*(undefined8 *)(this + 0x78));
  (**(code **)(**(long **)(this + 0x38) + 0x98))(*(long **)(this + 0x38),&local_30);
  *(undefined8 *)(this + 0x68) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ecdd10 to 00fcdd17 has its CatchHandler @ 00ecde0c */
  __stack_chk_fail();
}

