package com.huawei.hms.support.gentyref;

public final class GenericTypeReflector {
    public GenericTypeReflector() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.Class<?> getType(java.lang.reflect.Type r3) {
            boolean r0 = r3 instanceof java.lang.Class
            if (r0 == 0) goto L7
            java.lang.Class r3 = (java.lang.Class) r3
            return r3
        L7:
            boolean r0 = r3 instanceof java.lang.reflect.ParameterizedType
            if (r0 == 0) goto L14
            java.lang.reflect.ParameterizedType r3 = (java.lang.reflect.ParameterizedType) r3
            java.lang.reflect.Type r3 = r3.getRawType()
            java.lang.Class r3 = (java.lang.Class) r3
            return r3
        L14:
            boolean r0 = r3 instanceof java.lang.reflect.TypeVariable
            if (r0 == 0) goto L30
            java.lang.reflect.TypeVariable r3 = (java.lang.reflect.TypeVariable) r3
            java.lang.reflect.Type[] r0 = r3.getBounds()
            int r0 = r0.length
            if (r0 != 0) goto L24
            java.lang.Class<java.lang.Object> r3 = java.lang.Object.class
            return r3
        L24:
            java.lang.reflect.Type[] r3 = r3.getBounds()
            r0 = 0
            r3 = r3[r0]
            java.lang.Class r3 = getType(r3)
            return r3
        L30:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "not supported: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }
}
