package com.sigmob.sdk.base.network;

public class e extends com.czhj.sdk.common.network.SigmobRequest<com.sigmob.sdk.base.models.config.SdkConfigResponse> {
    private final com.sigmob.sdk.base.network.e.a a;
    private final com.sigmob.sdk.base.models.config.SdkConfigRequest.Builder b;

    public interface a extends com.czhj.volley.Response.ErrorListener {
        void a(com.sigmob.sdk.base.models.config.SdkConfigResponse r1);
    }

    public e(java.lang.String r3, com.sigmob.sdk.base.network.e.a r4) {
            r2 = this;
            r0 = 1
            r2.<init>(r3, r0, r4)
            r2.a = r4
            com.czhj.volley.DefaultRetryPolicy r3 = new com.czhj.volley.DefaultRetryPolicy
            r4 = 10000(0x2710, float:1.4013E-41)
            r0 = 2
            r1 = 0
            r3.<init>(r4, r0, r1)
            r2.setRetryPolicy(r3)
            r3 = 0
            r2.setShouldCache(r3)
            com.sigmob.sdk.base.models.config.SdkConfigRequest$Builder r3 = a()
            r2.b = r3
            return
    }

    public static com.sigmob.sdk.base.models.config.SdkConfigRequest.Builder a() {
            com.sigmob.sdk.base.models.config.SdkConfigRequest$Builder r0 = new com.sigmob.sdk.base.models.config.SdkConfigRequest$Builder
            r0.<init>()
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()
            if (r1 == 0) goto L58
            com.czhj.sdk.common.ClientMetadata r1 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.util.Locale r1 = r1.getDeviceLocale()
            if (r1 == 0) goto L58
            com.czhj.sdk.common.models.App$Builder r1 = com.sigmob.sdk.base.network.a.b()
            com.czhj.sdk.common.models.App r1 = r1.build()
            r0.app(r1)
            com.czhj.sdk.common.models.User$Builder r1 = com.sigmob.sdk.base.network.a.c()
            com.czhj.sdk.common.models.User r1 = r1.build()
            r0.user(r1)
            com.czhj.sdk.common.models.Privacy$Builder r1 = com.sigmob.sdk.base.network.a.d()
            com.czhj.sdk.common.models.Privacy r1 = r1.build()
            r0.privacy(r1)
            com.czhj.sdk.common.models.Network$Builder r1 = com.czhj.sdk.common.models.ModelBuilderCreator.createNetwork()
            com.czhj.sdk.common.models.Network r1 = r1.build()
            r0.network(r1)
            com.czhj.sdk.common.models.Device$Builder r1 = com.czhj.sdk.common.models.ModelBuilderCreator.createDevice()
            com.czhj.sdk.common.models.DeviceId$Builder r2 = com.czhj.sdk.common.models.ModelBuilderCreator.createDeviceId()
            com.czhj.sdk.common.models.DeviceId r2 = r2.build()
            com.czhj.sdk.common.models.Device$Builder r1 = r1.did(r2)
            com.czhj.sdk.common.models.Device r1 = r1.build()
            r0.device(r1)
        L58:
            return r0
    }

    protected void a(com.sigmob.sdk.base.models.config.SdkConfigResponse r2) {
            r1 = this;
            com.sigmob.sdk.base.network.e$a r0 = r1.a
            r0.a(r2)
            return
    }

    public com.sigmob.sdk.base.network.e.a b() {
            r1 = this;
            com.sigmob.sdk.base.network.e$a r0 = r1.a
            return r0
    }

    @Override
    protected void deliverResponse(java.lang.Object r1) {
            r0 = this;
            com.sigmob.sdk.base.models.config.SdkConfigResponse r1 = (com.sigmob.sdk.base.models.config.SdkConfigResponse) r1
            r0.a(r1)
            return
    }

    @Override
    public byte[] getBody() {
            r3 = this;
            com.sigmob.sdk.base.models.config.SdkConfigRequest$Builder r0 = r3.b
            com.sigmob.sdk.base.models.config.SdkConfigRequest r0 = r0.build()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "send SdkConfig Request: "
            r1.append(r2)
            java.lang.String r2 = r0.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.d(r1)
            byte[] r1 = r0.encode()     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = "KGpfzbYsn4T9Jyuq"
            byte[] r0 = com.czhj.sdk.common.utils.AESUtil.Encrypt(r1, r2)     // Catch: java.lang.Exception -> L29
            return r0
        L29:
            r1 = move-exception
            r1.printStackTrace()
            byte[] r0 = r0.encode()
            return r0
    }

    @Override
    public java.lang.String getBodyContentType() {
            r1 = this;
            java.lang.String r0 = "application/octet-stream"
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getHeaders() {
            r3 = this;
            java.util.Map r0 = super.getHeaders()
            java.lang.String r1 = "e"
            java.lang.String r2 = "1"
            r0.put(r1, r2)
            return r0
    }

    @Override
    protected com.czhj.volley.Response<com.sigmob.sdk.base.models.config.SdkConfigResponse> parseNetworkResponse(com.czhj.volley.NetworkResponse r3) {
            r2 = this;
            com.czhj.wire.ProtoAdapter<com.sigmob.sdk.base.models.config.SdkConfigResponse> r0 = com.sigmob.sdk.base.models.config.SdkConfigResponse.ADAPTER     // Catch: java.lang.Throwable -> L13
            byte[] r1 = r3.data     // Catch: java.lang.Throwable -> L13
            java.lang.Object r0 = r0.decode(r1)     // Catch: java.lang.Throwable -> L13
            com.sigmob.sdk.base.models.config.SdkConfigResponse r0 = (com.sigmob.sdk.base.models.config.SdkConfigResponse) r0     // Catch: java.lang.Throwable -> L13
            com.czhj.volley.Cache$Entry r3 = com.czhj.volley.toolbox.HttpHeaderParser.parseCacheHeaders(r3)     // Catch: java.lang.Throwable -> L13
            com.czhj.volley.Response r3 = com.czhj.volley.Response.success(r0, r3)     // Catch: java.lang.Throwable -> L13
            return r3
        L13:
            r3 = move-exception
            java.lang.String r0 = r3.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            com.czhj.volley.ParseError r0 = new com.czhj.volley.ParseError
            r0.<init>(r3)
            com.czhj.volley.Response r3 = com.czhj.volley.Response.error(r0)
            return r3
    }
}
