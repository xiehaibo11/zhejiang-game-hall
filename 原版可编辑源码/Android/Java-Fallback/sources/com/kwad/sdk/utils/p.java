package com.kwad.sdk.utils;

public class p {
    private static java.lang.String aIm = "";
    private static java.lang.String aIn = "";
    private static java.lang.String aIo = "";

    static {
            return
    }

    public p() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r3, java.io.InputStream r4) {
            java.lang.Class<com.kwad.sdk.utils.p> r0 = com.kwad.sdk.utils.p.class
            monitor-enter(r0)
            com.kwad.sdk.pngencrypt.o r1 = new com.kwad.sdk.pngencrypt.o     // Catch: java.lang.Throwable -> L19
            r2 = 1
            r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L19
            r1.GU()     // Catch: java.lang.Throwable -> L19
            com.kwad.sdk.pngencrypt.chunk.w r4 = r1.GT()     // Catch: java.lang.Throwable -> L19
            java.lang.String r3 = r4.fl(r3)     // Catch: java.lang.Throwable -> L19
            r1.end()     // Catch: java.lang.Throwable -> L19
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return r3
        L19:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r3
    }

    public static java.lang.String db(int r7) {
            java.lang.String r7 = "ksad_common_encrypt_image.png"
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()
            java.lang.String r1 = com.kwad.sdk.utils.p.aIm
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Lf
            return r1
        Lf:
            java.lang.String r1 = "aes_key"
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r3 = "EncryptUtils"
            if (r2 == 0) goto L1e
            java.lang.String r2 = "EncryptUtils getKey get id is error "
            com.kwad.sdk.core.e.c.e(r3, r2)
        L1e:
            r2 = 0
            android.content.res.Resources r4 = r0.getResources()     // Catch: java.lang.Throwable -> L2c
            android.content.res.AssetManager r4 = r4.getAssets()     // Catch: java.lang.Throwable -> L2c
            java.io.InputStream r2 = r4.open(r7)     // Catch: java.lang.Throwable -> L2c
            goto L3e
        L2c:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5a
            java.lang.String r6 = "EncryptUtils getKey get InputStream from loader is null,  e: "
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L5a
            r5.append(r4)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L5a
            com.kwad.sdk.core.e.c.e(r3, r4)     // Catch: java.lang.Throwable -> L5a
        L3e:
            if (r2 != 0) goto L48
            android.content.res.AssetManager r0 = r0.getAssets()     // Catch: java.lang.Throwable -> L5a
            java.io.InputStream r2 = r0.open(r7)     // Catch: java.lang.Throwable -> L5a
        L48:
            java.lang.String r7 = a(r1, r2)     // Catch: java.lang.Throwable -> L5a
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L57
            java.lang.String r0 = "EncryptUtils getKey get encryptedKey is invalid "
            com.kwad.sdk.core.e.c.e(r3, r0)     // Catch: java.lang.Throwable -> L5a
        L57:
            com.kwad.sdk.utils.p.aIm = r7     // Catch: java.lang.Throwable -> L5a
            return r7
        L5a:
            r7 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r7)
            java.lang.String r7 = ""
            return r7
    }
}
