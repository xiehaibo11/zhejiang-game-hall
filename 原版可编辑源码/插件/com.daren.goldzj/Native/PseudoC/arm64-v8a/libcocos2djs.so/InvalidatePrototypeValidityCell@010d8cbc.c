
/* v8::internal::JSObject::InvalidatePrototypeValidityCell(v8::internal::JSGlobalObject) */

void v8::internal::JSObject::InvalidatePrototypeValidityCell(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1 & 0xffffffff00000000;
  uVar2 = uVar3 | *(uint *)(param_1 - 1);
  if (FLAG_trace_prototype_users != '\0') {
    PrintF("Invalidating prototype map %p \'s cell\n",uVar2);
  }
  uVar1 = *(uint *)(uVar2 + 0x1f);
  if (((uVar1 & 1) != 0) &&
     (uVar2 = uVar3 | uVar1, *(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x99)) {
    *(undefined4 *)(uVar2 + 3) = 2;
  }
  return;
}

