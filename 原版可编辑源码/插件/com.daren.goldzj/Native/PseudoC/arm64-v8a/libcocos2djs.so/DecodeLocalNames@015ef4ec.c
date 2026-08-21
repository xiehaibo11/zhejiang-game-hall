
/* v8::internal::wasm::DecodeLocalNames(unsigned char const*, unsigned char const*,
   v8::internal::wasm::LocalNames*) */

void v8::internal::wasm::DecodeLocalNames(uchar *param_1,uchar *param_2,LocalNames *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uchar *puVar8;
  uchar uVar9;
  int iVar10;
  long lVar11;
  int local_b4;
  undefined8 local_b0;
  undefined **local_a8;
  uchar *puStack_a0;
  uchar *local_98;
  uchar *local_90;
  undefined4 local_88;
  undefined4 local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  local_80 = 0;
  local_a8 = &PTR__Decoder_01cbc3a8;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  puStack_a0 = param_1;
  local_98 = param_1;
  local_90 = param_2;
  uVar7 = FUN_015ef348(&local_a8);
  if ((uVar7 & 1) != 0) {
    uVar7 = local_78 >> 1 & 0x7f;
    if ((local_78 & 1) != 0) {
      uVar7 = local_70;
    }
    if (uVar7 == 0) {
      do {
        if (local_90 <= local_98) break;
        if ((int)local_90 == (int)local_98) {
          Decoder::errorf((uchar *)&local_a8,(char *)local_98,"expected %u bytes, fell off end",1);
          uVar9 = '\0';
          local_98 = local_90;
        }
        else {
          puVar8 = local_98 + 1;
          uVar9 = *local_98;
          local_98 = puVar8;
          if ((char)uVar9 < '\0') break;
        }
        uVar3 = Decoder::consume_u32v((Decoder *)&local_a8,"name payload length");
        if ((uint)((int)local_90 - (int)local_98) < uVar3) {
          Decoder::errorf((uchar *)&local_a8,(char *)local_98,"expected %u bytes, fell off end");
          break;
        }
        if (uVar9 == '\x02') {
          iVar4 = Decoder::consume_u32v((Decoder *)&local_a8,"local names count");
          if (iVar4 != 0) {
            iVar10 = 0;
            do {
              iVar5 = Decoder::consume_u32v((Decoder *)&local_a8,"function index");
              if (-1 < iVar5) {
                local_b0 = CONCAT44(local_b0._4_4_,iVar5);
                piVar2 = *(int **)(param_3 + 0x10);
                if (piVar2 < *(int **)(param_3 + 0x18)) {
                  *piVar2 = iVar5;
                  piVar2[1] = -1;
                  piVar2[4] = 0;
                  piVar2[5] = 0;
                  piVar2[6] = 0;
                  piVar2[7] = 0;
                  piVar2[2] = 0;
                  piVar2[3] = 0;
                  lVar11 = *(long *)(param_3 + 0x10) + 0x20;
                  *(long *)(param_3 + 0x10) = lVar11;
                }
                else {
                  std::__ndk1::
                  vector<v8::internal::wasm::LocalNamesPerFunction,std::__ndk1::allocator<v8::internal::wasm::LocalNamesPerFunction>>
                  ::__emplace_back_slow_path<int>
                            ((vector<v8::internal::wasm::LocalNamesPerFunction,std::__ndk1::allocator<v8::internal::wasm::LocalNamesPerFunction>>
                              *)(param_3 + 8),(int *)&local_b0);
                  lVar11 = *(long *)(param_3 + 0x10);
                }
                iVar5 = *(int *)(lVar11 + -0x20);
                if (*(int *)(lVar11 + -0x20) <= *(int *)param_3) {
                  iVar5 = *(int *)param_3;
                }
                *(int *)param_3 = iVar5;
                iVar5 = Decoder::consume_u32v((Decoder *)&local_a8,"namings count");
                if (iVar5 != 0) {
                  do {
                    while( true ) {
                      iVar6 = Decoder::consume_u32v((Decoder *)&local_a8,"local index");
                      local_b0 = FUN_015ede44(&local_a8,1,"local name");
                      uVar7 = local_78 >> 1 & 0x7f;
                      if ((local_78 & 1) != 0) {
                        uVar7 = local_70;
                      }
                      if (uVar7 != 0) goto LAB_015ef648;
                      if (-1 < iVar6) break;
LAB_015ef6e8:
                      iVar5 = iVar5 + -1;
                      if (iVar5 == 0) goto LAB_015ef648;
                    }
                    iVar1 = iVar6;
                    if (iVar6 <= *(int *)(lVar11 + -0x1c)) {
                      iVar1 = *(int *)(lVar11 + -0x1c);
                    }
                    *(int *)(lVar11 + -0x1c) = iVar1;
                    piVar2 = *(int **)(lVar11 + -0x10);
                    local_b4 = iVar6;
                    if (*(int **)(lVar11 + -8) <= piVar2) {
                      std::__ndk1::
                      vector<v8::internal::wasm::LocalName,std::__ndk1::allocator<v8::internal::wasm::LocalName>>
                      ::__emplace_back_slow_path<int,v8::internal::wasm::WireBytesRef&>
                                ((vector<v8::internal::wasm::LocalName,std::__ndk1::allocator<v8::internal::wasm::LocalName>>
                                  *)(lVar11 + -0x18),&local_b4,(WireBytesRef *)&local_b0);
                      goto LAB_015ef6e8;
                    }
                    *piVar2 = iVar6;
                    *(undefined8 *)(piVar2 + 1) = local_b0;
                    *(long *)(lVar11 + -0x10) = *(long *)(lVar11 + -0x10) + 0xc;
                    iVar5 = iVar5 + -1;
                  } while (iVar5 != 0);
                }
              }
LAB_015ef648:
              iVar10 = iVar10 + 1;
            } while (iVar10 != iVar4);
          }
        }
        else {
          local_98 = local_98 + uVar3;
        }
        uVar7 = local_78 >> 1 & 0x7f;
        if ((local_78 & 1) != 0) {
          uVar7 = local_70;
        }
      } while (uVar7 == 0);
    }
  }
  local_a8 = &PTR__Decoder_01cbc3a8;
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  return;
}

