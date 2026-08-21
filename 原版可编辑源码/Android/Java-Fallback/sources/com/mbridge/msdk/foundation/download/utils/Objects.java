package com.mbridge.msdk.foundation.download.utils;

public class Objects {


    public Objects() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void closeInputStream(java.io.InputStream r1) {
            if (r1 != 0) goto L3
            return
        L3:
            r1.close()     // Catch: java.lang.Exception -> L7
            goto L11
        L7:
            r1 = move-exception
            java.lang.String r1 = r1.getLocalizedMessage()
            java.lang.String r0 = "closeStream"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        L11:
            return
    }

    public static void closeOutputStream(com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream r1) {
            if (r1 != 0) goto L3
            return
        L3:
            r1.close()     // Catch: java.lang.Exception -> L7
            goto L11
        L7:
            r1 = move-exception
            java.lang.String r1 = r1.getLocalizedMessage()
            java.lang.String r0 = "closeStream"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        L11:
            return
    }

    public static void closeResponse(com.mbridge.msdk.thrid.okhttp.Response r1) {
            if (r1 != 0) goto L3
            return
        L3:
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r1.body()     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L10
            com.mbridge.msdk.thrid.okhttp.ResponseBody r0 = r1.body()     // Catch: java.lang.Exception -> L14
            r0.close()     // Catch: java.lang.Exception -> L14
        L10:
            r1.close()     // Catch: java.lang.Exception -> L14
            goto L1e
        L14:
            r1 = move-exception
            java.lang.String r1 = r1.getLocalizedMessage()
            java.lang.String r0 = "closeStream"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        L1e:
            return
    }

    public static void closeResponseBody(com.mbridge.msdk.thrid.okhttp.ResponseBody r1) {
            if (r1 != 0) goto L3
            return
        L3:
            r1.close()     // Catch: java.lang.Exception -> L7
            goto L11
        L7:
            r1 = move-exception
            java.lang.String r1 = r1.getLocalizedMessage()
            java.lang.String r0 = "closeStream"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        L11:
            return
    }

    private static boolean doubleCheckExists(java.io.File r2, java.lang.String r3, java.lang.String r4) {
            java.io.File r0 = r2.getParentFile()
            com.mbridge.msdk.foundation.download.utils.Objects$1 r1 = new com.mbridge.msdk.foundation.download.utils.Objects$1
            r1.<init>(r3, r4)
            java.io.File[] r3 = r0.listFiles(r1)     // Catch: java.lang.Exception -> Le
            goto L19
        Le:
            r3 = move-exception
            java.lang.String r3 = r3.getLocalizedMessage()
            java.lang.String r4 = "doubleCheckExists"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
            r3 = 0
        L19:
            if (r3 == 0) goto L27
            long r2 = r2.length()
            r0 = 0
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 <= 0) goto L27
            r2 = 1
            goto L28
        L27:
            r2 = 0
        L28:
            return r2
    }

    public static boolean exists(java.io.File r1, java.lang.String r2, java.lang.String r3) {
            if (r1 == 0) goto L14
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            goto L14
        L9:
            boolean r0 = r1.exists()
            if (r0 != 0) goto L13
            boolean r0 = doubleCheckExists(r1, r2, r3)
        L13:
            return r0
        L14:
            r1 = 0
            return r1
    }

    public static int hash(java.lang.Object... r0) {
            int r0 = java.util.Arrays.hashCode(r0)
            return r0
    }

    public static boolean isNotNull(java.lang.Object r0) {
            boolean r0 = isNull(r0)
            r0 = r0 ^ 1
            return r0
    }

    public static boolean isNull(java.lang.Object r0) {
            if (r0 != 0) goto L4
            r0 = 1
            goto L5
        L4:
            r0 = 0
        L5:
            return r0
    }
}
