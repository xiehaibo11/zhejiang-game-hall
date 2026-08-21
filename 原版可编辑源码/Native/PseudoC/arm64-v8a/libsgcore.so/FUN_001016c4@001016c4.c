
ulong FUN_001016c4(long *param_1,char *param_2,ulong param_3,undefined8 param_4,char *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined1 **ppuVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_1e0 [8];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 *local_1c0;
  undefined1 **ppuStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *local_1a0;
  undefined1 **ppuStack_198;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  undefined1 *local_180;
  undefined1 **ppuStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined1 *local_160;
  undefined1 **ppuStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined1 *local_140;
  undefined1 **ppuStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined1 *local_120;
  undefined1 **ppuStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 *local_100;
  undefined1 **ppuStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined1 **ppuStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 **ppuStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  local_1d8 = param_6;
  local_1d0 = param_7;
  uStack_1c8 = param_8;
  iVar3 = (**(code **)(*param_1 + 0xd0))(param_1,1);
  if ((iVar3 != 0) ||
     (lVar4 = (**(code **)(*param_1 + 0x388))(param_1,param_3,param_4,param_5), lVar4 == 0)) {
    uVar9 = 0;
    uVar11 = 0;
    uVar12 = 0;
    if (param_2 == (char *)0x0) goto LAB_001019bc;
    goto LAB_00101990;
  }
  do {
    pcVar10 = param_5 + 1;
    cVar2 = *param_5;
    param_5 = pcVar10;
  } while (cVar2 != ')');
  switch(*pcVar10) {
  case 'B':
    ppuVar6 = &local_100;
    pcVar8 = *(code **)(*param_1 + 0x3c8);
    uStack_e8 = 0xffffff80ffffffe8;
    local_100 = (undefined1 *)register0x00000008;
    ppuStack_f8 = &local_1c0;
    puStack_f0 = auStack_1e0;
    goto LAB_001018b8;
  case 'C':
    ppuVar6 = &local_120;
    pcVar8 = *(code **)(*param_1 + 0x3e0);
    uStack_108 = 0xffffff80ffffffe8;
    local_120 = (undefined1 *)register0x00000008;
    ppuStack_118 = &local_1c0;
    puStack_110 = auStack_1e0;
    goto LAB_001018ec;
  case 'D':
    uStack_1a8 = 0xffffff80ffffffe8;
    local_1c0 = (undefined1 *)register0x00000008;
    ppuStack_1b8 = &local_1c0;
    puStack_1b0 = auStack_1e0;
    param_3 = (**(code **)(*param_1 + 0x458))(param_1,param_3,lVar4,&local_1c0);
    uVar12 = (uint)param_3 & 0xffffff00;
    uVar11 = (uint)param_3 & 0xffff0000;
    uVar9 = param_3 & 0xffffffff00000000;
    break;
  default:
    (**(code **)(*param_1 + 0x90))(param_1,"illegaldescriptor");
    goto LAB_0010197c;
  case 'F':
    uStack_188 = 0xffffff80ffffffe8;
    local_1a0 = (undefined1 *)register0x00000008;
    ppuStack_198 = &local_1c0;
    puStack_190 = auStack_1e0;
    uVar5 = (**(code **)(*param_1 + 0x440))(param_1,param_3,lVar4,&local_1a0);
    param_3 = uVar5 & 0xffffffff;
    uVar9 = 0;
    uVar12 = (uint)uVar5 & 0xffffff00;
    uVar11 = (uint)uVar5 & 0xffff0000;
    break;
  case 'I':
    uStack_148 = 0xffffff80ffffffe8;
    local_160 = (undefined1 *)register0x00000008;
    ppuStack_158 = &local_1c0;
    puStack_150 = auStack_1e0;
    uVar5 = (**(code **)(*param_1 + 0x410))(param_1,param_3,lVar4,&local_160);
    param_3 = uVar5 & 0xffffffff;
    uVar9 = 0;
    uVar12 = (uint)uVar5 & 0xffffff00;
    uVar11 = (uint)uVar5 & 0xffff0000;
    break;
  case 'J':
    ppuVar6 = &local_180;
    pcVar8 = *(code **)(*param_1 + 0x428);
    uStack_168 = 0xffffff80ffffffe8;
    local_180 = (undefined1 *)register0x00000008;
    ppuStack_178 = &local_1c0;
    puStack_170 = auStack_1e0;
    goto LAB_00101854;
  case 'L':
  case '[':
    ppuVar6 = &local_c0;
    pcVar8 = *(code **)(*param_1 + 0x398);
    uStack_a8 = 0xffffff80ffffffe8;
    local_c0 = (undefined1 *)register0x00000008;
    ppuStack_b8 = &local_1c0;
    puStack_b0 = auStack_1e0;
LAB_00101854:
    param_3 = (*pcVar8)(param_1,param_3,lVar4,ppuVar6);
    uVar12 = (uint)param_3 & 0xffffff00;
    uVar11 = (uint)param_3 & 0xffff0000;
    uVar9 = param_3 & 0xffffffff00000000;
    break;
  case 'S':
    ppuVar6 = &local_140;
    pcVar8 = *(code **)(*param_1 + 0x3f8);
    uStack_128 = 0xffffff80ffffffe8;
    local_140 = (undefined1 *)register0x00000008;
    ppuStack_138 = &local_1c0;
    puStack_130 = auStack_1e0;
LAB_001018ec:
    uVar5 = (*pcVar8)(param_1,param_3,lVar4,ppuVar6);
    param_3 = uVar5 & 0xffffffff;
    uVar9 = 0;
    uVar11 = 0;
    uVar12 = (uint)uVar5 & 0xffffff00;
    break;
  case 'V':
    uStack_88 = 0xffffff80ffffffe8;
    local_a0 = (undefined1 *)register0x00000008;
    ppuStack_98 = &local_1c0;
    puStack_90 = auStack_1e0;
    (**(code **)(*param_1 + 0x470))(param_1,param_3,lVar4,&local_a0);
LAB_0010197c:
    uVar9 = 0;
    uVar11 = 0;
    uVar12 = 0;
    break;
  case 'Z':
    ppuVar6 = &local_e0;
    pcVar8 = *(code **)(*param_1 + 0x3b0);
    uStack_c8 = 0xffffff80ffffffe8;
    local_e0 = (undefined1 *)register0x00000008;
    ppuStack_d8 = &local_1c0;
    puStack_d0 = auStack_1e0;
LAB_001018b8:
    param_3 = (*pcVar8)(param_1,param_3,lVar4,ppuVar6);
    param_3 = param_3 & 0xffffffff;
    uVar9 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  uVar12 = uVar12 & 0xffff;
  if (param_2 != (char *)0x0) {
LAB_00101990:
    cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
    *param_2 = cVar2;
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x88))(param_1);
    }
  }
LAB_001019bc:
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return uVar9 | (uVar11 | (uint)param_3 & 0xff | uVar12);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

