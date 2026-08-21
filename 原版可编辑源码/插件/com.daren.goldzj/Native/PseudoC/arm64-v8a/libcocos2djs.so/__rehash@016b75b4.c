
/* std::__ndk1::__hash_table<v8::internal::compiler::Node*,
   v8::internal::compiler::NodeHashCache::NodeHashCode,
   v8::internal::compiler::NodeHashCache::NodeEquals,
   v8::internal::ZoneAllocator<v8::internal::compiler::Node*> >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<v8::internal::compiler::Node*,v8::internal::compiler::NodeHashCache::NodeHashCode,v8::internal::compiler::NodeHashCache::NodeEquals,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
::__rehash(__hash_table<v8::internal::compiler::Node*,v8::internal::compiler::NodeHashCache::NodeHashCode,v8::internal::compiler::NodeHashCache::NodeEquals,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
           *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  Zone *this_00;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  if (param_1 == 0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x10);
    uVar3 = param_1 * 8;
    puVar2 = *(undefined8 **)(this_00 + 0x10);
    if (uVar3 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) ||
        uVar3 - (*(long *)(this_00 + 0x18) - (long)puVar2) == 0) {
      *(undefined8 **)(this_00 + 0x10) = puVar2 + param_1;
    }
    else {
      puVar2 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,uVar3);
    }
    uVar3 = param_1 - 1;
    *(undefined8 **)this = puVar2;
    *(ulong *)(this + 8) = param_1;
    *puVar2 = 0;
    if (uVar3 != 0) {
      uVar4 = 1;
      do {
        *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (param_1 != uVar4);
    }
    plVar5 = *(long **)(this + 0x18);
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar11 = CONCAT17(POPCOUNT((char)(param_1 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_1 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_1 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_1 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_1 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_1 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_1 >> 8)),POPCOUNT((char)param_1))))))));
      uVar10 = NEON_uaddlv(uVar11,1);
      uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
      if (uVar6 < 2) {
        uVar4 = uVar4 & uVar3;
      }
      else if (param_1 <= uVar4) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar8 * param_1;
      }
      *(__hash_table<v8::internal::compiler::Node*,v8::internal::compiler::NodeHashCache::NodeHashCode,v8::internal::compiler::NodeHashCache::NodeEquals,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
        **)(*(long *)this + uVar4 * 8) = this + 0x18;
      for (plVar7 = (long *)*plVar5; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        while( true ) {
          uVar8 = plVar7[1];
          if (uVar6 < 2) {
            uVar8 = uVar8 & uVar3;
          }
          else if (param_1 <= uVar8) {
            uVar1 = 0;
            if (param_1 != 0) {
              uVar1 = uVar8 / param_1;
            }
            uVar8 = uVar8 - uVar1 * param_1;
          }
          if (uVar8 == uVar4) break;
          if (*(long *)(*(long *)this + uVar8 * 8) == 0) {
            *(long **)(*(long *)this + uVar8 * 8) = plVar5;
            plVar9 = (long *)*plVar7;
            plVar5 = plVar7;
            uVar4 = uVar8;
          }
          else {
            plVar9 = plVar7;
            if (*plVar7 != 0) {
              uVar1 = v8::internal::compiler::NodeProperties::Equals
                                ((Node *)plVar7[2],*(Node **)(*plVar7 + 0x10));
              while ((uVar1 & 1) != 0) {
                plVar9 = (long *)*plVar9;
                if (*plVar9 == 0) break;
                uVar1 = v8::internal::compiler::NodeProperties::Equals
                                  ((Node *)plVar7[2],*(Node **)(*plVar9 + 0x10));
              }
            }
            *plVar5 = *plVar9;
            *plVar9 = **(long **)(*(long *)this + uVar8 * 8);
            **(undefined8 **)(*(long *)this + uVar8 * 8) = plVar7;
            plVar9 = (long *)*plVar5;
          }
          plVar7 = plVar9;
          if (plVar7 == (long *)0x0) {
            return;
          }
        }
        plVar5 = plVar7;
      }
    }
  }
  return;
}

