package com.alipay.a.b;

public final class a {
    public static java.lang.Class<?> a(java.lang.reflect.Type r1) {
        L0:
            boolean r0 = r1 instanceof java.lang.Class
            if (r0 == 0) goto L7
            java.lang.Class r1 = (java.lang.Class) r1
            return r1
        L7:
            boolean r0 = r1 instanceof java.lang.reflect.ParameterizedType
            if (r0 == 0) goto L12
            java.lang.reflect.ParameterizedType r1 = (java.lang.reflect.ParameterizedType) r1
            java.lang.reflect.Type r1 = r1.getRawType()
            goto L0
        L12:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "TODO"
            r1.<init>(r0)
            goto L1b
        L1a:
            throw r1
        L1b:
            goto L1a
    }

    public static boolean a(java.lang.Class<?> r2) {
            boolean r0 = r2.isPrimitive()
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.Class<java.lang.String> r0 = java.lang.String.class
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L11
            return r1
        L11:
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L1a
            return r1
        L1a:
            java.lang.Class<java.lang.Long> r0 = java.lang.Long.class
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L23
            return r1
        L23:
            java.lang.Class<java.lang.Double> r0 = java.lang.Double.class
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L2c
            return r1
        L2c:
            java.lang.Class<java.lang.Float> r0 = java.lang.Float.class
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L35
            return r1
        L35:
            java.lang.Class<java.lang.Boolean> r0 = java.lang.Boolean.class
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L3e
            return r1
        L3e:
            java.lang.Class<java.lang.Short> r0 = java.lang.Short.class
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L47
            return r1
        L47:
            java.lang.Class<java.lang.Character> r0 = java.lang.Character.class
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L50
            return r1
        L50:
            java.lang.Class<java.lang.Byte> r0 = java.lang.Byte.class
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L59
            return r1
        L59:
            java.lang.Class<java.lang.Void> r0 = java.lang.Void.class
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L62
            return r1
        L62:
            r2 = 0
            return r2
    }
}
