
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<double, unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<double, unsigned int>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<double, unsigned int>,
   std::__ndk1::__map_value_compare<double, std::__ndk1::__value_type<double, unsigned int>,
   std::__ndk1::less<double>, true>, v8::internal::ZoneAllocator<std::__ndk1::__value_type<double,
   unsigned int> > >::__emplace_unique_key_args<double, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<double const&>, std::__ndk1::tuple<> >(double const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<double const&>&&,
   std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__tree<std::__ndk1::__value_type<double,unsigned_int>,std::__ndk1::__map_value_compare<double,std::__ndk1::__value_type<double,unsigned_int>,std::__ndk1::less<double>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<double,unsigned_int>>>
::
__emplace_unique_key_args<double,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<double_const&>,std::__ndk1::tuple<>>
          (double *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  Zone *this;
  __tree_node_base *p_Var1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  undefined1 auVar8 [16];
  
  pdVar4 = param_1 + 1;
  pdVar5 = (double *)*pdVar4;
  pdVar7 = pdVar4;
  if (pdVar5 != (double *)0x0) {
    pdVar4 = param_1 + 1;
    do {
      while (pdVar6 = pdVar5, pdVar7 = pdVar6, *(double *)param_2 < pdVar6[4]) {
        pdVar4 = pdVar6;
        pdVar5 = (double *)*pdVar6;
        if ((double *)*pdVar6 == (double *)0x0) {
          p_Var3 = (__tree_node_base *)*pdVar6;
          goto joined_r0x017c2834;
        }
      }
      if (*(double *)param_2 <= pdVar6[4]) break;
      pdVar4 = pdVar6 + 1;
      pdVar5 = (double *)*pdVar4;
    } while ((double *)*pdVar4 != (double *)0x0);
  }
  p_Var3 = (__tree_node_base *)*pdVar4;
  pdVar6 = pdVar4;
joined_r0x017c2834:
  if (p_Var3 == (__tree_node_base *)0x0) {
    this = (Zone *)param_1[2];
    p_Var3 = *(__tree_node_base **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)p_Var3) < 0x30) {
      p_Var3 = (__tree_node_base *)v8::internal::Zone::NewExpand(this,0x30);
    }
    else {
      *(__tree_node_base **)(this + 0x10) = p_Var3 + 0x30;
    }
    uVar2 = **(undefined8 **)param_4;
    *(undefined4 *)(p_Var3 + 0x28) = 0;
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(double **)(p_Var3 + 0x10) = pdVar7;
    *(undefined8 *)(p_Var3 + 0x20) = uVar2;
    *pdVar6 = (double)p_Var3;
    p_Var1 = p_Var3;
    if (*(double *)*param_1 != 0.0) {
      *param_1 = *(double *)*param_1;
      p_Var1 = (__tree_node_base *)*pdVar6;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var1);
    uVar2 = 1;
    param_1[3] = (double)((long)param_1[3] + 1);
  }
  else {
    uVar2 = 0;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = p_Var3;
  return auVar8;
}

