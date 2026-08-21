package com.czhj.sdk.common.utils;

public class ImageTypeUtil {
    private static final java.util.HashMap<java.lang.String, java.lang.String> a = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.czhj.sdk.common.utils.ImageTypeUtil.a = r0
            java.lang.String r1 = "FFD8"
            java.lang.String r2 = "jpg"
            r0.put(r1, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.czhj.sdk.common.utils.ImageTypeUtil.a
            java.lang.String r1 = "8950"
            java.lang.String r2 = "png"
            r0.put(r1, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.czhj.sdk.common.utils.ImageTypeUtil.a
            java.lang.String r1 = "4749"
            java.lang.String r2 = "gif"
            r0.put(r1, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.czhj.sdk.common.utils.ImageTypeUtil.a
            java.lang.String r1 = "4949"
            java.lang.String r2 = "tif"
            r0.put(r1, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.czhj.sdk.common.utils.ImageTypeUtil.a
            java.lang.String r1 = "424D"
            java.lang.String r2 = "bmp"
            r0.put(r1, r2)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.czhj.sdk.common.utils.ImageTypeUtil.a
            java.lang.String r1 = "5745"
            java.lang.String r2 = "webp"
            r0.put(r1, r2)
            return
    }

    public ImageTypeUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(byte[] r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r6 == 0) goto L31
            int r1 = r6.length
            if (r1 > 0) goto Lb
            goto L31
        Lb:
            r1 = 0
            r2 = r1
        Ld:
            int r3 = r6.length
            if (r2 >= r3) goto L2c
            r3 = r6[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            java.lang.String r3 = r3.toUpperCase()
            int r4 = r3.length()
            r5 = 2
            if (r4 >= r5) goto L26
            r0.append(r1)
        L26:
            r0.append(r3)
            int r2 = r2 + 1
            goto Ld
        L2c:
            java.lang.String r6 = r0.toString()
            return r6
        L31:
            r6 = 0
            return r6
    }

    public static java.lang.String getFileHeader(java.lang.String r7) {
            r0 = 0
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L2e
            r1.<init>(r7)     // Catch: java.lang.Throwable -> L2e
            r7 = 2
            byte[] r2 = new byte[r7]     // Catch: java.lang.Throwable -> L29
            r3 = 0
            r1.read(r2, r3, r7)     // Catch: java.lang.Throwable -> L29
            java.lang.String r0 = a(r2)     // Catch: java.lang.Throwable -> L29
            java.lang.String r4 = "5249"
            boolean r4 = r0.equals(r4)     // Catch: java.lang.Throwable -> L29
            if (r4 == 0) goto L25
            r4 = 6
            r1.skip(r4)     // Catch: java.lang.Throwable -> L29
            r1.read(r2, r3, r7)     // Catch: java.lang.Throwable -> L29
            java.lang.String r0 = a(r2)     // Catch: java.lang.Throwable -> L29
        L25:
            r1.close()     // Catch: java.lang.Throwable -> L3d
            goto L3d
        L29:
            r7 = move-exception
            r6 = r1
            r1 = r0
            r0 = r6
            goto L30
        L2e:
            r7 = move-exception
            r1 = r0
        L30:
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> L3e
            com.czhj.sdk.logger.SigmobLog.e(r7)     // Catch: java.lang.Throwable -> L3e
            if (r0 == 0) goto L3c
            r0.close()     // Catch: java.lang.Throwable -> L3c
        L3c:
            r0 = r1
        L3d:
            return r0
        L3e:
            r7 = move-exception
            if (r0 == 0) goto L44
            r0.close()     // Catch: java.lang.Throwable -> L44
        L44:
            throw r7
    }

    public static java.lang.String getFileType(java.lang.String r1) {
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.czhj.sdk.common.utils.ImageTypeUtil.a
            java.lang.String r1 = getFileHeader(r1)
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            return r1
    }
}
