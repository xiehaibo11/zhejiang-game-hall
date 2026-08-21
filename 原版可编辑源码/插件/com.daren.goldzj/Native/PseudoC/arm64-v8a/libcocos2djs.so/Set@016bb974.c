
/* v8::internal::compiler::PersistentMap<v8::internal::compiler::Variable,
   v8::internal::compiler::Node*, v8::base::hash<v8::internal::compiler::Variable>
   >::Set(v8::internal::compiler::Variable, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::
PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
::Set(PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
      *this,uint param_2,long param_3)

{
  uint uVar1;
  piecewise_construct_t pVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
  *p_Var7;
  long *plVar8;
  Zone *pZVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
  *pPVar13;
  ulong uVar14;
  long *plVar15;
  uint *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  undefined8 uVar19;
  piecewise_construct_t *ppVar20;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
  *p_Var21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint local_170 [2];
  undefined8 auStack_168 [31];
  uint local_70 [4];
  piecewise_construct_t *local_48;
  
  local_70[0] = param_2;
  uVar5 = base::hash_value(param_2);
  ppVar20 = *(piecewise_construct_t **)this;
  uVar24 = 0;
  if (ppVar20 != (piecewise_construct_t *)0x0) {
LAB_016bb9c0:
    uVar22 = (uint)uVar24;
    if (*(uint *)(ppVar20 + 0x14) == uVar5) {
      pVar2 = ppVar20[0x10];
      if ((int)(char)pVar2 <= (int)uVar22) goto LAB_016bbaa8;
      lVar25 = (long)(int)(char)pVar2;
      uVar24 = -(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3;
      lVar10 = (long)(int)uVar22;
      memcpy((void *)((long)local_170 + uVar24),ppVar20 + uVar24 + 0x20,lVar25 * 8 - uVar24);
      uVar24 = lVar25 - lVar10;
      if (uVar24 < 2) goto LAB_016bba98;
      uVar11 = uVar24 & 0xfffffffffffffffe;
      lVar10 = uVar11 + lVar10;
      uVar14 = uVar11;
      do {
        uVar14 = uVar14 - 2;
      } while (uVar14 != 0);
      if (uVar24 != uVar11) {
LAB_016bba98:
        lVar25 = lVar25 - lVar10;
        do {
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      uVar24 = (ulong)(uint)(int)(char)pVar2;
LAB_016bbaa8:
      uVar22 = (uint)uVar24;
      if (*(long *)(ppVar20 + 0x18) == 0) {
        if (*(uint *)ppVar20 != param_2) goto LAB_016bbcf4;
        bVar4 = false;
        pPVar13 = (PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
                   *)(ppVar20 + 8);
      }
      else {
        plVar8 = (long *)(*(long *)(ppVar20 + 0x18) + 8);
        plVar15 = (long *)*plVar8;
        plVar12 = plVar8;
        if (plVar15 != (long *)0x0) {
          do {
            if ((int)param_2 <= (int)plVar15[4]) {
              plVar12 = plVar15;
            }
            plVar15 = (long *)plVar15[(int)plVar15[4] < (int)param_2];
          } while (plVar15 != (long *)0x0);
          if ((plVar12 != plVar8) && ((int)plVar12[4] <= (int)param_2)) {
            bVar4 = false;
            pPVar13 = (PersistentMap<v8::internal::compiler::Variable,v8::internal::compiler::Node*,v8::base::hash<v8::internal::compiler::Variable>>
                       *)(plVar12 + 5);
            goto LAB_016bbb04;
          }
        }
LAB_016bbcf4:
        bVar4 = false;
        pPVar13 = this + 8;
      }
      goto LAB_016bbb04;
    }
    pVar2 = ppVar20[0x10];
    uVar1 = *(uint *)(ppVar20 + 0x14) ^ uVar5;
    if (-1 < (int)(uVar1 << (ulong)(uVar22 & 0x1f))) {
      uVar24 = (ulong)(int)uVar22;
      if ((long)(char)pVar2 <= (long)uVar24) goto LAB_016bba10;
      do {
        uVar19 = *(undefined8 *)(ppVar20 + uVar24 * 8 + 0x20);
        uVar14 = uVar24;
        while( true ) {
          uVar24 = uVar14 + 1;
          *(undefined8 *)(local_170 + uVar14 * 2) = uVar19;
          if ((int)(uVar1 << (ulong)((int)uVar14 + 1U & 0x1f)) < 0) goto LAB_016bba18;
          if ((long)uVar24 < (long)(char)pVar2) break;
LAB_016bba10:
          uVar19 = 0;
          uVar14 = uVar24;
        }
      } while( true );
    }
LAB_016bba18:
    iVar23 = (int)uVar24;
    *(piecewise_construct_t **)(local_170 + (long)iVar23 * 2) = ppVar20;
    if (iVar23 < (char)pVar2) goto code_r0x016bba28;
    uVar24 = (ulong)(iVar23 + 1);
  }
LAB_016bbaf8:
  uVar22 = (uint)uVar24;
  ppVar20 = (piecewise_construct_t *)0x0;
  pPVar13 = this + 8;
  bVar4 = true;
LAB_016bbb04:
  if (*(long *)pPVar13 == param_3) {
    return;
  }
  if ((bVar4) || ((*(long *)(ppVar20 + 0x18) == 0 && (*(uint *)ppVar20 == param_2)))) {
    p_Var21 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
               *)0x0;
  }
  else {
    pZVar9 = *(Zone **)(this + 0x10);
    p_Var21 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
                **)(pZVar9 + 0x10);
    if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)p_Var21) < 0x20) {
      p_Var21 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
                 *)Zone::NewExpand(pZVar9,0x20);
    }
    else {
      *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
        **)(pZVar9 + 0x10) = p_Var21 + 0x20;
    }
    uVar19 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(p_Var21 + 8) = 0;
    *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
      **)p_Var21 = p_Var21 + 8;
    *(undefined8 *)(p_Var21 + 0x10) = uVar19;
    *(undefined8 *)(p_Var21 + 0x18) = 0;
    p_Var7 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
               **)(ppVar20 + 0x18);
    if (p_Var7 == (__tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
                   *)0x0) {
      uVar19 = *(undefined8 *)(ppVar20 + 8);
      local_48 = ppVar20;
      lVar10 = std::__ndk1::
               __tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
               ::
               __emplace_unique_key_args<v8::internal::compiler::Variable,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::Variable_const&>,std::__ndk1::tuple<>>
                         (p_Var21,ppVar20,(tuple *)&DAT_01a5c16a,(tuple *)&local_48);
      *(undefined8 *)(lVar10 + 0x28) = uVar19;
    }
    else if (p_Var7 != p_Var21) {
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
      ::
      __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,void*>*,long>>
                (p_Var21,*(undefined8 *)p_Var7,p_Var7 + 8);
    }
    local_48 = (piecewise_construct_t *)local_70;
    lVar10 = std::__ndk1::
             __tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
             ::
             __emplace_unique_key_args<v8::internal::compiler::Variable,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::Variable_const&>,std::__ndk1::tuple<>>
                       (p_Var21,(piecewise_construct_t *)local_70,(tuple *)&DAT_01a5c16a,
                        (tuple *)&local_48);
    *(long *)(lVar10 + 0x28) = param_3;
  }
  pZVar9 = *(Zone **)(this + 0x10);
  uVar1 = uVar22;
  if ((int)uVar22 < 2) {
    uVar1 = 1;
  }
  puVar6 = *(uint **)(pZVar9 + 0x10);
  uVar24 = (-(ulong)(uVar1 - 1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uVar1 - 1) << 3) + 0x28;
  if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)puVar6) < uVar24) {
    puVar6 = (uint *)Zone::NewExpand(pZVar9,uVar24);
  }
  else {
    *(ulong *)(pZVar9 + 0x10) = (long)puVar6 + uVar24;
  }
  *(long *)(puVar6 + 2) = param_3;
  *(char *)(puVar6 + 4) = (char)uVar22;
  puVar6[5] = uVar5;
  *puVar6 = local_70[0];
  *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::__map_value_compare<v8::internal::compiler::Variable,std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>,std::__ndk1::less<v8::internal::compiler::Variable>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Variable,v8::internal::compiler::Node*>>>
    **)(puVar6 + 6) = p_Var21;
  puVar6[8] = 0;
  puVar6[9] = 0;
  if (0 < (int)uVar22) {
    uVar24 = (ulong)uVar22;
    if ((uVar22 < 4) ||
       ((puVar6 + 8 < local_170 + uVar24 * 2 && (local_170 < puVar6 + uVar24 * 2 + 8)))) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar24 & 0xfffffffc;
      puVar17 = auStack_168 + 1;
      puVar16 = puVar6 + 0xc;
      uVar11 = uVar14;
      do {
        puVar3 = puVar17 + -1;
        uVar19 = puVar17[-2];
        uVar27 = puVar17[1];
        uVar26 = *puVar17;
        puVar17 = puVar17 + 4;
        uVar11 = uVar11 - 4;
        *(undefined8 *)(puVar16 + -2) = *puVar3;
        *(undefined8 *)(puVar16 + -4) = uVar19;
        *(undefined8 *)(puVar16 + 2) = uVar27;
        *(undefined8 *)puVar16 = uVar26;
        puVar16 = puVar16 + 8;
      } while (uVar11 != 0);
      if (uVar14 == uVar24) goto LAB_016bbc84;
    }
    lVar10 = uVar24 - uVar14;
    puVar16 = local_170 + uVar14 * 2;
    puVar18 = puVar6 + uVar14 * 2 + 8;
    do {
      lVar10 = lVar10 + -1;
      *(undefined8 *)puVar18 = *(undefined8 *)puVar16;
      puVar16 = puVar16 + 2;
      puVar18 = puVar18 + 2;
    } while (lVar10 != 0);
  }
LAB_016bbc84:
  *(uint **)this = puVar6;
  return;
code_r0x016bba28:
  ppVar20 = *(piecewise_construct_t **)(ppVar20 + (long)iVar23 * 8 + 0x20);
  uVar24 = (ulong)(iVar23 + 1);
  if (ppVar20 == (piecewise_construct_t *)0x0) goto LAB_016bbaf8;
  goto LAB_016bb9c0;
}

