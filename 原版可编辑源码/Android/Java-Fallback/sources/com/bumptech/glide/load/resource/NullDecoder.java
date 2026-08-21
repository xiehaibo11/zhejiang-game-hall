package com.bumptech.glide.load.resource;

public class NullDecoder<T, Z> implements com.bumptech.glide.load.ResourceDecoder<T, Z> {
    private static final com.bumptech.glide.load.resource.NullDecoder<?, ?> NULL_DECODER = null;

    static {
            com.bumptech.glide.load.resource.NullDecoder r0 = new com.bumptech.glide.load.resource.NullDecoder
            r0.<init>()
            com.bumptech.glide.load.resource.NullDecoder.NULL_DECODER = r0
            return
    }

    public NullDecoder() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T, Z> com.bumptech.glide.load.resource.NullDecoder<T, Z> get() {
            com.bumptech.glide.load.resource.NullDecoder<?, ?> r0 = com.bumptech.glide.load.resource.NullDecoder.NULL_DECODER
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<Z> decode(T r1, int r2, int r3) {
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
