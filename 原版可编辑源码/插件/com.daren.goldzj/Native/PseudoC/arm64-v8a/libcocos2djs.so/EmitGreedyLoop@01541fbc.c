
/* v8::internal::ChoiceNode::EmitGreedyLoop(v8::internal::RegExpCompiler*, v8::internal::Trace*,
   v8::internal::AlternativeGenerationList*, v8::internal::PreloadState*,
   v8::internal::GreedyLoopState*, int) */

Trace * __thiscall
v8::internal::ChoiceNode::EmitGreedyLoop
          (ChoiceNode *this,RegExpCompiler *param_1,Trace *param_2,
          AlternativeGenerationList *param_3,PreloadState *param_4,GreedyLoopState *param_5,
          int param_6)

{
  long *plVar1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  ChoiceNode *local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_86;
  undefined1 local_82;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_7a;
  undefined1 local_76;
  undefined8 local_74;
  undefined1 local_6c;
  undefined4 local_68;
  int local_64;
  undefined8 local_48;
  
  plVar1 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x128))(plVar1);
  local_c0[0] = 0;
  local_86 = 0;
  local_82 = 0;
  local_80 = 0;
  local_7c = 0;
  local_7a = 0;
  local_76 = 0;
  local_74 = 0;
  local_6c = 0;
  local_88 = 0;
  local_48 = 0;
  local_b8 = 0;
  puStack_a0 = (undefined8 *)0x0;
  local_a8 = (ChoiceNode *)0x0;
  uStack_90 = 0;
  local_98 = 0;
  local_68 = 100;
  puStack_b0 = &local_48;
  local_c8 = 0;
  local_64 = (byte)this[0x40] - 1;
  (**(code **)(*plVar1 + 0x40))(plVar1,&local_c8);
  local_a8 = this;
  puStack_a0 = &local_c8;
  (**(code **)(**(long **)**(undefined8 **)(this + 0x38) + 0x18))
            (*(long **)**(undefined8 **)(this + 0x38),param_1,local_c0);
  (**(code **)(*plVar1 + 0x40))(plVar1,&local_48);
  local_d0 = 0;
  (**(code **)(*plVar1 + 0x40))(plVar1,&local_d0);
  EmitChoices(this,param_1,param_3,1,(Trace *)(param_5 + 8),param_4);
  (**(code **)(*plVar1 + 0x40))(plVar1,param_5);
  (**(code **)(*plVar1 + 0x68))(plVar1,*(undefined8 *)(param_2 + 0x10));
  (**(code **)(*plVar1 + 0x28))(plVar1,-param_6);
  (**(code **)(*plVar1 + 0xe0))(plVar1,&local_d0);
  return (Trace *)(param_5 + 8);
}

