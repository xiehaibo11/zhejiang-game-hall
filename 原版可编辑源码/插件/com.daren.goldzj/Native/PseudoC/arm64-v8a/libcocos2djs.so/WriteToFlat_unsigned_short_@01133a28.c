
/* void v8::internal::String::WriteToFlat<unsigned short>(v8::internal::String, unsigned short*,
   int, int) */

void v8::internal::String::WriteToFlat<unsigned_short>
               (ulong param_1,ushort *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint local_70;
  undefined4 local_6c;
  ulong local_68;
  
  if (param_4 <= param_3) {
    return;
  }
LAB_01133a7c:
  do {
    uVar12 = param_1 & 0xffffffff00000000;
    puVar9 = param_2;
    switch(*(ushort *)((uVar12 | *(uint *)(param_1 - 1)) + 7) & 0xf) {
    case 0:
      param_2 = (ushort *)(param_1 + (long)param_3 * 2 + 0xb);
      uVar11 = (ulong)(param_4 - param_3);
      goto LAB_01133ce0;
    case 1:
    case 9:
      uVar2 = *(uint *)(param_1 + 0xb);
      uVar10 = uVar12 | uVar2;
      iVar1 = *(int *)(uVar10 + 7);
      iVar3 = param_4 - iVar1;
      iVar4 = iVar1 - param_3;
      uVar11 = (ulong)iVar1;
      if (iVar4 <= iVar3) {
        iVar5 = param_3 - iVar1;
        if (param_3 < iVar1) {
          WriteToFlat<unsigned_short>(uVar10,param_2,param_3,iVar1);
          if ((param_3 == 0) && (*(uint *)(param_1 + 0xf) == uVar2)) {
            puVar9 = param_2 + uVar11;
            goto LAB_01133ce0;
          }
          param_2 = param_2 + iVar4;
          iVar5 = 0;
        }
        param_3 = iVar5;
        param_1 = uVar12 | *(uint *)(param_1 + 0xf);
        param_4 = iVar3;
        if (iVar3 <= param_3) {
          return;
        }
        goto LAB_01133a7c;
      }
      if (iVar1 < param_4) {
        uVar7 = uVar12 | *(uint *)(param_1 + 0xf);
        param_4 = iVar1;
        if (iVar3 == 1) {
          local_6c = 0;
          local_70 = (uint)*(ushort *)((uVar12 | *(uint *)(uVar7 - 1)) + 7);
          local_68 = uVar7;
          uVar6 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                            (&local_70,&local_68,&local_6c);
          param_2[iVar4] = uVar6;
        }
        else {
          uVar12 = uVar12 | 7;
          if (((*(ushort *)(uVar12 + *(uint *)(uVar7 - 1)) < 0x40) &&
              ((*(byte *)(uVar12 + *(uint *)(uVar7 - 1)) & 7) == 0)) &&
             ((*(byte *)(uVar12 + *(uint *)(uVar7 - 1)) >> 3 & 1) != 0)) {
            CopyChars<unsigned_char,unsigned_short>
                      (param_2 + (uVar11 - (long)param_3),(uchar *)(uVar7 + 0xb),(long)iVar3);
          }
          else {
            WriteToFlat<unsigned_short>(uVar7,param_2 + (uVar11 - (long)param_3),0,iVar3);
          }
        }
      }
      break;
    case 2:
      lVar8 = (**(code **)(**(long **)(param_1 + 0xb) + 0x30))();
      param_2 = (ushort *)(lVar8 + (long)param_3 * 2);
      uVar11 = (ulong)(param_4 - param_3);
LAB_01133ce0:
      CopyChars<unsigned_short,unsigned_short>(puVar9,param_2,uVar11);
      return;
    case 3:
    case 0xb:
      iVar1 = *(int *)(param_1 + 0xf) >> 1;
      WriteToFlat<unsigned_short>
                (uVar12 | *(uint *)(param_1 + 0xb),param_2,iVar1 + param_3,iVar1 + param_4);
      return;
    case 5:
    case 0xd:
      param_1 = uVar12 | *(uint *)(param_1 + 0xb);
    default:
      uVar10 = param_1;
      break;
    case 8:
      CopyChars<unsigned_char,unsigned_short>
                (param_2,(uchar *)(param_1 + (long)param_3 + 0xb),(long)(param_4 - param_3));
      return;
    case 10:
      lVar8 = (**(code **)(**(long **)(param_1 + 0xb) + 0x30))();
      CopyChars<unsigned_char,unsigned_short>
                (param_2,(uchar *)(lVar8 + param_3),(long)(param_4 - param_3));
      return;
    }
    param_1 = uVar10;
    if (param_4 <= param_3) {
      return;
    }
  } while( true );
}

