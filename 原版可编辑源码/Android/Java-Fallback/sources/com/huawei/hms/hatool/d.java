package com.huawei.hms.hatool;

public class d {
    public static final java.nio.charset.Charset a = null;

    static {
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.huawei.hms.hatool.d.a = r0
            return
    }

    public static android.util.Pair<byte[], java.lang.String> a(java.lang.String r3) {
            r0 = 0
            if (r3 == 0) goto L1e
            int r1 = r3.length()
            r2 = 32
            if (r1 >= r2) goto Lc
            goto L1e
        Lc:
            java.lang.String r0 = r3.substring(r0, r2)
            java.lang.String r3 = r3.substring(r2)
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r0)
            android.util.Pair r1 = new android.util.Pair
            r1.<init>(r0, r3)
            return r1
        L1e:
            android.util.Pair r1 = new android.util.Pair
            byte[] r0 = new byte[r0]
            r1.<init>(r0, r3)
            return r1
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            android.util.Pair r1 = a(r1)
            java.lang.Object r0 = r1.second
            java.lang.String r0 = (java.lang.String) r0
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r0)
            byte[] r2 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r2)
            java.lang.Object r1 = r1.first
            byte[] r1 = (byte[]) r1
            byte[] r1 = com.huawei.secure.android.common.encrypt.aes.AesCbc.decrypt(r0, r2, r1)
            java.lang.String r2 = new java.lang.String
            java.nio.charset.Charset r0 = com.huawei.hms.hatool.d.a
            r2.<init>(r1, r0)
            return r2
    }

    public static java.lang.String b(java.lang.String r1, java.lang.String r2) {
            java.nio.charset.Charset r0 = com.huawei.hms.hatool.d.a
            byte[] r1 = r1.getBytes(r0)
            byte[] r2 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r2)
            byte[] r1 = com.huawei.secure.android.common.encrypt.aes.AesCbc.encrypt(r1, r2)
            java.lang.String r1 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r1)
            return r1
    }
}
