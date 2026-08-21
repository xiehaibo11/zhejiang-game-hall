package com.tkay.core.common.f;

public final class v {
    public java.lang.String a;
    public int b;
    public java.lang.String c;
    public java.lang.String d;
    public long e;
    public long f;
    public int g;

    public v() {
            r0 = this;
            r0.<init>()
            return
    }

    public final java.lang.String a() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "noticeUrl: "
            r0.<init>(r1)
            java.lang.String r1 = r3.d
            r0.append(r1)
            java.lang.String r1 = ", currentRetryCount: "
            r0.append(r1)
            int r1 = r3.g
            r0.append(r1)
            java.lang.String r1 = ", offerOutdateTime: "
            r0.append(r1)
            long r1 = r3.f
            r0.append(r1)
            java.lang.String r1 = ", firstFailTime: "
            r0.append(r1)
            long r1 = r3.e
            r0.append(r1)
            java.lang.String r1 = ", id: "
            r0.append(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
