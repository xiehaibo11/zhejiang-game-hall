package com.kwad.sdk.utils.b;

public class a extends com.kwad.sdk.core.response.a.a {
    public int aLC;
    public int aLD;
    public int aLE;

    public a() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.aLC = r0
            r1.aLD = r0
            r1.aLE = r0
            return
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "KvOperationRecord{putCount="
            r0.<init>(r1)
            int r1 = r2.aLC
            r0.append(r1)
            java.lang.String r1 = ", getFailedCount="
            r0.append(r1)
            int r1 = r2.aLD
            r0.append(r1)
            java.lang.String r1 = ", getSuccessCount="
            r0.append(r1)
            int r1 = r2.aLE
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
