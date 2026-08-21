
/* dragonBones::CCFactory::removeDragonBonesDataByUUID(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
dragonBones::CCFactory::removeDragonBonesDataByUUID
          (CCFactory *this,basic_string *param_1,bool param_2)

{
  CCFactory *pCVar1;
  size_t __n;
  __tree_node_base *p_Var2;
  basic_string *__s2;
  basic_string bVar3;
  size_t __n_00;
  CCFactory *pCVar4;
  bool bVar5;
  int iVar6;
  __tree_node_base *p_Var7;
  ulong uVar8;
  __tree_node_base *p_Var9;
  long lVar10;
  CCFactory *pCVar11;
  CCFactory *pCVar12;
  
  pCVar12 = *(CCFactory **)(this + 0x10);
  pCVar1 = this + 0x18;
  if (pCVar1 != pCVar12) {
    do {
      while( true ) {
        if (((byte)*(__tree_node_base *)(pCVar12 + 0x20) & 1) == 0) {
          p_Var9 = (__tree_node_base *)(pCVar12 + 0x21);
          uVar8 = (ulong)((byte)*(__tree_node_base *)(pCVar12 + 0x20) >> 1);
        }
        else {
          uVar8 = *(ulong *)(pCVar12 + 0x28);
          p_Var9 = *(__tree_node_base **)(pCVar12 + 0x30);
        }
        __s2 = param_1 + 1;
        __n_00 = (ulong)((byte)*param_1 >> 1);
        if (((byte)*param_1 & 1) != 0) {
          __s2 = *(basic_string **)(param_1 + 0x10);
          __n_00 = *(size_t *)(param_1 + 8);
        }
        if (__n_00 != 0) break;
LAB_00d51ce4:
        if (param_2) {
          BaseObject::returnToPool(*(BaseObject **)(pCVar12 + 0x38));
        }
        pCVar4 = *(CCFactory **)(pCVar12 + 8);
        if (*(CCFactory **)(pCVar12 + 8) == (CCFactory *)0x0) {
          p_Var9 = (__tree_node_base *)(pCVar12 + 0x10);
          pCVar11 = *(CCFactory **)p_Var9;
          if (*(__tree_node_base **)pCVar11 != (__tree_node_base *)pCVar12) {
            do {
              lVar10 = *(long *)p_Var9;
              p_Var9 = (__tree_node_base *)(lVar10 + 0x10);
              pCVar11 = *(CCFactory **)p_Var9;
            } while (*(long *)pCVar11 != lVar10);
          }
        }
        else {
          do {
            pCVar11 = pCVar4;
            pCVar4 = *(CCFactory **)pCVar11;
          } while (*(CCFactory **)pCVar11 != (CCFactory *)0x0);
        }
        if (*(__tree_node_base **)(this + 0x10) == (__tree_node_base *)pCVar12) {
          *(CCFactory **)(this + 0x10) = pCVar11;
        }
        *(long *)(this + 0x20) = *(long *)(this + 0x20) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x18),(__tree_node_base *)pCVar12);
        if (((byte)*(__tree_node_base *)(pCVar12 + 0x20) & 1) != 0) {
          operator_delete(*(void **)(pCVar12 + 0x30));
        }
        operator_delete(pCVar12);
        pCVar12 = pCVar11;
joined_r0x00d51ddc:
        if (pCVar1 == pCVar12) {
          return;
        }
      }
      if ((long)__n_00 <= (long)uVar8) {
        bVar3 = *__s2;
        p_Var2 = p_Var9 + uVar8;
        p_Var7 = p_Var9;
        do {
          __n = (uVar8 - __n_00) + 1;
          if ((__n == 0) ||
             (p_Var7 = memchr(p_Var7,(uint)(byte)bVar3,__n), p_Var7 == (__tree_node_base *)0x0))
          break;
          iVar6 = memcmp(p_Var7,__s2,__n_00);
          if (iVar6 == 0) {
            if ((p_Var7 != p_Var2) && ((long)p_Var7 - (long)p_Var9 != -1)) goto LAB_00d51ce4;
            break;
          }
          p_Var7 = p_Var7 + 1;
          uVar8 = (long)p_Var2 - (long)p_Var7;
        } while ((long)__n_00 <= (long)uVar8);
      }
      pCVar4 = *(CCFactory **)(pCVar12 + 8);
      if (*(CCFactory **)(pCVar12 + 8) == (CCFactory *)0x0) {
        p_Var9 = (__tree_node_base *)(pCVar12 + 0x10);
        bVar5 = *(__tree_node_base **)*(CCFactory **)p_Var9 == (__tree_node_base *)pCVar12;
        pCVar12 = *(CCFactory **)p_Var9;
        if (bVar5) goto joined_r0x00d51ddc;
        do {
          lVar10 = *(long *)p_Var9;
          p_Var9 = (__tree_node_base *)(lVar10 + 0x10);
          pCVar12 = *(CCFactory **)p_Var9;
        } while (*(long *)pCVar12 != lVar10);
      }
      else {
        do {
          pCVar12 = pCVar4;
          pCVar4 = *(CCFactory **)pCVar12;
        } while (*(CCFactory **)pCVar12 != (CCFactory *)0x0);
      }
    } while (pCVar1 != pCVar12);
  }
  return;
}

