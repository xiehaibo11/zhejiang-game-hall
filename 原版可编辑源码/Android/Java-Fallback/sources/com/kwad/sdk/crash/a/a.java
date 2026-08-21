package com.kwad.sdk.crash.a;

public final class a {
    private static android.content.Context PG;
    private static java.lang.String aAa;

    public static boolean A(java.io.File r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            boolean r1 = r2.exists()
            if (r1 != 0) goto L11
            boolean r2 = r2.mkdirs()
            if (r2 != 0) goto L11
            return r0
        L11:
            r2 = 1
            return r2
    }

    public static java.io.File EM() {
            java.lang.String r0 = com.kwad.sdk.crash.a.a.aAa
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            java.io.File r0 = new java.io.File
            java.lang.String r1 = com.kwad.sdk.crash.a.a.aAa
            r0.<init>(r1)
            goto L1d
        L10:
            java.io.File r0 = new java.io.File
            android.content.Context r1 = com.kwad.sdk.crash.a.a.PG
            java.io.File r1 = getDataDir(r1)
            java.lang.String r2 = "kwad_ex"
            r0.<init>(r1, r2)
        L1d:
            boolean r1 = r0.exists()
            if (r1 != 0) goto L26
            r0.mkdir()
        L26:
            return r0
    }

    public static java.io.File EN() {
            java.io.File r0 = new java.io.File
            java.io.File r1 = EM()
            java.lang.String r2 = "java_crash/dump"
            r0.<init>(r1, r2)
            return r0
    }

    public static java.io.File EO() {
            java.io.File r0 = new java.io.File
            java.io.File r1 = EM()
            java.lang.String r2 = "anr_log/dump"
            r0.<init>(r1, r2)
            return r0
    }

    public static java.io.File EP() {
            java.io.File r0 = new java.io.File
            java.io.File r1 = EM()
            java.lang.String r2 = "native_crash_log/dump"
            r0.<init>(r1, r2)
            return r0
    }

    private static java.io.File getDataDir(android.content.Context r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 29
            if (r0 < r2) goto L15
            java.io.File r0 = new java.io.File
            java.io.File r3 = r3.getExternalFilesDir(r1)
            java.lang.String r3 = r3.getAbsolutePath()
            r0.<init>(r3)
            return r0
        L15:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 24
            if (r0 < r2) goto L1f
            java.io.File r1 = r3.getDataDir()
        L1f:
            if (r1 != 0) goto L64
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r2 = android.os.Environment.getDataDirectory()
            java.lang.String r2 = r2.getPath()
            r0.append(r2)
            java.lang.String r2 = "/data/"
            r0.append(r2)
            java.lang.String r2 = r3.getPackageName()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            boolean r0 = r1.exists()
            if (r0 != 0) goto L64
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "/data/data/"
            r1.<init>(r2)
            java.lang.String r3 = r3.getPackageName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            return r0
        L64:
            return r1
    }

    public static void init(android.content.Context r0, java.lang.String r1) {
            com.kwad.sdk.crash.a.a.PG = r0
            com.kwad.sdk.crash.a.a.aAa = r1
            return
    }
}
