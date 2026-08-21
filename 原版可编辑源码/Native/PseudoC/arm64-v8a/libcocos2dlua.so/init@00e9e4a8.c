
/* cocos2d::network::WebSocket::init(cocos2d::network::WebSocket::Delegate const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::network::WebSocket::init
          (WebSocket *this,Delegate *param_1,basic_string *param_2,vector *param_3,
          basic_string *param_4)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  mutex *this_01;
  long lVar1;
  basic_string *pbVar2;
  long lVar3;
  bool bVar4;
  code *pcVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  char *__src;
  ulong uVar11;
  long *plVar12;
  size_t sVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *local_88;
  code *local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x38);
  *(Delegate **)(this + 0xb8) = param_1;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar17 = *(ulong *)(param_2 + 8);
    pbVar2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar17 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar17);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x138) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4) {
    uVar17 = *(ulong *)(param_4 + 8);
    pbVar2 = *(basic_string **)(param_4 + 0x10);
    if (((byte)*param_4 & 1) == 0) {
      pbVar2 = param_4 + 1;
      uVar17 = (ulong)((byte)*param_4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x138),(char *)pbVar2,uVar17);
  }
  if (((byte)*this_00 & 1) == 0) {
    if ((byte)*this_00 >> 1 == 0) {
LAB_00e9e728:
      uVar10 = 0;
      goto LAB_00e9e860;
    }
  }
  else if (*(long *)(this + 0x40) == 0) goto LAB_00e9e728;
  if (param_3 != (vector *)0x0) {
    if (*(long *)param_3 != *(long *)(param_3 + 8)) {
      lVar14 = *(long *)(param_3 + 8) - *(long *)param_3;
      lVar15 = lVar14 >> 3;
      sVar13 = lVar15 * 0x5555555555555568 + 0x38;
      pvVar6 = malloc(sVar13);
      *(void **)(this + 0x70) = pvVar6;
      memset(pvVar6,0,sVar13);
      if (lVar14 != 0) {
        uVar16 = lVar15 * -0x5555555555555555;
        lVar15 = 0;
        uVar17 = 0;
        lVar14 = 0x28;
        do {
          *(code **)(*(long *)(this + 0x70) + lVar14 + -0x20) =
               WebSocketCallbackWrapper::onSocketCallback;
          lVar1 = *(long *)param_3;
          uVar11 = (*(long *)(param_3 + 8) - lVar1 >> 3) * -0x5555555555555555;
          if (uVar11 < uVar17 || uVar11 - uVar17 == 0) {
LAB_00e9e890:
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((*(byte *)(lVar1 + lVar15) & 1) == 0) {
            uVar11 = (ulong)(*(byte *)(lVar1 + lVar15) >> 1);
          }
          else {
            uVar11 = *(ulong *)(lVar1 + lVar15 + 8);
          }
          local_80 = malloc(uVar11 + 1);
          puVar7 = *(undefined8 **)(this + 0x120);
          if (puVar7 == *(undefined8 **)(this + 0x128)) {
            std::__ndk1::vector<char*,std::__ndk1::allocator<char*>>::
            __push_back_slow_path<char*const&>
                      ((vector<char*,std::__ndk1::allocator<char*>> *)(this + 0x118),
                       (char **)&local_80);
          }
          else {
            *puVar7 = local_80;
            *(undefined8 **)(this + 0x120) = puVar7 + 1;
          }
          local_80[uVar11] = (code)0x0;
          lVar1 = *(long *)param_3;
          uVar11 = (*(long *)(param_3 + 8) - lVar1 >> 3) * -0x5555555555555555;
          if (uVar11 < uVar17 || uVar11 - uVar17 == 0) goto LAB_00e9e890;
          if ((*(byte *)(lVar1 + lVar15) & 1) == 0) {
            __src = (char *)(lVar1 + lVar15 + 1);
          }
          else {
            __src = *(char **)(lVar1 + lVar15 + 0x10);
          }
          strcpy((char *)local_80,__src);
          pcVar5 = local_80;
          puVar7 = (undefined8 *)(*(long *)(this + 0x70) + lVar14);
          puVar7[-5] = local_80;
          DAT_0178f578 = DAT_0178f578 + 1;
          *(int *)(puVar7 + -1) = DAT_0178f578;
          puVar7[-2] = 0x10000;
          puVar7[-3] = 0;
          *puVar7 = 0;
          sVar13 = strlen((char *)local_80);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x78),(char *)pcVar5,sVar13);
          if (uVar17 < uVar16 - 1) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(this + 0x78),",",1);
          }
          uVar17 = uVar17 + 1;
          lVar14 = lVar14 + 0x38;
          lVar15 = lVar15 + 0x18;
        } while (uVar17 < uVar16);
      }
    }
  }
  if (DAT_0178f4f8 == (undefined8 *)0x0) {
    puVar7 = operator_new(0x40,(nothrow_t *)&std::nothrow);
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar7 + 7) = 0;
      puVar7[6] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[1] = 0;
      pvVar6 = operator_new(0x18,(nothrow_t *)&std::nothrow);
      if (pvVar6 != (void *)0x0) {
        *(void **)pvVar6 = pvVar6;
        *(void **)((long)pvVar6 + 8) = pvVar6;
        *(undefined8 *)((long)pvVar6 + 0x10) = 0;
      }
      *puVar7 = pvVar6;
    }
    bVar4 = false;
    DAT_0178f4f8 = puVar7;
  }
  else {
    bVar4 = true;
  }
  puVar7 = DAT_0178f4f8;
  piVar8 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  piVar8[2] = 0;
  piVar8[3] = 0;
  *(WebSocket **)(piVar8 + 4) = this;
  this_01 = (mutex *)(puVar7 + 1);
  WsMessage::__id = WsMessage::__id + 1;
  *piVar8 = WsMessage::__id;
  piVar8[1] = 2;
  std::__ndk1::mutex::lock(this_01);
  plVar12 = (long *)*puVar7;
  plVar9 = operator_new(0x18);
  plVar9[1] = (long)plVar12;
  plVar9[2] = (long)piVar8;
  lVar14 = *plVar12;
  *plVar9 = lVar14;
  *(long **)(lVar14 + 8) = plVar9;
  *plVar12 = (long)plVar9;
  plVar12[2] = plVar12[2] + 1;
  std::__ndk1::mutex::unlock(this_01);
  puVar7 = DAT_0178f4f8;
  if (bVar4) {
    uVar10 = 1;
  }
  else {
    pvVar6 = operator_new(8,(nothrow_t *)&std::nothrow);
    if (pvVar6 != (void *)0x0) {
      local_88 = puVar7;
      uStack_78 = 0;
      local_80 = WsThreadHelper::wsThreadEntryFunc;
      FUN_00e9d3c0(pvVar6,&local_80,&local_88);
    }
    uVar10 = 1;
    puVar7[6] = pvVar6;
  }
LAB_00e9e860:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

