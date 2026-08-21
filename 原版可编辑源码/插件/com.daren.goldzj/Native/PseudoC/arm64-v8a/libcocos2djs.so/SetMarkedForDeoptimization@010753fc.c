
/* v8::internal::Code::SetMarkedForDeoptimization(char const*) */

Code * __thiscall v8::internal::Code::SetMarkedForDeoptimization(Code *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  Code *pCVar3;
  undefined8 *puVar4;
  __sFILE *p_Var5;
  
  *(uint *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf)) + 7) =
       *(uint *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf)) + 7)
       | 1;
  pCVar3 = this;
  if (FLAG_trace_deopt != '\0') {
    pCVar3 = (Code *)(*(ulong *)this & 0xffffffff00000000);
    uVar2 = *(uint *)(*(ulong *)this + 7);
    if (uVar2 != *(uint *)(pCVar3 + 0x168)) {
      puVar4 = (undefined8 *)Isolate::GetCodeTracer();
      p_Var5 = (__sFILE *)puVar4[0x12];
      if (FLAG_redirect_code_traces != '\0') {
        if (p_Var5 == (__sFILE *)0x0) {
          p_Var5 = (__sFILE *)base::OS::FOpen((char *)*puVar4,"ab");
          puVar4[0x12] = p_Var5;
        }
        *(int *)(puVar4 + 0x13) = *(int *)(puVar4 + 0x13) + 1;
      }
      pCVar3 = (Code *)PrintF(p_Var5,
                              "[marking dependent code 0x%012lx (opt #%d) for deoptimization, reason: %s]\n"
                              ,*(undefined8 *)this,
                              (ulong)(uint)(*(int *)(((ulong)pCVar3 | (ulong)uVar2) + 0x1b) >> 1),
                              param_1);
      if ((FLAG_redirect_code_traces != '\0') &&
         (iVar1 = *(int *)(puVar4 + 0x13), *(int *)(puVar4 + 0x13) = iVar1 + -1, iVar1 + -1 == 0)) {
        uVar2 = fclose((FILE *)puVar4[0x12]);
        pCVar3 = (Code *)(ulong)uVar2;
        puVar4[0x12] = 0;
      }
    }
  }
  return pCVar3;
}

