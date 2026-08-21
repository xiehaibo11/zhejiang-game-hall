package com.kwad.sdk.api.loader;

final class h {
    private static java.io.File ais;


    private static java.io.File aB(android.content.Context r2) {
            java.io.File r0 = com.kwad.sdk.api.loader.h.ais
            if (r0 != 0) goto L17
            java.io.File r0 = new java.io.File
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            java.lang.String r2 = r2.dataDir
            java.lang.String r1 = "ksad_dynamic"
            r0.<init>(r2, r1)
            java.io.File r2 = i(r0)
            com.kwad.sdk.api.loader.h.ais = r2
        L17:
            java.io.File r2 = com.kwad.sdk.api.loader.h.ais
            return r2
    }

    static void h(java.io.File r4) {
            if (r4 != 0) goto L3
            return
        L3:
            boolean r0 = r4.isFile()
            if (r0 == 0) goto Ld
            r4.delete()
            return
        Ld:
            java.io.File[] r0 = r4.listFiles()
            if (r0 == 0) goto L22
            int r1 = r0.length
            if (r1 <= 0) goto L22
            int r1 = r0.length
            r2 = 0
        L18:
            if (r2 >= r1) goto L22
            r3 = r0[r2]
            h(r3)
            int r2 = r2 + 1
            goto L18
        L22:
            r4.delete()
            return
    }

    private static java.io.File i(java.io.File r3) {
            boolean r0 = r3.exists()
            if (r0 == 0) goto Lf
            boolean r0 = r3.isFile()
            if (r0 == 0) goto Lf
            r3.delete()
        Lf:
            boolean r0 = r3.exists()
            if (r0 == 0) goto L1c
            boolean r0 = r3.isDirectory()
            if (r0 == 0) goto L1c
            return r3
        L1c:
            boolean r0 = r3.exists()
            if (r0 != 0) goto L25
            r3.mkdirs()
        L25:
            boolean r0 = r3.exists()
            if (r0 == 0) goto L32
            boolean r0 = r3.isDirectory()
            if (r0 == 0) goto L32
            return r3
        L32:
            java.lang.Boolean r0 = com.kwad.sdk.api.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto L3b
            return r3
        L3b:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Can not ensureDir:"
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    static void j(java.io.File r0) {
            h(r0)     // Catch: java.lang.Exception -> L3
        L3:
            return
    }

    static java.io.File n(android.content.Context r4, java.lang.String r5) {
            java.io.File r0 = new java.io.File
            java.io.File r4 = aB(r4)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "dynamic-"
            r1.<init>(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r2 = "-"
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = ".apk"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r4, r5)
            return r0
    }

    static java.lang.String o(android.content.Context r3, java.lang.String r4) {
            java.io.File r0 = new java.io.File
            java.io.File r3 = aB(r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "apk-"
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r3, r4)
            java.io.File r3 = i(r0)
            java.lang.String r3 = r3.getPath()
            return r3
    }

    static java.io.File p(android.content.Context r3, java.lang.String r4) {
            java.io.File r0 = new java.io.File
            java.io.File r3 = aB(r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "apk-"
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r3, r4)
            java.io.File r3 = i(r0)
            return r3
    }

    static java.lang.String q(android.content.Context r1, java.lang.String r2) {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = o(r1, r2)
            java.lang.String r2 = "dynamic.apk"
            r0.<init>(r1, r2)
            java.lang.String r1 = r0.getPath()
            return r1
    }

    static java.lang.String r(android.content.Context r1, java.lang.String r2) {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = o(r1, r2)
            java.lang.String r2 = "dex"
            r0.<init>(r1, r2)
            java.io.File r1 = i(r0)
            java.lang.String r1 = r1.getPath()
            return r1
    }

    static java.lang.String s(android.content.Context r1, java.lang.String r2) {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = o(r1, r2)
            java.lang.String r2 = "libs"
            r0.<init>(r1, r2)
            java.io.File r1 = i(r0)
            java.lang.String r1 = r1.getPath()
            return r1
    }

    static void t(android.content.Context r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.sdk.api.loader.h$1 r0 = new com.kwad.sdk.api.loader.h$1
            r0.<init>(r1, r2)
            com.kwad.sdk.api.a.a.submit(r0)
            return
    }
}
