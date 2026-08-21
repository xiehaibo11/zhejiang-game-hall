package com.bumptech.glide.load.model.stream;

public class StreamResourceLoader extends com.bumptech.glide.load.model.ResourceLoader<java.io.InputStream> implements com.bumptech.glide.load.model.stream.StreamModelLoader<java.lang.Integer> {

    public static class Factory implements com.bumptech.glide.load.model.ModelLoaderFactory<java.lang.Integer, java.io.InputStream> {
        public Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.bumptech.glide.load.model.ModelLoader<java.lang.Integer, java.io.InputStream> build(android.content.Context r4, com.bumptech.glide.load.model.GenericLoaderFactory r5) {
                r3 = this;
                com.bumptech.glide.load.model.stream.StreamResourceLoader r0 = new com.bumptech.glide.load.model.stream.StreamResourceLoader
                java.lang.Class<android.net.Uri> r1 = android.net.Uri.class
                java.lang.Class<java.io.InputStream> r2 = java.io.InputStream.class
                com.bumptech.glide.load.model.ModelLoader r5 = r5.buildModelLoader(r1, r2)
                r0.<init>(r4, r5)
                return r0
        }

        @Override
        public void teardown() {
                r0 = this;
                return
        }
    }

    public StreamResourceLoader(android.content.Context r2) {
            r1 = this;
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            com.bumptech.glide.load.model.ModelLoader r0 = com.bumptech.glide.Glide.buildStreamModelLoader(r0, r2)
            r1.<init>(r2, r0)
            return
    }

    public StreamResourceLoader(android.content.Context r1, com.bumptech.glide.load.model.ModelLoader<android.net.Uri, java.io.InputStream> r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }
}
