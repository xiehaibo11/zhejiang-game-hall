
ulong * FUN_01587418(long param_1,undefined4 param_2,char *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)v8::internal::RegExpUtils::GenericCaptureGetter
                              (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),param_2,
                               param_3);
  if (*param_3 == '\0') {
    puVar1 = (ulong *)(*(long *)(param_1 + 8) + 200);
  }
  else {
    uVar2 = *puVar1;
    if (((uVar2 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)))) {
      puVar1 = (ulong *)v8::internal::Object::ConvertToString(*(long *)(param_1 + 8));
      return puVar1;
    }
  }
  return puVar1;
}

