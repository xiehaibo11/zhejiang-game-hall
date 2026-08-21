
/* fairygui::GPath::getAllPoints(std::__ndk1::vector<cocos2d::Vec3,
   std::__ndk1::allocator<cocos2d::Vec3> >&, float) */

void __thiscall fairygui::GPath::getAllPoints(GPath *this,vector *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
                    /* try { // try from 00ac0a6c to 00bc0d33 has its CatchHandler @ 00ac0634 */
  iVar2 = (int)((ulong)(*(long *)(this + 8) - *(long *)this) >> 4);
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      getPointsInSegment(this,iVar1,0.0,1.0,param_1,(vector *)0x0,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar2 != iVar1);
  }
  return;
}

