package com.mbridge.msdk.thrid.okio;

public abstract class ForwardingSink implements com.mbridge.msdk.thrid.okio.Sink {
    private final com.mbridge.msdk.thrid.okio.Sink delegate;

    public ForwardingSink(com.mbridge.msdk.thrid.okio.Sink r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.delegate = r2
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
            com.mbridge.msdk.thrid.okio.Sink r0 = r1.delegate
            r0.close()
            return
    }

    public final com.mbridge.msdk.thrid.okio.Sink delegate() {
            r1 = this;
            com.mbridge.msdk.thrid.okio.Sink r0 = r1.delegate
            return r0
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.thrid.okio.Sink r0 = r1.delegate
            r0.flush()
            return
    }

    @Override
    public com.mbridge.msdk.thrid.okio.Timeout timeout() {
            r1 = this;
            com.mbridge.msdk.thrid.okio.Sink r0 = r1.delegate
            com.mbridge.msdk.thrid.okio.Timeout r0 = r0.timeout()
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
            com.mbridge.msdk.thrid.okio.Sink r1 = r2.delegate
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void write(com.mbridge.msdk.thrid.okio.Buffer r2, long r3) throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.thrid.okio.Sink r0 = r1.delegate
            r0.write(r2, r3)
            return
    }
}
