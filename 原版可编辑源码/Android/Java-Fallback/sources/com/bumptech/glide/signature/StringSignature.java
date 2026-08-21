package com.bumptech.glide.signature;

public class StringSignature implements com.bumptech.glide.load.Key {
    private final java.lang.String signature;

    public StringSignature(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.signature = r2
            return
        L8:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "Signature cannot be null!"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r2 != r3) goto L4
            r3 = 1
            return r3
        L4:
            if (r3 == 0) goto L1c
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r1 = r3.getClass()
            if (r0 == r1) goto L11
            goto L1c
        L11:
            com.bumptech.glide.signature.StringSignature r3 = (com.bumptech.glide.signature.StringSignature) r3
            java.lang.String r0 = r2.signature
            java.lang.String r3 = r3.signature
            boolean r3 = r0.equals(r3)
            return r3
        L1c:
            r3 = 0
            return r3
    }

    @Override
    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.signature
            int r0 = r0.hashCode()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "StringSignature{signature='"
            r0.append(r1)
            java.lang.String r1 = r2.signature
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void updateDiskCacheKey(java.security.MessageDigest r3) throws java.io.UnsupportedEncodingException {
            r2 = this;
            java.lang.String r0 = r2.signature
            java.lang.String r1 = "UTF-8"
            byte[] r0 = r0.getBytes(r1)
            r3.update(r0)
            return
    }
}
