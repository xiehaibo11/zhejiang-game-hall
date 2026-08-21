
/* v8::internal::JSDate::GetUTCField(v8::internal::JSDate::FieldIndex, double,
   v8::internal::DateCache*) */

ulong __thiscall
v8::internal::JSDate::GetUTCField(double param_1,JSDate *this,int param_3,DateCache *param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  int iStack_34;
  int local_18;
  int iStack_14;
  
  if (NAN(param_1)) {
    return *(ulong *)(((ulong)*(uint *)(this + 4) << 0x20) + 0x430);
  }
  lVar5 = (long)param_1;
  if (param_3 == 0x15) {
    Isolate::CountUsage((ulong)*(uint *)(this + 4) << 0x20,0x4a);
    iVar3 = (**(code **)(*(long *)param_4 + 0x18))(param_4,lVar5,1);
    iVar3 = (int)((ulong)((long)iVar3 * -0x45e7b273) >> 0x20);
    uVar4 = (ulong)(uint)((iVar3 >> 0xe) - (iVar3 >> 0x1f));
    goto switchD_010dc5cc_caseD_14;
  }
  lVar2 = lVar5;
  if (lVar5 < 0) {
    lVar2 = lVar5 + -86399999;
  }
  iVar3 = (int)(lVar2 / 86400000);
  if (param_3 == 0xe) {
    uVar1 = (iVar3 + 4) % 7;
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + 7;
    }
    uVar4 = (ulong)uVar1;
    goto switchD_010dc5cc_caseD_14;
  }
  if (param_3 < 0xe) {
    piVar6 = &iStack_14;
    DateCache::YearMonthDayFromDays(param_4,iVar3,&iStack_14,&local_18,&iStack_34);
    if (param_3 != 0xb) {
      if (param_3 == 0xc) {
        piVar6 = &local_18;
      }
      else {
        piVar6 = &iStack_34;
      }
    }
    return (long)*piVar6 << 1;
  }
  if (5 < param_3 - 0xfU) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar4 = lVar5 + (long)iVar3 * -86400000;
  iVar3 = (int)uVar4;
  switch(param_3) {
  case 0xf:
    uVar4 = (ulong)(uint)(iVar3 / 3600000);
    break;
  case 0x10:
    iVar3 = iVar3 / 60000;
    goto LAB_010dc664;
  case 0x11:
    iVar3 = iVar3 / 1000;
LAB_010dc664:
    uVar4 = (ulong)(uint)(iVar3 % 0x3c);
    break;
  case 0x12:
    uVar4 = (ulong)(uint)(iVar3 % 1000);
    break;
  case 0x13:
    return (lVar2 / 86400000 << 0x20) >> 0x1f;
  }
switchD_010dc5cc_caseD_14:
  return -(uVar4 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar4 & 0xffffffff) << 1;
}

