package com.bumptech.glide.load.model.file_descriptor;

public class FileDescriptorStringLoader extends com.bumptech.glide.load.model.StringLoader<android.os.ParcelFileDescriptor> implements com.bumptech.glide.load.model.file_descriptor.FileDescriptorModelLoader<java.lang.String> {

    public static class Factory implements com.bumptech.glide.load.model.ModelLoaderFactory<java.lang.String, android.os.ParcelFileDescriptor> {
        public Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.bumptech.glide.load.model.ModelLoader<java.lang.String, android.os.ParcelFileDescriptor> build(android.content.Context r3, com.bumptech.glide.load.model.GenericLoaderFactory r4) {
                r2 = this;
                com.bumptech.glide.load.model.file_descriptor.FileDescriptorStringLoader r3 = new com.bumptech.glide.load.model.file_descriptor.FileDescriptorStringLoader
                java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
                java.lang.Class<android.os.ParcelFileDescriptor> r1 = android.os.ParcelFileDescriptor.class
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

    public FileDescriptorStringLoader(android.content.Context r2) {
            r1 = this;
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            com.bumptech.glide.load.model.ModelLoader r2 = com.bumptech.glide.Glide.buildFileDescriptorModelLoader(r0, r2)
            r1.<init>(r2)
            return
    }

    public FileDescriptorStringLoader(com.bumptech.glide.load.model.ModelLoader<android.net.Uri, android.os.ParcelFileDescriptor> r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }
}
