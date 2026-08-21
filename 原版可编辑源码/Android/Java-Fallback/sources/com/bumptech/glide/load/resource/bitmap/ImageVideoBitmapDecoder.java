package com.bumptech.glide.load.resource.bitmap;

public class ImageVideoBitmapDecoder implements com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap> {
    private static final java.lang.String TAG = "ImageVideoDecoder";
    private final com.bumptech.glide.load.ResourceDecoder<android.os.ParcelFileDescriptor, android.graphics.Bitmap> fileDescriptorDecoder;
    private final com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, android.graphics.Bitmap> streamDecoder;

    public ImageVideoBitmapDecoder(com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, android.graphics.Bitmap> r1, com.bumptech.glide.load.ResourceDecoder<android.os.ParcelFileDescriptor, android.graphics.Bitmap> r2) {
            r0 = this;
            r0.<init>()
            r0.streamDecoder = r1
            r0.fileDescriptorDecoder = r2
            return
    }

    public com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> decode(com.bumptech.glide.load.model.ImageVideoWrapper r4, int r5, int r6) throws java.io.IOException {
            r3 = this;
            java.io.InputStream r0 = r4.getStream()
            if (r0 == 0) goto L1c
            com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, android.graphics.Bitmap> r1 = r3.streamDecoder     // Catch: java.io.IOException -> Ld
            com.bumptech.glide.load.engine.Resource r0 = r1.decode(r0, r5, r6)     // Catch: java.io.IOException -> Ld
            goto L1d
        Ld:
            r0 = move-exception
            r1 = 2
            java.lang.String r2 = "ImageVideoDecoder"
            boolean r1 = android.util.Log.isLoggable(r2, r1)
            if (r1 == 0) goto L1c
            java.lang.String r1 = "Failed to load image from stream, trying FileDescriptor"
            android.util.Log.v(r2, r1, r0)
        L1c:
            r0 = 0
        L1d:
            if (r0 != 0) goto L2b
            android.os.ParcelFileDescriptor r4 = r4.getFileDescriptor()
            if (r4 == 0) goto L2b
            com.bumptech.glide.load.ResourceDecoder<android.os.ParcelFileDescriptor, android.graphics.Bitmap> r0 = r3.fileDescriptorDecoder
            com.bumptech.glide.load.engine.Resource r0 = r0.decode(r4, r5, r6)
        L2b:
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<android.graphics.Bitmap> decode(com.bumptech.glide.load.model.ImageVideoWrapper r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            com.bumptech.glide.load.model.ImageVideoWrapper r1 = (com.bumptech.glide.load.model.ImageVideoWrapper) r1
            com.bumptech.glide.load.engine.Resource r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = "ImageVideoBitmapDecoder.com.bumptech.glide.load.resource.bitmap"
            return r0
    }
}
