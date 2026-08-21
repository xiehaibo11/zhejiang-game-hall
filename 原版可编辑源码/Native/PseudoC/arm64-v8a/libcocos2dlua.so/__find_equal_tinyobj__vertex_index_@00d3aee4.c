
/* std::__ndk1::__tree_node_base<void*>*&
   std::__ndk1::__tree<std::__ndk1::__value_type<tinyobj::vertex_index, unsigned int>,
   std::__ndk1::__map_value_compare<tinyobj::vertex_index,
   std::__ndk1::__value_type<tinyobj::vertex_index, unsigned int>,
   std::__ndk1::less<tinyobj::vertex_index>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index, unsigned int> >
   >::__find_equal<tinyobj::vertex_index>(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<tinyobj::vertex_index,
   unsigned int>, std::__ndk1::__tree_node<std::__ndk1::__value_type<tinyobj::vertex_index, unsigned
   int>, void*>*, long>, std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   std::__ndk1::__tree_node_base<void*>*&, tinyobj::vertex_index const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
::__find_equal<tinyobj::vertex_index>
          (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
           *this,__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                 *param_2,long *param_3,__tree_node_base **param_4,int *param_5)

{
  __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
  *p_Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
  *p_Var5;
  bool bVar6;
  bool bVar7;
  __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
  *p_Var8;
  __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
  *p_Var9;
  __tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
  *p_Var10;
  long lVar11;
  
  p_Var1 = this + 8;
  if (p_Var1 != param_2) {
    iVar2 = *param_5;
    iVar3 = *(int *)(param_2 + 0x1c);
    if (iVar2 == iVar3) {
      iVar3 = param_5[2];
      iVar4 = *(int *)(param_2 + 0x24);
      if (iVar3 == iVar4) {
        if (*(int *)(param_2 + 0x20) <= param_5[1]) {
          if (param_5[1] <= *(int *)(param_2 + 0x20)) {
LAB_00d3b080:
            *param_3 = (long)param_2;
            *param_4 = (__tree_node_base *)param_2;
            return param_4;
          }
LAB_00d3af40:
          p_Var9 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                     **)(param_2 + 8);
          if (p_Var9 == (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                         *)0x0) {
            p_Var9 = param_2 + 0x10;
            p_Var8 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                       **)p_Var9;
            if (*(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                  **)p_Var8 != param_2) {
              do {
                lVar11 = *(long *)p_Var9;
                p_Var9 = (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                          *)(lVar11 + 0x10);
                p_Var8 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                           **)p_Var9;
              } while (*(long *)p_Var8 != lVar11);
            }
          }
          else {
            do {
              p_Var8 = p_Var9;
              p_Var9 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                         **)p_Var8;
            } while (*(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                       **)p_Var8 !=
                     (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                      *)0x0);
          }
          if (p_Var8 == p_Var1) {
LAB_00d3b0f0:
            if (*(long *)(param_2 + 8) == 0) {
              *param_3 = (long)param_2;
              return (__tree_node_base **)(param_2 + 8);
            }
LAB_00d3b0f8:
            *param_3 = (long)p_Var8;
            return (__tree_node_base **)p_Var8;
          }
          iVar3 = *(int *)(p_Var8 + 0x1c);
          bVar6 = SBORROW4(iVar2,iVar3);
          bVar7 = iVar2 - iVar3 < 0;
          if (iVar2 == iVar3) {
            iVar3 = param_5[2];
            iVar4 = *(int *)(p_Var8 + 0x24);
            bVar6 = SBORROW4(iVar3,iVar4);
            bVar7 = iVar3 - iVar4 < 0;
            if (iVar3 == iVar4) {
              bVar6 = SBORROW4(param_5[1],*(int *)(p_Var8 + 0x20));
              bVar7 = param_5[1] - *(int *)(p_Var8 + 0x20) < 0;
            }
          }
          if (bVar7 != bVar6) goto LAB_00d3b0f0;
          if (*(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                **)p_Var1 !=
              (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
               *)0x0) {
            iVar3 = param_5[2];
            p_Var9 = this + 8;
            p_Var1 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                       **)p_Var1;
            do {
              while (p_Var8 = p_Var1, iVar4 = *(int *)(p_Var8 + 0x1c), iVar2 != iVar4) {
                if (iVar4 <= iVar2) {
                  if (iVar4 < iVar2) goto LAB_00d3b120;
                  goto LAB_00d3b184;
                }
LAB_00d3b16c:
                p_Var9 = p_Var8;
                p_Var1 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                           **)p_Var8;
                if (*(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                      **)p_Var8 ==
                    (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                     *)0x0) goto LAB_00d3b0f8;
              }
              iVar4 = *(int *)(p_Var8 + 0x24);
              if (iVar3 != iVar4) {
                if (iVar3 < iVar4) goto LAB_00d3b16c;
                if (iVar4 < iVar3) goto LAB_00d3b120;
                break;
              }
              if (param_5[1] < *(int *)(p_Var8 + 0x20)) goto LAB_00d3b16c;
              if (param_5[1] <= *(int *)(p_Var8 + 0x20)) break;
LAB_00d3b120:
              p_Var9 = p_Var8 + 8;
              p_Var1 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                         **)p_Var9;
            } while (*(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                       **)p_Var9 !=
                     (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                      *)0x0);
            goto LAB_00d3b184;
          }
          goto LAB_00d3b190;
        }
      }
      else if (iVar4 <= iVar3) {
        if (iVar3 <= iVar4) goto LAB_00d3b080;
        goto LAB_00d3af40;
      }
    }
    else if (iVar3 <= iVar2) {
      if (iVar2 <= iVar3) goto LAB_00d3b080;
      goto LAB_00d3af40;
    }
  }
  p_Var8 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
             **)param_2;
  p_Var9 = param_2;
  if (*(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
        **)this != param_2) {
    p_Var5 = p_Var8;
    p_Var10 = param_2;
    if (p_Var8 == (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                   *)0x0) {
      do {
        p_Var9 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                   **)(p_Var10 + 0x10);
        bVar7 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                  **)p_Var9 == p_Var10;
        p_Var10 = p_Var9;
      } while (bVar7);
    }
    else {
      do {
        p_Var9 = p_Var5;
        p_Var5 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                   **)(p_Var9 + 8);
      } while (*(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                 **)(p_Var9 + 8) !=
               (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                *)0x0);
    }
    iVar2 = *(int *)(p_Var9 + 0x1c);
    iVar3 = *param_5;
    bVar6 = SBORROW4(iVar2,iVar3);
    bVar7 = iVar2 - iVar3 < 0;
    if (iVar2 == iVar3) {
      iVar2 = *(int *)(p_Var9 + 0x24);
      iVar4 = param_5[2];
      bVar6 = SBORROW4(iVar2,iVar4);
      bVar7 = iVar2 - iVar4 < 0;
      if (iVar2 == iVar4) {
        bVar6 = SBORROW4(*(int *)(p_Var9 + 0x20),param_5[1]);
        bVar7 = *(int *)(p_Var9 + 0x20) - param_5[1] < 0;
      }
    }
    if (bVar7 == bVar6) {
      if (*(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
            **)p_Var1 !=
          (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
           *)0x0) {
        iVar2 = param_5[2];
        p_Var9 = this + 8;
        p_Var1 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                   **)p_Var1;
        do {
          while (p_Var8 = p_Var1, iVar4 = *(int *)(p_Var8 + 0x1c), iVar3 != iVar4) {
            if (iVar4 <= iVar3) {
              if (iVar4 < iVar3) goto LAB_00d3b004;
              goto LAB_00d3b184;
            }
LAB_00d3b050:
            p_Var9 = p_Var8;
            p_Var1 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                       **)p_Var8;
            if (*(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                  **)p_Var8 ==
                (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                 *)0x0) goto LAB_00d3b0f8;
          }
          iVar4 = *(int *)(p_Var8 + 0x24);
          if (iVar2 != iVar4) {
            if (iVar2 < iVar4) goto LAB_00d3b050;
            if (iVar4 < iVar2) goto LAB_00d3b004;
            break;
          }
          if (param_5[1] < *(int *)(p_Var8 + 0x20)) goto LAB_00d3b050;
          if (param_5[1] <= *(int *)(p_Var8 + 0x20)) break;
LAB_00d3b004:
          p_Var9 = p_Var8 + 8;
          p_Var1 = *(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                     **)p_Var9;
        } while (*(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                   **)p_Var9 !=
                 (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                  *)0x0);
LAB_00d3b184:
        *param_3 = (long)p_Var8;
        return (__tree_node_base **)p_Var9;
      }
LAB_00d3b190:
      *param_3 = (long)p_Var1;
      return (__tree_node_base **)p_Var1;
    }
  }
  if (p_Var8 == (__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                 *)0x0) {
    *param_3 = (long)param_2;
    return (__tree_node_base **)param_2;
  }
  *param_3 = (long)p_Var9;
  return (__tree_node_base **)(p_Var9 + 8);
}

