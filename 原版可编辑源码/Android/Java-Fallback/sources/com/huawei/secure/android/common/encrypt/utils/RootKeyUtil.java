package com.huawei.secure.android.common.encrypt.utils;

public class RootKeyUtil {
    private static final java.lang.String b = "RootKeyUtil";
    private byte[] a;

    static {
            return
    }

    private RootKeyUtil() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            return
    }

    private void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            byte[] r4 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r4)
            r0.a(r1, r2, r3, r4)
            return
    }

    private void a(java.lang.String r3, java.lang.String r4, java.lang.String r5, byte[] r6) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 >= r1) goto L15
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.utils.RootKeyUtil.b
            java.lang.String r1 = "initRootKey: sha1"
            com.huawei.secure.android.common.encrypt.utils.b.c(r0, r1)
            r0 = 0
            byte[] r3 = com.huawei.secure.android.common.encrypt.utils.BaseKeyUtil.exportRootKey(r3, r4, r5, r6, r0)
            r2.a = r3
            goto L23
        L15:
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.utils.RootKeyUtil.b
            java.lang.String r1 = "initRootKey: sha256"
            com.huawei.secure.android.common.encrypt.utils.b.c(r0, r1)
            r0 = 1
            byte[] r3 = com.huawei.secure.android.common.encrypt.utils.BaseKeyUtil.exportRootKey(r3, r4, r5, r6, r0)
            r2.a = r3
        L23:
            return
    }

    public static com.huawei.secure.android.common.encrypt.utils.RootKeyUtil newInstance(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r0 = new com.huawei.secure.android.common.encrypt.utils.RootKeyUtil
            r0.<init>()
            r0.a(r1, r2, r3, r4)
            return r0
    }

    public static com.huawei.secure.android.common.encrypt.utils.RootKeyUtil newInstance(java.lang.String r1, java.lang.String r2, java.lang.String r3, byte[] r4) {
            com.huawei.secure.android.common.encrypt.utils.RootKeyUtil r0 = new com.huawei.secure.android.common.encrypt.utils.RootKeyUtil
            r0.<init>()
            r0.a(r1, r2, r3, r4)
            return r0
    }

    public byte[] getRootKey() {
            r1 = this;
            byte[] r0 = r1.a
            java.lang.Object r0 = r0.clone()
            byte[] r0 = (byte[]) r0
            return r0
    }

    public java.lang.String getRootKeyHex() {
            r1 = this;
            byte[] r0 = r1.a
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r0)
            return r0
    }
}
