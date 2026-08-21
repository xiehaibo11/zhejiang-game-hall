
/* v8::internal::compiler::NodeCache<long, v8::base::hash<long>, std::__ndk1::equal_to<long>
   >::Find(v8::internal::Zone*, long) */

long * __thiscall
v8::internal::compiler::NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>>::Find
          (NodeCache<long,v8::base::hash<long>,std::__ndk1::equal_to<long>> *this,Zone *param_1,
          long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = base::hash_value(param_2);
  if (*(long *)this == 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar6) < 0x150) {
      puVar6 = (undefined8 *)Zone::NewExpand(param_1,0x150);
    }
    else {
      *(undefined8 **)(param_1 + 0x10) = puVar6 + 0x2a;
    }
    *(undefined8 **)this = puVar6;
    *(undefined8 *)(this + 8) = 0x10;
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
    plVar2 = (long *)(*(long *)this + (uVar4 & 0xf) * 0x10);
    plVar5 = plVar2 + 1;
    *plVar2 = param_2;
  }
  else {
    do {
      uVar7 = *(long *)(this + 8) - 1U & uVar4;
      if (uVar7 < 0xfffffffffffffffb) {
        uVar1 = uVar7 + 5;
        plVar5 = (long *)(*(long *)this + uVar7 * 0x10 + 8);
        do {
          if (plVar5[-1] == param_2) {
            return plVar5;
          }
          if (*plVar5 == 0) {
            plVar5[-1] = param_2;
            return plVar5;
          }
          uVar7 = uVar7 + 1;
          plVar5 = plVar5 + 2;
        } while (uVar7 < uVar1);
      }
      uVar7 = Resize(this,param_1);
    } while ((uVar7 & 1) != 0);
    lVar3 = *(long *)this;
    lVar8 = (*(long *)(this + 8) - 1U & uVar4) * 0x10;
    *(long *)(lVar3 + lVar8) = param_2;
    plVar5 = (long *)(lVar3 + lVar8 + 8);
    *plVar5 = 0;
  }
  return plVar5;
}

