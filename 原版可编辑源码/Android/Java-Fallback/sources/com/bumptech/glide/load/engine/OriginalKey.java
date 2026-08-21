package com.bumptech.glide.load.engine;

class OriginalKey implements com.bumptech.glide.load.Key {
    private final java.lang.String id;
    private final com.bumptech.glide.load.Key signature;

    public OriginalKey(java.lang.String r1, com.bumptech.glide.load.Key r2) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            r0.signature = r2
            return
    }

    @Override
    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L2b
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L2b
        L12:
            com.bumptech.glide.load.engine.OriginalKey r5 = (com.bumptech.glide.load.engine.OriginalKey) r5
            java.lang.String r2 = r4.id
            java.lang.String r3 = r5.id
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L1f
            return r1
        L1f:
            com.bumptech.glide.load.Key r2 = r4.signature
            com.bumptech.glide.load.Key r5 = r5.signature
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L2a
            return r1
        L2a:
            return r0
        L2b:
            return r1
    }

    @Override
    public int hashCode() {
            r2 = this;
            java.lang.String r0 = r2.id
            int r0 = r0.hashCode()
            int r0 = r0 * 31
            com.bumptech.glide.load.Key r1 = r2.signature
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            return r0
    }

    @Override
    public void updateDiskCacheKey(java.security.MessageDigest r3) throws java.io.UnsupportedEncodingException {
            r2 = this;
            java.lang.String r0 = r2.id
            java.lang.String r1 = "UTF-8"
            byte[] r0 = r0.getBytes(r1)
            r3.update(r0)
            com.bumptech.glide.load.Key r0 = r2.signature
            r0.updateDiskCacheKey(r3)
            return
    }
}
