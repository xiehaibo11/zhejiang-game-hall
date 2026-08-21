
/* dragonBones::AnimationState::_updateBoneAndSlotTimelines() */

void __thiscall dragonBones::AnimationState::_updateBoneAndSlotTimelines(AnimationState *this)

{
  int *piVar1;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
  *this_00;
  basic_string *pbVar2;
  size_t sVar3;
  undefined8 *puVar4;
  long *plVar5;
  byte *pbVar6;
  __tree_node *p_Var7;
  undefined8 *puVar8;
  int iVar9;
  byte bVar10;
  AnimationState AVar11;
  long lVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  __tree_node **pp_Var16;
  AnimationState *pAVar17;
  BoneAllTimelineState *pBVar18;
  __tree_node_base **pp_Var19;
  __tree_node *p_Var20;
  SlotDislayTimelineState *pSVar21;
  SlotColorTimelineState *pSVar22;
  DeformTimelineState *pDVar23;
  void *pvVar24;
  __tree_node_base *p_Var25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  __tree_node *p_Var29;
  ulong uVar30;
  long *plVar31;
  int *piVar32;
  byte *pbVar33;
  bool bVar34;
  __tree_node_base *p_Var35;
  byte *pbVar36;
  long *plVar37;
  BaseObject *pBVar38;
  BonePose *pBVar39;
  void *pvVar40;
  size_t sVar41;
  long lVar42;
  int *piVar43;
  int *piVar44;
  int *local_c0;
  __tree_node *local_90;
  __tree_node *local_88;
  long local_80;
  BoneAllTimelineState *local_78;
  undefined4 local_70;
  long local_68;
  
                    /* try { // try from 00d73cf4 to 00e73d03 has its CatchHandler @ 00d7514c */
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  local_88 = (__tree_node *)0x0;
  local_80 = 0;
  plVar5 = *(long **)(this + 0xc0);
  local_90 = (__tree_node *)&local_88;
  for (plVar31 = *(long **)(this + 0xb8); plVar31 != plVar5; plVar31 = plVar31 + 1) {
    lVar26 = *plVar31;
    pbVar2 = (basic_string *)(*(long *)(*(long *)(lVar26 + 0xb8) + 0xa8) + 0x18);
    pp_Var19 = std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
               ::
               __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
                           *)&local_90,(__tree_end_node **)&local_78,pbVar2);
    p_Var35 = *pp_Var19;
    if (p_Var35 == (__tree_node_base *)0x0) {
      p_Var35 = operator_new(0x50);
                    /* try { // try from 00d73d90 to 00e73d97 has its CatchHandler @ 00d75110 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(p_Var35 + 0x20),pbVar2);
      *(undefined8 *)(p_Var35 + 0x38) = 0;
      *(undefined8 *)(p_Var35 + 0x40) = 0;
      *(undefined8 *)(p_Var35 + 0x48) = 0;
      *(undefined8 *)p_Var35 = 0;
      *(undefined8 *)(p_Var35 + 8) = 0;
      *(BoneAllTimelineState **)(p_Var35 + 0x10) = local_78;
      *pp_Var19 = p_Var35;
      p_Var25 = p_Var35;
      if (*(__tree_node **)local_90 != (__tree_node *)0x0) {
        p_Var25 = *pp_Var19;
        local_90 = *(__tree_node **)local_90;
      }
                    /* try { // try from 00d73dd0 to 00e73e0f has its CatchHandler @ 00d75170 */
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)local_88,p_Var25);
      local_80 = local_80 + 1;
    }
    plVar27 = *(long **)(p_Var35 + 0x40);
    if (plVar27 == *(long **)(p_Var35 + 0x48)) {
      pvVar40 = *(void **)(p_Var35 + 0x38);
      sVar41 = (long)plVar27 - (long)pvVar40;
      uVar30 = ((long)sVar41 >> 3) + 1;
      if (uVar30 >> 0x3d != 0) goto LAB_00d74fb8;
      lVar42 = (long)*(long **)(p_Var35 + 0x48) - (long)pvVar40;
      if ((ulong)(lVar42 >> 3) < 0xfffffffffffffff) {
        uVar28 = lVar42 >> 2;
                    /* try { // try from 00d73e1c to 00e73e23 has its CatchHandler @ 00d750a0 */
        if (uVar30 <= uVar28) {
          uVar30 = uVar28;
        }
        if (uVar30 != 0) {
                    /* try { // try from 00d73e24 to 00e73e2f has its CatchHandler @ 00d750c4 */
          if (uVar30 >> 0x3d == 0) goto LAB_00d73e34;
          goto LAB_00d74fb8;
        }
        pvVar24 = (void *)0x0;
      }
      else {
        uVar30 = 0x1fffffffffffffff;
LAB_00d73e34:
        pvVar24 = operator_new(uVar30 << 3);
      }
      plVar27 = (long *)((long)pvVar24 + ((long)sVar41 >> 3) * 8);
                    /* try { // try from 00d73e44 to 00e73e53 has its CatchHandler @ 00d75170 */
      *plVar27 = lVar26;
      if (0 < (long)sVar41) {
                    /* try { // try from 00d73e54 to 00e73e63 has its CatchHandler @ 00d7510c */
        memcpy(pvVar24,pvVar40,sVar41);
      }
      *(void **)(p_Var35 + 0x38) = pvVar24;
      *(long **)(p_Var35 + 0x40) = plVar27 + 1;
      *(void **)(p_Var35 + 0x48) = (void *)((long)pvVar24 + uVar30 * 8);
      if (pvVar40 != (void *)0x0) {
        operator_delete(pvVar40);
      }
    }
    else {
      *plVar27 = lVar26;
      *(long **)(p_Var35 + 0x40) = plVar27 + 1;
    }
  }
  plVar31 = *(long **)(*(long *)(this + 0x130) + 0x60);
  plVar5 = *(long **)(*(long *)(this + 0x130) + 0x68);
  p_Var20 = local_90;
  if (plVar31 != plVar5) {
    this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
               *)(this + 0x118);
    do {
      lVar42 = *plVar31;
      pbVar36 = *(byte **)(this + 0xa0);
      pbVar6 = *(byte **)(this + 0xa8);
      lVar26 = *(long *)(lVar42 + 0xa8);
      pbVar2 = (basic_string *)(lVar26 + 0x18);
      if (pbVar36 == pbVar6) {
LAB_00d73ebc:
        lVar26 = *(long *)(this + 0x80);
        lVar15 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
                             *)(lVar26 + 0x68),pbVar2);
        lVar26 = lVar26 + 0x70;
        plVar27 = (long *)0x0;
        if (lVar26 != lVar15) {
          plVar27 = (long *)(lVar15 + 0x38);
        }
        pp_Var16 = (__tree_node **)
                   std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
                               *)&local_90,pbVar2);
                    /* try { // try from 00d73ef0 to 00e73ef7 has its CatchHandler @ 00d750fc */
        if ((__tree_node *)&local_88 == (__tree_node *)pp_Var16) {
          pAVar17 = (AnimationState *)
                    std::__ndk1::
                    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              (this_00,pbVar2);
          if (this + 0x120 == pAVar17) {
            pBVar39 = BaseObject::borrowObject<dragonBones::BonePose>();
            pp_Var19 = std::__ndk1::
                       __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
                       ::
                       __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 (this_00,(__tree_end_node **)&local_78,pbVar2);
            p_Var35 = *pp_Var19;
            if (p_Var35 == (__tree_node_base *)0x0) {
              p_Var35 = operator_new(0x40);
                    /* try { // try from 00d74080 to 00e74093 has its CatchHandler @ 00d751a0 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)(p_Var35 + 0x20),pbVar2);
              *(undefined8 *)(p_Var35 + 0x38) = 0;
              *(undefined8 *)p_Var35 = 0;
              *(undefined8 *)(p_Var35 + 8) = 0;
              *(BoneAllTimelineState **)(p_Var35 + 0x10) = local_78;
              *pp_Var19 = p_Var35;
              p_Var25 = p_Var35;
              if (**(long **)this_00 != 0) {
                *(long *)this_00 = **(long **)this_00;
                p_Var25 = *pp_Var19;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (*(__tree_node_base **)(this + 0x120),p_Var25);
              *(long *)(this + 0x128) = *(long *)(this + 0x128) + 1;
            }
                    /* try { // try from 00d74224 to 00e74243 has its CatchHandler @ 00d7519c */
            *(BonePose **)(p_Var35 + 0x38) = pBVar39;
          }
          else {
                    /* try { // try from 00d73fe8 to 00e73fef has its CatchHandler @ 00d750f8 */
            pp_Var19 = std::__ndk1::
                       __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
                       ::
                       __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 (this_00,(__tree_end_node **)&local_78,pbVar2);
            p_Var35 = *pp_Var19;
            if (p_Var35 == (__tree_node_base *)0x0) {
              p_Var35 = operator_new(0x40);
                    /* try { // try from 00d74014 to 00e74017 has its CatchHandler @ 00d75098 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)(p_Var35 + 0x20),pbVar2);
              *(undefined8 *)(p_Var35 + 0x38) = 0;
              *(undefined8 *)p_Var35 = 0;
              *(undefined8 *)(p_Var35 + 8) = 0;
              *(BoneAllTimelineState **)(p_Var35 + 0x10) = local_78;
              *pp_Var19 = p_Var35;
              p_Var25 = p_Var35;
              if (**(long **)this_00 != 0) {
                *(long *)this_00 = **(long **)this_00;
                    /* try { // try from 00d74040 to 00e7404b has its CatchHandler @ 00d750ac */
                p_Var25 = *pp_Var19;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (*(__tree_node_base **)(this + 0x120),p_Var25);
              *(long *)(this + 0x128) = *(long *)(this + 0x128) + 1;
            }
                    /* try { // try from 00d740c8 to 00e740cf has its CatchHandler @ 00d750f4 */
            pBVar39 = *(BonePose **)(p_Var35 + 0x38);
                    /* try { // try from 00d740d0 to 00e740db has its CatchHandler @ 00d750e4 */
          }
          if (lVar26 == lVar15) {
            if (this[0x10] != (AnimationState)0x0) {
              pBVar18 = BaseObject::borrowObject<dragonBones::BoneAllTimelineState>();
              *(long *)(pBVar18 + 0xb8) = lVar42;
              *(BonePose **)(pBVar18 + 0xc0) = pBVar39;
              (**(code **)(*(long *)pBVar18 + 0x30))(pBVar18,*(undefined8 *)(this + 0x130),this,0);
              puVar4 = *(undefined8 **)(this + 0xc0);
              if (puVar4 < *(undefined8 **)(this + 200)) {
                *puVar4 = pBVar18;
                *(undefined8 **)(this + 0xc0) = puVar4 + 1;
              }
              else {
                pvVar40 = *(void **)(this + 0xb8);
                sVar41 = (long)puVar4 - (long)pvVar40;
                uVar30 = ((long)sVar41 >> 3) + 1;
                if (uVar30 >> 0x3d != 0) goto LAB_00d74fb8;
                lVar26 = (long)*(undefined8 **)(this + 200) - (long)pvVar40;
                    /* try { // try from 00d74294 to 00e7429b has its CatchHandler @ 00d74dc4 */
                    /* try { // try from 00d7429c to 00e742a3 has its CatchHandler @ 00d74e14 */
                if ((ulong)(lVar26 >> 3) < 0xfffffffffffffff) {
                  uVar28 = lVar26 >> 2;
                  if (uVar30 <= uVar28) {
                    uVar30 = uVar28;
                  }
                  if (uVar30 != 0) {
                    if (uVar30 >> 0x3d == 0) goto LAB_00d742c0;
                    goto LAB_00d74fb8;
                  }
                  pvVar24 = (void *)0x0;
                }
                else {
                  uVar30 = 0x1fffffffffffffff;
LAB_00d742c0:
                  pvVar24 = operator_new(uVar30 << 3);
                    /* try { // try from 00d742c8 to 00e742db has its CatchHandler @ 00d750c8 */
                }
                puVar4 = (undefined8 *)((long)pvVar24 + ((long)sVar41 >> 3) * 8);
                *puVar4 = pBVar18;
                if (0 < (long)sVar41) {
                    /* try { // try from 00d742e0 to 00e742f7 has its CatchHandler @ 00d74e0c */
                  memcpy(pvVar24,pvVar40,sVar41);
                }
                *(void **)(this + 0xb8) = pvVar24;
                *(undefined8 **)(this + 0xc0) = puVar4 + 1;
                *(void **)(this + 200) = (void *)((long)pvVar24 + uVar30 * 8);
                    /* try { // try from 00d742f8 to 00e7430b has its CatchHandler @ 00d74dac */
                if (pvVar40 != (void *)0x0) {
                  operator_delete(pvVar40);
                }
              }
                    /* try { // try from 00d74310 to 00e7433f has its CatchHandler @ 00d75004 */
              local_70 = 0;
              local_78 = pBVar18;
              FUN_00d73be0(this + 0x100,&local_78);
            }
          }
          else {
            plVar37 = (long *)plVar27[1];
            for (plVar27 = (long *)*plVar27; plVar27 != plVar37; plVar27 = plVar27 + 1) {
              lVar26 = *plVar27;
                    /* try { // try from 00d7410c to 00e7411b has its CatchHandler @ 00d750e0 */
              switch(*(undefined4 *)(lVar26 + 0x10)) {
              case 10:
                pBVar18 = BaseObject::borrowObject<dragonBones::BoneAllTimelineState>();
                break;
              case 0xb:
                pBVar18 = (BoneAllTimelineState *)
                          BaseObject::borrowObject<dragonBones::BoneTranslateTimelineState>();
                break;
              case 0xc:
                pBVar18 = (BoneAllTimelineState *)
                          BaseObject::borrowObject<dragonBones::BoneRotateTimelineState>();
                break;
              case 0xd:
                pBVar18 = (BoneAllTimelineState *)
                          BaseObject::borrowObject<dragonBones::BoneScaleTimelineState>();
                break;
              default:
                goto switchD_00d74124_default;
              }
              *(long *)(pBVar18 + 0xb8) = lVar42;
              *(BonePose **)(pBVar18 + 0xc0) = pBVar39;
                    /* try { // try from 00d74150 to 00e74157 has its CatchHandler @ 00d750d0 */
              (**(code **)(*(long *)pBVar18 + 0x30))
                        (pBVar18,*(undefined8 *)(this + 0x130),this,lVar26);
              puVar4 = *(undefined8 **)(this + 0xc0);
              if (puVar4 < *(undefined8 **)(this + 200)) {
                *puVar4 = pBVar18;
                *(undefined8 **)(this + 0xc0) = puVar4 + 1;
              }
              else {
                    /* try { // try from 00d74170 to 00e741bf has its CatchHandler @ 00d75198 */
                pvVar40 = *(void **)(this + 0xb8);
                sVar41 = (long)puVar4 - (long)pvVar40;
                uVar30 = ((long)sVar41 >> 3) + 1;
                if (uVar30 >> 0x3d != 0) goto LAB_00d74fb8;
                lVar26 = (long)*(undefined8 **)(this + 200) - (long)pvVar40;
                if ((ulong)(lVar26 >> 3) < 0xfffffffffffffff) {
                  uVar28 = lVar26 >> 2;
                  if (uVar30 <= uVar28) {
                    uVar30 = uVar28;
                  }
                  if (uVar30 != 0) {
                    if (uVar30 >> 0x3d == 0) goto LAB_00d741b8;
                    goto LAB_00d74fb8;
                  }
                  pvVar24 = (void *)0x0;
                }
                else {
                  uVar30 = 0x1fffffffffffffff;
LAB_00d741b8:
                  pvVar24 = operator_new(uVar30 << 3);
                }
                puVar4 = (undefined8 *)((long)pvVar24 + ((long)sVar41 >> 3) * 8);
                *puVar4 = pBVar18;
                if (0 < (long)sVar41) {
                  memcpy(pvVar24,pvVar40,sVar41);
                }
                *(void **)(this + 0xb8) = pvVar24;
                *(undefined8 **)(this + 0xc0) = puVar4 + 1;
                    /* try { // try from 00d741ec to 00e741f3 has its CatchHandler @ 00d750cc */
                *(void **)(this + 200) = (void *)((long)pvVar24 + uVar30 * 8);
                if (pvVar40 != (void *)0x0) {
                  operator_delete(pvVar40);
                }
              }
switchD_00d74124_default:
            }
          }
        }
        else {
          std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
          ::erase((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
                   *)&local_90,pp_Var16);
        }
      }
      else {
                    /* try { // try from 00d73f30 to 00e73f6f has its CatchHandler @ 00d75160 */
        sVar41 = *(size_t *)(lVar26 + 0x20);
        pvVar40 = *(void **)(lVar26 + 0x28);
        if ((*(byte *)(lVar26 + 0x18) & 1) == 0) {
          pvVar40 = (void *)(lVar26 + 0x19);
          sVar41 = (ulong)(*(byte *)(lVar26 + 0x18) >> 1);
        }
        do {
          bVar10 = *pbVar36;
          sVar3 = (ulong)(bVar10 >> 1);
          if ((bVar10 & 1) != 0) {
            sVar3 = *(size_t *)(pbVar36 + 8);
          }
          if (sVar3 == sVar41) {
            pbVar33 = *(byte **)(pbVar36 + 0x10);
            if ((bVar10 & 1) == 0) {
              pbVar33 = pbVar36 + 1;
            }
                    /* try { // try from 00d73f7c to 00e73f83 has its CatchHandler @ 00d7509c */
            if ((bVar10 & 1) == 0) {
              if (sVar41 == 0) {
LAB_00d73eb4:
                if (pbVar6 != pbVar36) goto LAB_00d73ebc;
                break;
              }
                    /* try { // try from 00d73f84 to 00e73f8f has its CatchHandler @ 00d750b0 */
              uVar30 = 0;
              while (pbVar36[uVar30 + 1] == *(byte *)((long)pvVar40 + uVar30)) {
                uVar30 = uVar30 + 1;
                    /* try { // try from 00d73fa4 to 00e73fb3 has its CatchHandler @ 00d75160 */
                if (bVar10 >> 1 == uVar30) goto LAB_00d73eb4;
              }
            }
            else if ((sVar41 == 0) || (iVar14 = memcmp(pbVar33,pvVar40,sVar41), iVar14 == 0))
            goto LAB_00d73eb4;
          }
          pbVar36 = pbVar36 + 0x18;
        } while (pbVar36 != pbVar6);
      }
      plVar31 = plVar31 + 1;
      p_Var20 = local_90;
    } while (plVar31 != plVar5);
  }
  while (p_Var20 != (__tree_node *)&local_88) {
    p_Var7 = *(__tree_node **)(p_Var20 + 0x40);
    for (p_Var29 = *(__tree_node **)(p_Var20 + 0x38); p_Var29 != p_Var7; p_Var29 = p_Var29 + 8) {
      plVar31 = *(long **)(this + 0xb8);
      plVar5 = *(long **)(this + 0xc0);
      pBVar38 = *(BaseObject **)p_Var29;
      if ((plVar31 != plVar5) && ((BaseObject *)*plVar31 != pBVar38)) {
                    /* try { // try from 00d743a0 to 00e743df has its CatchHandler @ 00d74ed8 */
        plVar27 = plVar31;
        do {
          plVar31 = plVar5;
          if (plVar5 + -1 == plVar27) break;
          plVar37 = plVar27 + 1;
          plVar31 = plVar27 + 1;
          plVar27 = plVar31;
        } while ((BaseObject *)*plVar37 != pBVar38);
      }
      sVar41 = (long)plVar5 - (long)(plVar31 + 1);
      if (sVar41 != 0) {
        memmove(plVar31,plVar31 + 1,sVar41);
      }
                    /* try { // try from 00d74368 to 00e7438f has its CatchHandler @ 00d74df8 */
      *(long **)(this + 0xc0) = plVar31 + ((long)sVar41 >> 3);
      BaseObject::returnToPool(pBVar38);
    }
                    /* try { // try from 00d74350 to 00e74363 has its CatchHandler @ 00d74d9c */
    p_Var29 = *(__tree_node **)(p_Var20 + 8);
    if (*(__tree_node **)(p_Var20 + 8) == (__tree_node *)0x0) {
      p_Var29 = p_Var20 + 0x10;
      bVar13 = (__tree_node *)*(__tree_node ***)*(__tree_node **)p_Var29 != p_Var20;
      p_Var20 = *(__tree_node **)p_Var29;
      if (bVar13) {
        do {
          lVar26 = *(long *)p_Var29;
          p_Var29 = (__tree_node *)(lVar26 + 0x10);
          p_Var20 = *(__tree_node **)p_Var29;
        } while (*(long *)p_Var20 != lVar26);
      }
    }
    else {
      do {
        p_Var20 = p_Var29;
        p_Var29 = *(__tree_node **)p_Var20;
      } while (*(__tree_node **)p_Var20 != (__tree_node *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
             *)&local_90,local_88);
                    /* try { // try from 00d7442c to 00e7443f has its CatchHandler @ 00d750c4 */
  local_88 = (__tree_node *)0x0;
  local_80 = 0;
  plVar5 = *(long **)(this + 0xd8);
  local_90 = (__tree_node *)&local_88;
  for (plVar31 = *(long **)(this + 0xd0); plVar31 != plVar5; plVar31 = plVar31 + 1) {
                    /* try { // try from 00d7445c to 00e7446f has its CatchHandler @ 00d74d8c */
    lVar26 = *plVar31;
    pbVar2 = (basic_string *)(*(long *)(*(long *)(lVar26 + 0xb8) + 200) + 0x20);
                    /* try { // try from 00d74474 to 00e744a3 has its CatchHandler @ 00d74fa4 */
    pp_Var19 = std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
               ::
               __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
                           *)&local_90,(__tree_end_node **)&local_78,pbVar2);
    p_Var35 = *pp_Var19;
    if (p_Var35 == (__tree_node_base *)0x0) {
      p_Var35 = operator_new(0x50);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(p_Var35 + 0x20),pbVar2);
      *(undefined8 *)(p_Var35 + 0x38) = 0;
      *(undefined8 *)(p_Var35 + 0x40) = 0;
      *(undefined8 *)(p_Var35 + 0x48) = 0;
      *(undefined8 *)p_Var35 = 0;
      *(undefined8 *)(p_Var35 + 8) = 0;
      *(BoneAllTimelineState **)(p_Var35 + 0x10) = local_78;
                    /* try { // try from 00d744b4 to 00e744c7 has its CatchHandler @ 00d74d7c */
      *pp_Var19 = p_Var35;
      p_Var25 = p_Var35;
      if (*(__tree_node **)local_90 != (__tree_node *)0x0) {
        p_Var25 = *pp_Var19;
        local_90 = *(__tree_node **)local_90;
                    /* try { // try from 00d744cc to 00e744f3 has its CatchHandler @ 00d74de0 */
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)local_88,p_Var25);
      local_80 = local_80 + 1;
    }
    plVar27 = *(long **)(p_Var35 + 0x40);
    if (plVar27 == *(long **)(p_Var35 + 0x48)) {
      pvVar40 = *(void **)(p_Var35 + 0x38);
      sVar41 = (long)plVar27 - (long)pvVar40;
      uVar30 = ((long)sVar41 >> 3) + 1;
                    /* try { // try from 00d74504 to 00e74543 has its CatchHandler @ 00d74e78 */
      if (uVar30 >> 0x3d != 0) goto LAB_00d74fb8;
      lVar42 = (long)*(long **)(p_Var35 + 0x48) - (long)pvVar40;
      if ((ulong)(lVar42 >> 3) < 0xfffffffffffffff) {
        uVar28 = lVar42 >> 2;
        if (uVar30 <= uVar28) {
          uVar30 = uVar28;
        }
        if (uVar30 != 0) {
          if (uVar30 >> 0x3d == 0) goto LAB_00d7453c;
          goto LAB_00d74fb8;
        }
        pvVar24 = (void *)0x0;
      }
      else {
        uVar30 = 0x1fffffffffffffff;
LAB_00d7453c:
        pvVar24 = operator_new(uVar30 << 3);
      }
      plVar27 = (long *)((long)pvVar24 + ((long)sVar41 >> 3) * 8);
      *plVar27 = lVar26;
      if (0 < (long)sVar41) {
        memcpy(pvVar24,pvVar40,sVar41);
      }
      *(void **)(p_Var35 + 0x38) = pvVar24;
      *(long **)(p_Var35 + 0x40) = plVar27 + 1;
      *(void **)(p_Var35 + 0x48) = (void *)((long)pvVar24 + uVar30 * 8);
      if (pvVar40 != (void *)0x0) {
        operator_delete(pvVar40);
      }
    }
    else {
      *plVar27 = lVar26;
      *(long **)(p_Var35 + 0x40) = plVar27 + 1;
    }
  }
                    /* try { // try from 00d74590 to 00e745a3 has its CatchHandler @ 00d750b0 */
  plVar31 = *(long **)(*(long *)(this + 0x130) + 0x78);
  plVar5 = *(long **)(*(long *)(this + 0x130) + 0x80);
  if (plVar31 == plVar5) {
    piVar43 = (int *)0x0;
    p_Var20 = local_90;
  }
  else {
    piVar43 = (int *)0x0;
    pAVar17 = this + 0x100;
                    /* try { // try from 00d745a8 to 00e745bf has its CatchHandler @ 00d74ddc */
    local_c0 = (int *)0x0;
    do {
      pbVar36 = *(byte **)(this + 0xa0);
      pbVar6 = *(byte **)(this + 0xa8);
      lVar26 = *plVar31;
                    /* try { // try from 00d74630 to 00e74657 has its CatchHandler @ 00d74dc8 */
      if (pbVar36 == pbVar6) {
LAB_00d745bc:
                    /* try { // try from 00d745c0 to 00e745d3 has its CatchHandler @ 00d74d6c */
        lVar42 = *(long *)(this + 0x80);
        pbVar2 = (basic_string *)(*(long *)(lVar26 + 200) + 0x20);
        lVar15 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
                             *)(lVar42 + 0x80),pbVar2);
        lVar42 = lVar42 + 0x88;
                    /* try { // try from 00d745d8 to 00e74607 has its CatchHandler @ 00d74f38 */
        plVar27 = (long *)0x0;
        if (lVar42 != lVar15) {
          plVar27 = (long *)(lVar15 + 0x38);
        }
        p_Var20 = (__tree_node *)
                  std::__ndk1::
                  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
                  ::
                  find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
                              *)&local_90,pbVar2);
        if ((__tree_node *)&local_88 == p_Var20) {
          piVar44 = piVar43;
          if (lVar42 == lVar15) {
            bVar34 = false;
            bVar13 = false;
            AVar11 = this[0x10];
          }
          else {
            plVar37 = (long *)*plVar27;
            plVar27 = (long *)plVar27[1];
            if (plVar37 == plVar27) {
              bVar34 = false;
              bVar13 = false;
            }
            else {
              bVar34 = false;
              bVar13 = false;
              piVar32 = piVar43;
              do {
                lVar42 = *plVar37;
                iVar14 = *(int *)(lVar42 + 0x10);
                piVar43 = piVar32;
                if (iVar14 == 0x16) {
                  pDVar23 = BaseObject::borrowObject<dragonBones::DeformTimelineState>();
                  *(long *)(pDVar23 + 0xb8) = lVar26;
                  (**(code **)(*(long *)pDVar23 + 0x30))
                            (pDVar23,*(undefined8 *)(this + 0x130),this,lVar42);
                  puVar4 = *(undefined8 **)(this + 0xd8);
                  if (puVar4 < *(undefined8 **)(this + 0xe0)) {
                    *puVar4 = pDVar23;
                    *(undefined8 **)(this + 0xd8) = puVar4 + 1;
                  }
                  else {
                    pvVar40 = *(void **)(this + 0xd0);
                    sVar41 = (long)puVar4 - (long)pvVar40;
                    uVar30 = ((long)sVar41 >> 3) + 1;
                    if (uVar30 >> 0x3d != 0) goto LAB_00d74fb8;
                    lVar42 = (long)*(undefined8 **)(this + 0xe0) - (long)pvVar40;
                    if ((ulong)(lVar42 >> 3) < 0xfffffffffffffff) {
                      uVar28 = lVar42 >> 2;
                      if (uVar30 <= uVar28) {
                        uVar30 = uVar28;
                      }
                      if (uVar30 != 0) {
                        if (uVar30 >> 0x3d == 0) goto LAB_00d74934;
                        goto LAB_00d74fb8;
                      }
                    /* try { // try from 00d74aac to 00e74b13 has its CatchHandler @ 00d751b0 */
                      pvVar24 = (void *)0x0;
                    }
                    else {
                    /* try { // try from 00d7492c to 00e74933 has its CatchHandler @ 00d74e14 */
                      uVar30 = 0x1fffffffffffffff;
LAB_00d74934:
                      pvVar24 = operator_new(uVar30 << 3);
                    }
                    puVar4 = (undefined8 *)((long)pvVar24 + ((long)sVar41 >> 3) * 8);
                    *puVar4 = pDVar23;
                    if (0 < (long)sVar41) {
                      memcpy(pvVar24,pvVar40,sVar41);
                    }
                    *(void **)(this + 0xd0) = pvVar24;
                    *(undefined8 **)(this + 0xd8) = puVar4 + 1;
                    *(void **)(this + 0xe0) = (void *)((long)pvVar24 + uVar30 * 8);
                    if (pvVar40 != (void *)0x0) {
                      operator_delete(pvVar40);
                    }
                  }
                    /* try { // try from 00d74984 to 00e7498b has its CatchHandler @ 00d74dc0 */
                    /* try { // try from 00d7498c to 00e74993 has its CatchHandler @ 00d74dbc */
                  if (piVar44 == local_c0) {
                    sVar41 = (long)piVar44 - (long)piVar32;
                    uVar30 = ((long)sVar41 >> 2) + 1;
                    if (uVar30 >> 0x3e != 0) goto LAB_00d74fb8;
                    if ((ulong)((long)local_c0 - (long)piVar32 >> 2) < 0x1fffffffffffffff) {
                      uVar28 = (long)local_c0 - (long)piVar32 >> 1;
                    /* try { // try from 00d749d0 to 00e749d7 has its CatchHandler @ 00d74d58 */
                      if (uVar30 <= uVar28) {
                        uVar30 = uVar28;
                      }
                      if (uVar30 != 0) {
                    /* try { // try from 00d749d8 to 00e74a03 has its CatchHandler @ 00d73b28 */
                        if (uVar30 >> 0x3e == 0) goto LAB_00d74a4c;
                        goto LAB_00d74fb8;
                      }
                      piVar43 = (int *)0x0;
                    }
                    else {
                      uVar30 = 0x3fffffffffffffff;
LAB_00d74a4c:
                      piVar43 = operator_new(uVar30 << 2);
                    }
                    local_c0 = piVar43 + uVar30;
                    piVar44 = piVar43 + ((long)sVar41 >> 2) + 1;
                    /* try { // try from 00d74a64 to 00e74aab has its CatchHandler @ 00d74e10 */
                    piVar43[(long)sVar41 >> 2] = *(int *)(pDVar23 + 0xc0);
                    if (0 < (long)sVar41) {
                      memcpy(piVar43,piVar32,sVar41);
                    }
                    if (piVar32 != (int *)0x0) {
                      operator_delete(piVar32);
                    }
                  }
                  else {
                    *piVar44 = *(int *)(pDVar23 + 0xc0);
                    piVar44 = piVar44 + 1;
                  }
                }
                else if (iVar14 == 0x15) {
                  pSVar22 = BaseObject::borrowObject<dragonBones::SlotColorTimelineState>();
                  *(long *)(pSVar22 + 0xb8) = lVar26;
                    /* try { // try from 00d7479c to 00e747a3 has its CatchHandler @ 00d750c4 */
                  (**(code **)(*(long *)pSVar22 + 0x30))
                            (pSVar22,*(undefined8 *)(this + 0x130),this,lVar42);
                  puVar4 = *(undefined8 **)(this + 0xd8);
                  if (puVar4 < *(undefined8 **)(this + 0xe0)) {
                    *puVar4 = pSVar22;
                    *(undefined8 **)(this + 0xd8) = puVar4 + 1;
                    bVar34 = true;
                    goto LAB_00d74710;
                  }
                  pvVar40 = *(void **)(this + 0xd0);
                  sVar41 = (long)puVar4 - (long)pvVar40;
                  uVar30 = ((long)sVar41 >> 3) + 1;
                  if (uVar30 >> 0x3d != 0) goto LAB_00d74fb8;
                    /* try { // try from 00d747c8 to 00e747cf has its CatchHandler @ 00d750b0 */
                  lVar42 = (long)*(undefined8 **)(this + 0xe0) - (long)pvVar40;
                  if ((ulong)(lVar42 >> 3) < 0xfffffffffffffff) {
                    uVar28 = lVar42 >> 2;
                    if (uVar30 <= uVar28) {
                      uVar30 = uVar28;
                    }
                    if (uVar30 != 0) {
                      if (uVar30 >> 0x3d == 0) goto LAB_00d748d8;
                      goto LAB_00d74fb8;
                    }
                    pvVar24 = (void *)0x0;
                  }
                  else {
                    uVar30 = 0x1fffffffffffffff;
LAB_00d748d8:
                    pvVar24 = operator_new(uVar30 << 3);
                  }
                  puVar4 = (undefined8 *)((long)pvVar24 + ((long)sVar41 >> 3) * 8);
                  *puVar4 = pSVar22;
                  if (0 < (long)sVar41) {
                    memcpy(pvVar24,pvVar40,sVar41);
                  }
                  *(void **)(this + 0xd0) = pvVar24;
                  *(undefined8 **)(this + 0xd8) = puVar4 + 1;
                  *(void **)(this + 0xe0) = (void *)((long)pvVar24 + uVar30 * 8);
                  if (pvVar40 != (void *)0x0) {
                    operator_delete(pvVar40);
                  }
                  bVar34 = true;
                }
                else if (iVar14 == 0x14) {
                  pSVar21 = BaseObject::borrowObject<dragonBones::SlotDislayTimelineState>();
                    /* try { // try from 00d74744 to 00e7474b has its CatchHandler @ 00d75188 */
                  *(long *)(pSVar21 + 0xb8) = lVar26;
                  (**(code **)(*(long *)pSVar21 + 0x30))
                            (pSVar21,*(undefined8 *)(this + 0x130),this,lVar42);
                  puVar4 = *(undefined8 **)(this + 0xd8);
                  if (puVar4 < *(undefined8 **)(this + 0xe0)) {
                    *puVar4 = pSVar21;
                    /* try { // try from 00d74770 to 00e74777 has its CatchHandler @ 00d750c8 */
                    *(undefined8 **)(this + 0xd8) = puVar4 + 1;
                    bVar13 = true;
                  }
                  else {
                    pvVar40 = *(void **)(this + 0xd0);
                    sVar41 = (long)puVar4 - (long)pvVar40;
                    uVar30 = ((long)sVar41 >> 3) + 1;
                    if (uVar30 >> 0x3d != 0) goto LAB_00d74fb8;
                    lVar42 = (long)*(undefined8 **)(this + 0xe0) - (long)pvVar40;
                    if ((ulong)(lVar42 >> 3) < 0xfffffffffffffff) {
                      uVar28 = lVar42 >> 2;
                      if (uVar30 <= uVar28) {
                        uVar30 = uVar28;
                      }
                      if (uVar30 != 0) {
                        if (uVar30 >> 0x3d == 0) goto LAB_00d749ec;
                        goto LAB_00d74fb8;
                      }
                      pvVar24 = (void *)0x0;
                    }
                    else {
                      uVar30 = 0x1fffffffffffffff;
LAB_00d749ec:
                      pvVar24 = operator_new(uVar30 << 3);
                    }
                    puVar4 = (undefined8 *)((long)pvVar24 + ((long)sVar41 >> 3) * 8);
                    /* try { // try from 00d74a04 to 00e74a13 has its CatchHandler @ 00d75084 */
                    *puVar4 = pSVar21;
                    if (0 < (long)sVar41) {
                    /* try { // try from 00d74a14 to 00e74a1f has its CatchHandler @ 00d75064 */
                      memcpy(pvVar24,pvVar40,sVar41);
                    }
                    *(void **)(this + 0xd0) = pvVar24;
                    *(undefined8 **)(this + 0xd8) = puVar4 + 1;
                    *(void **)(this + 0xe0) = (void *)((long)pvVar24 + uVar30 * 8);
                    if (pvVar40 != (void *)0x0) {
                      operator_delete(pvVar40);
                    }
                    bVar13 = true;
                  }
                }
LAB_00d74710:
                plVar37 = plVar37 + 1;
                piVar32 = piVar43;
              } while (plVar27 != plVar37);
            }
            AVar11 = this[0x10];
          }
          if (AVar11 != (AnimationState)0x0) {
            if (!bVar13) {
              pSVar21 = BaseObject::borrowObject<dragonBones::SlotDislayTimelineState>();
              *(long *)(pSVar21 + 0xb8) = lVar26;
              (**(code **)(*(long *)pSVar21 + 0x30))(pSVar21,*(undefined8 *)(this + 0x130),this,0);
              puVar4 = *(undefined8 **)(this + 0xd8);
              if (puVar4 < *(undefined8 **)(this + 0xe0)) {
                *puVar4 = pSVar21;
                *(undefined8 **)(this + 0xd8) = puVar4 + 1;
              }
              else {
                pvVar40 = *(void **)(this + 0xd0);
                    /* try { // try from 00d74b44 to 00e74b57 has its CatchHandler @ 00d75184 */
                sVar41 = (long)puVar4 - (long)pvVar40;
                uVar30 = ((long)sVar41 >> 3) + 1;
                if (uVar30 >> 0x3d != 0) {
LAB_00d74fb8:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                lVar42 = (long)*(undefined8 **)(this + 0xe0) - (long)pvVar40;
                if ((ulong)(lVar42 >> 3) < 0xfffffffffffffff) {
                    /* try { // try from 00d74b6c to 00e74b87 has its CatchHandler @ 00d75180 */
                  uVar28 = lVar42 >> 2;
                  if (uVar30 <= uVar28) {
                    uVar30 = uVar28;
                  }
                  if (uVar30 != 0) {
                    if (uVar30 >> 0x3d == 0) goto LAB_00d74b8c;
                    goto LAB_00d74fb8;
                  }
                  pvVar24 = (void *)0x0;
                }
                else {
                  uVar30 = 0x1fffffffffffffff;
LAB_00d74b8c:
                  pvVar24 = operator_new(uVar30 << 3);
                }
                puVar4 = (undefined8 *)((long)pvVar24 + ((long)sVar41 >> 3) * 8);
                *puVar4 = pSVar21;
                if (0 < (long)sVar41) {
                  memcpy(pvVar24,pvVar40,sVar41);
                }
                *(void **)(this + 0xd0) = pvVar24;
                *(undefined8 **)(this + 0xd8) = puVar4 + 1;
                *(void **)(this + 0xe0) = (void *)((long)pvVar24 + uVar30 * 8);
                if (pvVar40 != (void *)0x0) {
                  operator_delete(pvVar40);
                }
              }
              local_70 = 1;
              local_78 = (BoneAllTimelineState *)pSVar21;
              FUN_00d73be0(pAVar17,&local_78);
            }
            if (!bVar34) {
              pSVar22 = BaseObject::borrowObject<dragonBones::SlotColorTimelineState>();
              *(long *)(pSVar22 + 0xb8) = lVar26;
                    /* try { // try from 00d74c04 to 00e74c1f has its CatchHandler @ 00d750a8 */
              (**(code **)(*(long *)pSVar22 + 0x30))(pSVar22,*(undefined8 *)(this + 0x130),this,0);
              puVar4 = *(undefined8 **)(this + 0xd8);
              if (puVar4 < *(undefined8 **)(this + 0xe0)) {
                *puVar4 = pSVar22;
                *(undefined8 **)(this + 0xd8) = puVar4 + 1;
                    /* try { // try from 00d74c28 to 00e74c2f has its CatchHandler @ 00d751b0 */
              }
              else {
                pvVar40 = *(void **)(this + 0xd0);
                    /* try { // try from 00d74c30 to 00e74d4f has its CatchHandler @ 00d73b28 */
                sVar41 = (long)puVar4 - (long)pvVar40;
                uVar30 = ((long)sVar41 >> 3) + 1;
                if (uVar30 >> 0x3d != 0) goto LAB_00d74fb8;
                lVar42 = (long)*(undefined8 **)(this + 0xe0) - (long)pvVar40;
                if ((ulong)(lVar42 >> 3) < 0xfffffffffffffff) {
                  uVar28 = lVar42 >> 2;
                  if (uVar30 <= uVar28) {
                    uVar30 = uVar28;
                  }
                  if (uVar30 != 0) {
                    if (uVar30 >> 0x3d == 0) goto LAB_00d74c78;
                    goto LAB_00d74fb8;
                  }
                  pvVar24 = (void *)0x0;
                    /* catch() { ... } // from try @ 00d74504 with catch @ 00d74e78 */
                }
                else {
                  uVar30 = 0x1fffffffffffffff;
LAB_00d74c78:
                  pvVar24 = operator_new(uVar30 << 3);
                }
                puVar4 = (undefined8 *)((long)pvVar24 + ((long)sVar41 >> 3) * 8);
                *puVar4 = pSVar22;
                if (0 < (long)sVar41) {
                  memcpy(pvVar24,pvVar40,sVar41);
                }
                *(void **)(this + 0xd0) = pvVar24;
                *(undefined8 **)(this + 0xd8) = puVar4 + 1;
                *(void **)(this + 0xe0) = (void *)((long)pvVar24 + uVar30 * 8);
                if (pvVar40 != (void *)0x0) {
                  operator_delete(pvVar40);
                }
              }
              local_70 = 1;
              local_78 = (BoneAllTimelineState *)pSVar22;
              FUN_00d73be0(pAVar17,&local_78);
            }
            plVar27 = *(long **)(lVar26 + 0x158);
            if (plVar27 != (long *)0x0) {
              plVar37 = (long *)*plVar27;
              plVar27 = (long *)plVar27[1];
              if (plVar37 != plVar27) {
                lVar42 = *plVar37;
                do {
                  if ((lVar42 != 0) && (*(int *)(lVar42 + 0x10) == 2)) {
                    iVar14 = *(int *)(lVar42 + 0x6c);
                    piVar32 = piVar43;
                    if (piVar43 != piVar44) {
                    /* try { // try from 00d74d50 to 00e74d57 has its CatchHandler @ 00d74d58 */
                      iVar9 = *piVar43;
                    /* catch() { ... } // from try @ 00d749d0 with catch @ 00d74d58
                       catch() { ... } // from try @ 00d74d50 with catch @ 00d74d58
                       try { // try from 00d74d58 to 00e75257 has its CatchHandler @ 00d73b28 */
                    /* catch() { ... } // from try @ 00d74618 with catch @ 00d74d5c */
                      while (iVar9 != iVar14) {
                        if (piVar44 + -1 == piVar32) goto LAB_00d74d90;
                        piVar1 = piVar32 + 1;
                        piVar32 = piVar32 + 1;
                    /* catch() { ... } // from try @ 00d745c0 with catch @ 00d74d6c */
                        iVar9 = *piVar1;
                    /* catch() { ... } // from try @ 00d744b4 with catch @ 00d74d7c */
                      }
                    }
                    /* catch() { ... } // from try @ 00d7445c with catch @ 00d74d8c */
                    if (piVar32 == piVar44) {
LAB_00d74d90:
                      pDVar23 = BaseObject::borrowObject<dragonBones::DeformTimelineState>();
                      *(int *)(pDVar23 + 0xc0) = iVar14;
                    /* catch() { ... } // from try @ 00d74350 with catch @ 00d74d9c */
                      *(long *)(pDVar23 + 0xb8) = lVar26;
                    /* catch() { ... } // from try @ 00d742f8 with catch @ 00d74dac */
                      (**(code **)(*(long *)pDVar23 + 0x30))
                                (pDVar23,*(undefined8 *)(this + 0x130),this,0);
                      puVar4 = *(undefined8 **)(this + 0xd8);
                    /* catch() { ... } // from try @ 00d7498c with catch @ 00d74dbc */
                    /* catch() { ... } // from try @ 00d74984 with catch @ 00d74dc0 */
                      if (puVar4 < *(undefined8 **)(this + 0xe0)) {
                        *puVar4 = pDVar23;
                        *(undefined8 **)(this + 0xd8) = puVar4 + 1;
                      }
                      else {
                    /* catch() { ... } // from try @ 00d74294 with catch @ 00d74dc4 */
                        pvVar40 = *(void **)(this + 0xd0);
                    /* catch() { ... } // from try @ 00d74630 with catch @ 00d74dc8 */
                        sVar41 = (long)puVar4 - (long)pvVar40;
                        uVar30 = ((long)sVar41 >> 3) + 1;
                        if (uVar30 >> 0x3d != 0) goto LAB_00d74fb8;
                    /* catch() { ... } // from try @ 00d745a8 with catch @ 00d74ddc */
                        lVar42 = (long)*(undefined8 **)(this + 0xe0) - (long)pvVar40;
                    /* catch() { ... } // from try @ 00d744cc with catch @ 00d74de0 */
                        if ((ulong)(lVar42 >> 3) < 0xfffffffffffffff) {
                          uVar28 = lVar42 >> 2;
                    /* catch() { ... } // from try @ 00d74444 with catch @ 00d74df4 */
                          if (uVar30 <= uVar28) {
                            uVar30 = uVar28;
                          }
                    /* catch() { ... } // from try @ 00d74368 with catch @ 00d74df8 */
                          if (uVar30 != 0) {
                            if (uVar30 >> 0x3d == 0) goto LAB_00d74e0c;
                            goto LAB_00d74fb8;
                          }
                          pvVar24 = (void *)0x0;
                        }
                        else {
                          uVar30 = 0x1fffffffffffffff;
LAB_00d74e0c:
                    /* catch() { ... } // from try @ 00d742e0 with catch @ 00d74e0c */
                    /* catch() { ... } // from try @ 00d74a64 with catch @ 00d74e10 */
                          pvVar24 = operator_new(uVar30 << 3);
                    /* catch() { ... } // from try @ 00d7429c with catch @ 00d74e14
                       catch() { ... } // from try @ 00d7492c with catch @ 00d74e14 */
                        }
                    /* catch() { ... } // from try @ 00d74668 with catch @ 00d74e18 */
                        puVar4 = (undefined8 *)((long)pvVar24 + ((long)sVar41 >> 3) * 8);
                        *puVar4 = pDVar23;
                        if (0 < (long)sVar41) {
                          memcpy(pvVar24,pvVar40,sVar41);
                        }
                        *(void **)(this + 0xd0) = pvVar24;
                        *(undefined8 **)(this + 0xd8) = puVar4 + 1;
                        *(void **)(this + 0xe0) = (void *)((long)pvVar24 + uVar30 * 8);
                        if (pvVar40 != (void *)0x0) {
                          operator_delete(pvVar40);
                        }
                      }
                      local_70 = 1;
                      local_78 = (BoneAllTimelineState *)pDVar23;
                      FUN_00d73be0(pAVar17,&local_78);
                    }
                  }
                  plVar37 = plVar37 + 1;
                  if (plVar37 == plVar27) break;
                  lVar42 = *plVar37;
                } while( true );
              }
            }
          }
        }
        else {
          std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
          ::erase((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
                   *)&local_90,p_Var20);
        }
      }
      else {
        lVar42 = *(long *)(*(long *)(lVar26 + 0x180) + 0xa8);
        sVar41 = *(size_t *)(lVar42 + 0x20);
        pvVar40 = *(void **)(lVar42 + 0x28);
        if ((*(byte *)(lVar42 + 0x18) & 1) == 0) {
          pvVar40 = (void *)(lVar42 + 0x19);
          sVar41 = (ulong)(*(byte *)(lVar42 + 0x18) >> 1);
        }
        do {
                    /* try { // try from 00d74668 to 00e746a7 has its CatchHandler @ 00d74e18 */
          bVar10 = *pbVar36;
          sVar3 = (ulong)(bVar10 >> 1);
          if ((bVar10 & 1) != 0) {
            sVar3 = *(size_t *)(pbVar36 + 8);
          }
          if (sVar3 == sVar41) {
            pbVar33 = *(byte **)(pbVar36 + 0x10);
            if ((bVar10 & 1) == 0) {
              pbVar33 = pbVar36 + 1;
            }
            if ((bVar10 & 1) == 0) {
              if (sVar41 == 0) {
LAB_00d745b4:
                if (pbVar6 != pbVar36) goto LAB_00d745bc;
                break;
              }
              uVar30 = 0;
              while (pbVar36[uVar30 + 1] == *(byte *)((long)pvVar40 + uVar30)) {
                uVar30 = uVar30 + 1;
                if (bVar10 >> 1 == uVar30) goto LAB_00d745b4;
              }
            }
            else if ((sVar41 == 0) || (iVar14 = memcmp(pbVar33,pvVar40,sVar41), iVar14 == 0))
            goto LAB_00d745b4;
          }
          pbVar36 = pbVar36 + 0x18;
        } while (pbVar36 != pbVar6);
      }
      plVar31 = plVar31 + 1;
                    /* try { // try from 00d74618 to 00e7462b has its CatchHandler @ 00d74d5c */
      p_Var20 = local_90;
    } while (plVar31 != plVar5);
  }
  do {
    if (p_Var20 == (__tree_node *)&local_88) {
      if (piVar43 != (int *)0x0) {
        operator_delete(piVar43);
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
      ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::SlotTimelineState*,std::__ndk1::allocator<dragonBones::SlotTimelineState*>>>>>
                 *)&local_90,local_88);
      if (*(long *)(lVar12 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* catch() { ... } // from try @ 00d74474 with catch @ 00d74fa4 */
      return;
    }
    puVar8 = *(undefined8 **)(p_Var20 + 0x40);
    for (puVar4 = *(undefined8 **)(p_Var20 + 0x38); puVar4 != puVar8; puVar4 = puVar4 + 1) {
                    /* catch() { ... } // from try @ 00d743a0 with catch @ 00d74ed8 */
      plVar31 = *(long **)(this + 0xd0);
      plVar5 = *(long **)(this + 0xd8);
      pBVar38 = (BaseObject *)*puVar4;
      if ((plVar31 != plVar5) && ((BaseObject *)*plVar31 != pBVar38)) {
        plVar27 = plVar31;
        do {
          plVar31 = plVar5;
          if (plVar5 + -1 == plVar27) break;
          plVar37 = plVar27 + 1;
          plVar31 = plVar27 + 1;
          plVar27 = plVar31;
        } while ((BaseObject *)*plVar37 != pBVar38);
      }
      sVar41 = (long)plVar5 - (long)(plVar31 + 1);
      if (sVar41 != 0) {
        memmove(plVar31,plVar31 + 1,sVar41);
                    /* catch() { ... } // from try @ 00d745d8 with catch @ 00d74f38 */
      }
      *(long **)(this + 0xd8) = plVar31 + ((long)sVar41 >> 3);
      BaseObject::returnToPool(pBVar38);
    }
    p_Var29 = *(__tree_node **)(p_Var20 + 8);
    if (*(__tree_node **)(p_Var20 + 8) == (__tree_node *)0x0) {
      p_Var29 = p_Var20 + 0x10;
      bVar13 = *(__tree_node **)*(__tree_node **)p_Var29 != p_Var20;
      p_Var20 = *(__tree_node **)p_Var29;
      if (bVar13) {
        do {
          lVar26 = *(long *)p_Var29;
          p_Var29 = (__tree_node *)(lVar26 + 0x10);
          p_Var20 = *(__tree_node **)p_Var29;
        } while (*(long *)p_Var20 != lVar26);
      }
    }
    else {
      do {
        p_Var20 = p_Var29;
        p_Var29 = *(__tree_node **)p_Var20;
      } while (*(__tree_node **)p_Var20 != (__tree_node *)0x0);
    }
  } while( true );
}

