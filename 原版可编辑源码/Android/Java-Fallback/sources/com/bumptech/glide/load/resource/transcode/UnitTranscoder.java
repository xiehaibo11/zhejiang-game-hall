package com.bumptech.glide.load.resource.transcode;

public class UnitTranscoder<Z> implements com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, Z> {
    private static final com.bumptech.glide.load.resource.transcode.UnitTranscoder<?> UNIT_TRANSCODER = null;

    static {
            com.bumptech.glide.load.resource.transcode.UnitTranscoder r0 = new com.bumptech.glide.load.resource.transcode.UnitTranscoder
            r0.<init>()
            com.bumptech.glide.load.resource.transcode.UnitTranscoder.UNIT_TRANSCODER = r0
            return
    }

    public UnitTranscoder() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <Z> com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, Z> get() {
            com.bumptech.glide.load.resource.transcode.UnitTranscoder<?> r0 = com.bumptech.glide.load.resource.transcode.UnitTranscoder.UNIT_TRANSCODER
            return r0
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<Z> transcode(com.bumptech.glide.load.engine.Resource<Z> r1) {
            r0 = this;
            return r1
    }
}
