
/* v8::internal::MaterializedLiteral::GetBoilerplateValue(v8::internal::Expression*,
   v8::internal::Isolate*) */

Isolate * __thiscall
v8::internal::MaterializedLiteral::GetBoilerplateValue
          (MaterializedLiteral *this,Expression *param_1,Isolate *param_2)

{
  uint uVar1;
  uint uVar2;
  Isolate *pIVar3;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = uVar2 & 0x3f;
  if (uVar1 == 0x29) {
    pIVar3 = (Isolate *)Literal::BuildValue((Literal *)param_1,param_2);
    return pIVar3;
  }
  if (((uVar2 + 0x2b & 0x3f) < 3) &&
     (((uVar1 == 0x16 || (uVar1 == 0x17)) && ((uVar2 >> 8 & 1) != 0)))) {
    return *(Isolate **)(param_1 + 0x10);
  }
  return param_2 + 0x98;
}

