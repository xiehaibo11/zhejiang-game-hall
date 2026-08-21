package com.huawei.hms.opendevice;

public abstract class a {
    public static java.lang.String a(byte[] r0) {
            java.lang.String r0 = com.huawei.secure.android.common.encrypt.utils.HexUtil.byteArray2HexStr(r0)
            return r0
    }

    public static byte[] a(java.lang.String r0) {
            byte[] r0 = com.huawei.secure.android.common.encrypt.utils.HexUtil.hexStr2ByteArray(r0)
            return r0
    }
}
