package com.bumptech.glide.load.model.file_descriptor;

public class FileDescriptorResourceLoader extends com.bumptech.glide.load.model.ResourceLoader<android.os.ParcelFileDescriptor> implements com.bumptech.glide.load.model.file_descriptor.FileDescriptorModelLoader<java.lang.Integer> {

    public static class Factory implements com.bumptech.glide.load.model.ModelLoaderFactory<java.lang.Integer, android.os.ParcelFileDescriptor> {
        public Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.bumptech.glide.load.model.ModelLoader<java.lang.Integer, android.os.ParcelFileDescriptor> build(android.content.Context r4, com.bumptech.glide.load.model.GenericLoaderFactory r5) {
                r3 = this;
                com.bumptech.glide.load.model.file_descriptor.FileDescriptorResourceLoader r0 = new com.bumptech.glide.load.model.file_descriptor.FileDescriptorResourceLoader
                java.lang.Class<android.net.Uri> r1 = android.net.Uri.class
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

    public FileDescriptorResourceLoader(android.content.Context r2) {
            r1 = this;
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            com.bumptech.glide.load.model.ModelLoader r0 = com.bumptech.glide.Glide.buildFileDescriptorModelLoader(r0, r2)
            r1.<init>(r2, r0)
            return
    }

    public FileDescriptorResourceLoader(android.content.Context r1, com.bumptech.glide.load.model.ModelLoader<android.net.Uri, android.os.ParcelFileDescriptor> r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }
}
