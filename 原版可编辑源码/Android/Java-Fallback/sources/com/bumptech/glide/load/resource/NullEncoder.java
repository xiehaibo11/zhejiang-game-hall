package com.bumptech.glide.load.resource;

public class NullEncoder<T> implements com.bumptech.glide.load.Encoder<T> {
    private static final com.bumptech.glide.load.resource.NullEncoder<?> NULL_ENCODER = null;

    static {
            com.bumptech.glide.load.resource.NullEncoder r0 = new com.bumptech.glide.load.resource.NullEncoder
            r0.<init>()
            com.bumptech.glide.load.resource.NullEncoder.NULL_ENCODER = r0
            return
    }

    public NullEncoder() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> com.bumptech.glide.load.Encoder<T> get() {
            com.bumptech.glide.load.resource.NullEncoder<?> r0 = com.bumptech.glide.load.resource.NullEncoder.NULL_ENCODER
            return r0
    }

    @Override
    public boolean encode(T r1, java.io.OutputStream r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }
}
