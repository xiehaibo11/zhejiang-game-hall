package com.kwad.sdk.api.loader;

final class k {
    private final java.lang.String aiF;
    private final java.lang.String aiG;
    private final java.lang.String aiH;
    private android.content.res.Resources aiI;
    private java.lang.ClassLoader aiJ;
    private com.kwad.sdk.api.core.IKsAdSDK aiK;

    private k(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.aiF = r1
            r0.aiG = r2
            r0.aiH = r3
            return
    }

    static synchronized com.kwad.sdk.api.loader.k a(android.content.Context r3, java.lang.ClassLoader r4, java.lang.String r5) {
            java.lang.Class<com.kwad.sdk.api.loader.k> r0 = com.kwad.sdk.api.loader.k.class
            monitor-enter(r0)
            java.lang.String r1 = com.kwad.sdk.api.loader.h.q(r3, r5)     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L17
            java.lang.String r2 = com.kwad.sdk.api.loader.h.r(r3, r5)     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L17
            java.lang.String r5 = com.kwad.sdk.api.loader.h.s(r3, r5)     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L17
            com.kwad.sdk.api.loader.k r3 = b(r3, r4, r1, r2, r5)     // Catch: java.lang.Throwable -> L15 java.lang.Exception -> L17
            monitor-exit(r0)
            return r3
        L15:
            r3 = move-exception
            goto L1e
        L17:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L15
            r3 = 0
            monitor-exit(r0)
            return r3
        L1e:
            monitor-exit(r0)
            throw r3
    }

    static com.kwad.sdk.api.loader.k b(android.content.Context r2, java.lang.ClassLoader r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L28
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L20
            boolean r0 = r0.isFile()
            if (r0 == 0) goto L20
            com.kwad.sdk.api.loader.k r0 = new com.kwad.sdk.api.loader.k
            r0.<init>(r4, r5, r6)
            r0.c(r2, r3)
            return r0
        L20:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r3 = "mApk not a file"
            r2.<init>(r3)
            throw r2
        L28:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r3 = "mApk is null"
            r2.<init>(r3)
            throw r2
    }

    private void c(android.content.Context r5, java.lang.ClassLoader r6) {
            r4 = this;
            r4.yt()
            android.content.res.Resources r0 = r5.getResources()
            java.lang.String r1 = r4.aiF
            android.content.res.Resources r0 = com.kwad.sdk.api.loader.q.a(r5, r0, r1)
            java.lang.String r1 = r4.aiF
            java.lang.String r2 = r4.aiG
            java.lang.String r3 = r4.aiH
            java.lang.ClassLoader r5 = com.kwad.sdk.api.loader.e.a(r5, r6, r1, r2, r3)
            com.kwad.sdk.api.core.IKsAdSDK r6 = com.kwad.sdk.api.loader.Loader.a(r5)
            r4.aiI = r0
            r4.aiJ = r5
            r4.aiK = r6
            int r5 = r6.getSDKType()
            r6 = 1
            if (r5 != r6) goto L29
            return
        L29:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "sdkType error apiType: "
            r1.<init>(r2)
            r1.append(r6)
            java.lang.String r6 = " , sdkType:"
            r1.append(r6)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    private void yt() {
            r2 = this;
            java.lang.String r0 = r2.aiF
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L24
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r2.aiF
            r0.<init>(r1)
            boolean r1 = r0.isFile()
            if (r1 == 0) goto L1c
            boolean r0 = r0.exists()
            if (r0 == 0) goto L1c
            return
        L1c:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "mApk not a file"
            r0.<init>(r1)
            throw r0
        L24:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "mApk is null"
            r0.<init>(r1)
            throw r0
    }

    final java.lang.ClassLoader getClassLoader() {
            r1 = this;
            java.lang.ClassLoader r0 = r1.aiJ
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ExternalPackage{mApk='"
            r0.<init>(r1)
            java.lang.String r1 = r3.aiF
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", mDexDir='"
            r0.append(r2)
            java.lang.String r2 = r3.aiG
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", mNativeLibDir='"
            r0.append(r2)
            java.lang.String r2 = r3.aiH
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", mResource="
            r0.append(r1)
            android.content.res.Resources r1 = r3.aiI
            r0.append(r1)
            java.lang.String r1 = ", mClassLoader="
            r0.append(r1)
            java.lang.ClassLoader r1 = r3.aiJ
            r0.append(r1)
            java.lang.String r1 = ", mKsSdk="
            r0.append(r1)
            com.kwad.sdk.api.core.IKsAdSDK r1 = r3.aiK
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    final android.content.res.Resources yr() {
            r1 = this;
            android.content.res.Resources r0 = r1.aiI
            return r0
    }

    final com.kwad.sdk.api.core.IKsAdSDK ys() {
            r1 = this;
            com.kwad.sdk.api.core.IKsAdSDK r0 = r1.aiK
            return r0
    }
}
