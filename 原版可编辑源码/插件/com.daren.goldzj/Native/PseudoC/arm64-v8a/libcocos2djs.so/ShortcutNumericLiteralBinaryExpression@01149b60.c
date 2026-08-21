
/* v8::internal::Parser::ShortcutNumericLiteralBinaryExpression(v8::internal::Expression**,
   v8::internal::Expression*, v8::internal::Token::Value, int) */

undefined8 __thiscall
v8::internal::Parser::ShortcutNumericLiteralBinaryExpression
          (Parser *this,long *param_1,Expression *param_2,undefined1 param_4,int param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar1 = Expression::IsNumberLiteral((Expression *)*param_1);
  if (((uVar1 & 1) == 0) || (uVar1 = Expression::IsNumberLiteral(param_2), (uVar1 & 1) == 0)) {
    return 0;
  }
  lVar5 = *param_1;
  if ((*(uint *)(lVar5 + 4) & 0x3f) != 0x29) {
    lVar5 = 0;
  }
  uVar6 = *(uint *)(lVar5 + 4) >> 7 & 0xf;
  if (uVar6 == 1) {
    dVar8 = *(double *)(lVar5 + 8);
  }
  else {
    if (uVar6 != 0) goto LAB_0114a6fc;
    dVar8 = (double)(long)*(int *)(lVar5 + 8);
  }
  if ((*(uint *)(param_2 + 4) & 0x3f) != 0x29) {
    param_2 = (Expression *)0x0;
  }
  uVar6 = *(uint *)(param_2 + 4) >> 7 & 0xf;
  if (uVar6 == 1) {
    dVar10 = *(double *)(param_2 + 8);
  }
  else {
    if (uVar6 != 0) {
LAB_0114a6fc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    dVar10 = (double)(long)*(int *)(param_2 + 8);
  }
  uVar2 = 0;
  uVar6 = (uint)((ulong)dVar8 >> 0x20);
  uVar7 = (uint)((ulong)dVar10 >> 0x20);
  switch(param_4) {
  case 0x22:
    if (((dVar8 < -2147483648.0) || (2147483647.0 < dVar8)) ||
       ((ABS(dVar8) == INFINITY ||
        ((NAN(ABS(dVar8)) || (uVar3 = (int)dVar8, dVar8 != (double)(int)dVar8)))))) {
      uVar4 = 0xfffffbce;
      if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
        uVar4 = (uVar6 >> 0x14 & 0x7ff) - 0x433;
      }
      if ((int)uVar4 < 0) {
        if ((int)uVar4 < -0x34) goto LAB_0114a074;
        uVar1 = (ulong)dVar8 & 0xfffffffffffff;
        if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 >> ((ulong)-uVar4 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar4) {
LAB_0114a074:
          uVar3 = 0;
          goto LAB_0114a0f0;
        }
        uVar1 = (ulong)dVar8 & 0xfffffffffffff;
        if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 << ((ulong)uVar4 & 0x3f));
      }
      uVar3 = -uVar6;
      if (-1 < (long)dVar8) {
        uVar3 = uVar6;
      }
    }
LAB_0114a0f0:
    if ((((dVar10 < -2147483648.0) || (2147483647.0 < dVar10)) || (ABS(dVar10) == INFINITY)) ||
       ((NAN(ABS(dVar10)) || (uVar6 = (int)dVar10, dVar10 != (double)(int)dVar10)))) {
      uVar6 = 0xfffffbce;
      if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
        uVar6 = (uVar7 >> 0x14 & 0x7ff) - 0x433;
      }
      if ((int)uVar6 < 0) {
        if (-0x35 < (int)uVar6) {
          uVar1 = (ulong)dVar10 & 0xfffffffffffff;
          if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
            uVar1 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
          }
          uVar7 = (uint)(uVar1 >> ((ulong)-uVar6 & 0x3f));
          goto LAB_0114a428;
        }
      }
      else if ((int)uVar6 < 0x20) {
        uVar1 = (ulong)dVar10 & 0xfffffffffffff;
        if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar7 = (uint)(uVar1 << ((ulong)uVar6 & 0x3f));
LAB_0114a428:
        uVar6 = -uVar7;
        if (-1 < (long)dVar10) {
          uVar6 = uVar7;
        }
        goto LAB_0114a430;
      }
    }
    else {
LAB_0114a430:
      uVar3 = uVar6 | uVar3;
    }
    goto LAB_0114a6d0;
  case 0x23:
    if (((dVar8 < -2147483648.0) || (2147483647.0 < dVar8)) ||
       ((ABS(dVar8) == INFINITY ||
        ((NAN(ABS(dVar8)) || (uVar3 = (int)dVar8, dVar8 != (double)(int)dVar8)))))) {
      uVar4 = 0xfffffbce;
      if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
        uVar4 = (uVar6 >> 0x14 & 0x7ff) - 0x433;
      }
      if ((int)uVar4 < 0) {
        if ((int)uVar4 < -0x34) goto LAB_0114a0b4;
        uVar1 = (ulong)dVar8 & 0xfffffffffffff;
        if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 >> ((ulong)-uVar4 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar4) {
LAB_0114a0b4:
          uVar3 = 0;
          goto LAB_0114a500;
        }
        uVar1 = (ulong)dVar8 & 0xfffffffffffff;
        if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 << ((ulong)uVar4 & 0x3f));
      }
      uVar3 = -uVar6;
      if (-1 < (long)dVar8) {
        uVar3 = uVar6;
      }
    }
LAB_0114a500:
    if ((((dVar10 < -2147483648.0) || (2147483647.0 < dVar10)) || (ABS(dVar10) == INFINITY)) ||
       ((NAN(ABS(dVar10)) || (uVar6 = (int)dVar10, dVar10 != (double)(int)dVar10)))) {
      uVar6 = 0xfffffbce;
      if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
        uVar6 = (uVar7 >> 0x14 & 0x7ff) - 0x433;
      }
      if ((int)uVar6 < 0) {
        if (-0x35 < (int)uVar6) {
          uVar1 = (ulong)dVar10 & 0xfffffffffffff;
          if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
            uVar1 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
          }
          uVar7 = (uint)(uVar1 >> ((ulong)-uVar6 & 0x3f));
          goto LAB_0114a698;
        }
      }
      else if ((int)uVar6 < 0x20) {
        uVar1 = (ulong)dVar10 & 0xfffffffffffff;
        if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar7 = (uint)(uVar1 << ((ulong)uVar6 & 0x3f));
LAB_0114a698:
        uVar6 = -uVar7;
        if (-1 < (long)dVar10) {
          uVar6 = uVar7;
        }
        goto LAB_0114a6a0;
      }
    }
    else {
LAB_0114a6a0:
      uVar3 = uVar6 ^ uVar3;
    }
    goto LAB_0114a6d0;
  case 0x24:
    if (((dVar8 < -2147483648.0) || (2147483647.0 < dVar8)) ||
       ((ABS(dVar8) == INFINITY ||
        ((NAN(ABS(dVar8)) || (uVar4 = (int)dVar8, dVar8 != (double)(int)dVar8)))))) {
      uVar4 = 0xfffffbce;
      if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
        uVar4 = (uVar6 >> 0x14 & 0x7ff) - 0x433;
      }
      if ((int)uVar4 < 0) {
        if ((int)uVar4 < -0x34) goto LAB_0114a0c4;
        uVar1 = (ulong)dVar8 & 0xfffffffffffff;
        if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 >> ((ulong)-uVar4 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar4) {
LAB_0114a0c4:
          uVar4 = 0;
          goto LAB_0114a5d0;
        }
        uVar1 = (ulong)dVar8 & 0xfffffffffffff;
        if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 << ((ulong)uVar4 & 0x3f));
      }
      uVar4 = -uVar6;
      if (-1 < (long)dVar8) {
        uVar4 = uVar6;
      }
    }
LAB_0114a5d0:
    if ((((dVar10 < -2147483648.0) || (2147483647.0 < dVar10)) || (ABS(dVar10) == INFINITY)) ||
       ((NAN(ABS(dVar10)) || (uVar3 = (int)dVar10, dVar10 != (double)(int)dVar10)))) {
      uVar6 = 0xfffffbce;
      if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
        uVar6 = (uVar7 >> 0x14 & 0x7ff) - 0x433;
      }
      if ((int)uVar6 < 0) {
        if ((int)uVar6 < -0x34) goto LAB_0114a670;
        uVar1 = (ulong)dVar10 & 0xfffffffffffff;
        if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 >> ((ulong)-uVar6 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar6) {
LAB_0114a670:
          uVar3 = 0;
          goto LAB_0114a6d0;
        }
        uVar1 = (ulong)dVar10 & 0xfffffffffffff;
        if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 << ((ulong)uVar6 & 0x3f));
      }
      uVar3 = -uVar6;
      if (-1 < (long)dVar10) {
        uVar3 = uVar6;
      }
    }
    uVar3 = uVar3 & uVar4;
    goto LAB_0114a6d0;
  case 0x25:
    if (((dVar8 < -2147483648.0) || (2147483647.0 < dVar8)) ||
       ((ABS(dVar8) == INFINITY ||
        ((NAN(ABS(dVar8)) || (uVar3 = (int)dVar8, dVar8 != (double)(int)dVar8)))))) {
      uVar4 = 0xfffffbce;
      if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
        uVar4 = (uVar6 >> 0x14 & 0x7ff) - 0x433;
      }
      if ((int)uVar4 < 0) {
        if ((int)uVar4 < -0x34) goto LAB_0114a084;
        uVar1 = (ulong)dVar8 & 0xfffffffffffff;
        if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 >> ((ulong)-uVar4 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar4) {
LAB_0114a084:
          uVar3 = 0;
          goto LAB_0114a1c0;
        }
        uVar1 = (ulong)dVar8 & 0xfffffffffffff;
        if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 << ((ulong)uVar4 & 0x3f));
      }
      uVar3 = -uVar6;
      if (-1 < (long)dVar8) {
        uVar3 = uVar6;
      }
    }
LAB_0114a1c0:
    if ((((dVar10 < -2147483648.0) || (2147483647.0 < dVar10)) || (ABS(dVar10) == INFINITY)) ||
       ((NAN(ABS(dVar10)) || (uVar6 = (int)dVar10, dVar10 != (double)(int)dVar10)))) {
      uVar6 = 0xfffffbce;
      if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
        uVar6 = (uVar7 >> 0x14 & 0x7ff) - 0x433;
      }
      if ((int)uVar6 < 0) {
        if (-0x35 < (int)uVar6) {
          uVar1 = (ulong)dVar10 & 0xfffffffffffff;
          if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
            uVar1 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
          }
          uVar7 = (uint)(uVar1 >> ((ulong)-uVar6 & 0x3f));
          goto LAB_0114a454;
        }
      }
      else if ((int)uVar6 < 0x20) {
        uVar1 = (ulong)dVar10 & 0xfffffffffffff;
        if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar7 = (uint)(uVar1 << ((ulong)uVar6 & 0x3f));
LAB_0114a454:
        uVar6 = -uVar7;
        if (-1 < (long)dVar10) {
          uVar6 = uVar7;
        }
        goto LAB_0114a45c;
      }
    }
    else {
LAB_0114a45c:
      uVar3 = uVar3 << (ulong)(uVar6 & 0x1f);
    }
LAB_0114a6d0:
    dVar9 = (double)(int)uVar3;
    break;
  case 0x26:
    if (((dVar10 < -2147483648.0) || (2147483647.0 < dVar10)) ||
       ((ABS(dVar10) == INFINITY ||
        ((NAN(ABS(dVar10)) || (uVar4 = (int)dVar10, dVar10 != (double)(int)dVar10)))))) {
      uVar4 = 0xfffffbce;
      if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
        uVar4 = (uVar7 >> 0x14 & 0x7ff) - 0x433;
      }
      if ((int)uVar4 < 0) {
        if ((int)uVar4 < -0x34) goto LAB_0114a094;
        uVar1 = (ulong)dVar10 & 0xfffffffffffff;
        if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar7 = (uint)(uVar1 >> ((ulong)-uVar4 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar4) {
LAB_0114a094:
          uVar4 = 0;
          goto LAB_0114a290;
        }
        uVar1 = (ulong)dVar10 & 0xfffffffffffff;
        if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar7 = (uint)(uVar1 << ((ulong)uVar4 & 0x3f));
      }
      uVar4 = -uVar7;
      if (-1 < (long)dVar10) {
        uVar4 = uVar7;
      }
    }
LAB_0114a290:
    uVar4 = uVar4 & 0x1f;
    if ((((dVar8 < -2147483648.0) || (2147483647.0 < dVar8)) || (ABS(dVar8) == INFINITY)) ||
       ((NAN(ABS(dVar8)) || (uVar3 = (int)dVar8, dVar8 != (double)(int)dVar8)))) {
      uVar7 = 0xfffffbce;
      if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
        uVar7 = (uVar6 >> 0x14 & 0x7ff) - 0x433;
      }
      if ((int)uVar7 < 0) {
        if (-0x35 < (int)uVar7) {
          uVar1 = (ulong)dVar8 & 0xfffffffffffff;
          if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
            uVar1 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
          }
          uVar6 = (uint)(uVar1 >> ((ulong)-uVar7 & 0x3f));
          goto LAB_0114a480;
        }
      }
      else if ((int)uVar7 < 0x20) {
        uVar1 = (ulong)dVar8 & 0xfffffffffffff;
        if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 << ((ulong)uVar7 & 0x3f));
LAB_0114a480:
        uVar3 = -uVar6;
        if (-1 < (long)dVar8) {
          uVar3 = uVar6;
        }
        goto LAB_0114a488;
      }
      uVar3 = 0;
    }
    else {
LAB_0114a488:
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 >> (ulong)uVar4 | 0xffffffffU >> (ulong)uVar4 ^ 0xffffffff;
        goto LAB_0114a6d0;
      }
    }
    uVar3 = uVar3 >> (ulong)uVar4;
    goto LAB_0114a6d0;
  case 0x27:
    if (((dVar10 < -2147483648.0) || (2147483647.0 < dVar10)) ||
       ((ABS(dVar10) == INFINITY ||
        ((NAN(ABS(dVar10)) || (uVar4 = (int)dVar10, dVar10 != (double)(int)dVar10)))))) {
      uVar4 = 0xfffffbce;
      if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
        uVar4 = (uVar7 >> 0x14 & 0x7ff) - 0x433;
      }
      if ((int)uVar4 < 0) {
        if ((int)uVar4 < -0x34) goto LAB_0114a0a4;
        uVar1 = (ulong)dVar10 & 0xfffffffffffff;
        if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar7 = (uint)(uVar1 >> ((ulong)-uVar4 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar4) {
LAB_0114a0a4:
          uVar4 = 0;
          goto LAB_0114a360;
        }
        uVar1 = (ulong)dVar10 & 0xfffffffffffff;
        if (((ulong)dVar10 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar10 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar7 = (uint)(uVar1 << ((ulong)uVar4 & 0x3f));
      }
      uVar4 = -uVar7;
      if (-1 < (long)dVar10) {
        uVar4 = uVar7;
      }
    }
LAB_0114a360:
    if ((((dVar8 < -2147483648.0) || (2147483647.0 < dVar8)) || (ABS(dVar8) == INFINITY)) ||
       ((NAN(ABS(dVar8)) || (uVar7 = (int)dVar8, dVar8 != (double)(int)dVar8)))) {
      uVar7 = 0xfffffbce;
      if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
        uVar7 = (uVar6 >> 0x14 & 0x7ff) - 0x433;
      }
      if ((int)uVar7 < 0) {
        if ((int)uVar7 < -0x34) goto LAB_0114a404;
        uVar1 = (ulong)dVar8 & 0xfffffffffffff;
        if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 >> ((ulong)-uVar7 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar7) {
LAB_0114a404:
          uVar7 = 0;
          goto LAB_0114a4cc;
        }
        uVar1 = (ulong)dVar8 & 0xfffffffffffff;
        if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
          uVar1 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar6 = (uint)(uVar1 << ((ulong)uVar7 & 0x3f));
      }
      uVar7 = -uVar6;
      if (-1 < (long)dVar8) {
        uVar7 = uVar6;
      }
    }
LAB_0114a4cc:
    dVar9 = (double)(uVar7 >> (ulong)(uVar4 & 0x1f));
    break;
  case 0x28:
    dVar9 = dVar8 * dVar10;
    break;
  case 0x29:
    if (dVar10 == 0.0) {
      dVar9 = NAN;
      if (((dVar8 != 0.0) && (!NAN(dVar8))) && (dVar9 = INFINITY, 0.0 <= dVar8 == (long)dVar10 < 0))
      {
        dVar9 = -INFINITY;
      }
    }
    else {
      dVar9 = dVar8 / dVar10;
    }
    break;
  default:
    goto switchD_01149c48_caseD_2a;
  case 0x2b:
    dVar9 = (double)base::ieee754::pow(dVar8,dVar10);
    break;
  case 0x2c:
    dVar9 = dVar8 + dVar10;
    break;
  case 0x2d:
    dVar9 = dVar8 - dVar10;
  }
  lVar5 = AstNodeFactory::NewNumberLiteral((AstNodeFactory *)(this + 0x68),dVar9,param_5);
  *param_1 = lVar5;
  uVar2 = 1;
switchD_01149c48_caseD_2a:
  return uVar2;
}

