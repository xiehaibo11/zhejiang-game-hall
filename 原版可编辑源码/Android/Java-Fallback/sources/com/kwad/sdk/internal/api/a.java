package com.kwad.sdk.internal.api;

public class a extends com.kwad.sdk.core.response.a.a {
    public int ajr;
    public int ajs;
    public java.lang.String ajt;
    public java.lang.String aju;
    public java.lang.String ajv;
    public java.lang.String ajw;
    public java.lang.String ajx;
    public long ajy;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public final boolean FD() {
            r1 = this;
            int r0 = r1.ajr
            if (r0 != 0) goto L12
            int r0 = r1.ajs
            if (r0 != 0) goto L12
            java.lang.String r0 = r1.ajt
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L12
            r0 = 1
            return r0
        L12:
            r0 = 0
            return r0
    }

    public final boolean FE() {
            r1 = this;
            java.lang.String r0 = r1.aju
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L22
            java.lang.String r0 = r1.ajv
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L22
            java.lang.String r0 = r1.ajx
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L22
            java.lang.String r0 = r1.ajw
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L22
            r0 = 1
            return r0
        L22:
            r0 = 0
            return r0
    }
}
