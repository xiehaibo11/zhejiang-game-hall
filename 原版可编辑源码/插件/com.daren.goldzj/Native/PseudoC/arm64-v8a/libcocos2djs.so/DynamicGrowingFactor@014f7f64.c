
/* v8::internal::MemoryController<v8::internal::V8HeapTrait>::DynamicGrowingFactor(double, double,
   double) */

undefined1  [16]
v8::internal::MemoryController<v8::internal::V8HeapTrait>::DynamicGrowingFactor
          (double param_1,double param_2,double param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 in_register_00005048;
  
  if ((param_1 != 0.0) && (param_2 != 0.0)) {
    dVar1 = (param_1 / param_2) * 0.030000000000000027;
    dVar3 = dVar1 / (dVar1 + -0.97);
    if ((dVar1 + -0.97) * param_3 <= dVar1) {
      dVar3 = param_3;
    }
    if (param_3 <= dVar3) {
      dVar3 = param_3;
    }
    in_register_00005048 = 0;
    param_3 = dVar3;
    if (dVar3 <= 1.1) {
      in_register_00005048 = 0;
      param_3 = 1.1;
    }
  }
  auVar2._8_8_ = in_register_00005048;
  auVar2._0_8_ = param_3;
  return auVar2;
}

