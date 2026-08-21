
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<tinyobj::vertex_index,
   unsigned int>, std::__ndk1::__tree_node<std::__ndk1::__value_type<tinyobj::vertex_index, unsigned
   int>, void*>*, long>, bool> std::__ndk1::__tree<std::__ndk1::__value_type<tinyobj::vertex_index,
   unsigned int>, std::__ndk1::__map_value_compare<tinyobj::vertex_index,
   std::__ndk1::__value_type<tinyobj::vertex_index, unsigned int>,
   std::__ndk1::less<tinyobj::vertex_index>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index, unsigned int> >
   >::__emplace_unique_key_args<tinyobj::vertex_index, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<tinyobj::vertex_index const&>, std::__ndk1::tuple<> >(tinyobj::vertex_index
   const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<tinyobj::vertex_index
   const&>&&, std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
::
__emplace_unique_key_args<tinyobj::vertex_index,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<tinyobj::vertex_index_const&>,std::__ndk1::tuple<>>
          (vertex_index *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  vertex_index *pvVar8;
  vertex_index *pvVar9;
  vertex_index *pvVar10;
  undefined1 auVar11 [16];
  
  pvVar8 = param_1 + 8;
  pvVar9 = *(vertex_index **)pvVar8;
  pvVar10 = pvVar8;
  if (pvVar9 == (vertex_index *)0x0) {
LAB_00d3a118:
    p_Var7 = *(__tree_node_base **)pvVar8;
  }
  else {
    iVar1 = *(int *)(param_2 + 8);
    iVar2 = *(int *)param_2;
    pvVar8 = param_1 + 8;
    do {
                    /* try { // try from 00d3a0a0 to 00e3a0a7 has its CatchHandler @ 00d3a1f0 */
      while (pvVar10 = pvVar9, iVar3 = *(int *)(pvVar10 + 0x1c), iVar2 != iVar3) {
        if (iVar2 < iVar3) goto LAB_00d3a0e4;
                    /* try { // try from 00d3a0d8 to 00e3a0e3 has its CatchHandler @ 00d3a1f4 */
        if (iVar2 <= iVar3) goto LAB_00d3a118;
LAB_00d3a100:
        pvVar8 = pvVar10 + 8;
        pvVar9 = *(vertex_index **)pvVar8;
        if (*(vertex_index **)pvVar8 == (vertex_index *)0x0) goto LAB_00d3a118;
      }
      iVar3 = *(int *)(pvVar10 + 0x24);
      if (iVar1 != iVar3) {
        if (iVar1 < iVar3) goto LAB_00d3a0e4;
        if (iVar3 < iVar1) goto LAB_00d3a100;
        goto LAB_00d3a118;
      }
                    /* try { // try from 00d3a0b8 to 00e3a0bb has its CatchHandler @ 00d3a234 */
      if (*(int *)(pvVar10 + 0x20) <= *(int *)(param_2 + 4)) {
        if (*(int *)(pvVar10 + 0x20) < *(int *)(param_2 + 4)) goto LAB_00d3a100;
        goto LAB_00d3a118;
      }
LAB_00d3a0e4:
      pvVar8 = pvVar10;
      pvVar9 = *(vertex_index **)pvVar10;
    } while (*(vertex_index **)pvVar10 != (vertex_index *)0x0);
    p_Var7 = *(__tree_node_base **)pvVar10;
  }
  if (p_Var7 == (__tree_node_base *)0x0) {
    p_Var7 = operator_new(0x30);
    uVar4 = *(undefined4 *)(*(undefined8 **)param_4 + 1);
    uVar5 = **(undefined8 **)param_4;
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *(vertex_index **)(p_Var7 + 0x10) = pvVar10;
    *(undefined4 *)(p_Var7 + 0x24) = uVar4;
    *(undefined4 *)(p_Var7 + 0x28) = 0;
    *(undefined8 *)(p_Var7 + 0x1c) = uVar5;
    *(__tree_node_base **)pvVar8 = p_Var7;
    p_Var6 = p_Var7;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      p_Var6 = *(__tree_node_base **)pvVar8;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 8),p_Var6);
    uVar5 = 1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  else {
    uVar5 = 0;
  }
  auVar11._8_8_ = uVar5;
  auVar11._0_8_ = p_Var7;
  return auVar11;
}

