
/* v8::internal::compiler::Type::Range(v8::internal::compiler::RangeType::Limits,
   v8::internal::Zone*) */

undefined4 * __thiscall
v8::internal::compiler::Type::Range(double param_1,double param_2,Type *this)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (-2147483648.0 <= param_1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
    if (param_2 < -2147483648.0) goto LAB_0130a51c;
  }
  if ((((((-1073741824.0 <= param_1) || (uVar2 = uVar2 | 8, -1073741824.0 <= param_2)) &&
        ((0.0 <= param_1 || (uVar2 = uVar2 | 0x40, 0.0 <= param_2)))) &&
       ((1073741824.0 <= param_1 || (uVar2 = uVar2 | 0x400, 1073741824.0 <= param_2)))) &&
      ((2147483648.0 <= param_1 || (uVar2 = uVar2 | 2, 2147483648.0 <= param_2)))) &&
     ((4294967296.0 <= param_1 || (uVar2 = uVar2 | 4, 4294967296.0 <= param_2)))) {
    uVar2 = uVar2 | 0x10;
  }
LAB_0130a51c:
  puVar1 = *(undefined4 **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)puVar1) < 0x18) {
    puVar1 = (undefined4 *)Zone::NewExpand((Zone *)this,0x18);
  }
  else {
    *(undefined4 **)(this + 0x10) = puVar1 + 6;
  }
  *puVar1 = 4;
  puVar1[1] = uVar2;
  *(double *)(puVar1 + 2) = param_1;
  *(double *)(puVar1 + 4) = param_2;
  return puVar1;
}

