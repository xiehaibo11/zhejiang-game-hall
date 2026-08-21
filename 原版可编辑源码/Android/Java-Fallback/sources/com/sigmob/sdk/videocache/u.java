package com.sigmob.sdk.videocache;

final class u {
    private static final java.lang.String a = "video-cache";

    u() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.io.File a(android.content.Context r2) {
            r0 = 1
            java.io.File r2 = a(r2, r0)
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "video-cache"
            r0.<init>(r2, r1)
            return r0
    }

    private static java.io.File a(android.content.Context r1, boolean r2) {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.NullPointerException -> L5
            goto L7
        L5:
            java.lang.String r0 = ""
        L7:
            if (r2 == 0) goto L16
            java.lang.String r2 = "mounted"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L16
            java.io.File r2 = b(r1)
            goto L17
        L16:
            r2 = 0
        L17:
            if (r2 != 0) goto L1d
            java.io.File r2 = r1.getCacheDir()
        L1d:
            if (r2 != 0) goto L57
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "/data/data/"
            r2.append(r0)
            java.lang.String r1 = r1.getPackageName()
            r2.append(r1)
            java.lang.String r1 = "/cache/"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "Can't define system cache directory! '"
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = "%s' will be used."
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.czhj.sdk.logger.SigmobLog.w(r2)
            java.io.File r2 = new java.io.File
            r2.<init>(r1)
        L57:
            return r2
    }

    private static java.io.File b(android.content.Context r4) {
            java.io.File r0 = new java.io.File
            java.io.File r1 = new java.io.File
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r3 = "Android"
            r1.<init>(r2, r3)
            java.lang.String r2 = "data"
            r0.<init>(r1, r2)
            java.io.File r1 = new java.io.File
            java.io.File r2 = new java.io.File
            java.lang.String r4 = r4.getPackageName()
            r2.<init>(r0, r4)
            java.lang.String r4 = "cache"
            r1.<init>(r2, r4)
            boolean r4 = r1.exists()
            if (r4 != 0) goto L35
            boolean r4 = r1.mkdirs()
            if (r4 != 0) goto L35
            java.lang.String r4 = "Unable to create external cache directory"
            com.czhj.sdk.logger.SigmobLog.w(r4)
            r4 = 0
            return r4
        L35:
            return r1
    }
}
