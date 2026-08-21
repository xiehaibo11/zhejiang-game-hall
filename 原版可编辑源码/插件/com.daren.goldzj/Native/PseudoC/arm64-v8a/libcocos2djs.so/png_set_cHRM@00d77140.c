
void png_set_cHRM(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  
  uVar1 = png_fixed(param_9,"cHRM White X");
  uVar2 = png_fixed(param_2,param_9,"cHRM White Y");
  uVar3 = png_fixed(param_3,param_9,"cHRM Red X");
  uVar4 = png_fixed(param_4,param_9,"cHRM Red Y");
  uVar5 = png_fixed(param_5,param_9,"cHRM Green X");
  uVar6 = png_fixed(param_6,param_9,"cHRM Green Y");
  uVar7 = png_fixed(param_7,param_9,"cHRM Blue X");
  uStack_9c = png_fixed(param_8,param_9,"cHRM Blue Y");
  if ((param_9 != 0) && (param_10 != 0)) {
    local_b0 = uVar3;
    uStack_ac = uVar4;
    local_a8 = uVar5;
    uStack_a4 = uVar6;
    local_a0 = uVar7;
    local_98 = uVar1;
    uStack_94 = uVar2;
    iVar8 = png_colorspace_set_chromaticities(param_9,param_10 + 0x34,&local_b0,2);
    if (iVar8 != 0) {
      *(ushort *)(param_10 + 0x7e) = *(ushort *)(param_10 + 0x7e) | 0x10;
    }
    png_colorspace_sync_info(param_9,param_10);
  }
  return;
}

