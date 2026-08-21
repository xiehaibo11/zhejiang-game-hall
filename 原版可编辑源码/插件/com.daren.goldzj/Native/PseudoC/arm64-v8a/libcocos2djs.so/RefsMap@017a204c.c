
/* v8::internal::compiler::RefsMap::RefsMap(unsigned int, v8::internal::compiler::AddressMatcher,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::RefsMap::RefsMap
          (RefsMap *this,uint param_1,undefined8 param_3,Zone *param_4)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + 0x10);
  uVar1 = (ulong)param_1 * 0x18;
  if (uVar1 < (ulong)(*(long *)(param_4 + 0x18) - lVar2) ||
      uVar1 - (*(long *)(param_4 + 0x18) - lVar2) == 0) {
    *(ulong *)(param_4 + 0x10) = lVar2 + uVar1;
    *(long *)this = lVar2;
  }
  else {
    lVar2 = Zone::NewExpand(param_4,uVar1);
    *(long *)this = lVar2;
  }
  if (lVar2 != 0) {
    *(uint *)(this + 8) = param_1;
    if ((param_1 != 0) && (*(undefined1 *)(lVar2 + 0x14) = 0, 1 < *(uint *)(this + 8))) {
      uVar1 = 1;
      lVar2 = 0x2c;
      do {
        uVar1 = uVar1 + 1;
        *(undefined1 *)(*(long *)this + lVar2) = 0;
        lVar2 = lVar2 + 0x18;
      } while (uVar1 < *(uint *)(this + 8));
    }
    *(undefined4 *)(this + 0xc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Out of memory: HashMap::Initialize");
}

