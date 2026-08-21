
/* v8::internal::compiler::NodeHashCache::Constructor::Get() */

Node * __thiscall v8::internal::compiler::NodeHashCache::Constructor::Get(Constructor *this)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  Constructor *pCVar5;
  Node *pNVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  Node *local_48;
  
  pCVar5 = this + 0x10;
  pNVar6 = *(Node **)pCVar5;
  lVar9 = *(long *)this;
  if (pNVar6 == (Node *)0x0) {
    pNVar6 = *(Node **)(this + 8);
    uVar2 = NodeProperties::HashCode(pNVar6);
    uVar7 = *(ulong *)(lVar9 + 0x10);
    if (uVar7 != 0) {
      uVar12 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar7 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar7
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar7
                                                                                        ))))))));
      uVar11 = NEON_uaddlv(uVar12,1);
      uVar8 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
      if (uVar8 < 2) {
        uVar10 = uVar7 - 1 & uVar2;
      }
      else {
        uVar10 = uVar2;
        if (uVar7 <= uVar2) {
          uVar10 = 0;
          if (uVar7 != 0) {
            uVar10 = uVar2 / uVar7;
          }
          uVar10 = uVar2 - uVar10 * uVar7;
        }
      }
      plVar3 = *(long **)(*(long *)(lVar9 + 8) + uVar10 * 8);
      if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
        do {
          uVar4 = plVar3[1];
          if (uVar4 == uVar2) {
            uVar4 = NodeProperties::Equals((Node *)plVar3[2],pNVar6);
            if ((uVar4 & 1) != 0) {
              pNVar6 = (Node *)plVar3[2];
              if (pNVar6 != (Node *)0x0) goto LAB_016b68ac;
              break;
            }
          }
          else {
            if (uVar8 < 2) {
              uVar4 = uVar4 & uVar7 - 1;
            }
            else if (uVar7 <= uVar4) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar4 / uVar7;
              }
              uVar4 = uVar4 - uVar1 * uVar7;
            }
            if (uVar4 != uVar10) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
    pNVar6 = *(Node **)(this + 8);
  }
  else {
    uVar2 = NodeProperties::HashCode(pNVar6);
    uVar7 = *(ulong *)(lVar9 + 0x10);
    if (uVar7 != 0) {
      uVar12 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar7 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar7
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar7
                                                                                        ))))))));
      uVar11 = NEON_uaddlv(uVar12,1);
      uVar8 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
      if (uVar8 < 2) {
        uVar10 = uVar7 - 1 & uVar2;
      }
      else {
        uVar10 = uVar2;
        if (uVar7 <= uVar2) {
          uVar10 = 0;
          if (uVar7 != 0) {
            uVar10 = uVar2 / uVar7;
          }
          uVar10 = uVar2 - uVar10 * uVar7;
        }
      }
      plVar3 = *(long **)(*(long *)(lVar9 + 8) + uVar10 * 8);
      if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
        do {
          uVar4 = plVar3[1];
          if (uVar4 == uVar2) {
            uVar4 = NodeProperties::Equals((Node *)plVar3[2],pNVar6);
            if ((uVar4 & 1) != 0) {
              pNVar6 = (Node *)plVar3[2];
              if (pNVar6 != (Node *)0x0) {
                lVar9 = *(long *)this;
                if (*(undefined8 **)(lVar9 + 0x48) == *(undefined8 **)(lVar9 + 0x50)) {
                  std::__ndk1::
                  vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                            ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                              *)(lVar9 + 0x40),(Node **)pCVar5);
                }
                else {
                  **(undefined8 **)(lVar9 + 0x48) = *(undefined8 *)pCVar5;
                  *(long *)(lVar9 + 0x48) = *(long *)(lVar9 + 0x48) + 8;
                }
                goto LAB_016b68ac;
              }
              break;
            }
          }
          else {
            if (uVar8 < 2) {
              uVar4 = uVar4 & uVar7 - 1;
            }
            else if (uVar7 <= uVar4) {
              uVar1 = 0;
              if (uVar7 != 0) {
                uVar1 = uVar4 / uVar7;
              }
              uVar4 = uVar4 - uVar1 * uVar7;
            }
            if (uVar4 != uVar10) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
    pNVar6 = *(Node **)(this + 0x10);
    local_48 = pNVar6;
    std::__ndk1::
    __hash_table<v8::internal::compiler::Node*,v8::internal::compiler::NodeHashCache::NodeHashCode,v8::internal::compiler::NodeHashCache::NodeEquals,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::__emplace_unique_key_args<v8::internal::compiler::Node*,v8::internal::compiler::Node*const&>
              ((__hash_table<v8::internal::compiler::Node*,v8::internal::compiler::NodeHashCache::NodeHashCode,v8::internal::compiler::NodeHashCache::NodeEquals,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)(*(long *)this + 8),&local_48,&local_48);
  }
LAB_016b68ac:
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return pNVar6;
}

