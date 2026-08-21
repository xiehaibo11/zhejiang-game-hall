
void EVP_PKEY_meth_set_verifyctx
               (EVP_PKEY_METHOD *pmeth,verifyctx_init *verifyctx_init,verifyctx *verifyctx)

{
  *(verifyctx_init **)(pmeth + 0x80) = verifyctx_init;
  *(verifyctx **)(pmeth + 0x88) = verifyctx;
  return;
}

