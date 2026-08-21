package com.czhj.sdk.common.utils;

public class ReflectionUtil {

    public static class MethodBuilder {
        private final java.lang.Object a;
        private final java.lang.String b;
        private java.lang.Class<?> c;
        private final java.util.List<java.lang.Class<?>> d;
        private final java.util.List<java.lang.Object> e;
        private boolean f;
        private boolean g;

        public MethodBuilder(java.lang.Class r2, java.lang.String r3) {
                r1 = this;
                r1.<init>()
                com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r3)
                r0 = 1
                r1.g = r0
                r0 = 0
                r1.a = r0
                r1.b = r3
                java.util.ArrayList r3 = new java.util.ArrayList
                r3.<init>()
                r1.d = r3
                java.util.ArrayList r3 = new java.util.ArrayList
                r3.<init>()
                r1.e = r3
                r1.c = r2
                return
        }

        public MethodBuilder(java.lang.Object r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
                r0.a = r1
                r0.b = r2
                java.util.ArrayList r2 = new java.util.ArrayList
                r2.<init>()
                r0.d = r2
                java.util.ArrayList r2 = new java.util.ArrayList
                r2.<init>()
                r0.e = r2
                if (r1 == 0) goto L1f
                java.lang.Class r1 = r1.getClass()
                goto L20
            L1f:
                r1 = 0
            L20:
                r0.c = r1
                return
        }

        public <T> com.czhj.sdk.common.utils.ReflectionUtil.MethodBuilder addParam(java.lang.Class<T> r2, T r3) {
                r1 = this;
                com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
                java.util.List<java.lang.Class<?>> r0 = r1.d
                r0.add(r2)
                java.util.List<java.lang.Object> r2 = r1.e
                r2.add(r3)
                return r1
        }

        public java.lang.Object execute() throws java.lang.Exception {
                r3 = this;
                java.util.List<java.lang.Class<?>> r0 = r3.d
                int r0 = r0.size()
                java.lang.Class[] r0 = new java.lang.Class[r0]
                java.util.List<java.lang.Class<?>> r1 = r3.d
                java.lang.Object[] r0 = r1.toArray(r0)
                java.lang.Class[] r0 = (java.lang.Class[]) r0
                java.lang.Class<?> r1 = r3.c
                java.lang.String r2 = r3.b
                java.lang.reflect.Method r0 = com.czhj.sdk.common.utils.ReflectionUtil.getDeclaredMethodWithTraversal(r1, r2, r0)
                boolean r1 = r3.f
                if (r1 == 0) goto L20
                r1 = 1
                r0.setAccessible(r1)
            L20:
                java.util.List<java.lang.Object> r1 = r3.e
                java.lang.Object[] r1 = r1.toArray()
                boolean r2 = r3.g
                if (r2 == 0) goto L30
                r2 = 0
            L2b:
                java.lang.Object r0 = r0.invoke(r2, r1)
                return r0
            L30:
                java.lang.Object r2 = r3.a
                goto L2b
        }
    }

    public ReflectionUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.reflect.Method getDeclaredMethodWithTraversal(java.lang.Class<?> r0, java.lang.String r1, java.lang.Class<?>... r2) throws java.lang.NoSuchMethodException {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2)
        L6:
            if (r0 == 0) goto L12
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r2)     // Catch: java.lang.Throwable -> Ld
            return r0
        Ld:
            java.lang.Class r0 = r0.getSuperclass()
            goto L6
        L12:
            java.lang.NoSuchMethodException r0 = new java.lang.NoSuchMethodException
            r0.<init>()
            throw r0
    }

    public static java.util.List<java.lang.reflect.Method> getMethodWithTraversal(java.lang.Class<?> r0) {
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r0)
            java.lang.reflect.Method[] r0 = r0.getMethods()     // Catch: java.lang.Throwable -> Lc
            java.util.List r0 = java.util.Arrays.asList(r0)     // Catch: java.lang.Throwable -> Lc
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> getPrivateFields(java.lang.Class r5) {
            java.lang.reflect.Field[] r5 = r5.getDeclaredFields()
            java.util.HashMap r0 = new java.util.HashMap
            int r1 = r5.length
            r0.<init>(r1)
            int r1 = r5.length
            r2 = 0
        Lc:
            if (r2 >= r1) goto L22
            r3 = r5[r2]
            java.lang.String r4 = r3.getName()
            java.lang.Class r3 = r3.getType()
            java.lang.String r3 = r3.getName()
            r0.put(r4, r3)
            int r2 = r2 + 1
            goto Lc
        L22:
            return r0
    }
}
