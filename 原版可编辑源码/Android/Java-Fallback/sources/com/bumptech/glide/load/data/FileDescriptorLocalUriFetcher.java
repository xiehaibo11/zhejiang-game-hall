package com.bumptech.glide.load.data;

public class FileDescriptorLocalUriFetcher extends com.bumptech.glide.load.data.LocalUriFetcher<android.os.ParcelFileDescriptor> {
    public FileDescriptorLocalUriFetcher(android.content.Context r1, android.net.Uri r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    protected void close(android.os.ParcelFileDescriptor r1) throws java.io.IOException {
            r0 = this;
            r1.close()
            return
    }

    @Override
    protected void close(android.os.ParcelFileDescriptor r1) throws java.io.IOException {
            r0 = this;
            android.os.ParcelFileDescriptor r1 = (android.os.ParcelFileDescriptor) r1
            r0.close(r1)
            return
    }

    @Override
    protected android.os.ParcelFileDescriptor loadResource(android.net.Uri r2, android.content.ContentResolver r3) throws java.io.FileNotFoundException {
            r1 = this;
            java.lang.String r0 = "r"
            android.content.res.AssetFileDescriptor r2 = r3.openAssetFileDescriptor(r2, r0)
            android.os.ParcelFileDescriptor r2 = r2.getParcelFileDescriptor()
            return r2
    }

    @Override
    protected android.os.ParcelFileDescriptor loadResource(android.net.Uri r1, android.content.ContentResolver r2) throws java.io.FileNotFoundException {
            r0 = this;
            android.os.ParcelFileDescriptor r1 = r0.loadResource(r1, r2)
            return r1
    }
}
