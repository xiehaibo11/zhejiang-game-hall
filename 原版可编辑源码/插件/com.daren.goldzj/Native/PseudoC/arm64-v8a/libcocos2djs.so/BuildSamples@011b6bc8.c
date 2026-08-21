
/* v8::internal::SamplingHeapProfiler::BuildSamples() const */

void v8::internal::SamplingHeapProfiler::BuildSamples(void)

{
  long in_x0;
  undefined8 *puVar1;
  vector<v8::AllocationProfile::Sample,std::__ndk1::allocator<v8::AllocationProfile::Sample>> *in_x8
  ;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  int local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  uVar2 = *(ulong *)(in_x0 + 200);
  if (uVar2 == 0) {
    puVar4 = (undefined8 *)0x0;
    puVar1 = (undefined8 *)0x0;
    plVar3 = *(long **)(in_x0 + 0xc0);
  }
  else {
    if (uVar2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar1 = operator_new(uVar2 * 0x20);
    puVar4 = puVar1 + uVar2 * 4;
    *(undefined8 **)(in_x8 + 8) = puVar1;
    *(undefined8 **)in_x8 = puVar1;
    *(undefined8 **)(in_x8 + 0x10) = puVar4;
    plVar3 = *(long **)(in_x0 + 0xc0);
  }
  if (plVar3 != (long *)0x0) {
    while( true ) {
      puVar5 = (undefined8 *)plVar3[3];
      local_70 = *(undefined4 *)(puVar5[1] + 0x48);
      uStack_68 = *puVar5;
      dVar6 = (double)NEON_ucvtf(*puVar5);
      dVar7 = (double)NEON_ucvtf(*(undefined8 *)(in_x0 + 0xe0));
      dVar6 = exp(-dVar6 / dVar7);
      local_60 = (int)(1.0 / (1.0 - dVar6) + 0.5);
      local_58 = puVar5[4];
      if (puVar1 < puVar4) {
        puVar1[1] = uStack_68;
        *puVar1 = CONCAT44(uStack_6c,local_70);
        puVar1[3] = local_58;
        puVar1[2] = CONCAT44(uStack_5c,local_60);
        *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 0x20;
        plVar3 = (long *)*plVar3;
      }
      else {
        std::__ndk1::
        vector<v8::AllocationProfile::Sample,std::__ndk1::allocator<v8::AllocationProfile::Sample>>
        ::__emplace_back_slow_path<v8::AllocationProfile::Sample>(in_x8,(Sample *)&local_70);
        plVar3 = (long *)*plVar3;
      }
      if (plVar3 == (long *)0x0) break;
      puVar1 = *(undefined8 **)(in_x8 + 8);
      puVar4 = *(undefined8 **)(in_x8 + 0x10);
    }
  }
  return;
}

