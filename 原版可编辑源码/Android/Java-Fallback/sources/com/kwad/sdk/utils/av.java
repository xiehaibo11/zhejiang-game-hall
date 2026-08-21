package com.kwad.sdk.utils;

public final class av {
    private static java.lang.String aJf;
    private static java.io.File aJg;

    private static boolean Jq() {
            r0 = 0
            java.lang.String r1 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Throwable -> L17
            java.lang.String r2 = "mounted"
            boolean r1 = r2.equals(r1)     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L15
            boolean r1 = android.os.Environment.isExternalStorageRemovable()     // Catch: java.lang.Throwable -> L17
            if (r1 != 0) goto L14
            goto L15
        L14:
            return r0
        L15:
            r0 = 1
            return r0
        L17:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
            return r0
    }

    private static java.lang.String cI(android.content.Context r2) {
            java.lang.String r0 = com.kwad.sdk.utils.av.aJf
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r2 = com.kwad.sdk.utils.av.aJf
            return r2
        Lb:
            boolean r0 = Jq()
            r1 = 0
            if (r0 == 0) goto L22
            java.io.File r0 = r2.getExternalFilesDir(r1)     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto L22
            java.lang.String r0 = r0.getPath()     // Catch: java.lang.Exception -> L1e
            r1 = r0
            goto L22
        L1e:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L22:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L30
            java.io.File r2 = r2.getFilesDir()
            java.lang.String r1 = r2.getPath()
        L30:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r0 = java.io.File.separator
            r2.append(r0)
            java.lang.String r0 = "ksadsdk"
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.kwad.sdk.utils.av.aJf = r2
            return r2
    }

    public static java.io.File cJ(android.content.Context r2) {
            java.io.File r0 = com.kwad.sdk.utils.av.aJg
            if (r0 == 0) goto L5
            return r0
        L5:
            r0 = 0
            boolean r1 = Jq()
            if (r1 == 0) goto L1b
            java.io.File r1 = r2.getExternalCacheDir()     // Catch: java.lang.Exception -> L17
            if (r1 == 0) goto L1b
            java.lang.String r0 = r1.getPath()     // Catch: java.lang.Exception -> L17
            goto L1b
        L17:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L1b:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L29
            java.io.File r2 = r2.getCacheDir()
            java.lang.String r0 = r2.getPath()
        L29:
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = java.io.File.separator
            r1.append(r0)
            java.lang.String r0 = "ksadsdk"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r2.<init>(r0)
            com.kwad.sdk.utils.av.aJg = r2
            boolean r2 = r2.exists()
            if (r2 != 0) goto L51
            java.io.File r2 = com.kwad.sdk.utils.av.aJg
            r2.mkdirs()
        L51:
            java.io.File r2 = com.kwad.sdk.utils.av.aJg
            return r2
    }

    public static java.io.File cK(android.content.Context r2) {
            java.lang.String r2 = cI(r2)
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            java.lang.String r2 = "Download"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L28
            r0.mkdirs()
        L28:
            return r0
    }

    public static java.io.File cL(android.content.Context r2) {
            java.lang.String r2 = cI(r2)
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            java.lang.String r2 = "downloadFileSync/.temp"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L28
            r0.mkdirs()
        L28:
            return r0
    }

    public static java.io.File cM(android.content.Context r2) {
            java.lang.Boolean r0 = com.kwad.framework.a.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto Ld
            java.lang.String r2 = cI(r2)
            goto L2b
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r2 = r2.getFilesDir()
            java.lang.String r2 = r2.getAbsolutePath()
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = "ksadsdk"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
        L2b:
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            java.lang.String r2 = "ksadlog"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
            return r0
    }

    public static java.lang.String cN(android.content.Context r1) {
            if (r1 != 0) goto L5
            java.lang.String r1 = ""
            return r1
        L5:
            java.io.File r1 = r1.getFilesDir()
            java.lang.String r1 = r1.getPath()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "ksadsdk"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static java.lang.String cO(android.content.Context r1) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r1 = cJ(r1)
            java.lang.String r1 = r1.getPath()
            r0.append(r1)
            java.lang.String r1 = "/cookie"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static java.lang.String getTkJsFileDir(android.content.Context r1, java.lang.String r2) {
            if (r1 != 0) goto L5
            java.lang.String r1 = ""
            return r1
        L5:
            java.lang.String r1 = cN(r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "ksad/download/js"
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static java.lang.String getTkJsRootDir(android.content.Context r1) {
            if (r1 != 0) goto L5
            java.lang.String r1 = ""
            return r1
        L5:
            java.lang.String r1 = cN(r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "ksad/download/js"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }
}
