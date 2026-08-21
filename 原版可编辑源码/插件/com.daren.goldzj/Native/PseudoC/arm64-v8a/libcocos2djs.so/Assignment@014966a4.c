
/* v8::internal::Assignment::Assignment(v8::internal::AstNode::NodeType, v8::internal::Token::Value,
   v8::internal::Expression*, v8::internal::Expression*, int) */

void __thiscall
v8::internal::Assignment::Assignment
          (Assignment *this,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
          undefined4 param_6)

{
  *(undefined8 *)(this + 8) = param_4;
  *(undefined8 *)(this + 0x10) = param_5;
  *(undefined4 *)this = param_6;
  *(uint *)(this + 4) = param_2 & 0xff | (param_3 & 0xff) << 7;
  return;
}

