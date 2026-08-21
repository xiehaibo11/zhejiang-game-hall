package com.huawei.hms.aaid.encrypt;

public class PushEncrypter {
    public PushEncrypter() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String decrypter(android.content.Context r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            return r1
        L9:
            java.lang.String r1 = com.huawei.hms.opendevice.c.c(r1)
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.aes.AesCbc.decrypt(r2, r1)
            return r1
    }

    public static java.lang.String encrypter(android.content.Context r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            return r1
        L9:
            java.lang.String r1 = com.huawei.hms.opendevice.c.c(r1)
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.aes.AesCbc.encrypt(r2, r1)
            return r1
    }

    public static java.lang.String encrypterOld(android.content.Context r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            return r1
        L9:
            byte[] r1 = com.huawei.hms.opendevice.c.a(r1)
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.aes.AesCbc.encrypt(r2, r1)
            return r1
    }
}
