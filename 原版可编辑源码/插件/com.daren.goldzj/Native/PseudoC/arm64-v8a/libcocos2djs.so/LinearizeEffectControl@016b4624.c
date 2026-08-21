
/* v8::internal::compiler::LinearizeEffectControl(v8::internal::compiler::JSGraph*,
   v8::internal::compiler::Schedule*, v8::internal::Zone*,
   v8::internal::compiler::SourcePositionTable*, v8::internal::compiler::NodeOriginTable*,
   v8::internal::compiler::MaskArrayIndexEnable, v8::internal::compiler::MaintainSchedule) */

void v8::internal::compiler::LinearizeEffectControl
               (JSGraph *param_1,Schedule *param_2,Zone *param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,int param_7)

{
  Schedule *pSVar1;
  JSGraph *local_98;
  Schedule *pSStack_90;
  Zone *local_88;
  undefined4 local_80;
  int iStack_7c;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  GraphAssembler aGStack_60 [56];
  undefined8 local_28;
  
  pSVar1 = param_2;
  if (param_7 != 0) {
    pSVar1 = (Schedule *)0x0;
  }
  local_78 = 0;
  local_98 = param_1;
  pSStack_90 = param_2;
  local_88 = param_3;
  local_80 = param_6;
  iStack_7c = param_7;
  local_70 = param_4;
  uStack_68 = param_5;
  GraphAssembler::GraphAssembler(aGStack_60,param_1,param_3,pSVar1);
  local_28 = 0;
  EffectControlLinearizer::Run((EffectControlLinearizer *)&local_98);
  GraphAssembler::~GraphAssembler(aGStack_60);
  return;
}

