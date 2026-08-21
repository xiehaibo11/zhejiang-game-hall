
/* v8::internal::StackTraceFailureMessage::Print() volatile */

void __thiscall v8::internal::StackTraceFailureMessage::Print(StackTraceFailureMessage *this)

{
  base::OS::PrintError
            ("Stacktrace:\n   ptr1=%p\n    ptr2=%p\n    ptr3=%p\n    ptr4=%p\n    failure_message_object=%p\n%s"
             ,*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20)
             ,*(undefined8 *)(this + 0x28),this,this + 0x50);
  return;
}

