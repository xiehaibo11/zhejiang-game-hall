
/* v8::internal::CodeEntry::ProgramEntryCreateTrait::Create() */

void v8::internal::CodeEntry::ProgramEntryCreateTrait::Create(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x40);
  *puVar1 = 0x5bc0b;
  *(char **)(puVar1 + 2) = "(program)";
  *(undefined1 **)(puVar1 + 4) = &DAT_0189703a;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 10) = 0;
  *(undefined8 *)(puVar1 + 0xe) = 0;
  return;
}

