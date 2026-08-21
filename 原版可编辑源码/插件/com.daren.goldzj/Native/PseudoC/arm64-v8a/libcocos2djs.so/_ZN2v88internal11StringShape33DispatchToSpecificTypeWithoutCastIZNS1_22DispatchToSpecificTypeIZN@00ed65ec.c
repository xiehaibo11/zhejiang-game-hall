
ulong _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                (uint *param_1,long *param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long local_8;
  
  switch(*param_1 & 0xf) {
  case 0:
    uVar2 = (ulong)*(ushort *)(*param_2 + (long)*param_3 * 2 + 0xb);
    break;
  case 1:
  case 9:
    local_8 = *param_2;
    uVar2 = v8::internal::ConsString::Get((ConsString *)&local_8,*param_3);
    break;
  case 2:
    iVar1 = *param_3;
    lVar3 = (**(code **)(**(long **)(*param_2 + 0xb) + 0x30))();
    uVar2 = (ulong)*(ushort *)(lVar3 + (long)iVar1 * 2);
    break;
  case 3:
  case 0xb:
    local_8 = *param_2;
    uVar2 = v8::internal::SlicedString::Get((SlicedString *)&local_8,*param_3);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 5:
  case 0xd:
    local_8 = *param_2;
    uVar2 = v8::internal::ThinString::Get((ThinString *)&local_8,*param_3);
    break;
  case 8:
    uVar2 = (ulong)*(byte *)(*param_2 + (long)*param_3 + 0xb);
    break;
  case 10:
    iVar1 = *param_3;
    lVar3 = (**(code **)(**(long **)(*param_2 + 0xb) + 0x30))();
    uVar2 = (ulong)*(byte *)(lVar3 + iVar1);
  }
  return uVar2;
}

