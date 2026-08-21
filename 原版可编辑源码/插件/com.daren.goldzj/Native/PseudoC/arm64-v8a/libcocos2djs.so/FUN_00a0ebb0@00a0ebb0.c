
void FUN_00a0ebb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
                    /* try { // try from 00a0ebb0 to 00b0ebb7 has its CatchHandler @ 00a0ee14 */
                    /* try { // try from 00a0ebbc to 00b0ebc3 has its CatchHandler @ 00a0ee0c */
                    /* try { // try from 00a0ebd4 to 00b0ebf7 has its CatchHandler @ 00a0ee1c */
  puStack_50 = auStack_a0;
  ppuStack_58 = &local_60;
  uStack_48 = 0xffffff80ffffffc8;
                    /* try { // try from 00a0ec18 to 00b0ec1f has its CatchHandler @ 00a0eda8 */
                    /* try { // try from 00a0ec20 to 00b0ec33 has its CatchHandler @ 00a0ed9c */
  local_98 = param_2;
  uStack_90 = param_3;
  local_88 = param_4;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  local_60 = (undefined1 *)register0x00000008;
  FUN_00a0d414(waitpid,fputc,param_1,&local_60);
                    /* try { // try from 00a0ec40 to 00b0ec63 has its CatchHandler @ 00a0ee1c */
  return;
}

