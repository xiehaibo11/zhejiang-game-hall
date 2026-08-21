package com.bumptech.glide.load.model;

public class ImageVideoWrapper {
    private final android.os.ParcelFileDescriptor fileDescriptor;
    private final java.io.InputStream streamData;

    public ImageVideoWrapper(java.io.InputStream r1, android.os.ParcelFileDescriptor r2) {
            r0 = this;
            r0.<init>()
            r0.streamData = r1
            r0.fileDescriptor = r2
            return
    }

    public android.os.ParcelFileDescriptor getFileDescriptor() {
            r1 = this;
            android.os.ParcelFileDescriptor r0 = r1.fileDescriptor
            return r0
    }

    public java.io.InputStream getStream() {
            r1 = this;
            java.io.InputStream r0 = r1.streamData
            return r0
    }
}
