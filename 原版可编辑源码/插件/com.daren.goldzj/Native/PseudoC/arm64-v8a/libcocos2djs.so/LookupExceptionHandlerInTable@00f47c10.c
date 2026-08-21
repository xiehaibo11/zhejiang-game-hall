
/* v8::internal::InterpretedFrame::LookupExceptionHandlerInTable(int*,
   v8::internal::HandlerTable::CatchPrediction*) */

void __thiscall
v8::internal::InterpretedFrame::LookupExceptionHandlerInTable
          (InterpretedFrame *this,int *param_1,CatchPrediction *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  HandlerTable aHStack_40 [16];
  
  puVar1 = (undefined8 *)(**(code **)(*(long *)this + 0x90))(this,0xfffffffe);
  HandlerTable::HandlerTable(aHStack_40,*puVar1);
  piVar2 = (int *)(**(code **)(*(long *)this + 0x90))(this,0xffffffff);
  HandlerTable::LookupRange(aHStack_40,(*piVar2 >> 1) + -0x21,param_1,param_2);
  return;
}

