
/* v8::internal::ReadFile(char const*, bool*, bool) */

void __thiscall v8::internal::ReadFile(internal *this,char *param_1,bool *param_2,bool param_3)

{
  undefined8 *puVar1;
  FILE *__stream;
  ulong *in_x8;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *puVar8;
  
  __stream = (FILE *)base::OS::FOpen((char *)this,"rb");
  FUN_011fda90(&local_58,__stream,param_1,(uint)param_2 & 1,this);
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  puVar8 = local_58;
  if (local_58 == local_50) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    goto joined_r0x011fd89c;
  }
  uVar10 = (long)local_50 - (long)local_58;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar10 < 0x17) {
    puVar6 = (undefined1 *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar10 << 1);
    if (uVar10 < 0x20) goto LAB_011fd8d0;
LAB_011fd878:
    if ((puVar6 < local_50) && (puVar8 < puVar6 + uVar10)) goto LAB_011fd8d0;
    uVar3 = uVar10 & 0xffffffffffffffe0;
    puVar4 = (undefined8 *)(puVar8 + 0x10);
    puVar2 = puVar6 + uVar3;
    puVar8 = puVar8 + uVar3;
    puVar5 = (undefined8 *)(puVar6 + 0x10);
    uVar9 = uVar3;
    do {
      puVar1 = puVar4 + -1;
      uVar11 = puVar4[-2];
      uVar13 = puVar4[1];
      uVar12 = *puVar4;
      puVar4 = puVar4 + 4;
      uVar9 = uVar9 - 0x20;
      puVar5[-1] = *puVar1;
      puVar5[-2] = uVar11;
      puVar5[1] = uVar13;
      *puVar5 = uVar12;
      puVar5 = puVar5 + 4;
    } while (uVar9 != 0);
    puVar6 = puVar2;
    if (uVar10 != uVar3) goto LAB_011fd8d0;
  }
  else {
    uVar9 = uVar10 + 0x10 & 0xfffffffffffffff0;
    puVar6 = operator_new(uVar9);
    in_x8[1] = uVar10;
    in_x8[2] = (ulong)puVar6;
    *in_x8 = uVar9 | 1;
    if (0x1f < uVar10) goto LAB_011fd878;
LAB_011fd8d0:
    do {
      puVar7 = puVar8 + 1;
      puVar2 = puVar6 + 1;
      *puVar6 = *puVar8;
      puVar6 = puVar2;
      puVar8 = puVar7;
    } while (local_50 != puVar7);
  }
  *puVar2 = 0;
joined_r0x011fd89c:
  if (local_58 != (undefined1 *)0x0) {
    operator_delete(local_58);
  }
  return;
}

