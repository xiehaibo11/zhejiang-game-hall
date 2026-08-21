package com.bumptech.glide.load.resource.transcode;

public class GifDrawableBytesTranscoder implements com.bumptech.glide.load.resource.transcode.ResourceTranscoder<com.bumptech.glide.load.resource.gif.GifDrawable, byte[]> {
    public GifDrawableBytesTranscoder() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = "GifDrawableBytesTranscoder.com.bumptech.glide.load.resource.transcode"
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<byte[]> transcode(com.bumptech.glide.load.engine.Resource<com.bumptech.glide.load.resource.gif.GifDrawable> r2) {
            r1 = this;
            java.lang.Object r2 = r2.get()
            com.bumptech.glide.load.resource.gif.GifDrawable r2 = (com.bumptech.glide.load.resource.gif.GifDrawable) r2
            com.bumptech.glide.load.resource.bytes.BytesResource r0 = new com.bumptech.glide.load.resource.bytes.BytesResource
            byte[] r2 = r2.getData()
            r0.<init>(r2)
            return r0
    }
}
