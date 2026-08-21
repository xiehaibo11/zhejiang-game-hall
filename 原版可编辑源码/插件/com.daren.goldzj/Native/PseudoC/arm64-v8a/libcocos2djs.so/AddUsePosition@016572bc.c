
/* v8::internal::compiler::TopLevelLiveRange::AddUsePosition(v8::internal::compiler::UsePosition*,
   bool) */

void __thiscall
v8::internal::compiler::TopLevelLiveRange::AddUsePosition
          (TopLevelLiveRange *this,UsePosition *param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2) {
    PrintF("Add to live range %d use position %d\n",(ulong)*(uint *)(this + 0x5c),(ulong)uVar1);
  }
  lVar3 = *(long *)(this + 0x18);
  if (lVar3 == 0) {
    lVar2 = 0;
LAB_016573f8:
    *(long *)(param_1 + 0x10) = lVar3;
    *(UsePosition **)(this + 0x18) = param_1;
  }
  else {
    if ((int)uVar1 <= *(int *)(lVar3 + 0x18)) {
      lVar2 = 0;
      goto LAB_016573f8;
    }
    lVar2 = 0;
    lVar5 = lVar3;
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 8);
      if (lVar5 != 0) {
        switch(*(uint *)(lVar4 + 0x1c) >> 2 & 7) {
        case 0:
        case 4:
          break;
        case 1:
switchD_01657344_caseD_1:
          lVar2 = lVar4;
          break;
        case 2:
          if ((*(uint *)(lVar5 + 0x1c) & 0xfc0) != 0x800) goto switchD_01657344_caseD_1;
          break;
        case 3:
          if (*(int *)(lVar5 + 0x30) != 0x20) goto switchD_01657344_caseD_1;
          break;
        default:
          goto switchD_01657344_default;
        }
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 == 0) goto LAB_0165739c;
    } while (*(int *)(lVar5 + 0x18) < (int)uVar1);
    if (lVar4 == 0) goto LAB_016573f8;
LAB_0165739c:
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(lVar4 + 0x10) = param_1;
  }
  if ((lVar2 == 0) && (lVar3 = *(long *)(param_1 + 8), lVar3 != 0)) {
    switch(*(uint *)(param_1 + 0x1c) >> 2 & 7) {
    case 0:
    case 4:
      goto switchD_016573e0_caseD_0;
    case 1:
      break;
    case 2:
      if ((*(uint *)(lVar3 + 0x1c) & 0xfc0) == 0x800) {
        return;
      }
      break;
    case 3:
      if (*(int *)(lVar3 + 0x30) == 0x20) {
        return;
      }
      break;
    default:
switchD_01657344_default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    *(UsePosition **)(this + 0x40) = param_1;
  }
switchD_016573e0_caseD_0:
  return;
}

