
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::GetVisualizerLogFileName(v8::internal::OptimizedCompilationInfo*, char
   const*, char const*, char const*) */

void __thiscall
v8::internal::compiler::GetVisualizerLogFileName
          (compiler *this,OptimizedCompilationInfo *param_1,char *param_2,char *param_3,
          char *param_4)

{
  long lVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  void *__dest;
  char *pcVar5;
  undefined4 uVar6;
  undefined8 *in_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  int iVar11;
  undefined8 uVar12;
  char *local_4b0;
  undefined1 *local_4a8;
  undefined8 local_4a0;
  undefined1 auStack_498 [256];
  undefined1 *local_398;
  undefined8 uStack_390;
  undefined1 local_388 [256];
  char *local_288;
  ulong local_280;
  char local_278 [256];
  char *local_178;
  ulong local_170;
  char local_168 [256];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_178 = local_168;
  local_170 = 0x100;
  local_168[8] = '\0';
  local_168[9] = '\0';
  local_168[10] = '\0';
  local_168[0xb] = '\0';
  local_168[0xc] = '\0';
  local_168[0xd] = '\0';
  local_168[0xe] = '\0';
  local_168[0xf] = '\0';
  local_168[0] = '\0';
  local_168[1] = '\0';
  local_168[2] = '\0';
  local_168[3] = '\0';
  local_168[4] = '\0';
  local_168[5] = '\0';
  local_168[6] = '\0';
  local_168[7] = '\0';
  local_168[0x18] = '\0';
  local_168[0x19] = '\0';
  local_168[0x1a] = '\0';
  local_168[0x1b] = '\0';
  local_168[0x1c] = '\0';
  local_168[0x1d] = '\0';
  local_168[0x1e] = '\0';
  local_168[0x1f] = '\0';
  local_168[0x10] = '\0';
  local_168[0x11] = '\0';
  local_168[0x12] = '\0';
  local_168[0x13] = '\0';
  local_168[0x14] = '\0';
  local_168[0x15] = '\0';
  local_168[0x16] = '\0';
  local_168[0x17] = '\0';
  local_168[0x28] = '\0';
  local_168[0x29] = '\0';
  local_168[0x2a] = '\0';
  local_168[0x2b] = '\0';
  local_168[0x2c] = '\0';
  local_168[0x2d] = '\0';
  local_168[0x2e] = '\0';
  local_168[0x2f] = '\0';
  local_168[0x20] = '\0';
  local_168[0x21] = '\0';
  local_168[0x22] = '\0';
  local_168[0x23] = '\0';
  local_168[0x24] = '\0';
  local_168[0x25] = '\0';
  local_168[0x26] = '\0';
  local_168[0x27] = '\0';
  local_168[0x38] = '\0';
  local_168[0x39] = '\0';
  local_168[0x3a] = '\0';
  local_168[0x3b] = '\0';
  local_168[0x3c] = '\0';
  local_168[0x3d] = '\0';
  local_168[0x3e] = '\0';
  local_168[0x3f] = '\0';
  local_168[0x30] = '\0';
  local_168[0x31] = '\0';
  local_168[0x32] = '\0';
  local_168[0x33] = '\0';
  local_168[0x34] = '\0';
  local_168[0x35] = '\0';
  local_168[0x36] = '\0';
  local_168[0x37] = '\0';
  local_168[0x48] = '\0';
  local_168[0x49] = '\0';
  local_168[0x4a] = '\0';
  local_168[0x4b] = '\0';
  local_168[0x4c] = '\0';
  local_168[0x4d] = '\0';
  local_168[0x4e] = '\0';
  local_168[0x4f] = '\0';
  local_168[0x40] = '\0';
  local_168[0x41] = '\0';
  local_168[0x42] = '\0';
  local_168[0x43] = '\0';
  local_168[0x44] = '\0';
  local_168[0x45] = '\0';
  local_168[0x46] = '\0';
  local_168[0x47] = '\0';
  local_168[0x58] = '\0';
  local_168[0x59] = '\0';
  local_168[0x5a] = '\0';
  local_168[0x5b] = '\0';
  local_168[0x5c] = '\0';
  local_168[0x5d] = '\0';
  local_168[0x5e] = '\0';
  local_168[0x5f] = '\0';
  local_168[0x50] = '\0';
  local_168[0x51] = '\0';
  local_168[0x52] = '\0';
  local_168[0x53] = '\0';
  local_168[0x54] = '\0';
  local_168[0x55] = '\0';
  local_168[0x56] = '\0';
  local_168[0x57] = '\0';
  local_168[0x68] = '\0';
  local_168[0x69] = '\0';
  local_168[0x6a] = '\0';
  local_168[0x6b] = '\0';
  local_168[0x6c] = '\0';
  local_168[0x6d] = '\0';
  local_168[0x6e] = '\0';
  local_168[0x6f] = '\0';
  local_168[0x60] = '\0';
  local_168[0x61] = '\0';
  local_168[0x62] = '\0';
  local_168[99] = '\0';
  local_168[100] = '\0';
  local_168[0x65] = '\0';
  local_168[0x66] = '\0';
  local_168[0x67] = '\0';
  local_168[0x78] = '\0';
  local_168[0x79] = '\0';
  local_168[0x7a] = '\0';
  local_168[0x7b] = '\0';
  local_168[0x7c] = '\0';
  local_168[0x7d] = '\0';
  local_168[0x7e] = '\0';
  local_168[0x7f] = '\0';
  local_168[0x70] = '\0';
  local_168[0x71] = '\0';
  local_168[0x72] = '\0';
  local_168[0x73] = '\0';
  local_168[0x74] = '\0';
  local_168[0x75] = '\0';
  local_168[0x76] = '\0';
  local_168[0x77] = '\0';
  local_168[0x88] = '\0';
  local_168[0x89] = '\0';
  local_168[0x8a] = '\0';
  local_168[0x8b] = '\0';
  local_168[0x8c] = '\0';
  local_168[0x8d] = '\0';
  local_168[0x8e] = '\0';
  local_168[0x8f] = '\0';
  local_168[0x80] = '\0';
  local_168[0x81] = '\0';
  local_168[0x82] = '\0';
  local_168[0x83] = '\0';
  local_168[0x84] = '\0';
  local_168[0x85] = '\0';
  local_168[0x86] = '\0';
  local_168[0x87] = '\0';
  local_168[0x98] = '\0';
  local_168[0x99] = '\0';
  local_168[0x9a] = '\0';
  local_168[0x9b] = '\0';
  local_168[0x9c] = '\0';
  local_168[0x9d] = '\0';
  local_168[0x9e] = '\0';
  local_168[0x9f] = '\0';
  local_168[0x90] = '\0';
  local_168[0x91] = '\0';
  local_168[0x92] = '\0';
  local_168[0x93] = '\0';
  local_168[0x94] = '\0';
  local_168[0x95] = '\0';
  local_168[0x96] = '\0';
  local_168[0x97] = '\0';
  local_168[0xa8] = '\0';
  local_168[0xa9] = '\0';
  local_168[0xaa] = '\0';
  local_168[0xab] = '\0';
  local_168[0xac] = '\0';
  local_168[0xad] = '\0';
  local_168[0xae] = '\0';
  local_168[0xaf] = '\0';
  local_168[0xa0] = '\0';
  local_168[0xa1] = '\0';
  local_168[0xa2] = '\0';
  local_168[0xa3] = '\0';
  local_168[0xa4] = '\0';
  local_168[0xa5] = '\0';
  local_168[0xa6] = '\0';
  local_168[0xa7] = '\0';
  local_168[0xb8] = '\0';
  local_168[0xb9] = '\0';
  local_168[0xba] = '\0';
  local_168[0xbb] = '\0';
  local_168[0xbc] = '\0';
  local_168[0xbd] = '\0';
  local_168[0xbe] = '\0';
  local_168[0xbf] = '\0';
  local_168[0xb0] = '\0';
  local_168[0xb1] = '\0';
  local_168[0xb2] = '\0';
  local_168[0xb3] = '\0';
  local_168[0xb4] = '\0';
  local_168[0xb5] = '\0';
  local_168[0xb6] = '\0';
  local_168[0xb7] = '\0';
  local_168[200] = '\0';
  local_168[0xc9] = '\0';
  local_168[0xca] = '\0';
  local_168[0xcb] = '\0';
  local_168[0xcc] = '\0';
  local_168[0xcd] = '\0';
  local_168[0xce] = '\0';
  local_168[0xcf] = '\0';
  local_168[0xc0] = '\0';
  local_168[0xc1] = '\0';
  local_168[0xc2] = '\0';
  local_168[0xc3] = '\0';
  local_168[0xc4] = '\0';
  local_168[0xc5] = '\0';
  local_168[0xc6] = '\0';
  local_168[199] = '\0';
  local_168[0xd8] = '\0';
  local_168[0xd9] = '\0';
  local_168[0xda] = '\0';
  local_168[0xdb] = '\0';
  local_168[0xdc] = '\0';
  local_168[0xdd] = '\0';
  local_168[0xde] = '\0';
  local_168[0xdf] = '\0';
  local_168[0xd0] = '\0';
  local_168[0xd1] = '\0';
  local_168[0xd2] = '\0';
  local_168[0xd3] = '\0';
  local_168[0xd4] = '\0';
  local_168[0xd5] = '\0';
  local_168[0xd6] = '\0';
  local_168[0xd7] = '\0';
  local_168[0xe8] = '\0';
  local_168[0xe9] = '\0';
  local_168[0xea] = '\0';
  local_168[0xeb] = '\0';
  local_168[0xec] = '\0';
  local_168[0xed] = '\0';
  local_168[0xee] = '\0';
  local_168[0xef] = '\0';
  local_168[0xe0] = '\0';
  local_168[0xe1] = '\0';
  local_168[0xe2] = '\0';
  local_168[0xe3] = '\0';
  local_168[0xe4] = '\0';
  local_168[0xe5] = '\0';
  local_168[0xe6] = '\0';
  local_168[0xe7] = '\0';
  local_168[0xf8] = '\0';
  local_168[0xf9] = '\0';
  local_168[0xfa] = '\0';
  local_168[0xfb] = '\0';
  local_168[0xfc] = '\0';
  local_168[0xfd] = '\0';
  local_168[0xfe] = '\0';
  local_168[0xff] = '\0';
  local_168[0xf0] = '\0';
  local_168[0xf1] = '\0';
  local_168[0xf2] = '\0';
  local_168[0xf3] = '\0';
  local_168[0xf4] = '\0';
  local_168[0xf5] = '\0';
  local_168[0xf6] = '\0';
  local_168[0xf7] = '\0';
  OptimizedCompilationInfo::GetDebugName();
  if (*(int *)(this + 8) == 0) {
    uVar6 = *(undefined4 *)(this + 0x70);
  }
  else {
    uVar6 = 0;
  }
  if (*local_4b0 == '\0') {
    if (*(long **)(this + 0x18) == (long *)0x0) {
      SNPrintF(local_178,local_170,"turbo-none-%i",uVar6);
    }
    else {
      SNPrintF(local_178,local_170,"turbo-%p-%i",**(long **)(this + 0x18) + -1);
    }
  }
  else {
    SNPrintF(local_178,local_170,"turbo-%s-%i",local_4b0);
  }
  local_280 = 0x100;
  local_278[8] = '\0';
  local_278[9] = '\0';
  local_278[10] = '\0';
  local_278[0xb] = '\0';
  local_278[0xc] = '\0';
  local_278[0xd] = '\0';
  local_278[0xe] = '\0';
  local_278[0xf] = '\0';
  local_278[0] = '\0';
  local_278[1] = '\0';
  local_278[2] = '\0';
  local_278[3] = '\0';
  local_278[4] = '\0';
  local_278[5] = '\0';
  local_278[6] = '\0';
  local_278[7] = '\0';
  local_278[0x18] = '\0';
  local_278[0x19] = '\0';
  local_278[0x1a] = '\0';
  local_278[0x1b] = '\0';
  local_278[0x1c] = '\0';
  local_278[0x1d] = '\0';
  local_278[0x1e] = '\0';
  local_278[0x1f] = '\0';
  local_278[0x10] = '\0';
  local_278[0x11] = '\0';
  local_278[0x12] = '\0';
  local_278[0x13] = '\0';
  local_278[0x14] = '\0';
  local_278[0x15] = '\0';
  local_278[0x16] = '\0';
  local_278[0x17] = '\0';
  local_278[0x28] = '\0';
  local_278[0x29] = '\0';
  local_278[0x2a] = '\0';
  local_278[0x2b] = '\0';
  local_278[0x2c] = '\0';
  local_278[0x2d] = '\0';
  local_278[0x2e] = '\0';
  local_278[0x2f] = '\0';
  local_278[0x20] = '\0';
  local_278[0x21] = '\0';
  local_278[0x22] = '\0';
  local_278[0x23] = '\0';
  local_278[0x24] = '\0';
  local_278[0x25] = '\0';
  local_278[0x26] = '\0';
  local_278[0x27] = '\0';
  local_278[0x38] = '\0';
  local_278[0x39] = '\0';
  local_278[0x3a] = '\0';
  local_278[0x3b] = '\0';
  local_278[0x3c] = '\0';
  local_278[0x3d] = '\0';
  local_278[0x3e] = '\0';
  local_278[0x3f] = '\0';
  local_278[0x30] = '\0';
  local_278[0x31] = '\0';
  local_278[0x32] = '\0';
  local_278[0x33] = '\0';
  local_278[0x34] = '\0';
  local_278[0x35] = '\0';
  local_278[0x36] = '\0';
  local_278[0x37] = '\0';
  local_278[0x48] = '\0';
  local_278[0x49] = '\0';
  local_278[0x4a] = '\0';
  local_278[0x4b] = '\0';
  local_278[0x4c] = '\0';
  local_278[0x4d] = '\0';
  local_278[0x4e] = '\0';
  local_278[0x4f] = '\0';
  local_278[0x40] = '\0';
  local_278[0x41] = '\0';
  local_278[0x42] = '\0';
  local_278[0x43] = '\0';
  local_278[0x44] = '\0';
  local_278[0x45] = '\0';
  local_278[0x46] = '\0';
  local_278[0x47] = '\0';
  local_278[0x58] = '\0';
  local_278[0x59] = '\0';
  local_278[0x5a] = '\0';
  local_278[0x5b] = '\0';
  local_278[0x5c] = '\0';
  local_278[0x5d] = '\0';
  local_278[0x5e] = '\0';
  local_278[0x5f] = '\0';
  local_278[0x50] = '\0';
  local_278[0x51] = '\0';
  local_278[0x52] = '\0';
  local_278[0x53] = '\0';
  local_278[0x54] = '\0';
  local_278[0x55] = '\0';
  local_278[0x56] = '\0';
  local_278[0x57] = '\0';
  local_278[0x68] = '\0';
  local_278[0x69] = '\0';
  local_278[0x6a] = '\0';
  local_278[0x6b] = '\0';
  local_278[0x6c] = '\0';
  local_278[0x6d] = '\0';
  local_278[0x6e] = '\0';
  local_278[0x6f] = '\0';
  local_278[0x60] = '\0';
  local_278[0x61] = '\0';
  local_278[0x62] = '\0';
  local_278[99] = '\0';
  local_278[100] = '\0';
  local_278[0x65] = '\0';
  local_278[0x66] = '\0';
  local_278[0x67] = '\0';
  local_278[0x78] = '\0';
  local_278[0x79] = '\0';
  local_278[0x7a] = '\0';
  local_278[0x7b] = '\0';
  local_278[0x7c] = '\0';
  local_278[0x7d] = '\0';
  local_278[0x7e] = '\0';
  local_278[0x7f] = '\0';
  local_278[0x70] = '\0';
  local_278[0x71] = '\0';
  local_278[0x72] = '\0';
  local_278[0x73] = '\0';
  local_278[0x74] = '\0';
  local_278[0x75] = '\0';
  local_278[0x76] = '\0';
  local_278[0x77] = '\0';
  local_278[0x88] = '\0';
  local_278[0x89] = '\0';
  local_278[0x8a] = '\0';
  local_278[0x8b] = '\0';
  local_278[0x8c] = '\0';
  local_278[0x8d] = '\0';
  local_278[0x8e] = '\0';
  local_278[0x8f] = '\0';
  local_278[0x80] = '\0';
  local_278[0x81] = '\0';
  local_278[0x82] = '\0';
  local_278[0x83] = '\0';
  local_278[0x84] = '\0';
  local_278[0x85] = '\0';
  local_278[0x86] = '\0';
  local_278[0x87] = '\0';
  local_278[0x98] = '\0';
  local_278[0x99] = '\0';
  local_278[0x9a] = '\0';
  local_278[0x9b] = '\0';
  local_278[0x9c] = '\0';
  local_278[0x9d] = '\0';
  local_278[0x9e] = '\0';
  local_278[0x9f] = '\0';
  local_278[0x90] = '\0';
  local_278[0x91] = '\0';
  local_278[0x92] = '\0';
  local_278[0x93] = '\0';
  local_278[0x94] = '\0';
  local_278[0x95] = '\0';
  local_278[0x96] = '\0';
  local_278[0x97] = '\0';
  local_278[0xa8] = '\0';
  local_278[0xa9] = '\0';
  local_278[0xaa] = '\0';
  local_278[0xab] = '\0';
  local_278[0xac] = '\0';
  local_278[0xad] = '\0';
  local_278[0xae] = '\0';
  local_278[0xaf] = '\0';
  local_278[0xa0] = '\0';
  local_278[0xa1] = '\0';
  local_278[0xa2] = '\0';
  local_278[0xa3] = '\0';
  local_278[0xa4] = '\0';
  local_278[0xa5] = '\0';
  local_278[0xa6] = '\0';
  local_278[0xa7] = '\0';
  local_278[0xb8] = '\0';
  local_278[0xb9] = '\0';
  local_278[0xba] = '\0';
  local_278[0xbb] = '\0';
  local_278[0xbc] = '\0';
  local_278[0xbd] = '\0';
  local_278[0xbe] = '\0';
  local_278[0xbf] = '\0';
  local_278[0xb0] = '\0';
  local_278[0xb1] = '\0';
  local_278[0xb2] = '\0';
  local_278[0xb3] = '\0';
  local_278[0xb4] = '\0';
  local_278[0xb5] = '\0';
  local_278[0xb6] = '\0';
  local_278[0xb7] = '\0';
  local_278[200] = '\0';
  local_278[0xc9] = '\0';
  local_278[0xca] = '\0';
  local_278[0xcb] = '\0';
  local_278[0xcc] = '\0';
  local_278[0xcd] = '\0';
  local_278[0xce] = '\0';
  local_278[0xcf] = '\0';
  local_278[0xc0] = '\0';
  local_278[0xc1] = '\0';
  local_278[0xc2] = '\0';
  local_278[0xc3] = '\0';
  local_278[0xc4] = '\0';
  local_278[0xc5] = '\0';
  local_278[0xc6] = '\0';
  local_278[199] = '\0';
  local_278[0xd8] = '\0';
  local_278[0xd9] = '\0';
  local_278[0xda] = '\0';
  local_278[0xdb] = '\0';
  local_278[0xdc] = '\0';
  local_278[0xdd] = '\0';
  local_278[0xde] = '\0';
  local_278[0xdf] = '\0';
  local_278[0xd0] = '\0';
  local_278[0xd1] = '\0';
  local_278[0xd2] = '\0';
  local_278[0xd3] = '\0';
  local_278[0xd4] = '\0';
  local_278[0xd5] = '\0';
  local_278[0xd6] = '\0';
  local_278[0xd7] = '\0';
  local_278[0xe8] = '\0';
  local_278[0xe9] = '\0';
  local_278[0xea] = '\0';
  local_278[0xeb] = '\0';
  local_278[0xec] = '\0';
  local_278[0xed] = '\0';
  local_278[0xee] = '\0';
  local_278[0xef] = '\0';
  local_278[0xe0] = '\0';
  local_278[0xe1] = '\0';
  local_278[0xe2] = '\0';
  local_278[0xe3] = '\0';
  local_278[0xe4] = '\0';
  local_278[0xe5] = '\0';
  local_278[0xe6] = '\0';
  local_278[0xe7] = '\0';
  local_278[0xf8] = '\0';
  local_278[0xf9] = '\0';
  local_278[0xfa] = '\0';
  local_278[0xfb] = '\0';
  local_278[0xfc] = '\0';
  local_278[0xfd] = '\0';
  local_278[0xfe] = '\0';
  local_278[0xff] = '\0';
  local_278[0xf0] = '\0';
  local_278[0xf1] = '\0';
  local_278[0xf2] = '\0';
  local_278[0xf3] = '\0';
  local_278[0xf4] = '\0';
  local_278[0xf5] = '\0';
  local_278[0xf6] = '\0';
  local_278[0xf7] = '\0';
  local_288 = local_278;
  if ((FLAG_trace_file_names == '\0') || (*(ulong **)(this + 0x18) == (ulong *)0x0)) {
LAB_016cabcc:
    bVar2 = false;
  }
  else {
    uVar7 = **(ulong **)(this + 0x18);
    uVar9 = uVar7 & 0xffffffff00000000;
    uVar8 = uVar9 | *(uint *)(uVar7 + 0xf);
    uVar7 = uVar8;
    if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x5b) {
      uVar7 = uVar9 | *(uint *)(uVar8 + 0xb);
    }
    if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x65)
    goto LAB_016cabcc;
    if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x5b) {
      uVar8 = uVar9 | *(uint *)(uVar8 + 0xb);
    }
    if ((((*(uint *)(uVar8 + 7) & 1) == 0) ||
        (local_398 = (undefined1 *)(uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 7)),
        0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_398 + -1)))) ||
       (*(int *)(local_398 + 7) < 1)) goto LAB_016cabcc;
    String::ToCString(&local_4a8,&local_398,1,1,0);
    SNPrintF(local_278,0x100,"%s",local_4a8);
    puVar3 = local_4a8;
    local_4a8 = (undefined1 *)0x0;
    if (puVar3 != (undefined1 *)0x0) {
      operator_delete__(puVar3);
    }
    if ((local_280 & 0xffffffff) != 0) {
      uVar7 = (ulong)(int)local_280;
      pcVar5 = local_288;
      if (7 < uVar7) {
        uVar9 = uVar7 & 0xfffffffffffffff8;
        pcVar10 = local_288 + 3;
        pcVar5 = local_288 + uVar9;
        uVar8 = uVar9;
        do {
          uVar12 = *(undefined8 *)(pcVar10 + -3);
          if ((char)uVar12 == '/') {
            pcVar10[-3] = '_';
          }
          if ((char)((ulong)uVar12 >> 8) == '/') {
            pcVar10[-2] = '_';
          }
          if ((char)((ulong)uVar12 >> 0x10) == '/') {
            pcVar10[-1] = '_';
          }
          if ((char)((ulong)uVar12 >> 0x18) == '/') {
            *pcVar10 = '_';
          }
          if ((char)((ulong)uVar12 >> 0x20) == '/') {
            pcVar10[1] = '_';
          }
          if ((char)((ulong)uVar12 >> 0x28) == '/') {
            pcVar10[2] = '_';
          }
          if ((char)((ulong)uVar12 >> 0x30) == '/') {
            pcVar10[3] = '_';
          }
          if ((char)((ulong)uVar12 >> 0x38) == '/') {
            pcVar10[4] = '_';
          }
          uVar8 = uVar8 - 8;
          pcVar10 = pcVar10 + 8;
        } while (uVar8 != 0);
        if (uVar7 == uVar9) goto LAB_016caf38;
      }
      do {
        if (*pcVar5 == '/') {
          *pcVar5 = '_';
        }
        pcVar5 = pcVar5 + 1;
      } while (local_288 + (int)local_280 != pcVar5);
    }
LAB_016caf38:
    bVar2 = true;
  }
  if ((local_170 & 0xffffffff) != 0) {
    uVar7 = (ulong)(int)local_170;
    pcVar5 = local_178;
    if (7 < uVar7) {
      uVar9 = uVar7 & 0xfffffffffffffff8;
      pcVar10 = local_178 + 3;
      pcVar5 = local_178 + uVar9;
      uVar8 = uVar9;
      do {
        uVar12 = *(undefined8 *)(pcVar10 + -3);
        if ((char)uVar12 == ' ') {
          pcVar10[-3] = '_';
        }
        if ((char)((ulong)uVar12 >> 8) == ' ') {
          pcVar10[-2] = '_';
        }
        if ((char)((ulong)uVar12 >> 0x10) == ' ') {
          pcVar10[-1] = '_';
        }
        if ((char)((ulong)uVar12 >> 0x18) == ' ') {
          *pcVar10 = '_';
        }
        if ((char)((ulong)uVar12 >> 0x20) == ' ') {
          pcVar10[1] = '_';
        }
        if ((char)((ulong)uVar12 >> 0x28) == ' ') {
          pcVar10[2] = '_';
        }
        if ((char)((ulong)uVar12 >> 0x30) == ' ') {
          pcVar10[3] = '_';
        }
        if ((char)((ulong)uVar12 >> 0x38) == ' ') {
          pcVar10[4] = '_';
        }
        uVar8 = uVar8 - 8;
        pcVar10 = pcVar10 + 8;
      } while (uVar8 != 0);
      if (uVar7 == uVar9) goto LAB_016cacf4;
    }
    do {
      if (*pcVar5 == ' ') {
        *pcVar5 = '_';
      }
      pcVar5 = pcVar5 + 1;
    } while (local_178 + (int)local_170 != pcVar5);
  }
LAB_016cacf4:
  uStack_390 = 0x100;
  local_398 = local_388;
  if (param_1 == (OptimizedCompilationInfo *)0x0) {
    local_388[0] = 0;
  }
  else {
    uVar4 = base::OS::DirectorySeparator();
    SNPrintF(local_388,0x100,&DAT_01894b5d,param_1,uVar4);
  }
  local_4a8 = auStack_498;
  local_4a0 = 0x100;
  if (bVar2 || param_2 != (char *)0x0) {
    if (param_2 == (char *)0x0 || bVar2) {
      if ((bool)(param_2 != (char *)0x0 | bVar2 ^ 1U)) {
        SNPrintF(local_4a8,0x100,"%s%s_%s-%s.%s",local_398,local_178,local_288,param_2,param_3);
        goto LAB_016cae98;
      }
      pcVar5 = "%s%s_%s.%s";
      param_2 = local_288;
    }
    else {
      pcVar5 = "%s%s-%s.%s";
    }
    SNPrintF(local_4a8,0x100,pcVar5,local_398,local_178,param_2,param_3);
  }
  else {
    SNPrintF(local_4a8,0x100,"%s%s.%s",local_398,local_178,param_3);
  }
LAB_016cae98:
  iVar11 = (int)local_4a0;
  __dest = operator_new__((long)(iVar11 + 1));
  memcpy(__dest,local_4a8,(long)iVar11);
  *in_x8 = __dest;
  *(undefined1 *)((long)__dest + (long)(int)local_4a0) = 0;
  if (local_4b0 != (char *)0x0) {
    operator_delete__(local_4b0);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

