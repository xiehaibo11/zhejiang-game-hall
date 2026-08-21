
/* v8::internal::MessageHandler::MakeMessageObject(v8::internal::Isolate*,
   v8::internal::MessageTemplate, v8::internal::MessageLocation const*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::FixedArray>) */

void v8::internal::MessageHandler::MakeMessageObject
               (Factory *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
               Factory *param_5)

{
  Factory *pFVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  Factory *pFVar5;
  undefined4 uVar6;
  
  if (param_3 == (long *)0x0) {
    lVar3 = 0;
    pFVar5 = param_1 + 0xe88;
    uVar4 = 0xffffffff;
    uVar6 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (undefined4)param_3[1];
    uVar6 = *(undefined4 *)((long)param_3 + 0xc);
    pFVar5 = (Factory *)*param_3;
    uVar4 = (undefined4)param_3[2];
    lVar3 = param_3[3];
  }
  pFVar1 = param_1 + 0xa0;
  if (param_5 != (Factory *)0x0) {
    pFVar1 = param_5;
  }
  Factory::NewJSMessageObject(param_1,param_2,param_4,uVar2,uVar6,lVar3,uVar4,pFVar5,pFVar1);
  return;
}

