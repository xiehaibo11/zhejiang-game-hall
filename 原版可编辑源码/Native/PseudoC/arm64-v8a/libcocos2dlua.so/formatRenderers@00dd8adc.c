
/* cocos2d::ui::RichText::formatRenderers() */

void __thiscall cocos2d::ui::RichText::formatRenderers(RichText *this)

{
  long lVar1;
  float fVar2;
  undefined8 *puVar3;
  long lVar4;
  Size *pSVar5;
  float *pfVar6;
  RichText *pRVar7;
  long lVar8;
  ulong uVar9;
  Vector *pVVar10;
  ulong uVar11;
  undefined8 *puVar12;
  Vector *pVVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_b0;
  float local_a4;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  long local_88;
  
                    /* catch() { ... } // from try @ 00dd8abc with catch @ 00dd8af0 */
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  local_a0 = (undefined8 *)KEY_VERTICAL_SPACE;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_VERTICAL_SPACE,
                     (tuple *)&DAT_0141ecaa,(tuple *)&local_a0);
  fVar18 = (float)cocos2d::Value::asFloat((Value *)(lVar4 + 0x28));
  local_a0 = (undefined8 *)KEY_FONT_SIZE;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_FONT_SIZE,
                     (tuple *)&DAT_0141ecaa,(tuple *)&local_a0);
  fVar19 = (float)cocos2d::Value::asFloat((Value *)(lVar4 + 0x28));
  if (this[0x387] == (RichText)0x0) {
    lVar4 = *(long *)(this + 0x510);
    puStack_98 = (undefined8 *)0x0;
    local_90 = (undefined8 *)0x0;
    local_a0 = (undefined8 *)0x0;
    if (*(long *)(this + 0x518) - lVar4 != 0) {
                    /* try { // try from 00dd8cec to 00ed8d07 has its CatchHandler @ 00dd8f3c */
      lVar8 = *(long *)(this + 0x518) - lVar4 >> 3;
      uVar11 = lVar8 * -0x5555555555555555;
      if (uVar11 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = lVar8 * -0x5555555555555554;
                    /* try { // try from 00dd8d0c to 00ed8d1b has its CatchHandler @ 00dd8f38 */
      local_a0 = operator_new(uVar9);
      puVar17 = (undefined8 *)((long)local_a0 + uVar9);
      local_90 = puVar17;
      memset(local_a0,0,uVar9);
      uVar9 = 0;
      fVar21 = 0.0;
      puStack_98 = puVar17;
      do {
        plVar15 = (long *)(lVar4 + uVar9 * 0x18);
        puVar17 = (undefined8 *)*plVar15;
        puVar14 = (undefined8 *)plVar15[1];
        if (puVar17 == puVar14) {
LAB_00dd8d8c:
          fVar20 = *(float *)(*(long *)(this + 0x528) + uVar9 * 4);
          if (fVar20 == 0.0) {
            fVar20 = fVar19;
          }
        }
        else {
          fVar20 = 0.0;
          do {
            lVar4 = (**(code **)(*(long *)*puVar17 + 0x168))();
            puVar17 = puVar17 + 1;
                    /* try { // try from 00dd8d70 to 00ed8db7 has its CatchHandler @ 00dd8ee4 */
            if (fVar20 <= *(float *)(lVar4 + 4)) {
              fVar20 = *(float *)(lVar4 + 4);
            }
          } while (puVar14 != puVar17);
          if (*plVar15 == plVar15[1]) goto LAB_00dd8d8c;
        }
        fVar2 = fVar20;
        if (uVar9 != 0) {
          fVar2 = fVar18 + fVar20;
        }
        *(float *)((long)local_a0 + uVar9 * 4) = fVar20;
        uVar9 = uVar9 + 1;
        fVar21 = fVar21 + fVar2;
        if (uVar11 <= uVar9) goto LAB_00dd8e30;
        lVar4 = *(long *)(this + 0x510);
      } while( true );
    }
    *(undefined4 *)(this + 0x3a0) = 0;
    goto LAB_00dd8f38;
  }
  puStack_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  pVVar10 = *(Vector **)(this + 0x518);
  pVVar13 = *(Vector **)(this + 0x510);
  if ((long)pVVar10 - (long)pVVar13 != 0) {
    lVar4 = (long)pVVar10 - (long)pVVar13 >> 3;
    if ((ulong)(lVar4 * -0x5555555555555555) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    puStack_98 = operator_new(lVar4 * -0x5555555555555550);
    local_90 = puStack_98 + lVar4 * -0xaaaaaaaaaaaaaaa;
  }
  local_a0 = puStack_98;
  if (pVVar13 == pVVar10) {
    fVar19 = 0.0;
    fVar18 = 0.0;
  }
  else {
                    /* try { // try from 00dd8bd0 to 00ed8c33 has its CatchHandler @ 00dd8bd0
                       catch() { ... } // from try @ 00dd8bd0 with catch @ 00dd8bd0
                       catch() { ... } // from try @ 00dd8e70 with catch @ 00dd8bd0 */
    fVar18 = 0.0;
    fVar19 = 0.0;
    do {
      local_a4 = 0.0;
      puVar17 = *(undefined8 **)pVVar13;
      puVar14 = *(undefined8 **)(pVVar13 + 8);
      if (puVar17 == puVar14) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = 0.0;
        do {
          (**(code **)(*(long *)*puVar17 + 0x148))((long *)*puVar17,&Vec2::ZERO);
                    /* try { // try from 00dd8c34 to 00ed8c3f has its CatchHandler @ 00dd8ed0 */
          (**(code **)(*(long *)*puVar17 + 200))(local_a4,fVar19);
                    /* try { // try from 00dd8c40 to 00ed8c4f has its CatchHandler @ 00dd8ecc */
          (**(code **)(*(long *)this + 0x538))(this,*puVar17,1);
          pSVar5 = (Size *)(**(code **)(*(long *)*puVar17 + 0x168))();
          Size::Size((Size *)&local_b0,pSVar5);
          puVar17 = puVar17 + 1;
          local_a4 = (float)local_b0 + local_a4;
          fVar20 = local_b0._4_4_;
          if (local_b0._4_4_ <= fVar21) {
            fVar20 = fVar21;
          }
          fVar21 = fVar20;
          fVar18 = fVar18 + (float)local_b0;
                    /* try { // try from 00dd8c94 to 00ed8ca3 has its CatchHandler @ 00dd8f28 */
        } while (puVar14 != puVar17);
      }
      local_b0 = pVVar13;
      if (puStack_98 < local_90) {
        *(float *)(puStack_98 + 1) = local_a4;
        *puStack_98 = pVVar13;
        puStack_98 = puStack_98 + 2;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<cocos2d::Vector<cocos2d::Node*>*,float>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::Vector<cocos2d::Node*>*,float>>>
        ::__emplace_back_slow_path<cocos2d::Vector<cocos2d::Node*>*,float&>
                  ((vector<std::__ndk1::pair<cocos2d::Vector<cocos2d::Node*>*,float>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::Vector<cocos2d::Node*>*,float>>>
                    *)&local_a0,(Vector **)&local_b0,&local_a4);
      }
      pVVar13 = pVVar13 + 0x18;
      fVar19 = fVar19 - fVar21;
    } while (pVVar13 != pVVar10);
  }
                    /* try { // try from 00dd8dd0 to 00ed8ddb has its CatchHandler @ 00dd8f24 */
  Size::Size((Size *)&local_b0,fVar18,-fVar19);
  (**(code **)(*(long *)this + 0x160))(this,&local_b0);
  puVar14 = puStack_98;
  for (puVar17 = local_a0; puVar17 != puVar14; puVar17 = puVar17 + 2) {
    doHorizontalAlignment(this,(Vector *)*puVar17,*(float *)(puVar17 + 1));
                    /* try { // try from 00dd8e14 to 00ed8e6f has its CatchHandler @ 00dd8ee0 */
  }
  goto joined_r0x00dd8f24;
LAB_00dd8e30:
  lVar8 = *(long *)(this + 0x510);
  *(float *)(this + 0x3a0) = fVar21;
  lVar4 = *(long *)(this + 0x518) - lVar8;
  if (lVar4 != 0) {
    uVar11 = 0;
    while( true ) {
      fVar19 = *(float *)((long)local_a0 + uVar11 * 4);
      pVVar13 = (Vector *)(lVar8 + uVar11 * 0x18);
                    /* try { // try from 00dd8e70 to 00ed8f77 has its CatchHandler @ 00dd8bd0 */
      puVar17 = *(undefined8 **)pVVar13;
      puVar14 = *(undefined8 **)(pVVar13 + 8);
      if (uVar11 != 0) {
        fVar19 = fVar18 + fVar19;
      }
      fVar21 = fVar21 - fVar19;
      fVar19 = 0.0;
      for (; puVar17 != puVar14; puVar17 = puVar17 + 1) {
        (**(code **)(*(long *)*puVar17 + 0x148))((long *)*puVar17,&Vec2::ZERO);
        (**(code **)(*(long *)*puVar17 + 200))(fVar19,fVar21);
                    /* catch() { ... } // from try @ 00dd8c40 with catch @ 00dd8ecc */
                    /* catch() { ... } // from try @ 00dd8c34 with catch @ 00dd8ed0 */
        (**(code **)(*(long *)this + 0x538))(this,*puVar17,1);
                    /* catch() { ... } // from try @ 00dd8e14 with catch @ 00dd8ee0 */
        pfVar6 = (float *)(**(code **)(*(long *)*puVar17 + 0x168))();
                    /* catch() { ... } // from try @ 00dd8d70 with catch @ 00dd8ee4 */
        fVar19 = fVar19 + *pfVar6;
      }
      doHorizontalAlignment(this,pVVar13,fVar19);
      uVar11 = uVar11 + 1;
      if ((ulong)((lVar4 >> 3) * -0x5555555555555555) <= uVar11) break;
      lVar8 = *(long *)(this + 0x510);
    }
  }
joined_r0x00dd8f24:
                    /* catch() { ... } // from try @ 00dd8dd0 with catch @ 00dd8f24 */
  if (local_a0 != (undefined8 *)0x0) {
    puStack_98 = local_a0;
    operator_delete(local_a0);
  }
LAB_00dd8f38:
                    /* catch() { ... } // from try @ 00dd8d0c with catch @ 00dd8f38 */
  puVar14 = *(undefined8 **)(this + 0x510);
                    /* catch() { ... } // from try @ 00dd8cec with catch @ 00dd8f3c */
  puVar17 = *(undefined8 **)(this + 0x518);
  while (puVar3 = puVar17, puVar3 != puVar14) {
    puVar17 = puVar3 + -3;
    puVar12 = (undefined8 *)*puVar17;
    puVar16 = (undefined8 *)puVar3[-2];
    if (puVar12 != puVar16) {
      do {
        Ref::release((Ref *)*puVar12);
        puVar12 = puVar12 + 1;
      } while (puVar16 != puVar12);
      puVar12 = (undefined8 *)*puVar17;
    }
    puVar3[-2] = puVar12;
    if (puVar12 != (undefined8 *)0x0) {
      puVar3[-2] = puVar12;
      operator_delete(puVar12);
    }
  }
  *(undefined8 **)(this + 0x518) = puVar14;
  *(undefined8 *)(this + 0x530) = *(undefined8 *)(this + 0x528);
  if (this[0x387] == (RichText)0x0) {
    lVar4 = *(long *)this;
    pRVar7 = this + 0x39c;
  }
  else {
    (**(code **)(*(long *)this + 0x610))(&local_a0,this);
    lVar4 = *(long *)this;
    pRVar7 = (RichText *)&local_a0;
  }
  (**(code **)(lVar4 + 0x160))(this,pRVar7);
  Widget::updateContentSizeWithTextureSize((Size *)this);
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

