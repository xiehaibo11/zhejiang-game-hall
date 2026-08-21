
/* v8::Uint32::CheckCast(v8::Value*) */

void v8::Uint32::CheckCast(Value *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar3 = *(ulong *)param_1;
  if ((uVar3 & 1) == 0) {
    if (-1 < (int)uVar3) {
      return;
    }
  }
  else if ((((*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x42) &&
            (dVar5 = *(double *)(uVar3 + 3), dVar5 <= 4294967295.0)) && (0.0 <= dVar5)) &&
          (dVar5 != -0.0)) {
    dVar6 = -dVar5;
    if (0.0 <= dVar5) {
      dVar6 = dVar5;
    }
    uVar4 = SUB84(dVar6 + 4503599627370496.0,0);
    uVar1 = -uVar4;
    if (0.0 <= dVar5) {
      uVar1 = uVar4;
    }
    dVar7 = (double)uVar1;
    if (4503599627370496.0 <= dVar6) {
      dVar7 = 2147483648.0;
    }
    if (dVar5 == dVar7) {
      return;
    }
  }
  lVar2 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb738))
                ("v8::Uint32::Cast","Could not convert to 32-bit unsigned integer");
      *(undefined1 *)(lVar2 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Uint32::Cast",
             "Could not convert to 32-bit unsigned integer");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

