package com.alipay.a.a;

public final class h implements com.alipay.a.a.i, com.alipay.a.a.j {
    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.util.Map<java.lang.Object, java.lang.Object> a(java.lang.reflect.Type r4) {
        L0:
            java.lang.Class<java.util.Properties> r0 = java.util.Properties.class
            if (r4 != r0) goto La
            java.util.Properties r4 = new java.util.Properties
            r4.<init>()
            return r4
        La:
            java.lang.Class<java.util.Hashtable> r0 = java.util.Hashtable.class
            if (r4 != r0) goto L14
            java.util.Hashtable r4 = new java.util.Hashtable
            r4.<init>()
            return r4
        L14:
            java.lang.Class<java.util.IdentityHashMap> r0 = java.util.IdentityHashMap.class
            if (r4 != r0) goto L1e
            java.util.IdentityHashMap r4 = new java.util.IdentityHashMap
            r4.<init>()
            return r4
        L1e:
            java.lang.Class<java.util.SortedMap> r0 = java.util.SortedMap.class
            if (r4 == r0) goto L91
            java.lang.Class<java.util.TreeMap> r0 = java.util.TreeMap.class
            if (r4 != r0) goto L27
            goto L91
        L27:
            java.lang.Class<java.util.concurrent.ConcurrentMap> r0 = java.util.concurrent.ConcurrentMap.class
            if (r4 == r0) goto L8b
            java.lang.Class<java.util.concurrent.ConcurrentHashMap> r0 = java.util.concurrent.ConcurrentHashMap.class
            if (r4 != r0) goto L30
            goto L8b
        L30:
            java.lang.Class<java.util.Map> r0 = java.util.Map.class
            if (r4 == r0) goto L85
            java.lang.Class<java.util.HashMap> r0 = java.util.HashMap.class
            if (r4 != r0) goto L39
            goto L85
        L39:
            java.lang.Class<java.util.LinkedHashMap> r0 = java.util.LinkedHashMap.class
            if (r4 != r0) goto L43
            java.util.LinkedHashMap r4 = new java.util.LinkedHashMap
            r4.<init>()
            return r4
        L43:
            boolean r0 = r4 instanceof java.lang.reflect.ParameterizedType
            if (r0 == 0) goto L4e
            java.lang.reflect.ParameterizedType r4 = (java.lang.reflect.ParameterizedType) r4
            java.lang.reflect.Type r4 = r4.getRawType()
            goto L0
        L4e:
            r0 = r4
            java.lang.Class r0 = (java.lang.Class) r0
            boolean r1 = r0.isInterface()
            java.lang.String r2 = "unsupport type "
            if (r1 != 0) goto L73
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Exception -> L60
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Exception -> L60
            return r0
        L60:
            r0 = move-exception
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r2)
            r3.append(r4)
            java.lang.String r4 = r3.toString()
            r1.<init>(r4, r0)
            throw r1
        L73:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L85:
            java.util.HashMap r4 = new java.util.HashMap
            r4.<init>()
            return r4
        L8b:
            java.util.concurrent.ConcurrentHashMap r4 = new java.util.concurrent.ConcurrentHashMap
            r4.<init>()
            return r4
        L91:
            java.util.TreeMap r4 = new java.util.TreeMap
            r4.<init>()
            return r4
    }

    @Override
    public final java.lang.Object a(java.lang.Object r4) {
            r3 = this;
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>()
            java.util.Map r4 = (java.util.Map) r4
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        Lf:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L3d
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            boolean r2 = r2 instanceof java.lang.String
            if (r2 == 0) goto L35
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.Object r1 = com.alipay.a.a.f.b(r1)
            r0.put(r2, r1)
            goto Lf
        L35:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Map key must be String!"
            r4.<init>(r0)
            throw r4
        L3d:
            return r0
    }

    @Override
    public final java.lang.Object a(java.lang.Object r5, java.lang.reflect.Type r6) {
            r4 = this;
            java.lang.Class r0 = r5.getClass()
            java.lang.Class<org.json.alipay.b> r1 = org.json.alipay.b.class
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Le
            r5 = 0
            return r5
        Le:
            org.json.alipay.b r5 = (org.json.alipay.b) r5
            java.util.Map r0 = a(r6)
            boolean r1 = r6 instanceof java.lang.reflect.ParameterizedType
            if (r1 == 0) goto L5f
            java.lang.reflect.ParameterizedType r6 = (java.lang.reflect.ParameterizedType) r6
            java.lang.reflect.Type[] r1 = r6.getActualTypeArguments()
            r2 = 0
            r1 = r1[r2]
            java.lang.reflect.Type[] r6 = r6.getActualTypeArguments()
            r2 = 1
            r6 = r6[r2]
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            if (r2 != r1) goto L57
            java.util.Iterator r1 = r5.a()
        L30:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L56
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            r3 = r6
            java.lang.Class r3 = (java.lang.Class) r3
            boolean r3 = com.alipay.a.b.a.a(r3)
            if (r3 == 0) goto L4a
            java.lang.Object r3 = r5.a(r2)
            goto L52
        L4a:
            java.lang.Object r3 = r5.a(r2)
            java.lang.Object r3 = com.alipay.a.a.e.a(r3, r6)
        L52:
            r0.put(r2, r3)
            goto L30
        L56:
            return r0
        L57:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "Deserialize Map Key must be String.class"
            r5.<init>(r6)
            throw r5
        L5f:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "Deserialize Map must be Generics!"
            r5.<init>(r6)
            goto L68
        L67:
            throw r5
        L68:
            goto L67
    }

    @Override
    public final boolean a(java.lang.Class<?> r2) {
            r1 = this;
            java.lang.Class<java.util.Map> r0 = java.util.Map.class
            boolean r2 = r0.isAssignableFrom(r2)
            return r2
    }
}
