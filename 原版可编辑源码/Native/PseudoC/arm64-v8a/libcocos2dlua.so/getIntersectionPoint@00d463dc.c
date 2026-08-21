
/* WARNING: Removing unreachable block (ram,0x00d46564) */
/* cocos2d::Terrain::getIntersectionPoint(cocos2d::Ray const&, cocos2d::Vec3&) const */

undefined4 __thiscall
cocos2d::Terrain::getIntersectionPoint(Terrain *this,Ray *param_1,Vec3 *param_2)

{
  bool bVar1;
  __tree_node *p_Var2;
  Triangle *pTVar3;
  long lVar4;
  ulong uVar5;
  __tree_node_base *p_Var6;
  float fVar7;
  __tree_node *p_Var8;
  long lVar9;
  __tree_node *p_Var10;
  Triangle *this_00;
  __tree_node *p_Var11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  undefined4 local_154;
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  float local_118;
  float local_114;
  float fStack_110;
  undefined4 local_10c;
  undefined4 local_104;
  Vec3 local_100 [8];
  float local_f8;
  __tree_node *local_f0;
  __tree_node *local_e8;
  long local_e0;
  long local_b0;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d462f0 with catch @ 00d463f8
                        */
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  Ray::Ray((Ray *)&local_118,param_1);
  (**(code **)(*(long *)this + 0x448))(&local_f0,this);
  fVar18 = local_114;
  Mat4::transformVector((Mat4 *)&local_f0,local_118,local_114,fStack_110,1.0,(Vec3 *)&local_118);
  Mat4::~Mat4((Mat4 *)&local_f0);
  local_e8 = (__tree_node *)0x0;
  local_e0 = 0;
  fStack_134 = *(float *)(param_1 + 8);
  local_138 = *(float *)param_1;
  local_120 = local_10c;
  uStack_11c = local_104;
  local_f0 = (__tree_node *)&local_e8;
  fVar14 = (float)convertToTerrainSpace(this,(Vec2 *)&local_138);
  fVar14 = fVar14 / (*(float *)(this + 0x370) + 1.0);
  fVar20 = fVar18 / (*(float *)(this + 0x374) + 1.0);
  local_138 = fVar14;
  fStack_134 = fVar20;
  fVar15 = (float)Vec2::getNormalized((Vec2 *)&local_120);
  fVar23 = *(float *)(this + 0x370);
  iVar19 = *(int *)(this + 0x80528);
  iVar21 = *(int *)(this + 0x8052c);
  fVar22 = *(float *)(this + 0x374);
  Vec3::Vec3((Vec3 *)&local_130);
  fVar7 = 3.4028235e+38;
  local_154 = 0;
  do {
    lVar12 = (long)(int)fVar20;
    lVar13 = (long)(int)fVar14;
    do {
      if ((((lVar12 < 0x100) && (lVar13 < 0x100)) && (-1 < (int)((uint)lVar12 | (uint)lVar13))) &&
         (p_Var11 = *(__tree_node **)(this + lVar13 * 8 + lVar12 * 0x800 + 0x4f8),
         p_Var11 != (__tree_node *)0x0)) {
        p_Var8 = (__tree_node *)&local_e8;
        p_Var10 = local_e8;
        if (local_e8 != (__tree_node *)0x0) {
          do {
            if (*(__tree_node **)(p_Var10 + 0x20) >= p_Var11) {
              p_Var8 = p_Var10;
            }
            p_Var2 = p_Var10 + (ulong)(*(__tree_node **)(p_Var10 + 0x20) < p_Var11) * 8;
            p_Var10 = *(__tree_node **)p_Var2;
          } while (*(__tree_node **)p_Var2 != (__tree_node *)0x0);
          if ((p_Var8 != (__tree_node *)&local_e8) && (*(__tree_node **)(p_Var8 + 0x20) <= p_Var11))
          goto LAB_00d4657c;
        }
        uVar5 = Ray::intersects((Ray *)&local_118,(AABB *)(p_Var11 + 0x88),(float *)0x0);
        p_Var8 = (__tree_node *)&local_e8;
        p_Var10 = (__tree_node *)&local_e8;
        p_Var2 = local_e8;
        if ((uVar5 & 1) != 0) {
          this_00 = *(Triangle **)(p_Var11 + 0x118);
          pTVar3 = *(Triangle **)(p_Var11 + 0x120);
          if (this_00 != pTVar3) {
            bVar1 = false;
            fVar17 = 3.4028235e+38;
            do {
              Vec3::Vec3(local_100);
              uVar5 = Triangle::getIntersectPoint(this_00,(Ray *)&local_118,local_100);
              if ((uVar5 & 1) != 0) {
                fVar16 = (float)Vec3::distance((Vec3 *)&local_118,local_100);
                if (fVar16 < fVar17) {
                  bVar1 = true;
                  local_130 = local_100._0_4_;
                  fStack_12c = local_100._4_4_;
                  fStack_128 = local_f8;
                  fVar17 = fVar16;
                }
                else {
                  bVar1 = true;
                }
              }
              this_00 = this_00 + 0x24;
            } while (pTVar3 != this_00);
            p_Var2 = local_e8;
                    /* try { // try from 00d46680 to 00e466e3 has its CatchHandler @ 00d46680
                       catch() { ... } // from try @ 00d46680 with catch @ 00d46680
                       catch() { ... } // from try @ 00d466f0 with catch @ 00d46680 */
            if ((bVar1) &&
               (fVar17 = SQRT((local_118 - local_130) * (local_118 - local_130) +
                              (local_114 - fStack_12c) * (local_114 - fStack_12c) +
                              (fStack_110 - fStack_128) * (fStack_110 - fStack_128)), fVar17 < fVar7
               )) {
              *(float *)(param_2 + 8) = fStack_128;
              *(ulong *)param_2 = CONCAT44(fStack_12c,local_130);
              local_154 = 1;
              fVar7 = fVar17;
            }
          }
        }
        while (p_Var2 != (__tree_node *)0x0) {
                    /* try { // try from 00d466e4 to 00e466ef has its CatchHandler @ 00d46764 */
          while (p_Var10 = p_Var2, p_Var11 < *(__tree_node **)(p_Var10 + 0x20)) {
            p_Var8 = p_Var10;
            p_Var2 = *(__tree_node **)p_Var10;
            if (*(__tree_node **)p_Var10 == (__tree_node *)0x0) {
              lVar9 = *(long *)p_Var10;
              goto joined_r0x00d46764;
            }
          }
          if (p_Var11 <= *(__tree_node **)(p_Var10 + 0x20)) break;
          p_Var8 = p_Var10 + 8;
          p_Var2 = *(__tree_node **)(p_Var10 + 8);
        }
        lVar9 = *(long *)p_Var8;
joined_r0x00d46764:
                    /* catch() { ... } // from try @ 00d466e4 with catch @ 00d46764 */
        if (lVar9 == 0) {
          p_Var6 = operator_new(0x28);
          *(__tree_node **)(p_Var6 + 0x20) = p_Var11;
          *(undefined8 *)p_Var6 = 0;
          *(undefined8 *)(p_Var6 + 8) = 0;
          *(__tree_node **)(p_Var6 + 0x10) = p_Var10;
          *(__tree_node_base **)p_Var8 = p_Var6;
          if (*(__tree_node **)local_f0 != (__tree_node *)0x0) {
            p_Var6 = *(__tree_node_base **)p_Var8;
            local_f0 = *(__tree_node **)local_f0;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)local_e8,p_Var6);
          local_e0 = local_e0 + 1;
        }
      }
LAB_00d4657c:
      bVar1 = lVar12 < (int)fVar20;
      lVar12 = lVar12 + 1;
    } while ((bVar1) ||
            (bVar1 = lVar13 < (int)fVar14, lVar12 = (long)(int)fVar20, lVar13 = lVar13 + 1, bVar1));
    if (((fVar15 != 0.0 && fVar15 >= 0.0) && (float)iVar19 / (fVar23 + 1.0) < fVar14) ||
       (fVar15 < 0.0 && fVar14 < 0.0)) {
LAB_00d467d4:
      std::__ndk1::
      __tree<cocos2d::Terrain::Chunk*,std::__ndk1::less<cocos2d::Terrain::Chunk*>,std::__ndk1::allocator<cocos2d::Terrain::Chunk*>>
      ::destroy((__tree<cocos2d::Terrain::Chunk*,std::__ndk1::less<cocos2d::Terrain::Chunk*>,std::__ndk1::allocator<cocos2d::Terrain::Chunk*>>
                 *)&local_f0,local_e8);
      Ray::~Ray((Ray *)&local_118);
      if (*(long *)(lVar4 + 0x28) == local_b0) {
                    /* try { // try from 00d4682c to 00e4688f has its CatchHandler @ 00d4682c
                       catch() { ... } // from try @ 00d4682c with catch @ 00d4682c
                       catch() { ... } // from try @ 00d4689c with catch @ 00d4682c */
        return local_154;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (((fVar18 != 0.0 && fVar18 >= 0.0) && (float)iVar21 / (fVar22 + 1.0) < fVar20) ||
       (fVar18 < 0.0 && fVar20 < 0.0)) goto LAB_00d467d4;
    fVar14 = fVar15 + fVar14;
    fVar20 = fVar18 + fVar20;
    local_138 = fVar14;
    fStack_134 = fVar20;
  } while( true );
}

