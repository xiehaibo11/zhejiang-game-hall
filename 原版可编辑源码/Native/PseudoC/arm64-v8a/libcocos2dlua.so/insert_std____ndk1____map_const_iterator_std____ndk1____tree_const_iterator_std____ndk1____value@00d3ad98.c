
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00d3ae00 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* void std::__ndk1::map<tinyobj::vertex_index, unsigned int,
   std::__ndk1::less<tinyobj::vertex_index>,
   std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index const, unsigned int> >
   >::insert<std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<tinyobj::vertex_index,
   unsigned int>, std::__ndk1::__tree_node<std::__ndk1::__value_type<tinyobj::vertex_index, unsigned
   int>, void*>*, long> >
   >(std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<tinyobj::vertex_index,
   unsigned int>, std::__ndk1::__tree_node<std::__ndk1::__value_type<tinyobj::vertex_index, unsigned
   int>, void*>*, long> >,
   std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<tinyobj::vertex_index,
   unsigned int>, std::__ndk1::__tree_node<std::__ndk1::__value_type<tinyobj::vertex_index, unsigned
   int>, void*>*, long> >) */

void __thiscall
std::__ndk1::
map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
::
insert<std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__tree_node<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,void*>*,long>>>
          (map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
           *this,long *param_2,long *param_3)

{
  long lVar1;
  map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
  *pmVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_3) {
    pmVar2 = this;
    do {
      pmVar2 = (map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
                *)__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                  ::__find_equal<tinyobj::vertex_index>
                            ((__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
                              *)pmVar2,this + 8,&local_60,auStack_68,
                             (undefined8 *)((long)param_2 + 0x1c));
      if (*(long *)pmVar2 == 0) {
        p_Var3 = operator_new(0x30);
        uVar8 = *(undefined8 *)((long)param_2 + 0x24);
        uVar7 = *(undefined8 *)((long)param_2 + 0x1c);
        *(undefined8 *)p_Var3 = 0;
        *(undefined8 *)(p_Var3 + 8) = 0;
        *(undefined8 *)(p_Var3 + 0x24) = uVar8;
        *(undefined8 *)(p_Var3 + 0x1c) = uVar7;
        *(undefined8 *)(p_Var3 + 0x10) = local_60;
        *(__tree_node_base **)pmVar2 = p_Var3;
        if (**(long **)this != 0) {
          *(long *)this = **(long **)this;
          p_Var3 = *(__tree_node_base **)pmVar2;
        }
        pmVar2 = *(map<tinyobj::vertex_index,unsigned_int,std::__ndk1::less<tinyobj::vertex_index>,std::__ndk1::allocator<std::__ndk1::pair<tinyobj::vertex_index_const,unsigned_int>>>
                   **)(this + 8);
        __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)pmVar2,p_Var3);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
        plVar4 = (long *)param_2[1];
        if ((long *)param_2[1] == (long *)0x0) goto LAB_00d3ae84;
LAB_00d3ae74:
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      else {
        plVar4 = (long *)param_2[1];
        if ((long *)param_2[1] != (long *)0x0) goto LAB_00d3ae74;
LAB_00d3ae84:
        plVar4 = param_2 + 2;
        plVar5 = (long *)*plVar4;
        if ((long *)*plVar5 != param_2) {
          do {
            lVar6 = *plVar4;
            plVar4 = (long *)(lVar6 + 0x10);
            plVar5 = (long *)*plVar4;
          } while (*plVar5 != lVar6);
        }
      }
      param_2 = plVar5;
    } while (plVar5 != param_3);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

