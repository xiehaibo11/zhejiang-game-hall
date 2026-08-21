
/* tinyxml2::XMLUtil::ConvertUTF32ToUTF8(unsigned long, char*, int*) */

void tinyxml2::XMLUtil::ConvertUTF32ToUTF8(ulong param_1,char *param_2,int *param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long local_50 [8];
  
  lVar1 = tpidr_el0;
  local_50[7] = *(long *)(lVar1 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[3] = 0xe0;
  local_50[2] = 0xc0;
  local_50[5] = 0xf8;
  local_50[4] = 0xf0;
  local_50[6] = 0xfc;
  if (param_1 < 0x80) {
    lVar3 = 1;
    *param_3 = 1;
  }
  else {
    if (param_1 < 0x800) {
      *param_3 = 2;
    }
    else {
      if (param_1 >> 0x10 == 0) {
        *param_3 = 3;
      }
      else {
        if (0x1fffff < param_1) {
          *param_3 = 0;
          goto LAB_00911fb8;
        }
        bVar2 = (byte)param_1;
        param_1 = param_1 >> 6;
        *param_3 = 4;
        param_2[3] = bVar2 & 0x3f | 0x80;
      }
      bVar2 = (byte)param_1;
      param_1 = param_1 >> 6;
      param_2[2] = bVar2 & 0x3f | 0x80;
    }
    param_2[1] = (byte)param_1 & 0x3f | 0x80;
    lVar3 = (long)*param_3;
    param_1 = param_1 >> 6;
  }
  *param_2 = (byte)local_50[lVar3] | (byte)param_1;
LAB_00911fb8:
  if (*(long *)(lVar1 + 0x28) == local_50[7]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

