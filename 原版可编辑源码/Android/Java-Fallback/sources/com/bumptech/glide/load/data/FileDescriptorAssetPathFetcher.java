package com.bumptech.glide.load.data;

public class FileDescriptorAssetPathFetcher extends com.bumptech.glide.load.data.AssetPathFetcher<android.os.ParcelFileDescriptor> {
    public FileDescriptorAssetPathFetcher(android.content.res.AssetManager r1, java.lang.String r2) {
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
    protected android.os.ParcelFileDescriptor loadResource(android.content.res.AssetManager r1, java.lang.String r2) throws java.io.IOException {
            r0 = this;
            android.content.res.AssetFileDescriptor r1 = r1.openFd(r2)
            android.os.ParcelFileDescriptor r1 = r1.getParcelFileDescriptor()
            return r1
    }

    @Override
    protected android.os.ParcelFileDescriptor loadResource(android.content.res.AssetManager r1, java.lang.String r2) throws java.io.IOException {
            r0 = this;
            android.os.ParcelFileDescriptor r1 = r0.loadResource(r1, r2)
            return r1
    }
}
