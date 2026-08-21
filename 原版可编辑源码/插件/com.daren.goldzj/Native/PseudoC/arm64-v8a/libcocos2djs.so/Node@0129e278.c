
/* v8::internal::compiler::Node::Node(unsigned int, v8::internal::compiler::Operator const*, int,
   int) */

void __thiscall
v8::internal::compiler::Node::Node
          (Node *this,uint param_1,Operator *param_2,int param_3,int param_4)

{
  *(Operator **)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(uint *)(this + 0x14) = param_1 | param_3 << 0x18 | param_4 << 0x1c;
  *(undefined8 *)(this + 0x18) = 0;
  if (param_1 >> 0x18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IdField::is_valid(id)");
}

