
void blowfish_key_setup(long param_1,undefined8 *param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_40;
  long local_38;
  
  lVar7 = tpidr_el0;
  local_38 = *(long *)(lVar7 + 0x28);
  param_2[8] = 0x8979fb1b9216d5d9;
  param_2[5] = 0x34e90c6cbe5466cf;
  param_2[4] = 0x38d01377452821e6;
  param_2[7] = 0xb54709173f84d5b5;
  param_2[6] = 0xc97c50ddc0ac29b7;
  param_2[1] = 0x370734413198a2e;
  *param_2 = 0x85a308d3243f6a88;
  param_2[3] = 0xec4e6c89082efa98;
  param_2[2] = 0x299f31d0a4093822;
  memcpy(param_2 + 9,&DAT_0141c42c,0x1000);
  uVar8 = 0;
  do {
    uVar3 = 0;
    if (param_3 != 0) {
      uVar3 = uVar8 / param_3;
    }
    uVar4 = 0;
    if (param_3 != 0) {
      uVar4 = (uVar8 + 1) / param_3;
    }
    uVar5 = 0;
    if (param_3 != 0) {
      uVar5 = (uVar8 + 2) / param_3;
    }
    uVar6 = 0;
    if (param_3 != 0) {
      uVar6 = (uVar8 + 3) / param_3;
    }
    *(uint *)((long)param_2 + uVar8) =
         ((uint)*(byte *)(param_1 + (uVar8 - uVar3 * param_3)) << 0x18 |
          (uint)*(byte *)(param_1 + ((uVar8 + 1) - uVar4 * param_3)) << 0x10 |
          (uint)*(byte *)(param_1 + ((uVar8 + 2) - uVar5 * param_3)) << 8 |
         (uint)*(byte *)(param_1 + ((uVar8 + 3) - uVar6 * param_3))) ^
         *(uint *)((long)param_2 + uVar8);
    uVar8 = uVar8 + 4;
  } while (uVar8 != 0x48);
  uVar8 = 0;
  local_40 = 0;
  do {
    blowfish_encrypt(&local_40,&local_40,param_2);
    puVar1 = (uint *)((long)param_2 + uVar8 * 4);
    uVar8 = uVar8 + 2;
    uVar2 = ((uint)local_40 & 0xff00ff00) >> 8 | ((uint)local_40 & 0xff00ff) << 8;
    *puVar1 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_40._4_4_ & 0xff00ff00) >> 8 | (local_40._4_4_ & 0xff00ff) << 8;
    puVar1[1] = uVar2 >> 0x10 | uVar2 << 0x10;
  } while (uVar8 < 0x12);
  uVar8 = 0;
  do {
    blowfish_encrypt(&local_40,&local_40,param_2);
    uVar3 = uVar8 + 2;
    uVar2 = ((uint)local_40 & 0xff00ff00) >> 8 | ((uint)local_40 & 0xff00ff) << 8;
    *(uint *)((long)param_2 + uVar8 * 4 + 0x48) = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_40._4_4_ & 0xff00ff00) >> 8 | (local_40._4_4_ & 0xff00ff) << 8;
    *(uint *)((long)param_2 + uVar8 * 4 + 0x4c) = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar8 = uVar3;
  } while (uVar3 < 0x100);
  uVar8 = 0;
  do {
    blowfish_encrypt(&local_40,&local_40,param_2);
    uVar3 = uVar8 + 2;
    uVar2 = ((uint)local_40 & 0xff00ff00) >> 8 | ((uint)local_40 & 0xff00ff) << 8;
    *(uint *)((long)param_2 + uVar8 * 4 + 0x448) = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_40._4_4_ & 0xff00ff00) >> 8 | (local_40._4_4_ & 0xff00ff) << 8;
    *(uint *)((long)param_2 + uVar8 * 4 + 0x44c) = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar8 = uVar3;
  } while (uVar3 < 0x100);
  uVar8 = 0;
  do {
    blowfish_encrypt(&local_40,&local_40,param_2);
    uVar3 = uVar8 + 2;
    uVar2 = ((uint)local_40 & 0xff00ff00) >> 8 | ((uint)local_40 & 0xff00ff) << 8;
    *(uint *)((long)param_2 + uVar8 * 4 + 0x848) = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_40._4_4_ & 0xff00ff00) >> 8 | (local_40._4_4_ & 0xff00ff) << 8;
    *(uint *)((long)param_2 + uVar8 * 4 + 0x84c) = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar8 = uVar3;
  } while (uVar3 < 0x100);
  uVar8 = 0;
  do {
    blowfish_encrypt(&local_40,&local_40,param_2);
    uVar3 = uVar8 + 2;
    uVar2 = ((uint)local_40 & 0xff00ff00) >> 8 | ((uint)local_40 & 0xff00ff) << 8;
    *(uint *)((long)param_2 + uVar8 * 4 + 0xc48) = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_40._4_4_ & 0xff00ff00) >> 8 | (local_40._4_4_ & 0xff00ff) << 8;
    *(uint *)((long)param_2 + uVar8 * 4 + 0xc4c) = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar8 = uVar3;
  } while (uVar3 < 0x100);
  if (*(long *)(lVar7 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

