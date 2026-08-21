package com.kwad.sdk.core.network;

import com.kwad.sdk.core.network.NormalResultData;
import com.kwad.sdk.core.network.o;

public abstract class n<R extends com.kwad.sdk.core.network.o, T extends com.kwad.sdk.core.network.NormalResultData> extends com.kwad.sdk.core.network.a<R> {
    private static final java.lang.String TAG = "NormalNetworking";
    private com.kwad.sdk.core.network.h<R, T> mListener;

    public n() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mListener = r0
            return
    }

    private void onRequest(com.kwad.sdk.core.network.h<R, T> r1) {
            r0 = this;
            r0.mListener = r1
            return
    }

    @Override
    protected void cancel() {
            r1 = this;
            super.cancel()
            r0 = 0
            r1.mListener = r0
            return
    }

    protected abstract T createResponseData();

    @Override
    protected void fetchImpl() {
            r6 = this;
            com.kwad.sdk.core.network.g r0 = r6.createRequest()
            com.kwad.sdk.core.network.o r0 = (com.kwad.sdk.core.network.o) r0
            r1 = 0
            java.lang.String r2 = r0.getUrl()     // Catch: java.lang.Exception -> L55
            java.lang.String r3 = r0.getMethod()     // Catch: java.lang.Exception -> L55
            java.lang.String r4 = "POST"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L55
            if (r3 == 0) goto L28
            com.kwad.sdk.export.proxy.AdHttpProxy r3 = com.kwad.sdk.g.wX()     // Catch: java.lang.Exception -> L55
            java.util.Map r4 = r0.getHeader()     // Catch: java.lang.Exception -> L55
            org.json.JSONObject r5 = r0.getBody()     // Catch: java.lang.Exception -> L55
            com.kwad.sdk.core.network.c r1 = r3.doPost(r2, r4, r5)     // Catch: java.lang.Exception -> L55
            goto L34
        L28:
            com.kwad.sdk.export.proxy.AdHttpProxy r3 = com.kwad.sdk.g.wX()     // Catch: java.lang.Exception -> L55
            java.util.Map r4 = r0.getHeader()     // Catch: java.lang.Exception -> L55
            com.kwad.sdk.core.network.c r1 = r3.doGet(r2, r4)     // Catch: java.lang.Exception -> L55
        L34:
            java.lang.String r2 = "NormalNetworking"
            if (r1 == 0) goto L52
            int r3 = r1.code     // Catch: java.lang.Exception -> L55
            r4 = 200(0xc8, float:2.8E-43)
            if (r3 != r4) goto L52
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L55
            java.lang.String r4 = "normal request success:"
            r3.<init>(r4)     // Catch: java.lang.Exception -> L55
            int r4 = r1.code     // Catch: java.lang.Exception -> L55
            r3.append(r4)     // Catch: java.lang.Exception -> L55
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L55
        L4e:
            com.kwad.sdk.core.e.c.d(r2, r3)     // Catch: java.lang.Exception -> L55
            goto L65
        L52:
            java.lang.String r3 = "normal request failed"
            goto L4e
        L55:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            if (r1 != 0) goto L60
            com.kwad.sdk.core.network.c r1 = new com.kwad.sdk.core.network.c
            r1.<init>()
        L60:
            r3 = -1
            r1.code = r3
            r1.aoL = r2
        L65:
            r6.onResponse(r0, r1)
            return
    }

    @Override
    protected void onResponse(com.kwad.sdk.core.network.g r1, com.kwad.sdk.core.network.c r2) {
            r0 = this;
            com.kwad.sdk.core.network.o r1 = (com.kwad.sdk.core.network.o) r1
            r0.onResponse(r1, r2)
            return
    }

    protected void onResponse(R r4, com.kwad.sdk.core.network.c r5) {
            r3 = this;
            com.kwad.sdk.core.network.h<R extends com.kwad.sdk.core.network.o, T extends com.kwad.sdk.core.network.NormalResultData> r0 = r3.mListener
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = r5.Bd()
            if (r0 == 0) goto L18
            com.kwad.sdk.core.network.NormalResultData r0 = r3.createResponseData()
            r3.parseResponse(r0, r5)
            com.kwad.sdk.core.network.h<R extends com.kwad.sdk.core.network.o, T extends com.kwad.sdk.core.network.NormalResultData> r5 = r3.mListener
            r5.onSuccess(r4, r0)
            return
        L18:
            com.kwad.sdk.core.network.h<R extends com.kwad.sdk.core.network.o, T extends com.kwad.sdk.core.network.NormalResultData> r0 = r3.mListener
            int r1 = r5.code
            java.lang.Exception r2 = r5.aoL
            if (r2 == 0) goto L27
            java.lang.Exception r5 = r5.aoL
            java.lang.String r5 = r5.getMessage()
            goto L29
        L27:
            java.lang.String r5 = ""
        L29:
            r0.onError(r4, r1, r5)
            return
    }

    protected void parseResponse(T r1, com.kwad.sdk.core.network.c r2) {
            r0 = this;
            r1.parseResponse(r2)
            return
    }

    public void request(com.kwad.sdk.core.network.h<R, T> r1) {
            r0 = this;
            r0.onRequest(r1)
            r0.fetch()
            return
    }
}
