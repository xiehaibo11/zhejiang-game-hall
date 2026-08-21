
/* v8::internal::compiler::EscapeAnalysisReducer::VerifyReplacement() const */

void __thiscall
v8::internal::compiler::EscapeAnalysisReducer::VerifyReplacement(EscapeAnalysisReducer *this)

{
  long lVar1;
  long lVar2;
  Node *pNVar3;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  AllNodes::AllNodes((AllNodes *)&local_90,*(Zone **)(this + 0xc0),
                     (Graph *)**(undefined8 **)(this + 0x10),true);
  do {
    if (local_90 == local_88) {
      if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pNVar3 = (Node *)*local_90;
    if (*(short *)(*(long *)pNVar3 + 0x10) == 0xe7) {
      local_98 = *(undefined8 *)(this + 0x18);
      lVar2 = EscapeAnalysisResult::GetVirtualObject((EscapeAnalysisResult *)&local_98,pNVar3);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x20) == '\0')) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Escape analysis failed to remove node %s#%d\n",
                 *(undefined8 *)(*(long *)pNVar3 + 8),(ulong)(*(uint *)(pNVar3 + 0x14) & 0xffffff));
      }
    }
    local_90 = local_90 + 1;
  } while( true );
}

