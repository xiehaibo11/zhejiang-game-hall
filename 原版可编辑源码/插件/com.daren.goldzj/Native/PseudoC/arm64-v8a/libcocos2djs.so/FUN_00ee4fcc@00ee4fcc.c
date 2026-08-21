
void FUN_00ee4fcc(long *param_1)

{
  int iVar1;
  TimedHistogram *this;
  long lVar2;
  long lVar3;
  
  if (*(char *)((long)param_1 + 0x25) != '\0') {
switchD_00ee50f8_caseD_e:
    v8::internal::Histogram::AddSample((int)*(undefined8 *)(*param_1 + 0x9520) + 0x6c0);
    lVar2 = *param_1;
    lVar3 = 0x1390;
    goto LAB_00ee5060;
  }
  if (*(char *)((long)param_1 + 0x26) != '\0') {
    if (*(char *)((long)param_1 + 0x24) == '\0') {
      iVar1 = (int)*(undefined8 *)(*param_1 + 0x9520) + 0x6c0;
      if (*(char *)((long)param_1 + 0x27) == '\0') {
        v8::internal::Histogram::AddSample(iVar1);
        lVar2 = *(long *)(*param_1 + 0x9520);
        lVar3 = 0x13f0;
      }
      else {
        v8::internal::Histogram::AddSample(iVar1);
        lVar2 = *(long *)(*param_1 + 0x9520);
        lVar3 = 0x1420;
      }
      goto LAB_00ee5064;
    }
LAB_00ee5044:
    v8::internal::Histogram::AddSample((int)*(undefined8 *)(*param_1 + 0x9520) + 0x6c0);
    lVar2 = *param_1;
    lVar3 = 0x13c0;
    goto LAB_00ee5060;
  }
  if (*(char *)((long)param_1 + 0x24) != '\0') goto LAB_00ee5044;
  switch((int)param_1[4]) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    v8::internal::Histogram::AddSample((int)*(undefined8 *)(*param_1 + 0x9520) + 0x6c0);
    lVar2 = *param_1;
    lVar3 = 0x1480;
    goto LAB_00ee5060;
  case 4:
    break;
  case 5:
    v8::internal::Histogram::AddSample((int)*(undefined8 *)(*param_1 + 0x9520) + 0x6c0);
    lVar2 = *param_1;
    lVar3 = 0x1510;
    goto LAB_00ee5060;
  case 6:
    break;
  case 7:
    v8::internal::Histogram::AddSample((int)*(undefined8 *)(*param_1 + 0x9520) + 0x6c0);
    lVar2 = *param_1;
    lVar3 = 0x14b0;
    goto LAB_00ee5060;
  case 8:
    v8::internal::Histogram::AddSample((int)*(undefined8 *)(*param_1 + 0x9520) + 0x6c0);
    lVar2 = *param_1;
    lVar3 = 0x14e0;
    goto LAB_00ee5060;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    goto switchD_00ee50f8_caseD_e;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  v8::internal::Histogram::AddSample((int)*(undefined8 *)(*param_1 + 0x9520) + 0x6c0);
  lVar2 = *param_1;
  lVar3 = 0x1450;
LAB_00ee5060:
  lVar2 = *(long *)(lVar2 + 0x9520);
LAB_00ee5064:
  this = (TimedHistogram *)param_1[3];
  param_1[2] = lVar2 + lVar3;
  v8::internal::TimedHistogram::Stop
            (this,(ElapsedTimer *)(this + 0x30),*(Isolate **)(*(long *)(this + 0x20) + 0x10));
  v8::internal::TimedHistogram::Stop
            ((TimedHistogram *)param_1[2],(ElapsedTimer *)(param_1 + 1),(Isolate *)0x0);
  return;
}

