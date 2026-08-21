
/* v8::internal::Deoptimizer::New(unsigned long, v8::internal::DeoptimizeKind, unsigned int,
   unsigned long, int, v8::internal::Isolate*) */

Deoptimizer *
v8::internal::Deoptimizer::New
          (undefined8 param_1,ulong param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5
          ,long param_6)

{
  Deoptimizer *pDVar1;
  
  pDVar1 = Malloced::operator_new((Malloced *)0x118,param_2);
  Deoptimizer(pDVar1,param_6,param_1,param_2 & 0xffffffff,param_3,param_4,param_5);
  if (*(long *)(*(long *)(param_6 + 0x9570) + 0x20) == 0) {
    *(Deoptimizer **)(*(long *)(param_6 + 0x9570) + 0x20) = pDVar1;
    return pDVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(isolate->deoptimizer_data()->current_) == nullptr");
}

