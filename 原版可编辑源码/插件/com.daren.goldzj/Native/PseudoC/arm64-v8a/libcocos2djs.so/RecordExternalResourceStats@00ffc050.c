
/* v8::internal::ObjectStatsCollectorImpl::RecordExternalResourceStats(unsigned long,
   v8::internal::ObjectStats::VirtualInstanceType, unsigned long) */

void __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordExternalResourceStats
          (ObjectStatsCollectorImpl *this,ulong param_1,int param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  ulong local_18;
  
  uVar4 = *(ulong *)(this + 0x48);
  if (uVar4 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = uVar4 - 1 & param_1;
    }
    else {
      uVar7 = param_1;
      if (uVar4 <= param_1) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = param_1 / uVar4;
        }
        uVar7 = param_1 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)(this + 0x40) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == param_1) {
          if (plVar8[2] == param_1) {
            return;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
            uVar3 = 0;
            if (uVar4 != 0) {
              uVar3 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar3 * uVar4;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  local_18 = param_1;
  std::__ndk1::
  __hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
  ::__emplace_unique_key_args<unsigned_long,unsigned_long_const&>
            ((__hash_table<unsigned_long,std::__ndk1::hash<unsigned_long>,std::__ndk1::equal_to<unsigned_long>,std::__ndk1::allocator<unsigned_long>>
              *)(this + 0x40),&local_18,&local_18);
  lVar5 = *(long *)(this + 8);
  lVar1 = lVar5 + ((long)param_3 + 0x43a) * 8;
  *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  *(long *)(lVar1 + 0x4898) = *(long *)(lVar1 + 0x4898) + param_4;
  if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = 0x3b - (int)LZCOUNT(param_4);
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    if (0xe < (int)uVar2) {
      uVar2 = 0xf;
    }
    uVar4 = (ulong)uVar2;
  }
  lVar1 = lVar5 + ((long)param_3 + 0x43a) * 0x80 + uVar4 * 8;
  *(long *)(lVar1 + 0xb570) = *(long *)(lVar1 + 0xb570) + 1;
  *(long *)(lVar1 + 0x2f9f0) = *(long *)(lVar1 + 0x2f9f0) + 1;
  return;
}

