
/* void std::__ndk1::__tree<std::__ndk1::__value_type<float, cocos2d::Vec4>,
   std::__ndk1::__map_value_compare<float, std::__ndk1::__value_type<float, cocos2d::Vec4>,
   std::__ndk1::less<float>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<float,
   cocos2d::Vec4> >
   >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<float,
   cocos2d::Vec4>, std::__ndk1::__tree_node<std::__ndk1::__value_type<float, cocos2d::Vec4>,
   void*>*, long> >(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<float,
   cocos2d::Vec4>, std::__ndk1::__tree_node<std::__ndk1::__value_type<float, cocos2d::Vec4>,
   void*>*, long>, std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<float,
   cocos2d::Vec4>, std::__ndk1::__tree_node<std::__ndk1::__value_type<float, cocos2d::Vec4>,
   void*>*, long>) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
::
__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__tree_node<std::__ndk1::__value_type<float,cocos2d::Vec4>,void*>*,long>>
          (__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
           *this,long *param_2,long *param_3)

{
  float fVar1;
  bool bVar2;
  __tree_node_base *p_Var3;
  __tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
  *p_Var4;
  __tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
  *p_Var5;
  long *plVar6;
  __tree_node_base *p_Var7;
  __tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
  *p_Var8;
  long lVar9;
  __tree_node_base *p_Var10;
  __tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
  *p_Var11;
  
  if (*(long *)(this + 0x10) != 0) {
    p_Var3 = *(__tree_node_base **)this;
    p_Var11 = this + 8;
    *(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
      **)this = p_Var11;
    *(undefined8 *)(*(long *)p_Var11 + 0x10) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)p_Var11 = 0;
    p_Var7 = *(__tree_node_base **)(p_Var3 + 8);
    if (p_Var7 != (__tree_node_base *)0x0) {
      p_Var3 = p_Var7;
    }
    if (p_Var3 == (__tree_node_base *)0x0) {
      p_Var7 = (__tree_node_base *)0x0;
    }
    else {
      p_Var10 = *(__tree_node_base **)(p_Var3 + 0x10);
      if (p_Var10 != (__tree_node_base *)0x0) {
        p_Var7 = *(__tree_node_base **)p_Var10;
        if (p_Var7 == p_Var3) {
          p_Var7 = *(__tree_node_base **)(p_Var10 + 8);
          *(undefined8 *)p_Var10 = 0;
          while (p_Var7 != (__tree_node_base *)0x0) {
            do {
              p_Var10 = p_Var7;
              p_Var7 = *(__tree_node_base **)p_Var10;
            } while (*(__tree_node_base **)p_Var10 != (__tree_node_base *)0x0);
            p_Var7 = *(__tree_node_base **)(p_Var10 + 8);
          }
        }
        else {
          *(undefined8 *)(p_Var10 + 8) = 0;
          while (p_Var7 != (__tree_node_base *)0x0) {
            do {
              p_Var10 = p_Var7;
              p_Var7 = *(__tree_node_base **)p_Var10;
            } while (*(__tree_node_base **)p_Var10 != (__tree_node_base *)0x0);
                    /* catch() { ... } // from try @ 00e253a0 with catch @ 00e24f20
                       catch() { ... } // from try @ 00e254a8 with catch @ 00e24f20
                       catch() { ... } // from try @ 00e2552c with catch @ 00e24f20
                       catch() { ... } // from try @ 00e255d8 with catch @ 00e24f20
                       catch() { ... } // from try @ 00e25628 with catch @ 00e24f20 */
            p_Var7 = *(__tree_node_base **)(p_Var10 + 8);
          }
        }
      }
      do {
        p_Var7 = p_Var10;
        if (param_2 == param_3) break;
        fVar1 = *(float *)((long)param_2 + 0x1c);
        *(float *)(p_Var3 + 0x1c) = fVar1;
        lVar9 = param_2[4];
        *(long *)(p_Var3 + 0x28) = param_2[5];
        *(long *)(p_Var3 + 0x20) = lVar9;
        p_Var4 = *(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
                   **)p_Var11;
        p_Var5 = p_Var11;
        while (p_Var8 = p_Var5,
              p_Var4 != (__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
                         *)0x0) {
          while (p_Var5 = p_Var4, *(float *)(p_Var5 + 0x1c) <= fVar1) {
            p_Var4 = *(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
                       **)(p_Var5 + 8);
            if (*(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
                  **)(p_Var5 + 8) ==
                (__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
                 *)0x0) {
              p_Var8 = p_Var5 + 8;
              goto LAB_00e24fc0;
            }
          }
          p_Var4 = *(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
                     **)p_Var5;
        }
LAB_00e24fc0:
        *(undefined8 *)p_Var3 = 0;
        *(undefined8 *)(p_Var3 + 8) = 0;
        *(__tree<std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::__map_value_compare<float,std::__ndk1::__value_type<float,cocos2d::Vec4>,std::__ndk1::less<float>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<float,cocos2d::Vec4>>>
          **)(p_Var3 + 0x10) = p_Var5;
        *(__tree_node_base **)p_Var8 = p_Var3;
        if (**(long **)this != 0) {
          *(long *)this = **(long **)this;
          p_Var3 = *(__tree_node_base **)p_Var8;
        }
        __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 8),p_Var3);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
        if (p_Var10 == (__tree_node_base *)0x0) goto LAB_00e2505c;
        p_Var7 = *(__tree_node_base **)(p_Var10 + 0x10);
        if (p_Var7 == (__tree_node_base *)0x0) {
          p_Var7 = (__tree_node_base *)0x0;
          plVar6 = (long *)param_2[1];
joined_r0x00e25034:
          if (plVar6 == (long *)0x0) goto LAB_00e25080;
LAB_00e25064:
          do {
            param_2 = plVar6;
            plVar6 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        else {
          p_Var3 = *(__tree_node_base **)p_Var7;
          if (p_Var3 == p_Var10) {
            *(undefined8 *)p_Var7 = 0;
            p_Var3 = *(__tree_node_base **)(p_Var7 + 8);
            if (*(__tree_node_base **)(p_Var7 + 8) == (__tree_node_base *)0x0) goto LAB_00e25074;
            do {
              do {
                p_Var7 = p_Var3;
                p_Var3 = *(__tree_node_base **)p_Var7;
              } while (*(__tree_node_base **)p_Var7 != (__tree_node_base *)0x0);
              p_Var3 = *(__tree_node_base **)(p_Var7 + 8);
            } while (*(__tree_node_base **)(p_Var7 + 8) != (__tree_node_base *)0x0);
          }
          else {
            *(undefined8 *)(p_Var7 + 8) = 0;
            if (p_Var3 == (__tree_node_base *)0x0) {
LAB_00e25074:
              plVar6 = (long *)param_2[1];
              goto joined_r0x00e25034;
            }
            do {
              do {
                p_Var7 = p_Var3;
                p_Var3 = *(__tree_node_base **)p_Var7;
              } while (*(__tree_node_base **)p_Var7 != (__tree_node_base *)0x0);
              p_Var3 = *(__tree_node_base **)(p_Var7 + 8);
            } while (*(__tree_node_base **)(p_Var7 + 8) != (__tree_node_base *)0x0);
          }
LAB_00e2505c:
          plVar6 = (long *)param_2[1];
          if ((long *)param_2[1] != (long *)0x0) goto LAB_00e25064;
LAB_00e25080:
          plVar6 = param_2 + 2;
          bVar2 = *(long **)*plVar6 != param_2;
          param_2 = (long *)*plVar6;
          if (bVar2) {
            do {
              lVar9 = *plVar6;
              plVar6 = (long *)(lVar9 + 0x10);
              param_2 = (long *)*plVar6;
            } while (*param_2 != lVar9);
          }
        }
        bVar2 = p_Var10 != (__tree_node_base *)0x0;
        p_Var3 = p_Var10;
        p_Var10 = p_Var7;
      } while (bVar2);
      destroy(this,(__tree_node *)p_Var3);
      if (p_Var7 == (__tree_node_base *)0x0) goto joined_r0x00e250fc;
      p_Var3 = *(__tree_node_base **)(p_Var7 + 0x10);
      while (p_Var10 = p_Var3, p_Var10 != (__tree_node_base *)0x0) {
        p_Var7 = p_Var10;
        p_Var3 = *(__tree_node_base **)(p_Var10 + 0x10);
      }
    }
    destroy(this,(__tree_node *)p_Var7);
  }
joined_r0x00e250fc:
  while (param_2 != param_3) {
    __emplace_multi<std::__ndk1::pair<float_const,cocos2d::Vec4>const&>
              (this,(pair *)((long)param_2 + 0x1c));
    plVar6 = (long *)param_2[1];
    if ((long *)param_2[1] == (long *)0x0) {
      plVar6 = param_2 + 2;
      bVar2 = *(long **)*plVar6 != param_2;
      param_2 = (long *)*plVar6;
      if (bVar2) {
        do {
          lVar9 = *plVar6;
          plVar6 = (long *)(lVar9 + 0x10);
          param_2 = (long *)*plVar6;
        } while (*param_2 != lVar9);
      }
    }
    else {
      do {
        param_2 = plVar6;
        plVar6 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}

