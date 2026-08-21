
/* cocos2d::Bundle3D::calculateAABB(std::__ndk1::vector<float, std::__ndk1::allocator<float> >
   const&, int, std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> > const&)
    */

void __thiscall
cocos2d::Bundle3D::calculateAABB(Bundle3D *this,vector *param_1,int param_2,vector *param_3)

{
  float *pfVar1;
  int iVar2;
  ushort *puVar3;
  long lVar4;
  int iVar5;
  AABB *in_x8;
  ushort *puVar6;
  Vec3 aVStack_58 [16];
  long local_48;
  ushort *puVar7;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar5 = (int)param_1;
  AABB::AABB(in_x8);
  puVar6 = *(ushort **)(ulong)(uint)param_2;
  puVar3 = (ushort *)((long *)(ulong)(uint)param_2)[1];
  iVar2 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  if (puVar6 != puVar3) {
    do {
      puVar7 = puVar6 + 1;
      pfVar1 = (float *)(*(long *)this + (long)(iVar2 >> 2) * (ulong)*puVar6 * 4);
      Vec3::Vec3(aVStack_58,*pfVar1,pfVar1[1],pfVar1[2]);
      AABB::updateMinMax(in_x8,aVStack_58,1);
      puVar6 = puVar7;
    } while (puVar3 != puVar7);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

