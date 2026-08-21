package com.loc;

public final class fv {
    private static java.lang.Object a(java.lang.Class<?> r0, java.lang.String r1, java.lang.Object[] r2, java.lang.Class<?>[] r3) throws java.lang.Exception {
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)
            boolean r1 = r0.isAccessible()
            if (r1 != 0) goto Le
            r1 = 1
            r0.setAccessible(r1)
        Le:
            r1 = 0
            java.lang.Object r0 = r0.invoke(r1, r2)
            return r0
    }

    public static java.lang.Object a(java.lang.Object r5, java.lang.Class<?> r6, java.lang.String r7, java.lang.Object... r8) throws java.lang.Exception {
            int r0 = r8.length
            java.lang.Class[] r0 = new java.lang.Class[r0]
            int r1 = r8.length
            r2 = 0
        L5:
            if (r2 >= r1) goto L30
            r3 = r8[r2]
            java.lang.Class r3 = r3.getClass()
            r0[r2] = r3
            r3 = r0[r2]
            java.lang.Class<java.lang.Integer> r4 = java.lang.Integer.class
            if (r3 != r4) goto L19
            java.lang.Class r3 = java.lang.Integer.TYPE
            r0[r2] = r3
        L19:
            r3 = r0[r2]
            java.lang.Class<java.lang.Boolean> r4 = java.lang.Boolean.class
            if (r3 != r4) goto L23
            java.lang.Class r3 = java.lang.Boolean.TYPE
            r0[r2] = r3
        L23:
            r3 = r0[r2]
            java.lang.Class<java.lang.Double> r4 = java.lang.Double.class
            if (r3 != r4) goto L2d
            java.lang.Class r3 = java.lang.Double.TYPE
            r0[r2] = r3
        L2d:
            int r2 = r2 + 1
            goto L5
        L30:
            java.lang.reflect.Method r6 = r6.getDeclaredMethod(r7, r0)
            boolean r0 = r6.isAccessible()
            if (r0 != 0) goto L3e
            r0 = 1
            r6.setAccessible(r0)
        L3e:
            r0 = 0
            java.lang.Object r0 = r6.invoke(r5, r8)     // Catch: java.lang.Throwable -> L44
            goto L5e
        L44:
            r5 = move-exception
            boolean r6 = r5 instanceof java.lang.reflect.InvocationTargetException     // Catch: java.lang.Throwable -> L5e
            if (r6 == 0) goto L5e
            java.lang.reflect.InvocationTargetException r5 = (java.lang.reflect.InvocationTargetException) r5     // Catch: java.lang.Throwable -> L5e
            java.lang.Throwable r5 = r5.getTargetException()     // Catch: java.lang.Throwable -> L5e
            java.lang.String r6 = "Reflect"
            java.lang.String r8 = "invokeMethod "
            java.lang.String r7 = java.lang.String.valueOf(r7)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r7 = r8.concat(r7)     // Catch: java.lang.Throwable -> L5e
            com.loc.fr.a(r5, r6, r7)     // Catch: java.lang.Throwable -> L5e
        L5e:
            return r0
    }

    public static java.lang.Object a(java.lang.Object r1, java.lang.String r2, java.lang.Object... r3) {
            java.lang.Class r0 = r1.getClass()     // Catch: java.lang.Throwable -> L9
            java.lang.Object r1 = a(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L9
            goto La
        L9:
            r1 = 0
        La:
            return r1
    }

    public static java.lang.Object a(java.lang.String r1, java.lang.String r2) throws java.lang.Exception {
            java.lang.Class r1 = java.lang.Class.forName(r1)
            java.lang.reflect.Field r2 = r1.getField(r2)
            r0 = 1
            r2.setAccessible(r0)
            java.lang.Object r1 = r2.get(r1)
            return r1
    }

    public static java.lang.Object a(java.lang.String r0, java.lang.String r1, java.lang.Object[] r2, java.lang.Class<?>[] r3) throws java.lang.Exception {
            java.lang.Class r0 = java.lang.Class.forName(r0)
            java.lang.Object r0 = a(r0, r1, r2, r3)
            return r0
    }

    public static int b(java.lang.Object r0, java.lang.String r1, java.lang.Object... r2) throws java.lang.Exception {
            java.lang.Object r0 = a(r0, r1, r2)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public static int b(java.lang.String r0, java.lang.String r1) throws java.lang.Exception {
            java.lang.Object r0 = a(r0, r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }
}
