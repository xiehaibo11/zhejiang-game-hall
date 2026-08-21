package com.kwad.framework.filedownloader.download;

public final class a {
    final long ack;
    final long acl;
    final long acm;
    final long contentLength;

    a(long j, long j2, long j3, long j4) {
        this.ack = j;
        this.acl = j2;
        this.acm = j3;
        this.contentLength = j4;
    }

    public final String toString() {
        return com.kwad.framework.filedownloader.f.f.b("range[%d, %d) current offset[%d]", Long.valueOf(this.ack), Long.valueOf(this.acm), Long.valueOf(this.acl));
    }
}
