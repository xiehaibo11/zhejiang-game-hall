package com.bumptech.glide.load.engine.cache;

class SafeKeyGenerator {
    private final com.bumptech.glide.util.LruCache<com.bumptech.glide.load.Key, java.lang.String> loadIdToSafeHash;

    SafeKeyGenerator() {
            r2 = this;
            r2.<init>()
            com.bumptech.glide.util.LruCache r0 = new com.bumptech.glide.util.LruCache
            r1 = 1000(0x3e8, float:1.401E-42)
            r0.<init>(r1)
            r2.loadIdToSafeHash = r0
            return
    }

    public java.lang.String getSafeKey(com.bumptech.glide.load.Key r4) {
            r3 = this;
            com.bumptech.glide.util.LruCache<com.bumptech.glide.load.Key, java.lang.String> r0 = r3.loadIdToSafeHash
            monitor-enter(r0)
            com.bumptech.glide.util.LruCache<com.bumptech.glide.load.Key, java.lang.String> r1 = r3.loadIdToSafeHash     // Catch: java.lang.Throwable -> L37
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L37
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            if (r1 != 0) goto L36
            java.lang.String r0 = "SHA-256"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L20 java.io.UnsupportedEncodingException -> L25
            r4.updateDiskCacheKey(r0)     // Catch: java.security.NoSuchAlgorithmException -> L20 java.io.UnsupportedEncodingException -> L25
            byte[] r0 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L20 java.io.UnsupportedEncodingException -> L25
            java.lang.String r1 = com.bumptech.glide.util.Util.sha256BytesToHex(r0)     // Catch: java.security.NoSuchAlgorithmException -> L20 java.io.UnsupportedEncodingException -> L25
            goto L29
        L20:
            r0 = move-exception
            r0.printStackTrace()
            goto L29
        L25:
            r0 = move-exception
            r0.printStackTrace()
        L29:
            com.bumptech.glide.util.LruCache<com.bumptech.glide.load.Key, java.lang.String> r0 = r3.loadIdToSafeHash
            monitor-enter(r0)
            com.bumptech.glide.util.LruCache<com.bumptech.glide.load.Key, java.lang.String> r2 = r3.loadIdToSafeHash     // Catch: java.lang.Throwable -> L33
            r2.put(r4, r1)     // Catch: java.lang.Throwable -> L33
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            goto L36
        L33:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
            throw r4
        L36:
            return r1
        L37:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            throw r4
    }
}
