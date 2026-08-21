package com.sigmob.sdk.videocache;

public class e {
    public final java.io.File a;
    public final com.sigmob.sdk.videocache.file.c b;
    public final com.sigmob.sdk.videocache.file.a c;
    public final com.sigmob.sdk.videocache.sourcestorage.c d;
    public final com.sigmob.sdk.videocache.headers.b e;

    e(java.io.File r1, com.sigmob.sdk.videocache.file.c r2, com.sigmob.sdk.videocache.file.a r3, com.sigmob.sdk.videocache.sourcestorage.c r4, com.sigmob.sdk.videocache.headers.b r5) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            r0.e = r5
            return
    }

    java.io.File a(java.lang.String r3) {
            r2 = this;
            com.sigmob.sdk.videocache.file.c r0 = r2.b
            java.lang.String r3 = r0.a(r3)
            java.io.File r0 = new java.io.File
            java.io.File r1 = r2.a
            r0.<init>(r1, r3)
            return r0
    }
}
