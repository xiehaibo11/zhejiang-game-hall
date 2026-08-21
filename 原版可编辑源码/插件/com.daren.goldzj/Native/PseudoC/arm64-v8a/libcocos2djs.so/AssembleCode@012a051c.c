
/* v8::internal::compiler::PipelineImpl::AssembleCode(v8::internal::compiler::Linkage*,
   std::__ndk1::unique_ptr<v8::internal::AssemblerBuffer,
   std::__ndk1::default_delete<v8::internal::AssemblerBuffer> >) */

void __thiscall
v8::internal::compiler::PipelineImpl::AssembleCode
          (PipelineImpl *this,undefined8 param_1,undefined8 *param_3)

{
  long lVar1;
  CodeGenerator *pCVar2;
  basic_ostream *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long local_1b0;
  long *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar5 = *(undefined8 **)this;
  if ((PipelineStatistics *)puVar5[7] != (PipelineStatistics *)0x0) {
    PipelineStatistics::BeginPhaseKind((PipelineStatistics *)puVar5[7],"V8.TFCodeGeneration");
  }
  plVar6 = (long *)*param_3;
  *param_3 = 0;
  pCVar2 = operator_new(0x4c0);
  uStack_198 = puVar5[10];
  local_1a0 = puVar5[9];
  local_190 = puVar5[0xb];
  lVar4 = puVar5[3];
  local_1a8 = plVar6;
  CodeGenerator::CodeGenerator
            (pCVar2,puVar5[0x26],puVar5[0x29],param_1,puVar5[0x22],lVar4,*puVar5,&local_1a0,
             *(undefined4 *)((long)puVar5 + 0x44),puVar5[0x33],*(undefined4 *)(lVar4 + 4),
             puVar5 + 0x34,*(undefined4 *)(lVar4 + 0xc),puVar5[0x3a],&local_1a8);
  plVar6 = local_1a8;
  puVar5[0xd] = pCVar2;
  local_1a8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  Run<v8::internal::compiler::AssembleCodePhase>(this);
  if (((byte)((OptimizedCompilationInfo *)puVar5[3])[1] >> 5 & 1) != 0) {
    TurboJsonFile::TurboJsonFile
              ((TurboJsonFile *)&local_1a0,(OptimizedCompilationInfo *)puVar5[3],1);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_1a0,"{\"name\":\"code generation\"",0x19);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,", \"type\":\"instructions\"",0x17);
    local_1a8 = (long *)(puVar5[0xd] + 0x4a0);
    pbVar3 = (basic_ostream *)compiler::operator<<(pbVar3,(InstructionStartsAsJSON *)&local_1a8);
    local_1b0 = puVar5[0xd] + 0x480;
    compiler::operator<<(pbVar3,(TurbolizerCodeOffsetsInfoAsJSON *)&local_1b0);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_1a0,"},\n",3);
    TurboJsonFile::~TurboJsonFile((TurboJsonFile *)&local_1a0);
  }
  if (puVar5[0x21] != 0) {
    if (puVar5[0x20] != 0) {
      ZoneStats::ReturnZone((Zone *)puVar5[0x1f]);
    }
    puVar5[0x20] = 0;
    puVar5[0x21] = 0;
    puVar5[0x22] = 0;
  }
  if ((PipelineStatistics *)puVar5[7] != (PipelineStatistics *)0x0) {
    PipelineStatistics::EndPhaseKind((PipelineStatistics *)puVar5[7]);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

