
/* v8::internal::SourceTextModuleDescriptor::FindDuplicateExport(v8::internal::Zone*) const */

int * __thiscall
v8::internal::SourceTextModuleDescriptor::FindDuplicateExport
          (SourceTextModuleDescriptor *this,Zone *param_1)

{
  SourceTextModuleDescriptor *pSVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  __tree_node_base *p_Var4;
  __tree_node *p_Var5;
  long lVar6;
  SourceTextModuleDescriptor *pSVar7;
  SourceTextModuleDescriptor *pSVar8;
  int *piVar9;
  SourceTextModuleDescriptor *pSVar10;
  int *piVar11;
  int *piVar12;
  __tree_node *p_Var13;
  ulong uVar14;
  __tree_node *p_Var15;
  __tree_node *local_80;
  __tree_node *local_78;
  Zone *local_70;
  long local_68;
  
  local_70 = param_1;
  local_68 = 0;
  local_78 = (__tree_node *)0x0;
  pSVar1 = this + 0x68;
  local_80 = (__tree_node *)&local_78;
  if (*(SourceTextModuleDescriptor **)(this + 0x60) == pSVar1) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)0x0;
    pSVar10 = *(SourceTextModuleDescriptor **)(this + 0x60);
LAB_01499ad4:
    do {
      piVar11 = *(int **)(pSVar10 + 0x28);
      uVar14 = *(ulong *)(piVar11 + 2);
      p_Var15 = (__tree_node *)&local_78;
      p_Var13 = (__tree_node *)&local_78;
      p_Var5 = local_78;
      while (p_Var5 != (__tree_node *)0x0) {
        while (p_Var13 = p_Var5, uVar14 < *(ulong *)(p_Var13 + 0x20)) {
          p_Var5 = *(__tree_node **)p_Var13;
          p_Var15 = p_Var13;
          if (*(__tree_node **)p_Var13 == (__tree_node *)0x0) {
            lVar6 = *(long *)p_Var13;
            goto joined_r0x01499b28;
          }
        }
        if (uVar14 <= *(ulong *)(p_Var13 + 0x20)) break;
        p_Var15 = p_Var13 + 8;
        p_Var5 = *(__tree_node **)p_Var15;
      }
      lVar6 = *(long *)p_Var15;
joined_r0x01499b28:
      if (lVar6 == 0) {
        p_Var4 = *(__tree_node_base **)(local_70 + 0x10);
        if ((ulong)(*(long *)(local_70 + 0x18) - (long)p_Var4) < 0x30) {
          p_Var4 = (__tree_node_base *)Zone::NewExpand(local_70,0x30);
        }
        else {
          *(__tree_node_base **)(local_70 + 0x10) = p_Var4 + 0x30;
        }
        *(ulong *)(p_Var4 + 0x20) = uVar14;
        *(int **)(p_Var4 + 0x28) = piVar11;
        *(undefined8 *)p_Var4 = 0;
        *(undefined8 *)(p_Var4 + 8) = 0;
        *(__tree_node **)(p_Var4 + 0x10) = p_Var13;
        *(__tree_node_base **)p_Var15 = p_Var4;
        if (*(__tree_node **)local_80 != (__tree_node *)0x0) {
          p_Var4 = *(__tree_node_base **)p_Var15;
          local_80 = *(__tree_node **)local_80;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)local_78,p_Var4);
        local_68 = local_68 + 1;
        pSVar7 = *(SourceTextModuleDescriptor **)(pSVar10 + 8);
        if (*(SourceTextModuleDescriptor **)(pSVar10 + 8) == (SourceTextModuleDescriptor *)0x0)
        goto LAB_01499bc8;
LAB_01499bb8:
        do {
          pSVar10 = pSVar7;
          pSVar7 = *(SourceTextModuleDescriptor **)pSVar10;
        } while (*(SourceTextModuleDescriptor **)pSVar10 != (SourceTextModuleDescriptor *)0x0);
LAB_01499bf4:
        if (pSVar10 == pSVar1) break;
        goto LAB_01499ad4;
      }
      piVar12 = piVar9;
      if (piVar9 == (int *)0x0) {
        piVar12 = *(int **)(lVar6 + 0x28);
      }
      piVar9 = piVar11;
      if (*piVar11 <= *piVar12) {
        piVar9 = piVar12;
      }
      pSVar7 = *(SourceTextModuleDescriptor **)(pSVar10 + 8);
      if (*(SourceTextModuleDescriptor **)(pSVar10 + 8) != (SourceTextModuleDescriptor *)0x0)
      goto LAB_01499bb8;
LAB_01499bc8:
      pSVar7 = pSVar10 + 0x10;
      pSVar8 = *(SourceTextModuleDescriptor **)pSVar7;
      if (*(SourceTextModuleDescriptor **)pSVar8 != pSVar10) {
        do {
          lVar6 = *(long *)pSVar7;
          pSVar7 = (SourceTextModuleDescriptor *)(lVar6 + 0x10);
          pSVar10 = *(SourceTextModuleDescriptor **)pSVar7;
        } while (*(long *)pSVar10 != lVar6);
        goto LAB_01499bf4;
      }
      pSVar10 = pSVar8;
    } while (pSVar8 != pSVar1);
  }
  puVar2 = *(undefined8 **)(this + 0x20);
  puVar3 = *(undefined8 **)(this + 0x28);
  do {
    if (puVar2 == puVar3) {
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry_const*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry_const*>,std::__ndk1::less<v8::internal::AstRawString_const*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry_const*>>>
      ::destroy((__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry_const*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry_const*>,std::__ndk1::less<v8::internal::AstRawString_const*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry_const*>>>
                 *)&local_80,local_78);
      return piVar9;
    }
    piVar12 = (int *)*puVar2;
    uVar14 = *(ulong *)(piVar12 + 2);
    piVar11 = piVar9;
    p_Var13 = (__tree_node *)&local_78;
    p_Var15 = (__tree_node *)&local_78;
    p_Var5 = local_78;
    if (uVar14 != 0) {
      while (p_Var5 != (__tree_node *)0x0) {
        while (p_Var15 = p_Var5, uVar14 < *(ulong *)(p_Var15 + 0x20)) {
          p_Var13 = p_Var15;
          p_Var5 = *(__tree_node **)p_Var15;
          if (*(__tree_node **)p_Var15 == (__tree_node *)0x0) {
            lVar6 = *(long *)p_Var15;
            goto joined_r0x01499cd0;
          }
        }
        if (uVar14 <= *(ulong *)(p_Var15 + 0x20)) break;
        p_Var13 = p_Var15 + 8;
        p_Var5 = *(__tree_node **)(p_Var15 + 8);
      }
      lVar6 = *(long *)p_Var13;
joined_r0x01499cd0:
      if (lVar6 == 0) {
        p_Var4 = *(__tree_node_base **)(local_70 + 0x10);
        if ((ulong)(*(long *)(local_70 + 0x18) - (long)p_Var4) < 0x30) {
          p_Var4 = (__tree_node_base *)Zone::NewExpand(local_70,0x30);
        }
        else {
          *(__tree_node_base **)(local_70 + 0x10) = p_Var4 + 0x30;
        }
        *(ulong *)(p_Var4 + 0x20) = uVar14;
        *(int **)(p_Var4 + 0x28) = piVar12;
        *(undefined8 *)p_Var4 = 0;
        *(undefined8 *)(p_Var4 + 8) = 0;
        *(__tree_node **)(p_Var4 + 0x10) = p_Var15;
        *(__tree_node_base **)p_Var13 = p_Var4;
        if (*(__tree_node **)local_80 != (__tree_node *)0x0) {
          p_Var4 = *(__tree_node_base **)p_Var13;
          local_80 = *(__tree_node **)local_80;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)local_78,p_Var4);
        local_68 = local_68 + 1;
      }
      else {
        if (piVar9 == (int *)0x0) {
          piVar9 = *(int **)(lVar6 + 0x28);
        }
        piVar11 = piVar12;
        if (*piVar12 <= *piVar9) {
          piVar11 = piVar9;
        }
      }
    }
    puVar2 = puVar2 + 1;
    piVar9 = piVar11;
  } while( true );
}

