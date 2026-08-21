package com.meizu.cloud.pushsdk.b.b;

public class c {
    private static final java.util.HashMap<java.lang.String, java.lang.reflect.Method> a = null;
    private final com.meizu.cloud.pushsdk.b.b.a b;
    private final java.lang.String c;
    private java.lang.Class<?>[] d;

    class a {
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.meizu.cloud.pushsdk.b.b.c.a = r0
            return
    }

    c(com.meizu.cloud.pushsdk.b.b.a r1, java.lang.String r2, java.lang.Class<?>... r3) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            r0.d = r3
            return
    }

    private java.lang.Class<?> a(java.lang.Class<?> r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            boolean r0 = r2.isPrimitive()
            if (r0 == 0) goto L48
            java.lang.Class r0 = java.lang.Boolean.TYPE
            if (r0 != r2) goto L11
            java.lang.Class<java.lang.Boolean> r2 = java.lang.Boolean.class
            return r2
        L11:
            java.lang.Class r0 = java.lang.Integer.TYPE
            if (r0 != r2) goto L18
            java.lang.Class<java.lang.Integer> r2 = java.lang.Integer.class
            return r2
        L18:
            java.lang.Class r0 = java.lang.Long.TYPE
            if (r0 != r2) goto L1f
            java.lang.Class<java.lang.Long> r2 = java.lang.Long.class
            return r2
        L1f:
            java.lang.Class r0 = java.lang.Short.TYPE
            if (r0 != r2) goto L26
            java.lang.Class<java.lang.Short> r2 = java.lang.Short.class
            return r2
        L26:
            java.lang.Class r0 = java.lang.Byte.TYPE
            if (r0 != r2) goto L2d
            java.lang.Class<java.lang.Byte> r2 = java.lang.Byte.class
            return r2
        L2d:
            java.lang.Class r0 = java.lang.Double.TYPE
            if (r0 != r2) goto L34
            java.lang.Class<java.lang.Double> r2 = java.lang.Double.class
            return r2
        L34:
            java.lang.Class r0 = java.lang.Float.TYPE
            if (r0 != r2) goto L3b
            java.lang.Class<java.lang.Float> r2 = java.lang.Float.class
            return r2
        L3b:
            java.lang.Class r0 = java.lang.Character.TYPE
            if (r0 != r2) goto L42
            java.lang.Class<java.lang.Character> r2 = java.lang.Character.class
            return r2
        L42:
            java.lang.Class r0 = java.lang.Void.TYPE
            if (r0 != r2) goto L48
            java.lang.Class<java.lang.Void> r2 = java.lang.Void.class
        L48:
            return r2
    }

    private java.lang.reflect.Method a() {
            r8 = this;
            com.meizu.cloud.pushsdk.b.b.a r0 = r8.b
            java.lang.Class r0 = r0.a()
            java.lang.reflect.Method[] r1 = r0.getMethods()
            int r2 = r1.length
            r3 = 0
            r4 = r3
        Ld:
            if (r4 >= r2) goto L1f
            r5 = r1[r4]
            java.lang.String r6 = r8.c
            java.lang.Class<?>[] r7 = r8.d
            boolean r6 = r8.a(r5, r6, r7)
            if (r6 == 0) goto L1c
            return r5
        L1c:
            int r4 = r4 + 1
            goto Ld
        L1f:
            java.lang.reflect.Method[] r1 = r0.getDeclaredMethods()
            int r2 = r1.length
        L24:
            if (r3 >= r2) goto L36
            r4 = r1[r3]
            java.lang.String r5 = r8.c
            java.lang.Class<?>[] r6 = r8.d
            boolean r5 = r8.a(r4, r5, r6)
            if (r5 == 0) goto L33
            return r4
        L33:
            int r3 = r3 + 1
            goto L24
        L36:
            java.lang.NoSuchMethodException r1 = new java.lang.NoSuchMethodException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "No similar method "
            r2.append(r3)
            java.lang.String r3 = r8.c
            r2.append(r3)
            java.lang.String r3 = " with params "
            r2.append(r3)
            java.lang.Class<?>[] r3 = r8.d
            java.lang.String r3 = java.util.Arrays.toString(r3)
            r2.append(r3)
            java.lang.String r3 = " could be found on type "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    private boolean a(java.lang.reflect.Method r2, java.lang.String r3, java.lang.Class<?>[] r4) {
            r1 = this;
            java.lang.String r0 = r2.getName()
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L16
            java.lang.Class[] r2 = r2.getParameterTypes()
            boolean r2 = r1.a(r2, r4)
            if (r2 == 0) goto L16
            r2 = 1
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    private boolean a(java.lang.Class<?>[] r5, java.lang.Class<?>[] r6) {
            r4 = this;
            int r0 = r5.length
            int r1 = r6.length
            r2 = 0
            if (r0 != r1) goto L28
            r0 = r2
        L6:
            int r1 = r6.length
            if (r0 >= r1) goto L26
            r1 = r6[r0]
            java.lang.Class<com.meizu.cloud.pushsdk.b.b.c$a> r3 = com.meizu.cloud.pushsdk.b.b.c.a.class
            if (r1 != r3) goto L10
            goto L22
        L10:
            r1 = r5[r0]
            java.lang.Class r1 = r4.a(r1)
            r3 = r6[r0]
            java.lang.Class r3 = r4.a(r3)
            boolean r1 = r1.isAssignableFrom(r3)
            if (r1 == 0) goto L25
        L22:
            int r0 = r0 + 1
            goto L6
        L25:
            return r2
        L26:
            r5 = 1
            return r5
        L28:
            return r2
    }

    private java.lang.String b() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            com.meizu.cloud.pushsdk.b.b.a r1 = r5.b
            java.lang.Class r1 = r1.a()
            java.lang.String r1 = r1.getName()
            r0.<init>(r1)
            java.lang.String r1 = r5.c
            r0.append(r1)
            java.lang.Class<?>[] r1 = r5.d
            int r2 = r1.length
            r3 = 0
        L18:
            if (r3 >= r2) goto L26
            r4 = r1[r3]
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            int r3 = r3 + 1
            goto L18
        L26:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public <T> com.meizu.cloud.pushsdk.b.b.d<T> a(java.lang.Object r6, java.lang.Object... r7) {
            r5 = this;
            com.meizu.cloud.pushsdk.b.b.d r0 = new com.meizu.cloud.pushsdk.b.b.d
            r0.<init>()
            java.lang.String r1 = r5.b()     // Catch: java.lang.Exception -> L57
            java.util.HashMap<java.lang.String, java.lang.reflect.Method> r2 = com.meizu.cloud.pushsdk.b.b.c.a     // Catch: java.lang.Exception -> L57
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Exception -> L57
            java.lang.reflect.Method r2 = (java.lang.reflect.Method) r2     // Catch: java.lang.Exception -> L57
            if (r2 != 0) goto L4a
            java.lang.Class<?>[] r2 = r5.d     // Catch: java.lang.Exception -> L57
            int r2 = r2.length     // Catch: java.lang.Exception -> L57
            int r3 = r7.length     // Catch: java.lang.Exception -> L57
            if (r2 != r3) goto L28
            com.meizu.cloud.pushsdk.b.b.a r2 = r5.b     // Catch: java.lang.Exception -> L57
            java.lang.Class r2 = r2.a()     // Catch: java.lang.Exception -> L57
            java.lang.String r3 = r5.c     // Catch: java.lang.Exception -> L57
            java.lang.Class<?>[] r4 = r5.d     // Catch: java.lang.Exception -> L57
            java.lang.reflect.Method r2 = r2.getMethod(r3, r4)     // Catch: java.lang.Exception -> L57
            goto L45
        L28:
            int r2 = r7.length     // Catch: java.lang.Exception -> L57
            if (r2 <= 0) goto L41
            int r2 = r7.length     // Catch: java.lang.Exception -> L57
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L57
            r5.d = r2     // Catch: java.lang.Exception -> L57
            r2 = 0
        L31:
            int r3 = r7.length     // Catch: java.lang.Exception -> L57
            if (r2 >= r3) goto L41
            java.lang.Class<?>[] r3 = r5.d     // Catch: java.lang.Exception -> L57
            r4 = r7[r2]     // Catch: java.lang.Exception -> L57
            java.lang.Class r4 = r4.getClass()     // Catch: java.lang.Exception -> L57
            r3[r2] = r4     // Catch: java.lang.Exception -> L57
            int r2 = r2 + 1
            goto L31
        L41:
            java.lang.reflect.Method r2 = r5.a()     // Catch: java.lang.Exception -> L57
        L45:
            java.util.HashMap<java.lang.String, java.lang.reflect.Method> r3 = com.meizu.cloud.pushsdk.b.b.c.a     // Catch: java.lang.Exception -> L57
            r3.put(r1, r2)     // Catch: java.lang.Exception -> L57
        L4a:
            r1 = 1
            r2.setAccessible(r1)     // Catch: java.lang.Exception -> L57
            java.lang.Object r6 = r2.invoke(r6, r7)     // Catch: java.lang.Exception -> L57
            r0.b = r6     // Catch: java.lang.Exception -> L57
            r0.a = r1     // Catch: java.lang.Exception -> L57
            goto L72
        L57:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "invoke exception, "
            r7.append(r1)
            java.lang.String r6 = r6.getMessage()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            java.lang.String r7 = "ReflectMethod"
            com.meizu.cloud.pushinternal.DebugLogger.d(r7, r6)
        L72:
            return r0
    }

    public <T> com.meizu.cloud.pushsdk.b.b.d<T> a(java.lang.Object... r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.b.b.a r0 = r1.b     // Catch: java.lang.ClassNotFoundException -> Lb
            java.lang.Class r0 = r0.a()     // Catch: java.lang.ClassNotFoundException -> Lb
            com.meizu.cloud.pushsdk.b.b.d r2 = r1.a(r0, r2)     // Catch: java.lang.ClassNotFoundException -> Lb
            return r2
        Lb:
            com.meizu.cloud.pushsdk.b.b.d r2 = new com.meizu.cloud.pushsdk.b.b.d
            r2.<init>()
            return r2
    }
}
