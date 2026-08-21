package com.kwad.sdk.collector;

public final class j {



    public static void a(android.content.Context r5, com.kwad.sdk.collector.AppStatusRules r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 >= r1) goto L7
            return
        L7:
            long r0 = r6.obtainUploadConfigFileMaxSize()
            java.util.List r6 = r6.getUploadTargets()
            if (r6 != 0) goto L12
            return
        L12:
            java.io.File r2 = new java.io.File
            java.io.File r3 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r4 = "/Android/data/"
            r2.<init>(r3, r4)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r2 = r2.getAbsolutePath()
            r3.append(r2)
            java.lang.String r2 = "/"
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.kwad.sdk.collector.a r3 = com.kwad.sdk.collector.b.yE()
            java.util.List r6 = r3.a(r6, r0, r2)
            java.util.List r0 = aK(r5)
            if (r0 == 0) goto L4e
            r6.addAll(r0)
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>(r6)
            r6.clear()
            r6.addAll(r0)
        L4e:
            b(r5, r6)
            return
    }

    private static java.util.List<com.kwad.sdk.collector.model.jni.UploadEntryNative> aK(android.content.Context r2) {
            java.io.File r0 = new java.io.File
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            java.lang.String r2 = r2.dataDir
            java.lang.String r1 = "LOCAL_TEMP_UPLOAD_FAILURE_JSON"
            r0.<init>(r2, r1)
            boolean r2 = r0.exists()
            r1 = 0
            if (r2 != 0) goto L15
            return r1
        L15:
            java.lang.String r2 = com.kwad.sdk.crash.utils.h.I(r0)     // Catch: java.io.IOException -> L1e
            java.util.List r2 = com.kwad.sdk.utils.t.fw(r2)     // Catch: java.io.IOException -> L1e
            return r2
        L1e:
            return r1
    }

    public static void aL(android.content.Context r2) {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L17
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()     // Catch: java.lang.Throwable -> L17
            java.lang.String r2 = r2.dataDir     // Catch: java.lang.Throwable -> L17
            java.lang.String r1 = "LOCAL_TEMP_UPLOAD_FAILURE_JSON"
            r0.<init>(r2, r1)     // Catch: java.lang.Throwable -> L17
            boolean r2 = r0.exists()     // Catch: java.lang.Throwable -> L17
            if (r2 != 0) goto L14
            return
        L14:
            r0.delete()     // Catch: java.lang.Throwable -> L17
        L17:
            return
    }

    private static void b(android.content.Context r1, java.util.List<com.kwad.sdk.collector.model.e> r2) {
            if (r2 == 0) goto L16
            int r0 = r2.size()
            if (r0 != 0) goto L9
            goto L16
        L9:
            com.kwad.sdk.collector.j$1 r0 = new com.kwad.sdk.collector.j$1
            r0.<init>(r2)
            com.kwad.sdk.collector.j$2 r2 = new com.kwad.sdk.collector.j$2
            r2.<init>(r1)
            r0.request(r2)
        L16:
            return
    }
}
