
/* v8::internal::Object::ConvertToInt32(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::Object::ConvertToInt32(Factory *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  puVar3 = (ulong *)ConvertToNumberOrNumeric(param_1,param_2,0);
  if ((puVar3 == (ulong *)0x0) || ((*puVar3 & 1) == 0)) {
    return;
  }
  dVar6 = *(double *)(*puVar3 + 3);
  if ((((-2147483648.0 <= dVar6) && (dVar6 <= 2147483647.0)) && (ABS(dVar6) != INFINITY)) &&
     ((!NAN(ABS(dVar6)) && (iVar4 = (int)dVar6, dVar6 == (double)(int)dVar6)))) goto LAB_01103ce0;
  uVar1 = 0xfffffbce;
  if (((ulong)dVar6 & 0x7ff0000000000000) != 0) {
    uVar1 = ((uint)((ulong)dVar6 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x34) goto LAB_01103cb4;
    uVar2 = (ulong)dVar6 & 0xfffffffffffff;
    if (((ulong)dVar6 & 0x7ff0000000000000) != 0) {
      uVar2 = (ulong)dVar6 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar5 = (int)(uVar2 >> ((ulong)-uVar1 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar1) {
LAB_01103cb4:
      iVar4 = 0;
      goto LAB_01103ce0;
    }
    uVar2 = (ulong)dVar6 & 0xfffffffffffff;
    if (((ulong)dVar6 & 0x7ff0000000000000) != 0) {
      uVar2 = (ulong)dVar6 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar5 = (int)(uVar2 << ((ulong)uVar1 & 0x3f));
  }
  iVar4 = -iVar5;
  if (-1 < (long)dVar6) {
    iVar4 = iVar5;
  }
LAB_01103ce0:
  Factory::NewNumberFromInt(param_1,iVar4);
  return;
}

