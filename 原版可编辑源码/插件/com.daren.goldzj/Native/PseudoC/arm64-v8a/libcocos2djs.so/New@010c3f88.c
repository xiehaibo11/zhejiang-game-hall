
/* v8::internal::FeedbackVector::New(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::ClosureFeedbackCellArray>) */

long * v8::internal::FeedbackVector::New(long param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar2 = *(int *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 3);
  plVar3 = (long *)Factory::NewFeedbackVector();
  if (0 < iVar2) {
    uVar5 = 0;
    do {
      iVar4 = (int)uVar5;
      iVar8 = (int)(uVar5 / 6);
      uVar1 = *(uint *)((ulong)(uint)(iVar8 << 2) +
                        (*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0xb) >>
              (ulong)((iVar4 + iVar8 * -6) * 5 & 0x1f) & 0x1f;
      if (uVar1 - 1 < 0xe) {
switchD_010c40a0_caseD_11:
        uVar6 = 2;
      }
      else {
        uVar6 = 1;
        switch(uVar1) {
        case 0:
        case 0x17:
          goto switchD_010c4054_caseD_0;
        case 0x11:
        case 0x16:
          goto switchD_010c40a0_caseD_11;
        }
      }
      uVar7 = (undefined4)*(undefined8 *)(param_1 + 0xc08);
      switch(uVar1) {
      case 0:
      case 0x17:
switchD_010c4054_caseD_0:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 1:
      case 6:
      case 7:
      case 10:
        *(uint *)(*plVar3 + (long)(iVar4 << 2) + 0x1f) = (uint)param_1 | 3;
        break;
      case 2:
      case 3:
      case 5:
      case 8:
      case 9:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x11:
      case 0x12:
      case 0x15:
      case 0x16:
        *(undefined4 *)(*plVar3 + (long)(iVar4 << 2) + 0x1f) = uVar7;
      default:
        break;
      case 4:
        *(undefined4 *)(*plVar3 + (long)(iVar4 << 2) + 0x1f) = uVar7;
        uVar7 = 0;
        break;
      case 0xf:
      case 0x10:
      case 0x13:
      case 0x14:
        *(undefined4 *)(*plVar3 + (long)(iVar4 << 2) + 0x1f) = 0;
      }
      if (1 < uVar6) {
        *(undefined4 *)(*plVar3 + (long)(iVar4 * 4 + 4) + 0x1f) = uVar7;
      }
      uVar5 = (ulong)(uVar6 + iVar4);
    } while ((int)(uVar6 + iVar4) < iVar2);
  }
  if ((*(int *)(param_1 + 0xb810) != 0) || (*(int *)(param_1 + 0xb814) == 1)) {
    AddToVectorsForProfilingTools(param_1,plVar3);
  }
  return plVar3;
}

