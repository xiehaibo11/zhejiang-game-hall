
void X509V3_set_nconf(X509V3_CTX *ctx,CONF *conf)

{
  ctx->db_meth = (X509V3_CONF_METHOD *)&PTR_LAB_01d20c00;
  ctx->db = conf;
  return;
}

