package com.bumptech.glide.load.model;

public class ImageVideoWrapperEncoder implements com.bumptech.glide.load.Encoder<com.bumptech.glide.load.model.ImageVideoWrapper> {
    private final com.bumptech.glide.load.Encoder<android.os.ParcelFileDescriptor> fileDescriptorEncoder;
    private java.lang.String id;
    private final com.bumptech.glide.load.Encoder<java.io.InputStream> streamEncoder;

    public ImageVideoWrapperEncoder(com.bumptech.glide.load.Encoder<java.io.InputStream> r1, com.bumptech.glide.load.Encoder<android.os.ParcelFileDescriptor> r2) {
            r0 = this;
            r0.<init>()
            r0.streamEncoder = r1
            r0.fileDescriptorEncoder = r2
            return
    }

    public boolean encode(com.bumptech.glide.load.model.ImageVideoWrapper r2, java.io.OutputStream r3) {
            r1 = this;
            java.io.InputStream r0 = r2.getStream()
            if (r0 == 0) goto L11
            com.bumptech.glide.load.Encoder<java.io.InputStream> r0 = r1.streamEncoder
            java.io.InputStream r2 = r2.getStream()
            boolean r2 = r0.encode(r2, r3)
            return r2
        L11:
            com.bumptech.glide.load.Encoder<android.os.ParcelFileDescriptor> r0 = r1.fileDescriptorEncoder
            android.os.ParcelFileDescriptor r2 = r2.getFileDescriptor()
            boolean r2 = r0.encode(r2, r3)
            return r2
    }

    @Override
    public boolean encode(com.bumptech.glide.load.model.ImageVideoWrapper r1, java.io.OutputStream r2) {
            r0 = this;
            com.bumptech.glide.load.model.ImageVideoWrapper r1 = (com.bumptech.glide.load.model.ImageVideoWrapper) r1
            boolean r1 = r0.encode(r1, r2)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r2 = this;
            java.lang.String r0 = r2.id
            if (r0 != 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.bumptech.glide.load.Encoder<java.io.InputStream> r1 = r2.streamEncoder
            java.lang.String r1 = r1.getId()
            r0.append(r1)
            com.bumptech.glide.load.Encoder<android.os.ParcelFileDescriptor> r1 = r2.fileDescriptorEncoder
            java.lang.String r1 = r1.getId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.id = r0
        L21:
            java.lang.String r0 = r2.id
            return r0
    }
}
