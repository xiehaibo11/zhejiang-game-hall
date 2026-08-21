package com.huawei.secure.android.common.encrypt.utils;

public class BaseKeyUtil {
    private static final java.lang.String a = "BaseKeyUtil";
    private static final int b = 16;
    private static final int c = 16;
    private static final int d = 10000;

    static {
            return
    }

    public BaseKeyUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(int r0, int r1, int r2) {
            if (r1 >= r0) goto L3
            r0 = r1
        L3:
            if (r2 >= r0) goto L6
            goto L7
        L6:
            r2 = r0
        L7:
            return r2
    }

    private static boolean a(int r1) {
            r0 = 16
            if (r1 < r0) goto L6
            r1 = 1
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    private static boolean a(int r0, byte[] r1) {
            boolean r0 = a(r0)
            boolean r1 = a(r1)
            r0 = r0 & r1
            return r0
    }

    private static boolean a(byte[] r1) {
            int r1 = r1.length
            r0 = 16
            if (r1 < r0) goto L7
            r1 = 1
            goto L8
        L7:
            r1 = 0
        L8:
            return r1
    }

    public static java.lang.String exportHexRootKey(java.lang.String r0, java.lang.String r1, java.lang.String r2, byte[] r3, int r4, boolean r5) {
            byte[] r0 = exportRootKey(r0, r1, r2, r3, r4, r5)
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r0)
            return r0
    }

    public static byte[] exportRootKey(java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, int r10, boolean r11) {
            byte[] r3 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r9)
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r10
            r5 = r11
            byte[] r6 = exportRootKey(r0, r1, r2, r3, r4, r5)
            return r6
    }

    public static byte[] exportRootKey(java.lang.String r5, java.lang.String r6, java.lang.String r7, byte[] r8, int r9, boolean r10) {
            byte[] r5 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r5)
            byte[] r6 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r6)
            byte[] r7 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r7)
            int r0 = r5.length
            int r1 = r6.length
            int r2 = r7.length
            int r0 = a(r0, r1, r2)
            boolean r1 = a(r0, r8)
            if (r1 == 0) goto L4c
            char[] r1 = new char[r0]
            r2 = 0
        L1c:
            if (r2 >= r0) goto L2c
            r3 = r5[r2]
            r4 = r6[r2]
            r3 = r3 ^ r4
            r4 = r7[r2]
            r3 = r3 ^ r4
            char r3 = (char) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L1c
        L2c:
            r5 = 10000(0x2710, float:1.4013E-41)
            if (r10 != 0) goto L3e
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.utils.BaseKeyUtil.a
            java.lang.String r7 = "exportRootKey: sha1"
            com.huawei.secure.android.common.encrypt.utils.b.c(r6, r7)
            int r9 = r9 * 8
            byte[] r5 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.pbkdf2(r1, r8, r5, r9)
            return r5
        L3e:
            java.lang.String r6 = com.huawei.secure.android.common.encrypt.utils.BaseKeyUtil.a
            java.lang.String r7 = "exportRootKey: sha256"
            com.huawei.secure.android.common.encrypt.utils.b.c(r6, r7)
            int r9 = r9 * 8
            byte[] r5 = com.huawei.secure.android.common.encrypt.hash.PBKDF2.pbkdf2SHA256(r1, r8, r5, r9)
            return r5
        L4c:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "key length must be more than 128bit."
            r5.<init>(r6)
            throw r5
    }

    public static byte[] exportRootKey(java.lang.String r6, java.lang.String r7, java.lang.String r8, byte[] r9, boolean r10) {
            r4 = 16
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r10
            byte[] r6 = exportRootKey(r0, r1, r2, r3, r4, r5)
            return r6
    }
}
