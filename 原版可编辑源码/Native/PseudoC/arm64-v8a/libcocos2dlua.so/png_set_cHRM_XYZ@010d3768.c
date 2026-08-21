
void png_set_cHRM_XYZ(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,
                     undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,
                     undefined8 param_8,long param_9,long param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 in_stack_00000000;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  
                    /* try { // try from 010d37ac to 011d37bb has its CatchHandler @ 010d421c */
                    /* try { // try from 010d37bc to 011d386b has its CatchHandler @ 010d35bc */
  uVar1 = png_fixed(param_9,"cHRM Red X");
  uVar2 = png_fixed(param_2,param_9,"cHRM Red Y");
  uVar3 = png_fixed(param_3,param_9,"cHRM Red Z");
  uVar4 = png_fixed(param_4,param_9,"cHRM Red X");
  uVar5 = png_fixed(param_5,param_9,"cHRM Red Y");
  uVar6 = png_fixed(param_6,param_9,"cHRM Red Z");
  uVar7 = png_fixed(param_7,param_9,"cHRM Red X");
  uVar8 = png_fixed(param_8,param_9,"cHRM Red Y");
                    /* try { // try from 010d386c to 011d3873 has its CatchHandler @ 010d420c */
  local_a8 = png_fixed(in_stack_00000000,param_9,"cHRM Red Z");
  if ((param_9 != 0) && (param_10 != 0)) {
                    /* try { // try from 010d3890 to 011d389b has its CatchHandler @ 010d41e0 */
    local_c8 = uVar1;
    uStack_c4 = uVar2;
    local_c0 = uVar3;
    uStack_bc = uVar4;
    local_b8 = uVar5;
    uStack_b4 = uVar6;
    local_b0 = uVar7;
    uStack_ac = uVar8;
    iVar9 = png_colorspace_set_endpoints(param_9,param_10 + 0x34,&local_c8,2);
    if (iVar9 != 0) {
      *(ushort *)(param_10 + 0x7e) = *(ushort *)(param_10 + 0x7e) | 0x10;
    }
    png_colorspace_sync_info(param_9,param_10);
  }
                    /* try { // try from 010d38d8 to 011d38df has its CatchHandler @ 010d41d0 */
                    /* try { // try from 010d38f8 to 011d3903 has its CatchHandler @ 010d41a0 */
  return;
}

