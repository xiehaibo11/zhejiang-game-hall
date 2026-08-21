package com.tencent.open.utils;

public class h {
    private static boolean a;

    static {
            return
    }

    public static java.lang.String a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r0 = 0
            if (r3 == 0) goto L22
            if (r5 == 0) goto L22
            if (r4 != 0) goto L8
            goto L22
        L8:
            java.lang.String r1 = "com.tencent.mobileqq"
            boolean r2 = r1.equals(r5)
            if (r2 == 0) goto L15
            java.lang.String r3 = b(r3, r4, r1)
            return r3
        L15:
            java.lang.String r1 = "com.tencent.tim"
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L22
            java.lang.String r3 = b(r3, r4, r1)
            return r3
        L22:
            return r0
    }

    private static boolean a(java.lang.String r4) {
            r0 = 0
            if (r4 == 0) goto L24
            boolean r1 = r4.isEmpty()
            if (r1 == 0) goto La
            goto L24
        La:
            java.lang.String r1 = "\\."
            java.lang.String[] r4 = r4.split(r1)
            int r1 = r4.length
            r2 = 3
            if (r1 >= r2) goto L15
            return r0
        L15:
            int r1 = r4.length
            r2 = 0
        L17:
            if (r2 >= r1) goto L22
            r3 = r4[r2]
            java.lang.Integer.parseInt(r3)     // Catch: java.lang.NumberFormatException -> L21
            int r2 = r2 + 1
            goto L17
        L21:
            return r0
        L22:
            r4 = 1
            return r4
        L24:
            return r0
    }

    private static java.lang.String b(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = "openSDK_LOG.OpenApiProviderUtils"
            boolean r1 = com.tencent.open.utils.h.a
            r2 = 0
            if (r1 != 0) goto L8
            return r2
        L8:
            android.database.Cursor r3 = c(r3, r4, r5)     // Catch: java.lang.Exception -> L49
            if (r3 != 0) goto L14
            java.lang.String r3 = "queryTargetAppVersion null"
            com.tencent.open.log.SLog.e(r0, r3)     // Catch: java.lang.Exception -> L49
            return r2
        L14:
            int r4 = r3.getCount()     // Catch: java.lang.Exception -> L49
            if (r4 > 0) goto L20
            java.lang.String r3 = "queryTargetAppVersion empty"
            com.tencent.open.log.SLog.e(r0, r3)     // Catch: java.lang.Exception -> L49
            return r2
        L20:
            r3.moveToFirst()     // Catch: java.lang.Exception -> L49
            r4 = 0
            java.lang.String r4 = r3.getString(r4)     // Catch: java.lang.Exception -> L49
            r3.close()     // Catch: java.lang.Exception -> L49
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L49
            r3.<init>()     // Catch: java.lang.Exception -> L49
            java.lang.String r5 = "AppVersion: "
            r3.append(r5)     // Catch: java.lang.Exception -> L49
            r3.append(r4)     // Catch: java.lang.Exception -> L49
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L49
            com.tencent.open.log.SLog.i(r0, r3)     // Catch: java.lang.Exception -> L49
            boolean r3 = a(r4)     // Catch: java.lang.Exception -> L49
            if (r3 == 0) goto L46
            return r4
        L46:
            java.lang.String r3 = "UNKNOWN"
            return r3
        L49:
            r3 = move-exception
            java.lang.String r4 = "queryTargetAppVersion exception: "
            com.tencent.open.log.SLog.e(r0, r4, r3)
            return r2
    }

    private static android.database.Cursor c(android.content.Context r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "="
            r1 = 0
            if (r8 != 0) goto L6
            return r1
        L6:
            android.content.ContentResolver r2 = r8.getContentResolver()     // Catch: java.lang.Exception -> L5d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5d
            r3.<init>()     // Catch: java.lang.Exception -> L5d
            java.lang.String r4 = "content://"
            r3.append(r4)     // Catch: java.lang.Exception -> L5d
            r3.append(r10)     // Catch: java.lang.Exception -> L5d
            java.lang.String r10 = ".openapi.provider"
            r3.append(r10)     // Catch: java.lang.Exception -> L5d
            java.lang.String r10 = "/"
            r3.append(r10)     // Catch: java.lang.Exception -> L5d
            java.lang.String r10 = "query_app_version"
            r3.append(r10)     // Catch: java.lang.Exception -> L5d
            java.lang.String r10 = "?"
            r3.append(r10)     // Catch: java.lang.Exception -> L5d
            java.lang.String r10 = "appid"
            r3.append(r10)     // Catch: java.lang.Exception -> L5d
            r3.append(r0)     // Catch: java.lang.Exception -> L5d
            r3.append(r9)     // Catch: java.lang.Exception -> L5d
            java.lang.String r9 = "&"
            r3.append(r9)     // Catch: java.lang.Exception -> L5d
            java.lang.String r9 = "pkgName"
            r3.append(r9)     // Catch: java.lang.Exception -> L5d
            r3.append(r0)     // Catch: java.lang.Exception -> L5d
            java.lang.String r8 = r8.getPackageName()     // Catch: java.lang.Exception -> L5d
            r3.append(r8)     // Catch: java.lang.Exception -> L5d
            java.lang.String r8 = r3.toString()     // Catch: java.lang.Exception -> L5d
            android.net.Uri r3 = android.net.Uri.parse(r8)     // Catch: java.lang.Exception -> L5d
            r8 = 0
            java.lang.String[] r4 = new java.lang.String[r8]     // Catch: java.lang.Exception -> L5d
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r8 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L5d
            return r8
        L5d:
            r8 = move-exception
            java.lang.String r9 = "openSDK_LOG.OpenApiProviderUtils"
            java.lang.String r10 = "query exception: "
            com.tencent.open.log.SLog.e(r9, r10, r8)
            return r1
    }
}
