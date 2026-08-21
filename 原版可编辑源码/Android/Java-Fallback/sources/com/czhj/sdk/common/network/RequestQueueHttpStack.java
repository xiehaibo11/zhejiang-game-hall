package com.czhj.sdk.common.network;

class RequestQueueHttpStack extends com.czhj.volley.toolbox.HurlStack {
    private RequestQueueHttpStack(com.czhj.volley.toolbox.HurlStack.UrlRewriter r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public RequestQueueHttpStack(com.czhj.volley.toolbox.HurlStack.UrlRewriter r1, javax.net.ssl.SSLSocketFactory r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public com.czhj.volley.toolbox.HttpResponse executeRequest(com.czhj.volley.Request<?> r3, java.util.Map<java.lang.String, java.lang.String> r4) throws java.io.IOException, com.czhj.volley.AuthFailureError {
            r2 = this;
            if (r4 == 0) goto L8
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto Ld
        L8:
            java.util.TreeMap r4 = new java.util.TreeMap
            r4.<init>()
        Ld:
            com.czhj.sdk.common.network.ResponseHeader r0 = com.czhj.sdk.common.network.ResponseHeader.USER_AGENT
            java.lang.String r0 = r0.getKey()
            java.lang.String r1 = com.czhj.sdk.common.network.Networking.getUserAgent()
            r4.put(r0, r1)
            com.czhj.volley.toolbox.HttpResponse r3 = super.executeRequest(r3, r4)
            return r3
    }
}
