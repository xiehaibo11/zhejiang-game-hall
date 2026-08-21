package com.bumptech.glide.load.model.stream;

public class StreamUrlLoader extends com.bumptech.glide.load.model.UrlLoader<java.io.InputStream> {

    public static class Factory implements com.bumptech.glide.load.model.ModelLoaderFactory<java.net.URL, java.io.InputStream> {
        public Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.bumptech.glide.load.model.ModelLoader<java.net.URL, java.io.InputStream> build(android.content.Context r3, com.bumptech.glide.load.model.GenericLoaderFactory r4) {
                r2 = this;
                com.bumptech.glide.load.model.stream.StreamUrlLoader r3 = new com.bumptech.glide.load.model.stream.StreamUrlLoader
                java.lang.Class<com.bumptech.glide.load.model.GlideUrl> r0 = com.bumptech.glide.load.model.GlideUrl.class
                java.lang.Class<java.io.InputStream> r1 = java.io.InputStream.class
                com.bumptech.glide.load.model.ModelLoader r4 = r4.buildModelLoader(r0, r1)
                r3.<init>(r4)
                return r3
        }

        @Override
        public void teardown() {
                r0 = this;
                return
        }
    }

    public StreamUrlLoader(com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, java.io.InputStream> r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }
}
