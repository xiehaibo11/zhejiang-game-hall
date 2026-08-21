package com.bumptech.glide.signature;

public class MediaStoreSignature implements com.bumptech.glide.load.Key {
    private final long dateModified;
    private final java.lang.String mimeType;
    private final int orientation;

    public MediaStoreSignature(java.lang.String r1, long r2, int r4) {
            r0 = this;
            r0.<init>()
            r0.mimeType = r1
            r0.dateModified = r2
            r0.orientation = r4
            return
    }

    @Override
    public boolean equals(java.lang.Object r8) {
            r7 = this;
            r0 = 1
            if (r7 != r8) goto L4
            return r0
        L4:
            r1 = 0
            if (r8 == 0) goto L35
            java.lang.Class r2 = r7.getClass()
            java.lang.Class r3 = r8.getClass()
            if (r2 == r3) goto L12
            goto L35
        L12:
            com.bumptech.glide.signature.MediaStoreSignature r8 = (com.bumptech.glide.signature.MediaStoreSignature) r8
            long r2 = r7.dateModified
            long r4 = r8.dateModified
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 == 0) goto L1d
            return r1
        L1d:
            int r2 = r7.orientation
            int r3 = r8.orientation
            if (r2 == r3) goto L24
            return r1
        L24:
            java.lang.String r2 = r7.mimeType
            java.lang.String r8 = r8.mimeType
            if (r2 == 0) goto L31
            boolean r8 = r2.equals(r8)
            if (r8 != 0) goto L34
            goto L33
        L31:
            if (r8 == 0) goto L34
        L33:
            return r1
        L34:
            return r0
        L35:
            return r1
    }

    @Override
    public int hashCode() {
            r5 = this;
            java.lang.String r0 = r5.mimeType
            if (r0 == 0) goto L9
            int r0 = r0.hashCode()
            goto La
        L9:
            r0 = 0
        La:
            int r0 = r0 * 31
            long r1 = r5.dateModified
            r3 = 32
            long r3 = r1 >>> r3
            long r1 = r1 ^ r3
            int r2 = (int) r1
            int r0 = r0 + r2
            int r0 = r0 * 31
            int r1 = r5.orientation
            int r0 = r0 + r1
            return r0
    }

    @Override
    public void updateDiskCacheKey(java.security.MessageDigest r4) throws java.io.UnsupportedEncodingException {
            r3 = this;
            r0 = 12
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            long r1 = r3.dateModified
            java.nio.ByteBuffer r0 = r0.putLong(r1)
            int r1 = r3.orientation
            java.nio.ByteBuffer r0 = r0.putInt(r1)
            byte[] r0 = r0.array()
            r4.update(r0)
            java.lang.String r0 = r3.mimeType
            java.lang.String r1 = "UTF-8"
            byte[] r0 = r0.getBytes(r1)
            r4.update(r0)
            return
    }
}
