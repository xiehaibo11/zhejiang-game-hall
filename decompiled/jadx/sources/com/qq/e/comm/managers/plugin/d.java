package com.qq.e.comm.managers.plugin;

/* JADX INFO: loaded from: classes3.dex */
class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String[] f4689a = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f"};

    public static String a(byte[] bArr) {
        StringBuffer stringBuffer = new StringBuffer();
        for (int i : bArr) {
            if (i < 0) {
                i += 256;
            }
            stringBuffer.append(f4689a[i / 16] + f4689a[i % 16]);
        }
        return stringBuffer.toString();
    }
}
