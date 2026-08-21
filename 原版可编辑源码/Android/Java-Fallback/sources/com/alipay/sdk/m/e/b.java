package com.alipay.sdk.m.e;

public final class b implements com.alipay.sdk.m.e.i, com.alipay.sdk.m.e.j {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.Collection<java.lang.Object> a(java.lang.Class<?> r2, java.lang.reflect.Type r3) {
            java.lang.Class<java.util.AbstractCollection> r0 = java.util.AbstractCollection.class
            if (r2 != r0) goto La
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            goto L68
        La:
            java.lang.Class<java.util.HashSet> r0 = java.util.HashSet.class
            boolean r0 = r2.isAssignableFrom(r0)
            if (r0 == 0) goto L18
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            goto L68
        L18:
            java.lang.Class<java.util.LinkedHashSet> r0 = java.util.LinkedHashSet.class
            boolean r0 = r2.isAssignableFrom(r0)
            if (r0 == 0) goto L26
            java.util.LinkedHashSet r2 = new java.util.LinkedHashSet
            r2.<init>()
            goto L68
        L26:
            java.lang.Class<java.util.TreeSet> r0 = java.util.TreeSet.class
            boolean r0 = r2.isAssignableFrom(r0)
            if (r0 == 0) goto L34
            java.util.TreeSet r2 = new java.util.TreeSet
            r2.<init>()
            goto L68
        L34:
            java.lang.Class<java.util.ArrayList> r0 = java.util.ArrayList.class
            boolean r0 = r2.isAssignableFrom(r0)
            if (r0 == 0) goto L42
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            goto L68
        L42:
            java.lang.Class<java.util.EnumSet> r0 = java.util.EnumSet.class
            boolean r0 = r2.isAssignableFrom(r0)
            if (r0 == 0) goto L61
            boolean r2 = r3 instanceof java.lang.reflect.ParameterizedType
            if (r2 == 0) goto L58
            java.lang.reflect.ParameterizedType r3 = (java.lang.reflect.ParameterizedType) r3
            java.lang.reflect.Type[] r2 = r3.getActualTypeArguments()
            r3 = 0
            r2 = r2[r3]
            goto L5a
        L58:
            java.lang.Class<java.lang.Object> r2 = java.lang.Object.class
        L5a:
            java.lang.Class r2 = (java.lang.Class) r2
            java.util.EnumSet r2 = java.util.EnumSet.noneOf(r2)
            goto L68
        L61:
            java.lang.Object r3 = r2.newInstance()     // Catch: java.lang.Exception -> L69
            java.util.Collection r3 = (java.util.Collection) r3     // Catch: java.lang.Exception -> L69
            r2 = r3
        L68:
            return r2
        L69:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "create instane error, class "
            r0.<init>(r1)
            java.lang.String r2 = r2.getName()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
    }

    @Override
    public final java.lang.Object a(java.lang.Object r3) {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.Iterable r3 = (java.lang.Iterable) r3
            java.util.Iterator r3 = r3.iterator()
        Lb:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r3.next()
            java.lang.Object r1 = com.alipay.sdk.m.e.f.b(r1)
            r0.add(r1)
            goto Lb
        L1d:
            return r0
    }

    @Override
    public final java.lang.Object a(java.lang.Object r4, java.lang.reflect.Type r5) {
            r3 = this;
            java.lang.Class r0 = r4.getClass()
            java.lang.Class<org.json.alipay.a> r1 = org.json.alipay.a.class
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Le
            r4 = 0
            return r4
        Le:
            java.lang.Class r0 = com.alipay.sdk.m.f.a.a(r5)
            org.json.alipay.a r4 = (org.json.alipay.a) r4
            java.util.Collection r0 = a(r0, r5)
            boolean r1 = r5 instanceof java.lang.reflect.ParameterizedType
            if (r1 == 0) goto L3a
            java.lang.reflect.ParameterizedType r5 = (java.lang.reflect.ParameterizedType) r5
            java.lang.reflect.Type[] r5 = r5.getActualTypeArguments()
            r1 = 0
            r5 = r5[r1]
        L25:
            int r2 = r4.a()
            if (r1 >= r2) goto L39
            java.lang.Object r2 = r4.a(r1)
            java.lang.Object r2 = com.alipay.sdk.m.e.e.a(r2, r5)
            r0.add(r2)
            int r1 = r1 + 1
            goto L25
        L39:
            return r0
        L3a:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r5 = "Does not support the implement for generics."
            r4.<init>(r5)
            goto L43
        L42:
            throw r4
        L43:
            goto L42
    }

    @Override
    public final boolean a(java.lang.Class<?> r2) {
            r1 = this;
            java.lang.Class<java.util.Collection> r0 = java.util.Collection.class
            boolean r2 = r0.isAssignableFrom(r2)
            return r2
    }
}
