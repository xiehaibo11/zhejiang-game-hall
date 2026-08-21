
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<v8::internal::compiler::Node*,
   void*>*>, bool> std::__ndk1::__hash_table<v8::internal::compiler::Node*,
   v8::internal::compiler::NodeHashCache::NodeHashCode,
   v8::internal::compiler::NodeHashCache::NodeEquals,
   v8::internal::ZoneAllocator<v8::internal::compiler::Node*>
   >::__emplace_unique_key_args<v8::internal::compiler::Node*, v8::internal::compiler::Node*
   const&>(v8::internal::compiler::Node* const&, v8::internal::compiler::Node* const&) */

long * __thiscall
std::__ndk1::
__hash_table<v8::internal::compiler::Node*,v8::internal::compiler::NodeHashCache::NodeHashCode,v8::internal::compiler::NodeHashCache::NodeEquals,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
::__emplace_unique_key_args<v8::internal::compiler::Node*,v8::internal::compiler::Node*const&>
          (__hash_table<v8::internal::compiler::Node*,v8::internal::compiler::NodeHashCache::NodeHashCode,v8::internal::compiler::NodeHashCache::NodeEquals,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
           *this,Node **param_1,Node **param_2)

{
  ulong uVar1;
  ulong uVar2;
  Zone *this_00;
  ulong uVar3;
  Node *pNVar4;
  long *plVar5;
  __hash_table<v8::internal::compiler::Node*,v8::internal::compiler::NodeHashCache::NodeHashCode,v8::internal::compiler::NodeHashCache::NodeEquals,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  *p_Var6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar2 = v8::internal::compiler::NodeProperties::HashCode(*param_1);
  uVar9 = *(ulong *)(this + 8);
  if (uVar9 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x25 = uVar9 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar9 <= uVar2) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar2 / uVar9;
        }
        unaff_x25 = uVar2 - uVar3 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar3 = plVar8[1];
        if (uVar3 != uVar2) {
          if (uVar7 < 2) {
            uVar3 = uVar3 & uVar9 - 1;
          }
          else if (uVar9 <= uVar3) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar3 / uVar9;
            }
            if (uVar3 - uVar1 * uVar9 == unaff_x25) goto LAB_016b7820;
            break;
          }
          if (uVar3 != unaff_x25) break;
        }
LAB_016b7820:
        uVar3 = v8::internal::compiler::NodeProperties::Equals((Node *)plVar8[2],*param_1);
        if ((uVar3 & 1) != 0) {
          return plVar8;
        }
      }
    }
  }
  this_00 = *(Zone **)(this + 0x20);
  plVar8 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar8) < 0x18) {
    plVar8 = (long *)v8::internal::Zone::NewExpand(this_00,0x18);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar8 + 3;
  }
  pNVar4 = *param_2;
  *plVar8 = 0;
  plVar8[1] = uVar2;
  plVar8[2] = (long)pNVar4;
  if ((uVar9 == 0) || (*(float *)(this + 0x30) * (float)uVar9 < (float)(*(long *)(this + 0x28) + 1))
     ) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar7 = (ulong)((float)(*(long *)(this + 0x28) + 1) / *(float *)(this + 0x30));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    rehash(this,uVar7);
    uVar9 = *(ulong *)(this + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar9 <= uVar2) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar2 / uVar9;
        }
        unaff_x25 = uVar2 - uVar7 * uVar9;
      }
    }
  }
  plVar5 = *(long **)(*(long *)this + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    p_Var6 = this + 0x18;
    *plVar8 = *(long *)p_Var6;
    *(long **)p_Var6 = plVar8;
    *(__hash_table<v8::internal::compiler::Node*,v8::internal::compiler::NodeHashCache::NodeHashCode,v8::internal::compiler::NodeHashCache::NodeEquals,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      **)(*(long *)this + unaff_x25 * 8) = p_Var6;
    if (*plVar8 != 0) {
      uVar2 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar2 = uVar2 & uVar9 - 1;
      }
      else if (uVar9 <= uVar2) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar2 / uVar9;
        }
        uVar2 = uVar2 - uVar7 * uVar9;
      }
      *(long **)(*(long *)this + uVar2 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  return plVar8;
}

