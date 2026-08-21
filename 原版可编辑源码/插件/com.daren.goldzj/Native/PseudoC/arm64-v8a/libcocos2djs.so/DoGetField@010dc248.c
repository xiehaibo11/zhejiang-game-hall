
/* v8::internal::JSDate::DoGetField(v8::internal::JSDate::FieldIndex) */

ulong __thiscall v8::internal::JSDate::DoGetField(JSDate *this,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  DateCache *pDVar7;
  double dVar8;
  JSDate *pJVar9;
  
  uVar5 = *(ulong *)this;
  uVar4 = uVar5 & 0xffffffff00000000;
  pDVar7 = *(DateCache **)(uVar4 | 0xb638);
  if (param_2 < 8) {
    if (((*(uint *)(uVar5 + 0x2b) & 1) == 0) && (*(uint *)(uVar5 + 0x2b) != *(uint *)(pDVar7 + 8)))
    {
      uVar2 = *(uint *)(uVar5 + 0xb);
      if ((uVar2 & 1) == 0) {
        dVar8 = (double)((int)uVar2 >> 1);
      }
      else {
        dVar8 = *(double *)((uVar4 | uVar2) + 3);
      }
      iVar3 = (**(code **)(*(long *)pDVar7 + 0x18))(pDVar7,(long)dVar8,1);
      SetCachedFields(this,(long)dVar8 + (long)iVar3,pDVar7);
    }
    switch(param_2) {
    case 1:
      uVar5 = *(ulong *)this;
      uVar4 = (ulong)*(uint *)(uVar5 + 0xf);
      break;
    case 2:
      uVar5 = *(ulong *)this;
      uVar4 = (ulong)*(uint *)(uVar5 + 0x13);
      break;
    case 3:
      uVar5 = *(ulong *)this;
      uVar4 = (ulong)*(uint *)(uVar5 + 0x17);
      break;
    case 4:
      uVar5 = *(ulong *)this;
      uVar4 = (ulong)*(uint *)(uVar5 + 0x1b);
      break;
    case 5:
      uVar5 = *(ulong *)this;
      uVar4 = (ulong)*(uint *)(uVar5 + 0x1f);
      break;
    case 6:
      uVar5 = *(ulong *)this;
      uVar4 = (ulong)*(uint *)(uVar5 + 0x23);
      break;
    case 7:
      uVar5 = *(ulong *)this;
      uVar4 = (ulong)*(uint *)(uVar5 + 0x27);
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar4 = uVar5 & 0xffffffff00000000 | uVar4;
  }
  else {
    uVar2 = *(uint *)(uVar5 + 0xb);
    if (10 < param_2) {
      if ((uVar2 & 1) == 0) {
        pJVar9 = (JSDate *)(double)((int)uVar2 >> 1);
      }
      else {
        pJVar9 = *(JSDate **)((uVar4 | uVar2) + 3);
      }
      uVar4 = GetUTCField(pJVar9,this,param_2,pDVar7);
      return uVar4;
    }
    if ((uVar2 & 1) == 0) {
      dVar8 = (double)((int)uVar2 >> 1);
    }
    else {
      dVar8 = *(double *)((uVar4 | uVar2) + 3);
      if (NAN(dVar8)) {
        return *(ulong *)(uVar4 + 0x430);
      }
    }
    iVar3 = (**(code **)(*(long *)pDVar7 + 0x18))(pDVar7,(long)dVar8,1);
    lVar1 = (long)dVar8 + (long)iVar3;
    lVar6 = lVar1;
    if (lVar1 < 0) {
      lVar6 = lVar1 + -86399999;
    }
    lVar6 = (ulong)(uint)((int)(SUB168(SEXT816(lVar6) * SEXT816(0x636ba875fd33dc87),8) >> 0x19) -
                         (SUB164(SEXT816(lVar6) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f)) << 0x20
    ;
    if (param_2 == 9) {
      uVar4 = lVar6 >> 0x1f;
    }
    else {
      uVar4 = lVar1 + (lVar6 >> 0x20) * -86400000;
      if (param_2 == 8) {
        uVar4 = (ulong)(uint)((int)uVar4 % 1000);
      }
      uVar4 = -(uVar4 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar4 & 0xffffffff) << 1;
    }
  }
  return uVar4;
}

