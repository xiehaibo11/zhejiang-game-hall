
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WsThreadHelper::wsThreadEntryFunc() */

void __thiscall WsThreadHelper::wsThreadEntryFunc(WsThreadHelper *this)

{
  WsThreadHelper WVar1;
  long lVar2;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
                    /* try { // try from 009e9880 to 00ae988f has its CatchHandler @ 009ead00 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009e9890 to 00ae98a3 has its CatchHandler @ 009eacf0 */
  lws_set_log_level(0x38f,FUN_009e9fb0);
  DAT_01d38810 = &DAT_0189703a;
  DAT_01d38818 = WebSocketCallbackWrapper::onSocketCallback;
  _DAT_01d38820 = 0;
  uRam0000000001d38838 = 0;
  DAT_01d38828 = 0x10000;
  uRam0000000001d38868 = 0;
  _DAT_01d38860 = 0;
  uRam0000000001d38878 = 0;
  _DAT_01d38870 = 0;
  uRam0000000001d38848 = 0;
  _DAT_01d38840 = 0;
  uRam0000000001d38858 = 0;
  _DAT_01d38850 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  _DAT_01d38830 = 0xffffffff;
  local_200 = 0xffffffff;
                    /* try { // try from 009e9920 to 00ae992b has its CatchHandler @ 009eace8 */
  local_1f0 = &DAT_01d38810;
  local_1a4 = 0xffffffff;
  uStack_1a0 = 0xffffffff;
  uStack_19c = 0x3000;
  uStack_198 = 0;
  DAT_01d38800 = lws_create_context(&local_200);
  WVar1 = this[0x38];
  while (WVar1 == (WsThreadHelper)0x0) {
    onSubThreadLoop();
    WVar1 = this[0x38];
  }
  if (DAT_01d38800 != 0) {
    lws_context_destroy();
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

