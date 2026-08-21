package com.bianfeng.ymnsdk.ymndatalib.utils;

public class FileUtils {
    public FileUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getString(java.io.InputStream r2) {
            java.io.InputStreamReader r0 = new java.io.InputStreamReader     // Catch: java.io.UnsupportedEncodingException -> L8
            java.lang.String r1 = "UTF-8"
            r0.<init>(r2, r1)     // Catch: java.io.UnsupportedEncodingException -> L8
            goto Ld
        L8:
            r2 = move-exception
            r2.printStackTrace()
            r0 = 0
        Ld:
            java.io.BufferedReader r2 = new java.io.BufferedReader
            r2.<init>(r0)
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            java.lang.String r1 = ""
            r0.<init>(r1)
        L19:
            java.lang.String r1 = r2.readLine()     // Catch: java.io.IOException -> L28
            if (r1 == 0) goto L2c
            r0.append(r1)     // Catch: java.io.IOException -> L28
            java.lang.String r1 = "\n"
            r0.append(r1)     // Catch: java.io.IOException -> L28
            goto L19
        L28:
            r2 = move-exception
            r2.printStackTrace()
        L2c:
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.lang.String getYmnPackageInfo(android.content.Context r1) {
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.io.IOException -> Lf
            java.lang.String r0 = "ymnPackageInfo.json"
            java.io.InputStream r1 = r1.open(r0)     // Catch: java.io.IOException -> Lf
            java.lang.String r1 = getString(r1)     // Catch: java.io.IOException -> Lf
            goto L15
        Lf:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.String r1 = ""
        L15:
            return r1
    }
}
