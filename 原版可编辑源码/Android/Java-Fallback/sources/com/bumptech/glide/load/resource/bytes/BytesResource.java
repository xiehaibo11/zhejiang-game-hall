package com.bumptech.glide.load.resource.bytes;

public class BytesResource implements com.bumptech.glide.load.engine.Resource<byte[]> {
    private final byte[] bytes;

    public BytesResource(byte[] r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.bytes = r2
            return
        L8:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "Bytes must not be null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public byte[] get() {
            r1 = this;
            byte[] r0 = r1.get()
            return r0
    }

    @Override
    public byte[] get() {
            r1 = this;
            byte[] r0 = r1.bytes
            return r0
    }

    @Override
    public int getSize() {
            r1 = this;
            byte[] r0 = r1.bytes
            int r0 = r0.length
            return r0
    }

    @Override
    public void recycle() {
            r0 = this;
            return
    }
}
