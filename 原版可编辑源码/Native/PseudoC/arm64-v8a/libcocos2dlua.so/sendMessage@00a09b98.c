
/* universe::network::GuoPengFei::sendMessage(universe::network::ZhouLuJun*) */

void __thiscall universe::network::GuoPengFei::sendMessage(GuoPengFei *this,ZhouLuJun *param_1)

{
  ulong uVar1;
  long lVar2;
  deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>> *pdVar3
  ;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 local_70 [16];
  undefined8 *local_60 [2];
  undefined8 **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar5 = (char *)Translated::getInstance();
    Translated::log(pcVar5,"GuoPengFei: delete 14 %d",(ulong)*(uint *)(this + 0x45c));
  }
  if ((param_1 == (ZhouLuJun *)0x0) || (*(long *)(this + 0xe0) == 0)) {
    pcVar5 = (char *)Translated::getInstance();
    Translated::log(pcVar5,"GuoPengFei: delete 14 %d 1",(ulong)*(uint *)(this + 0x45c));
    uVar7 = 0;
  }
  else if (this[0x10] == (GuoPengFei)0x2) {
    auVar11 = (**(code **)**(undefined8 **)(this + 0x3b0))(*(undefined8 **)(this + 0x3b0),param_1);
    puVar6 = malloc(0xc0);
    *puVar6 = param_1;
    local_60[0] = puVar6;
    local_70 = uv_buf_init(auVar11._0_8_,auVar11._8_8_ & 0xffffffff);
                    /* try { // try from 00a09c34 to 00b09c7b has its CatchHandler @ 00a09c34
                       catch() { ... } // from try @ 00a09c34 with catch @ 00a09c34
                       catch() { ... } // from try @ 00a09ca8 with catch @ 00a09c34 */
    iVar4 = uv_write(puVar6,*(undefined8 *)(this + 0xe0),local_70,1,FUN_00a0a068);
    if (iVar4 == 0) {
      local_50 = local_60;
      lVar8 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::__unordered_map_hasher<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::hash<uv_write_s*>,true>,std::__ndk1::__unordered_map_equal<uv_write_s*,std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>,std::__ndk1::equal_to<uv_write_s*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<uv_write_s*,uv_write_s*>>>
              ::
              __emplace_unique_key_args<uv_write_s*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<uv_write_s*const&>,std::__ndk1::tuple<>>
                        ((uv_write_s **)(this + 0x420),(piecewise_construct_t *)local_60,
                         (tuple *)&DAT_012f90f2,(tuple *)&local_50);
      *(undefined8 **)(lVar8 + 0x18) = puVar6;
      pcVar5 = (char *)Translated::getInstance();
      Translated::log(pcVar5,"GuoPengFei sendMessage: appid=%d, processid=%d, msgid=%d, aa=%d",
                      (ulong)*(uint *)(param_1 + 0x14),(ulong)*(uint *)(param_1 + 0x10),
                      (ulong)*(uint *)(param_1 + 0x18),(ulong)*(uint *)(this + 0x45c));
    }
    else {
      pcVar5 = (char *)Translated::getInstance();
      uVar7 = uv_err_name(iVar4);
                    /* try { // try from 00a09c7c to 00b09ca7 has its CatchHandler @ 00a09d00 */
      Translated::log(pcVar5,"GuoPengFei write failed. %s",uVar7);
      free(local_60[0]);
      if (IncludeSymbols::getInstance()::s_MessagePool ==
          (deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>
           *)0x0) {
        IncludeSymbols::getInstance()::s_MessagePool = operator_new(0x30);
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 8) = 0;
        *(undefined8 *)IncludeSymbols::getInstance()::s_MessagePool = 0;
                    /* try { // try from 00a09ca8 to 00b09d1b has its CatchHandler @ 00a09c34 */
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x18) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20) = 0;
      }
      pdVar3 = IncludeSymbols::getInstance()::s_MessagePool;
      lVar8 = *(long *)(IncludeSymbols::getInstance()::s_MessagePool + 8);
      lVar9 = *(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28);
      uVar1 = 0;
      if (*(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) - lVar8 != 0) {
        uVar1 = (*(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) - lVar8) * 0x40 - 1;
      }
      uVar10 = lVar9 + *(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20);
      if (uVar1 == uVar10) {
        std::__ndk1::
        deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>::
        __add_back_capacity(IncludeSymbols::getInstance()::s_MessagePool);
        lVar9 = *(long *)(pdVar3 + 0x28);
        lVar8 = *(long *)(pdVar3 + 8);
        uVar10 = *(long *)(pdVar3 + 0x20) + lVar9;
      }
                    /* catch() { ... } // from try @ 00a09c7c with catch @ 00a09d00 */
      *(ZhouLuJun **)(*(long *)(lVar8 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8) =
           param_1;
      *(long *)(pdVar3 + 0x28) = lVar9 + 1;
      close(this);
    }
    uVar7 = 1;
  }
  else {
    pcVar5 = (char *)Translated::getInstance();
    Translated::log(pcVar5,"GuoPengFei: delete 14 %d 2",(ulong)*(uint *)(this + 0x45c));
    if (IncludeSymbols::getInstance()::s_MessagePool ==
        (deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>
         *)0x0) {
      IncludeSymbols::getInstance()::s_MessagePool = operator_new(0x30);
      *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 8) = 0;
      *(undefined8 *)IncludeSymbols::getInstance()::s_MessagePool = 0;
      *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x18) = 0;
      *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) = 0;
      *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28) = 0;
      *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20) = 0;
    }
    pdVar3 = IncludeSymbols::getInstance()::s_MessagePool;
    lVar8 = *(long *)(IncludeSymbols::getInstance()::s_MessagePool + 8);
    lVar9 = *(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28);
    uVar1 = 0;
    if (*(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) - lVar8 != 0) {
      uVar1 = (*(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) - lVar8) * 0x40 - 1;
    }
    uVar10 = lVar9 + *(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20);
    if (uVar1 == uVar10) {
      std::__ndk1::
      deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>::
      __add_back_capacity(IncludeSymbols::getInstance()::s_MessagePool);
      lVar9 = *(long *)(pdVar3 + 0x28);
      lVar8 = *(long *)(pdVar3 + 8);
      uVar10 = *(long *)(pdVar3 + 0x20) + lVar9;
    }
    uVar7 = 0;
    *(ZhouLuJun **)(*(long *)(lVar8 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8) =
         param_1;
    *(long *)(pdVar3 + 0x28) = lVar9 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

