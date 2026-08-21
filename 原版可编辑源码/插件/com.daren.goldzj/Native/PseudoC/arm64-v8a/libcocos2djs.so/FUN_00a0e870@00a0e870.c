
long FUN_00a0e870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  long local_50;
  int local_48;
  
                    /* try { // try from 00a0e878 to 00b0e87f has its CatchHandler @ 00a0eb08 */
                    /* try { // try from 00a0e880 to 00b0e893 has its CatchHandler @ 00a0eb0c */
  puStack_70 = auStack_c0;
  ppuStack_78 = &local_80;
                    /* try { // try from 00a0e8a0 to 00b0e8a7 has its CatchHandler @ 00a0eb10 */
                    /* try { // try from 00a0e8a8 to 00b0e8b7 has its CatchHandler @ 00a0eb14 */
  uStack_68 = 0xffffff80ffffffc8;
                    /* try { // try from 00a0e8c4 to 00b0e8cb has its CatchHandler @ 00a0eb18 */
                    /* try { // try from 00a0e8cc to 00b0e8db has its CatchHandler @ 00a0eb1c */
  local_48 = 0;
                    /* try { // try from 00a0e8e8 to 00b0e8ef has its CatchHandler @ 00a0eb20 */
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  local_b8 = param_2;
  local_b0 = param_3;
  uStack_a8 = param_4;
  local_a0 = param_5;
  uStack_98 = param_6;
  local_90 = param_7;
  uStack_88 = param_8;
  local_80 = (undefined1 *)register0x00000008;
                    /* try { // try from 00a0e8f0 to 00b0e8ff has its CatchHandler @ 00a0eb24 */
  iVar1 = FUN_00a0d414(&local_60,FUN_00a0e968,param_1,&local_80);
  if ((iVar1 == -1) || (local_48 != 0)) {
                    /* try { // try from 00a0e920 to 00b0e92f has its CatchHandler @ 00a0eb2c */
    if (local_50 != 0) {
      (*(code *)PTR_free_01d1b748)(local_60);
    }
    local_60 = 0;
  }
  else if (local_50 == 0) {
    local_60 = (*(code *)PTR_strdup_01d1b758)(&DAT_0189703a);
  }
  else {
                    /* try { // try from 00a0e910 to 00b0e91f has its CatchHandler @ 00a0eb28 */
    *(undefined1 *)(local_60 + local_58) = 0;
  }
                    /* try { // try from 00a0e958 to 00b0e963 has its CatchHandler @ 00a0ea80 */
  return local_60;
}

