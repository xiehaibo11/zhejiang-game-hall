
/* v8::internal::Parser::CollapseNaryExpression(v8::internal::Expression**,
   v8::internal::Expression*, v8::internal::Token::Value, int, v8::internal::SourceRange const&) */

undefined8 __thiscall
v8::internal::Parser::CollapseNaryExpression
          (Parser *this,undefined8 *param_1,undefined8 param_2,uint param_4,undefined4 param_5,
          SourceRange *param_6)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  Zone *pZVar4;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_00;
  NaryOperation *pNVar5;
  undefined8 *puVar6;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *p_Var7;
  long *plVar8;
  long lVar9;
  NaryOperation *pNVar10;
  long *plVar11;
  undefined4 *puVar12;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *p_Var13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *p_Var17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  NaryOperationSourceRanges *local_50;
  NaryOperation *pNStack_48;
  
  if ((param_4 & 0xff) == 0x2b) {
    return 0;
  }
  if ((param_4 - 0x1e & 0xff) < 0x10) {
    pNVar10 = (NaryOperation *)*param_1;
    uVar2 = *(uint *)(pNVar10 + 4);
    if ((uVar2 & 0x3f) == 0x1b) {
      if ((uVar2 >> 7 & 0x7f) != (param_4 & 0xff)) {
        return 0;
      }
    }
    else {
      if (((uVar2 & 0x3f) != 0x1a) || ((uVar2 >> 7 & 0x7f) != (param_4 & 0xff))) {
        return 0;
      }
      pZVar4 = *(Zone **)(this + 0x68);
      puVar12 = *(undefined4 **)(pNVar10 + 8);
      pNVar5 = *(NaryOperation **)(pZVar4 + 0x10);
      if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)pNVar5) < 0x30) {
        pNVar5 = (NaryOperation *)Zone::NewExpand(pZVar4,0x30);
      }
      else {
        *(NaryOperation **)(pZVar4 + 0x10) = pNVar5 + 0x30;
      }
      pZVar4 = *(Zone **)(this + 0x68);
      uVar3 = *puVar12;
      *(undefined4 **)(pNVar5 + 8) = puVar12;
      *(undefined8 *)(pNVar5 + 0x10) = 0;
      *(undefined8 *)(pNVar5 + 0x18) = 0;
      *(undefined8 *)(pNVar5 + 0x20) = 0;
      *(Zone **)(pNVar5 + 0x28) = pZVar4;
      *(undefined4 *)pNVar5 = uVar3;
      *(uint *)(pNVar5 + 4) = (param_4 & 0xff) << 7 | 0x1b;
      puVar6 = *(undefined8 **)(pZVar4 + 0x10);
      if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar6) < 0x20) {
        puVar6 = (undefined8 *)Zone::NewExpand(pZVar4,0x20);
      }
      else {
        *(undefined8 **)(pZVar4 + 0x10) = puVar6 + 4;
      }
      lVar9 = *(long *)(pNVar5 + 0x10);
      puVar16 = puVar6;
      for (lVar20 = *(long *)(pNVar5 + 0x18); lVar20 != lVar9; lVar20 = lVar20 + -0x10) {
        uVar18 = *(undefined8 *)(lVar20 + -0x10);
        puVar16[-1] = *(undefined8 *)(lVar20 + -8);
        puVar16[-2] = uVar18;
        puVar16 = puVar16 + -2;
      }
      *(undefined8 **)(pNVar5 + 0x10) = puVar16;
      *(undefined8 **)(pNVar5 + 0x18) = puVar6;
      *(undefined8 **)(pNVar5 + 0x20) = puVar6 + 4;
      uVar3 = *(undefined4 *)pNVar10;
      *puVar6 = *(undefined8 *)(pNVar10 + 0x10);
      *(undefined4 *)(puVar6 + 1) = uVar3;
      *(long *)(pNVar5 + 0x18) = *(long *)(pNVar5 + 0x18) + 0x10;
      this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                  **)(this + 0x2f8);
      if (this_00 !=
          (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
           *)0x0) {
        p_Var13 = this_00 + 8;
        p_Var17 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                    **)p_Var13;
        p_Var7 = p_Var13;
        if (p_Var17 !=
            (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
             *)0x0) {
          do {
            if (*(NaryOperation **)(p_Var17 + 0x20) >= pNVar10) {
              p_Var7 = p_Var17;
            }
            p_Var17 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                        **)(p_Var17 + (ulong)(*(NaryOperation **)(p_Var17 + 0x20) < pNVar10) * 8);
          } while (p_Var17 !=
                   (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                    *)0x0);
          if (((p_Var7 != p_Var13) && (*(NaryOperation **)(p_Var7 + 0x20) <= pNVar10)) &&
             (*(long *)(p_Var7 + 0x28) != 0)) {
            pZVar4 = *(Zone **)(this + 0xb8);
            uVar18 = *(undefined8 *)(*(long *)(p_Var7 + 0x28) + 8);
            local_50 = *(NaryOperationSourceRanges **)(pZVar4 + 0x10);
            if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)local_50) < 0x28) {
              local_50 = (NaryOperationSourceRanges *)Zone::NewExpand(pZVar4,0x28);
            }
            else {
              *(NaryOperationSourceRanges **)(pZVar4 + 0x10) = local_50 + 0x28;
            }
            pZVar4 = *(Zone **)(this + 0xb8);
            *(undefined8 *)(local_50 + 0x10) = 0;
            *(undefined8 *)(local_50 + 0x18) = 0;
            *(Zone **)(local_50 + 0x20) = pZVar4;
            *(undefined ***)local_50 = &PTR__NaryOperationSourceRanges_01cb50c0;
            *(undefined8 *)(local_50 + 8) = 0;
            puVar6 = *(undefined8 **)(pZVar4 + 0x10);
            if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar6) < 8) {
              puVar6 = (undefined8 *)Zone::NewExpand(pZVar4,8);
            }
            else {
              *(undefined8 **)(pZVar4 + 0x10) = puVar6 + 1;
            }
            puVar14 = puVar6 + 1;
            *puVar6 = uVar18;
            puVar16 = *(undefined8 **)(local_50 + 8);
            puVar21 = *(undefined8 **)(local_50 + 0x10);
            while (puVar21 != puVar16) {
              puVar21 = puVar21 + -1;
              puVar6 = puVar6 + -1;
              *puVar6 = *puVar21;
            }
            *(undefined8 **)(local_50 + 8) = puVar6;
            *(undefined8 **)(local_50 + 0x10) = puVar14;
            *(undefined8 **)(local_50 + 0x18) = puVar14;
            pNStack_48 = pNVar5;
            std::__ndk1::
            __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
            ::
            __emplace_unique_impl<v8::internal::NaryOperation*&,v8::internal::NaryOperationSourceRanges*&>
                      (this_00,&pNStack_48,&local_50);
          }
        }
      }
      *param_1 = pNVar5;
      pNVar10 = pNVar5;
    }
    puVar6 = *(undefined8 **)(pNVar10 + 0x18);
    if (puVar6 < *(undefined8 **)(pNVar10 + 0x20)) {
      *puVar6 = param_2;
      *(undefined4 *)(puVar6 + 1) = param_5;
      *(long *)(pNVar10 + 0x18) = *(long *)(pNVar10 + 0x18) + 0x10;
    }
    else {
      lVar9 = (long)puVar6 - *(long *)(pNVar10 + 0x10) >> 4;
      uVar1 = lVar9 + 1;
      if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar20 = (long)*(undefined8 **)(pNVar10 + 0x20) - *(long *)(pNVar10 + 0x10);
      uVar19 = lVar20 >> 3;
      if (uVar1 <= uVar19) {
        uVar1 = uVar19;
      }
      if (0x3fffffe < (ulong)(lVar20 >> 4)) {
        uVar1 = 0x7ffffff;
      }
      if (uVar1 == 0) {
        lVar20 = 0;
      }
      else {
        pZVar4 = *(Zone **)(pNVar10 + 0x28);
        uVar19 = uVar1 * 0x10;
        lVar20 = *(long *)(pZVar4 + 0x10);
        if (uVar19 < (ulong)(*(long *)(pZVar4 + 0x18) - lVar20) ||
            uVar19 - (*(long *)(pZVar4 + 0x18) - lVar20) == 0) {
          *(ulong *)(pZVar4 + 0x10) = lVar20 + uVar19;
        }
        else {
          lVar20 = Zone::NewExpand(pZVar4,uVar19);
        }
      }
      puVar6 = (undefined8 *)(lVar20 + lVar9 * 0x10);
      *puVar6 = param_2;
      *(undefined4 *)(puVar6 + 1) = param_5;
      lVar9 = *(long *)(pNVar10 + 0x10);
      puVar16 = puVar6;
      for (lVar22 = *(long *)(pNVar10 + 0x18); lVar22 != lVar9; lVar22 = lVar22 + -0x10) {
        uVar18 = *(undefined8 *)(lVar22 + -0x10);
        puVar16[-1] = *(undefined8 *)(lVar22 + -8);
        puVar16[-2] = uVar18;
        puVar16 = puVar16 + -2;
      }
      *(undefined8 **)(pNVar10 + 0x10) = puVar16;
      *(undefined8 **)(pNVar10 + 0x18) = puVar6 + 2;
      *(ulong *)(pNVar10 + 0x20) = lVar20 + uVar1 * 0x10;
    }
    *(uint *)(pNVar10 + 4) = *(uint *)(pNVar10 + 4) & 0xffffffbf;
    if (*(long *)(this + 0x2f8) != 0) {
      plVar8 = (long *)(*(long *)(this + 0x2f8) + 8);
      plVar15 = (long *)*plVar8;
      plVar11 = plVar8;
      if (plVar15 != (long *)0x0) {
        do {
          if ((NaryOperation *)plVar15[4] >= pNVar10) {
            plVar11 = plVar15;
          }
          plVar15 = (long *)plVar15[(NaryOperation *)plVar15[4] < pNVar10];
        } while (plVar15 != (long *)0x0);
        if (((plVar11 != plVar8) && ((NaryOperation *)plVar11[4] <= pNVar10)) &&
           (lVar9 = plVar11[5], lVar9 != 0)) {
          if (*(undefined8 **)(lVar9 + 0x10) == *(undefined8 **)(lVar9 + 0x18)) {
            std::__ndk1::
            vector<v8::internal::SourceRange,v8::internal::ZoneAllocator<v8::internal::SourceRange>>
            ::__push_back_slow_path<v8::internal::SourceRange_const&>
                      ((vector<v8::internal::SourceRange,v8::internal::ZoneAllocator<v8::internal::SourceRange>>
                        *)(lVar9 + 8),param_6);
          }
          else {
            **(undefined8 **)(lVar9 + 0x10) = *(undefined8 *)param_6;
            *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 8;
          }
        }
      }
    }
    return 1;
  }
  return 0;
}

