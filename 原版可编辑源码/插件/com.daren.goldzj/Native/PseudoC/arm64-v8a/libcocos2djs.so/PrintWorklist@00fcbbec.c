
/* v8::internal::MarkCompactCollector::MarkingWorklist::PrintWorklist(char const*,
   v8::internal::Worklist<v8::internal::HeapObject, 64>*) */

void __thiscall
v8::internal::MarkCompactCollector::MarkingWorklist::PrintWorklist
          (MarkingWorklist *this,char *param_1,Worklist *param_2)

{
  pair *ppVar1;
  ushort uVar2;
  pair *ppVar3;
  bool bVar4;
  long lVar5;
  __tree_node_base *p_Var6;
  __tree_node *p_Var7;
  __tree_node_base *p_Var8;
  __tree_node *p_Var9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  __tree_node_base *p_Var13;
  __tree_node *p_Var14;
  __tree_node *local_b8;
  __tree_node *local_b0;
  long local_a8;
  pair *local_a0;
  pair *ppStack_98;
  pair *local_90;
  uint local_84;
  __tree_node_base *local_80;
  __tree_node_base *local_78;
  ulong local_70;
  greater local_68 [8];
  
  local_78 = (__tree_node_base *)0x0;
  local_70 = 0;
  local_84 = 0;
  local_80 = (__tree_node_base *)&local_78;
  base::Mutex::Lock((Mutex *)(param_2 + 0x280));
  plVar10 = *(long **)(param_2 + 0x2a8);
  if (plVar10 != (long *)0x0) {
    uVar11 = 0;
    lVar5 = plVar10[1];
    do {
      if (lVar5 != 0) {
        uVar12 = 0;
        do {
          uVar11 = uVar11 + 1;
          local_84 = uVar11;
          uVar2 = *(ushort *)
                   ((plVar10[uVar12 + 2] & 0xffffffff00000000U |
                    (ulong)*(uint *)(plVar10[uVar12 + 2] - 1)) + 7);
          p_Var13 = (__tree_node_base *)&local_78;
          p_Var6 = (__tree_node_base *)&local_78;
          p_Var8 = local_78;
          while (p_Var8 != (__tree_node_base *)0x0) {
            while (p_Var6 = p_Var8, uVar2 < *(ushort *)(p_Var6 + 0x1c)) {
              p_Var13 = p_Var6;
              p_Var8 = *(__tree_node_base **)p_Var6;
              if (*(__tree_node_base **)p_Var6 == (__tree_node_base *)0x0) {
                p_Var8 = *(__tree_node_base **)p_Var6;
                goto joined_r0x00fcbd4c;
              }
            }
            if (uVar2 <= *(ushort *)(p_Var6 + 0x1c)) break;
            p_Var13 = p_Var6 + 8;
            p_Var8 = *(__tree_node_base **)p_Var13;
          }
          p_Var8 = *(__tree_node_base **)p_Var13;
joined_r0x00fcbd4c:
          if (p_Var8 == (__tree_node_base *)0x0) {
            p_Var8 = operator_new(0x28);
            *(ushort *)(p_Var8 + 0x1c) = uVar2;
            *(undefined4 *)(p_Var8 + 0x20) = 0;
            *(undefined8 *)p_Var8 = 0;
            *(undefined8 *)(p_Var8 + 8) = 0;
            *(__tree_node_base **)(p_Var8 + 0x10) = p_Var6;
            *(__tree_node_base **)p_Var13 = p_Var8;
            p_Var6 = p_Var8;
            if (*(__tree_node_base **)local_80 != (__tree_node_base *)0x0) {
              local_80 = *(__tree_node_base **)local_80;
              p_Var6 = *(__tree_node_base **)p_Var13;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (local_78,p_Var6);
            local_70 = local_70 + 1;
          }
          uVar12 = uVar12 + 1;
          *(int *)(p_Var8 + 0x20) = *(int *)(p_Var8 + 0x20) + 1;
        } while (uVar12 < (ulong)plVar10[1]);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) break;
      lVar5 = plVar10[1];
    } while( true );
  }
  base::Mutex::Unlock((Mutex *)(param_2 + 0x280));
  ppStack_98 = (pair *)0x0;
  local_90 = (pair *)0x0;
  local_a0 = (pair *)0x0;
  ppVar1 = ppStack_98;
  p_Var13 = local_80;
  if (local_70 != 0) {
    if (local_70 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar12 = local_70 * 8;
    ppStack_98 = operator_new(uVar12);
    local_90 = ppStack_98 + uVar12;
    ppVar1 = ppStack_98;
    p_Var13 = local_80;
  }
  while (local_a0 = ppVar1, p_Var13 != (__tree_node_base *)&local_78) {
    if (ppStack_98 < local_90) {
      *(int *)ppStack_98 = *(int *)(p_Var13 + 0x20);
      *(undefined2 *)(ppStack_98 + 4) = *(undefined2 *)(p_Var13 + 0x1c);
      ppStack_98 = ppStack_98 + 8;
      p_Var6 = *(__tree_node_base **)(p_Var13 + 8);
      if (*(__tree_node_base **)(p_Var13 + 8) == (__tree_node_base *)0x0) goto LAB_00fcbdfc;
LAB_00fcbdec:
      do {
        p_Var13 = p_Var6;
        p_Var6 = *(__tree_node_base **)p_Var13;
        ppVar1 = local_a0;
      } while (*(__tree_node_base **)p_Var13 != (__tree_node_base *)0x0);
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<int,v8::internal::InstanceType>,std::__ndk1::allocator<std::__ndk1::pair<int,v8::internal::InstanceType>>>
      ::__emplace_back_slow_path<int_const&,v8::internal::InstanceType_const&>
                ((vector<std::__ndk1::pair<int,v8::internal::InstanceType>,std::__ndk1::allocator<std::__ndk1::pair<int,v8::internal::InstanceType>>>
                  *)&local_a0,(int *)(p_Var13 + 0x20),p_Var13 + 0x1c);
      p_Var6 = *(__tree_node_base **)(p_Var13 + 8);
      if (*(__tree_node_base **)(p_Var13 + 8) != (__tree_node_base *)0x0) goto LAB_00fcbdec;
LAB_00fcbdfc:
      p_Var6 = p_Var13 + 0x10;
      bVar4 = *(__tree_node_base **)*(__tree_node_base **)p_Var6 != p_Var13;
      ppVar1 = local_a0;
      p_Var13 = *(__tree_node_base **)p_Var6;
      if (bVar4) {
        do {
          lVar5 = *(long *)p_Var6;
          p_Var6 = (__tree_node_base *)(lVar5 + 0x10);
          p_Var13 = *(__tree_node_base **)p_Var6;
        } while (*(long *)p_Var13 != lVar5);
      }
    }
  }
  local_b0 = (__tree_node *)0x0;
  local_a8 = 0;
  local_b8 = (__tree_node *)&local_b0;
  p_Var13 = operator_new(0x40);
  *(undefined2 *)(p_Var13 + 0x20) = 0;
  *(undefined8 *)(p_Var13 + 0x30) = 0;
  *(undefined8 *)(p_Var13 + 0x38) = 0;
  *(undefined8 *)(p_Var13 + 0x28) = 0;
  *(undefined8 *)p_Var13 = 0;
  *(undefined8 *)(p_Var13 + 8) = 0;
  *(__tree_node **)(p_Var13 + 0x10) = (__tree_node *)&local_b0;
  local_b8 = (__tree_node *)p_Var13;
  local_b0 = (__tree_node *)p_Var13;
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(p_Var13,p_Var13);
  local_a8 = local_a8 + 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"INTERNALIZED_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 2 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcbf44;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 2) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcbf44:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 2;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"EXTERNAL_INTERNALIZED_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 8 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc014;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 8) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc014:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 8;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ONE_BYTE_INTERNALIZED_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 10 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc0e4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 10) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc0e4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 10;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x12 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc1b4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x12) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc1b4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x12;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"UNCACHED_EXTERNAL_INTERNALIZED_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x1a < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc284;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x1a) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc284:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x1a;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"UNCACHED_EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x20 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc354;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x20) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc354:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x20;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x21 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc424;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x21) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc424:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x21;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"CONS_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x22 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc4f4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x22) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc4f4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x22;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"EXTERNAL_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x23 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc5c4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x23) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc5c4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x23;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SLICED_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x25 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc694;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x25) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc694:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x25;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"THIN_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x28 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc764;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x28) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc764:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x28;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ONE_BYTE_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x29 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc834;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x29) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc834:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x29;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"CONS_ONE_BYTE_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x2a < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc904;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x2a) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc904:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x2a;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"EXTERNAL_ONE_BYTE_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x2b < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcc9d4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x2b) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcc9d4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x2b;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SLICED_ONE_BYTE_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x2d < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fccaa4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x2d) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fccaa4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x2d;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"THIN_ONE_BYTE_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x32 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fccb74;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x32) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fccb74:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x32;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"UNCACHED_EXTERNAL_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x3a < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fccc44;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x3a) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fccc44:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x3a;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"UNCACHED_EXTERNAL_ONE_BYTE_STRING_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x40 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fccd14;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x40) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fccd14:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined2 *)(p_Var13 + 0x20) = 0x40;
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SYMBOL_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x41 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fccde4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x41) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fccde4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x41;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"BIG_INT_BASE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x42 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcceb4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x42) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcceb4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x42;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"HEAP_NUMBER_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x43 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fccf84;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x43) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fccf84:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x43;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ODDBALL_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x44 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcd054;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x44) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcd054:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x44;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SOURCE_TEXT_MODULE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x45 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcd124;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x45) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcd124:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x45;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SYNTHETIC_MODULE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x46 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcd1f4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x46) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcd1f4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x46;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"FOREIGN_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x47 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcd2c4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x47) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcd2c4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x47;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"PROMISE_FULFILL_REACTION_JOB_TASK_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x48 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcd394;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x48) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcd394:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x48;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"PROMISE_REJECT_REACTION_JOB_TASK_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x49 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcd464;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x49) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcd464:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x49;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"CALLABLE_TASK_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x4a < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcd534;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x4a) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcd534:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x4a;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"CALLBACK_TASK_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x4b < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcd604;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x4b) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcd604:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x4b;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x4c < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcd6d4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x4c) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcd6d4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x4c;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"LOAD_HANDLER_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x4d < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcd7a4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x4d) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcd7a4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x4d;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"STORE_HANDLER_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x4e < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcd874;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x4e) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcd874:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x4e;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"FUNCTION_TEMPLATE_INFO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x4f < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcd944;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x4f) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcd944:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x4f;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"OBJECT_TEMPLATE_INFO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x50 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcda14;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x50) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcda14:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x50;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ACCESS_CHECK_INFO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x51 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcdae4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x51) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcdae4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x51;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ACCESSOR_INFO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x52 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcdbb4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x52) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcdbb4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x52;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ACCESSOR_PAIR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x53 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcdc84;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x53) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcdc84:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x53;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ALIASED_ARGUMENTS_ENTRY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x54 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcdd54;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x54) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcdd54:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x54;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ALLOCATION_MEMENTO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x55 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcde24;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x55) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcde24:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x55;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ALLOCATION_SITE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x56 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcdef4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x56) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcdef4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x56;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ARRAY_BOILERPLATE_DESCRIPTION_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x57 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcdfc4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x57) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcdfc4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x57;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ASM_WASM_DATA_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x58 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fce094;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x58) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fce094:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x58;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ASYNC_GENERATOR_REQUEST_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x59 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fce164;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x59) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fce164:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x59;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"CALL_HANDLER_INFO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x5a < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fce234;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x5a) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fce234:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x5a;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"CLASS_POSITIONS_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x5b < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fce304;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x5b) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fce304:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x5b;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"DEBUG_INFO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x5c < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fce3d4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x5c) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fce3d4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x5c;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ENUM_CACHE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x5d < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fce4a4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x5d) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fce4a4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x5d;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"FEEDBACK_CELL_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x5e < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fce574;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x5e) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fce574:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x5e;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"FUNCTION_TEMPLATE_RARE_DATA_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x5f < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fce644;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x5f) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fce644:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x5f;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"INTERCEPTOR_INFO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x60 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fce714;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x60) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fce714:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x60;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"INTERNAL_CLASS_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x61 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fce7e4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x61) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fce7e4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x61;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"INTERPRETER_DATA_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x62 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fce8b4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x62) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fce8b4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x62;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"PROMISE_CAPABILITY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 99 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fce984;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 99) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fce984:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 99;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"PROMISE_REACTION_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 100 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcea54;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 100) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcea54:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 100;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"PROTOTYPE_INFO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x65 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fceb24;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x65) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fceb24:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x65;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SCRIPT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x66 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcebf4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x66) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcebf4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x66;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SMI_BOX_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x67 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcecc4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x67) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcecc4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x67;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SMI_PAIR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x68 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fced94;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x68) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fced94:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x68;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SORT_STATE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x69 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcee64;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x69) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcee64:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x69;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SOURCE_POSITION_TABLE_WITH_FRAME_CACHE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x6a < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcef34;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x6a) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcef34:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x6a;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x6b < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf004;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x6b) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf004:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x6b;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"STACK_FRAME_INFO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x6c < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf0d4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x6c) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf0d4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x6c;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"STACK_TRACE_FRAME_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x6d < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf1a4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x6d) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf1a4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x6d;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"TEMPLATE_OBJECT_DESCRIPTION_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x6e < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf274;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x6e) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf274:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x6e;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"TUPLE2_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x6f < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf344;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x6f) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf344:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x6f;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"TUPLE3_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x70 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf414;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x70) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf414:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x70;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WASM_CAPI_FUNCTION_DATA_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x71 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf4e4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x71) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf4e4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x71;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WASM_DEBUG_INFO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x72 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf5b4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x72) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf5b4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x72;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WASM_EXCEPTION_TAG_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x73 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf684;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x73) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf684:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x73;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WASM_EXPORTED_FUNCTION_DATA_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x74 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf754;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x74) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf754:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x74;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WASM_INDIRECT_FUNCTION_TABLE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x75 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf824;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x75) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf824:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x75;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WASM_JS_FUNCTION_DATA_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x76 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf8f4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x76) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf8f4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x76;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"FIXED_ARRAY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x77 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcf9c4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x77) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcf9c4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x77;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"HASH_TABLE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x78 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcfa94;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x78) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcfa94:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x78;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"EPHEMERON_HASH_TABLE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x79 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcfb64;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x79) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcfb64:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x79;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"GLOBAL_DICTIONARY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x7a < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcfc34;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x7a) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcfc34:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x7a;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"NAME_DICTIONARY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x7b < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcfd04;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x7b) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcfd04:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x7b;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"NUMBER_DICTIONARY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x7c < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcfdd4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x7c) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcfdd4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x7c;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ORDERED_HASH_MAP_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x7d < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcfea4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x7d) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcfea4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x7d;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ORDERED_HASH_SET_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x7e < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fcff74;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x7e) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fcff74:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x7e;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"ORDERED_NAME_DICTIONARY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x7f < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0044;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x7f) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0044:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x7f;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SIMPLE_NUMBER_DICTIONARY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x80 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0114;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x80) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0114:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x80;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"STRING_TABLE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x81 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd01e4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x81) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd01e4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x81;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"CLOSURE_FEEDBACK_CELL_ARRAY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x82 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd02b4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x82) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd02b4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x82;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"OBJECT_BOILERPLATE_DESCRIPTION_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x83 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0384;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x83) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0384:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x83;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SCOPE_INFO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x84 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0454;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x84) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0454:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x84;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SCRIPT_CONTEXT_TABLE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x85 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0524;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x85) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0524:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x85;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"BYTE_ARRAY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x86 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd05f4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x86) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd05f4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x86;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"BYTECODE_ARRAY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x87 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd06c4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x87) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd06c4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x87;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"FIXED_DOUBLE_ARRAY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x88 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0794;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x88) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0794:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x88;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"AWAIT_CONTEXT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x89 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0864;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x89) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0864:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x89;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"BLOCK_CONTEXT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x8a < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0934;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x8a) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0934:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x8a;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"CATCH_CONTEXT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x8b < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0a04;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x8b) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0a04:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x8b;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"DEBUG_EVALUATE_CONTEXT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x8c < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0ad4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x8c) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0ad4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x8c;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"EVAL_CONTEXT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x8d < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0ba4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x8d) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0ba4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x8d;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"FUNCTION_CONTEXT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x8e < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0c74;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x8e) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0c74:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x8e;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"MODULE_CONTEXT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x8f < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0d44;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x8f) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0d44:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x8f;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"NATIVE_CONTEXT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x90 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0e14;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x90) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0e14:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x90;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SCRIPT_CONTEXT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x91 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0ee4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x91) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0ee4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x91;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WITH_CONTEXT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x92 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd0fb4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x92) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd0fb4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x92;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SMALL_ORDERED_HASH_MAP_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x93 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1084;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x93) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1084:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x93;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SMALL_ORDERED_HASH_SET_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x94 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1154;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x94) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1154:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x94;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SMALL_ORDERED_NAME_DICTIONARY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x95 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1224;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x95) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1224:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x95;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x96 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd12f4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x96) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd12f4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x96;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x97 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd13c4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x97) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd13c4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x97;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WEAK_FIXED_ARRAY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x98 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1494;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x98) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1494:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x98;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"TRANSITION_ARRAY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x99 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1564;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x99) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1564:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x99;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"CELL_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x9a < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1634;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x9a) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1634:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x9a;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"CODE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x9b < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1704;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x9b) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1704:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x9b;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"CODE_DATA_CONTAINER_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x9c < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd17d4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x9c) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd17d4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x9c;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"DESCRIPTOR_ARRAY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x9d < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd18a4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x9d) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd18a4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x9d;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"EMBEDDER_DATA_ARRAY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x9e < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1974;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x9e) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1974:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x9e;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"FEEDBACK_METADATA_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x9f < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1a44;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x9f) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1a44:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x9f;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"FEEDBACK_VECTOR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xa0 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1b14;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xa0) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1b14:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xa0;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"FILLER_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xa1 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1be4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xa1) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1be4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xa1;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"FREE_SPACE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xa2 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1cb4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xa2) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1cb4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xa2;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"MAP_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xa3 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1d84;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xa3) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1d84:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xa3;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"PREPARSE_DATA_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xa4 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1e54;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xa4) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1e54:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xa4;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"PROPERTY_ARRAY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xa5 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1f24;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xa5) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1f24:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xa5;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"PROPERTY_CELL_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xa6 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd1ff4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xa6) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd1ff4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xa6;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"SHARED_FUNCTION_INFO_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xa7 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd20c4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xa7) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd20c4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xa7;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WEAK_ARRAY_LIST_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xa8 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2194;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xa8) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2194:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xa8;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WEAK_CELL_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xa9 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2264;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xa9) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2264:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xa9;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_PROXY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x421 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2334;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x421) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2334:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x421;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xaa < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2404;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xaa) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2404:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xaa;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_GLOBAL_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xab < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd24d4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xab) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd24d4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xab;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_GLOBAL_PROXY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0xac < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd25a4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0xac) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd25a4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0xac;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_MODULE_NAMESPACE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x410 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2674;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x410) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2674:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x410;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_SPECIAL_API_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x411 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2744;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x411) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2744:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x411;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_PRIMITIVE_WRAPPER_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x412 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2814;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x412) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2814:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x412;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_MAP_KEY_ITERATOR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x413 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd28e4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x413) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd28e4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x413;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_MAP_KEY_VALUE_ITERATOR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x414 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd29b4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x414) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd29b4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x414;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_MAP_VALUE_ITERATOR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x415 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2a84;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x415) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2a84:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x415;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_SET_KEY_VALUE_ITERATOR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x416 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2b54;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x416) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2b54:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x416;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_SET_VALUE_ITERATOR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x417 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2c24;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x417) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2c24:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x417;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_GENERATOR_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x418 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2cf4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x418) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2cf4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x418;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_ASYNC_FUNCTION_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x419 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2dc4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x419) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2dc4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x419;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_ASYNC_GENERATOR_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x41a < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2e94;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x41a) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2e94:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x41a;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_DATA_VIEW_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x41b < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd2f64;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x41b) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd2f64:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x41b;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_TYPED_ARRAY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x41c < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3034;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x41c) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3034:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x41c;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_MAP_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x41d < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3104;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x41d) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3104:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x41d;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_SET_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x41e < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd31d4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x41e) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd31d4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x41e;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_WEAK_MAP_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x41f < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd32a4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x41f) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd32a4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x41f;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_WEAK_SET_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x420 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3374;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x420) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3374:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x420;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_API_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x422 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3444;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x422) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3444:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x422;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_ARGUMENTS_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x423 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3514;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x423) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3514:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x423;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_ARRAY_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x424 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd35e4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x424) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd35e4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x424;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_ARRAY_BUFFER_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x425 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd36b4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x425) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd36b4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x425;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_ARRAY_ITERATOR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x426 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3784;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x426) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3784:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x426;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_ASYNC_FROM_SYNC_ITERATOR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x427 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3854;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x427) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3854:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x427;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_CONTEXT_EXTENSION_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x428 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3924;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x428) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3924:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x428;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_DATE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x429 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd39f4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x429) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd39f4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x429;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_ERROR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x42a < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3ac4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x42a) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3ac4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x42a;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_FINALIZATION_GROUP_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x42b < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3b94;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x42b) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3b94:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x42b;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_FINALIZATION_GROUP_CLEANUP_ITERATOR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x42c < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3c64;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x42c) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3c64:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x42c;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_MESSAGE_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x42d < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3d34;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x42d) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3d34:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x42d;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_PROMISE_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x42e < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3e04;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x42e) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3e04:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x42e;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_REG_EXP_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x42f < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3ed4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x42f) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3ed4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x42f;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_REG_EXP_STRING_ITERATOR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x430 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd3fa4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x430) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd3fa4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x430;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_STRING_ITERATOR_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x431 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd4074;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x431) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd4074:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x431;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_WEAK_REF_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x432 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd4144;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x432) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd4144:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x432;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WASM_EXCEPTION_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x433 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd4214;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x433) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd4214:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x433;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WASM_GLOBAL_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x434 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd42e4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x434) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd42e4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x434;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WASM_INSTANCE_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x435 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd43b4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x435) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd43b4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x435;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WASM_MEMORY_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x436 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd4484;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x436) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd4484:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x436;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WASM_MODULE_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x437 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd4554;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x437) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd4554:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x437;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"WASM_TABLE_OBJECT_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x438 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd4624;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x438) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd4624:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x438;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_BOUND_FUNCTION_TYPE");
  p_Var14 = (__tree_node *)&local_b0;
  p_Var9 = (__tree_node *)&local_b0;
  p_Var7 = local_b0;
  while (p_Var7 != (__tree_node *)0x0) {
    while (p_Var9 = p_Var7, 0x439 < *(ushort *)(p_Var9 + 0x20)) {
      p_Var7 = *(__tree_node **)p_Var9;
      p_Var14 = p_Var9;
      if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
        p_Var13 = *(__tree_node_base **)p_Var9;
        goto joined_r0x00fd46f4;
      }
    }
    if (*(ushort *)(p_Var9 + 0x20) == 0x439) break;
    p_Var14 = p_Var9 + 8;
    p_Var7 = *(__tree_node **)p_Var14;
  }
  p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd46f4:
  if (p_Var13 == (__tree_node_base *)0x0) {
    p_Var13 = operator_new(0x40);
    *(undefined8 *)(p_Var13 + 0x30) = 0;
    *(undefined8 *)(p_Var13 + 0x38) = 0;
    *(undefined8 *)(p_Var13 + 0x28) = 0;
    *(undefined8 *)p_Var13 = 0;
    *(undefined8 *)(p_Var13 + 8) = 0;
    *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
    *(undefined2 *)(p_Var13 + 0x20) = 0x439;
    *(__tree_node_base **)p_Var14 = p_Var13;
    p_Var6 = p_Var13;
    if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
      p_Var6 = *(__tree_node_base **)p_Var14;
      local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)local_b0,p_Var6);
    local_a8 = local_a8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (p_Var13 + 0x28),"JS_FUNCTION_TYPE");
  std::__ndk1::
  __sort<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
            (local_a0,ppStack_98,local_68);
  PrintF("Worklist %s: %d\n",param_1,(ulong)local_84);
  ppVar3 = ppStack_98;
  ppVar1 = local_a0;
  do {
    if (ppVar1 == ppVar3) {
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::InstanceType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<v8::internal::InstanceType,std::__ndk1::__value_type<v8::internal::InstanceType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<v8::internal::InstanceType>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::InstanceType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
      ::destroy((__tree<std::__ndk1::__value_type<v8::internal::InstanceType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<v8::internal::InstanceType,std::__ndk1::__value_type<v8::internal::InstanceType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<v8::internal::InstanceType>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::InstanceType,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                 *)&local_b8,local_b0);
      if (local_a0 != (pair *)0x0) {
        ppStack_98 = local_a0;
        operator_delete(local_a0);
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::InstanceType,int>,std::__ndk1::__map_value_compare<v8::internal::InstanceType,std::__ndk1::__value_type<v8::internal::InstanceType,int>,std::__ndk1::less<v8::internal::InstanceType>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::InstanceType,int>>>
      ::destroy((__tree<std::__ndk1::__value_type<v8::internal::InstanceType,int>,std::__ndk1::__map_value_compare<v8::internal::InstanceType,std::__ndk1::__value_type<v8::internal::InstanceType,int>,std::__ndk1::less<v8::internal::InstanceType>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::internal::InstanceType,int>>>
                 *)&local_80,(__tree_node *)local_78);
      return;
    }
    uVar12 = *(ulong *)ppVar1;
    uVar11 = (uint)(uVar12 >> 0x20);
    p_Var14 = (__tree_node *)&local_b0;
    p_Var9 = (__tree_node *)&local_b0;
    p_Var7 = local_b0;
    while (p_Var7 != (__tree_node *)0x0) {
      while (p_Var9 = p_Var7, (uVar11 & 0xffff) < (uint)*(ushort *)(p_Var9 + 0x20)) {
        p_Var7 = *(__tree_node **)p_Var9;
        p_Var14 = p_Var9;
        if (*(__tree_node **)p_Var9 == (__tree_node *)0x0) {
          p_Var13 = *(__tree_node_base **)p_Var9;
          goto joined_r0x00fd481c;
        }
      }
      if ((uVar11 & 0xffff) <= (uint)*(ushort *)(p_Var9 + 0x20)) break;
      p_Var14 = p_Var9 + 8;
      p_Var7 = *(__tree_node **)p_Var14;
    }
    p_Var13 = *(__tree_node_base **)p_Var14;
joined_r0x00fd481c:
    if (p_Var13 == (__tree_node_base *)0x0) {
      p_Var13 = operator_new(0x40);
      *(short *)(p_Var13 + 0x20) = (short)(uVar12 >> 0x20);
      *(undefined8 *)(p_Var13 + 0x30) = 0;
      *(undefined8 *)(p_Var13 + 0x38) = 0;
      *(undefined8 *)(p_Var13 + 0x28) = 0;
      *(undefined8 *)p_Var13 = 0;
      *(undefined8 *)(p_Var13 + 8) = 0;
      *(__tree_node **)(p_Var13 + 0x10) = p_Var9;
      *(__tree_node_base **)p_Var14 = p_Var13;
      p_Var6 = p_Var13;
      if (*(__tree_node_base **)local_b8 != (__tree_node_base *)0x0) {
        p_Var6 = *(__tree_node_base **)p_Var14;
        local_b8 = (__tree_node *)*(__tree_node_base **)local_b8;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)local_b0,p_Var6);
      local_a8 = local_a8 + 1;
    }
    if (((byte)p_Var13[0x28] & 1) == 0) {
      p_Var13 = p_Var13 + 0x29;
    }
    else {
      p_Var13 = *(__tree_node_base **)(p_Var13 + 0x38);
    }
    PrintF("  [%s]: %d\n",p_Var13,uVar12 & 0xffffffff);
    ppVar1 = ppVar1 + 8;
  } while( true );
}

