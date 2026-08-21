
/* v8::internal::StringComparator::State::Advance(int) */

void __thiscall v8::internal::StringComparator::State::Advance(State *this,int param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int local_14;
  
  if (*(int *)(this + 0x11c) - param_1 != 0) {
    if (this[0x118] == (State)0x0) {
      lVar3 = *(long *)(this + 0x120) + (long)param_1 * 2;
    }
    else {
      lVar3 = *(long *)(this + 0x120) + (long)param_1;
    }
    *(long *)(this + 0x120) = lVar3;
    *(int *)(this + 0x11c) = *(int *)(this + 0x11c) - param_1;
switchD_0152a1d0_caseD_1:
    return;
  }
  local_14 = 0;
  if (*(int *)(this + 0x108) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ConsStringIterator::Continue((ConsStringIterator *)this,&local_14);
  }
  uVar1 = *(undefined4 *)(uVar2 + 7);
  iVar4 = 0;
LAB_0152a1a8:
  switch(*(ushort *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 7) & 0xf) {
  case 0:
    this[0x118] = (State)0x0;
    lVar3 = uVar2 + (long)iVar4 * 2 + 0xb;
LAB_0152a254:
    *(long *)(this + 0x120) = lVar3;
    *(undefined4 *)(this + 0x11c) = uVar1;
    return;
  case 1:
  case 9:
    goto switchD_0152a1d0_caseD_1;
  case 2:
    lVar3 = (**(code **)(**(long **)(uVar2 + 0xb) + 0x30))();
    lVar3 = lVar3 + (long)iVar4 * 2;
    this[0x118] = (State)0x0;
    goto LAB_0152a254;
  case 3:
  case 0xb:
    iVar4 = iVar4 + (*(int *)(uVar2 + 0xf) >> 1);
    goto switchD_0152a1d0_caseD_5;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 5:
  case 0xd:
    goto switchD_0152a1d0_caseD_5;
  case 8:
    lVar3 = uVar2 + (long)iVar4 + 0xb;
    break;
  case 10:
    lVar3 = (**(code **)(**(long **)(uVar2 + 0xb) + 0x30))();
    lVar3 = lVar3 + iVar4;
  }
  this[0x118] = (State)0x1;
  goto LAB_0152a254;
switchD_0152a1d0_caseD_5:
  uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb);
  goto LAB_0152a1a8;
}

