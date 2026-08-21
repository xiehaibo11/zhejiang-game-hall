package com.bianfeng.utilslib;

public class SignMd5Utils {
    private static com.bianfeng.utilslib.SignMd5Utils utils;

    private SignMd5Utils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.utilslib.SignMd5Utils getInstance() {
            com.bianfeng.utilslib.SignMd5Utils r0 = com.bianfeng.utilslib.SignMd5Utils.utils
            if (r0 != 0) goto Lb
            com.bianfeng.utilslib.SignMd5Utils r0 = new com.bianfeng.utilslib.SignMd5Utils
            r0.<init>()
            com.bianfeng.utilslib.SignMd5Utils.utils = r0
        Lb:
            com.bianfeng.utilslib.SignMd5Utils r0 = com.bianfeng.utilslib.SignMd5Utils.utils
            return r0
    }

    public java.lang.String bytesToHexString(byte[] r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r7 == 0) goto L2d
            int r1 = r7.length
            if (r1 > 0) goto Lb
            goto L2d
        Lb:
            r1 = 0
            r2 = 0
        Ld:
            int r3 = r7.length
            if (r2 >= r3) goto L28
            r3 = r7[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            java.lang.String r3 = java.lang.Integer.toHexString(r3)
            int r4 = r3.length()
            r5 = 2
            if (r4 >= r5) goto L22
            r0.append(r1)
        L22:
            r0.append(r3)
            int r2 = r2 + 1
            goto Ld
        L28:
            java.lang.String r7 = r0.toString()
            return r7
        L2d:
            r7 = 0
            return r7
    }

    public java.lang.String getMd5(java.util.TreeMap<java.lang.String, java.lang.String> r6) {
            r5 = this;
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r0 = r0.getWebPayPrivateKey()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Set r6 = r6.entrySet()
            java.util.Iterator r6 = r6.iterator()
        L15:
            boolean r2 = r6.hasNext()
            if (r2 == 0) goto L4a
            java.lang.Object r2 = r6.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = "="
            r4.append(r3)
            r4.append(r2)
            java.lang.String r2 = "&"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r1.append(r2)
            goto L15
        L4a:
            com.bianfeng.utilslib.Logger r6 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "signed-->"
            r2.append(r3)
            java.lang.String r4 = r1.toString()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            r6.i(r2)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = r1.toString()
            r6.append(r1)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            java.lang.String r6 = r5.md5(r6)
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            return r6
    }

    public java.lang.String md5(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "MD5.algorithm"
            java.lang.String r1 = "MD5"
            java.lang.String r0 = java.lang.System.getProperty(r0, r1)     // Catch: java.lang.Exception -> L1b
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Exception -> L1b
            java.lang.String r1 = "utf-8"
            byte[] r3 = r3.getBytes(r1)     // Catch: java.lang.Exception -> L1b
            byte[] r3 = r0.digest(r3)     // Catch: java.lang.Exception -> L1b
            java.lang.String r3 = r2.bytesToHexString(r3)     // Catch: java.lang.Exception -> L1b
            return r3
        L1b:
            r3 = move-exception
            r3.printStackTrace()
            r3 = 0
            return r3
    }
}
