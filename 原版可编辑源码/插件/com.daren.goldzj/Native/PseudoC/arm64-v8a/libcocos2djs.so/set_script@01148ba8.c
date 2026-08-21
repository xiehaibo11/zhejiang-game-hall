
/* v8::internal::ParseInfo::set_script(v8::internal::Handle<v8::internal::Script>) */

void __thiscall v8::internal::ParseInfo::set_script(ParseInfo *this,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Zone *this_00;
  undefined8 uVar5;
  long local_8;
  
  *(long **)(this + 0x50) = param_2;
  *(int *)(this + 0x34) = *(int *)(*param_2 + 0x1f) >> 1;
  uVar1 = *(uint *)(this + 8) & 0xfffffffb;
  if ((*(uint *)(*param_2 + 0x2f) & 2) != 0) {
    uVar1 = *(uint *)(this + 8) | 4;
  }
  *(uint *)(this + 8) = uVar1;
  uVar2 = uVar1 & 0xffffffbf;
  if ((*(uint *)(*param_2 + 0x2f) & 0x80) != 0) {
    uVar2 = uVar1 | 0x40;
  }
  *(uint *)(this + 8) = uVar2;
  if ((uVar2 >> 0xb & 1) != 0) {
    local_8 = *param_2;
    uVar3 = Script::IsUserJavaScript((Script *)&local_8);
    if ((uVar3 & 1) != 0) {
      this_00 = *(Zone **)this;
      puVar4 = *(undefined8 **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar4) < 0x20) {
        puVar4 = (undefined8 *)Zone::NewExpand(this_00,0x20);
      }
      else {
        *(undefined8 **)(this_00 + 0x10) = puVar4 + 4;
      }
      uVar5 = *(undefined8 *)this;
      puVar4[1] = 0;
      *puVar4 = puVar4 + 1;
      puVar4[2] = uVar5;
      puVar4[3] = 0;
      *(undefined8 **)(this + 0x98) = puVar4;
    }
  }
  return;
}

