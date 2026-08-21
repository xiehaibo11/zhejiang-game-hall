
/* v8::internal::Map::EquivalentToForTransition(v8::internal::Map) const */

uint __thiscall v8::internal::Map::EquivalentToForTransition(Map *this,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_18;
  
  uVar4 = *(ulong *)this;
  local_18 = uVar4 & 0xffffffff00000000;
  uVar6 = local_18 | *(uint *)(uVar4 + 0x13);
  if ((*(uint *)(uVar4 + 0x13) & 1) != 0) {
    do {
      if (*(short *)((local_18 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar6 + 0x13);
      uVar6 = local_18 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  uVar5 = param_2 & 0xffffffff00000000;
  uVar7 = uVar5 | *(uint *)(param_2 + 0x13);
  if ((*(uint *)(param_2 + 0x13) & 1) != 0) {
    do {
      if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar7 + 0x13);
      uVar7 = uVar5 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  if ((int)uVar6 != (int)uVar7) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","GetConstructor() == other.GetConstructor()");
  }
  if (*(short *)(uVar4 + 7) == *(short *)(param_2 + 7)) {
    if (((*(char *)(uVar4 + 9) == *(char *)(param_2 + 9)) &&
        (((*(byte *)(uVar4 + 10) ^ *(byte *)(param_2 + 10)) & 1) == 0)) &&
       (*(int *)(uVar4 + 0xf) == *(int *)(param_2 + 0xf))) {
      if (*(short *)(uVar4 + 7) == 0x439) {
        uVar3 = *(uint *)(uVar4 + 0xb) >> 10 & 0x3ff;
        uVar2 = *(uint *)(param_2 + 0xb) >> 10 & 0x3ff;
        local_18 = local_18 | *(uint *)(uVar4 + 0x17);
        if (uVar2 <= uVar3) {
          uVar3 = uVar2;
        }
        uVar3 = DescriptorArray::IsEqualUpTo
                          ((DescriptorArray *)&local_18,uVar5 | *(uint *)(param_2 + 0x17),uVar3);
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","instance_type() == other.instance_type()");
}

