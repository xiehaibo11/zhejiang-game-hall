
/* cocos2d::Label::shrinkLabelToContentSize(std::__ndk1::function<bool ()> const&) */

void __thiscall cocos2d::Label::shrinkLabelToContentSize(Label *this,function *param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  code *pcVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  void *local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  void *local_d8;
  ulong local_d0;
  undefined8 *local_c8;
  undefined4 local_b8;
  undefined **local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  Label *local_98;
  undefined ***local_90;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar10 = (float)getRenderingFontSize(this);
  std::__ndk1::
  unordered_map<char32_t,cocos2d::FontLetterDefinition,std::__ndk1::hash<char32_t>,std::__ndk1::equal_to<char32_t>,std::__ndk1::allocator<std::__ndk1::pair<char32_t_const,cocos2d::FontLetterDefinition>>>
  ::unordered_map((unordered_map<char32_t,cocos2d::FontLetterDefinition,std::__ndk1::hash<char32_t>,std::__ndk1::equal_to<char32_t>,std::__ndk1::allocator<std::__ndk1::pair<char32_t_const,cocos2d::FontLetterDefinition>>>
                   *)&local_d8,(unordered_map *)(*(long *)(this + 0x3d0) + 0x50));
  uStack_f8 = 0;
  local_100 = (void *)0x0;
  uStack_e8 = 0;
  local_f0 = (undefined8 *)0x0;
  local_e0 = local_b8;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
            *)&local_100,local_d0);
  for (plVar9 = local_c8; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
    ::
    __emplace_unique_key_args<char32_t,std::__ndk1::pair<char32_t_const,cocos2d::FontLetterDefinition>const&>
              ((__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
                *)&local_100,(wchar32 *)(plVar9 + 2),(pair *)(plVar9 + 2));
  }
  fVar11 = *(float *)(this + 0x424);
  iVar8 = 0;
  bVar2 = true;
  do {
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    if ((uVar4 & 1) == 0) {
LAB_00f140e8:
      setLineHeight(this,fVar11);
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
      ::swap((__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
              *)(*(long *)(this + 0x3d0) + 0x50),(__hash_table *)&local_d8);
      pvVar7 = local_100;
      puVar3 = local_f0;
      if ((!bVar2) && (0.0 <= fVar10 - (float)iVar8)) {
                    /* try { // try from 00f1411c to 01014123 has its CatchHandler @ 00f141a4 */
        scaleFontSizeDown(this,fVar10 - (float)iVar8);
        pvVar7 = local_100;
        puVar3 = local_f0;
      }
                    /* try { // try from 00f14124 to 010141bf has its CatchHandler @ 00f140e4 */
      while (puVar3 != (void *)0x0) {
        pvVar6 = (void *)*puVar3;
        local_100 = pvVar7;
        operator_delete(puVar3);
        pvVar7 = local_100;
        puVar3 = pvVar6;
      }
      local_100 = (void *)0x0;
      pvVar6 = local_d8;
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        pvVar6 = local_d8;
      }
      while (local_c8 != (void *)0x0) {
        pvVar7 = (void *)*local_c8;
        local_d8 = pvVar6;
        operator_delete(local_c8);
        pvVar6 = local_d8;
        local_c8 = pvVar7;
      }
      local_d8 = (void *)0x0;
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
      }
      if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* catch() { ... } // from try @ 00f1411c with catch @ 00f141a4 */
      return;
    }
    iVar8 = iVar8 + 1;
    if (fVar10 - (float)iVar8 <= 0.0) {
                    /* try { // try from 00f140e4 to 0101411b has its CatchHandler @ 00f140e4
                       catch() { ... } // from try @ 00f140e4 with catch @ 00f140e4
                       catch() { ... } // from try @ 00f14124 with catch @ 00f140e4 */
      bVar2 = false;
      goto LAB_00f140e8;
    }
    fVar12 = (fVar10 - (float)iVar8) / fVar10;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
    ::swap((__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
            *)(*(long *)(this + 0x3d0) + 0x50),(__hash_table *)&local_100);
    FontAtlas::scaleFontLetterDefinition(*(FontAtlas **)(this + 0x3d0),fVar12);
    setLineHeight(this,fVar11 * fVar12);
    local_98 = this;
    local_90 = &local_b0;
    if ((*(float *)(this + 0x43c) <= 0.0) || (this[0x438] != (Label)0x0)) {
      local_b0 = &PTR_FUN_016ff588;
      uStack_a0 = 0;
      local_a8 = getFirstCharLen;
      multilineTextWrap(this,(function *)&local_b0);
    }
    else {
      uStack_a0 = 0;
      local_a8 = getFirstWordLen;
      local_b0 = &PTR_FUN_016ff588;
      multilineTextWrap(this,(function *)&local_b0);
    }
    if (&local_b0 == local_90) {
      pcVar5 = (code *)(*local_90)[4];
LAB_00f14098:
      (*pcVar5)();
    }
    else if (local_90 != (undefined ***)0x0) {
      pcVar5 = (code *)(*local_90)[5];
      goto LAB_00f14098;
    }
    computeAlignmentOffset(this);
    local_e0 = local_b8;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,void*>*>>
              ((__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
                *)&local_100,local_c8,0);
    bVar2 = false;
  } while( true );
}

