
undefined8 FUN_010aab1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  memset((void *)(param_1 + 0x20),0,0x70);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(code **)(param_1 + 0x90) = FUN_010ab584;
  *(code **)(param_1 + 0x98) = FUN_010aa678;
  *(long *)(param_1 + 0xe0) = param_1 + 0x18;
  *(code **)(param_1 + 0xe8) = FUN_010ac8b0;
  *(code **)(param_1 + 0xf0) = FUN_010abcb8;
  *(code **)(param_1 + 0xf8) = FUN_010ac8d8;
  *(code **)(param_1 + 0xa0) = FUN_010ab888;
  *(long *)(param_1 + 0xa8) = param_1 + 0x18;
  *(code **)(param_1 + 0xb0) = FUN_010abc90;
  *(code **)(param_1 + 0xb8) = FUN_010abcb8;
  *(code **)(param_1 + 0xd0) = FUN_010ac1a8;
  *(code **)(param_1 + 0xd8) = ps_hints_apply;
  *(code **)(param_1 + 0x100) = FUN_010aca88;
  *(code **)(param_1 + 0x108) = FUN_010acb20;
  *(code **)(param_1 + 200) = FUN_010abdac;
  *(code **)(param_1 + 0xc0) = FUN_010abd1c;
  *(code **)(param_1 + 0x110) = ps_hints_apply;
                    /* catch() { ... } // from try @ 010aac24 with catch @ 010aabe8 */
  return 0;
}

