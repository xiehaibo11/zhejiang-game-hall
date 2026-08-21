
/* v8::internal::Parser::BuildUnaryExpression(v8::internal::Expression*, v8::internal::Token::Value,
   int) */

Literal * __thiscall
v8::internal::Parser::BuildUnaryExpression(Parser *this,Literal *param_1,byte param_3,int param_4)

{
  byte bVar1;
  Zone *pZVar2;
  ulong uVar3;
  Literal *pLVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  
  if ((param_1 == (Literal *)0x0) || ((*(uint *)(param_1 + 4) & 0x3f) != 0x29)) {
LAB_0114ac10:
    pZVar2 = *(Zone **)(this + 0x68);
    pLVar4 = *(Literal **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pLVar4) < 0x10) {
      pLVar4 = (Literal *)Zone::NewExpand(pZVar2,0x10);
    }
    else {
      *(Literal **)(pZVar2 + 0x10) = pLVar4 + 0x10;
    }
    *(Literal **)(pLVar4 + 8) = param_1;
    *(int *)pLVar4 = param_4;
    *(uint *)(pLVar4 + 4) = (uint)param_3 << 7 | 0x34;
    return pLVar4;
  }
  if (param_3 == 0x2e) {
    bVar1 = Literal::ToBooleanIsTrue(param_1);
    pZVar2 = *(Zone **)(this + 0x68);
    pLVar4 = *(Literal **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pLVar4) < 0x10) {
      pLVar4 = (Literal *)Zone::NewExpand(pZVar2,0x10);
    }
    else {
      *(Literal **)(pZVar2 + 0x10) = pLVar4 + 0x10;
    }
    pLVar4[8] = (Literal)((bVar1 ^ 1) & 1);
    *(int *)pLVar4 = param_4;
    *(int *)(pLVar4 + 4) = 0x2a9;
    return pLVar4;
  }
  uVar3 = Expression::IsNumberLiteral((Expression *)param_1);
  if ((uVar3 & 1) == 0) goto LAB_0114ac10;
  uVar5 = *(uint *)(param_1 + 4) >> 7 & 0xf;
  if (uVar5 == 1) {
    dVar7 = *(double *)(param_1 + 8);
  }
  else {
    if (uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    dVar7 = (double)(long)*(int *)(param_1 + 8);
  }
  if (param_3 == 0x2c) {
    return param_1;
  }
  if (param_3 != 0x2f) {
    if (param_3 != 0x2d) goto LAB_0114ac10;
    dVar7 = -dVar7;
    goto LAB_0114ad30;
  }
  if ((((dVar7 < -2147483648.0) || (2147483647.0 < dVar7)) || (ABS(dVar7) == INFINITY)) ||
     ((NAN(ABS(dVar7)) || (uVar5 = (int)dVar7, dVar7 != (double)(int)dVar7)))) {
    uVar5 = 0xfffffbce;
    if (((ulong)dVar7 & 0x7ff0000000000000) != 0) {
      uVar5 = ((uint)((ulong)dVar7 >> 0x34) & 0x7ff) - 0x433;
    }
    if ((int)uVar5 < 0) {
      if ((int)uVar5 < -0x34) goto LAB_0114acfc;
      uVar3 = (ulong)dVar7 & 0xfffffffffffff;
      if (((ulong)dVar7 & 0x7ff0000000000000) != 0) {
        uVar3 = (ulong)dVar7 & 0xfffffffffffff | 0x10000000000000;
      }
      uVar6 = (uint)(uVar3 >> ((ulong)-uVar5 & 0x3f));
    }
    else {
      if (0x1f < (int)uVar5) {
LAB_0114acfc:
        uVar5 = 0;
        goto LAB_0114ad28;
      }
      uVar3 = (ulong)dVar7 & 0xfffffffffffff;
      if (((ulong)dVar7 & 0x7ff0000000000000) != 0) {
        uVar3 = (ulong)dVar7 & 0xfffffffffffff | 0x10000000000000;
      }
      uVar6 = (uint)(uVar3 << ((ulong)uVar5 & 0x3f));
    }
    uVar5 = -uVar6;
    if (-1 < (long)dVar7) {
      uVar5 = uVar6;
    }
  }
LAB_0114ad28:
  dVar7 = (double)(int)~uVar5;
LAB_0114ad30:
  pLVar4 = (Literal *)
           AstNodeFactory::NewNumberLiteral((AstNodeFactory *)(this + 0x68),dVar7,param_4);
  return pLVar4;
}

