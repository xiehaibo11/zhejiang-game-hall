
/* WARNING: Removing unreachable block (ram,0x015242cc) */
/* WARNING: Removing unreachable block (ram,0x015242d0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffdc8 : 0x0152433c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* v8::internal::Bignum::AddUInt64(unsigned long) */

void __thiscall v8::internal::Bignum::AddUInt64(Bignum *this,ulong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_238;
  uint local_230 [126];
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_1 != 0) {
    local_38 = &local_238;
    lVar3 = 8;
    local_30 = 0x80;
    local_238 = 0;
    do {
      *(undefined4 *)((long)local_38 + lVar3) = 0;
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0x200);
                    /* WARNING: Ignoring partial resolution of indirect */
    local_238._0_4_ = (uint)param_1 & 0xfffffff;
    uVar1 = (uint)(param_1 >> 0x1c);
                    /* WARNING: Ignoring partial resolution of indirect */
    local_238._4_4_ = uVar1 & 0xfffffff;
    uVar2 = local_238;
    local_238 = CONCAT44(uVar1,(uint)param_1) & 0xfffffff0fffffff;
    local_28 = 3;
    if (((local_230[0] == 0) && (local_28 = 2, local_238._4_4_ == 0)) &&
       (local_28 = 1, (uint)local_238 == 0)) {
      local_28 = 0;
    }
    local_238 = uVar2;
    local_230[0] = (uint)(byte)(param_1 >> 0x38);
    AddBignum(this,(Bignum *)&local_238);
  }
  return;
}

