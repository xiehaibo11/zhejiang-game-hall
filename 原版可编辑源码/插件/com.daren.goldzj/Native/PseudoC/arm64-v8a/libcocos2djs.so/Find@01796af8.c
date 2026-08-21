
/* v8::internal::compiler::NodeCache<std::__ndk1::pair<int, char>,
   v8::base::hash<std::__ndk1::pair<int, char> >, std::__ndk1::equal_to<std::__ndk1::pair<int, char>
   > >::Find(v8::internal::Zone*, std::__ndk1::pair<int, char>) */

uint * __thiscall
v8::internal::compiler::
NodeCache<std::__ndk1::pair<int,char>,v8::base::hash<std::__ndk1::pair<int,char>>,std::__ndk1::equal_to<std::__ndk1::pair<int,char>>>
::Find(NodeCache<std::__ndk1::pair<int,char>,v8::base::hash<std::__ndk1::pair<int,char>>,std::__ndk1::equal_to<std::__ndk1::pair<int,char>>>
       *this,Zone *param_1,undefined8 param_3)

{
  ulong uVar1;
  uint *puVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  uVar5 = (uint)((ulong)param_3 >> 0x20);
  uVar6 = base::hash_value(uVar5 & 0xff);
  uVar6 = base::hash_combine(0,uVar6);
  uVar4 = (uint)param_3;
  uVar7 = base::hash_value(uVar4);
  uVar6 = base::hash_combine(uVar6,uVar7);
  uVar3 = (undefined1)((ulong)param_3 >> 0x20);
  if (*(long *)this == 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar9) < 0x150) {
      puVar9 = (undefined8 *)Zone::NewExpand(param_1,0x150);
    }
    else {
      *(undefined8 **)(param_1 + 0x10) = puVar9 + 0x2a;
    }
    *(undefined8 **)this = puVar9;
    *(undefined8 *)(this + 8) = 0x10;
    puVar9[0x27] = 0;
    puVar9[0x26] = 0;
    puVar9[0x29] = 0;
    puVar9[0x28] = 0;
    puVar9[0x23] = 0;
    puVar9[0x22] = 0;
    puVar9[0x25] = 0;
    puVar9[0x24] = 0;
    puVar9[0x1f] = 0;
    puVar9[0x1e] = 0;
    puVar9[0x21] = 0;
    puVar9[0x20] = 0;
    puVar9[0x1b] = 0;
    puVar9[0x1a] = 0;
    puVar9[0x1d] = 0;
    puVar9[0x1c] = 0;
    puVar9[0x17] = 0;
    puVar9[0x16] = 0;
    puVar9[0x19] = 0;
    puVar9[0x18] = 0;
    puVar9[0x13] = 0;
    puVar9[0x12] = 0;
    puVar9[0x15] = 0;
    puVar9[0x14] = 0;
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar8 = (uint *)(*(long *)this + (uVar6 & 0xf) * 0x10);
    *puVar8 = uVar4;
    *(undefined1 *)(puVar8 + 1) = uVar3;
    puVar8 = puVar8 + 2;
  }
  else {
    do {
      uVar7 = *(long *)(this + 8) - 1U & uVar6;
      if (uVar7 < 0xfffffffffffffffb) {
        uVar1 = uVar7 + 5;
        puVar8 = (uint *)(*(long *)this + uVar7 * 0x10 + 8);
        do {
          if (puVar8[-2] == uVar4) {
            if ((uint)(byte)puVar8[-1] == (uVar5 & 0xff)) {
              return puVar8;
            }
            lVar10 = *(long *)puVar8;
            puVar2 = puVar8;
          }
          else {
            puVar2 = (uint *)(*(long *)this + uVar7 * 0x10 + 8);
            lVar10 = *(long *)puVar2;
          }
          if (lVar10 == 0) {
            puVar8[-2] = uVar4;
            *(undefined1 *)(puVar8 + -1) = uVar3;
            return puVar2;
          }
          uVar7 = uVar7 + 1;
          puVar8 = puVar8 + 4;
        } while (uVar7 < uVar1);
      }
      uVar7 = Resize(this,param_1);
    } while ((uVar7 & 1) != 0);
    puVar8 = (uint *)(*(long *)this + (*(long *)(this + 8) - 1U & uVar6) * 0x10);
    *puVar8 = uVar4;
    *(undefined1 *)(puVar8 + 1) = uVar3;
    puVar8 = puVar8 + 2;
    puVar8[0] = 0;
    puVar8[1] = 0;
  }
  return puVar8;
}

