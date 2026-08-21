package com.bumptech.glide.load.model.stream;

public class StreamFileLoader extends com.bumptech.glide.load.model.FileLoader<java.io.InputStream> implements com.bumptech.glide.load.model.stream.StreamModelLoader<java.io.File> {

    public static class Factory implements com.bumptech.glide.load.model.ModelLoaderFactory<java.io.File, java.io.InputStream> {
        public Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.bumptech.glide.load.model.ModelLoader<java.io.File, java.io.InputStream> build(android.content.Context r3, com.bumptech.glide.load.model.GenericLoaderFactory r4) {
                r2 = this;
                com.bumptech.glide.load.model.stream.StreamFileLoader r3 = new com.bumptech.glide.load.model.stream.StreamFileLoader
                java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
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

    public StreamFileLoader(android.content.Context r2) {
            r1 = this;
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            com.bumptech.glide.load.model.ModelLoader r2 = com.bumptech.glide.Glide.buildStreamModelLoader(r0, r2)
            r1.<init>(r2)
            return
    }

    public StreamFileLoader(com.bumptech.glide.load.model.ModelLoader<android.net.Uri, java.io.InputStream> r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }
}
