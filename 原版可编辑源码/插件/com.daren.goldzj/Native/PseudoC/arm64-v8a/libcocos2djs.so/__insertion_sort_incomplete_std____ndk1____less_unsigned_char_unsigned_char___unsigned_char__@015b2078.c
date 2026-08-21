
/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<unsigned char, unsigned char>&,
   unsigned char*>(unsigned char*, unsigned char*, std::__ndk1::__less<unsigned char, unsigned
   char>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<unsigned_char,unsigned_char>&,unsigned_char*>
               (uchar *param_1,uchar *param_2,__less *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1) {
  case 0:
  case 1:
    break;
  case 2:
    bVar1 = *param_1;
    if (param_2[-1] < bVar1) {
      *param_1 = param_2[-1];
      param_2[-1] = bVar1;
    }
    break;
  case 3:
    bVar1 = param_1[1];
    bVar2 = *param_1;
    bVar3 = param_2[-1];
    if (bVar1 < bVar2) {
      if (bVar3 < bVar1) {
        *param_1 = bVar3;
      }
      else {
        *param_1 = bVar1;
        param_1[1] = bVar2;
        if (bVar2 <= param_2[-1]) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = bVar2;
    }
    else if (bVar3 < bVar1) {
      param_1[1] = bVar3;
      param_2[-1] = bVar1;
      bVar1 = *param_1;
      if (param_1[1] < bVar1) {
        *param_1 = param_1[1];
        param_1[1] = bVar1;
      }
    }
    break;
  case 4:
    bVar1 = param_1[1];
    bVar2 = *param_1;
    bVar3 = param_1[2];
    bVar5 = bVar3;
    if (bVar1 < bVar2) {
      if (bVar3 < bVar1) {
        *param_1 = bVar3;
      }
      else {
        *param_1 = bVar1;
        param_1[1] = bVar2;
        if (bVar2 <= bVar3) goto LAB_015b22ac;
        param_1[1] = bVar3;
      }
      param_1[2] = bVar2;
      bVar5 = bVar2;
    }
    else if (bVar3 < bVar1) {
      param_1[1] = bVar3;
      param_1[2] = bVar1;
      bVar5 = bVar1;
      if (bVar3 < bVar2) {
        *param_1 = bVar3;
        param_1[1] = bVar2;
      }
    }
LAB_015b22ac:
    if (param_2[-1] < bVar5) {
      param_1[2] = param_2[-1];
      param_2[-1] = bVar5;
      bVar1 = param_1[2];
      bVar2 = param_1[1];
      if (bVar1 < bVar2) {
        bVar3 = *param_1;
        param_1[1] = bVar1;
        param_1[2] = bVar2;
        if (bVar1 < bVar3) {
          *param_1 = bVar1;
          param_1[1] = bVar3;
        }
      }
    }
    break;
  case 5:
    FUN_015b1ef0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    bVar1 = param_1[1];
    bVar2 = *param_1;
    bVar3 = param_1[2];
    bVar5 = bVar3;
    if (bVar1 < bVar2) {
      if (bVar3 < bVar1) {
        *param_1 = bVar3;
      }
      else {
        *param_1 = bVar1;
        param_1[1] = bVar2;
        if (bVar2 <= bVar3) goto LAB_015b21e8;
        param_1[1] = bVar3;
      }
      param_1[2] = bVar2;
      bVar5 = bVar2;
    }
    else if (bVar3 < bVar1) {
      param_1[1] = bVar3;
      param_1[2] = bVar1;
      bVar5 = bVar1;
      if (bVar3 < bVar2) {
        *param_1 = bVar3;
        param_1[1] = bVar2;
      }
    }
LAB_015b21e8:
    if (param_1 + 3 != param_2) {
      lVar8 = 0;
      iVar9 = 0;
      pbVar7 = param_1 + 3;
      do {
        bVar1 = *pbVar7;
        lVar4 = lVar8;
        if (bVar1 < bVar5) {
          do {
            lVar10 = lVar4;
            param_1[lVar10 + 3] = bVar5;
            pbVar6 = param_1;
            if (lVar10 == -2) goto LAB_015b223c;
            bVar5 = param_1[lVar10 + 1];
            lVar4 = lVar10 + -1;
          } while (bVar1 < bVar5);
          pbVar6 = param_1 + lVar10 + 2;
LAB_015b223c:
          iVar9 = iVar9 + 1;
          *pbVar6 = bVar1;
          if (iVar9 == 8) {
            return pbVar7 + 1 == param_2;
          }
        }
        if (pbVar7 + 1 == param_2) {
          return true;
        }
        bVar5 = *pbVar7;
        lVar8 = lVar8 + 1;
        pbVar7 = pbVar7 + 1;
      } while( true );
    }
  }
  return true;
}

