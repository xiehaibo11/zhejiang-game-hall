package com.bytedance.pangle.fragment;

final class a {
    private static java.lang.Class a(java.lang.String r0) {
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    private static java.lang.reflect.Field a(java.lang.Class r0, java.lang.String r1) {
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.NoSuchFieldException -> Lb
            if (r0 == 0) goto La
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.NoSuchFieldException -> Lb
        La:
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static void a(java.lang.Class r3) {
            java.lang.Class<android.support.v4.app.Fragment> r0 = android.support.v4.app.Fragment.class
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Exception -> L7a
            java.lang.String r1 = "support"
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Exception -> L7a
            java.lang.String r1 = "sClassMap"
            r2 = 0
            if (r0 == 0) goto L25
            java.lang.Class<android.support.v4.app.Fragment> r0 = android.support.v4.app.Fragment.class
            java.lang.reflect.Field r0 = a(r0, r1)     // Catch: java.lang.Exception -> L7a
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Exception -> L7a
            android.support.v4.util.SimpleArrayMap r0 = (android.support.v4.util.SimpleArrayMap) r0     // Catch: java.lang.Exception -> L7a
            java.lang.String r1 = r3.getName()     // Catch: java.lang.Exception -> L7a
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L7a
            return
        L25:
            java.lang.Class<android.support.v4.app.Fragment> r0 = android.support.v4.app.Fragment.class
            java.lang.reflect.Field r0 = a(r0, r1)     // Catch: java.lang.Exception -> L7a
            if (r0 == 0) goto L3b
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Exception -> L7a
            android.support.v4.util.SimpleArrayMap r0 = (android.support.v4.util.SimpleArrayMap) r0     // Catch: java.lang.Exception -> L7a
            java.lang.String r1 = r3.getName()     // Catch: java.lang.Exception -> L7a
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L7a
            return
        L3b:
            java.lang.String r0 = "androidx.fragment.app.FragmentFactory"
            java.lang.Class r0 = a(r0)     // Catch: java.lang.Exception -> L7a
            if (r0 != 0) goto L44
            return
        L44:
            java.lang.reflect.Field r1 = a(r0, r1)     // Catch: java.lang.Exception -> L7a
            if (r1 == 0) goto L58
            java.lang.Object r0 = r1.get(r2)     // Catch: java.lang.Exception -> L7a
            android.support.v4.util.SimpleArrayMap r0 = (android.support.v4.util.SimpleArrayMap) r0     // Catch: java.lang.Exception -> L7a
            java.lang.String r1 = r3.getName()     // Catch: java.lang.Exception -> L7a
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L7a
            return
        L58:
            java.lang.String r1 = "sClassCacheMap"
            java.lang.reflect.Field r0 = a(r0, r1)     // Catch: java.lang.Exception -> L7a
            if (r0 == 0) goto L79
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Exception -> L7a
            android.support.v4.util.SimpleArrayMap r0 = (android.support.v4.util.SimpleArrayMap) r0     // Catch: java.lang.Exception -> L7a
            android.support.v4.util.SimpleArrayMap r1 = new android.support.v4.util.SimpleArrayMap     // Catch: java.lang.Exception -> L7a
            r1.<init>()     // Catch: java.lang.Exception -> L7a
            java.lang.String r2 = r3.getName()     // Catch: java.lang.Exception -> L7a
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L7a
            java.lang.ClassLoader r3 = r3.getClassLoader()     // Catch: java.lang.Exception -> L7a
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L7a
        L79:
            return
        L7a:
            r3 = move-exception
            r3.printStackTrace()
            return
    }
}
