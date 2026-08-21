
void FUN_0107e400(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 0x360) != 0) {
      (**(code **)(*(long *)(param_1 + 0x360) + 0x18))(param_1);
    }
    plVar7 = *(long **)(param_1 + 0x428);
    if (plVar7 != (long *)0x0) {
      lVar1 = plVar7[0x12];
      lVar5 = plVar7[1];
      if (lVar1 != 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        if (plVar7[0x18] != 0) {
          FT_Stream_ReleaseFrame();
        }
        ft_mem_free(uVar6,plVar7[0x17]);
        plVar7[0x18] = 0;
        plVar7[0x15] = 0;
        plVar7[0x14] = 0;
        plVar7[0x17] = 0;
        plVar7[0x16] = 0;
        plVar7[0x13] = 0;
        plVar7[0x12] = 0;
      }
      lVar1 = plVar7[0xa8];
      if (lVar1 != 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        if (plVar7[0xae] != 0) {
          FT_Stream_ReleaseFrame(lVar1,plVar7 + 0xae);
        }
        ft_mem_free(uVar6,plVar7[0xad]);
        plVar7[0xae] = 0;
        plVar7[0xab] = 0;
        plVar7[0xaa] = 0;
        plVar7[0xad] = 0;
        plVar7[0xac] = 0;
        plVar7[0xa9] = 0;
        plVar7[0xa8] = 0;
      }
      lVar1 = plVar7[4];
      if (lVar1 != 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        if (plVar7[10] != 0) {
          FT_Stream_ReleaseFrame();
        }
        ft_mem_free(uVar6,plVar7[9]);
        plVar7[10] = 0;
        plVar7[7] = 0;
        plVar7[6] = 0;
        plVar7[9] = 0;
        plVar7[8] = 0;
        plVar7[5] = 0;
        plVar7[4] = 0;
      }
      lVar1 = plVar7[0xa1];
      if (lVar1 != 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        if (plVar7[0xa7] != 0) {
          FT_Stream_ReleaseFrame(lVar1,plVar7 + 0xa7);
        }
        ft_mem_free(uVar6,plVar7[0xa6]);
        plVar7[0xa7] = 0;
        plVar7[0xa4] = 0;
        plVar7[0xa3] = 0;
        plVar7[0xa6] = 0;
        plVar7[0xa5] = 0;
        plVar7[0xa2] = 0;
        plVar7[0xa1] = 0;
      }
      uVar3 = *(uint *)(plVar7 + 0x14a);
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          lVar1 = plVar7[(ulong)uVar8 + 0x14b];
          if (lVar1 != 0) {
            lVar2 = *(long *)(lVar1 + 0x400);
            if (lVar2 != 0) {
              uVar6 = *(undefined8 *)(lVar2 + 0x38);
              if (*(long *)(lVar1 + 0x430) != 0) {
                FT_Stream_ReleaseFrame(lVar2,lVar1 + 0x430);
              }
              ft_mem_free(uVar6,*(undefined8 *)(lVar1 + 0x428));
              *(undefined8 *)(lVar1 + 0x430) = 0;
              *(undefined8 *)(lVar1 + 0x418) = 0;
              *(undefined8 *)(lVar1 + 0x410) = 0;
              *(undefined8 *)(lVar1 + 0x428) = 0;
              *(undefined8 *)(lVar1 + 0x420) = 0;
              *(undefined8 *)(lVar1 + 0x408) = 0;
              *(undefined8 *)(lVar1 + 0x400) = 0;
            }
            ft_mem_free(lVar5,*(undefined8 *)(lVar1 + 0x438));
            *(undefined8 *)(lVar1 + 0x438) = 0;
            uVar3 = *(uint *)(plVar7 + 0x14a);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
        ft_mem_free(lVar5,plVar7[0x14b]);
        plVar7[0x14b] = 0;
      }
      *(undefined4 *)(plVar7 + 0x19) = 0;
      plVar7[0x1a] = 0;
      *(undefined4 *)(plVar7 + 0x1b) = 0;
      uVar6 = *(undefined8 *)(*plVar7 + 0x38);
                    /* try { // try from 0107e5d4 to 0117e837 has its CatchHandler @ 0107e5d4
                       catch() { ... } // from try @ 0107e5d4 with catch @ 0107e5d4
                       catch() { ... } // from try @ 0107e87c with catch @ 0107e5d4 */
      ft_mem_free(uVar6,plVar7[0x9f]);
      plVar7[0x9f] = 0;
      *(undefined4 *)(plVar7 + 0xa0) = 0;
      ft_mem_free(uVar6,plVar7[0x9e]);
      lVar1 = plVar7[0x142];
      *(undefined4 *)(plVar7 + 0x9c) = 0;
      plVar7[0x9e] = 0;
      plVar7[0x9d] = 0;
      if (lVar1 != 0) {
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        if (plVar7[0x148] != 0) {
          FT_Stream_ReleaseFrame(lVar1,plVar7 + 0x148);
        }
        ft_mem_free(uVar6,plVar7[0x147]);
        plVar7[0x148] = 0;
        plVar7[0x145] = 0;
        plVar7[0x144] = 0;
        plVar7[0x147] = 0;
        plVar7[0x146] = 0;
        plVar7[0x143] = 0;
        plVar7[0x142] = 0;
      }
      ft_mem_free(lVar5,plVar7[0x149]);
      plVar7[0x149] = 0;
      if (plVar7[0x24c] != 0) {
        FT_Stream_ReleaseFrame(*plVar7,plVar7 + 0x24c);
      }
      *(undefined4 *)(plVar7 + 0x24d) = 0;
      *(undefined1 *)(plVar7 + 0x24b) = 0;
      *(undefined4 *)((long)plVar7 + 0x125c) = 0;
      ft_mem_free(lVar5,plVar7[0x251]);
      plVar7[0x251] = 0;
      ft_mem_free(lVar5,plVar7[0xbd]);
      plVar7[0xbd] = 0;
      ft_mem_free(lVar5,plVar7[0xbe]);
      plVar7[0xbe] = 0;
      ft_mem_free(lVar5,plVar7[0xc0]);
      plVar7[0xc0] = 0;
      ft_mem_free(lVar5,plVar7[0xc1]);
      plVar7[0xc1] = 0;
      if ((code *)plVar7[0x255] != (code *)0x0) {
        (*(code *)plVar7[0x255])(plVar7[0x254]);
        ft_mem_free(lVar5,plVar7[0x254]);
        plVar7[0x254] = 0;
      }
      ft_mem_free(uVar4,*(undefined8 *)(param_1 + 0x428));
      *(undefined8 *)(param_1 + 0x428) = 0;
    }
  }
  return;
}

