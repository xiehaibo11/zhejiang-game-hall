
/* void v8::internal::String::WriteToFlat<unsigned char>(v8::internal::String, unsigned char*, int,
   int) */

void v8::internal::String::WriteToFlat<unsigned_char>
               (ulong param_1,uchar *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uchar uVar5;
  ulong uVar6;
  long lVar7;
  uchar *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint local_70;
  undefined4 local_6c;
  ulong local_68;
  
  if (param_4 <= param_3) {
    return;
  }
LAB_01134024:
  do {
    uVar11 = param_1 & 0xffffffff00000000;
    puVar8 = param_2;
    switch(*(ushort *)((uVar11 | *(uint *)(param_1 - 1)) + 7) & 0xf) {
    case 0:
      CopyChars<unsigned_short,unsigned_char>
                (param_2,(ushort *)(param_1 + (long)param_3 * 2 + 0xb),(long)(param_4 - param_3));
      return;
    case 1:
    case 9:
      uVar2 = *(uint *)(param_1 + 0xb);
      uVar10 = uVar11 | uVar2;
      iVar1 = *(int *)(uVar10 + 7);
      uVar9 = (ulong)iVar1;
      iVar3 = param_4 - iVar1;
      lVar7 = uVar9 - (long)param_3;
      if ((int)lVar7 <= iVar3) {
        iVar4 = param_3 - iVar1;
        if (param_3 < iVar1) {
          WriteToFlat<unsigned_char>(uVar10,param_2,param_3,iVar1);
          if ((param_3 == 0) && (*(uint *)(param_1 + 0xf) == uVar2)) {
            puVar8 = param_2 + uVar9;
            goto LAB_01134288;
          }
          param_2 = param_2 + lVar7;
          iVar4 = 0;
        }
        param_3 = iVar4;
        param_1 = uVar11 | *(uint *)(param_1 + 0xf);
        param_4 = iVar3;
        if (iVar3 <= param_3) {
          return;
        }
        goto LAB_01134024;
      }
      if (iVar1 < param_4) {
        uVar6 = uVar11 | *(uint *)(param_1 + 0xf);
        param_4 = iVar1;
        if (iVar3 == 1) {
          local_6c = 0;
          local_70 = (uint)*(ushort *)((uVar11 | *(uint *)(uVar6 - 1)) + 7);
          local_68 = uVar6;
          uVar5 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                            (&local_70,&local_68,&local_6c);
          param_2[lVar7] = uVar5;
        }
        else {
          uVar11 = uVar11 | 7;
          if (((*(ushort *)(uVar11 + *(uint *)(uVar6 - 1)) < 0x40) &&
              ((*(byte *)(uVar11 + *(uint *)(uVar6 - 1)) & 7) == 0)) &&
             ((*(byte *)(uVar11 + *(uint *)(uVar6 - 1)) >> 3 & 1) != 0)) {
            CopyChars<unsigned_char,unsigned_char>
                      (param_2 + (uVar9 - (long)param_3),(uchar *)(uVar6 + 0xb),(long)iVar3);
          }
          else {
            WriteToFlat<unsigned_char>(uVar6,param_2 + (uVar9 - (long)param_3),0,iVar3);
          }
        }
      }
      break;
    case 2:
      lVar7 = (**(code **)(**(long **)(param_1 + 0xb) + 0x30))();
      CopyChars<unsigned_short,unsigned_char>
                (param_2,(ushort *)(lVar7 + (long)param_3 * 2),(long)(param_4 - param_3));
      return;
    case 3:
    case 0xb:
      iVar1 = *(int *)(param_1 + 0xf) >> 1;
      WriteToFlat<unsigned_char>
                (uVar11 | *(uint *)(param_1 + 0xb),param_2,iVar1 + param_3,iVar1 + param_4);
      return;
    case 5:
    case 0xd:
      param_1 = uVar11 | *(uint *)(param_1 + 0xb);
    default:
      uVar10 = param_1;
      break;
    case 8:
      param_2 = (uchar *)(param_1 + (long)param_3 + 0xb);
      uVar9 = (ulong)(param_4 - param_3);
      goto LAB_01134288;
    case 10:
      lVar7 = (**(code **)(**(long **)(param_1 + 0xb) + 0x30))();
      uVar9 = (ulong)(param_4 - param_3);
      param_2 = (uchar *)(lVar7 + param_3);
LAB_01134288:
      CopyChars<unsigned_char,unsigned_char>(puVar8,param_2,uVar9);
      return;
    }
    param_1 = uVar10;
    if (param_4 <= param_3) {
      return;
    }
  } while( true );
}

