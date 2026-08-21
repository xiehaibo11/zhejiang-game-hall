package com.bytedance.pangle.util;

public final class k {
    public static int a(String str) {
        try {
            return Integer.parseInt(str);
        } catch (Throwable unused) {
            return -1;
        }
    }
}
