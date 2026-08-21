
/* v8::internal::Map::DictionaryElementsInPrototypeChainOnly(v8::internal::Isolate*) */

void __thiscall
v8::internal::Map::DictionaryElementsInPrototypeChainOnly(Map *this,Isolate *param_1)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  Isolate *local_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  bool local_34;
  undefined4 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar5 = *(ulong *)this;
  if ((*(byte *)(uVar5 + 10) & 0xf8) == 0x60) {
LAB_010ed138:
    uVar4 = 0;
  }
  else {
    if (*(ushort *)(uVar5 + 7) < 0xa9) {
      if (*(byte *)(uVar5 + 4) == 0) {
        uVar5 = *(ulong *)(param_1 + 0xb0) & 0xffffffff00000000 |
                (ulong)*(uint *)(*(ulong *)(param_1 + 0xb0) - 1);
      }
      else {
        uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar5 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *
                                                  )(param_1 + 0x2bc8) - 1)) + 0x13)) +
                                                  (ulong)*(byte *)(uVar5 + 4) * 4 + 7)) + 0x1b);
      }
    }
    uVar1 = *(uint *)(uVar5 + 0xf);
    uVar5 = uVar5 & 0xffffffff00000000;
    local_38 = 0;
    local_48 = uVar5 | uVar1;
    uStack_40 = 0;
    local_50 = param_1;
    if ((uVar1 & 1) == 0) {
      local_34 = false;
    }
    else {
      local_30 = 0;
      local_34 = uVar1 == *(uint *)(param_1 + 0xb0);
      if (local_34) goto LAB_010ed138;
    }
    local_30 = 0;
    uVar6 = uVar5 | 7;
    sVar2 = *(short *)(uVar6 + *(uint *)(local_48 - 1));
    while ((((sVar2 != 0xa9 &&
             (((*(short *)(uVar6 + *(uint *)(local_48 - 1)) != 0x411 ||
               ((*(uint *)(local_48 + 0xb) & 1) == 0)) ||
              (0x3f < *(ushort *)(uVar6 + *(uint *)((uVar5 | *(uint *)(local_48 + 0xb)) - 1)))))) &&
            (((*(byte *)((uVar5 | 10) + (ulong)*(uint *)(local_48 - 1)) & 0xf8) != 0x60 ||
             ((*(uint *)((uVar5 | *(uint *)(local_48 + 7)) + 0x13) & 3) != 2)))) &&
           (((*(byte *)((uVar5 | 10) + (ulong)*(uint *)(local_48 - 1)) & 0xf8) != 0x70 ||
            ((*(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(local_48 + 7)) + 0xb)) + 0x13) & 3) !=
             2))))) {
      PrototypeIterator::Advance((PrototypeIterator *)&local_50);
      if (local_34 != false) goto LAB_010ed138;
      uVar5 = local_48 & 0xffffffff00000000;
      uVar6 = uVar5 | 7;
      sVar2 = *(short *)(uVar6 + *(uint *)(local_48 - 1));
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

