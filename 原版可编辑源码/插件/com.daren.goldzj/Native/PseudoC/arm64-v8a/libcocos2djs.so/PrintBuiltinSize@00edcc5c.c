
/* v8::internal::Builtins::PrintBuiltinSize() */

void __thiscall v8::internal::Builtins::PrintBuiltinSize(Builtins *this)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint *puVar5;
  long local_48;
  
  lVar2 = 0;
  puVar5 = &DAT_01c98620;
  do {
    if (6 < *puVar5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar3 = *(undefined8 *)(puVar5 + -2);
    puVar4 = (&PTR_DAT_01ca10b0)[(int)*puVar5];
    local_48 = Heap::builtin((Heap *)(*(long *)this + 0x8850),(int)lVar2);
    if (*(int *)(local_48 + 0x17) < 0) {
      uVar1 = Code::OffHeapInstructionSize((Code *)&local_48);
    }
    else {
      uVar1 = *(uint *)(local_48 + 0x13);
    }
    PrintF((__sFILE *)waitpid,"%s Builtin, %s, %d\n",puVar4,uVar3,(ulong)uVar1);
    lVar2 = lVar2 + 1;
    puVar5 = puVar5 + 6;
  } while (lVar2 != 0x5bc);
  return;
}

