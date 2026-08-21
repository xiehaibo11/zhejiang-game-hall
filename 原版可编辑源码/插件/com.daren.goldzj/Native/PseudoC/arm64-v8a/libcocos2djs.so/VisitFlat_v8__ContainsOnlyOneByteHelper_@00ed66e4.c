
/* v8::internal::ConsString
   v8::internal::String::VisitFlat<v8::ContainsOnlyOneByteHelper>(v8::ContainsOnlyOneByteHelper*,
   v8::internal::String, int) */

ulong v8::internal::String::VisitFlat<v8::ContainsOnlyOneByteHelper>
                (ContainsOnlyOneByteHelper *param_1,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  ushort *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 7);
  iVar4 = param_3;
  do {
    switch(*(ushort *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1)) + 7) & 0xf) {
    case 0:
      puVar3 = (ushort *)(param_2 + (long)iVar4 * 2 + 0xb);
LAB_00ed676c:
      ContainsOnlyOneByteHelper::VisitTwoByteString(param_1,puVar3,iVar1 - param_3);
      return 0;
    case 1:
    case 9:
      return param_2;
    case 2:
      lVar2 = (**(code **)(**(long **)(param_2 + 0xb) + 0x30))();
      puVar3 = (ushort *)(lVar2 + (long)iVar4 * 2);
      goto LAB_00ed676c;
    case 3:
    case 0xb:
      iVar4 = iVar4 + (*(int *)(param_2 + 0xf) >> 1);
    case 5:
    case 0xd:
      param_2 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb);
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 8:
      return 0;
    case 10:
      (**(code **)(**(long **)(param_2 + 0xb) + 0x30))();
      return 0;
    }
  } while( true );
}

