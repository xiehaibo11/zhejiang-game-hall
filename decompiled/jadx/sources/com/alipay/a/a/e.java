package com.alipay.a.a;

import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static List<i> f1043a;

    static {
        ArrayList arrayList = new ArrayList();
        f1043a = arrayList;
        arrayList.add(new l());
        f1043a.add(new d());
        f1043a.add(new c());
        f1043a.add(new h());
        f1043a.add(new k());
        f1043a.add(new b());
        f1043a.add(new a());
        f1043a.add(new g());
    }

    public static final <T> T a(Object obj, Type type) {
        T t;
        for (i iVar : f1043a) {
            if (iVar.a(com.alipay.a.b.a.a(type)) && (t = (T) iVar.a(obj, type)) != null) {
                return t;
            }
        }
        return null;
    }

    public static final Object a(String str, Type type) {
        Object bVar;
        if (str == null || str.length() == 0) {
            return null;
        }
        String strTrim = str.trim();
        if (strTrim.startsWith("[") && strTrim.endsWith("]")) {
            bVar = new org.json.alipay.a(strTrim);
        } else {
            if (!strTrim.startsWith("{") || !strTrim.endsWith("}")) {
                return a((Object) strTrim, type);
            }
            bVar = new org.json.alipay.b(strTrim);
        }
        return a(bVar, type);
    }
}
