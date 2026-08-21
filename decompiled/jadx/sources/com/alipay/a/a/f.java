package com.alipay.a.a;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static List<j> f1044a;

    static {
        ArrayList arrayList = new ArrayList();
        f1044a = arrayList;
        arrayList.add(new l());
        f1044a.add(new d());
        f1044a.add(new c());
        f1044a.add(new h());
        f1044a.add(new b());
        f1044a.add(new a());
        f1044a.add(new g());
    }

    public static String a(Object obj) {
        if (obj == null) {
            return null;
        }
        Object objB = b(obj);
        if (com.alipay.a.b.a.a(objB.getClass())) {
            return org.json.alipay.b.c(objB.toString());
        }
        if (Collection.class.isAssignableFrom(objB.getClass())) {
            return new org.json.alipay.a((Collection) objB).toString();
        }
        if (Map.class.isAssignableFrom(objB.getClass())) {
            return new org.json.alipay.b((Map) objB).toString();
        }
        throw new IllegalArgumentException("Unsupported Class : " + objB.getClass());
    }

    public static Object b(Object obj) {
        Object objA;
        if (obj == null) {
            return null;
        }
        for (j jVar : f1044a) {
            if (jVar.a(obj.getClass()) && (objA = jVar.a(obj)) != null) {
                return objA;
            }
        }
        throw new IllegalArgumentException("Unsupported Class : " + obj.getClass());
    }
}
