
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011b7a04 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* void std::__ndk1::map<int, v8::internal::Handle<v8::internal::Script>, std::__ndk1::less<int>,
   std::__ndk1::allocator<std::__ndk1::pair<int const, v8::internal::Handle<v8::internal::Script> >
   > 
   >::insert<std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<int,
   v8::internal::Handle<v8::internal::Script> >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<int,
   v8::internal::Handle<v8::internal::Script> >, void*>*, long> >
   >(std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<int,
   v8::internal::Handle<v8::internal::Script> >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<int,
   v8::internal::Handle<v8::internal::Script> >, void*>*, long> >,
   std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<int,
   v8::internal::Handle<v8::internal::Script> >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<int,
   v8::internal::Handle<v8::internal::Script> >, void*>*, long> >) */

void __thiscall
std::__ndk1::
map<int,v8::internal::Handle<v8::internal::Script>,std::__ndk1::less<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,v8::internal::Handle<v8::internal::Script>>>>
::
insert<std::__ndk1::__map_const_iterator<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__tree_node<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,void*>*,long>>>
          (map<int,v8::internal::Handle<v8::internal::Script>,std::__ndk1::less<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,v8::internal::Handle<v8::internal::Script>>>>
           *this,long *param_2,long *param_3)

{
  map<int,v8::internal::Handle<v8::internal::Script>,std::__ndk1::less<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,v8::internal::Handle<v8::internal::Script>>>>
  *pmVar1;
  __tree_node_base *p_Var2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  if (param_2 != param_3) {
    pmVar1 = this;
    do {
      pmVar1 = (map<int,v8::internal::Handle<v8::internal::Script>,std::__ndk1::less<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,v8::internal::Handle<v8::internal::Script>>>>
                *)__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                  ::__find_equal<int>((__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                                       *)pmVar1,this + 8,&local_48,auStack_50,param_2 + 4);
      if (*(long *)pmVar1 == 0) {
        p_Var2 = operator_new(0x30);
        lVar6 = param_2[5];
        lVar5 = param_2[4];
        *(undefined8 *)p_Var2 = 0;
        *(undefined8 *)(p_Var2 + 8) = 0;
        *(long *)(p_Var2 + 0x28) = lVar6;
        *(long *)(p_Var2 + 0x20) = lVar5;
        *(undefined8 *)(p_Var2 + 0x10) = local_48;
        *(__tree_node_base **)pmVar1 = p_Var2;
        if (**(long **)this != 0) {
          *(long *)this = **(long **)this;
          p_Var2 = *(__tree_node_base **)pmVar1;
        }
        pmVar1 = *(map<int,v8::internal::Handle<v8::internal::Script>,std::__ndk1::less<int>,std::__ndk1::allocator<std::__ndk1::pair<int_const,v8::internal::Handle<v8::internal::Script>>>>
                   **)(this + 8);
        __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)pmVar1,p_Var2);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
        plVar3 = (long *)param_2[1];
        if ((long *)param_2[1] == (long *)0x0) goto LAB_011b7a88;
LAB_011b7a78:
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      else {
        plVar3 = (long *)param_2[1];
        if ((long *)param_2[1] != (long *)0x0) goto LAB_011b7a78;
LAB_011b7a88:
        plVar3 = param_2 + 2;
        plVar4 = (long *)*plVar3;
        if ((long *)*plVar4 != param_2) {
          do {
            lVar5 = *plVar3;
            plVar3 = (long *)(lVar5 + 0x10);
            plVar4 = (long *)*plVar3;
          } while (*plVar4 != lVar5);
        }
      }
      param_2 = plVar4;
    } while (plVar4 != param_3);
  }
  return;
}

