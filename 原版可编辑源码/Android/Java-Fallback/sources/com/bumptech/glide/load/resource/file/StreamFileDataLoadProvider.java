package com.bumptech.glide.load.resource.file;

public class StreamFileDataLoadProvider implements com.bumptech.glide.provider.DataLoadProvider<java.io.InputStream, java.io.File> {
    private static final com.bumptech.glide.load.resource.file.StreamFileDataLoadProvider.ErrorSourceDecoder ERROR_DECODER = null;
    private final com.bumptech.glide.load.ResourceDecoder<java.io.File, java.io.File> cacheDecoder;
    private final com.bumptech.glide.load.Encoder<java.io.InputStream> encoder;

    static class 1 {
    }

    private static class ErrorSourceDecoder implements com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, java.io.File> {
        private ErrorSourceDecoder() {
                r0 = this;
                r0.<init>()
                return
        }

        ErrorSourceDecoder(com.bumptech.glide.load.resource.file.StreamFileDataLoadProvider.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public com.bumptech.glide.load.engine.Resource<java.io.File> decode(java.io.InputStream r1, int r2, int r3) {
                r0 = this;
                java.lang.Error r1 = new java.lang.Error
                java.lang.String r2 = "You cannot decode a File from an InputStream by default, try either #diskCacheStratey(DiskCacheStrategy.SOURCE) to avoid this call or #decoder(ResourceDecoder) to replace this Decoder"
                r1.<init>(r2)
                throw r1
        }

        @Override
        public com.bumptech.glide.load.engine.Resource<java.io.File> decode(java.io.InputStream r1, int r2, int r3) throws java.io.IOException {
                r0 = this;
                java.io.InputStream r1 = (java.io.InputStream) r1
                com.bumptech.glide.load.engine.Resource r1 = r0.decode(r1, r2, r3)
                return r1
        }

        @Override
        public java.lang.String getId() {
                r1 = this;
                java.lang.String r0 = ""
                return r0
        }
    }

    static {
            com.bumptech.glide.load.resource.file.StreamFileDataLoadProvider$ErrorSourceDecoder r0 = new com.bumptech.glide.load.resource.file.StreamFileDataLoadProvider$ErrorSourceDecoder
            r1 = 0
            r0.<init>(r1)
            com.bumptech.glide.load.resource.file.StreamFileDataLoadProvider.ERROR_DECODER = r0
            return
    }

    public StreamFileDataLoadProvider() {
            r1 = this;
            r1.<init>()
            com.bumptech.glide.load.resource.file.FileDecoder r0 = new com.bumptech.glide.load.resource.file.FileDecoder
            r0.<init>()
            r1.cacheDecoder = r0
            com.bumptech.glide.load.model.StreamEncoder r0 = new com.bumptech.glide.load.model.StreamEncoder
            r0.<init>()
            r1.encoder = r0
            return
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<java.io.File, java.io.File> getCacheDecoder() {
            r1 = this;
            com.bumptech.glide.load.ResourceDecoder<java.io.File, java.io.File> r0 = r1.cacheDecoder
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceEncoder<java.io.File> getEncoder() {
            r1 = this;
            com.bumptech.glide.load.resource.NullResourceEncoder r0 = com.bumptech.glide.load.resource.NullResourceEncoder.get()
            return r0
    }

    @Override
    public com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, java.io.File> getSourceDecoder() {
            r1 = this;
            com.bumptech.glide.load.resource.file.StreamFileDataLoadProvider$ErrorSourceDecoder r0 = com.bumptech.glide.load.resource.file.StreamFileDataLoadProvider.ERROR_DECODER
            return r0
    }

    @Override
    public com.bumptech.glide.load.Encoder<java.io.InputStream> getSourceEncoder() {
            r1 = this;
            com.bumptech.glide.load.Encoder<java.io.InputStream> r0 = r1.encoder
            return r0
    }
}
