
undefined8 luaopen_pb_conv(undefined8 param_1)

{
  long lVar1;
  char *local_100;
  code *pcStack_f8;
  char *local_f0;
  code *pcStack_e8;
  char *pcStack_e0;
  code *pcStack_d8;
  char *local_d0;
  code *pcStack_c8;
  char *pcStack_c0;
  code *pcStack_b8;
  char *local_b0;
  code *pcStack_a8;
  char *pcStack_a0;
  code *pcStack_98;
  char *local_90;
  code *pcStack_88;
  char *pcStack_80;
  code *pcStack_78;
  char *local_70;
  code *pcStack_68;
  char *pcStack_60;
  code *pcStack_58;
  char *local_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_68 = FUN_009f6e14;
  local_70 = "decode_double";
  pcStack_58 = FUN_009f6edc;
  pcStack_60 = "encode_float";
  pcStack_48 = FUN_009f6ff8;
  local_50 = "encode_double";
  uStack_38 = 0;
  uStack_40 = 0;
  pcStack_a8 = FUN_009f6850;
  local_b0 = "encode_sint64";
  pcStack_98 = FUN_009f69f4;
  pcStack_a0 = "decode_sint32";
  pcStack_88 = FUN_009f6ba0;
  local_90 = "decode_sint64";
  pcStack_78 = FUN_009f6d48;
  pcStack_80 = "decode_float";
  pcStack_f8 = FUN_009f6398;
  local_100 = "decode_uint32";
  pcStack_e8 = FUN_009f6520;
  local_f0 = "decode_int32";
  pcStack_d8 = FUN_009f6520;
  pcStack_e0 = "encode_int32";
  pcStack_c8 = FUN_009f6398;
  local_d0 = "encode_uint32";
  pcStack_b8 = FUN_009f66d0;
  pcStack_c0 = "encode_sint32";
  lua_createtable(param_1,0,0);
  luaL_register(param_1,0,&local_100);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

