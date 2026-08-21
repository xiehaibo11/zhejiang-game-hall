package com.czhj.sdk.common.network;

public abstract class SigmobRequest<T> extends com.czhj.volley.Request<T> {
    protected static final java.lang.String AESKEY = "KGpfzbYsn4T9Jyuq";
    private final java.lang.String a;

    protected SigmobRequest(java.lang.String r2, int r3, com.czhj.volley.Response.ErrorListener r4) {
            r1 = this;
            r1.<init>(r3, r2, r4)
            r1.a = r2
            com.czhj.volley.DefaultRetryPolicy r2 = new com.czhj.volley.DefaultRetryPolicy
            r3 = 10000(0x2710, float:1.4013E-41)
            r4 = 2
            r0 = 0
            r2.<init>(r3, r4, r0)
            r1.setRetryPolicy(r2)
            r2 = 0
            r1.setShouldCache(r2)
            return
    }

    @Override
    public byte[] getBody() {
            r2 = this;
            java.util.Map r0 = r2.getParams()
            java.lang.String r1 = r2.getUrl()
            java.lang.String r0 = com.czhj.sdk.common.network.SigmobRequestUtil.generateBodyFromParams(r0, r1)
            if (r0 != 0) goto L10
            r0 = 0
            return r0
        L10:
            byte[] r0 = r0.getBytes()
            return r0
    }

    @Override
    public java.lang.String getBodyContentType() {
            r1 = this;
            java.lang.String r0 = super.getBodyContentType()
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getHeaders() {
            r5 = this;
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>()
            java.lang.String r1 = r5.a
            boolean r1 = com.czhj.sdk.common.network.SigmobRequestUtil.a(r1)
            if (r1 != 0) goto Le
            return r0
        Le:
            java.util.Locale r1 = java.util.Locale.getDefault()
            java.lang.String r1 = r1.getLanguage()
            r2 = 0
            com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()
            if (r3 == 0) goto L55
            com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.util.Locale r3 = r3.getDeviceLocale()
            java.lang.String r4 = r3.getLanguage()
            java.lang.String r4 = r4.trim()
            boolean r4 = r4.isEmpty()
            if (r4 != 0) goto L3b
            java.lang.String r1 = r3.getLanguage()
            java.lang.String r1 = r1.trim()
        L3b:
            com.czhj.sdk.common.ClientMetadata r3 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r3 = r3.getAndroidId()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L55
            com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r2 = r2.getAndroidId()
            java.lang.String r2 = com.czhj.sdk.common.utils.Md5Util.md5(r2)
        L55:
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 != 0) goto L64
            com.czhj.sdk.common.network.ResponseHeader r3 = com.czhj.sdk.common.network.ResponseHeader.ACCEPT_LANGUAGE
            java.lang.String r3 = r3.getKey()
            r0.put(r3, r1)
        L64:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L6f
            java.lang.String r1 = "token"
            r0.put(r1, r2)
        L6f:
            return r0
    }

    public java.lang.String getOriginalUrl() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    protected com.czhj.volley.VolleyError parseNetworkError(com.czhj.volley.VolleyError r1) {
            r0 = this;
            com.czhj.volley.VolleyError r1 = super.parseNetworkError(r1)
            return r1
    }

    @Override
    protected com.czhj.volley.Response<T> parseNetworkResponse(com.czhj.volley.NetworkResponse r2) {
            r1 = this;
            com.czhj.volley.Cache$Entry r0 = com.czhj.volley.toolbox.HttpHeaderParser.parseCacheHeaders(r2)
            com.czhj.volley.Response r2 = com.czhj.volley.Response.success(r2, r0)
            return r2
    }
}
