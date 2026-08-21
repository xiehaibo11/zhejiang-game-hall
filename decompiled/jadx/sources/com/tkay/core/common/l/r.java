package com.tkay.core.common.l;

/* JADX INFO: loaded from: classes3.dex */
public final class r {
    private static String a(String str, String str2) {
        int length = str.length();
        int length2 = str2.length();
        if (length == length2) {
            return str;
        }
        int iAbs = Math.abs(length2 - length);
        StringBuilder sb = new StringBuilder(str);
        for (int i = 0; i < iAbs; i++) {
            sb.append(" ");
        }
        return sb.toString();
    }
}
