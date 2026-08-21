package com.kwad.framework.filedownloader.download;

public final class a {
    final long ack;
    final long acl;
    final long acm;
    final long contentLength;

    a(long r1, long r3, long r5, long r7) {
            r0 = this;
            r0.<init>()
            r0.ack = r1
            r0.acl = r3
            r0.acm = r5
            r0.contentLength = r7
            return
    }

    public final java.lang.String toString() {
            r3 = this;
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            long r1 = r3.ack
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            long r1 = r3.acm
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            long r1 = r3.acl
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 2
            r0[r2] = r1
            java.lang.String r1 = "range[%d, %d) current offset[%d]"
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r1, r0)
            return r0
    }
}
