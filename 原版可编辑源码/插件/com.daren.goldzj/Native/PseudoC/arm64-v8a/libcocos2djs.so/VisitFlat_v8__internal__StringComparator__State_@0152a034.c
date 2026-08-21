
/* v8::internal::ConsString
   v8::internal::String::VisitFlat<v8::internal::StringComparator::State>(v8::internal::StringComparator::State*,
   v8::internal::String, int) */

ulong v8::internal::String::VisitFlat<v8::internal::StringComparator::State>
                (long param_1,ulong param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 7);
  iVar3 = param_3;
LAB_0152a05c:
  switch(*(ushort *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1)) + 7) & 0xf) {
  case 0:
    lVar2 = (long)iVar3 * 2;
    *(undefined1 *)(param_1 + 0x118) = 0;
LAB_0152a118:
    *(ulong *)(param_1 + 0x120) = param_2 + lVar2 + 0xb;
    *(int *)(param_1 + 0x11c) = iVar1 - param_3;
    param_2 = 0;
  case 1:
  case 9:
    return param_2;
  case 2:
    lVar2 = (**(code **)(**(long **)(param_2 + 0xb) + 0x30))();
    lVar2 = lVar2 + (long)iVar3 * 2;
    *(undefined1 *)(param_1 + 0x118) = 0;
    break;
  case 3:
  case 0xb:
    iVar3 = iVar3 + (*(int *)(param_2 + 0xf) >> 1);
    goto switchD_0152a084_caseD_5;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 5:
  case 0xd:
    goto switchD_0152a084_caseD_5;
  case 8:
    lVar2 = (long)iVar3;
    *(undefined1 *)(param_1 + 0x118) = 1;
    goto LAB_0152a118;
  case 10:
    lVar2 = (**(code **)(**(long **)(param_2 + 0xb) + 0x30))();
    lVar2 = lVar2 + iVar3;
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  *(long *)(param_1 + 0x120) = lVar2;
  *(int *)(param_1 + 0x11c) = iVar1 - param_3;
  return 0;
switchD_0152a084_caseD_5:
  param_2 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb);
  goto LAB_0152a05c;
}

