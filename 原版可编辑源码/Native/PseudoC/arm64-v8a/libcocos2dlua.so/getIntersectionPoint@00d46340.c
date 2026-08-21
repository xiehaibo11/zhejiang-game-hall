
/* cocos2d::Terrain::getIntersectionPoint(cocos2d::Ray const&) const */

void __thiscall cocos2d::Terrain::getIntersectionPoint(Terrain *this,Ray *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)&local_58);
  uVar2 = getIntersectionPoint(this,param_1,(Vec3 *)&local_58);
  if ((uVar2 & 1) == 0) {
    Vec3::Vec3((Vec3 *)&local_48,0.0,0.0,0.0);
  }
  else {
    local_48 = local_58;
    local_40 = local_50;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined4)local_48,local_48._4_4_,local_40);
}

