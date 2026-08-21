
ulong FUN_001010fc(long *param_1,char *param_2,ulong param_3,undefined8 param_4,char *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 **ppuVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
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
  lVar8 = *(long *)(lVar1 + 0x28);
  local_1d8 = param_6;
  local_1d0 = param_7;
  uStack_1c8 = param_8;
  iVar3 = (**(code **)(*param_1 + 0xd0))(param_1,2);
  if (iVar3 != 0) {
    uVar10 = 0;
    uVar13 = 0;
    uVar12 = 0;
    if (param_2 == (char *)0x0) goto LAB_0010141c;
    goto LAB_001013f0;
  }
  uVar4 = (**(code **)(*param_1 + 0xf8))(param_1,param_3);
  lVar5 = (**(code **)(*param_1 + 0x108))(param_1,uVar4,param_4,param_5);
  if (lVar5 == 0) goto LAB_001013cc;
  do {
    pcVar11 = param_5 + 1;
    cVar2 = *param_5;
    param_5 = pcVar11;
  } while (cVar2 != ')');
  switch(*pcVar11) {
  case 'B':
    ppuVar7 = &local_100;
    pcVar9 = *(code **)(*param_1 + 0x148);
    uStack_e8 = 0xffffff80ffffffe8;
    local_100 = (undefined1 *)register0x00000008;
    ppuStack_f8 = &local_1c0;
    puStack_f0 = auStack_1e0;
    goto LAB_00101308;
  case 'C':
    ppuVar7 = &local_120;
    pcVar9 = *(code **)(*param_1 + 0x160);
    uStack_108 = 0xffffff80ffffffe8;
    local_120 = (undefined1 *)register0x00000008;
    ppuStack_118 = &local_1c0;
    puStack_110 = auStack_1e0;
    goto LAB_0010133c;
  case 'D':
    uStack_1a8 = 0xffffff80ffffffe8;
    local_1c0 = (undefined1 *)register0x00000008;
    ppuStack_1b8 = &local_1c0;
    puStack_1b0 = auStack_1e0;
    param_3 = (**(code **)(*param_1 + 0x1d8))(param_1,param_3,lVar5,&local_1c0);
    uVar12 = (uint)param_3 >> 8 & 0xff;
    uVar13 = (uint)param_3 & 0xffff0000;
    uVar10 = param_3 & 0xffffffff00000000;
    break;
  default:
    (**(code **)(*param_1 + 0x90))(param_1,"illegaldescriptor");
    goto LAB_001013cc;
  case 'F':
    uStack_188 = 0xffffff80ffffffe8;
    local_1a0 = (undefined1 *)register0x00000008;
    ppuStack_198 = &local_1c0;
    puStack_190 = auStack_1e0;
    uVar6 = (**(code **)(*param_1 + 0x1c0))(param_1,param_3,lVar5,&local_1a0);
    param_3 = uVar6 & 0xffffffff;
    uVar10 = 0;
    uVar12 = (uint)uVar6 >> 8 & 0xff;
    uVar13 = (uint)uVar6 & 0xffff0000;
    break;
  case 'I':
    uStack_148 = 0xffffff80ffffffe8;
    local_160 = (undefined1 *)register0x00000008;
    ppuStack_158 = &local_1c0;
    puStack_150 = auStack_1e0;
    uVar6 = (**(code **)(*param_1 + 400))(param_1,param_3,lVar5,&local_160);
    param_3 = uVar6 & 0xffffffff;
    uVar10 = 0;
    uVar12 = (uint)uVar6 >> 8 & 0xff;
    uVar13 = (uint)uVar6 & 0xffff0000;
    break;
  case 'J':
    ppuVar7 = &local_180;
    pcVar9 = *(code **)(*param_1 + 0x1a8);
    uStack_168 = 0xffffff80ffffffe8;
    local_180 = (undefined1 *)register0x00000008;
    ppuStack_178 = &local_1c0;
    puStack_170 = auStack_1e0;
    goto LAB_001012a4;
  case 'L':
  case '[':
    ppuVar7 = &local_c0;
    pcVar9 = *(code **)(*param_1 + 0x118);
    uStack_a8 = 0xffffff80ffffffe8;
    local_c0 = (undefined1 *)register0x00000008;
    ppuStack_b8 = &local_1c0;
    puStack_b0 = auStack_1e0;
LAB_001012a4:
    param_3 = (*pcVar9)(param_1,param_3,lVar5,ppuVar7);
    uVar12 = (uint)param_3 >> 8 & 0xff;
    uVar13 = (uint)param_3 & 0xffff0000;
    uVar10 = param_3 & 0xffffffff00000000;
    break;
  case 'S':
    ppuVar7 = &local_140;
    pcVar9 = *(code **)(*param_1 + 0x178);
    uStack_128 = 0xffffff80ffffffe8;
    local_140 = (undefined1 *)register0x00000008;
    ppuStack_138 = &local_1c0;
    puStack_130 = auStack_1e0;
LAB_0010133c:
    uVar6 = (*pcVar9)(param_1,param_3,lVar5,ppuVar7);
    param_3 = uVar6 & 0xffffffff;
    uVar10 = 0;
    uVar13 = 0;
    uVar12 = (uint)uVar6 >> 8 & 0xff;
    break;
  case 'V':
    uStack_88 = 0xffffff80ffffffe8;
    local_a0 = (undefined1 *)register0x00000008;
    ppuStack_98 = &local_1c0;
    puStack_90 = auStack_1e0;
    (**(code **)(*param_1 + 0x1f0))(param_1,param_3,lVar5,&local_a0);
LAB_001013cc:
    uVar10 = 0;
    uVar13 = 0;
    uVar12 = 0;
    break;
  case 'Z':
    ppuVar7 = &local_e0;
    pcVar9 = *(code **)(*param_1 + 0x130);
    uStack_c8 = 0xffffff80ffffffe8;
    local_e0 = (undefined1 *)register0x00000008;
    ppuStack_d8 = &local_1c0;
    puStack_d0 = auStack_1e0;
LAB_00101308:
    param_3 = (*pcVar9)(param_1,param_3,lVar5,ppuVar7);
    param_3 = param_3 & 0xffffffff;
    uVar10 = 0;
    uVar13 = 0;
    uVar12 = 0;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,uVar4);
  if (param_2 != (char *)0x0) {
LAB_001013f0:
    cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
    *param_2 = cVar2;
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x88))(param_1);
    }
  }
LAB_0010141c:
  if (*(long *)(lVar1 + 0x28) == lVar8) {
    return uVar10 | (uVar13 | (uint)param_3 & 0xff | uVar12 << 8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

