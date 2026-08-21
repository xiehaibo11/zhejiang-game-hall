package com.mbridge.msdk.foundation.aidl;

import java.lang.reflect.Method;

/* JADX INFO: compiled from: ReflectUtils.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {
    public static Object a(String str, Object obj, String str2, Object... objArr) {
        if (str != null && !str.equals("") && str2 != null && !str2.equals("")) {
            try {
                Class<?> cls = Class.forName(str);
                if (objArr != null && objArr.length > 0) {
                    int length = objArr.length;
                    Class<?>[] clsArr = new Class[length];
                    for (int i = 0; i < length; i++) {
                        clsArr[i] = objArr[i].getClass();
                    }
                    Method declaredMethod = cls.getDeclaredMethod(str2, clsArr);
                    declaredMethod.setAccessible(true);
                    return declaredMethod.invoke(obj, objArr);
                }
                Method declaredMethod2 = cls.getDeclaredMethod(str2, new Class[0]);
                declaredMethod2.setAccessible(true);
                return declaredMethod2.invoke(obj, new Object[0]);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return null;
    }
}
