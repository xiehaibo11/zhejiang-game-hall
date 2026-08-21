
/* v8::internal::ObjectStatsCollectorImpl::RecordVirtualObjectStats(v8::internal::HeapObject,
   v8::internal::HeapObject, v8::internal::ObjectStats::VirtualInstanceType, unsigned long, unsigned
   long, v8::internal::ObjectStatsCollectorImpl::CowMode) */

undefined8 __thiscall
v8::internal::ObjectStatsCollectorImpl::RecordVirtualObjectStats
          (ObjectStatsCollectorImpl *this,ulong param_2,ulong param_3,int param_4,ulong param_5,
          ulong param_6,int param_7)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  ulong local_38;
  
  local_38 = param_3;
  if (param_5 <= param_6) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","over_allocated < size");
  }
  iVar5 = (int)param_3;
  if (((int)param_2 != 0) && (iVar5 != 0)) {
    uVar7 = param_2 - (param_2 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)((param_2 & 0xfffffffffffc0000) + 0x10) +
                     (uVar7 >> 7 & 0x1ffffff) * 4);
    iVar6 = 1;
    uVar2 = 1 << (ulong)((uint)(uVar7 >> 2) & 0x1f);
    if ((*puVar1 & uVar2) == 0) {
      iVar9 = 1;
    }
    else {
      uVar2 = uVar2 << 1;
      bVar4 = uVar2 == 0;
      if (bVar4) {
        uVar2 = 1;
      }
      iVar9 = (uint)((puVar1[bVar4] & uVar2) == 0) << 1;
    }
    uVar7 = param_3 - (param_3 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)((param_3 & 0xfffffffffffc0000) + 0x10) +
                     (uVar7 >> 7 & 0x1ffffff) * 4);
    uVar2 = 1 << (ulong)((uint)(uVar7 >> 2) & 0x1f);
    if ((*puVar1 & uVar2) != 0) {
      uVar2 = uVar2 << 1;
      bVar4 = uVar2 == 0;
      if (bVar4) {
        uVar2 = 1;
      }
      iVar6 = (uint)((puVar1[bVar4] & uVar2) == 0) << 1;
    }
    if (iVar9 != iVar6) {
      return 0;
    }
  }
  if (*(short *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) == 0x76) {
    if (param_7 == 1) {
      lVar8 = *(long *)this;
      bVar4 = true;
    }
    else {
      lVar8 = *(long *)this;
      bVar4 = *(int *)(param_3 - 1) != *(int *)(lVar8 + -0x8768);
    }
    if ((((iVar5 != *(int *)(lVar8 + -0x86e8)) && (iVar5 != *(int *)(lVar8 + -0x8470))) &&
        (iVar5 != *(int *)(lVar8 + -0x8468))) &&
       ((bool)(bVar4 & iVar5 != *(int *)(lVar8 + -0x8440)))) {
LAB_00ffbdc0:
      uVar7 = *(ulong *)(this + 0x20);
      if (uVar7 != 0) {
        uVar16 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar7 >> 0x10
                                                                                      )),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar7 >> 8)),POPCOUNT((char)uVar7))))))));
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        param_3 = param_3 & 0xffffffff;
        if (uVar10 < 2) {
          uVar12 = (int)uVar7 - 1 & param_3;
        }
        else {
          uVar12 = param_3;
          if (uVar7 <= param_3) {
            uVar12 = 0;
            if (uVar7 != 0) {
              uVar12 = param_3 / uVar7;
            }
            uVar12 = param_3 - uVar12 * uVar7;
          }
        }
        plVar13 = *(long **)(*(long *)(this + 0x18) + uVar12 * 8);
        if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
          do {
            uVar14 = plVar13[1];
            if (uVar14 == param_3) {
              if ((int)plVar13[2] == iVar5) {
                return 0;
              }
            }
            else {
              if (uVar10 < 2) {
                uVar14 = uVar14 & uVar7 - 1;
              }
              else if (uVar7 <= uVar14) {
                uVar3 = 0;
                if (uVar7 != 0) {
                  uVar3 = uVar14 / uVar7;
                }
                uVar14 = uVar14 - uVar3 * uVar7;
              }
              if (uVar14 != uVar12) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
      std::__ndk1::
      __hash_table<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>
      ::__emplace_unique_key_args<v8::internal::HeapObject,v8::internal::HeapObject_const&>
                ((__hash_table<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>
                  *)(this + 0x18),(HeapObject *)&local_38,(HeapObject *)&local_38);
      lVar11 = *(long *)(this + 8);
      lVar8 = lVar11 + ((long)param_4 + 0x43a) * 8;
      *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
      *(ulong *)(lVar8 + 0x4898) = *(long *)(lVar8 + 0x4898) + param_5;
      if (param_5 == 0) {
        uVar7 = 0;
      }
      else {
        uVar2 = 0x3b - (int)LZCOUNT(param_5);
        uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
        if (0xe < (int)uVar2) {
          uVar2 = 0xf;
        }
        uVar7 = (ulong)uVar2;
      }
      lVar11 = lVar11 + ((long)param_4 + 0x43a) * 0x80 + uVar7 * 8;
      *(long *)(lVar11 + 0xb570) = *(long *)(lVar11 + 0xb570) + 1;
      *(ulong *)(lVar8 + 0x9128) = *(long *)(lVar8 + 0x9128) + param_6;
      *(long *)(lVar11 + 0x2f9f0) = *(long *)(lVar11 + 0x2f9f0) + 1;
      return 1;
    }
  }
  else if (iVar5 != *(int *)(*(long *)this + -0x8498)) goto LAB_00ffbdc0;
  return 0;
}

