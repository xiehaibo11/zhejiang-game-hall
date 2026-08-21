package com.mbridge.msdk.mbjscommon.b;

public final class a {
    private static com.mbridge.msdk.mbjscommon.b.a.a a;

    public interface a {
        boolean a(com.mbridge.msdk.mbjscommon.b.a.b.a r1);
    }

    public static abstract class b {

        public static class a extends java.lang.Throwable {
            private java.lang.Class<?> a;
            private java.lang.String b;

            public a(java.lang.Exception r1) {
                    r0 = this;
                    r0.<init>(r1)
                    return
            }

            public a(java.lang.String r1) {
                    r0 = this;
                    r0.<init>(r1)
                    return
            }

            public final void a(java.lang.Class<?> r1) {
                    r0 = this;
                    r0.a = r1
                    return
            }

            public final void a(java.lang.String r1) {
                    r0 = this;
                    r0.b = r1
                    return
            }

            @Override
            public final java.lang.String toString() {
                    r2 = this;
                    java.lang.Throwable r0 = r2.getCause()
                    if (r0 == 0) goto L27
                    java.lang.StringBuilder r0 = new java.lang.StringBuilder
                    r0.<init>()
                    java.lang.Class r1 = r2.getClass()
                    java.lang.String r1 = r1.getName()
                    r0.append(r1)
                    java.lang.String r1 = ": "
                    r0.append(r1)
                    java.lang.Throwable r1 = r2.getCause()
                    r0.append(r1)
                    java.lang.String r0 = r0.toString()
                    goto L2b
                L27:
                    java.lang.String r0 = super.toString()
                L2b:
                    return r0
            }
        }
    }

    public static class c<C> {
        protected java.lang.Class<C> a;

        public c(java.lang.Class<C> r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        public final com.mbridge.msdk.mbjscommon.b.a.d a(java.lang.String r4, java.lang.Class<?>... r5) throws com.mbridge.msdk.mbjscommon.b.a.b.a {
                r3 = this;
                com.mbridge.msdk.mbjscommon.b.a$d r0 = new com.mbridge.msdk.mbjscommon.b.a$d
                java.lang.Class<C> r1 = r3.a
                r2 = 0
                r0.<init>(r1, r4, r5, r2)
                return r0
        }
    }

    public static class d {
        protected final java.lang.reflect.Method a;

        d(java.lang.Class<?> r4, java.lang.String r5, java.lang.Class<?>[] r6, int r7) throws com.mbridge.msdk.mbjscommon.b.a.b.a {
                r3 = this;
                r3.<init>()
                r0 = 0
                if (r4 != 0) goto L9
                r3.a = r0
                return
            L9:
                java.lang.Class<java.lang.Object> r1 = java.lang.Object.class
                if (r4 == r1) goto L20
                java.lang.reflect.Method r0 = r4.getDeclaredMethod(r5, r6)     // Catch: java.lang.SecurityException -> L12 java.lang.NoSuchMethodException -> L17 java.lang.Throwable -> L4c java.lang.Exception -> L4e
                goto L20
            L12:
                r1 = move-exception
                r1.printStackTrace()     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
                goto L1b
            L17:
                r1 = move-exception
                r1.printStackTrace()     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            L1b:
                java.lang.Class r4 = r4.getSuperclass()     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
                goto L9
            L20:
                if (r7 <= 0) goto L45
                int r6 = r0.getModifiers()     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
                r6 = r6 & r7
                if (r6 == r7) goto L45
                com.mbridge.msdk.mbjscommon.b.a$b$a r6 = new com.mbridge.msdk.mbjscommon.b.a$b$a     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
                r1.<init>()     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
                r1.append(r0)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
                java.lang.String r2 = " does not match modifiers: "
                r1.append(r2)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
                r1.append(r7)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
                java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
                r6.<init>(r7)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
                com.mbridge.msdk.mbjscommon.b.a.a(r6)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            L45:
                r6 = 1
                r0.setAccessible(r6)     // Catch: java.lang.Throwable -> L4c java.lang.Exception -> L4e
            L49:
                r3.a = r0
                goto L5e
            L4c:
                r4 = move-exception
                goto L5f
            L4e:
                r6 = move-exception
                com.mbridge.msdk.mbjscommon.b.a$b$a r7 = new com.mbridge.msdk.mbjscommon.b.a$b$a     // Catch: java.lang.Throwable -> L4c
                r7.<init>(r6)     // Catch: java.lang.Throwable -> L4c
                r7.a(r4)     // Catch: java.lang.Throwable -> L4c
                r7.a(r5)     // Catch: java.lang.Throwable -> L4c
                com.mbridge.msdk.mbjscommon.b.a.a(r7)     // Catch: java.lang.Throwable -> L4c
                goto L49
            L5e:
                return
            L5f:
                r3.a = r0
                throw r4
        }

        public final java.lang.Object a(java.lang.Object r2, java.lang.Object... r3) throws java.lang.IllegalArgumentException, java.lang.reflect.InvocationTargetException {
                r1 = this;
                java.lang.reflect.Method r0 = r1.a     // Catch: java.lang.IllegalAccessException -> L7
                java.lang.Object r2 = r0.invoke(r2, r3)     // Catch: java.lang.IllegalAccessException -> L7
                return r2
            L7:
                r2 = move-exception
                r2.printStackTrace()
                r2 = 0
                return r2
        }

        public final java.lang.reflect.Method a() {
                r1 = this;
                java.lang.reflect.Method r0 = r1.a
                return r0
        }
    }

    public static <T> com.mbridge.msdk.mbjscommon.b.a.c<T> a(java.lang.ClassLoader r1, java.lang.String r2) throws com.mbridge.msdk.mbjscommon.b.a.b.a {
            com.mbridge.msdk.mbjscommon.b.a$c r0 = new com.mbridge.msdk.mbjscommon.b.a$c     // Catch: java.lang.Exception -> La
            java.lang.Class r1 = r1.loadClass(r2)     // Catch: java.lang.Exception -> La
            r0.<init>(r1)     // Catch: java.lang.Exception -> La
            return r0
        La:
            r1 = move-exception
            com.mbridge.msdk.mbjscommon.b.a$b$a r2 = new com.mbridge.msdk.mbjscommon.b.a$b$a
            r2.<init>(r1)
            b(r2)
            com.mbridge.msdk.mbjscommon.b.a$c r1 = new com.mbridge.msdk.mbjscommon.b.a$c
            r2 = 0
            r1.<init>(r2)
            return r1
    }

    static void a(com.mbridge.msdk.mbjscommon.b.a.b.a r0) throws com.mbridge.msdk.mbjscommon.b.a.b.a {
            b(r0)
            return
    }

    private static void b(com.mbridge.msdk.mbjscommon.b.a.b.a r1) throws com.mbridge.msdk.mbjscommon.b.a.b.a {
            com.mbridge.msdk.mbjscommon.b.a$a r0 = com.mbridge.msdk.mbjscommon.b.a.a
            if (r0 == 0) goto Lb
            boolean r0 = r0.a(r1)
            if (r0 == 0) goto Lb
            return
        Lb:
            throw r1
    }
}
