package com.tkay.expressad.atsignalcommon.b;

public final class c {
    private static com.tkay.expressad.atsignalcommon.b.c.a a;

    public interface a {
        boolean a();
    }

    public static abstract class b {

        public static class a extends java.lang.Throwable {
            private static final long d = 1;
            private java.lang.Class<?> a;
            private java.lang.String b;
            private java.lang.String c;

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

            public final java.lang.Class<?> a() {
                    r1 = this;
                    java.lang.Class<?> r0 = r1.a
                    return r0
            }

            public final void a(java.lang.Class<?> r1) {
                    r0 = this;
                    r0.a = r1
                    return
            }

            public final void a(java.lang.String r1) {
                    r0 = this;
                    r0.c = r1
                    return
            }

            public final java.lang.String b() {
                    r1 = this;
                    java.lang.String r0 = r1.c
                    return r0
            }

            public final void b(java.lang.String r1) {
                    r0 = this;
                    r0.b = r1
                    return
            }

            public final java.lang.String c() {
                    r1 = this;
                    java.lang.String r0 = r1.b
                    return r0
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
                    return r0
                L27:
                    java.lang.String r0 = super.toString()
                    return r0
            }
        }

        public b() {
                r0 = this;
                r0.<init>()
                return
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

        private com.tkay.expressad.atsignalcommon.b.c.d a(java.lang.Class<?>... r3) {
                r2 = this;
                com.tkay.expressad.atsignalcommon.b.c$d r0 = new com.tkay.expressad.atsignalcommon.b.c$d
                java.lang.Class<C> r1 = r2.a
                r0.<init>(r1, r3)
                return r0
        }

        private com.tkay.expressad.atsignalcommon.b.c.e<C, java.lang.Object> a(java.lang.String r4) {
                r3 = this;
                com.tkay.expressad.atsignalcommon.b.c$e r0 = new com.tkay.expressad.atsignalcommon.b.c$e
                java.lang.Class<C> r1 = r3.a
                r2 = 8
                r0.<init>(r1, r4, r2)
                return r0
        }

        private java.lang.Class<C> a() {
                r1 = this;
                java.lang.Class<C> r0 = r1.a
                return r0
        }

        private com.tkay.expressad.atsignalcommon.b.c.e<C, java.lang.Object> b(java.lang.String r4) {
                r3 = this;
                com.tkay.expressad.atsignalcommon.b.c$e r0 = new com.tkay.expressad.atsignalcommon.b.c$e
                java.lang.Class<C> r1 = r3.a
                r2 = 0
                r0.<init>(r1, r4, r2)
                return r0
        }

        private com.tkay.expressad.atsignalcommon.b.c.f b(java.lang.String r4, java.lang.Class<?>... r5) {
                r3 = this;
                com.tkay.expressad.atsignalcommon.b.c$f r0 = new com.tkay.expressad.atsignalcommon.b.c$f
                java.lang.Class<C> r1 = r3.a
                r2 = 8
                r0.<init>(r1, r4, r5, r2)
                return r0
        }

        public final com.tkay.expressad.atsignalcommon.b.c.f a(java.lang.String r4, java.lang.Class<?>... r5) {
                r3 = this;
                com.tkay.expressad.atsignalcommon.b.c$f r0 = new com.tkay.expressad.atsignalcommon.b.c$f
                java.lang.Class<C> r1 = r3.a
                r2 = 0
                r0.<init>(r1, r4, r5, r2)
                return r0
        }
    }

    public static class d {
        protected java.lang.reflect.Constructor<?> a;

        d(java.lang.Class<?> r2, java.lang.Class<?>[] r3) {
                r1 = this;
                r1.<init>()
                if (r2 != 0) goto L6
                return
            L6:
                java.lang.reflect.Constructor r3 = r2.getDeclaredConstructor(r3)     // Catch: java.lang.NoSuchMethodException -> Ld
                r1.a = r3     // Catch: java.lang.NoSuchMethodException -> Ld
                return
            Ld:
                r3 = move-exception
                com.tkay.expressad.atsignalcommon.b.c$b$a r0 = new com.tkay.expressad.atsignalcommon.b.c$b$a
                r0.<init>(r3)
                r0.a(r2)
                com.tkay.expressad.atsignalcommon.b.c.a(r0)
                return
        }

        private java.lang.Object a(java.lang.Object... r3) {
                r2 = this;
                java.lang.reflect.Constructor<?> r0 = r2.a
                r1 = 1
                r0.setAccessible(r1)
                java.lang.reflect.Constructor<?> r0 = r2.a     // Catch: java.lang.Exception -> Ld
                java.lang.Object r3 = r0.newInstance(r3)     // Catch: java.lang.Exception -> Ld
                goto L12
            Ld:
                r3 = move-exception
                r3.printStackTrace()
                r3 = 0
            L12:
                return r3
        }
    }

    public static class e<C, T> {
        private java.lang.Object a;
        private final java.lang.reflect.Field b;

        e(java.lang.Class<C> r5, java.lang.String r6, int r7) {
                r4 = this;
                r4.<init>()
                r0 = 0
                if (r5 != 0) goto L9
                r4.b = r0
                return
            L9:
                r4.a = r0     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
                java.lang.reflect.Field r0 = r5.getDeclaredField(r6)     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
                if (r7 <= 0) goto L34
                int r1 = r0.getModifiers()     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
                r1 = r1 & r7
                if (r1 == r7) goto L34
                com.tkay.expressad.atsignalcommon.b.c$b$a r1 = new com.tkay.expressad.atsignalcommon.b.c$b$a     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
                r2.<init>()     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
                r2.append(r0)     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
                java.lang.String r3 = " does not match modifiers: "
                r2.append(r3)     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
                r2.append(r7)     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
                java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
                r1.<init>(r7)     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
                com.tkay.expressad.atsignalcommon.b.c.a(r1)     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
            L34:
                r7 = 1
                r0.setAccessible(r7)     // Catch: java.lang.Throwable -> L3b java.lang.NoSuchFieldException -> L3d
                r4.b = r0
                return
            L3b:
                r5 = move-exception
                goto L4f
            L3d:
                r7 = move-exception
                com.tkay.expressad.atsignalcommon.b.c$b$a r1 = new com.tkay.expressad.atsignalcommon.b.c$b$a     // Catch: java.lang.Throwable -> L3b
                r1.<init>(r7)     // Catch: java.lang.Throwable -> L3b
                r1.a(r5)     // Catch: java.lang.Throwable -> L3b
                r1.b(r6)     // Catch: java.lang.Throwable -> L3b
                com.tkay.expressad.atsignalcommon.b.c.a(r1)     // Catch: java.lang.Throwable -> L3b
                r4.b = r0
                return
            L4f:
                r4.b = r0
                throw r5
        }

        private <T2> com.tkay.expressad.atsignalcommon.b.c.e<C, T2> a(java.lang.Class<?> r5) {
                r4 = this;
                java.lang.reflect.Field r0 = r4.b
                if (r0 == 0) goto L31
                java.lang.Class r0 = r0.getType()
                boolean r0 = r5.isAssignableFrom(r0)
                if (r0 != 0) goto L31
                com.tkay.expressad.atsignalcommon.b.c$b$a r0 = new com.tkay.expressad.atsignalcommon.b.c$b$a
                java.lang.ClassCastException r1 = new java.lang.ClassCastException
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.reflect.Field r3 = r4.b
                r2.append(r3)
                java.lang.String r3 = " is not of type "
                r2.append(r3)
                r2.append(r5)
                java.lang.String r5 = r2.toString()
                r1.<init>(r5)
                r0.<init>(r1)
                com.tkay.expressad.atsignalcommon.b.c.a(r0)
            L31:
                return r4
        }

        private com.tkay.expressad.atsignalcommon.b.c.e<C, T> a(java.lang.String r5) {
                r4 = this;
                java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.ClassNotFoundException -> L38
                java.lang.reflect.Field r0 = r4.b     // Catch: java.lang.ClassNotFoundException -> L38
                if (r0 == 0) goto L37
                java.lang.reflect.Field r0 = r4.b     // Catch: java.lang.ClassNotFoundException -> L38
                java.lang.Class r0 = r0.getType()     // Catch: java.lang.ClassNotFoundException -> L38
                boolean r0 = r5.isAssignableFrom(r0)     // Catch: java.lang.ClassNotFoundException -> L38
                if (r0 != 0) goto L37
                com.tkay.expressad.atsignalcommon.b.c$b$a r0 = new com.tkay.expressad.atsignalcommon.b.c$b$a     // Catch: java.lang.ClassNotFoundException -> L38
                java.lang.ClassCastException r1 = new java.lang.ClassCastException     // Catch: java.lang.ClassNotFoundException -> L38
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.ClassNotFoundException -> L38
                r2.<init>()     // Catch: java.lang.ClassNotFoundException -> L38
                java.lang.reflect.Field r3 = r4.b     // Catch: java.lang.ClassNotFoundException -> L38
                r2.append(r3)     // Catch: java.lang.ClassNotFoundException -> L38
                java.lang.String r3 = " is not of type "
                r2.append(r3)     // Catch: java.lang.ClassNotFoundException -> L38
                r2.append(r5)     // Catch: java.lang.ClassNotFoundException -> L38
                java.lang.String r5 = r2.toString()     // Catch: java.lang.ClassNotFoundException -> L38
                r1.<init>(r5)     // Catch: java.lang.ClassNotFoundException -> L38
                r0.<init>(r1)     // Catch: java.lang.ClassNotFoundException -> L38
                com.tkay.expressad.atsignalcommon.b.c.a(r0)     // Catch: java.lang.ClassNotFoundException -> L38
            L37:
                return r4
            L38:
                r5 = move-exception
                com.tkay.expressad.atsignalcommon.b.c$b$a r0 = new com.tkay.expressad.atsignalcommon.b.c$b$a
                r0.<init>(r5)
                com.tkay.expressad.atsignalcommon.b.c.a(r0)
                return r4
        }

        private T a() {
                r2 = this;
                java.lang.reflect.Field r0 = r2.b     // Catch: java.lang.IllegalAccessException -> L9
                java.lang.Object r1 = r2.a     // Catch: java.lang.IllegalAccessException -> L9
                java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.IllegalAccessException -> L9
                return r0
            L9:
                r0 = move-exception
                r0.printStackTrace()
                r0 = 0
                return r0
        }

        private void a(com.tkay.expressad.atsignalcommon.b.b.b<?> r3) {
                r2 = this;
                java.lang.Object r0 = r2.a()
                if (r0 == 0) goto L1f
                java.lang.Class r1 = r0.getClass()
                java.lang.Class[] r1 = r1.getInterfaces()
                java.lang.Object r3 = com.tkay.expressad.atsignalcommon.b.b.a(r0, r3, r1)
                java.lang.reflect.Field r0 = r2.b     // Catch: java.lang.IllegalAccessException -> L1a
                java.lang.Object r1 = r2.a     // Catch: java.lang.IllegalAccessException -> L1a
                r0.set(r1, r3)     // Catch: java.lang.IllegalAccessException -> L1a
                return
            L1a:
                r3 = move-exception
                r3.printStackTrace()
                return
            L1f:
                java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
                java.lang.String r0 = "Cannot mapping null"
                r3.<init>(r0)
                throw r3
        }

        private void a(java.lang.Object r3) {
                r2 = this;
                java.lang.reflect.Field r0 = r2.b     // Catch: java.lang.IllegalAccessException -> L8
                java.lang.Object r1 = r2.a     // Catch: java.lang.IllegalAccessException -> L8
                r0.set(r1, r3)     // Catch: java.lang.IllegalAccessException -> L8
                return
            L8:
                r3 = move-exception
                r3.printStackTrace()
                return
        }

        private <T2> com.tkay.expressad.atsignalcommon.b.c.e<C, T2> b(java.lang.Class<T2> r5) {
                r4 = this;
                java.lang.reflect.Field r0 = r4.b
                if (r0 == 0) goto L31
                java.lang.Class r0 = r0.getType()
                boolean r0 = r5.isAssignableFrom(r0)
                if (r0 != 0) goto L31
                com.tkay.expressad.atsignalcommon.b.c$b$a r0 = new com.tkay.expressad.atsignalcommon.b.c$b$a
                java.lang.ClassCastException r1 = new java.lang.ClassCastException
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.reflect.Field r3 = r4.b
                r2.append(r3)
                java.lang.String r3 = " is not of type "
                r2.append(r3)
                r2.append(r5)
                java.lang.String r5 = r2.toString()
                r1.<init>(r5)
                r0.<init>(r1)
                com.tkay.expressad.atsignalcommon.b.c.a(r0)
            L31:
                return r4
        }

        private com.tkay.expressad.atsignalcommon.b.c.e<C, T> b(C r1) {
                r0 = this;
                r0.a = r1
                return r0
        }

        private java.lang.reflect.Field b() {
                r1 = this;
                java.lang.reflect.Field r0 = r1.b
                return r0
        }
    }

    public static class f {
        protected final java.lang.reflect.Method a;

        f(java.lang.Class<?> r4, java.lang.String r5, java.lang.Class<?>[] r6, int r7) {
                r3 = this;
                r3.<init>()
                r0 = 0
                if (r4 != 0) goto L9
                r3.a = r0
                return
            L9:
                java.lang.reflect.Method r0 = r4.getDeclaredMethod(r5, r6)     // Catch: java.lang.Throwable -> L39 java.lang.NoSuchMethodException -> L3b
                if (r7 <= 0) goto L32
                int r6 = r0.getModifiers()     // Catch: java.lang.Throwable -> L39 java.lang.NoSuchMethodException -> L3b
                r6 = r6 & r7
                if (r6 == r7) goto L32
                com.tkay.expressad.atsignalcommon.b.c$b$a r6 = new com.tkay.expressad.atsignalcommon.b.c$b$a     // Catch: java.lang.Throwable -> L39 java.lang.NoSuchMethodException -> L3b
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L39 java.lang.NoSuchMethodException -> L3b
                r1.<init>()     // Catch: java.lang.Throwable -> L39 java.lang.NoSuchMethodException -> L3b
                r1.append(r0)     // Catch: java.lang.Throwable -> L39 java.lang.NoSuchMethodException -> L3b
                java.lang.String r2 = " does not match modifiers: "
                r1.append(r2)     // Catch: java.lang.Throwable -> L39 java.lang.NoSuchMethodException -> L3b
                r1.append(r7)     // Catch: java.lang.Throwable -> L39 java.lang.NoSuchMethodException -> L3b
                java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L39 java.lang.NoSuchMethodException -> L3b
                r6.<init>(r7)     // Catch: java.lang.Throwable -> L39 java.lang.NoSuchMethodException -> L3b
                com.tkay.expressad.atsignalcommon.b.c.a(r6)     // Catch: java.lang.Throwable -> L39 java.lang.NoSuchMethodException -> L3b
            L32:
                r6 = 1
                r0.setAccessible(r6)     // Catch: java.lang.Throwable -> L39 java.lang.NoSuchMethodException -> L3b
                r3.a = r0
                return
            L39:
                r4 = move-exception
                goto L4d
            L3b:
                r6 = move-exception
                com.tkay.expressad.atsignalcommon.b.c$b$a r7 = new com.tkay.expressad.atsignalcommon.b.c$b$a     // Catch: java.lang.Throwable -> L39
                r7.<init>(r6)     // Catch: java.lang.Throwable -> L39
                r7.a(r4)     // Catch: java.lang.Throwable -> L39
                r7.a(r5)     // Catch: java.lang.Throwable -> L39
                com.tkay.expressad.atsignalcommon.b.c.a(r7)     // Catch: java.lang.Throwable -> L39
                r3.a = r0
                return
            L4d:
                r3.a = r0
                throw r4
        }

        public final java.lang.Object a(java.lang.Object r2, java.lang.Object... r3) {
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

    private c() {
            r0 = this;
            r0.<init>()
            return
    }

    private static <T> com.tkay.expressad.atsignalcommon.b.c.c<T> a(java.lang.Class<T> r1) {
            com.tkay.expressad.atsignalcommon.b.c$c r0 = new com.tkay.expressad.atsignalcommon.b.c$c
            r0.<init>(r1)
            return r0
    }

    public static <T> com.tkay.expressad.atsignalcommon.b.c.c<T> a(java.lang.ClassLoader r1, java.lang.String r2) {
            com.tkay.expressad.atsignalcommon.b.c$c r0 = new com.tkay.expressad.atsignalcommon.b.c$c     // Catch: java.lang.Exception -> La
            java.lang.Class r1 = r1.loadClass(r2)     // Catch: java.lang.Exception -> La
            r0.<init>(r1)     // Catch: java.lang.Exception -> La
            return r0
        La:
            r1 = move-exception
            com.tkay.expressad.atsignalcommon.b.c$b$a r2 = new com.tkay.expressad.atsignalcommon.b.c$b$a
            r2.<init>(r1)
            b(r2)
            com.tkay.expressad.atsignalcommon.b.c$c r1 = new com.tkay.expressad.atsignalcommon.b.c$c
            r2 = 0
            r1.<init>(r2)
            return r1
    }

    private static <T> com.tkay.expressad.atsignalcommon.b.c.c<T> a(java.lang.String r1) {
            com.tkay.expressad.atsignalcommon.b.c$c r0 = new com.tkay.expressad.atsignalcommon.b.c$c     // Catch: java.lang.ClassNotFoundException -> La
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> La
            r0.<init>(r1)     // Catch: java.lang.ClassNotFoundException -> La
            return r0
        La:
            r1 = move-exception
            com.tkay.expressad.atsignalcommon.b.c$b$a r0 = new com.tkay.expressad.atsignalcommon.b.c$b$a
            r0.<init>(r1)
            b(r0)
            com.tkay.expressad.atsignalcommon.b.c$c r1 = new com.tkay.expressad.atsignalcommon.b.c$c
            r0 = 0
            r1.<init>(r0)
            return r1
    }

    private static void a(com.tkay.expressad.atsignalcommon.b.c.a r0) {
            com.tkay.expressad.atsignalcommon.b.c.a = r0
            return
    }

    static void a(com.tkay.expressad.atsignalcommon.b.c.b.a r0) {
            b(r0)
            return
    }

    private static void b(com.tkay.expressad.atsignalcommon.b.c.b.a r1) {
            com.tkay.expressad.atsignalcommon.b.c$a r0 = com.tkay.expressad.atsignalcommon.b.c.a
            if (r0 == 0) goto Lb
            boolean r0 = r0.a()
            if (r0 == 0) goto Lb
            return
        Lb:
            throw r1
    }
}
