
void pvmp3_poly_phase_synthesis(long param_1,uint param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  pvmp3_equalizer((void *)(param_1 + 0x1204),param_3,param_1 + 0x904);
  uVar3 = 0;
  lVar1 = param_1 + 0x1ac4;
  do {
    lVar2 = lVar1 + -0x40;
    pvmp3_split(lVar1);
    pvmp3_dct_16(lVar1,0);
    pvmp3_dct_16(lVar2,1);
    pvmp3_merge_in_place_N32(lVar2);
    pvmp3_polyphase_filter_window(lVar2,param_4,param_2);
    lVar2 = lVar1 + -0xc0;
    pvmp3_split(lVar1 + -0x80);
    pvmp3_dct_16(lVar1 + -0x80,0);
    pvmp3_dct_16(lVar2,1);
    pvmp3_merge_in_place_N32(lVar2);
    pvmp3_polyphase_filter_window
              (lVar2,param_4 + (-(ulong)((param_2 & 0x7ffffff) >> 0x1a) & 0xfffffffe00000000 |
                               (ulong)(param_2 << 5) << 1),param_2);
    uVar3 = uVar3 + 2;
    lVar1 = lVar1 + -0x100;
    param_4 = param_4 + (-(ulong)((param_2 & 0x3ffffff) >> 0x19) & 0xfffffffe00000000 |
                        (ulong)(param_2 << 6) << 1);
  } while (uVar3 < 0x12);
  memcpy((void *)(param_1 + 0x1b04),(void *)(param_1 + 0x1204),0x780);
  return;
}

