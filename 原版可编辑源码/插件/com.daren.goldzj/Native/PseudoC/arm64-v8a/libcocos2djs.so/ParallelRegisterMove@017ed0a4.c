
/* v8::internal::wasm::LiftoffAssembler::ParallelRegisterMove(v8::internal::Vector<v8::internal::wasm::LiftoffAssembler::ParallelRegisterMoveTuple>)
    */

void v8::internal::wasm::LiftoffAssembler::ParallelRegisterMove
               (undefined8 param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 uStack_380;
  int local_130 [60];
  ulong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  local_130[0x39] = 0;
  local_130[0x3a] = 0;
  local_130[0x38] = 0;
  uStack_38 = 0;
  local_40 = 0;
  local_130[0x32] = 0;
  local_130[0x33] = 0;
  local_130[0x30] = 0;
  local_130[0x31] = 0;
  local_130[0x36] = 0;
  local_130[0x37] = 0;
  local_130[0x34] = 0;
  local_130[0x35] = 0;
  local_130[0x2a] = 0;
  local_130[0x2b] = 0;
  local_130[0x28] = 0;
  local_130[0x29] = 0;
  local_130[0x2e] = 0;
  local_130[0x2f] = 0;
  local_130[0x2c] = 0;
  local_130[0x2d] = 0;
  local_130[0x22] = 0;
  local_130[0x23] = 0;
  local_130[0x20] = 0;
  local_130[0x21] = 0;
  local_130[0x26] = 0;
  local_130[0x27] = 0;
  local_130[0x24] = 0;
  local_130[0x25] = 0;
  local_130[0x1a] = 0;
  local_130[0x1b] = 0;
  local_130[0x18] = 0;
  local_130[0x19] = 0;
  local_130[0x1e] = 0;
  local_130[0x1f] = 0;
  local_130[0x1c] = 0;
  local_130[0x1d] = 0;
  local_130[0x12] = 0;
  local_130[0x13] = 0;
  local_130[0x10] = 0;
  local_130[0x11] = 0;
  local_130[0x16] = 0;
  local_130[0x17] = 0;
  local_130[0x14] = 0;
  local_130[0x15] = 0;
  local_130[10] = 0;
  local_130[0xb] = 0;
  local_130[8] = 0;
  local_130[9] = 0;
  local_130[0xe] = 0;
  local_130[0xf] = 0;
  local_130[0xc] = 0;
  local_130[0xd] = 0;
  local_130[2] = 0;
  local_130[3] = 0;
  local_130[0] = 0;
  local_130[1] = 0;
  local_130[6] = 0;
  local_130[7] = 0;
  local_130[4] = 0;
  local_130[5] = 0;
  local_30 = param_1;
  if (param_3 != 0) {
    pbVar1 = param_2 + param_3 * 3;
    do {
      uVar5 = (ulong)*param_2;
      bVar2 = param_2[1];
      if (*param_2 != bVar2) {
        bVar3 = param_2[2];
        uVar6 = 1L << (uVar5 & 0x3f);
        if ((local_40 & uVar6) == 0) {
          local_40 = local_40 | uVar6;
          local_130[bVar2] = local_130[bVar2] + 1;
          (&uStack_380)[uVar5] = CONCAT11(bVar3,bVar2);
        }
        else if (bVar3 == 4) {
          *(undefined1 *)((long)&uStack_380 + uVar5 * 2 + 1) = 4;
        }
      }
      param_2 = param_2 + 3;
    } while (param_2 != pbVar1);
  }
  FUN_017ecb7c(&uStack_380);
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

