package com.czhj.wire.okio;

public abstract class ForwardingSource implements com.czhj.wire.okio.Source {
    private final com.czhj.wire.okio.Source a;

    public ForwardingSource(com.czhj.wire.okio.Source r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.a = r2
            return
        L8:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "delegate == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            com.czhj.wire.okio.Source r0 = r1.a
            r0.close()
            return
    }

    public final com.czhj.wire.okio.Source delegate() {
            r1 = this;
            com.czhj.wire.okio.Source r0 = r1.a
            return r0
    }

    @Override
    public long read(com.czhj.wire.okio.Buffer r2, long r3) throws java.io.IOException {
            r1 = this;
            com.czhj.wire.okio.Source r0 = r1.a
            long r2 = r0.read(r2, r3)
            return r2
    }

    @Override
    public com.czhj.wire.okio.Timeout timeout() {
            r1 = this;
            com.czhj.wire.okio.Source r0 = r1.a
            com.czhj.wire.okio.Timeout r0 = r0.timeout()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = "("
            r0.append(r1)
            com.czhj.wire.okio.Source r1 = r2.a
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
