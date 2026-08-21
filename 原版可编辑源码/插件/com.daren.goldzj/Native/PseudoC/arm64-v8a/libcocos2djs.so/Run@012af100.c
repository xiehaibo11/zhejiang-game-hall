
/* v8::internal::compiler::InstructionSelectionPhase::Run(v8::internal::compiler::PipelineData*,
   v8::internal::Zone*, v8::internal::compiler::Linkage*) */

void __thiscall
v8::internal::compiler::InstructionSelectionPhase::Run
          (InstructionSelectionPhase *this,PipelineData *param_1,Zone *param_2,Linkage *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  basic_ostream *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 local_380;
  long *plStack_378;
  InstructionSelector aIStack_370 [56];
  long local_338;
  long local_330;
  long local_318;
  long local_310;
  long local_2f8;
  long local_2f0;
  long local_2d8;
  long local_2d0;
  long local_278;
  long local_270;
  long local_258;
  long local_250;
  long local_238;
  long local_230;
  long local_1f0;
  long local_1e8;
  TurboJsonFile aTStack_1b8 [328];
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  puVar11 = *(uint **)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  uVar8 = *(undefined8 *)(param_1 + 0x110);
  uVar9 = *(undefined8 *)(param_1 + 0xe8);
  uVar10 = *(undefined8 *)(param_1 + 0x148);
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x1c);
  puVar13 = puVar11 + 0x26;
  uVar12 = *puVar11;
  uVar3 = uVar12 >> 8;
  uVar4 = uVar12 >> 4;
  if (CpuFeatures::initialized_ == '\0') {
    CpuFeatures::initialized_ = '\x01';
    CpuFeatures::ProbeImpl(false);
    puVar11 = *(uint **)(param_1 + 0x18);
    uVar12 = *puVar11;
  }
  InstructionSelector::InstructionSelector
            (aIStack_370,param_2,uVar2,param_3,uVar8,uVar9,uVar1,uVar10,uVar3 & 1,puVar13,
             param_1 + 0x1d0,uVar4 & 1,CpuFeatures::supported_,FLAG_turbo_instruction_scheduling,
             param_1[0x7c],puVar11[1],uVar12 >> 0xd & 1);
  uVar6 = InstructionSelector::SelectInstructions(aIStack_370);
  if ((uVar6 & 1) == 0) {
    param_1[0x40] = (PipelineData)0x1;
  }
  if (((byte)(*(OptimizedCompilationInfo **)(param_1 + 0x18))[1] >> 5 & 1) != 0) {
    TurboJsonFile::TurboJsonFile(aTStack_1b8,*(OptimizedCompilationInfo **)(param_1 + 0x18),1);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)aTStack_1b8,"{\"name\":\"",9);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,"V8.TFSelectInstructions",0x17);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,"\",\"type\":\"instructions\"",0x17);
    local_380 = *(undefined8 *)(param_1 + 0x110);
    plStack_378 = &local_1f0;
    pbVar7 = (basic_ostream *)compiler::operator<<(pbVar7,(InstructionRangesAsJSON *)&local_380);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"},\n",3);
    TurboJsonFile::~TurboJsonFile(aTStack_1b8);
  }
  if (local_1f0 != 0) {
    local_1e8 = local_1f0;
  }
  if (local_238 != 0) {
    local_230 = local_238;
  }
  if (local_258 != 0) {
    local_250 = local_258;
  }
  if (local_278 != 0) {
    local_270 = local_278;
  }
  if (local_2d8 != 0) {
    local_2d0 = local_2d8;
  }
  if (local_2f8 != 0) {
    local_2f0 = local_2f8;
  }
  if (local_318 != 0) {
    local_310 = local_318;
  }
  if (local_338 != 0) {
    local_330 = local_338;
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

