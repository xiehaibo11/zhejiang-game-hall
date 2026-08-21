package com.ymnsdk.replugin.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class AppInfoUtil {
    public AppInfoUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getString(java.io.InputStream r3) {
            java.io.InputStreamReader r0 = new java.io.InputStreamReader     // Catch: java.io.UnsupportedEncodingException -> L8
            java.lang.String r1 = "UTF-8"
            r0.<init>(r3, r1)     // Catch: java.io.UnsupportedEncodingException -> L8
            goto Ld
        L8:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
        Ld:
            java.io.BufferedReader r1 = new java.io.BufferedReader
            r1.<init>(r0)
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            java.lang.String r2 = ""
            r0.<init>(r2)
        L19:
            java.lang.String r2 = r1.readLine()     // Catch: java.io.IOException -> L2c
            if (r2 == 0) goto L28
            r0.append(r2)     // Catch: java.io.IOException -> L2c
            java.lang.String r2 = "\n"
            r0.append(r2)     // Catch: java.io.IOException -> L2c
            goto L19
        L28:
            r3.close()     // Catch: java.io.IOException -> L2c
            goto L30
        L2c:
            r3 = move-exception
            r3.printStackTrace()
        L30:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.lang.String readAppInfo(java.lang.String r2) {
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r2 = r0.exists()
            java.lang.String r1 = ""
            if (r2 != 0) goto Le
            return r1
        Le:
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L23
            r2.<init>(r0)     // Catch: java.lang.Exception -> L23
            java.lang.String r2 = getString(r2)     // Catch: java.lang.Exception -> L23
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L23
            r0.<init>(r2)     // Catch: java.lang.Exception -> L23
            java.lang.String r2 = "md5"
            java.lang.String r1 = r0.getString(r2)     // Catch: java.lang.Exception -> L23
            goto L27
        L23:
            r2 = move-exception
            r2.printStackTrace()
        L27:
            return r1
    }
}
