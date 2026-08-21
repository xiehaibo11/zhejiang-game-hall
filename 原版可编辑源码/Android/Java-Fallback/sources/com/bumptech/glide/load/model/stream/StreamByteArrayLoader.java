package com.bumptech.glide.load.model.stream;

public class StreamByteArrayLoader implements com.bumptech.glide.load.model.stream.StreamModelLoader<byte[]> {
    private final java.lang.String id;

    public static class Factory implements com.bumptech.glide.load.model.ModelLoaderFactory<byte[], java.io.InputStream> {
        public Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.bumptech.glide.load.model.ModelLoader<byte[], java.io.InputStream> build(android.content.Context r1, com.bumptech.glide.load.model.GenericLoaderFactory r2) {
                r0 = this;
                com.bumptech.glide.load.model.stream.StreamByteArrayLoader r1 = new com.bumptech.glide.load.model.stream.StreamByteArrayLoader
                r1.<init>()
                return r1
        }

        @Override
        public void teardown() {
                r0 = this;
                return
        }
    }

    public StreamByteArrayLoader() {
            r1 = this;
            java.lang.String r0 = ""
            r1.<init>(r0)
            return
    }

    @java.lang.Deprecated
    public StreamByteArrayLoader(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            return
    }

    @Override
    public com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> getResourceFetcher(java.lang.Object r1, int r2, int r3) {
            r0 = this;
            byte[] r1 = (byte[]) r1
            com.bumptech.glide.load.data.DataFetcher r1 = r0.getResourceFetcher(r1, r2, r3)
            return r1
    }

    public com.bumptech.glide.load.data.DataFetcher<java.io.InputStream> getResourceFetcher(byte[] r1, int r2, int r3) {
            r0 = this;
            com.bumptech.glide.load.data.ByteArrayFetcher r2 = new com.bumptech.glide.load.data.ByteArrayFetcher
            java.lang.String r3 = r0.id
            r2.<init>(r1, r3)
            return r2
    }
}
