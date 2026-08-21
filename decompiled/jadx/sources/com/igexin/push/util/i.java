package com.igexin.push.util;

/* JADX INFO: loaded from: classes2.dex */
public class i {
    public static boolean a(Class cls, Class cls2, int i) {
        if (cls == null || cls2 == null || i <= 0) {
            return false;
        }
        if (cls == cls2) {
            return true;
        }
        if (cls.getSuperclass() != null) {
            return a(cls.getSuperclass(), cls2, i - 1);
        }
        return false;
    }
}
