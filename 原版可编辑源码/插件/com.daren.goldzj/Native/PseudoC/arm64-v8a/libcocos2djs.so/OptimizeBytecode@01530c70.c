
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::RegExpBytecodePeepholeOptimization::OptimizeBytecode(v8::internal::Isolate*,
   v8::internal::Zone*, v8::internal::Handle<v8::internal::String>, unsigned char const*, int,
   v8::internal::ZoneUnorderedMap<int, int, v8::base::hash<int>, std::__ndk1::equal_to<int> >
   const&) */

long * v8::internal::RegExpBytecodePeepholeOptimization::OptimizeBytecode
                 (Factory *param_1,Zone *param_2,undefined8 *param_3,uchar *param_4,int param_5,
                 long param_6)

{
  __tree_node *p_Var1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  Zone *pZVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  __tree_node_base *p_Var15;
  long *******ppppppplVar16;
  __tree_node *p_Var17;
  ulong uVar18;
  __tree_node *p_Var19;
  __tree_node_base *p_Var20;
  __tree_node *p_Var21;
  undefined1 *puVar22;
  int iVar23;
  ulong uVar24;
  __tree_node *p_Var25;
  __tree_node *p_Var26;
  undefined1 *puVar27;
  uint uVar28;
  ulong uVar29;
  __tree_node_base *p_Var30;
  int iVar31;
  long lVar32;
  long *plVar33;
  long *plVar34;
  int *piVar35;
  int iVar36;
  byte *pbVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  ulong uVar41;
  int *piVar42;
  undefined2 uVar43;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  Zone *local_168;
  int *local_160;
  __tree_node_base *local_158;
  __tree_node_base *local_150;
  Zone *local_148;
  long local_140;
  __tree_node *local_138;
  __tree_node *local_130;
  Zone *local_128;
  undefined8 local_120;
  __tree_node *p_Stack_118;
  __tree_node *local_110;
  Zone *local_108;
  undefined8 local_100;
  __tree_node **pp_Stack_f8;
  __tree_node *local_f0;
  Zone *pZStack_e8;
  undefined8 local_e0;
  __tree_node **pp_Stack_d8;
  __tree_node *local_d0;
  Zone *pZStack_c8;
  undefined8 local_c0;
  Zone *local_b8;
  long *******local_b0;
  long *******local_a8;
  long local_a0;
  Zone *local_98;
  int local_8c;
  int local_88;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined1 auStack_78 [8];
  
  local_180 = (undefined1 *)0x0;
  local_178 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_160 = *(int **)(param_2 + 0x10);
  local_168 = param_2;
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)local_160) < 0x70) {
    local_160 = (int *)Zone::NewExpand(param_2,0x70);
  }
  else {
    *(int **)(param_2 + 0x10) = local_160 + 0x1c;
  }
  FUN_01532c68(local_160,0xffffffff,param_2);
  p_Var17 = (__tree_node *)&local_110;
  p_Var21 = (__tree_node *)&local_f0;
  local_150 = (__tree_node_base *)0x0;
  local_130 = (__tree_node *)0x0;
  local_110 = (__tree_node *)0x0;
  local_f0 = (__tree_node *)0x0;
  local_d0 = (__tree_node *)0x0;
  local_140 = 0;
  local_120 = 0;
  local_100 = 0;
  local_e0 = 0;
  local_c0 = 0;
  puVar22 = local_180;
  local_158 = (__tree_node_base *)&local_150;
  local_148 = param_2;
  local_138 = (__tree_node *)&local_130;
  local_128 = param_2;
  p_Stack_118 = p_Var17;
  local_108 = param_2;
  pp_Stack_f8 = (__tree_node **)p_Var21;
  pZStack_e8 = param_2;
  pp_Stack_d8 = &local_d0;
  pZStack_c8 = param_2;
  local_b8 = param_2;
  if (param_5 != 0) {
    puVar22 = *(undefined1 **)(param_2 + 0x10);
    lVar32 = (long)param_5;
    uVar10 = lVar32 + 7U & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar22) < uVar10) {
      puVar9 = (undefined1 *)Zone::NewExpand(param_2,uVar10);
      local_170 = puVar9 + lVar32;
      puVar22 = puVar9;
      puVar27 = local_178;
      while (local_178 = puVar9, puVar27 != local_180) {
        puVar27 = puVar27 + -1;
        puVar22 = puVar22 + -1;
        *puVar22 = *puVar27;
      }
    }
    else {
      *(undefined1 **)(param_2 + 0x10) = puVar22 + uVar10;
      local_170 = puVar22 + lVar32;
      local_178 = puVar22;
    }
  }
  local_180 = puVar22;
  plVar33 = *(long **)(param_6 + 0x18);
  if (plVar33 != (long *)0x0) {
    do {
      local_84 = *(undefined1 (*) [4])((long)plVar33 + 0x14);
      local_80 = (undefined1 *)CONCAT44(local_80._4_4_,(int)plVar33[2]);
      std::__ndk1::
      __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
      ::__emplace_unique_key_args<int,int&,int&>
                ((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
                  *)&local_158,(int *)&local_80,(int *)&local_80,(int *)local_84);
      local_b0 = (long *******)local_84;
      lVar32 = std::__ndk1::
               __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
               ::
               __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                         ((int *)&p_Stack_118,(piecewise_construct_t *)local_84,
                          (tuple *)&DAT_01a4aa6c,(tuple *)&local_b0);
      *(int *)(lVar32 + 0x20) = *(int *)(lVar32 + 0x20) + 1;
      plVar33 = (long *)*plVar33;
    } while (plVar33 != (long *)0x0);
  }
  uVar8 = FUN_015331f8(local_160,0x11);
  uVar8 = FUN_015331f8(uVar8,0x22);
  lVar32 = FUN_015331f8(uVar8,0x32);
  plVar34 = *(long **)(lVar32 + 0x58);
  iVar31 = *(int *)(lVar32 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x28) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x28);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 5;
  }
  *(int *)(plVar33 + 2) = iVar31 + 4;
  *(undefined4 *)((long)plVar33 + 0x1c) = 0;
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  *(undefined8 *)((long)plVar33 + 0x14) = 4;
  lVar12 = *plVar34;
  *plVar33 = lVar12;
  *(long **)(lVar12 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  *(undefined4 *)(lVar32 + 4) = 0x35;
  uVar8 = FUN_0153336c(lVar32,0,1,3,0);
  uVar8 = FUN_0153336c(uVar8,2,1,3,4);
  uVar8 = FUN_0153336c(uVar8,1,8,0x10,0);
  uVar8 = FUN_0153336c(uVar8,1,4,4,0);
  FUN_0153336c(uVar8,0,4,4,0);
  iVar31 = *(int *)(lVar32 + 8);
  lVar12 = lVar32;
  while (2 < iVar31) {
    lVar12 = *(long *)(lVar12 + 0x10);
    iVar31 = *(int *)(lVar12 + 8);
  }
  plVar34 = *(long **)(lVar32 + 0x60);
  iVar31 = *(int *)(lVar12 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x18) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x18);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 3;
  }
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  plVar33[2] = (ulong)(iVar31 + 4) | 0x400000000;
  lVar32 = *plVar34;
  *plVar33 = lVar32;
  *(long **)(lVar32 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  uVar8 = FUN_015331f8(local_160,0x34);
  uVar8 = FUN_015331f8(uVar8,0x12);
  uVar8 = FUN_015331f8(uVar8,0x18);
  lVar32 = FUN_015331f8(uVar8,0x32);
  plVar34 = *(long **)(lVar32 + 0x58);
  iVar31 = *(int *)(lVar32 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x28) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x28);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 5;
  }
  *(int *)(plVar33 + 2) = iVar31 + 4;
  *(undefined8 *)((long)plVar33 + 0x14) = 4;
  *(undefined4 *)((long)plVar33 + 0x1c) = 0;
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  lVar12 = *plVar34;
  *plVar33 = lVar12;
  *(long **)(lVar12 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  *(undefined4 *)(lVar32 + 4) = 0x38;
  uVar8 = FUN_0153336c(lVar32,1,1,3,0);
  uVar8 = FUN_0153336c(uVar8,3,1,3,2);
  uVar8 = FUN_0153336c(uVar8,2,1,3,2);
  uVar8 = FUN_0153336c(uVar8,0,1,3,4);
  uVar8 = FUN_0153336c(uVar8,2,4,4,0);
  FUN_0153336c(uVar8,0,4,4,0);
  iVar31 = *(int *)(lVar32 + 8);
  lVar12 = lVar32;
  while (3 < iVar31) {
    lVar12 = *(long *)(lVar12 + 0x10);
    iVar31 = *(int *)(lVar12 + 8);
  }
  plVar34 = *(long **)(lVar32 + 0x60);
  iVar31 = *(int *)(lVar12 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x18) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x18);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 3;
  }
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  plVar33[2] = (ulong)(iVar31 + 4) | 0x400000000;
  lVar32 = *plVar34;
  *plVar33 = lVar32;
  *(long **)(lVar32 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  uVar8 = FUN_015331f8(local_160,0x34);
  uVar8 = FUN_015331f8(uVar8,0x12);
  uVar8 = FUN_015331f8(uVar8,0x1c);
  lVar32 = FUN_015331f8(uVar8,0x32);
  plVar34 = *(long **)(lVar32 + 0x58);
  iVar31 = *(int *)(lVar32 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x28) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x28);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 5;
  }
  *(int *)(plVar33 + 2) = iVar31 + 4;
  *(undefined8 *)((long)plVar33 + 0x14) = 4;
  *(undefined4 *)((long)plVar33 + 0x1c) = 0;
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  lVar12 = *plVar34;
  *plVar33 = lVar12;
  *(long **)(lVar12 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  *(undefined4 *)(lVar32 + 4) = 0x36;
  uVar8 = FUN_0153336c(lVar32,1,1,3,0);
  uVar8 = FUN_0153336c(uVar8,3,1,3,2);
  uVar8 = FUN_0153336c(uVar8,2,1,3,2);
  uVar8 = FUN_0153336c(uVar8,2,4,4,0);
  uVar8 = FUN_0153336c(uVar8,0,1,3,4);
  uVar8 = FUN_0153336c(uVar8,2,8,4,0);
  FUN_0153336c(uVar8,0,4,4,0);
  iVar31 = *(int *)(lVar32 + 8);
  lVar12 = lVar32;
  while (3 < iVar31) {
    lVar12 = *(long *)(lVar12 + 0x10);
    iVar31 = *(int *)(lVar12 + 8);
  }
  plVar34 = *(long **)(lVar32 + 0x60);
  iVar31 = *(int *)(lVar12 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x18) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x18);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 3;
  }
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  plVar33[2] = (ulong)(iVar31 + 4) | 0x400000000;
  lVar32 = *plVar34;
  *plVar33 = lVar32;
  *(long **)(lVar32 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  uVar8 = FUN_015331f8(local_160,0x11);
  uVar8 = FUN_015331f8(uVar8,0x18);
  lVar32 = FUN_015331f8(uVar8,0x32);
  plVar34 = *(long **)(lVar32 + 0x58);
  iVar31 = *(int *)(lVar32 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x28) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x28);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 5;
  }
  *(int *)(plVar33 + 2) = iVar31 + 4;
  *(undefined8 *)((long)plVar33 + 0x14) = 4;
  *(undefined4 *)((long)plVar33 + 0x1c) = 0;
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  lVar12 = *plVar34;
  *plVar33 = lVar12;
  *(long **)(lVar12 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  *(undefined4 *)(lVar32 + 4) = 0x37;
  uVar8 = FUN_0153336c(lVar32,0,1,3,0);
  uVar8 = FUN_0153336c(uVar8,2,1,3,2);
  uVar8 = FUN_0153336c(uVar8,1,1,3,2);
  uVar8 = FUN_0153336c(uVar8,1,4,4,0);
  FUN_0153336c(uVar8,0,4,4,0);
  iVar31 = *(int *)(lVar32 + 8);
  lVar12 = lVar32;
  while (2 < iVar31) {
    lVar12 = *(long *)(lVar12 + 0x10);
    iVar31 = *(int *)(lVar12 + 8);
  }
  plVar34 = *(long **)(lVar32 + 0x60);
  iVar31 = *(int *)(lVar12 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x18) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x18);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 3;
  }
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  plVar33[2] = (ulong)(iVar31 + 4) | 0x400000000;
  lVar32 = *plVar34;
  *plVar33 = lVar32;
  *(long **)(lVar32 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  uVar8 = FUN_015331f8(local_160,0x11);
  uVar8 = FUN_015331f8(uVar8,0x18);
  lVar12 = FUN_015331f8(uVar8,0x18);
  iVar31 = *(int *)(lVar12 + 8);
  lVar32 = lVar12;
  while (1 < iVar31) {
    lVar32 = *(long *)(lVar32 + 0x10);
    iVar31 = *(int *)(lVar32 + 8);
  }
  plVar34 = *(long **)(lVar12 + 0x58);
  iVar31 = *(int *)(lVar12 + 0xc);
  iVar23 = *(int *)(lVar32 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x28) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x28);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 5;
  }
  *(int *)(plVar33 + 2) = iVar31 + 4;
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  *(int *)((long)plVar33 + 0x1c) = iVar23 + 4;
  *(undefined4 *)(plVar33 + 4) = 4;
  *(undefined8 *)((long)plVar33 + 0x14) = 0x100000004;
  lVar32 = *plVar34;
  *plVar33 = lVar32;
  *(long **)(lVar32 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  lVar32 = FUN_015331f8(lVar12,0x32);
  plVar34 = *(long **)(lVar32 + 0x58);
  iVar31 = *(int *)(lVar32 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x28) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x28);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 5;
  }
  *(int *)(plVar33 + 2) = iVar31 + 4;
  *(undefined8 *)((long)plVar33 + 0x14) = 4;
  *(undefined4 *)((long)plVar33 + 0x1c) = 0;
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  lVar12 = *plVar34;
  *plVar33 = lVar12;
  *(long **)(lVar12 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  *(undefined4 *)(lVar32 + 4) = 0x39;
  uVar8 = FUN_0153336c(lVar32,0,1,3,0);
  uVar8 = FUN_0153336c(uVar8,3,1,3,4);
  uVar8 = FUN_0153336c(uVar8,1,1,3,2);
  uVar8 = FUN_0153336c(uVar8,2,1,3,2);
  uVar8 = FUN_0153336c(uVar8,1,4,4,0);
  FUN_0153336c(uVar8,0,4,4,0);
  iVar31 = *(int *)(lVar32 + 8);
  lVar12 = lVar32;
  while (2 < iVar31) {
    lVar12 = *(long *)(lVar12 + 0x10);
    iVar31 = *(int *)(lVar12 + 8);
  }
  plVar34 = *(long **)(lVar32 + 0x60);
  iVar31 = *(int *)(lVar12 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x18) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x18);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 3;
  }
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  plVar33[2] = (ulong)(iVar31 + 4) | 0x400000000;
  lVar12 = *plVar34;
  *plVar33 = lVar12;
  *(long **)(lVar12 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  iVar31 = *(int *)(lVar32 + 8);
  lVar12 = lVar32;
  while (3 < iVar31) {
    lVar12 = *(long *)(lVar12 + 0x10);
    iVar31 = *(int *)(lVar12 + 8);
  }
  plVar34 = *(long **)(lVar32 + 0x60);
  iVar31 = *(int *)(lVar12 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x18) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x18);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 3;
  }
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  plVar33[2] = (ulong)(iVar31 + 4) | 0x400000000;
  lVar32 = *plVar34;
  *plVar33 = lVar32;
  *(long **)(lVar32 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  uVar8 = FUN_015331f8(local_160,0x11);
  lVar32 = FUN_015331f8(uVar8,0x24);
  plVar34 = *(long **)(lVar32 + 0x58);
  iVar31 = *(int *)(lVar32 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x28) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x28);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 5;
  }
  *(int *)(plVar33 + 2) = iVar31 + 4;
  *(undefined8 *)((long)plVar33 + 0x14) = 4;
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  *(undefined4 *)((long)plVar33 + 0x1c) = 0x38;
  lVar12 = *plVar34;
  *plVar33 = lVar12;
  *(long **)(lVar12 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  lVar32 = FUN_015331f8(lVar32,0x22);
  plVar34 = *(long **)(lVar32 + 0x58);
  iVar31 = *(int *)(lVar32 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x28) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x28);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 5;
  }
  *(int *)(plVar33 + 2) = iVar31 + 4;
  *(undefined8 *)((long)plVar33 + 0x14) = 4;
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  *(undefined4 *)((long)plVar33 + 0x1c) = 0x30;
  lVar12 = *plVar34;
  *plVar33 = lVar12;
  *(long **)(lVar12 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  lVar12 = FUN_015331f8(lVar32,0x10);
  iVar31 = *(int *)(lVar12 + 8);
  lVar32 = lVar12;
  while (1 < iVar31) {
    lVar32 = *(long *)(lVar32 + 0x10);
    iVar31 = *(int *)(lVar32 + 8);
  }
  plVar34 = *(long **)(lVar12 + 0x58);
  iVar31 = *(int *)(lVar12 + 0xc);
  iVar23 = *(int *)(lVar32 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x28) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x28);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 5;
  }
  *(int *)(plVar33 + 2) = iVar31 + 4;
  *(undefined8 *)((long)plVar33 + 0x14) = 0x100000004;
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  *(int *)((long)plVar33 + 0x1c) = iVar23 + 4;
  *(undefined4 *)(plVar33 + 4) = 4;
  lVar32 = *plVar34;
  *plVar33 = lVar32;
  *(long **)(lVar32 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  lVar32 = FUN_015331f8(lVar12,0x32);
  plVar34 = *(long **)(lVar32 + 0x58);
  iVar31 = *(int *)(lVar32 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x28) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x28);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 5;
  }
  *(int *)(plVar33 + 2) = iVar31 + 4;
  *(undefined8 *)((long)plVar33 + 0x14) = 4;
  *(undefined4 *)((long)plVar33 + 0x1c) = 0;
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  lVar12 = *plVar34;
  *plVar33 = lVar12;
  *(long **)(lVar12 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  *(undefined4 *)(lVar32 + 4) = 0x3a;
  uVar8 = FUN_0153336c(lVar32,0,1,3,0);
  uVar8 = FUN_0153336c(uVar8,4,1,3,2);
  uVar8 = FUN_0153336c(uVar8,1,1,3,2);
  uVar8 = FUN_0153336c(uVar8,2,8,0x10,0);
  uVar8 = FUN_0153336c(uVar8,1,4,4,0);
  FUN_0153336c(uVar8,0,4,4,0);
  iVar31 = *(int *)(lVar32 + 8);
  lVar12 = lVar32;
  while (2 < iVar31) {
    lVar12 = *(long *)(lVar12 + 0x10);
    iVar31 = *(int *)(lVar12 + 8);
  }
  plVar34 = *(long **)(lVar32 + 0x60);
  iVar31 = *(int *)(lVar12 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x18) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x18);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 3;
  }
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  plVar33[2] = (ulong)(iVar31 + 4) | 0x400000000;
  lVar12 = *plVar34;
  *plVar33 = lVar12;
  *(long **)(lVar12 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  iVar31 = *(int *)(lVar32 + 8);
  lVar12 = lVar32;
  while (3 < iVar31) {
    lVar12 = *(long *)(lVar12 + 0x10);
    iVar31 = *(int *)(lVar12 + 8);
  }
  plVar34 = *(long **)(lVar32 + 0x60);
  iVar31 = *(int *)(lVar12 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x18) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x18);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 3;
  }
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  plVar33[2] = (ulong)(iVar31 + 4) | 0x400000000;
  lVar12 = *plVar34;
  *plVar33 = lVar12;
  *(long **)(lVar12 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  iVar31 = *(int *)(lVar32 + 8);
  lVar12 = lVar32;
  while (4 < iVar31) {
    lVar12 = *(long *)(lVar12 + 0x10);
    iVar31 = *(int *)(lVar12 + 8);
  }
  plVar34 = *(long **)(lVar32 + 0x60);
  iVar31 = *(int *)(lVar12 + 0xc);
  pZVar11 = (Zone *)plVar34[3];
  plVar33 = *(long **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)plVar33) < 0x18) {
    plVar33 = (long *)Zone::NewExpand(pZVar11,0x18);
  }
  else {
    *(long **)(pZVar11 + 0x10) = plVar33 + 3;
  }
  *plVar33 = 0;
  plVar33[1] = (long)plVar34;
  plVar33[2] = (ulong)(iVar31 + 4) | 0x400000000;
  lVar32 = *plVar34;
  *plVar33 = lVar32;
  *(long **)(lVar32 + 8) = plVar33;
  *plVar34 = (long)plVar33;
  plVar34[2] = plVar34[2] + 1;
  local_b0._0_4_ = 0xffffffff;
  local_80 = (undefined1 *)((ulong)local_80 & 0xffffffff00000000);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  ::__emplace_unique_key_args<int,int&,int>
            ((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
              *)&pp_Stack_f8,(int *)&local_b0,(int *)&local_b0,(int *)&local_80);
  local_80 = (undefined1 *)((ulong)local_80 & 0xffffffff00000000);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  ::__emplace_unique_key_args<int,int&,int>
            ((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
              *)&pp_Stack_d8,(int *)&local_b0,(int *)&local_b0,(int *)&local_80);
  local_b0 = (long *******)CONCAT44(local_b0._4_4_,param_5);
  local_80 = (undefined1 *)((ulong)local_80 & 0xffffffff00000000);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  ::__emplace_unique_key_args<int,int&,int>
            ((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
              *)&pp_Stack_f8,(int *)&local_b0,(int *)&local_b0,(int *)&local_80);
  local_80 = (undefined1 *)((ulong)local_80 & 0xffffffff00000000);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  ::__emplace_unique_key_args<int,int&,int>
            ((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
              *)&pp_Stack_d8,(int *)&local_b0,(int *)&local_b0,(int *)&local_80);
  if (0 < param_5) {
    uVar40 = 0;
    bVar7 = false;
LAB_01531ad8:
    piVar35 = local_160;
    pbVar3 = param_4 + (int)uVar40;
    uVar38 = (uint)*pbVar3;
    uVar10 = base::hash_value((uint)*pbVar3);
    uVar13 = *(ulong *)(piVar35 + 8);
    if (uVar13 != 0) {
      piVar42 = (int *)0x0;
      uVar41 = (ulong)uVar40;
      pbVar37 = pbVar3;
LAB_01531b0c:
      uVar8 = CONCAT17(POPCOUNT((char)(uVar13 >> 0x38)),
                       CONCAT16(POPCOUNT((char)(uVar13 >> 0x30)),
                                CONCAT15(POPCOUNT((char)(uVar13 >> 0x28)),
                                         CONCAT14(POPCOUNT((char)(uVar13 >> 0x20)),
                                                  CONCAT13(POPCOUNT((char)(uVar13 >> 0x18)),
                                                           CONCAT12(POPCOUNT((char)(uVar13 >> 0x10))
                                                                    ,CONCAT11(POPCOUNT((char)(uVar13
                                                                                             >> 8)),
                                                                              POPCOUNT((char)uVar13)
                                                                             )))))));
      uVar43 = NEON_uaddlv(uVar8,1);
      uVar18 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar43) & 0xffffffff;
      if (uVar18 < 2) {
        uVar24 = uVar13 - 1 & uVar10;
      }
      else {
        uVar24 = uVar10;
        if (uVar13 <= uVar10) {
          uVar24 = 0;
          if (uVar13 != 0) {
            uVar24 = uVar10 / uVar13;
          }
          uVar24 = uVar10 - uVar24 * uVar13;
        }
      }
      plVar33 = *(long **)(*(long *)(piVar35 + 6) + uVar24 * 8);
      if ((plVar33 != (long *)0x0) && (plVar33 = (long *)*plVar33, plVar33 != (long *)0x0)) {
        do {
          uVar29 = plVar33[1];
          if (uVar10 == uVar29) {
            if (*(uint *)(plVar33 + 2) == uVar38) goto LAB_01531bac;
          }
          else {
            if (uVar18 < 2) {
              uVar29 = uVar29 & uVar13 - 1;
            }
            else if (uVar13 <= uVar29) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar29 / uVar13;
              }
              uVar29 = uVar29 - uVar5 * uVar13;
            }
            if (uVar29 != uVar24) break;
          }
          plVar33 = (long *)*plVar33;
          if (plVar33 == (long *)0x0) break;
        } while( true );
      }
      goto LAB_01531cd8;
    }
    goto LAB_01531aa4;
  }
  bVar7 = true;
LAB_0153297c:
  plVar33 = (long *)Factory::NewByteArray(param_1,(int)local_178 - (int)local_180,0);
  MemCopy((void *)(*plVar33 + 7),local_180,(long)((int)local_178 - (int)local_180));
  if ((FLAG_trace_regexp_peephole_optimization != '\0') && (!bVar7)) {
    PrintF("Original Bytecode:\n");
    local_80 = (undefined1 *)*param_3;
    String::ToCString(&local_b0,&local_80,1,1,0);
    RegExpBytecodeDisassemble(param_4,param_5,(char *)local_b0);
    ppppppplVar16 = local_b0;
    local_b0 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      operator_delete__(ppppppplVar16);
    }
    PrintF("Optimized Bytecode:\n");
    lVar32 = *plVar33;
    local_80 = (undefined1 *)*param_3;
    iVar31 = (int)local_178 - (int)local_180;
    String::ToCString(&local_b0,&local_80,1,1,0);
    RegExpBytecodeDisassemble((uchar *)(lVar32 + 7),iVar31,(char *)local_b0);
    ppppppplVar16 = local_b0;
    local_b0 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      operator_delete__(ppppppplVar16);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
             *)&pp_Stack_d8,local_d0);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
             *)&pp_Stack_f8,local_f0);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
             *)&p_Stack_118,local_110);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
             *)&local_138,local_130);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
             *)&local_158,(__tree_node *)local_150);
  return plVar33;
LAB_01531bac:
  piVar35 = (int *)plVar33[3];
  if (piVar35 == (int *)0x0) goto LAB_01531cd8;
  lVar32 = *(long *)(piVar35 + 0x16);
  lVar12 = *(long *)(lVar32 + 8);
  if (lVar32 != lVar12) {
    do {
      iVar31 = *(int *)(lVar12 + 0x14);
      lVar2 = (long)*(int *)(lVar12 + 0x10) + (long)(int)uVar40;
      if (iVar31 == 4) {
        uVar38 = *(uint *)(param_4 + lVar2);
      }
      else if (iVar31 == 2) {
        uVar38 = (uint)*(short *)(param_4 + lVar2);
      }
      else {
        if (iVar31 != 1) goto LAB_01532c5c;
        uVar38 = (uint)param_4[lVar2];
      }
      if (*(int *)(lVar12 + 0x18) == 1) {
        iVar31 = *(int *)(lVar12 + 0x20);
        lVar2 = (long)*(int *)(lVar12 + 0x1c) + (long)(int)uVar40;
        if (iVar31 == 4) {
          uVar28 = *(uint *)(param_4 + lVar2);
        }
        else if (iVar31 == 2) {
          uVar28 = (uint)*(short *)(param_4 + lVar2);
        }
        else {
          if (iVar31 != 1) goto LAB_01532c5c;
          uVar28 = (uint)param_4[lVar2];
        }
      }
      else {
        if (*(int *)(lVar12 + 0x18) != 0) {
LAB_01532c5c:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar28 = *(int *)(lVar12 + 0x1c) + uVar40;
      }
    } while ((uVar38 == uVar28) && (lVar12 = *(long *)(lVar12 + 8), lVar32 != lVar12));
    if (uVar38 != uVar28) goto LAB_01531cd8;
  }
  uVar41 = (long)*(int *)(&DAT_01a4aa70 + (ulong)*pbVar37 * 4) + (long)(int)uVar41;
  if (piVar35[1] != -1) {
    piVar42 = piVar35;
  }
  pbVar37 = param_4 + uVar41;
  uVar38 = (uint)*pbVar37;
  uVar10 = base::hash_value(uVar38);
  uVar13 = *(ulong *)(piVar35 + 8);
  if (uVar13 == 0) goto LAB_01531cd8;
  goto LAB_01531b0c;
LAB_01531cd8:
  if (piVar42 != (int *)0x0) {
    local_b0 = (long *******)&local_b0;
    local_a0 = 0;
    local_98 = local_b8;
    iVar31 = piVar42[1];
    local_80 = (undefined1 *)CONCAT44(local_80._4_4_,iVar31);
    local_a8 = local_b0;
    std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
    insert<unsigned_char*>
              ((vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)&local_180,
               local_178,&local_80,(undefined1 *)((long)&local_80 + 4));
    lVar32 = **(long **)(piVar42 + 0x14);
    if ((*(long **)(piVar42 + 0x14))[1] != lVar32) {
      uVar10 = 0;
      do {
        puVar14 = (undefined8 *)(lVar32 + uVar10 * 0xc);
        uVar8 = *puVar14;
        iVar23 = *(int *)(puVar14 + 1);
        lVar32 = (long)(int)uVar40 + (long)(int)uVar8;
        iVar36 = (int)lVar32;
        p_Var15 = (__tree_node_base *)&local_150;
        p_Var20 = local_150;
        if (local_150 != (__tree_node_base *)0x0) {
          do {
            if (iVar36 <= *(int *)(p_Var20 + 0x1c)) {
              p_Var15 = p_Var20;
            }
            p_Var30 = p_Var20 + (ulong)(*(int *)(p_Var20 + 0x1c) < iVar36) * 8;
            p_Var20 = *(__tree_node_base **)p_Var30;
          } while (*(__tree_node_base **)p_Var30 != (__tree_node_base *)0x0);
          if ((p_Var15 != (__tree_node_base *)&local_150) &&
             (iVar39 = *(int *)(p_Var15 + 0x1c), iVar39 <= iVar36)) {
            local_80 = (undefined1 *)CONCAT44(local_80._4_4_,*(undefined4 *)(p_Var15 + 0x20));
            local_84 = (undefined1  [4])((int)local_178 - (int)local_180);
            std::__ndk1::
            __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
            ::__emplace_unique_key_args<int,int,int&>
                      ((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
                        *)&local_138,(int *)local_84,(int *)local_84,(int *)&local_80);
            ppppppplVar16 = *(long ********)(local_98 + 0x10);
            if ((ulong)(*(long *)(local_98 + 0x18) - (long)ppppppplVar16) < 0x18) {
              ppppppplVar16 = (long *******)Zone::NewExpand(local_98,0x18);
            }
            else {
              *(long ********)(local_98 + 0x10) = ppppppplVar16 + 3;
            }
            *(int *)(ppppppplVar16 + 2) = iVar39;
            *ppppppplVar16 = (long ******)0x0;
            ppppppplVar16[1] = (long ******)&local_b0;
            *ppppppplVar16 = (long ******)local_b0;
            local_b0[1] = (long ******)ppppppplVar16;
            local_b0 = ppppppplVar16;
            local_a0 = local_a0 + 1;
            if (local_110 == (__tree_node *)0x0) {
LAB_01531e68:
              p_Var26 = p_Var17;
            }
            else {
              p_Var26 = p_Var17;
              p_Var25 = local_110;
              do {
                if ((int)local_80 <= *(int *)(p_Var25 + 0x1c)) {
                  p_Var26 = p_Var25;
                }
                p_Var25 = *(__tree_node **)
                           (p_Var25 + (ulong)(*(int *)(p_Var25 + 0x1c) < (int)local_80) * 8);
              } while (p_Var25 != (__tree_node *)0x0);
              if ((p_Var26 == p_Var17) || ((int)local_80 < *(int *)(p_Var26 + 0x1c)))
              goto LAB_01531e68;
            }
            *(int *)(p_Var26 + 0x20) = *(int *)(p_Var26 + 0x20) + -1;
          }
        }
        iVar39 = (int)((ulong)uVar8 >> 0x20);
        switch(iVar39) {
        case 1:
          local_80 = (undefined1 *)CONCAT71(local_80._1_7_,param_4[lVar32]);
          puVar22 = (undefined1 *)((ulong)&local_80 | 1);
          break;
        case 2:
          uVar43 = *(undefined2 *)(param_4 + lVar32);
LAB_01531eac:
          local_80 = (undefined1 *)CONCAT62(local_80._2_6_,uVar43);
          puVar22 = (undefined1 *)((ulong)&local_80 | 2);
          break;
        case 3:
          iVar36 = *(int *)(param_4 + (long)iVar36 + -1);
          if (iVar23 == 4) {
            iVar36 = iVar36 >> 8;
            goto LAB_01531f70;
          }
          if (iVar23 == 3) {
            lVar32 = (long)(((int)local_178 - (int)local_180) + -4);
            local_180[lVar32] = (char)*(undefined4 *)(local_180 + lVar32);
            local_180[lVar32 + 1] = (char)((uint)iVar36 >> 8);
            local_180[lVar32 + 2] = (char)((uint)iVar36 >> 0x10);
            local_180[lVar32 + 3] = (char)((uint)iVar36 >> 0x18);
          }
          else if (iVar23 == 2) {
            uVar43 = (undefined2)((uint)iVar36 >> 8);
            goto LAB_01531eac;
          }
          goto LAB_01531d44;
        case 4:
          iVar36 = *(int *)(param_4 + lVar32);
LAB_01531f70:
          local_80 = (undefined1 *)CONCAT44(local_80._4_4_,iVar36);
          puVar22 = (undefined1 *)((long)&local_80 + 4);
          break;
        default:
          iVar4 = iVar39;
          if (iVar23 <= iVar39) {
            iVar4 = iVar23;
          }
          std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
          insert<unsigned_char_const*>
                    ((vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)&local_180,
                     local_178,param_4 + iVar36,param_4 + iVar36 + iVar4);
          if (iVar39 < iVar23) {
            local_80 = (undefined1 *)((ulong)local_80 & 0xffffffffffffff00);
            std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::insert
                      ((vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)
                       &local_180,local_178,(long)(iVar23 - iVar39),&local_80);
          }
          goto LAB_01531d44;
        case 8:
          local_80 = *(undefined1 **)(param_4 + lVar32);
          puVar22 = auStack_78;
        }
        std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
        insert<unsigned_char*>
                  ((vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)&local_180,
                   local_178,&local_80,puVar22);
LAB_01531d44:
        uVar10 = uVar10 + 1;
        lVar32 = **(long **)(piVar42 + 0x14);
      } while (uVar10 < (ulong)(((*(long **)(piVar42 + 0x14))[1] - lVar32 >> 2) *
                               -0x5555555555555555));
    }
    lVar32 = *(long *)(piVar42 + 0x18);
    if ((lVar32 != 0) && (lVar12 = *(long *)(lVar32 + 8), lVar32 != lVar12)) {
      do {
        if (local_150 != (__tree_node_base *)0x0) {
          iVar23 = *(int *)(lVar12 + 0x10) + uVar40;
          p_Var15 = (__tree_node_base *)&local_150;
          p_Var20 = local_150;
          do {
            if (iVar23 <= *(int *)(p_Var20 + 0x1c)) {
              p_Var15 = p_Var20;
            }
            p_Var20 = *(__tree_node_base **)
                       (p_Var20 + (ulong)(*(int *)(p_Var20 + 0x1c) < iVar23) * 8);
          } while (p_Var20 != (__tree_node_base *)0x0);
          if ((p_Var15 != (__tree_node_base *)&local_150) &&
             (iVar36 = *(int *)(p_Var15 + 0x1c), iVar36 <= iVar23)) {
            iVar23 = *(int *)(p_Var15 + 0x20);
            ppppppplVar16 = *(long ********)(local_98 + 0x10);
            if ((ulong)(*(long *)(local_98 + 0x18) - (long)ppppppplVar16) < 0x18) {
              ppppppplVar16 = (long *******)Zone::NewExpand(local_98,0x18);
            }
            else {
              *(long ********)(local_98 + 0x10) = ppppppplVar16 + 3;
            }
            *(int *)(ppppppplVar16 + 2) = iVar36;
            *ppppppplVar16 = (long ******)0x0;
            ppppppplVar16[1] = (long ******)&local_b0;
            *ppppppplVar16 = (long ******)local_b0;
            local_b0[1] = (long ******)ppppppplVar16;
            local_b0 = ppppppplVar16;
            local_a0 = local_a0 + 1;
            p_Var26 = p_Var17;
            p_Var25 = p_Var17;
            p_Var19 = local_110;
            if (local_110 != (__tree_node *)0x0) {
              do {
                if (iVar23 <= *(int *)(p_Var19 + 0x1c)) {
                  p_Var26 = p_Var19;
                }
                p_Var1 = p_Var19 + (ulong)(*(int *)(p_Var19 + 0x1c) < iVar23) * 8;
                p_Var19 = *(__tree_node **)p_Var1;
              } while (*(__tree_node **)p_Var1 != (__tree_node *)0x0);
              if ((p_Var26 != p_Var17) && (*(int *)(p_Var26 + 0x1c) <= iVar23)) {
                p_Var25 = p_Var26;
              }
            }
            *(int *)(p_Var25 + 0x20) = *(int *)(p_Var25 + 0x20) + -1;
            lVar32 = *(long *)(piVar42 + 0x18);
          }
        }
        lVar12 = *(long *)(lVar12 + 8);
      } while (lVar32 != lVar12);
    }
    iVar23 = *(int *)(&DAT_01a4aa70 + (long)*piVar42 * 4) + piVar42[3];
    iVar31 = *(int *)(&DAT_01a4aa70 + (long)iVar31 * 4) - iVar23;
    p_Var26 = p_Var17;
    p_Var25 = local_110;
    if (local_110 == (__tree_node *)0x0) {
LAB_015321e4:
      iVar39 = iVar23 + uVar40;
      local_84 = (undefined1  [4])(uVar40 + 1);
      p_Var26 = (__tree_node *)&local_d0;
      for (p_Var25 = local_d0; p_Var25 != (__tree_node *)0x0;
          p_Var25 = *(__tree_node **)
                     (p_Var25 + (ulong)(*(int *)(p_Var25 + 0x1c) <= (int)uVar40) * 8)) {
        if ((int)uVar40 < *(int *)(p_Var25 + 0x1c)) {
          p_Var26 = p_Var25;
        }
      }
      p_Var25 = *(__tree_node **)p_Var26;
      if (*(__tree_node **)p_Var26 == (__tree_node *)0x0) {
        do {
          p_Var19 = *(__tree_node **)(p_Var26 + 0x10);
          bVar6 = *(__tree_node **)p_Var19 == p_Var26;
          p_Var26 = p_Var19;
        } while (bVar6);
      }
      else {
        do {
          p_Var19 = p_Var25;
          p_Var25 = *(__tree_node **)(p_Var19 + 8);
        } while (*(__tree_node **)(p_Var19 + 8) != (__tree_node *)0x0);
      }
      iVar23 = *(int *)(p_Var19 + 0x20);
      local_80 = local_84;
      lVar32 = std::__ndk1::
               __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
               ::
               __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                         ((int *)&pp_Stack_d8,(piecewise_construct_t *)local_84,
                          (tuple *)&DAT_01a4aa6c,(tuple *)&local_80);
      *(int *)(lVar32 + 0x20) = iVar23 + iVar31;
      local_84 = (undefined1  [4])
                 (piVar42[3] + uVar40 + *(int *)(&DAT_01a4aa70 + (long)*piVar42 * 4));
      p_Var26 = p_Var21;
      for (p_Var25 = local_f0; p_Var25 != (__tree_node *)0x0;
          p_Var25 = *(__tree_node **)
                     (p_Var25 + (ulong)(*(int *)(p_Var25 + 0x1c) < (int)local_84) * 8)) {
        if ((int)local_84 <= *(int *)(p_Var25 + 0x1c)) {
          p_Var26 = p_Var25;
        }
      }
      p_Var25 = *(__tree_node **)p_Var26;
      if (*(__tree_node **)p_Var26 == (__tree_node *)0x0) {
        do {
          p_Var19 = *(__tree_node **)(p_Var26 + 0x10);
          bVar6 = *(__tree_node **)p_Var19 == p_Var26;
          p_Var26 = p_Var19;
        } while (bVar6);
      }
      else {
        do {
          p_Var19 = p_Var25;
          p_Var25 = *(__tree_node **)(p_Var19 + 8);
        } while (*(__tree_node **)(p_Var19 + 8) != (__tree_node *)0x0);
      }
      iVar23 = *(int *)(p_Var19 + 0x20);
      local_80 = local_84;
      lVar32 = std::__ndk1::
               __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
               ::
               __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                         ((int *)&pp_Stack_f8,(piecewise_construct_t *)local_84,
                          (tuple *)&DAT_01a4aa6c,(tuple *)&local_80);
      *(int *)(lVar32 + 0x20) = iVar23 + iVar31;
    }
    else {
      do {
        p_Var19 = p_Var25;
        if (*(int *)(p_Var25 + 0x1c) <= (int)uVar40) {
          p_Var19 = p_Var26;
        }
        p_Var25 = *(__tree_node **)(p_Var25 + (ulong)(*(int *)(p_Var25 + 0x1c) <= (int)uVar40) * 8);
        p_Var26 = p_Var19;
      } while (p_Var25 != (__tree_node *)0x0);
      while ((p_Var19 != p_Var17 && (*(int *)(p_Var19 + 0x20) == 0))) {
        p_Var26 = *(__tree_node **)(p_Var19 + 8);
        if (*(__tree_node **)(p_Var19 + 8) == (__tree_node *)0x0) {
          p_Var26 = p_Var19 + 0x10;
          bVar6 = *(__tree_node **)*(__tree_node **)p_Var26 != p_Var19;
          p_Var19 = *(__tree_node **)p_Var26;
          if (bVar6) {
            do {
              lVar32 = *(long *)p_Var26;
              p_Var26 = (__tree_node *)(lVar32 + 0x10);
              p_Var19 = *(__tree_node **)p_Var26;
            } while (*(long *)p_Var19 != lVar32);
          }
        }
        else {
          do {
            p_Var19 = p_Var26;
            p_Var26 = *(__tree_node **)p_Var19;
          } while (*(__tree_node **)p_Var19 != (__tree_node *)0x0);
        }
      }
      iVar36 = iVar23 + uVar40;
      if ((p_Var19 == p_Var17) || (iVar39 = *(int *)(p_Var19 + 0x1c), iVar36 <= iVar39))
      goto LAB_015321e4;
      p_Var15 = (__tree_node_base *)&local_150;
      p_Var20 = local_150;
      if (local_150 != (__tree_node_base *)0x0) {
        do {
          if (iVar39 <= *(int *)(p_Var20 + 0x1c)) {
            p_Var15 = p_Var20;
          }
          p_Var30 = p_Var20 + (ulong)(*(int *)(p_Var20 + 0x1c) < iVar39) * 8;
          p_Var20 = *(__tree_node_base **)p_Var30;
        } while (*(__tree_node_base **)p_Var30 != (__tree_node_base *)0x0);
        while ((p_Var15 != (__tree_node_base *)&local_150 && (*(int *)(p_Var15 + 0x1c) < iVar36))) {
          iVar23 = *(int *)(p_Var15 + 0x20);
          if (iVar39 <= iVar23 || iVar23 <= (int)uVar40) {
            iVar23 = iVar39;
          }
          p_Var20 = *(__tree_node_base **)(p_Var15 + 8);
          iVar39 = iVar23;
          if (*(__tree_node_base **)(p_Var15 + 8) == (__tree_node_base *)0x0) {
            p_Var20 = p_Var15 + 0x10;
            bVar6 = *(__tree_node_base **)*(__tree_node_base **)p_Var20 != p_Var15;
            p_Var15 = *(__tree_node_base **)p_Var20;
            if (bVar6) {
              do {
                lVar32 = *(long *)p_Var20;
                p_Var20 = (__tree_node_base *)(lVar32 + 0x10);
                p_Var15 = *(__tree_node_base **)p_Var20;
              } while (*(long *)p_Var15 != lVar32);
            }
          }
          else {
            do {
              p_Var15 = p_Var20;
              p_Var20 = *(__tree_node_base **)p_Var15;
            } while (*(__tree_node_base **)p_Var15 != (__tree_node_base *)0x0);
          }
        }
      }
      lVar32 = (long)iVar36 - (long)iVar39;
      local_84 = (undefined1  [4])iVar39;
      p_Var26 = p_Var21;
      for (p_Var25 = local_f0; p_Var25 != (__tree_node *)0x0;
          p_Var25 = *(__tree_node **)(p_Var25 + (ulong)(*(int *)(p_Var25 + 0x1c) < iVar39) * 8)) {
        if (iVar39 <= *(int *)(p_Var25 + 0x1c)) {
          p_Var26 = p_Var25;
        }
      }
      iVar31 = (int)lVar32 + iVar31;
      p_Var25 = *(__tree_node **)p_Var26;
      if (*(__tree_node **)p_Var26 == (__tree_node *)0x0) {
        do {
          p_Var19 = *(__tree_node **)(p_Var26 + 0x10);
          bVar6 = *(__tree_node **)p_Var19 == p_Var26;
          p_Var26 = p_Var19;
        } while (bVar6);
      }
      else {
        do {
          p_Var19 = p_Var25;
          p_Var25 = *(__tree_node **)(p_Var19 + 8);
        } while (*(__tree_node **)(p_Var19 + 8) != (__tree_node *)0x0);
      }
      iVar23 = *(int *)(p_Var19 + 0x20);
      local_80 = local_84;
      lVar12 = std::__ndk1::
               __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
               ::
               __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                         ((int *)&pp_Stack_f8,(piecewise_construct_t *)local_84,
                          (tuple *)&DAT_01a4aa6c,(tuple *)&local_80);
      *(int *)(lVar12 + 0x20) = iVar23 + iVar31;
      local_84 = (undefined1  [4])(uVar40 + 1);
      p_Var26 = (__tree_node *)&local_d0;
      for (p_Var25 = local_d0; p_Var25 != (__tree_node *)0x0;
          p_Var25 = *(__tree_node **)
                     (p_Var25 + (ulong)(*(int *)(p_Var25 + 0x1c) <= (int)uVar40) * 8)) {
        if ((int)uVar40 < *(int *)(p_Var25 + 0x1c)) {
          p_Var26 = p_Var25;
        }
      }
      p_Var25 = *(__tree_node **)p_Var26;
      if (*(__tree_node **)p_Var26 == (__tree_node *)0x0) {
        do {
          p_Var19 = *(__tree_node **)(p_Var26 + 0x10);
          bVar6 = *(__tree_node **)p_Var19 == p_Var26;
          p_Var26 = p_Var19;
        } while (bVar6);
      }
      else {
        do {
          p_Var19 = p_Var25;
          p_Var25 = *(__tree_node **)(p_Var19 + 8);
        } while (*(__tree_node **)(p_Var19 + 8) != (__tree_node *)0x0);
      }
      iVar23 = *(int *)(p_Var19 + 0x20);
      local_80 = local_84;
      lVar12 = std::__ndk1::
               __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
               ::
               __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                         ((int *)&pp_Stack_d8,(piecewise_construct_t *)local_84,
                          (tuple *)&DAT_01a4aa6c,(tuple *)&local_80);
      *(int *)(lVar12 + 0x20) = iVar23 + iVar31;
      local_80 = (undefined1 *)CONCAT44(local_80._4_4_,((int)local_178 - (int)local_180) - iVar39);
      p_Var26 = (__tree_node *)&local_d0;
      for (p_Var25 = local_d0; p_Var25 != (__tree_node *)0x0;
          p_Var25 = *(__tree_node **)(p_Var25 + (ulong)(*(int *)(p_Var25 + 0x1c) < iVar39) * 8)) {
        if (iVar39 <= *(int *)(p_Var25 + 0x1c)) {
          p_Var26 = p_Var25;
        }
      }
      p_Var25 = *(__tree_node **)p_Var26;
      if (*(__tree_node **)p_Var26 == (__tree_node *)0x0) {
        do {
          p_Var19 = *(__tree_node **)(p_Var26 + 0x10);
          bVar6 = *(__tree_node **)p_Var19 == p_Var26;
          p_Var26 = p_Var19;
        } while (bVar6);
      }
      else {
        do {
          p_Var19 = p_Var25;
          p_Var25 = *(__tree_node **)(p_Var19 + 8);
        } while (*(__tree_node **)(p_Var19 + 8) != (__tree_node *)0x0);
      }
      local_88 = *(int *)(p_Var19 + 0x20);
      local_84 = (undefined1  [4])iVar39;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
      ::__emplace_unique_key_args<int,int&,int&>
                ((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
                  *)&pp_Stack_d8,(int *)local_84,(int *)local_84,(int *)&local_80);
      local_8c = (int)local_84 + 1;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
      ::__emplace_unique_key_args<int,int,int&>
                ((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
                  *)&pp_Stack_d8,&local_8c,&local_8c,&local_88);
      std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
      insert<unsigned_char_const*>
                ((vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)&local_180,
                 local_178,param_4 + iVar39,param_4 + iVar39 + lVar32);
    }
    for (ppppppplVar16 = local_a8; &local_b0 != (long ********)ppppppplVar16;
        ppppppplVar16 = (long *******)ppppppplVar16[1]) {
      iVar31 = *(int *)(ppppppplVar16 + 2);
      if ((iVar31 < iVar39) &&
         (p_Var15 = (__tree_node_base *)&local_150, p_Var20 = local_150,
         local_150 != (__tree_node_base *)0x0)) {
        do {
          if (iVar31 <= *(int *)(p_Var20 + 0x1c)) {
            p_Var15 = p_Var20;
          }
          p_Var30 = p_Var20 + (ulong)(*(int *)(p_Var20 + 0x1c) < iVar31) * 8;
          p_Var20 = *(__tree_node_base **)p_Var30;
        } while (*(__tree_node_base **)p_Var30 != (__tree_node_base *)0x0);
        if ((p_Var15 != (__tree_node_base *)&local_150) && (*(int *)(p_Var15 + 0x1c) <= iVar31)) {
          p_Var20 = *(__tree_node_base **)(p_Var15 + 8);
          if (*(__tree_node_base **)(p_Var15 + 8) == (__tree_node_base *)0x0) {
            p_Var20 = p_Var15 + 0x10;
            p_Var30 = *(__tree_node_base **)p_Var20;
            if (*(__tree_node_base **)p_Var30 != p_Var15) {
              do {
                lVar32 = *(long *)p_Var20;
                p_Var20 = (__tree_node_base *)(lVar32 + 0x10);
                p_Var30 = *(__tree_node_base **)p_Var20;
              } while (*(long *)p_Var30 != lVar32);
            }
          }
          else {
            do {
              p_Var30 = p_Var20;
              p_Var20 = *(__tree_node_base **)p_Var30;
            } while (*(__tree_node_base **)p_Var30 != (__tree_node_base *)0x0);
          }
          if (local_158 == p_Var15) {
            local_158 = p_Var30;
          }
          local_140 = local_140 + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(local_150,p_Var15);
        }
      }
    }
    if (local_a0 != 0) {
      (*local_a8)[1] = (long *****)local_b0[1];
      *local_b0[1] = (long *****)*local_a8;
      local_a0 = 0;
      for (ppppppplVar16 = local_a8; (long ********)ppppppplVar16 != &local_b0;
          ppppppplVar16 = (long *******)ppppppplVar16[1]) {
      }
    }
    iVar31 = *(int *)(&DAT_01a4aa70 + (long)*piVar42 * 4) + piVar42[3];
    if (0 < iVar31) {
      bVar7 = true;
      goto LAB_01531ac8;
    }
  }
LAB_01531aa4:
  iVar31 = *(int *)(&DAT_01a4aa70 + (ulong)*pbVar3 * 4);
  std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
  insert<unsigned_char_const*>
            ((vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)&local_180,
             local_178,pbVar3,pbVar3 + iVar31);
LAB_01531ac8:
  uVar40 = iVar31 + uVar40;
  if (param_5 <= (int)uVar40) goto LAB_015326a8;
  goto LAB_01531ad8;
LAB_015326a8:
  p_Var17 = local_f0;
  if (bVar7) {
    for (; p_Var17 != (__tree_node *)0x0;
        p_Var17 = *(__tree_node **)(p_Var17 + (ulong)(*(int *)(p_Var17 + 0x1c) < 0) * 8)) {
      if (*(int *)(p_Var17 + 0x1c) >= 0) {
        p_Var21 = p_Var17;
      }
    }
    p_Var17 = local_138;
    if (local_158 != (__tree_node_base *)&local_150) {
      iVar31 = *(int *)(p_Var21 + 0x1c);
      iVar23 = *(int *)(p_Var21 + 0x20);
      iVar36 = 0;
      p_Var15 = local_158;
      do {
        iVar39 = *(int *)(p_Var15 + 0x20);
        iVar4 = iVar23;
        while (iVar23 = iVar4, p_Var26 = (__tree_node *)&local_d0, p_Var25 = local_d0,
              iVar31 <= *(int *)(p_Var15 + 0x1c)) {
          p_Var26 = *(__tree_node **)(p_Var21 + 8);
          if (*(__tree_node **)(p_Var21 + 8) == (__tree_node *)0x0) {
            p_Var26 = p_Var21 + 0x10;
            p_Var25 = *(__tree_node **)p_Var26;
            if (*(__tree_node **)p_Var25 != p_Var21) {
              do {
                lVar32 = *(long *)p_Var26;
                p_Var26 = (__tree_node *)(lVar32 + 0x10);
                p_Var25 = *(__tree_node **)p_Var26;
              } while (*(long *)p_Var25 != lVar32);
            }
          }
          else {
            do {
              p_Var25 = p_Var26;
              p_Var26 = *(__tree_node **)p_Var25;
            } while (*(__tree_node **)p_Var25 != (__tree_node *)0x0);
          }
          p_Var21 = p_Var25;
          iVar4 = *(int *)(p_Var25 + 0x20);
          iVar36 = iVar23;
          iVar31 = *(int *)(p_Var25 + 0x1c);
        }
        for (; p_Var25 != (__tree_node *)0x0;
            p_Var25 = *(__tree_node **)(p_Var25 + (ulong)(*(int *)(p_Var25 + 0x1c) <= iVar39) * 8))
        {
          p_Var19 = p_Var25;
          if (*(int *)(p_Var25 + 0x1c) <= iVar39) {
            p_Var19 = p_Var26;
          }
          p_Var26 = p_Var19;
        }
        p_Var25 = *(__tree_node **)p_Var26;
        if (*(__tree_node **)p_Var26 == (__tree_node *)0x0) {
          do {
            p_Var19 = *(__tree_node **)(p_Var26 + 0x10);
            bVar7 = *(__tree_node **)p_Var19 == p_Var26;
            p_Var26 = p_Var19;
          } while (bVar7);
        }
        else {
          do {
            p_Var19 = p_Var25;
            p_Var25 = *(__tree_node **)(p_Var19 + 8);
          } while (*(__tree_node **)(p_Var19 + 8) != (__tree_node *)0x0);
        }
        if (*(int *)(p_Var19 + 0x20) != 0) {
          iVar39 = *(int *)(p_Var19 + 0x20) + iVar39;
          lVar32 = (long)(iVar36 + *(int *)(p_Var15 + 0x1c));
          local_180[lVar32] = (char)iVar39;
          local_180[lVar32 + 1] = (char)((uint)iVar39 >> 8);
          local_180[lVar32 + 2] = (char)((uint)iVar39 >> 0x10);
          local_180[lVar32 + 3] = (char)((uint)iVar39 >> 0x18);
        }
        p_Var20 = *(__tree_node_base **)(p_Var15 + 8);
        if (*(__tree_node_base **)(p_Var15 + 8) == (__tree_node_base *)0x0) {
          p_Var20 = p_Var15 + 0x10;
          p_Var30 = *(__tree_node_base **)p_Var20;
          if (*(__tree_node_base **)p_Var30 != p_Var15) {
            do {
              lVar32 = *(long *)p_Var20;
              p_Var20 = (__tree_node_base *)(lVar32 + 0x10);
              p_Var30 = *(__tree_node_base **)p_Var20;
            } while (*(long *)p_Var30 != lVar32);
          }
        }
        else {
          do {
            p_Var30 = p_Var20;
            p_Var20 = *(__tree_node_base **)p_Var30;
          } while (*(__tree_node_base **)p_Var30 != (__tree_node_base *)0x0);
        }
        p_Var15 = p_Var30;
      } while (p_Var30 != (__tree_node_base *)&local_150);
    }
    while (p_Var17 != (__tree_node *)&local_130) {
      iVar31 = *(int *)(p_Var17 + 0x20);
      lVar32 = (long)*(int *)(p_Var17 + 0x1c);
      p_Var21 = (__tree_node *)&local_d0;
      for (p_Var26 = local_d0; p_Var26 != (__tree_node *)0x0;
          p_Var26 = *(__tree_node **)(p_Var26 + (ulong)(*(int *)(p_Var26 + 0x1c) <= iVar31) * 8)) {
        p_Var25 = p_Var26;
        if (*(int *)(p_Var26 + 0x1c) <= iVar31) {
          p_Var25 = p_Var21;
        }
        p_Var21 = p_Var25;
      }
      p_Var26 = *(__tree_node **)p_Var21;
      if (*(__tree_node **)p_Var21 == (__tree_node *)0x0) {
        do {
          p_Var25 = *(__tree_node **)(p_Var21 + 0x10);
          bVar7 = *(__tree_node **)p_Var25 == p_Var21;
          p_Var21 = p_Var25;
        } while (bVar7);
      }
      else {
        do {
          p_Var25 = p_Var26;
          p_Var26 = *(__tree_node **)(p_Var25 + 8);
        } while (*(__tree_node **)(p_Var25 + 8) != (__tree_node *)0x0);
      }
      if (*(int *)(p_Var25 + 0x20) != 0) {
        iVar31 = *(int *)(p_Var25 + 0x20) + iVar31;
        local_180[lVar32] = (char)iVar31;
        local_180[lVar32 + 1] = (char)((uint)iVar31 >> 8);
        local_180[lVar32 + 2] = (char)((uint)iVar31 >> 0x10);
        local_180[lVar32 + 3] = (char)((uint)iVar31 >> 0x18);
      }
      p_Var21 = *(__tree_node **)(p_Var17 + 8);
      if (*(__tree_node **)(p_Var17 + 8) == (__tree_node *)0x0) {
        p_Var21 = p_Var17 + 0x10;
        bVar7 = (__tree_node *)*(__tree_node ***)*(__tree_node **)p_Var21 != p_Var17;
        p_Var17 = *(__tree_node **)p_Var21;
        if (bVar7) {
          do {
            lVar32 = *(long *)p_Var21;
            p_Var21 = (__tree_node *)(lVar32 + 0x10);
            p_Var17 = *(__tree_node **)p_Var21;
          } while (*(long *)p_Var17 != lVar32);
        }
      }
      else {
        do {
          p_Var17 = p_Var21;
          p_Var21 = *(__tree_node **)p_Var17;
        } while (*(__tree_node **)p_Var17 != (__tree_node *)0x0);
      }
    }
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  goto LAB_0153297c;
}

