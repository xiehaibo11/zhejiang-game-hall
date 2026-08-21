
/* v8::internal::GCTracer::Print() const */

void __thiscall v8::internal::GCTracer::Print(GCTracer *this)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  char local_110 [136];
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  dVar19 = *(double *)(this + 0x18);
  dVar21 = *(double *)(this + 0x20);
  local_110[0x68] = '\0';
  local_110[0x69] = '\0';
  local_110[0x6a] = '\0';
  local_110[0x6b] = '\0';
  local_110[0x6c] = '\0';
  local_110[0x6d] = '\0';
  local_110[0x6e] = '\0';
  local_110[0x6f] = '\0';
  local_110[0x60] = '\0';
  local_110[0x61] = '\0';
  local_110[0x62] = '\0';
  local_110[99] = '\0';
  local_110[100] = '\0';
  local_110[0x65] = '\0';
  local_110[0x66] = '\0';
  local_110[0x67] = '\0';
  local_110[0x78] = '\0';
  local_110[0x79] = '\0';
  local_110[0x7a] = '\0';
  local_110[0x7b] = '\0';
  local_110[0x7c] = '\0';
  local_110[0x7d] = '\0';
  local_110[0x7e] = '\0';
  local_110[0x7f] = '\0';
  local_110[0x70] = '\0';
  local_110[0x71] = '\0';
  local_110[0x72] = '\0';
  local_110[0x73] = '\0';
  local_110[0x74] = '\0';
  local_110[0x75] = '\0';
  local_110[0x76] = '\0';
  local_110[0x77] = '\0';
  local_110[0x48] = '\0';
  local_110[0x49] = '\0';
  local_110[0x4a] = '\0';
  local_110[0x4b] = '\0';
  local_110[0x4c] = '\0';
  local_110[0x4d] = '\0';
  local_110[0x4e] = '\0';
  local_110[0x4f] = '\0';
  local_110[0x40] = '\0';
  local_110[0x41] = '\0';
  local_110[0x42] = '\0';
  local_110[0x43] = '\0';
  local_110[0x44] = '\0';
  local_110[0x45] = '\0';
  local_110[0x46] = '\0';
  local_110[0x47] = '\0';
  local_110[0x58] = '\0';
  local_110[0x59] = '\0';
  local_110[0x5a] = '\0';
  local_110[0x5b] = '\0';
  local_110[0x5c] = '\0';
  local_110[0x5d] = '\0';
  local_110[0x5e] = '\0';
  local_110[0x5f] = '\0';
  local_110[0x50] = '\0';
  local_110[0x51] = '\0';
  local_110[0x52] = '\0';
  local_110[0x53] = '\0';
  local_110[0x54] = '\0';
  local_110[0x55] = '\0';
  local_110[0x56] = '\0';
  local_110[0x57] = '\0';
  local_110[0x28] = '\0';
  local_110[0x29] = '\0';
  local_110[0x2a] = '\0';
  local_110[0x2b] = '\0';
  local_110[0x2c] = '\0';
  local_110[0x2d] = '\0';
  local_110[0x2e] = '\0';
  local_110[0x2f] = '\0';
  local_110[0x20] = '\0';
  local_110[0x21] = '\0';
  local_110[0x22] = '\0';
  local_110[0x23] = '\0';
  local_110[0x24] = '\0';
  local_110[0x25] = '\0';
  local_110[0x26] = '\0';
  local_110[0x27] = '\0';
  local_110[0x38] = '\0';
  local_110[0x39] = '\0';
  local_110[0x3a] = '\0';
  local_110[0x3b] = '\0';
  local_110[0x3c] = '\0';
  local_110[0x3d] = '\0';
  local_110[0x3e] = '\0';
  local_110[0x3f] = '\0';
  local_110[0x30] = '\0';
  local_110[0x31] = '\0';
  local_110[0x32] = '\0';
  local_110[0x33] = '\0';
  local_110[0x34] = '\0';
  local_110[0x35] = '\0';
  local_110[0x36] = '\0';
  local_110[0x37] = '\0';
  local_110[8] = '\0';
  local_110[9] = '\0';
  local_110[10] = '\0';
  local_110[0xb] = '\0';
  local_110[0xc] = '\0';
  local_110[0xd] = '\0';
  local_110[0xe] = '\0';
  local_110[0xf] = '\0';
  local_110[0] = '\0';
  local_110[1] = '\0';
  local_110[2] = '\0';
  local_110[3] = '\0';
  local_110[4] = '\0';
  local_110[5] = '\0';
  local_110[6] = '\0';
  local_110[7] = '\0';
  local_110[0x18] = '\0';
  local_110[0x19] = '\0';
  local_110[0x1a] = '\0';
  local_110[0x1b] = '\0';
  local_110[0x1c] = '\0';
  local_110[0x1d] = '\0';
  local_110[0x1e] = '\0';
  local_110[0x1f] = '\0';
  local_110[0x10] = '\0';
  local_110[0x11] = '\0';
  local_110[0x12] = '\0';
  local_110[0x13] = '\0';
  local_110[0x14] = '\0';
  local_110[0x15] = '\0';
  local_110[0x16] = '\0';
  local_110[0x17] = '\0';
  if (*(int *)(this + 8) == 2) {
    base::OS::SNPrintF(local_110,0x80,
                       " (+ %.1f ms in %d steps since start of marking, biggest step %.1f ms, walltime since start of marking %.f ms)"
                       ,*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x3f8),
                       dVar21 - *(double *)(this + 0x9c8),(ulong)*(uint *)(this + 0x400));
  }
  uVar3 = base::OS::GetCurrentProcessId();
  lVar5 = *(long *)this;
  dVar7 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  dVar11 = *(double *)(lVar5 + 0x2e70);
  if (*(uint *)(this + 8) < 5) {
    pcVar6 = (&PTR_s_Scavenge_01ca75c8)[(int)*(uint *)(this + 8)];
  }
  else {
    pcVar6 = "Unknown Event Type";
  }
  dVar18 = *(double *)(this + 0xf0);
  dVar16 = *(double *)(this + 0xf8);
  dVar17 = *(double *)(this + 0xe8);
  dVar8 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x30));
  dVar13 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x40));
  dVar15 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x48));
  dVar9 = *(double *)(this + 0xb28) + *(double *)(this + 0xb20);
  dVar14 = *(double *)(this + 0x98);
  dVar10 = *(double *)(this + 0xa0);
  dVar12 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x38));
  uVar20 = *(undefined8 *)(this + 0xb30);
  dVar22 = 1.0;
  if (dVar9 != 0.0) {
    dVar22 = *(double *)(this + 0xb20) / dVar9;
  }
  uVar4 = Heap::GarbageCollectionReasonToString(*(undefined4 *)(this + 0xc));
  puVar1 = &DAT_0189703a;
  if (*(undefined1 **)(this + 0x10) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(this + 0x10);
  }
  Output((char *)this,dVar7 - dVar11,dVar8 * 9.5367431640625e-07,dVar13 * 9.5367431640625e-07,
         dVar12 * 9.5367431640625e-07,dVar15 * 9.5367431640625e-07,dVar21 - dVar19,
         dVar16 + dVar17 + dVar18 + dVar14 + dVar10,dVar22,
         "[%d:%p] %8.0f ms: %s %.1f (%.1f) -> %.1f (%.1f) MB, %.1f / %.1f ms %s (average mu = %.3f, current mu = %.3f) %s %s\n"
         ,uVar3 & 0xffffffff,lVar5 + -0x8850,pcVar6,local_110,uVar4,puVar1,uVar20);
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

