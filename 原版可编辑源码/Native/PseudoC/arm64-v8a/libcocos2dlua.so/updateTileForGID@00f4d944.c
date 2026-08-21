
/* cocos2d::TMXLayer::updateTileForGID(unsigned int, cocos2d::Vec2 const&) */

long * __thiscall cocos2d::TMXLayer::updateTileForGID(TMXLayer *this,uint param_1,Vec2 *param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  int iVar4;
  float fVar5;
  int local_68 [4];
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  TMXTilesetInfo::getRectForGID((uint)*(undefined8 *)(this + 0x3f8));
  fVar5 = *(float *)(this + 0x3d8);
  Rect::Rect((Rect *)local_68,local_58 / fVar5,fStack_54 / fVar5,local_50 / fVar5,fStack_4c / fVar5)
  ;
  Rect::operator=((Rect *)&local_58,(Rect *)local_68);
  iVar4 = (int)(*(float *)(this + 0x3dc) * (float)(int)*(float *)(param_2 + 4) +
               (float)(int)*(float *)param_2);
  plVar2 = (long *)reusedTileWithRect(this,(Rect *)&local_58);
                    /* try { // try from 00f4d9f0 to 0104d9f3 has its CatchHandler @ 00f4da50 */
  setupTileSprite((Sprite *)this,(Vec2 *)plVar2,(uint)param_2);
  local_68[0] = iVar4;
  pvVar3 = bsearch(local_68,(void *)(*(size_t **)(this + 0x3d0))[2],**(size_t **)(this + 0x3d0),8,
                   FUN_00f4db28);
  plVar2[0x61] = (ulong)((long)pvVar3 - *(long *)(*(long *)(this + 0x3d0) + 0x10)) >> 3;
  (**(code **)(*plVar2 + 0x5d8))(plVar2,1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f4d9f0 with catch @ 00f4da50
                        */
  (**(code **)(*plVar2 + 0x3e0))(plVar2);
  *(uint *)(*(long *)(this + 0x3f0) + (long)iVar4 * 4) = param_1;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

