
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::network::WebSocket::createVhost(lws_protocols*, int&) */

void __thiscall
cocos2d::network::WebSocket::createVhost(WebSocket *this,lws_protocols *param_1,int *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  char *pcVar1;
  basic_string *pbVar2;
  basic_string *pbVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  FILE *__s;
  void *pvVar8;
  size_t __size;
  basic_string *pbVar9;
  basic_string *pbVar10;
  Data aDStack_2a0 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_290 [8];
  ulong local_288;
  char *local_280;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_278 [8];
  ulong local_270;
  char *local_268;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_260 [8];
  basic_string *local_258;
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
  WebSocket *local_1f0;
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
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pbVar9 = (basic_string *)param_2;
  plVar5 = (long *)FileUtils::getInstance();
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x138);
  uVar6 = (**(code **)(*plVar5 + 0x128))(plVar5,this_00);
  if ((uVar6 & 1) != 0) {
    (**(code **)(*plVar5 + 0x50))(&local_230,plVar5,this_00);
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
  local_1f0 = (WebSocket *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1cc = 0x3000;
  if ((uVar6 & 1) == 0) {
    uStack_1cc = 0x3080;
  }
  local_1d4 = 0xffffffff;
  uStack_1d0 = 0xffffffff;
  uStack_1c8 = 0;
  local_220 = param_1;
  if (*param_2 != 0) {
    if ((uVar6 & 1) == 0) {
      *param_2 = *param_2 | 6;
    }
    else {
      (**(code **)(*plVar5 + 0xa0))(local_248,plVar5);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_260,(basic_string *)this_00);
      pbVar2 = (basic_string *)(ulong)((byte)local_260[0] >> 1);
      pbVar3 = (basic_string *)(ulong)((byte)local_260[0] >> 1);
      pvVar8 = (void *)((ulong)local_260 | 1);
      if (((byte)local_260[0] & 1) != 0) {
        pbVar2 = local_258;
        pbVar3 = local_258;
        pvVar8 = local_250;
      }
      do {
        pbVar10 = pbVar2;
        if (pbVar10 == (basic_string *)0x0) goto LAB_00e9edd8;
        pbVar9 = (basic_string *)0x2;
        pvVar7 = memchr(&DAT_012f063d,
                        (uint)(byte)((basic_string *)((long)pvVar8 + (long)pbVar10))[-1],2);
        pbVar2 = pbVar10 + -1;
      } while (pvVar7 == (void *)0x0);
      if (pbVar10 + -1 != (basic_string *)0xffffffffffffffff) {
        pbVar2 = pbVar3;
        if (pbVar10 <= pbVar3) {
          pbVar2 = pbVar10;
        }
        pbVar3 = pbVar3 + -(long)pbVar2;
        if (pbVar3 != (basic_string *)0x0) {
          pbVar9 = pbVar3;
          memmove(pvVar8,(basic_string *)((long)pvVar8 + (long)pbVar2),(size_t)pbVar3);
        }
        pbVar2 = pbVar3;
        if (((byte)local_260[0] & 1) == 0) {
          local_260[0] = SUB41((int)pbVar3 << 1,0);
          pbVar2 = local_258;
        }
        local_258 = pbVar2;
        *(basic_string *)((long)pvVar8 + (long)pbVar3) = (basic_string)0x0;
      }
LAB_00e9edd8:
      std::__ndk1::operator+(local_248,(basic_string *)local_260,pbVar9);
      uVar6 = (**(code **)(*plVar5 + 0x128))(plVar5,local_278);
      if ((uVar6 & 1) == 0) {
        uVar6 = (**(code **)(*plVar5 + 0x128))(plVar5,this_00);
        if ((uVar6 & 1) != 0) {
          (**(code **)(*plVar5 + 0x50))(local_290,plVar5,this_00);
          pcVar1 = (char *)((ulong)local_290 | 1);
          if (((byte)local_290[0] & 1) != 0) {
            pcVar1 = local_280;
          }
          if (*pcVar1 == '/') {
            if (this_00 != local_290) {
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
              local_1f0 = *(WebSocket **)(this + 0x148);
            }
          }
          else {
            (**(code **)(*plVar5 + 0x28))(aDStack_2a0,plVar5,local_290);
            uVar6 = Data::isNull(aDStack_2a0);
            if ((uVar6 & 1) == 0) {
              pcVar1 = (char *)((ulong)local_278 | 1);
              if (((byte)local_278[0] & 1) != 0) {
                pcVar1 = local_268;
              }
              __s = fopen(pcVar1,"wb");
              if (__s != (FILE *)0x0) {
                pvVar8 = (void *)Data::getBytes(aDStack_2a0);
                __size = Data::getSize(aDStack_2a0);
                fwrite(pvVar8,__size,1,__s);
                fclose(__s);
                if (this_00 != local_278) {
                  uVar6 = (ulong)((byte)local_278[0] >> 1);
                  pcVar1 = (char *)((ulong)local_278 | 1);
                  if (((byte)local_278[0] & 1) != 0) {
                    uVar6 = local_270;
                    pcVar1 = local_268;
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(this_00,pcVar1,uVar6);
                }
                if (((byte)*this_00 & 1) == 0) {
                  local_1f0 = this + 0x139;
                }
                else {
                  local_1f0 = *(WebSocket **)(this + 0x148);
                }
              }
            }
            Data::~Data(aDStack_2a0);
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
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (this_00,pcVar1,uVar6);
        }
        if (((byte)*this_00 & 1) == 0) {
          local_1f0 = this + 0x139;
        }
        else {
          local_1f0 = *(WebSocket **)(this + 0x148);
        }
      }
      if (((byte)local_278[0] & 1) != 0) {
        operator_delete(local_268);
      }
      if (((byte)local_260[0] & 1) != 0) {
        operator_delete(local_250);
      }
      if (((byte)local_248[0] & 1) != 0) {
        operator_delete(local_238);
      }
    }
  }
  lws_create_vhost(DAT_0178f4f0,&local_230);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

