
/* v8::internal::Zone::NewExpand(unsigned long) */

ulong __thiscall v8::internal::Zone::NewExpand(Zone *this,ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(this + 0x28);
  uVar4 = 0;
  if (lVar3 != 0) {
    *(long *)this = (*(long *)(this + 0x10) - lVar3) + *(long *)this + -0x18;
    uVar4 = *(long *)(lVar3 + 0x10) << 1;
  }
  uVar2 = uVar4 + param_1 + 0x20;
  if ((!CARRY8(uVar4,param_1)) && (uVar4 + param_1 < 0xffffffffffffffe0)) {
    if (uVar2 < 0x2000) {
      uVar2 = 0x2000;
    }
    else if (0x7fff < uVar2) {
      uVar2 = param_1 + 0x20;
      if (uVar2 < 0x8000) {
        uVar2 = 0x8000;
      }
      else if (uVar2 >> 0x1f != 0) goto LAB_0125e5a8;
    }
    puVar1 = (undefined8 *)
             (**(code **)(**(long **)(this + 0x20) + 0x10))(*(long **)(this + 0x20),uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *(long *)(this + 8) = *(long *)(this + 8) + puVar1[2];
      *puVar1 = this;
      uVar4 = (long)puVar1 + 0x1fU & 0xfffffffffffffff8;
      puVar1[1] = *(undefined8 *)(this + 0x28);
      *(undefined8 **)(this + 0x28) = puVar1;
      *(ulong *)(this + 0x10) = uVar4 + param_1;
      *(long *)(this + 0x18) = puVar1[2] + (long)puVar1;
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    V8::FatalProcessOutOfMemory((Isolate *)0x0,"Zone",false);
  }
LAB_0125e5a8:
                    /* WARNING: Subroutine does not return */
  V8::FatalProcessOutOfMemory((Isolate *)0x0,"Zone",false);
}

