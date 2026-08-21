package com.heytap.mcssdk.utils;

public class b {
    public static java.lang.String a = null;
    public static final java.lang.String b = "Y29tLm5lYXJtZS5tY3M=";
    public static java.lang.String c = "";

    static {
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a() {
            java.lang.String r0 = com.heytap.mcssdk.utils.b.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L15
            java.lang.String r0 = new java.lang.String
            java.lang.String r1 = "Y29tLm5lYXJtZS5tY3M="
            byte[] r1 = com.heytap.mcssdk.a.a.b(r1)
            r0.<init>(r1)
            com.heytap.mcssdk.utils.b.c = r0
        L15:
            java.lang.String r0 = com.heytap.mcssdk.utils.b.c
            byte[] r0 = a(r0)
            byte[] r0 = a(r0)
            if (r0 == 0) goto L2d
            java.lang.String r1 = new java.lang.String
            java.lang.String r2 = "UTF-8"
            java.nio.charset.Charset r2 = java.nio.charset.Charset.forName(r2)
            r1.<init>(r0, r2)
            goto L2f
        L2d:
            java.lang.String r1 = ""
        L2f:
            return r1
    }

    public static byte[] a(java.lang.String r2) {
            r0 = 0
            if (r2 != 0) goto L6
            byte[] r2 = new byte[r0]
            return r2
        L6:
            java.lang.String r1 = "UTF-8"
            byte[] r2 = r2.getBytes(r1)     // Catch: java.io.UnsupportedEncodingException -> Ld
            return r2
        Ld:
            byte[] r2 = new byte[r0]
            return r2
    }

    public static byte[] a(byte[] r5) {
            int r0 = r5.length
            int r0 = r0 % 2
            if (r0 != 0) goto L7
            int r0 = r5.length
            goto La
        L7:
            int r0 = r5.length
            int r0 = r0 + (-1)
        La:
            r1 = 0
        Lb:
            if (r1 >= r0) goto L1a
            r2 = r5[r1]
            int r3 = r1 + 1
            r4 = r5[r3]
            r5[r1] = r4
            r5[r3] = r2
            int r1 = r1 + 2
            goto Lb
        L1a:
            return r5
    }

    public static java.lang.String b(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = ""
            if (r0 != 0) goto L8c
            r0 = 0
            java.lang.String r2 = a()     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = com.heytap.mcssdk.utils.c.a(r5, r2)     // Catch: java.lang.Exception -> L27
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L27
            r2.<init>()     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = "sdkDecrypt desDecrypt des data "
            r2.append(r3)     // Catch: java.lang.Exception -> L27
            r2.append(r1)     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L27
            com.heytap.mcssdk.utils.d.b(r2)     // Catch: java.lang.Exception -> L27
            r2 = 1
            goto L41
        L27:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "sdkDecrypt DES excepiton "
            r3.append(r4)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.heytap.mcssdk.utils.d.b(r2)
            r2 = r0
        L41:
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 == 0) goto L48
            goto L49
        L48:
            r0 = r2
        L49:
            if (r0 != 0) goto L8c
            java.lang.String r0 = "isvrbeT7qUywVEZ1Ia0/aUVA/TcFaeV0wC8qFLc8rg4="
            java.lang.String r1 = com.heytap.msp.push.encrypt.AESEncrypt.decrypt(r0, r5)     // Catch: java.lang.Exception -> L73
            java.lang.String r5 = "AES"
            com.heytap.mcssdk.utils.b.a = r5     // Catch: java.lang.Exception -> L73
            com.heytap.mcssdk.utils.e r5 = com.heytap.mcssdk.utils.e.f()     // Catch: java.lang.Exception -> L73
            java.lang.String r0 = com.heytap.mcssdk.utils.b.a     // Catch: java.lang.Exception -> L73
            r5.b(r0)     // Catch: java.lang.Exception -> L73
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L73
            r5.<init>()     // Catch: java.lang.Exception -> L73
            java.lang.String r0 = "sdkDecrypt desDecrypt aes data "
            r5.append(r0)     // Catch: java.lang.Exception -> L73
            r5.append(r1)     // Catch: java.lang.Exception -> L73
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L73
            com.heytap.mcssdk.utils.d.b(r5)     // Catch: java.lang.Exception -> L73
            goto L8c
        L73:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "sdkDecrypt AES excepiton "
            r0.append(r2)
            java.lang.String r5 = r5.toString()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.heytap.mcssdk.utils.d.b(r5)
        L8c:
            return r1
    }

    public static java.lang.String c(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = ""
            if (r0 != 0) goto L8c
            r0 = 0
            java.lang.String r2 = "isvrbeT7qUywVEZ1Ia0/aUVA/TcFaeV0wC8qFLc8rg4="
            java.lang.String r1 = com.heytap.msp.push.encrypt.AESEncrypt.decrypt(r2, r5)     // Catch: java.lang.Exception -> L25
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L25
            r2.<init>()     // Catch: java.lang.Exception -> L25
            java.lang.String r3 = "sdkDecrypt aesDecrypt aes data "
            r2.append(r3)     // Catch: java.lang.Exception -> L25
            r2.append(r1)     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L25
            com.heytap.mcssdk.utils.d.b(r2)     // Catch: java.lang.Exception -> L25
            r2 = 1
            goto L3f
        L25:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "sdkDecrypt AES excepiton "
            r3.append(r4)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.heytap.mcssdk.utils.d.b(r2)
            r2 = r0
        L3f:
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 == 0) goto L46
            goto L47
        L46:
            r0 = r2
        L47:
            if (r0 != 0) goto L8c
            java.lang.String r0 = a()     // Catch: java.lang.Exception -> L73
            java.lang.String r1 = com.heytap.mcssdk.utils.c.a(r5, r0)     // Catch: java.lang.Exception -> L73
            java.lang.String r5 = "DES"
            com.heytap.mcssdk.utils.b.a = r5     // Catch: java.lang.Exception -> L73
            com.heytap.mcssdk.utils.e r5 = com.heytap.mcssdk.utils.e.f()     // Catch: java.lang.Exception -> L73
            java.lang.String r0 = com.heytap.mcssdk.utils.b.a     // Catch: java.lang.Exception -> L73
            r5.b(r0)     // Catch: java.lang.Exception -> L73
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L73
            r5.<init>()     // Catch: java.lang.Exception -> L73
            java.lang.String r0 = "sdkDecrypt aesDecrypt des data "
            r5.append(r0)     // Catch: java.lang.Exception -> L73
            r5.append(r1)     // Catch: java.lang.Exception -> L73
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L73
            com.heytap.mcssdk.utils.d.b(r5)     // Catch: java.lang.Exception -> L73
            goto L8c
        L73:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "sdkDecrypt DES excepiton "
            r0.append(r2)
            java.lang.String r5 = r5.toString()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.heytap.mcssdk.utils.d.b(r5)
        L8c:
            return r1
    }

    public static java.lang.String d(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "sdkDecrypt start data "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.heytap.mcssdk.utils.d.b(r0)
            java.lang.String r0 = com.heytap.mcssdk.utils.b.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L26
            com.heytap.mcssdk.utils.e r0 = com.heytap.mcssdk.utils.e.f()
            java.lang.String r0 = r0.e()
            com.heytap.mcssdk.utils.b.a = r0
        L26:
            java.lang.String r0 = com.heytap.mcssdk.utils.b.a
            java.lang.String r1 = "DES"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L3a
            java.lang.String r0 = "sdkDecrypt start DES"
            com.heytap.mcssdk.utils.d.b(r0)
            java.lang.String r2 = b(r2)
            goto L43
        L3a:
            java.lang.String r0 = "sdkDecrypt start AES"
            com.heytap.mcssdk.utils.d.b(r0)
            java.lang.String r2 = c(r2)
        L43:
            return r2
    }
}
