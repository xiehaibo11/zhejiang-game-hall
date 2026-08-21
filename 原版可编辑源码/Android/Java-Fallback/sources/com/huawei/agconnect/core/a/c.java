package com.huawei.agconnect.core.a;

public final class c {
    private final java.util.Map<java.lang.Class<?>, com.huawei.agconnect.core.Service> a;
    private final java.util.Map<java.lang.Class<?>, java.lang.Object> b;

    c(java.util.List<com.huawei.agconnect.core.Service> r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            r1.a(r2)
            return
    }

    private java.lang.Object a(com.huawei.agconnect.AGConnectInstance r9, com.huawei.agconnect.core.Service r10) {
            r8 = this;
            java.lang.String r0 = "Instantiate service exception "
            java.lang.String r1 = "ServiceRepository"
            java.lang.Object r2 = r10.getInstance()
            if (r2 == 0) goto Lf
            java.lang.Object r9 = r10.getInstance()
            return r9
        Lf:
            java.lang.Class r10 = r10.getType()
            r2 = 0
            if (r10 != 0) goto L17
            return r2
        L17:
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            java.lang.Class<com.huawei.agconnect.AGConnectInstance> r5 = com.huawei.agconnect.AGConnectInstance.class
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            java.lang.reflect.Constructor r4 = a(r10, r4)     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            if (r4 == 0) goto L39
            java.lang.Object[] r10 = new java.lang.Object[r3]     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            android.content.Context r3 = r9.getContext()     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            r10[r6] = r3     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            r10[r7] = r9     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            java.lang.Object r9 = r4.newInstance(r10)     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            return r9
        L39:
            java.lang.Class[] r3 = new java.lang.Class[r7]     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r6] = r4     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            java.lang.reflect.Constructor r3 = a(r10, r3)     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            if (r3 == 0) goto L52
            java.lang.Object[] r10 = new java.lang.Object[r7]     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            android.content.Context r9 = r9.getContext()     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            r10[r6] = r9     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            java.lang.Object r9 = r3.newInstance(r10)     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            return r9
        L52:
            java.lang.Object r9 = r10.newInstance()     // Catch: java.lang.IllegalAccessException -> L57 java.lang.reflect.InvocationTargetException -> L65 java.lang.InstantiationException -> L73
            return r9
        L57:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r0)
            java.lang.String r9 = r9.getLocalizedMessage()
            goto L80
        L65:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r0)
            java.lang.String r9 = r9.getLocalizedMessage()
            goto L80
        L73:
            r9 = move-exception
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r0)
            java.lang.String r9 = r9.getLocalizedMessage()
        L80:
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            android.util.Log.e(r1, r9)
            return r2
    }

    private static java.lang.reflect.Constructor a(java.lang.Class r8, java.lang.Class... r9) {
            java.lang.reflect.Constructor[] r8 = r8.getDeclaredConstructors()
            int r0 = r8.length
            r1 = 0
            r2 = r1
            r3 = r2
        L8:
            if (r2 >= r0) goto L2a
            r4 = r8[r2]
            java.lang.Class[] r5 = r4.getParameterTypes()
            int r6 = r5.length
            int r7 = r9.length
            if (r6 != r7) goto L27
            r6 = r1
        L15:
            int r7 = r9.length
            if (r6 >= r7) goto L24
            r3 = r5[r6]
            r7 = r9[r6]
            if (r3 != r7) goto L20
            r3 = 1
            goto L21
        L20:
            r3 = r1
        L21:
            int r6 = r6 + 1
            goto L15
        L24:
            if (r3 == 0) goto L27
            return r4
        L27:
            int r2 = r2 + 1
            goto L8
        L2a:
            r8 = 0
            return r8
    }

    public <T> T a(com.huawei.agconnect.AGConnectInstance r3, java.lang.Class<?> r4) {
            r2 = this;
            java.util.Map<java.lang.Class<?>, com.huawei.agconnect.core.Service> r0 = r2.a
            java.lang.Object r0 = r0.get(r4)
            com.huawei.agconnect.core.Service r0 = (com.huawei.agconnect.core.Service) r0
            if (r0 != 0) goto Lc
            r3 = 0
            return r3
        Lc:
            boolean r1 = r0.isSingleton()
            if (r1 == 0) goto L1b
            java.util.Map<java.lang.Class<?>, java.lang.Object> r1 = r2.b
            java.lang.Object r1 = r1.get(r4)
            if (r1 == 0) goto L1b
            return r1
        L1b:
            java.lang.Object r3 = r2.a(r3, r0)
            if (r3 == 0) goto L2c
            boolean r0 = r0.isSingleton()
            if (r0 == 0) goto L2c
            java.util.Map<java.lang.Class<?>, java.lang.Object> r0 = r2.b
            r0.put(r4, r3)
        L2c:
            return r3
    }

    public void a(java.util.List<com.huawei.agconnect.core.Service> r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.util.Iterator r4 = r4.iterator()
        L7:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L1d
            java.lang.Object r0 = r4.next()
            com.huawei.agconnect.core.Service r0 = (com.huawei.agconnect.core.Service) r0
            java.util.Map<java.lang.Class<?>, com.huawei.agconnect.core.Service> r1 = r3.a
            java.lang.Class r2 = r0.getInterface()
            r1.put(r2, r0)
            goto L7
        L1d:
            return
    }
}
