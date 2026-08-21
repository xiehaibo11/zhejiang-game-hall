
/* void std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::FieldInfo>,
   std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,
   std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::FieldInfo>,
   std::__ndk1::less<v8::internal::compiler::Node*>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::FieldInfo> >
   >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::FieldInfo>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::FieldInfo>, void*>*, long>
   >(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::FieldInfo>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::FieldInfo>, void*>*, long>,
   std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::FieldInfo>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::FieldInfo>, void*>*, long>) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
::
__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,void*>*,long>>
          (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
           *this,long *param_2,long *param_3)

{
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
  *p_Var1;
  bool bVar2;
  Zone *this_00;
  __tree_node_base *p_Var3;
  __tree_node *p_Var4;
  long *plVar5;
  undefined8 *puVar6;
  __tree_node *p_Var7;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
  *p_Var8;
  __tree_node *p_Var9;
  long *plVar10;
  long lVar11;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
  *p_Var12;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
  *p_Var13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (*(long *)(this + 0x18) != 0) {
    p_Var4 = *(__tree_node **)this;
    p_Var13 = this + 8;
    *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
      **)this = p_Var13;
    *(undefined8 *)(*(long *)p_Var13 + 0x10) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(this + 0x18) = 0;
    p_Var9 = *(__tree_node **)(p_Var4 + 8);
    if (p_Var9 != (__tree_node *)0x0) {
      p_Var4 = p_Var9;
    }
    while (p_Var4 != (__tree_node *)0x0) {
      if (param_2 == param_3) {
        p_Var9 = *(__tree_node **)(p_Var4 + 0x10);
        while (p_Var7 = p_Var9, p_Var7 != (__tree_node *)0x0) {
          p_Var4 = p_Var7;
          p_Var9 = *(__tree_node **)(p_Var7 + 0x10);
        }
        destroy(this,p_Var4);
        return;
      }
      puVar6 = *(undefined8 **)(p_Var4 + 0x10);
      *(long *)(p_Var4 + 0x20) = param_2[4];
      lVar11 = param_2[7];
      lVar15 = param_2[6];
      lVar14 = param_2[5];
      *(long *)(p_Var4 + 0x40) = param_2[8];
      *(long *)(p_Var4 + 0x38) = lVar11;
      *(long *)(p_Var4 + 0x30) = lVar15;
      *(long *)(p_Var4 + 0x28) = lVar14;
      if (puVar6 == (undefined8 *)0x0) {
        p_Var9 = (__tree_node *)0x0;
      }
      else if ((__tree_node *)*puVar6 == p_Var4) {
        *puVar6 = 0;
        p_Var9 = *(__tree_node **)(p_Var4 + 0x10);
        while (p_Var7 = *(__tree_node **)(p_Var9 + 8),
              *(__tree_node **)(p_Var9 + 8) != (__tree_node *)0x0) {
          do {
            p_Var9 = p_Var7;
            p_Var7 = *(__tree_node **)p_Var9;
          } while (*(__tree_node **)p_Var9 != (__tree_node *)0x0);
        }
      }
      else {
        puVar6[1] = 0;
        p_Var9 = *(__tree_node **)(p_Var4 + 0x10);
        p_Var7 = *(__tree_node **)p_Var9;
        while (p_Var7 != (__tree_node *)0x0) {
          do {
            p_Var9 = p_Var7;
            p_Var7 = *(__tree_node **)p_Var9;
          } while (*(__tree_node **)p_Var9 != (__tree_node *)0x0);
          p_Var7 = *(__tree_node **)(p_Var9 + 8);
        }
      }
      p_Var8 = p_Var13;
      p_Var12 = p_Var13;
      if (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
            **)p_Var13 !=
          (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
           *)0x0) {
        p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                   **)p_Var13;
        do {
          while (p_Var8 = p_Var1, *(ulong *)(p_Var8 + 0x20) <= *(ulong *)(p_Var4 + 0x20)) {
            p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                       **)(p_Var8 + 8);
            if (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                  **)(p_Var8 + 8) ==
                (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                 *)0x0) {
              p_Var12 = p_Var8 + 8;
              goto LAB_01770a1c;
            }
          }
          p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                     **)p_Var8;
          p_Var12 = p_Var8;
        } while (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                   **)p_Var8 !=
                 (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                  *)0x0);
      }
LAB_01770a1c:
      *(undefined8 *)p_Var4 = 0;
      *(undefined8 *)(p_Var4 + 8) = 0;
      *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
        **)(p_Var4 + 0x10) = p_Var8;
      *(__tree_node **)p_Var12 = p_Var4;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        p_Var4 = *(__tree_node **)p_Var12;
      }
      __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)p_Var4);
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
      plVar5 = (long *)param_2[1];
      p_Var4 = p_Var9;
      if ((long *)param_2[1] == (long *)0x0) {
        plVar5 = param_2 + 2;
        bVar2 = *(long **)*plVar5 != param_2;
        param_2 = (long *)*plVar5;
        if (bVar2) {
          do {
            lVar11 = *plVar5;
            plVar5 = (long *)(lVar11 + 0x10);
            param_2 = (long *)*plVar5;
          } while (*param_2 != lVar11);
        }
      }
      else {
        do {
          param_2 = plVar5;
          plVar5 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    }
  }
  if (param_2 != param_3) {
    p_Var13 = this + 8;
    do {
      this_00 = *(Zone **)(this + 0x10);
      p_Var3 = *(__tree_node_base **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var3) < 0x48) {
        p_Var3 = (__tree_node_base *)v8::internal::Zone::NewExpand(this_00,0x48);
      }
      else {
        *(__tree_node_base **)(this_00 + 0x10) = p_Var3 + 0x48;
      }
      lVar14 = param_2[5];
      lVar11 = param_2[4];
      lVar16 = param_2[7];
      lVar15 = param_2[6];
      *(long *)(p_Var3 + 0x40) = param_2[8];
      *(long *)(p_Var3 + 0x28) = lVar14;
      *(long *)(p_Var3 + 0x20) = lVar11;
      *(long *)(p_Var3 + 0x38) = lVar16;
      *(long *)(p_Var3 + 0x30) = lVar15;
      p_Var8 = p_Var13;
      p_Var12 = p_Var13;
      if (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
            **)p_Var13 !=
          (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
           *)0x0) {
        p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                   **)p_Var13;
        do {
          while (p_Var8 = p_Var1, *(ulong *)(p_Var8 + 0x20) <= *(ulong *)(p_Var3 + 0x20)) {
            p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                       **)(p_Var8 + 8);
            if (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                  **)(p_Var8 + 8) ==
                (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                 *)0x0) {
              p_Var12 = p_Var8 + 8;
              goto LAB_017708b8;
            }
          }
          p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                     **)p_Var8;
          p_Var12 = p_Var8;
        } while (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                   **)p_Var8 !=
                 (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                  *)0x0);
      }
LAB_017708b8:
      *(undefined8 *)p_Var3 = 0;
      *(undefined8 *)(p_Var3 + 8) = 0;
      *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
        **)(p_Var3 + 0x10) = p_Var8;
      *(__tree_node_base **)p_Var12 = p_Var3;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        p_Var3 = *(__tree_node_base **)p_Var12;
      }
      __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),p_Var3);
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
      plVar5 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar5 = param_2 + 2;
        plVar10 = (long *)*plVar5;
        if ((long *)*plVar10 != param_2) {
          do {
            lVar11 = *plVar5;
            plVar5 = (long *)(lVar11 + 0x10);
            plVar10 = (long *)*plVar5;
          } while (*plVar10 != lVar11);
        }
      }
      else {
        do {
          plVar10 = plVar5;
          plVar5 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      param_2 = plVar10;
    } while (plVar10 != param_3);
  }
  return;
}

