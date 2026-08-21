
/* v8::internal::compiler::PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo,
   v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*> >
   >::Set(std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*>,
   v8::internal::compiler::CsaLoadElimination::FieldInfo) */

void v8::internal::compiler::
     PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
     ::Set(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  piecewise_construct_t pVar2;
  ulong *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  pair *ppVar9;
  long *plVar10;
  Zone *pZVar11;
  long lVar12;
  long *plVar13;
  piecewise_construct_t *ppVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  piecewise_construct_t *ppVar21;
  pair *ppVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong local_188 [32];
  ulong local_88;
  ulong uStack_80;
  piecewise_construct_t *local_70 [2];
  
  local_88 = param_2;
  uStack_80 = param_3;
  uVar6 = base::hash_value(param_3);
  uVar6 = base::hash_combine(0,uVar6);
  uVar7 = base::hash_value(param_2);
  uVar5 = base::hash_combine(uVar6,uVar7);
  ppVar21 = (piecewise_construct_t *)*param_1;
  uVar6 = 0;
joined_r0x0169bc48:
  if (ppVar21 == (piecewise_construct_t *)0x0) goto LAB_0169bdc8;
  uVar23 = (uint)uVar6;
  if (*(uint *)(ppVar21 + 0x24) != uVar5) {
    pVar2 = ppVar21[0x20];
    uVar1 = *(uint *)(ppVar21 + 0x24) ^ uVar5;
    if (-1 < (int)(uVar1 << (ulong)(uVar23 & 0x1f))) {
      uVar6 = (ulong)(int)uVar23;
      if ((long)(char)pVar2 <= (long)uVar6) goto LAB_0169bca0;
      do {
        uVar20 = *(ulong *)(ppVar21 + uVar6 * 8 + 0x30);
        uVar7 = uVar6;
        while( true ) {
          uVar6 = uVar7 + 1;
          local_188[uVar7] = uVar20;
          if ((int)(uVar1 << (ulong)((int)uVar7 + 1U & 0x1f)) < 0) goto LAB_0169bca8;
          if ((long)uVar6 < (long)(char)pVar2) break;
LAB_0169bca0:
          uVar20 = 0;
          uVar7 = uVar6;
        }
      } while( true );
    }
LAB_0169bca8:
    iVar24 = (int)uVar6;
    local_188[iVar24] = (ulong)ppVar21;
    if (iVar24 < (char)pVar2) goto code_r0x0169bcb8;
    uVar6 = (ulong)(iVar24 + 1);
    goto LAB_0169bdc8;
  }
  pVar2 = ppVar21[0x20];
  if ((int)(char)pVar2 <= (int)uVar23) goto LAB_0169bd38;
  lVar25 = (long)(int)(char)pVar2;
  uVar6 = -(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
  lVar12 = (long)(int)uVar23;
  memcpy((void *)((long)local_188 + uVar6),ppVar21 + uVar6 + 0x30,lVar25 * 8 - uVar6);
  uVar6 = lVar25 - lVar12;
  if (uVar6 < 2) goto LAB_0169bd28;
  uVar20 = uVar6 & 0xfffffffffffffffe;
  lVar12 = uVar20 + lVar12;
  uVar7 = uVar20;
  do {
    uVar7 = uVar7 - 2;
  } while (uVar7 != 0);
  if (uVar6 != uVar20) {
LAB_0169bd28:
    lVar25 = lVar25 - lVar12;
    do {
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  uVar6 = (ulong)(uint)(int)(char)pVar2;
LAB_0169bd38:
  uVar23 = (uint)uVar6;
  if (*(ulong *)(ppVar21 + 0x28) == 0) {
    if ((*(ulong *)ppVar21 == param_2) && (*(ulong *)(ppVar21 + 8) == param_3)) {
      bVar4 = false;
      ppVar14 = ppVar21 + 0x10;
    }
    else {
LAB_0169bff8:
      bVar4 = false;
      ppVar14 = (piecewise_construct_t *)(param_1 + 1);
    }
    goto LAB_0169bdd4;
  }
  plVar10 = (long *)(*(ulong *)(ppVar21 + 0x28) + 8);
  plVar16 = (long *)*plVar10;
  plVar13 = plVar10;
  if (plVar16 == (long *)0x0) goto LAB_0169bff8;
  do {
    while (param_2 <= (ulong)plVar16[4]) {
      if (((ulong)plVar16[4] <= param_2) && ((ulong)plVar16[5] < param_3)) {
        plVar16 = (long *)plVar16[1];
        goto joined_r0x0169bd80;
      }
      plVar17 = (long *)*plVar16;
      plVar13 = plVar16;
      plVar16 = plVar17;
      if (plVar17 == (long *)0x0) goto LAB_0169bd94;
    }
    plVar16 = (long *)plVar16[1];
joined_r0x0169bd80:
  } while (plVar16 != (long *)0x0);
LAB_0169bd94:
  if (((plVar13 == plVar10) || (param_2 < (ulong)plVar13[4])) ||
     ((param_2 <= (ulong)plVar13[4] && (param_3 < (ulong)plVar13[5])))) goto LAB_0169bff8;
  bVar4 = false;
  ppVar14 = (piecewise_construct_t *)(plVar13 + 6);
LAB_0169bdd4:
  if ((*(ulong *)ppVar14 == param_4) && ((uint)(byte)ppVar14[8] == ((uint)param_5 & 0xff))) {
    return;
  }
  if ((bVar4) ||
     (((*(long *)(ppVar21 + 0x28) == 0 && (*(ulong *)ppVar21 == param_2)) &&
      (*(ulong *)(ppVar21 + 8) == param_3)))) {
    ppVar22 = (pair *)0x0;
  }
  else {
    pZVar11 = (Zone *)param_1[3];
    ppVar22 = *(pair **)(pZVar11 + 0x10);
    if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)ppVar22) < 0x20) {
      ppVar22 = (pair *)Zone::NewExpand(pZVar11,0x20);
    }
    else {
      *(pair **)(pZVar11 + 0x10) = ppVar22 + 0x20;
    }
    uVar6 = param_1[3];
    *(undefined8 *)(ppVar22 + 8) = 0;
    *(pair **)ppVar22 = ppVar22 + 8;
    *(ulong *)(ppVar22 + 0x10) = uVar6;
    *(undefined8 *)(ppVar22 + 0x18) = 0;
    ppVar9 = *(pair **)(ppVar21 + 0x28);
    if (ppVar9 == (pair *)0x0) {
      local_70[0] = ppVar21;
      lVar12 = std::__ndk1::
               __tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>>>
               ::
               __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>const&>,std::__ndk1::tuple<>>
                         (ppVar22,ppVar21,(tuple *)&DAT_01a5bc3c,(tuple *)local_70);
      uVar15 = *(undefined8 *)(ppVar21 + 0x10);
      *(piecewise_construct_t *)(lVar12 + 0x38) = ppVar21[0x18];
      *(undefined8 *)(lVar12 + 0x30) = uVar15;
    }
    else if (ppVar9 != ppVar22) {
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>>>
      ::
      __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,void*>*,long>>
                ((__tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>>>
                  *)ppVar22,*(undefined8 *)ppVar9,ppVar9 + 8);
    }
    local_70[0] = (piecewise_construct_t *)&local_88;
    lVar12 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>,std::__ndk1::less<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo>>>
             ::
             __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>const&>,std::__ndk1::tuple<>>
                       (ppVar22,(piecewise_construct_t *)&local_88,(tuple *)&DAT_01a5bc3c,
                        (tuple *)local_70);
    *(ulong *)(lVar12 + 0x30) = param_4;
    *(char *)(lVar12 + 0x38) = (char)param_5;
  }
  pZVar11 = (Zone *)param_1[3];
  uVar1 = uVar23;
  if ((int)uVar23 < 2) {
    uVar1 = 1;
  }
  puVar8 = *(ulong **)(pZVar11 + 0x10);
  uVar6 = (-(ulong)(uVar1 - 1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uVar1 - 1) << 3) + 0x38;
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)puVar8) < uVar6) {
    puVar8 = (ulong *)Zone::NewExpand(pZVar11,uVar6);
  }
  else {
    *(ulong *)(pZVar11 + 0x10) = (long)puVar8 + uVar6;
  }
  puVar8[2] = param_4;
  puVar8[3] = param_5;
  *(char *)(puVar8 + 4) = (char)uVar23;
  *(uint *)((long)puVar8 + 0x24) = uVar5;
  puVar8[1] = uStack_80;
  *puVar8 = local_88;
  puVar8[5] = (ulong)ppVar22;
  puVar8[6] = 0;
  if (0 < (int)uVar23) {
    uVar6 = (ulong)uVar23;
    if ((uVar23 < 4) || ((puVar8 + 6 < local_188 + uVar6 && (local_188 < puVar8 + uVar6 + 6)))) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6 & 0xfffffffc;
      puVar18 = local_188 + 2;
      puVar19 = puVar8 + 8;
      uVar20 = uVar7;
      do {
        puVar3 = puVar18 + -1;
        uVar26 = puVar18[-2];
        uVar28 = puVar18[1];
        uVar27 = *puVar18;
        puVar18 = puVar18 + 4;
        uVar20 = uVar20 - 4;
        puVar19[-1] = *puVar3;
        puVar19[-2] = uVar26;
        puVar19[1] = uVar28;
        *puVar19 = uVar27;
        puVar19 = puVar19 + 4;
      } while (uVar20 != 0);
      if (uVar7 == uVar6) goto LAB_0169bf7c;
    }
    lVar12 = uVar6 - uVar7;
    puVar18 = local_188 + uVar7;
    puVar19 = puVar8 + uVar7 + 6;
    do {
      lVar12 = lVar12 + -1;
      *puVar19 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar19 = puVar19 + 1;
    } while (lVar12 != 0);
  }
LAB_0169bf7c:
  *param_1 = (ulong)puVar8;
  return;
code_r0x0169bcb8:
  ppVar21 = *(piecewise_construct_t **)(ppVar21 + (long)iVar24 * 8 + 0x30);
  uVar6 = (ulong)(iVar24 + 1);
  goto joined_r0x0169bc48;
LAB_0169bdc8:
  uVar23 = (uint)uVar6;
  ppVar21 = (piecewise_construct_t *)0x0;
  ppVar14 = (piecewise_construct_t *)(param_1 + 1);
  bVar4 = true;
  goto LAB_0169bdd4;
}

