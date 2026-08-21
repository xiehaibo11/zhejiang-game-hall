package com.bumptech.glide.load.resource.bitmap;

public class VideoBitmapDecoder implements com.bumptech.glide.load.resource.bitmap.BitmapDecoder<android.os.ParcelFileDescriptor> {
    private static final com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder.MediaMetadataRetrieverFactory DEFAULT_FACTORY = null;
    private static final int NO_FRAME = -1;
    private com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder.MediaMetadataRetrieverFactory factory;
    private int frame;

    static class MediaMetadataRetrieverFactory {
        MediaMetadataRetrieverFactory() {
                r0 = this;
                r0.<init>()
                return
        }

        public android.media.MediaMetadataRetriever build() {
                r1 = this;
                android.media.MediaMetadataRetriever r0 = new android.media.MediaMetadataRetriever
                r0.<init>()
                return r0
        }
    }

    static {
            com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder$MediaMetadataRetrieverFactory r0 = new com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder$MediaMetadataRetrieverFactory
            r0.<init>()
            com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder.DEFAULT_FACTORY = r0
            return
    }

    public VideoBitmapDecoder() {
            r2 = this;
            com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder$MediaMetadataRetrieverFactory r0 = com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder.DEFAULT_FACTORY
            r1 = -1
            r2.<init>(r0, r1)
            return
    }

    public VideoBitmapDecoder(int r2) {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder$MediaMetadataRetrieverFactory r0 = com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder.DEFAULT_FACTORY
            int r2 = checkValidFrame(r2)
            r1.<init>(r0, r2)
            return
    }

    VideoBitmapDecoder(com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder.MediaMetadataRetrieverFactory r2) {
            r1 = this;
            r0 = -1
            r1.<init>(r2, r0)
            return
    }

    VideoBitmapDecoder(com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder.MediaMetadataRetrieverFactory r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.factory = r1
            r0.frame = r2
            return
    }

    private static int checkValidFrame(int r1) {
            if (r1 < 0) goto L3
            return r1
        L3:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Requested frame must be non-negative"
            r1.<init>(r0)
            throw r1
    }

    public android.graphics.Bitmap decode(android.os.ParcelFileDescriptor r1, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, int r3, int r4, com.bumptech.glide.load.DecodeFormat r5) throws java.io.IOException {
            r0 = this;
            com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder$MediaMetadataRetrieverFactory r2 = r0.factory
            android.media.MediaMetadataRetriever r2 = r2.build()
            java.io.FileDescriptor r3 = r1.getFileDescriptor()
            r2.setDataSource(r3)
            int r3 = r0.frame
            if (r3 < 0) goto L17
            long r3 = (long) r3
            android.graphics.Bitmap r3 = r2.getFrameAtTime(r3)
            goto L1b
        L17:
            android.graphics.Bitmap r3 = r2.getFrameAtTime()
        L1b:
            r2.release()
            r1.close()
            return r3
    }

    @Override
    public android.graphics.Bitmap decode(android.os.ParcelFileDescriptor r1, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2, int r3, int r4, com.bumptech.glide.load.DecodeFormat r5) throws java.lang.Exception {
            r0 = this;
            android.os.ParcelFileDescriptor r1 = (android.os.ParcelFileDescriptor) r1
            android.graphics.Bitmap r1 = r0.decode(r1, r2, r3, r4, r5)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = "VideoBitmapDecoder.com.bumptech.glide.load.resource.bitmap"
            return r0
    }
}
