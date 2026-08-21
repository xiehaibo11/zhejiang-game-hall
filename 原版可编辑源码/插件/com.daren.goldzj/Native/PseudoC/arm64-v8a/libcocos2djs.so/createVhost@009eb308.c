
/* WARNING: Type propagation algorithm not settling */
/* WebSocketImpl::createVhost(lws_protocols*, int&) */

void __thiscall WebSocketImpl::createVhost(WebSocketImpl *this,lws_protocols *param_1,int *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  char *pcVar1;
  basic_string *pbVar2;
  basic_string bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  FILE *__s;
  void *pvVar8;
  size_t __size;
  basic_string *pbVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  Data aDStack_2a0 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_290 [8];
  ulong local_288;
  char *local_280;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_278 [8];
  ulong local_270;
  char *local_268;
  ulong local_260;
  basic_string *pbStack_258;
  void *local_250;
  __ndk1 local_248 [16];
  void *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  lws_protocols *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  WebSocketImpl *local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pbVar9 = (basic_string *)param_2;
  plVar5 = (long *)cocos2d::FileUtils::getInstance();
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x138);
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,this_00);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*plVar5 + 0x40))(&local_230,plVar5,this_00);
    if (((byte)*this_00 & 1) == 0) {
      *(undefined2 *)this_00 = 0;
    }
    else {
      **(undefined1 **)(this + 0x148) = 0;
      *(undefined8 *)(this + 0x140) = 0;
      if (((byte)this[0x138] & 1) != 0) {
        operator_delete(*(void **)(this + 0x148));
        *(undefined8 *)(this + 0x138) = 0;
      }
    }
    *(lws_protocols **)(this + 0x148) = local_220;
    *(undefined8 *)(this + 0x140) = uStack_228;
    *(undefined8 *)this_00 = local_230;
  }
  uStack_228 = 0;
  uStack_218 = 0;
  local_230 = 0xffffffff;
  uStack_1cc = 0x3000;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  local_1f0 = (WebSocketImpl *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  if ((uVar6 & 1) == 0) {
    uStack_1cc = 0x3080;
  }
  local_1d4 = 0xffffffff;
  uStack_1d0 = 0xffffffff;
  uStack_1c8 = 0;
  local_220 = param_1;
  if (*param_2 == 0) goto LAB_009eb684;
  if ((uVar6 & 1) == 0) {
    *param_2 = *param_2 | 6;
    goto LAB_009eb684;
  }
  (**(code **)(*plVar5 + 0x90))(local_248,plVar5);
  pbStack_258 = (basic_string *)0x0;
  local_250 = (void *)0x0;
  local_260 = 0;
  if (((byte)*this_00 & 1) == 0) {
    local_250 = *(void **)(this + 0x148);
    pbStack_258 = *(basic_string **)(this + 0x140);
    local_260 = *(ulong *)this_00;
  }
  else {
    pbVar10 = *(basic_string **)(this + 0x140);
    if ((basic_string *)0xffffffffffffffef < pbVar10) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar8 = *(void **)(this + 0x148);
    if (pbVar10 < (basic_string *)0x17) {
      pvVar7 = (void *)((ulong)&local_260 | 1);
      local_260 = (ulong)(byte)((int)pbVar10 << 1);
      if (pbVar10 != (basic_string *)0x0) goto LAB_009eb4c4;
    }
    else {
      pvVar7 = operator_new((ulong)(pbVar10 + 0x10) & 0xfffffffffffffff0);
      local_260 = (ulong)(pbVar10 + 0x10) & 0xfffffffffffffff0 | 1;
      pbStack_258 = pbVar10;
      local_250 = pvVar7;
LAB_009eb4c4:
      pbVar9 = pbVar10;
      memcpy(pvVar7,pvVar8,(size_t)pbVar10);
    }
    *(basic_string *)((long)pvVar7 + (long)pbVar10) = (basic_string)0x0;
  }
  bVar3 = local_260._0_1_;
  pbVar2 = (basic_string *)(ulong)((byte)local_260._0_1_ >> 1);
  pbVar10 = (basic_string *)(ulong)((byte)local_260._0_1_ >> 1);
  pvVar8 = (void *)((ulong)&local_260 | 1);
  if ((local_260 & 1) != 0) {
    pbVar2 = pbStack_258;
    pbVar10 = pbStack_258;
    pvVar8 = local_250;
  }
  do {
    pbVar11 = pbVar2;
    if (pbVar11 == (basic_string *)0x0) goto LAB_009eb56c;
    pbVar9 = (basic_string *)0x2;
    pvVar7 = memchr(&DAT_0188d4d7,(uint)(byte)((basic_string *)((long)pvVar8 + (long)pbVar11))[-1],2
                   );
    pbVar2 = pbVar11 + -1;
  } while (pvVar7 == (void *)0x0);
  if (pbVar11 + -1 != (basic_string *)0xffffffffffffffff) {
    pbVar2 = pbVar10;
    if (pbVar11 <= pbVar10) {
      pbVar2 = pbVar11;
    }
    pbVar10 = pbVar10 + -(long)pbVar2;
    if (pbVar10 != (basic_string *)0x0) {
      pbVar9 = pbVar10;
                    /* try { // try from 009eb54c to 00aeb627 has its CatchHandler @ 009eb54c
                       catch() { ... } // from try @ 009eb54c with catch @ 009eb54c
                       catch() { ... } // from try @ 009eb63c with catch @ 009eb54c */
      memmove(pvVar8,(basic_string *)((long)pvVar8 + (long)pbVar2),(size_t)pbVar10);
      bVar3 = local_260._0_1_;
    }
    pbVar2 = pbVar10;
    if (((byte)bVar3 & 1) == 0) {
      local_260 = CONCAT71(local_260._1_7_,(char)((int)pbVar10 << 1));
      pbVar2 = pbStack_258;
    }
    pbStack_258 = pbVar2;
    *(basic_string *)((long)pvVar8 + (long)pbVar10) = (basic_string)0x0;
  }
LAB_009eb56c:
  std::__ndk1::operator+(local_248,(basic_string *)&local_260,pbVar9);
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,local_278);
  if ((uVar6 & 1) == 0) {
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5,this_00);
    if ((uVar6 & 1) != 0) {
      (**(code **)(*plVar5 + 0x40))(local_290,plVar5,this_00);
      pcVar1 = (char *)((ulong)local_290 | 1);
      if (((byte)local_290[0] & 1) != 0) {
        pcVar1 = local_280;
      }
      if (*pcVar1 == '/') {
                    /* try { // try from 009eb628 to 00aeb63b has its CatchHandler @ 009eb688 */
        if (this_00 != local_290) {
                    /* try { // try from 009eb63c to 00aeb6a3 has its CatchHandler @ 009eb54c */
          uVar6 = (ulong)((byte)local_290[0] >> 1);
          if (((byte)local_290[0] & 1) != 0) {
            uVar6 = local_288;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (this_00,pcVar1,uVar6);
        }
        if (((byte)*this_00 & 1) == 0) {
          local_1f0 = this + 0x139;
        }
        else {
          local_1f0 = *(WebSocketImpl **)(this + 0x148);
        }
      }
      else {
        (**(code **)(*plVar5 + 0x20))(aDStack_2a0,plVar5,local_290);
                    /* try { // try from 009eb6e0 to 00aeb6ef has its CatchHandler @ 009eb8b0 */
        uVar6 = cocos2d::Data::isNull(aDStack_2a0);
        if ((uVar6 & 1) == 0) {
          pcVar1 = (char *)((ulong)local_278 | 1);
                    /* try { // try from 009eb700 to 00aeb707 has its CatchHandler @ 009eb8ac */
          if (((byte)local_278[0] & 1) != 0) {
            pcVar1 = local_268;
          }
                    /* try { // try from 009eb708 to 00aeb71b has its CatchHandler @ 009eb89c */
          __s = fopen(pcVar1,"wb");
          if (__s != (FILE *)0x0) {
            pvVar8 = (void *)cocos2d::Data::getBytes(aDStack_2a0);
            __size = cocos2d::Data::getSize(aDStack_2a0);
                    /* try { // try from 009eb72c to 00aeb733 has its CatchHandler @ 009eb888 */
                    /* try { // try from 009eb734 to 00aeb74b has its CatchHandler @ 009eb88c */
            fwrite(pvVar8,__size,1,__s);
            fclose(__s);
            if (this_00 != local_278) {
                    /* try { // try from 009eb75c to 00aeb763 has its CatchHandler @ 009eb874 */
              uVar6 = (ulong)((byte)local_278[0] >> 1);
              pcVar1 = (char *)((ulong)local_278 | 1);
              if (((byte)local_278[0] & 1) != 0) {
                uVar6 = local_270;
                pcVar1 = local_268;
              }
                    /* try { // try from 009eb764 to 00aeb797 has its CatchHandler @ 009eb878 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (this_00,pcVar1,uVar6);
            }
            if (((byte)*this_00 & 1) == 0) {
              local_1f0 = this + 0x139;
            }
            else {
              local_1f0 = *(WebSocketImpl **)(this + 0x148);
            }
          }
        }
                    /* try { // try from 009eb79c to 00aeb7a3 has its CatchHandler @ 009eb860 */
        cocos2d::Data::~Data(aDStack_2a0);
                    /* try { // try from 009eb7a4 to 00aeb7df has its CatchHandler @ 009eb864 */
      }
      if (((byte)local_290[0] & 1) != 0) {
        operator_delete(local_280);
      }
    }
  }
  else {
    if (this_00 != local_278) {
      uVar6 = (ulong)((byte)local_278[0] >> 1);
      pcVar1 = (char *)((ulong)local_278 | 1);
      if (((byte)local_278[0] & 1) != 0) {
        uVar6 = local_270;
        pcVar1 = local_268;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,pcVar1,uVar6);
    }
    if (((byte)*this_00 & 1) == 0) {
      local_1f0 = this + 0x139;
    }
    else {
      local_1f0 = *(WebSocketImpl **)(this + 0x148);
    }
  }
  if (((byte)local_278[0] & 1) != 0) {
    operator_delete(local_268);
  }
  if ((local_260 & 1) != 0) {
    operator_delete(local_250);
  }
  if (((byte)local_248[0] & 1) != 0) {
    operator_delete(local_238);
  }
LAB_009eb684:
                    /* catch() { ... } // from try @ 009eb628 with catch @ 009eb688 */
  lws_create_vhost(DAT_01d38800,&local_230);
  if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 009eb6a4 to 00aeb6df has its CatchHandler @ 009eb6a4
                       catch() { ... } // from try @ 009eb6a4 with catch @ 009eb6a4
                       catch() { ... } // from try @ 009eb7e0 with catch @ 009eb6a4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009eb7e0 to 00aeb8c3 has its CatchHandler @ 009eb6a4 */
  __stack_chk_fail();
}

