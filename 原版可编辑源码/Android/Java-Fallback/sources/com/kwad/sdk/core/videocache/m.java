package com.kwad.sdk.core.videocache;

public final class m {
    public final long awV;
    public final java.lang.String awW;
    public final java.lang.String url;

    public m(java.lang.String r1, long r2, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.url = r1
            r0.awV = r2
            r0.awW = r4
            return
    }

    public final java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "SourceInfo{url='"
            r0.<init>(r1)
            java.lang.String r1 = r4.url
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", length="
            r0.append(r2)
            long r2 = r4.awV
            r0.append(r2)
            java.lang.String r2 = ", mime='"
            r0.append(r2)
            java.lang.String r2 = r4.awW
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
