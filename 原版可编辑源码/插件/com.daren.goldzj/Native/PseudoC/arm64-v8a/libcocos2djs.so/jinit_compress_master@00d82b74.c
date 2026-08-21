
void jinit_compress_master(long *param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  lVar1 = param_1[0xb];
  if ((int)lVar1 != 8) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x10;
    *(int *)((long)puVar5 + 0x2c) = (int)lVar1;
    (*(code *)*puVar5)(param_1);
  }
  if (((*(int *)((long)param_1 + 0x34) == 0) || (uVar3 = *(uint *)(param_1 + 6), uVar3 == 0)) ||
     (iVar4 = (int)param_1[7], iVar4 < 1)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x21;
    (*(code *)*puVar5)(param_1);
    uVar3 = *(uint *)(param_1 + 6);
    iVar4 = (int)param_1[7];
  }
  if (((long)iVar4 * (ulong)uVar3 & 0xffffffff00000000) != 0) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x48;
    (*(code *)*puVar5)(param_1);
  }
  jinit_c_master_control(param_1,0);
  if ((int)param_1[0x24] == 0) {
    jinit_color_converter(param_1);
    jinit_downsampler(param_1);
    jinit_c_prep_controller(param_1,0);
  }
  jinit_forward_dct(param_1);
  if (*(int *)((long)param_1 + 0x124) == 0) {
    jinit_huff_encoder(param_1);
  }
  else {
    jinit_arith_encoder(param_1);
  }
  if ((int)param_1[0x22] < 2) {
    bVar2 = (int)param_1[0x25] != 0;
  }
  else {
    bVar2 = true;
  }
  jinit_c_coef_controller(param_1,bVar2);
  jinit_c_main_controller(param_1,0);
  jinit_marker_writer(param_1);
  (**(code **)(param_1[1] + 0x30))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00d82cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1[0x42])(param_1);
  return;
}

