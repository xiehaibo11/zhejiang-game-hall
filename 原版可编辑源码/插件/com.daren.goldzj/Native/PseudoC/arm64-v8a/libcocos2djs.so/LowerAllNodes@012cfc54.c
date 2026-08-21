
/* v8::internal::compiler::SimplifiedLowering::LowerAllNodes() */

void __thiscall v8::internal::compiler::SimplifiedLowering::LowerAllNodes(SimplifiedLowering *this)

{
  long lVar1;
  RepresentationSelector aRStack_210 [440];
  RepresentationChanger aRStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  RepresentationChanger::RepresentationChanger
            (aRStack_58,*(JSGraph **)this,*(JSHeapBroker **)(this + 8));
  RepresentationSelector::RepresentationSelector
            (aRStack_210,*(JSGraph **)this,*(JSHeapBroker **)(this + 8),*(Zone **)(this + 0x10),
             aRStack_58,*(SourcePositionTable **)(this + 0x50),*(NodeOriginTable **)(this + 0x58),
             *(TickCounter **)(this + 0x68));
  RepresentationSelector::Run(aRStack_210,this);
  RepresentationSelector::~RepresentationSelector(aRStack_210);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

