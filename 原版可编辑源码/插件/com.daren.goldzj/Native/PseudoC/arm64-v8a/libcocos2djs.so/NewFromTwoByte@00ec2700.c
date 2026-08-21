
/* v8::String::NewFromTwoByte(v8::Isolate*, unsigned short const*, v8::NewStringType, int) */

Factory * v8::String::NewFromTwoByte(Factory *param_1,long param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  Factory *pFVar4;
  Logger *this;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_50;
  ulong uStack_48;
  
  if (param_4 == 0) {
    pFVar4 = param_1 + 200;
  }
  else if ((int)param_4 < 0xffffff1) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c60);
    *(undefined4 *)(param_1 + 0x2c60) = 5;
    local_60 = 0;
    uStack_78 = 0;
    local_80 = (RuntimeCallStats *)0x0;
    uStack_68 = 0;
    uStack_70 = 0;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_80 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x3d7);
    }
    this = *(Logger **)(param_1 + 0x9558);
    uVar2 = internal::Logger::is_logging(this);
    if ((uVar2 & 1) != 0) {
      internal::Logger::ApiEntryCall(this,"v8::String::NewFromTwoByte");
    }
    if ((int)param_4 < 0) {
      uVar2 = 0;
      do {
        uVar3 = uVar2;
        uVar2 = uVar3 + 1;
      } while (*(short *)(param_2 + uVar3 * 2) != 0);
      if (uVar3 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","i::kMaxInt >= length");
      }
      param_4 = (int)(uVar3 + 1) - 1;
    }
    uStack_48 = (ulong)param_4;
    local_50 = param_2;
    if (param_3 == 1) {
      pFVar4 = (Factory *)
               internal::Factory::InternalizeString<unsigned_short>
                         (param_1,(Vector *)&local_50,false);
    }
    else {
      pFVar4 = (Factory *)internal::Factory::NewStringFromTwoByte();
    }
    if (pFVar4 == (Factory *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    if (local_80 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
    }
    *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  }
  else {
    pFVar4 = (Factory *)0x0;
  }
  return pFVar4;
}

