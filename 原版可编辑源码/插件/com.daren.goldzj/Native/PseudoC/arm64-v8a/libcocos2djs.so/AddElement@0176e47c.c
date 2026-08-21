
/* v8::internal::compiler::LoadElimination::AbstractState::AddElement(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::Zone*) const */

undefined8 * __thiscall
v8::internal::compiler::LoadElimination::AbstractState::AddElement
          (AbstractState *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined1 param_5,Zone *param_6)

{
  undefined8 *puVar1;
  undefined8 *__dest;
  undefined8 *__dest_00;
  ulong uVar2;
  void *__src;
  
  __dest = *(undefined8 **)(param_6 + 0x10);
  if ((ulong)(*(long *)(param_6 + 0x18) - (long)__dest) < 0x210) {
    __dest = (undefined8 *)Zone::NewExpand(param_6,0x210);
  }
  else {
    *(undefined8 **)(param_6 + 0x10) = __dest + 0x42;
  }
  memcpy(__dest,this,0x210);
  __dest_00 = *(undefined8 **)(param_6 + 0x10);
  __src = (void *)*__dest;
  if (__src == (void *)0x0) {
    if ((ulong)(*(long *)(param_6 + 0x18) - (long)__dest_00) < 0x108) {
      __dest_00 = (undefined8 *)Zone::NewExpand(param_6,0x108);
    }
    else {
      *(undefined8 **)(param_6 + 0x10) = __dest_00 + 0x21;
    }
    uVar2 = 1;
    __dest_00[4] = 0;
    __dest_00[5] = 0;
    *(undefined1 *)(__dest_00 + 7) = 0;
    __dest_00[6] = 0;
    __dest_00[9] = 0;
    __dest_00[10] = 0;
    __dest_00[8] = 0;
    *(undefined1 *)(__dest_00 + 0xb) = 0;
    __dest_00[0xd] = 0;
    __dest_00[0xe] = 0;
    __dest_00[0xc] = 0;
    *(undefined1 *)(__dest_00 + 0xf) = 0;
    __dest_00[0x11] = 0;
    __dest_00[0x12] = 0;
    __dest_00[0x10] = 0;
    *(undefined1 *)(__dest_00 + 0x13) = 0;
    __dest_00[0x14] = 0;
    __dest_00[0x15] = 0;
    *(undefined1 *)(__dest_00 + 0x17) = 0;
    __dest_00[0x16] = 0;
    __dest_00[0x18] = 0;
    __dest_00[0x19] = 0;
    *(undefined1 *)(__dest_00 + 0x1b) = 0;
    __dest_00[0x1a] = 0;
    __dest_00[0x1d] = 0;
    __dest_00[0x1e] = 0;
    __dest_00[0x1c] = 0;
    *(undefined1 *)(__dest_00 + 0x1f) = 0;
    *__dest_00 = param_1;
    __dest_00[1] = param_2;
    __dest_00[2] = param_3;
    *(undefined1 *)(__dest_00 + 3) = param_5;
  }
  else {
    if ((ulong)(*(long *)(param_6 + 0x18) - (long)__dest_00) < 0x108) {
      __dest_00 = (undefined8 *)Zone::NewExpand(param_6,0x108);
    }
    else {
      *(undefined8 **)(param_6 + 0x10) = __dest_00 + 0x21;
    }
    memcpy(__dest_00,__src,0x108);
    puVar1 = __dest_00 + __dest_00[0x20] * 4;
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    *(undefined1 *)(puVar1 + 3) = param_5;
    uVar2 = (ulong)(*(int *)(__dest_00 + 0x20) + 1) & 7;
  }
  __dest_00[0x20] = uVar2;
  *__dest = __dest_00;
  return __dest;
}

