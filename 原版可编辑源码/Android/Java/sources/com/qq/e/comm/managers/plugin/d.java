package com.qq.e.comm.managers.plugin;

class d {
    private static final String[] a = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f"};

    public static String a(byte[] bArr) {
        StringBuffer stringBuffer = new StringBuffer();
        for (int i : bArr) {
            if (i < 0) {
                i += 256;
            }
            stringBuffer.append(a[i / 16] + a[i % 16]);
        }
        return stringBuffer.toString();
    }
}
