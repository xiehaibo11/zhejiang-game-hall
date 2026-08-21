
/* v8::internal::SerializedHandleChecker::CheckGlobalAndEternalHandles() */

SerializedHandleChecker __thiscall
v8::internal::SerializedHandleChecker::CheckGlobalAndEternalHandles(SerializedHandleChecker *this)

{
  GlobalHandles::IterateAllRoots
            (*(GlobalHandles **)(*(long *)(this + 8) + 0x95e0),(RootVisitor *)this);
  EternalHandles::IterateAllRoots
            (*(EternalHandles **)(*(long *)(this + 8) + 0x95e8),(RootVisitor *)this);
  return this[0x38];
}

