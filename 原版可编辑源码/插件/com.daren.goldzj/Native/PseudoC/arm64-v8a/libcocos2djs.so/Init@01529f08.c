
/* v8::internal::StringComparator::State::Init(v8::internal::String) */

void __thiscall v8::internal::StringComparator::State::Init(State *this,ulong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int local_14;
  
  uVar1 = *(undefined4 *)(param_2 + 7);
  iVar4 = 0;
LAB_01529f2c:
  switch(*(ushort *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1)) + 7) & 0xf) {
  case 0:
    lVar3 = param_2 + (long)iVar4 * 2 + 0xb;
LAB_01529fc4:
    this[0x118] = (State)0x0;
LAB_01529ff8:
    *(long *)(this + 0x120) = lVar3;
    *(undefined4 *)(this + 0x11c) = uVar1;
    *(undefined4 *)(this + 0x108) = 0;
    return;
  case 1:
  case 9:
    *(undefined4 *)(this + 0x108) = 0;
    if ((int)param_2 == 0) {
      return;
    }
    ConsStringIterator::Initialize((ConsStringIterator *)this,param_2,0);
    local_14 = 0;
    if (*(int *)(this + 0x108) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = ConsStringIterator::Continue((ConsStringIterator *)this,&local_14);
    }
    String::VisitFlat<v8::internal::StringComparator::State>(this,uVar2,local_14);
    return;
  case 2:
    lVar3 = (**(code **)(**(long **)(param_2 + 0xb) + 0x30))();
    lVar3 = lVar3 + (long)iVar4 * 2;
    goto LAB_01529fc4;
  case 3:
  case 0xb:
    iVar4 = iVar4 + (*(int *)(param_2 + 0xf) >> 1);
    goto switchD_01529f54_caseD_5;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 5:
  case 0xd:
    goto switchD_01529f54_caseD_5;
  case 8:
    lVar3 = param_2 + (long)iVar4 + 0xb;
    break;
  case 10:
    lVar3 = (**(code **)(**(long **)(param_2 + 0xb) + 0x30))();
    lVar3 = lVar3 + iVar4;
  }
  this[0x118] = (State)0x1;
  goto LAB_01529ff8;
switchD_01529f54_caseD_5:
  param_2 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb);
  goto LAB_01529f2c;
}

