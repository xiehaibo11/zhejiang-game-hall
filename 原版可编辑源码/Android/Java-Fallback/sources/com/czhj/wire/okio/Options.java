package com.czhj.wire.okio;

public final class Options extends java.util.AbstractList<com.czhj.wire.okio.ByteString> implements java.util.RandomAccess {
    final com.czhj.wire.okio.ByteString[] a;

    private Options(com.czhj.wire.okio.ByteString[] r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static com.czhj.wire.okio.Options of(com.czhj.wire.okio.ByteString... r1) {
            com.czhj.wire.okio.Options r0 = new com.czhj.wire.okio.Options
            java.lang.Object r1 = r1.clone()
            com.czhj.wire.okio.ByteString[] r1 = (com.czhj.wire.okio.ByteString[]) r1
            r0.<init>(r1)
            return r0
    }

    @Override
    public com.czhj.wire.okio.ByteString get(int r2) {
            r1 = this;
            com.czhj.wire.okio.ByteString[] r0 = r1.a
            r2 = r0[r2]
            return r2
    }

    @Override
    public java.lang.Object get(int r1) {
            r0 = this;
            com.czhj.wire.okio.ByteString r1 = r0.get(r1)
            return r1
    }

    @Override
    public int size() {
            r1 = this;
            com.czhj.wire.okio.ByteString[] r0 = r1.a
            int r0 = r0.length
            return r0
    }
}
