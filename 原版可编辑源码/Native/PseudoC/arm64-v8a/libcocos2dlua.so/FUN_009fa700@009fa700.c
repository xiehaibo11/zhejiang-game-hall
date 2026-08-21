
void FUN_009fa700(undefined8 param_1,ulong *param_2,ulong param_3)

{
  void *__src;
  ulong __n;
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  size_t __n_00;
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  byte local_4c;
  byte abStack_4b [3];
  long local_48;
  
                    /* catch() { ... } // from try @ 009fa684 with catch @ 009fa704 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __n = *param_2 - param_3;
  if (param_3 <= *param_2) {
    pbVar3 = &local_54;
    uVar5 = (uint)__n;
    if (__n >> 7 == 0) {
      bVar4 = (byte)__n & 0x7f;
      __n_00 = 1;
    }
    else {
      local_54 = (byte)__n | 0x80;
      if (__n >> 0xe == 0) {
                    /* try { // try from 009fa7fc to 00afa81f has its CatchHandler @ 009fa87c */
        pbVar3 = (byte *)((ulong)pbVar3 | 1);
        bVar4 = (byte)(uVar5 >> 7) & 0x7f;
        __n_00 = 2;
      }
      else {
        local_53 = (byte)(__n >> 7) | 0x80;
        if (__n >> 0x15 == 0) {
          pbVar3 = (byte *)((ulong)&local_54 | 2);
          bVar4 = (byte)(uVar5 >> 0xe) & 0x7f;
          __n_00 = 3;
        }
        else {
          local_52 = (byte)(__n >> 0xe) | 0x80;
          if (__n >> 0x1c == 0) {
            pbVar3 = (byte *)((ulong)&local_54 | 3);
                    /* try { // try from 009fa820 to 00afa897 has its CatchHandler @ 009fa7ac */
            bVar4 = (byte)(uVar5 >> 0x15) & 0x7f;
            __n_00 = 4;
          }
          else {
            local_51 = (byte)(__n >> 0x15) | 0x80;
            if (__n >> 0x23 == 0) {
              pbVar3 = &local_50;
              bVar4 = (byte)(__n >> 0x1c) & 0x7f;
              __n_00 = 5;
            }
            else {
              local_50 = (byte)(__n >> 0x1c) | 0x80;
              uVar5 = (uint)(__n >> 0x20);
              if (__n >> 0x2a == 0) {
                pbVar3 = &local_4f;
                bVar4 = (byte)(uVar5 >> 3) & 0x7f;
                __n_00 = 6;
              }
              else {
                    /* try { // try from 009fa7ac to 00afa7fb has its CatchHandler @ 009fa7ac
                       catch() { ... } // from try @ 009fa7ac with catch @ 009fa7ac
                       catch() { ... } // from try @ 009fa820 with catch @ 009fa7ac */
                local_4f = (byte)(uVar5 >> 3) | 0x80;
                if (__n >> 0x31 == 0) {
                  pbVar3 = &local_4e;
                  bVar4 = (byte)(uVar5 >> 10) & 0x7f;
                  __n_00 = 7;
                }
                else {
                  local_4e = (byte)(uVar5 >> 10) | 0x80;
                  if (__n >> 0x38 == 0) {
                    pbVar3 = &local_4d;
                    bVar4 = (byte)(uVar5 >> 0x11) & 0x7f;
                    __n_00 = 8;
                  }
                  else {
                    local_4d = (byte)(uVar5 >> 0x11) | 0x80;
                    bVar4 = (byte)(__n >> 0x38);
                    if ((long)__n < 0) {
                      local_4c = bVar4 | 0x80;
                      pbVar3 = abStack_4b;
                      bVar4 = 1;
                      __n_00 = 10;
                    /* catch() { ... } // from try @ 009fa7fc with catch @ 009fa87c */
                    }
                    else {
                      pbVar3 = &local_4c;
                      bVar4 = bVar4 & 0x7f;
                      __n_00 = 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *pbVar3 = bVar4;
    lVar2 = FUN_009f9d60(param_2,__n_00);
    if (lVar2 != 0) {
      __src = (void *)(param_2[2] + param_3);
      memmove((void *)((long)__src + __n_00),__src,__n);
      memcpy(__src,&local_54,__n_00);
      *param_2 = *param_2 + __n_00;
      goto LAB_009fa8dc;
    }
  }
  luaL_error(param_1,"encode bytes fail");
LAB_009fa8dc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

