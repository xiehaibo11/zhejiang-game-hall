package com.qq.e.comm.util;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Map<String, Boolean> f4694a = new HashMap();

    private static boolean a(Class cls, String str, Class... clsArr) {
        String string;
        if (cls == null) {
            string = "";
        } else {
            StringBuilder sb = new StringBuilder();
            sb.append(cls.getName());
            sb.append("#");
            sb.append(str);
            for (Class cls2 : clsArr) {
                sb.append("_");
                sb.append(cls2.getName());
            }
            string = sb.toString();
        }
        Boolean bool = f4694a.get(string);
        if (bool != null) {
            return Boolean.TRUE.equals(bool);
        }
        try {
            cls.getDeclaredMethod(str, clsArr);
            f4694a.put(string, Boolean.TRUE);
            return true;
        } catch (NoSuchMethodException unused) {
            f4694a.put(string, Boolean.FALSE);
            return false;
        }
    }

    public static boolean a(Object obj) {
        if (obj == null) {
            return false;
        }
        return a(obj.getClass(), "onRenderFail", new Class[0]);
    }

    public static boolean b(Object obj) {
        if (obj == null) {
            return false;
        }
        return a(obj.getClass(), "onRenderSuccess", new Class[0]);
    }
}
