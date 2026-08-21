package com.bianfeng.ymnshare.utils;

public class Tools {
    public static java.lang.String IMAGE_NAME = "iv_share_";
    public static int i;

    static {
            return
    }

    public Tools() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.io.File createStableImageFile(android.content.Context r2) throws java.io.IOException {
            int r0 = com.bianfeng.ymnshare.utils.Tools.i
            int r0 = r0 + 1
            com.bianfeng.ymnshare.utils.Tools.i = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.bianfeng.ymnshare.utils.Tools.IMAGE_NAME
            r0.append(r1)
            int r1 = com.bianfeng.ymnshare.utils.Tools.i
            r0.append(r1)
            java.lang.String r1 = ".jpg"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.io.File r2 = r2.getExternalCacheDir()
            java.io.File r1 = new java.io.File
            r1.<init>(r2, r0)
            return r1
    }

    public static final java.io.File saveImageToSdCard(android.content.Context r4, java.lang.String r5) {
            r0 = 0
            java.io.File r4 = createStableImageFile(r4)     // Catch: java.lang.Exception -> L2e
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Exception -> L2c
            r1.<init>(r5)     // Catch: java.lang.Exception -> L2c
            java.net.URLConnection r5 = r1.openConnection()     // Catch: java.lang.Exception -> L2c
            java.net.HttpURLConnection r5 = (java.net.HttpURLConnection) r5     // Catch: java.lang.Exception -> L2c
            java.io.InputStream r5 = r5.getInputStream()     // Catch: java.lang.Exception -> L2c
            android.graphics.Bitmap r5 = android.graphics.BitmapFactory.decodeStream(r5)     // Catch: java.lang.Exception -> L2c
            java.io.FileOutputStream r1 = new java.io.FileOutputStream     // Catch: java.lang.Exception -> L2c
            r1.<init>(r4)     // Catch: java.lang.Exception -> L2c
            android.graphics.Bitmap$CompressFormat r2 = android.graphics.Bitmap.CompressFormat.PNG     // Catch: java.lang.Exception -> L2c
            r3 = 100
            r5.compress(r2, r3, r1)     // Catch: java.lang.Exception -> L2c
            r1.flush()     // Catch: java.lang.Exception -> L2c
            r1.close()     // Catch: java.lang.Exception -> L2c
            r5 = 1
            goto L34
        L2c:
            r5 = move-exception
            goto L30
        L2e:
            r5 = move-exception
            r4 = r0
        L30:
            r5.printStackTrace()
            r5 = 0
        L34:
            if (r5 == 0) goto L37
            return r4
        L37:
            return r0
    }

    public static void setUriCache(android.net.Uri r6) {
            java.lang.String r0 = "com.bianfeng.ymnsdk.ymnlink.YmnLinkCache"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = "setLaunchData"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L20
            java.lang.Class<android.net.Uri> r4 = android.net.Uri.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L20
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Exception -> L20
            r0.setAccessible(r2)     // Catch: java.lang.Exception -> L20
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L20
            r2[r5] = r6     // Catch: java.lang.Exception -> L20
            r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L20
            goto L24
        L20:
            r6 = move-exception
            r6.printStackTrace()
        L24:
            return
    }
}
