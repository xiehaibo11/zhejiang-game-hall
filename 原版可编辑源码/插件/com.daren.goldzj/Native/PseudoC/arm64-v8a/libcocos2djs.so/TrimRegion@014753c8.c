
/* v8::base::RegionAllocator::TrimRegion(unsigned long, unsigned long) */

long __thiscall
v8::base::RegionAllocator::TrimRegion(RegionAllocator *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  RegionAllocator *pRVar2;
  long *plVar3;
  bool bVar4;
  RegionAllocator *pRVar5;
  long *plVar6;
  RegionAllocator *pRVar7;
  RegionAllocator *pRVar8;
  long lVar9;
  __tree_node_base *p_Var10;
  long lVar11;
  Region *pRVar12;
  __tree_node_base *p_Var13;
  __tree_node_base *p_Var14;
  void *pvVar15;
  Region *local_38;
  
  if (param_1 - *(long *)this < *(ulong *)(this + 8)) {
    pRVar8 = this + 0x40;
    pRVar7 = *(RegionAllocator **)pRVar8;
    pRVar5 = pRVar8;
    if (pRVar7 != (RegionAllocator *)0x0) {
      do {
        uVar1 = (*(long **)(pRVar7 + 0x20))[1] + **(long **)(pRVar7 + 0x20);
        pRVar2 = pRVar7;
        if (uVar1 <= param_1) {
          pRVar2 = pRVar5;
        }
        pRVar7 = *(RegionAllocator **)(pRVar7 + (ulong)(uVar1 <= param_1) * 8);
        pRVar5 = pRVar2;
      } while (pRVar7 != (RegionAllocator *)0x0);
      if (((pRVar2 != pRVar8) &&
          (pRVar12 = *(Region **)(pRVar2 + 0x20), *(ulong *)pRVar12 == param_1)) &&
         (pRVar12[0x10] != (Region)0x0)) {
        pRVar8 = pRVar2;
        if (param_2 != 0) {
          pRVar12 = (Region *)Split(this,pRVar12,param_2);
          p_Var10 = *(__tree_node_base **)(pRVar2 + 8);
          if (*(__tree_node_base **)(pRVar2 + 8) == (__tree_node_base *)0x0) {
            pRVar5 = pRVar2 + 0x10;
            pRVar8 = *(RegionAllocator **)pRVar5;
            if (*(RegionAllocator **)pRVar8 != pRVar2) {
              do {
                lVar9 = *(long *)pRVar5;
                pRVar5 = (RegionAllocator *)(lVar9 + 0x10);
                pRVar8 = *(RegionAllocator **)pRVar5;
              } while (*(long *)pRVar8 != lVar9);
            }
          }
          else {
            do {
              pRVar8 = (RegionAllocator *)p_Var10;
              p_Var10 = *(__tree_node_base **)pRVar8;
            } while (*(__tree_node_base **)pRVar8 != (__tree_node_base *)0x0);
          }
        }
        pRVar12[0x10] = (Region)0x0;
        lVar9 = *(long *)(pRVar12 + 8);
        if (*(long *)pRVar12 + lVar9 != *(long *)(this + 8) + *(long *)this) {
          p_Var10 = *(__tree_node_base **)(pRVar8 + 8);
          if (*(__tree_node_base **)(pRVar8 + 8) == (__tree_node_base *)0x0) {
            p_Var10 = (__tree_node_base *)(pRVar8 + 0x10);
            p_Var14 = *(__tree_node_base **)p_Var10;
            if (*(__tree_node_base **)p_Var14 != (__tree_node_base *)pRVar8) {
              do {
                lVar11 = *(long *)p_Var10;
                p_Var10 = (__tree_node_base *)(lVar11 + 0x10);
                p_Var14 = *(__tree_node_base **)p_Var10;
              } while (*(long *)p_Var14 != lVar11);
            }
          }
          else {
            do {
              p_Var14 = p_Var10;
              p_Var10 = *(__tree_node_base **)p_Var14;
            } while (*(__tree_node_base **)p_Var14 != (__tree_node_base *)0x0);
          }
          if ((*(Region **)(p_Var14 + 0x20))[0x10] == (Region)0x0) {
            FreeListRemoveRegion(this,*(Region **)(p_Var14 + 0x20));
            pvVar15 = *(void **)(p_Var14 + 0x20);
            *(long *)(*(long *)(pRVar8 + 0x20) + 8) =
                 *(long *)((long)pvVar15 + 8) + *(long *)(*(long *)(pRVar8 + 0x20) + 8);
            plVar3 = *(long **)(p_Var14 + 8);
            if (*(long **)(p_Var14 + 8) == (long *)0x0) {
              p_Var10 = p_Var14 + 0x10;
              plVar6 = *(long **)p_Var10;
              if ((__tree_node_base *)*plVar6 != p_Var14) {
                do {
                  lVar11 = *(long *)p_Var10;
                  p_Var10 = (__tree_node_base *)(lVar11 + 0x10);
                  plVar6 = *(long **)p_Var10;
                } while (*plVar6 != lVar11);
              }
            }
            else {
              do {
                plVar6 = plVar3;
                plVar3 = (long *)*plVar6;
              } while ((long *)*plVar6 != (long *)0x0);
            }
            if (*(__tree_node_base **)(this + 0x38) == p_Var14) {
              *(long **)(this + 0x38) = plVar6;
            }
            *(long *)(this + 0x48) = *(long *)(this + 0x48) + -1;
            std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 0x40),p_Var14);
            operator_delete(p_Var14);
            if (pvVar15 != (void *)0x0) {
              operator_delete(pvVar15);
            }
          }
        }
        if ((param_2 == 0) && (*(long *)pRVar12 != *(long *)this)) {
          p_Var10 = *(__tree_node_base **)pRVar8;
          p_Var14 = (__tree_node_base *)pRVar8;
          if (*(__tree_node_base **)pRVar8 == (__tree_node_base *)0x0) {
            do {
              p_Var13 = *(__tree_node_base **)(p_Var14 + 0x10);
              bVar4 = *(__tree_node_base **)p_Var13 == p_Var14;
              p_Var14 = p_Var13;
            } while (bVar4);
          }
          else {
            do {
              p_Var13 = p_Var10;
              p_Var10 = *(__tree_node_base **)(p_Var13 + 8);
            } while (*(__tree_node_base **)(p_Var13 + 8) != (__tree_node_base *)0x0);
          }
          if ((*(Region **)(p_Var13 + 0x20))[0x10] == (Region)0x0) {
            FreeListRemoveRegion(this,*(Region **)(p_Var13 + 0x20));
            pvVar15 = *(void **)(pRVar8 + 0x20);
            *(long *)(*(long *)(p_Var13 + 0x20) + 8) =
                 *(long *)((long)pvVar15 + 8) + *(long *)(*(long *)(p_Var13 + 0x20) + 8);
            plVar3 = *(long **)(pRVar8 + 8);
            if (*(long **)(pRVar8 + 8) == (long *)0x0) {
              p_Var10 = (__tree_node_base *)(pRVar8 + 0x10);
              plVar6 = *(long **)p_Var10;
              if ((__tree_node_base *)*plVar6 != (__tree_node_base *)pRVar8) {
                do {
                  lVar11 = *(long *)p_Var10;
                  p_Var10 = (__tree_node_base *)(lVar11 + 0x10);
                  plVar6 = *(long **)p_Var10;
                } while (*plVar6 != lVar11);
              }
            }
            else {
              do {
                plVar6 = plVar3;
                plVar3 = (long *)*plVar6;
              } while ((long *)*plVar6 != (long *)0x0);
            }
            if (*(__tree_node_base **)(this + 0x38) == (__tree_node_base *)pRVar8) {
              *(long **)(this + 0x38) = plVar6;
            }
            *(long *)(this + 0x48) = *(long *)(this + 0x48) + -1;
            std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 0x40),(__tree_node_base *)pRVar8);
            operator_delete(pRVar8);
            if (pvVar15 != (void *)0x0) {
              operator_delete(pvVar15);
            }
            pRVar12 = *(Region **)(p_Var13 + 0x20);
          }
        }
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + *(long *)(pRVar12 + 8);
        local_38 = pRVar12;
        std::__ndk1::
        __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
        ::
        __emplace_unique_key_args<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::Region*const&>
                  ((__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                    *)(this + 0x50),&local_38,&local_38);
        return lVar9;
      }
    }
  }
  return 0;
}

