package com.kwad.sdk.crash.report.upload;

public final class c extends com.kwad.sdk.core.network.b {
    public final java.util.Map<java.lang.String, java.lang.String> aBs;

    public c(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.aBs = r0
            java.lang.String r1 = "did"
            r0.put(r1, r3)
            java.util.Map<java.lang.String, java.lang.String> r3 = r2.aBs
            java.lang.String r0 = "sid"
            r3.put(r0, r4)
            java.util.Map<java.lang.String, java.lang.String> r3 = r2.aBs
            java.lang.String r4 = "fileExtend"
            r3.put(r4, r5)
            java.util.Map<java.lang.String, java.lang.String> r3 = r2.aBs
            java.lang.String r4 = "bizType"
            java.lang.String r5 = "5"
            r3.put(r4, r5)
            return
    }

    @Override
    public final void buildBaseBody() {
            r0 = this;
            return
    }

    @Override
    public final void buildBaseHeader() {
            r0 = this;
            return
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> getBodyMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.aBs
            return r0
    }

    @Override
    public final java.lang.String getUrl() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "https://"
            r0.<init>(r1)
            com.kwad.sdk.core.network.idc.a r1 = com.kwad.sdk.core.network.idc.a.Bo()
            java.lang.String r2 = "ulog"
            java.lang.String r3 = "ulog-sdk.gifshow.com"
            java.lang.String r1 = r1.P(r2, r3)
            r0.append(r1)
            java.lang.String r1 = "/rest/log/sdk/file/token"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
