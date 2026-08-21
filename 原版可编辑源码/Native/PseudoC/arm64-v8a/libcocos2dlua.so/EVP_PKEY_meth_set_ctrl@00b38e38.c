
void EVP_PKEY_meth_set_ctrl(EVP_PKEY_METHOD *pmeth,ctrl *ctrl,ctrl_str *ctrl_str)

{
  *(ctrl **)(pmeth + 0xc0) = ctrl;
  *(ctrl_str **)(pmeth + 200) = ctrl_str;
  return;
}

