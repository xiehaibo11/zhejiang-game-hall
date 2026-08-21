
/* cocos2d::OBB::getEdgeDirection(int) const */

void __thiscall cocos2d::OBB::getEdgeDirection(OBB *this,int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_a8;
  float local_a0;
  Vec3 aVStack_98 [4];
  float afStack_94 [2];
  Vec3 aVStack_8c [12];
  Vec3 aVStack_80 [12];
  Vec3 aVStack_74 [12];
  Vec3 aVStack_68 [12];
  Vec3 aVStack_5c [12];
  Vec3 local_50 [8];
  float local_48;
  Vec3 aVStack_44 [12];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3(aVStack_98);
  Vec3::Vec3(aVStack_8c);
  Vec3::Vec3(aVStack_80);
  Vec3::Vec3(aVStack_74);
  Vec3::Vec3(aVStack_68);
  Vec3::Vec3(aVStack_5c);
  Vec3::Vec3(local_50);
  Vec3::Vec3(aVStack_44);
  getCorners(this,aVStack_98);
  Vec3::Vec3((Vec3 *)&local_a8);
  if ((uint)param_1 < 3) {
    lVar2 = *(long *)(&DAT_01418800 + (long)param_1 * 8);
    local_a0 = afStack_94[lVar2 * 3 + 1] - local_48;
    local_a8 = CONCAT44(afStack_94[lVar2 * 3] - local_50._4_4_,
                        *(float *)(aVStack_98 + lVar2 * 0xc) - local_50._0_4_);
    Vec3::normalize((Vec3 *)&local_a8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a8 & 0xffffffff,local_a8._4_4_,local_a0);
}

