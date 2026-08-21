package com.bumptech.glide.load.model;

public class StreamEncoder implements com.bumptech.glide.load.Encoder<java.io.InputStream> {
    private static final java.lang.String TAG = "StreamEncoder";

    public StreamEncoder() {
            r0 = this;
            r0.<init>()
            return
    }

    public boolean encode(java.io.InputStream r6, java.io.OutputStream r7) {
            r5 = this;
            java.lang.String r0 = "StreamEncoder"
            com.bumptech.glide.util.ByteArrayPool r1 = com.bumptech.glide.util.ByteArrayPool.get()
            byte[] r1 = r1.getBytes()
        La:
            r2 = 0
            int r3 = r6.read(r1)     // Catch: java.lang.Throwable -> L1f java.io.IOException -> L21
            r4 = -1
            if (r3 == r4) goto L16
            r7.write(r1, r2, r3)     // Catch: java.lang.Throwable -> L1f java.io.IOException -> L21
            goto La
        L16:
            r6 = 1
            com.bumptech.glide.util.ByteArrayPool r7 = com.bumptech.glide.util.ByteArrayPool.get()
            r7.releaseBytes(r1)
            return r6
        L1f:
            r6 = move-exception
            goto L36
        L21:
            r6 = move-exception
            r7 = 3
            boolean r7 = android.util.Log.isLoggable(r0, r7)     // Catch: java.lang.Throwable -> L1f
            if (r7 == 0) goto L2e
            java.lang.String r7 = "Failed to encode data onto the OutputStream"
            android.util.Log.d(r0, r7, r6)     // Catch: java.lang.Throwable -> L1f
        L2e:
            com.bumptech.glide.util.ByteArrayPool r6 = com.bumptech.glide.util.ByteArrayPool.get()
            r6.releaseBytes(r1)
            return r2
        L36:
            com.bumptech.glide.util.ByteArrayPool r7 = com.bumptech.glide.util.ByteArrayPool.get()
            r7.releaseBytes(r1)
            goto L3f
        L3e:
            throw r6
        L3f:
            goto L3e
    }

    @Override
    public boolean encode(java.io.InputStream r1, java.io.OutputStream r2) {
            r0 = this;
            java.io.InputStream r1 = (java.io.InputStream) r1
            boolean r1 = r0.encode(r1, r2)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }
}
