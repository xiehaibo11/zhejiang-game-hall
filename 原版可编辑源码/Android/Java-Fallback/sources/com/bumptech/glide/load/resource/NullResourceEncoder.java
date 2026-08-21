package com.bumptech.glide.load.resource;

public class NullResourceEncoder<T> implements com.bumptech.glide.load.ResourceEncoder<T> {
    private static final com.bumptech.glide.load.resource.NullResourceEncoder<?> NULL_ENCODER = null;

    static {
            com.bumptech.glide.load.resource.NullResourceEncoder r0 = new com.bumptech.glide.load.resource.NullResourceEncoder
            r0.<init>()
            com.bumptech.glide.load.resource.NullResourceEncoder.NULL_ENCODER = r0
            return
    }

    public NullResourceEncoder() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> com.bumptech.glide.load.resource.NullResourceEncoder<T> get() {
            com.bumptech.glide.load.resource.NullResourceEncoder<?> r0 = com.bumptech.glide.load.resource.NullResourceEncoder.NULL_ENCODER
            return r0
    }

    public boolean encode(com.bumptech.glide.load.engine.Resource<T> r1, java.io.OutputStream r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean encode(java.lang.Object r1, java.io.OutputStream r2) {
            r0 = this;
            com.bumptech.glide.load.engine.Resource r1 = (com.bumptech.glide.load.engine.Resource) r1
            boolean r1 = r0.encode(r1, r2)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }
}
