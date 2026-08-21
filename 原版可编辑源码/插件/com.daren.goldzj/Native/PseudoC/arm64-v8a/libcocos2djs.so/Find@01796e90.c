
/* v8::internal::compiler::NodeCache<std::__ndk1::pair<long, char>,
   v8::base::hash<std::__ndk1::pair<long, char> >, std::__ndk1::equal_to<std::__ndk1::pair<long,
   char> > >::Find(v8::internal::Zone*, std::__ndk1::pair<long, char>) */

ulong * v8::internal::compiler::
        NodeCache<std::__ndk1::pair<long,char>,v8::base::hash<std::__ndk1::pair<long,char>>,std::__ndk1::equal_to<std::__ndk1::pair<long,char>>>
        ::Find(NodeCache<std::__ndk1::pair<long,char>,v8::base::hash<std::__ndk1::pair<long,char>>,std::__ndk1::equal_to<std::__ndk1::pair<long,char>>>
               *param_1,Zone *param_2,ulong param_3,byte param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  uVar3 = base::hash_value((uint)param_4);
  uVar3 = base::hash_combine(0,uVar3);
  uVar4 = base::hash_value(param_3);
  uVar3 = base::hash_combine(uVar3,uVar4);
  if (*(long *)param_1 == 0) {
    puVar6 = *(undefined8 **)(param_2 + 0x10);
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)puVar6) < 0x1f8) {
      puVar6 = (undefined8 *)Zone::NewExpand(param_2,0x1f8);
    }
    else {
      *(undefined8 **)(param_2 + 0x10) = puVar6 + 0x3f;
    }
    *(undefined8 **)param_1 = puVar6;
    *(undefined8 *)(param_1 + 8) = 0x10;
    puVar6[0x3e] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x37] = 0;
    puVar6[0x36] = 0;
    puVar6[0x39] = 0;
    puVar6[0x38] = 0;
    puVar6[0x33] = 0;
    puVar6[0x32] = 0;
    puVar6[0x35] = 0;
    puVar6[0x34] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x31] = 0;
    puVar6[0x30] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x27] = 0;
    puVar6[0x26] = 0;
    puVar6[0x29] = 0;
    puVar6[0x28] = 0;
    puVar6[0x23] = 0;
    puVar6[0x22] = 0;
    puVar6[0x25] = 0;
    puVar6[0x24] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x21] = 0;
    puVar6[0x20] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x17] = 0;
    puVar6[0x16] = 0;
    puVar6[0x19] = 0;
    puVar6[0x18] = 0;
    puVar6[0x13] = 0;
    puVar6[0x12] = 0;
    puVar6[0x15] = 0;
    puVar6[0x14] = 0;
    puVar6[0xf] = 0;
    puVar6[0xe] = 0;
    puVar6[0x11] = 0;
    puVar6[0x10] = 0;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar5 = (ulong *)(*(long *)param_1 + (uVar3 & 0xf) * 0x18);
    *puVar5 = param_3;
    *(byte *)(puVar5 + 1) = param_4;
    puVar5 = puVar5 + 2;
  }
  else {
    do {
      uVar4 = *(long *)(param_1 + 8) - 1U & uVar3;
      if (uVar4 < 0xfffffffffffffffb) {
        uVar1 = uVar4 + 5;
        puVar5 = (ulong *)(*(long *)param_1 + uVar4 * 0x18 + 0x10);
        do {
          if (puVar5[-2] == param_3) {
            if ((byte)puVar5[-1] == param_4) {
              return puVar5;
            }
            uVar7 = *puVar5;
            puVar2 = puVar5;
          }
          else {
            puVar2 = (ulong *)(*(long *)param_1 + uVar4 * 0x18 + 0x10);
            uVar7 = *puVar2;
          }
          if (uVar7 == 0) {
            puVar5[-2] = param_3;
            *(byte *)(puVar5 + -1) = param_4;
            return puVar2;
          }
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 3;
        } while (uVar4 < uVar1);
      }
      uVar4 = Resize(param_1,param_2);
    } while ((uVar4 & 1) != 0);
    puVar5 = (ulong *)(*(long *)param_1 + (*(long *)(param_1 + 8) - 1U & uVar3) * 0x18);
    *puVar5 = param_3;
    *(byte *)(puVar5 + 1) = param_4;
    puVar5 = puVar5 + 2;
    *puVar5 = 0;
  }
  return puVar5;
}

