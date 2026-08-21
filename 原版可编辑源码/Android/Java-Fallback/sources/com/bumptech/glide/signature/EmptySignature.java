package com.bumptech.glide.signature;

public final class EmptySignature implements com.bumptech.glide.load.Key {
    private static final com.bumptech.glide.signature.EmptySignature EMPTY_KEY = null;

    static {
            com.bumptech.glide.signature.EmptySignature r0 = new com.bumptech.glide.signature.EmptySignature
            r0.<init>()
            com.bumptech.glide.signature.EmptySignature.EMPTY_KEY = r0
            return
    }

    private EmptySignature() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bumptech.glide.signature.EmptySignature obtain() {
            com.bumptech.glide.signature.EmptySignature r0 = com.bumptech.glide.signature.EmptySignature.EMPTY_KEY
            return r0
    }

    @Override
    public void updateDiskCacheKey(java.security.MessageDigest r1) throws java.io.UnsupportedEncodingException {
            r0 = this;
            return
    }
}
