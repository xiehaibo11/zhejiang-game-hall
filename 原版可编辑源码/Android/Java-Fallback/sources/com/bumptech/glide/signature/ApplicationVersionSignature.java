package com.bumptech.glide.signature;

public final class ApplicationVersionSignature {
    private static final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.bumptech.glide.load.Key> PACKAGE_NAME_TO_KEY = null;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.bumptech.glide.signature.ApplicationVersionSignature.PACKAGE_NAME_TO_KEY = r0
            return
    }

    private ApplicationVersionSignature() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bumptech.glide.load.Key obtain(android.content.Context r2) {
            java.lang.String r0 = r2.getPackageName()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.bumptech.glide.load.Key> r1 = com.bumptech.glide.signature.ApplicationVersionSignature.PACKAGE_NAME_TO_KEY
            java.lang.Object r1 = r1.get(r0)
            com.bumptech.glide.load.Key r1 = (com.bumptech.glide.load.Key) r1
            if (r1 != 0) goto L1e
            com.bumptech.glide.load.Key r1 = obtainVersionSignature(r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.bumptech.glide.load.Key> r2 = com.bumptech.glide.signature.ApplicationVersionSignature.PACKAGE_NAME_TO_KEY
            java.lang.Object r2 = r2.putIfAbsent(r0, r1)
            com.bumptech.glide.load.Key r2 = (com.bumptech.glide.load.Key) r2
            if (r2 != 0) goto L1d
            goto L1e
        L1d:
            r1 = r2
        L1e:
            return r1
    }

    private static com.bumptech.glide.load.Key obtainVersionSignature(android.content.Context r2) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            java.lang.String r2 = r2.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            r1 = 0
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Le
            goto L13
        Le:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
        L13:
            if (r2 == 0) goto L1c
            int r2 = r2.versionCode
            java.lang.String r2 = java.lang.String.valueOf(r2)
            goto L24
        L1c:
            java.util.UUID r2 = java.util.UUID.randomUUID()
            java.lang.String r2 = r2.toString()
        L24:
            com.bumptech.glide.signature.StringSignature r0 = new com.bumptech.glide.signature.StringSignature
            r0.<init>(r2)
            return r0
    }

    static void reset() {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.bumptech.glide.load.Key> r0 = com.bumptech.glide.signature.ApplicationVersionSignature.PACKAGE_NAME_TO_KEY
            r0.clear()
            return
    }
}
