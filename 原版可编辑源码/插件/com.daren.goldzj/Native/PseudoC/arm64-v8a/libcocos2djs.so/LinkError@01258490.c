
/* v8::internal::wasm::ErrorThrower::LinkError(char const*, ...) */

void v8::internal::wasm::ErrorThrower::LinkError(char *param_1,...)

{
  undefined8 in_x1;
  ulong uVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puStack_80 = &local_c0;
  ppuStack_88 = &local_90;
  uStack_78 = 0xffffff80ffffffd0;
  if (*(int *)(param_1 + 0x10) == 0) {
    local_c0 = in_x2;
    uStack_b8 = in_x3;
    local_b0 = in_x4;
    uStack_a8 = in_x5;
    local_a0 = in_x6;
    uStack_98 = in_x7;
    local_90 = (undefined1 *)register0x00000008;
    if (*(long *)(param_1 + 8) == 0) {
      uVar1 = 0;
    }
    else {
      FUN_012581b8(param_1 + 0x18);
      if ((param_1[0x18] & 1U) == 0) {
        uVar1 = (ulong)((byte)param_1[0x18] >> 1);
      }
      else {
        uVar1 = *(ulong *)(param_1 + 0x20);
      }
    }
    ppuStack_48 = ppuStack_88;
    local_50 = local_90;
    uStack_38 = uStack_78;
    puStack_40 = puStack_80;
    FUN_01257fe0(param_1 + 0x18,uVar1,in_x1,&local_50);
    param_1[0x10] = '\x04';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
  }
  return;
}

