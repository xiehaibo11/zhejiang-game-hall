
/* v8::internal::compiler::RawMachineAssembler::ExportForOptimization() */

undefined8 __thiscall
v8::internal::compiler::RawMachineAssembler::ExportForOptimization(RawMachineAssembler *this)

{
  undefined **local_160;
  undefined **local_158;
  locale alStack_150 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined **local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("--- RAW SCHEDULE -------------------------------------------\n");
    local_160 = (undefined **)0x1ca1178;
    local_100[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_100,(AndroidLogStream *)&local_158);
    local_158 = &PTR__basic_streambuf_01c671a8;
    local_70 = 0xffffffff;
    local_78 = 0;
    local_160 = &PTR__StdoutStream_01ca1128;
    local_100[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_150);
    local_158 = &PTR__AndroidLogStream_01cbc008;
    local_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_130 = 0;
    local_138 = 0;
    uStack_140 = 0;
    local_148 = 0;
    local_108 = 0;
    compiler::operator<<((basic_ostream *)&local_160,*(Schedule **)(this + 0x10));
    local_160 = &PTR__StdoutStream_01ca1128;
    local_100[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_158);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
  }
  Schedule::EnsureCFGWellFormedness(*(Schedule **)(this + 0x10));
  OptimizeControlFlow(*(Schedule **)(this + 0x10),*(Graph **)(this + 8),
                      (CommonOperatorBuilder *)(this + 0x48));
  Scheduler::ComputeSpecialRPO((Zone *)**(undefined8 **)(this + 8),*(Schedule **)(this + 0x10));
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("--- SCHEDULE BEFORE GRAPH CREATION -------------------------\n");
    local_160 = (undefined **)0x1ca1178;
    local_100[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_100,(AndroidLogStream *)&local_158);
    local_158 = &PTR__basic_streambuf_01c671a8;
    local_70 = 0xffffffff;
    local_78 = 0;
    local_160 = &PTR__StdoutStream_01ca1128;
    local_100[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_150);
    local_158 = &PTR__AndroidLogStream_01cbc008;
    local_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_130 = 0;
    local_138 = 0;
    uStack_140 = 0;
    local_148 = 0;
    local_108 = 0;
    compiler::operator<<((basic_ostream *)&local_160,*(Schedule **)(this + 0x10));
    local_160 = &PTR__StdoutStream_01ca1128;
    local_100[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_158);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
  }
  MakeReschedulable(this);
  *(undefined8 *)(this + 0x10) = 0;
  return *(undefined8 *)(this + 8);
}

