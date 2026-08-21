package com.bumptech.glide.load.model.file_descriptor;

public class FileDescriptorUriLoader extends com.bumptech.glide.load.model.UriLoader<android.os.ParcelFileDescriptor> implements com.bumptech.glide.load.model.file_descriptor.FileDescriptorModelLoader<android.net.Uri> {

    public static class Factory implements com.bumptech.glide.load.model.ModelLoaderFactory<android.net.Uri, android.os.ParcelFileDescriptor> {
        public Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.bumptech.glide.load.model.ModelLoader<android.net.Uri, android.os.ParcelFileDescriptor> build(android.content.Context r4, com.bumptech.glide.load.model.GenericLoaderFactory r5) {
                r3 = this;
                com.bumptech.glide.load.model.file_descriptor.FileDescriptorUriLoader r0 = new com.bumptech.glide.load.model.file_descriptor.FileDescriptorUriLoader
                java.lang.Class<com.bumptech.glide.load.model.GlideUrl> r1 = com.bumptech.glide.load.model.GlideUrl.class
                java.lang.Class<android.os.ParcelFileDescriptor> r2 = android.os.ParcelFileDescriptor.class
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

    public FileDescriptorUriLoader(android.content.Context r2) {
            r1 = this;
            java.lang.Class<com.bumptech.glide.load.model.GlideUrl> r0 = com.bumptech.glide.load.model.GlideUrl.class
            com.bumptech.glide.load.model.ModelLoader r0 = com.bumptech.glide.Glide.buildFileDescriptorModelLoader(r0, r2)
            r1.<init>(r2, r0)
            return
    }

    public FileDescriptorUriLoader(android.content.Context r1, com.bumptech.glide.load.model.ModelLoader<com.bumptech.glide.load.model.GlideUrl, android.os.ParcelFileDescriptor> r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    protected com.bumptech.glide.load.data.DataFetcher<android.os.ParcelFileDescriptor> getAssetPathFetcher(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            com.bumptech.glide.load.data.FileDescriptorAssetPathFetcher r0 = new com.bumptech.glide.load.data.FileDescriptorAssetPathFetcher
            android.content.Context r2 = r2.getApplicationContext()
            android.content.res.AssetManager r2 = r2.getAssets()
            r0.<init>(r2, r3)
            return r0
    }

    @Override
    protected com.bumptech.glide.load.data.DataFetcher<android.os.ParcelFileDescriptor> getLocalUriFetcher(android.content.Context r2, android.net.Uri r3) {
            r1 = this;
            com.bumptech.glide.load.data.FileDescriptorLocalUriFetcher r0 = new com.bumptech.glide.load.data.FileDescriptorLocalUriFetcher
            r0.<init>(r2, r3)
            return r0
    }
}
