package com.kwad.sdk.api.loader;

public final class Reflect {
    private final java.lang.Class<?> aiX;
    private final java.lang.Object aiY;

    public static class ReflectException extends java.lang.RuntimeException {
        private static final long serialVersionUID = -6213149635297151442L;

        public ReflectException() {
                r0 = this;
                r0.<init>()
                return
        }

        public ReflectException(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public ReflectException(java.lang.String r1, java.lang.Throwable r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public ReflectException(java.lang.Throwable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    static class a {
        private static final java.lang.reflect.Method aiZ = null;
        private static final java.lang.reflect.Method aja = null;
        private static final java.lang.reflect.Method ajb = null;
        private static final java.lang.reflect.Method ajc = null;
        private static final java.lang.reflect.Method ajd = null;
        private static final java.lang.reflect.Method aje = null;
        private static final java.lang.reflect.Method ajf = null;
        private static final java.lang.reflect.Method ajg = null;
        private static final java.lang.reflect.Method ajh = null;
        private static final java.lang.reflect.Method aji = null;
        private static final java.lang.reflect.Method ajj = null;
        private static final java.lang.reflect.Method ajk = null;
        private static final java.lang.reflect.Method ajl = null;
        private static final java.lang.reflect.Method ajm = null;

        static {
                java.lang.String r0 = "forName"
                java.lang.Class<java.lang.Class> r1 = java.lang.Class.class
                r2 = 1
                java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.String> r4 = java.lang.String.class
                r5 = 0
                r3[r5] = r4     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r1 = r1.getDeclaredMethod(r0, r3)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.aiZ = r1     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r1 = java.lang.Class.class
                r3 = 3
                java.lang.Class[] r3 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.String> r4 = java.lang.String.class
                r3[r5] = r4     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class r4 = java.lang.Boolean.TYPE     // Catch: java.lang.NoSuchMethodException -> Ldb
                r3[r2] = r4     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.ClassLoader> r4 = java.lang.ClassLoader.class
                r6 = 2
                r3[r6] = r4     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r1.getDeclaredMethod(r0, r3)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.aja = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.String r1 = "getDeclaredField"
                java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.String> r4 = java.lang.String.class
                r3[r5] = r4     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.ajb = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.String r1 = "getDeclaredFields"
                java.lang.Class[] r3 = new java.lang.Class[r5]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.ajc = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.String r1 = "getDeclaredMethod"
                java.lang.Class[] r3 = new java.lang.Class[r6]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.String> r4 = java.lang.String.class
                r3[r5] = r4     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class[]> r4 = java.lang.Class[].class
                r3[r2] = r4     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.ajd = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.String r1 = "getDeclaredMethods"
                java.lang.Class[] r3 = new java.lang.Class[r5]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.aje = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.String r1 = "getDeclaredConstructor"
                java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class[]> r4 = java.lang.Class[].class
                r3[r5] = r4     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.ajf = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.String r1 = "getDeclaredConstructors"
                java.lang.Class[] r3 = new java.lang.Class[r5]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.ajg = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.String r1 = "getField"
                java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.String> r4 = java.lang.String.class
                r3[r5] = r4     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.ajh = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.String r1 = "getFields"
                java.lang.Class[] r3 = new java.lang.Class[r5]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.aji = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.String r1 = "getMethod"
                java.lang.Class[] r3 = new java.lang.Class[r6]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.String> r4 = java.lang.String.class
                r3[r5] = r4     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class[]> r4 = java.lang.Class[].class
                r3[r2] = r4     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.ajj = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.String r1 = "getMethods"
                java.lang.Class[] r3 = new java.lang.Class[r5]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.ajk = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.String r1 = "getConstructor"
                java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class[]> r3 = java.lang.Class[].class
                r2[r5] = r3     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r2)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.ajl = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.String r1 = "getConstructors"
                java.lang.Class[] r2 = new java.lang.Class[r5]     // Catch: java.lang.NoSuchMethodException -> Ldb
                java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r2)     // Catch: java.lang.NoSuchMethodException -> Ldb
                com.kwad.sdk.api.loader.Reflect.a.ajm = r0     // Catch: java.lang.NoSuchMethodException -> Ldb
                return
            Ldb:
                r0 = move-exception
                com.kwad.sdk.api.loader.Reflect$ReflectException r1 = new com.kwad.sdk.api.loader.Reflect$ReflectException
                r1.<init>(r0)
                throw r1
        }

        static java.lang.reflect.Constructor a(java.lang.Class r3, java.lang.Class<?>... r4) {
                java.lang.reflect.Method r0 = com.kwad.sdk.api.loader.Reflect.a.ajf     // Catch: java.lang.Exception -> Lf
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> Lf
                r2 = 0
                r1[r2] = r4     // Catch: java.lang.Exception -> Lf
                java.lang.Object r3 = r0.invoke(r3, r1)     // Catch: java.lang.Exception -> Lf
                java.lang.reflect.Constructor r3 = (java.lang.reflect.Constructor) r3     // Catch: java.lang.Exception -> Lf
                return r3
            Lf:
                r3 = move-exception
                java.lang.NoSuchMethodException r4 = new java.lang.NoSuchMethodException
                r4.<init>()
                r4.initCause(r3)
                throw r4
        }

        static java.lang.reflect.Field a(java.lang.Class r3, java.lang.String r4) {
                java.lang.reflect.Method r0 = com.kwad.sdk.api.loader.Reflect.a.ajb     // Catch: java.lang.Exception -> Lf
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> Lf
                r2 = 0
                r1[r2] = r4     // Catch: java.lang.Exception -> Lf
                java.lang.Object r3 = r0.invoke(r3, r1)     // Catch: java.lang.Exception -> Lf
                java.lang.reflect.Field r3 = (java.lang.reflect.Field) r3     // Catch: java.lang.Exception -> Lf
                return r3
            Lf:
                r3 = move-exception
                java.lang.NoSuchFieldException r4 = new java.lang.NoSuchFieldException
                r4.<init>()
                r4.initCause(r3)
                throw r4
        }

        static java.lang.reflect.Field b(java.lang.Class r3, java.lang.String r4) {
                java.lang.reflect.Method r0 = com.kwad.sdk.api.loader.Reflect.a.ajh     // Catch: java.lang.Exception -> Lf
                r1 = 1
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> Lf
                r2 = 0
                r1[r2] = r4     // Catch: java.lang.Exception -> Lf
                java.lang.Object r3 = r0.invoke(r3, r1)     // Catch: java.lang.Exception -> Lf
                java.lang.reflect.Field r3 = (java.lang.reflect.Field) r3     // Catch: java.lang.Exception -> Lf
                return r3
            Lf:
                r3 = move-exception
                java.lang.NoSuchFieldException r4 = new java.lang.NoSuchFieldException
                r4.<init>()
                r4.initCause(r3)
                throw r4
        }

        static java.lang.reflect.Method c(java.lang.Class r3, java.lang.String r4, java.lang.Class<?>... r5) {
                java.lang.reflect.Method r0 = com.kwad.sdk.api.loader.Reflect.a.ajd     // Catch: java.lang.Exception -> L12
                r1 = 2
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L12
                r2 = 0
                r1[r2] = r4     // Catch: java.lang.Exception -> L12
                r4 = 1
                r1[r4] = r5     // Catch: java.lang.Exception -> L12
                java.lang.Object r3 = r0.invoke(r3, r1)     // Catch: java.lang.Exception -> L12
                java.lang.reflect.Method r3 = (java.lang.reflect.Method) r3     // Catch: java.lang.Exception -> L12
                return r3
            L12:
                r3 = move-exception
                java.lang.NoSuchMethodException r4 = new java.lang.NoSuchMethodException
                r4.<init>()
                r4.initCause(r3)
                throw r4
        }

        static java.lang.reflect.Method[] c(java.lang.Class r2) {
                java.lang.reflect.Method r0 = com.kwad.sdk.api.loader.Reflect.a.aje     // Catch: java.lang.Exception -> Le
                r1 = 0
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> Le
                java.lang.Object r2 = r0.invoke(r2, r1)     // Catch: java.lang.Exception -> Le
                java.lang.reflect.Method[] r2 = (java.lang.reflect.Method[]) r2     // Catch: java.lang.Exception -> Le
                java.lang.reflect.Method[] r2 = (java.lang.reflect.Method[]) r2     // Catch: java.lang.Exception -> Le
                return r2
            Le:
                r2 = move-exception
                com.kwad.sdk.api.loader.Reflect$ReflectException r0 = new com.kwad.sdk.api.loader.Reflect$ReflectException
                r0.<init>(r2)
                throw r0
        }

        static java.lang.reflect.Method d(java.lang.Class r3, java.lang.String r4, java.lang.Class<?>... r5) {
                java.lang.reflect.Method r0 = com.kwad.sdk.api.loader.Reflect.a.ajj     // Catch: java.lang.Exception -> L12
                r1 = 2
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L12
                r2 = 0
                r1[r2] = r4     // Catch: java.lang.Exception -> L12
                r4 = 1
                r1[r4] = r5     // Catch: java.lang.Exception -> L12
                java.lang.Object r3 = r0.invoke(r3, r1)     // Catch: java.lang.Exception -> L12
                java.lang.reflect.Method r3 = (java.lang.reflect.Method) r3     // Catch: java.lang.Exception -> L12
                return r3
            L12:
                r3 = move-exception
                java.lang.NoSuchMethodException r4 = new java.lang.NoSuchMethodException
                r4.<init>()
                r4.initCause(r3)
                throw r4
        }

        static java.lang.reflect.Method[] d(java.lang.Class r2) {
                java.lang.reflect.Method r0 = com.kwad.sdk.api.loader.Reflect.a.ajk     // Catch: java.lang.Exception -> Le
                r1 = 0
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> Le
                java.lang.Object r2 = r0.invoke(r2, r1)     // Catch: java.lang.Exception -> Le
                java.lang.reflect.Method[] r2 = (java.lang.reflect.Method[]) r2     // Catch: java.lang.Exception -> Le
                java.lang.reflect.Method[] r2 = (java.lang.reflect.Method[]) r2     // Catch: java.lang.Exception -> Le
                return r2
            Le:
                r2 = move-exception
                com.kwad.sdk.api.loader.Reflect$ReflectException r0 = new com.kwad.sdk.api.loader.Reflect$ReflectException
                r0.<init>(r2)
                throw r0
        }

        static java.lang.reflect.Constructor[] e(java.lang.Class r2) {
                java.lang.reflect.Method r0 = com.kwad.sdk.api.loader.Reflect.a.ajg     // Catch: java.lang.Exception -> Le
                r1 = 0
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> Le
                java.lang.Object r2 = r0.invoke(r2, r1)     // Catch: java.lang.Exception -> Le
                java.lang.reflect.Constructor[] r2 = (java.lang.reflect.Constructor[]) r2     // Catch: java.lang.Exception -> Le
                java.lang.reflect.Constructor[] r2 = (java.lang.reflect.Constructor[]) r2     // Catch: java.lang.Exception -> Le
                return r2
            Le:
                r2 = move-exception
                com.kwad.sdk.api.loader.Reflect$ReflectException r0 = new com.kwad.sdk.api.loader.Reflect$ReflectException
                r0.<init>(r2)
                throw r0
        }

        static java.lang.Class forName(java.lang.String r4) {
                java.lang.reflect.Method r0 = com.kwad.sdk.api.loader.Reflect.a.aiZ     // Catch: java.lang.Exception -> L10
                r1 = 0
                r2 = 1
                java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L10
                r3 = 0
                r2[r3] = r4     // Catch: java.lang.Exception -> L10
                java.lang.Object r4 = r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L10
                java.lang.Class r4 = (java.lang.Class) r4     // Catch: java.lang.Exception -> L10
                return r4
            L10:
                r4 = move-exception
                java.lang.ClassNotFoundException r0 = new java.lang.ClassNotFoundException
                r0.<init>()
                r0.initCause(r4)
                throw r0
        }
    }

    static class b {
        private b() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private Reflect(java.lang.Class<?> r1) {
            r0 = this;
            r0.<init>(r1, r1)
            return
    }

    private Reflect(java.lang.Class<?> r1, java.lang.Object r2) {
            r0 = this;
            r0.<init>()
            r0.aiX = r1
            r0.aiY = r2
            return
    }

    public static com.kwad.sdk.api.loader.Reflect a(java.lang.Class<?> r1) {
            com.kwad.sdk.api.loader.Reflect r0 = new com.kwad.sdk.api.loader.Reflect
            r0.<init>(r1)
            return r0
    }

    private static com.kwad.sdk.api.loader.Reflect a(java.lang.Class<?> r1, java.lang.Object r2) {
            com.kwad.sdk.api.loader.Reflect r0 = new com.kwad.sdk.api.loader.Reflect
            r0.<init>(r1, r2)
            return r0
    }

    private static com.kwad.sdk.api.loader.Reflect a(java.lang.reflect.Constructor<?> r1, java.lang.Object... r2) {
            java.lang.Class r0 = r1.getDeclaringClass()     // Catch: java.lang.Exception -> L13
            java.lang.reflect.AccessibleObject r1 = a(r1)     // Catch: java.lang.Exception -> L13
            java.lang.reflect.Constructor r1 = (java.lang.reflect.Constructor) r1     // Catch: java.lang.Exception -> L13
            java.lang.Object r1 = r1.newInstance(r2)     // Catch: java.lang.Exception -> L13
            com.kwad.sdk.api.loader.Reflect r1 = a(r0, r1)     // Catch: java.lang.Exception -> L13
            return r1
        L13:
            r1 = move-exception
            com.kwad.sdk.api.loader.Reflect$ReflectException r2 = new com.kwad.sdk.api.loader.Reflect$ReflectException
            r2.<init>(r1)
            throw r2
    }

    private static com.kwad.sdk.api.loader.Reflect a(java.lang.reflect.Method r2, java.lang.Object r3, java.lang.Object... r4) {
            a(r2)     // Catch: java.lang.Exception -> L1c
            java.lang.Class r0 = r2.getReturnType()     // Catch: java.lang.Exception -> L1c
            java.lang.Class r1 = java.lang.Void.TYPE     // Catch: java.lang.Exception -> L1c
            if (r0 != r1) goto L13
            r2.invoke(r3, r4)     // Catch: java.lang.Exception -> L1c
            com.kwad.sdk.api.loader.Reflect r2 = h(r3)     // Catch: java.lang.Exception -> L1c
            return r2
        L13:
            java.lang.Object r2 = r2.invoke(r3, r4)     // Catch: java.lang.Exception -> L1c
            com.kwad.sdk.api.loader.Reflect r2 = h(r2)     // Catch: java.lang.Exception -> L1c
            return r2
        L1c:
            r2 = move-exception
            com.kwad.sdk.api.loader.Reflect$ReflectException r3 = new com.kwad.sdk.api.loader.Reflect$ReflectException
            r3.<init>(r2)
            throw r3
    }

    private com.kwad.sdk.api.loader.Reflect a(java.lang.Object... r2) {
            r1 = this;
            java.lang.Class[] r0 = b(r2)
            com.kwad.sdk.api.loader.Reflect r2 = r1.a(r0, r2)
            return r2
    }

    private static <T extends java.lang.reflect.AccessibleObject> T a(T r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            boolean r0 = r2 instanceof java.lang.reflect.Member
            if (r0 == 0) goto L24
            r0 = r2
            java.lang.reflect.Member r0 = (java.lang.reflect.Member) r0
            int r1 = r0.getModifiers()
            boolean r1 = java.lang.reflect.Modifier.isPublic(r1)
            if (r1 == 0) goto L24
            java.lang.Class r0 = r0.getDeclaringClass()
            int r0 = r0.getModifiers()
            boolean r0 = java.lang.reflect.Modifier.isPublic(r0)
            if (r0 == 0) goto L24
            return r2
        L24:
            boolean r0 = r2.isAccessible()
            if (r0 != 0) goto L2e
            r0 = 1
            r2.setAccessible(r0)
        L2e:
            return r2
    }

    private java.lang.reflect.Method a(java.lang.String r2, java.lang.Class<?>[] r3) {
            r1 = this;
            java.lang.Class r0 = r1.type()
            java.lang.reflect.Method r2 = com.kwad.sdk.api.loader.Reflect.a.d(r0, r2, r3)     // Catch: java.lang.NoSuchMethodException -> L9
            return r2
        L9:
            java.lang.reflect.Method r2 = com.kwad.sdk.api.loader.Reflect.a.c(r0, r2, r3)     // Catch: java.lang.NoSuchMethodException -> Le
            return r2
        Le:
            java.lang.Class r0 = r0.getSuperclass()
            if (r0 == 0) goto L15
            goto L9
        L15:
            java.lang.NoSuchMethodException r2 = new java.lang.NoSuchMethodException
            r2.<init>()
            throw r2
    }

    private boolean a(java.lang.reflect.Method r2, java.lang.String r3, java.lang.Class<?>[] r4) {
            r1 = this;
            java.lang.String r0 = r2.getName()
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L16
            java.lang.Class[] r2 = r2.getParameterTypes()
            boolean r2 = a(r2, r4)
            if (r2 == 0) goto L16
            r2 = 1
            return r2
        L16:
            r2 = 0
            return r2
    }

    private static boolean a(java.lang.Class<?>[] r4, java.lang.Class<?>[] r5) {
            int r0 = r4.length
            int r1 = r5.length
            r2 = 0
            if (r0 != r1) goto L27
            r0 = r2
        L6:
            int r1 = r5.length
            if (r0 >= r1) goto L25
            r1 = r5[r0]
            java.lang.Class<com.kwad.sdk.api.loader.Reflect$b> r3 = com.kwad.sdk.api.loader.Reflect.b.class
            if (r1 == r3) goto L22
            r1 = r4[r0]
            java.lang.Class r1 = b(r1)
            r3 = r5[r0]
            java.lang.Class r3 = b(r3)
            boolean r1 = r1.isAssignableFrom(r3)
            if (r1 != 0) goto L22
            return r2
        L22:
            int r0 = r0 + 1
            goto L6
        L25:
            r4 = 1
            return r4
        L27:
            return r2
    }

    private static java.lang.Class<?> b(java.lang.Class<?> r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            boolean r0 = r1.isPrimitive()
            if (r0 == 0) goto L48
            java.lang.Class r0 = java.lang.Boolean.TYPE
            if (r0 != r1) goto L11
            java.lang.Class<java.lang.Boolean> r1 = java.lang.Boolean.class
            return r1
        L11:
            java.lang.Class r0 = java.lang.Integer.TYPE
            if (r0 != r1) goto L18
            java.lang.Class<java.lang.Integer> r1 = java.lang.Integer.class
            return r1
        L18:
            java.lang.Class r0 = java.lang.Long.TYPE
            if (r0 != r1) goto L1f
            java.lang.Class<java.lang.Long> r1 = java.lang.Long.class
            return r1
        L1f:
            java.lang.Class r0 = java.lang.Short.TYPE
            if (r0 != r1) goto L26
            java.lang.Class<java.lang.Short> r1 = java.lang.Short.class
            return r1
        L26:
            java.lang.Class r0 = java.lang.Byte.TYPE
            if (r0 != r1) goto L2d
            java.lang.Class<java.lang.Byte> r1 = java.lang.Byte.class
            return r1
        L2d:
            java.lang.Class r0 = java.lang.Double.TYPE
            if (r0 != r1) goto L34
            java.lang.Class<java.lang.Double> r1 = java.lang.Double.class
            return r1
        L34:
            java.lang.Class r0 = java.lang.Float.TYPE
            if (r0 != r1) goto L3b
            java.lang.Class<java.lang.Float> r1 = java.lang.Float.class
            return r1
        L3b:
            java.lang.Class r0 = java.lang.Character.TYPE
            if (r0 != r1) goto L42
            java.lang.Class<java.lang.Character> r1 = java.lang.Character.class
            return r1
        L42:
            java.lang.Class r0 = java.lang.Void.TYPE
            if (r0 != r1) goto L48
            java.lang.Class<java.lang.Void> r1 = java.lang.Void.class
        L48:
            return r1
    }

    private java.lang.reflect.Method b(java.lang.String r8, java.lang.Class<?>[] r9) {
            r7 = this;
            java.lang.Class r0 = r7.type()
            java.lang.reflect.Method[] r1 = com.kwad.sdk.api.loader.Reflect.a.d(r0)
            int r2 = r1.length
            r3 = 0
            r4 = r3
        Lb:
            if (r4 >= r2) goto L19
            r5 = r1[r4]
            boolean r6 = r7.a(r5, r8, r9)
            if (r6 == 0) goto L16
            return r5
        L16:
            int r4 = r4 + 1
            goto Lb
        L19:
            java.lang.reflect.Method[] r1 = com.kwad.sdk.api.loader.Reflect.a.c(r0)
            int r2 = r1.length
            r4 = r3
        L1f:
            if (r4 >= r2) goto L2d
            r5 = r1[r4]
            boolean r6 = r7.a(r5, r8, r9)
            if (r6 == 0) goto L2a
            return r5
        L2a:
            int r4 = r4 + 1
            goto L1f
        L2d:
            java.lang.Class r0 = r0.getSuperclass()
            if (r0 == 0) goto L34
            goto L19
        L34:
            java.lang.NoSuchMethodException r0 = new java.lang.NoSuchMethodException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "No similar method "
            r1.<init>(r2)
            r1.append(r8)
            java.lang.String r8 = " with params "
            r1.append(r8)
            java.lang.String r8 = java.util.Arrays.toString(r9)
            r1.append(r8)
            java.lang.String r8 = " could be found on type "
            r1.append(r8)
            java.lang.Class r8 = r7.type()
            r1.append(r8)
            java.lang.String r8 = "."
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            r0.<init>(r8)
            throw r0
    }

    private static java.lang.Class<?>[] b(java.lang.Object... r3) {
            r0 = 0
            if (r3 != 0) goto L6
            java.lang.Class[] r3 = new java.lang.Class[r0]
            return r3
        L6:
            int r1 = r3.length
            java.lang.Class[] r1 = new java.lang.Class[r1]
        L9:
            int r2 = r3.length
            if (r0 >= r2) goto L1c
            r2 = r3[r0]
            if (r2 != 0) goto L13
            java.lang.Class<com.kwad.sdk.api.loader.Reflect$b> r2 = com.kwad.sdk.api.loader.Reflect.b.class
            goto L17
        L13:
            java.lang.Class r2 = r2.getClass()
        L17:
            r1[r0] = r2
            int r0 = r0 + 1
            goto L9
        L1c:
            return r1
    }

    public static com.kwad.sdk.api.loader.Reflect ca(java.lang.String r0) {
            java.lang.Class r0 = forName(r0)
            com.kwad.sdk.api.loader.Reflect r0 = a(r0)
            return r0
    }

    private com.kwad.sdk.api.loader.Reflect cb(java.lang.String r3) {
            r2 = this;
            java.lang.reflect.Field r3 = r2.cc(r3)     // Catch: java.lang.Exception -> L13
            java.lang.Class r0 = r3.getType()     // Catch: java.lang.Exception -> L13
            java.lang.Object r1 = r2.aiY     // Catch: java.lang.Exception -> L13
            java.lang.Object r3 = r3.get(r1)     // Catch: java.lang.Exception -> L13
            com.kwad.sdk.api.loader.Reflect r3 = a(r0, r3)     // Catch: java.lang.Exception -> L13
            return r3
        L13:
            r3 = move-exception
            com.kwad.sdk.api.loader.Reflect$ReflectException r0 = new com.kwad.sdk.api.loader.Reflect$ReflectException
            r0.<init>(r3)
            throw r0
    }

    private java.lang.reflect.Field cc(java.lang.String r4) {
            r3 = this;
            java.lang.Class r0 = r3.type()
            java.lang.reflect.Field r1 = com.kwad.sdk.api.loader.Reflect.a.b(r0, r4)     // Catch: java.lang.NoSuchFieldException -> Lf
            java.lang.reflect.AccessibleObject r1 = a(r1)     // Catch: java.lang.NoSuchFieldException -> Lf
            java.lang.reflect.Field r1 = (java.lang.reflect.Field) r1     // Catch: java.lang.NoSuchFieldException -> Lf
            return r1
        Lf:
            r1 = move-exception
        L10:
            java.lang.reflect.Field r2 = com.kwad.sdk.api.loader.Reflect.a.a(r0, r4)     // Catch: java.lang.NoSuchFieldException -> L1b
            java.lang.reflect.AccessibleObject r2 = a(r2)     // Catch: java.lang.NoSuchFieldException -> L1b
            java.lang.reflect.Field r2 = (java.lang.reflect.Field) r2     // Catch: java.lang.NoSuchFieldException -> L1b
            return r2
        L1b:
            java.lang.Class r0 = r0.getSuperclass()
            if (r0 == 0) goto L22
            goto L10
        L22:
            com.kwad.sdk.api.loader.Reflect$ReflectException r4 = new com.kwad.sdk.api.loader.Reflect$ReflectException
            r4.<init>(r1)
            throw r4
    }

    private com.kwad.sdk.api.loader.Reflect f(java.lang.String r2, java.lang.Object... r3) {
            r1 = this;
            java.lang.Class[] r0 = b(r3)
            com.kwad.sdk.api.loader.Reflect r2 = r1.a(r2, r0, r3)
            return r2
    }

    private static java.lang.Class<?> forName(java.lang.String r1) {
            java.lang.Class r1 = com.kwad.sdk.api.loader.Reflect.a.forName(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = move-exception
            com.kwad.sdk.api.loader.Reflect$ReflectException r0 = new com.kwad.sdk.api.loader.Reflect$ReflectException
            r0.<init>(r1)
            throw r0
    }

    public static com.kwad.sdk.api.loader.Reflect h(java.lang.Object r2) {
            com.kwad.sdk.api.loader.Reflect r0 = new com.kwad.sdk.api.loader.Reflect
            if (r2 != 0) goto L7
            java.lang.Class<java.lang.Object> r1 = java.lang.Object.class
            goto Lb
        L7:
            java.lang.Class r1 = r2.getClass()
        Lb:
            r0.<init>(r1, r2)
            return r0
    }

    private static java.lang.Object i(java.lang.Object r1) {
            boolean r0 = r1 instanceof com.kwad.sdk.api.loader.Reflect
            if (r0 == 0) goto La
            com.kwad.sdk.api.loader.Reflect r1 = (com.kwad.sdk.api.loader.Reflect) r1
            java.lang.Object r1 = r1.get()
        La:
            return r1
    }

    private java.lang.Class<?> type() {
            r1 = this;
            java.lang.Class<?> r0 = r1.aiX
            return r0
    }

    public final com.kwad.sdk.api.loader.Reflect a(java.lang.String r3, java.lang.Class<?>[] r4, java.lang.Object... r5) {
            r2 = this;
            java.lang.reflect.Method r0 = r2.a(r3, r4)     // Catch: java.lang.NoSuchMethodException -> Lb
            java.lang.Object r1 = r2.aiY     // Catch: java.lang.NoSuchMethodException -> Lb
            com.kwad.sdk.api.loader.Reflect r3 = a(r0, r1, r5)     // Catch: java.lang.NoSuchMethodException -> Lb
            return r3
        Lb:
            java.lang.reflect.Method r3 = r2.b(r3, r4)     // Catch: java.lang.NoSuchMethodException -> L16
            java.lang.Object r4 = r2.aiY     // Catch: java.lang.NoSuchMethodException -> L16
            com.kwad.sdk.api.loader.Reflect r3 = a(r3, r4, r5)     // Catch: java.lang.NoSuchMethodException -> L16
            return r3
        L16:
            r3 = move-exception
            com.kwad.sdk.api.loader.Reflect$ReflectException r4 = new com.kwad.sdk.api.loader.Reflect$ReflectException
            r4.<init>(r3)
            throw r4
    }

    public final com.kwad.sdk.api.loader.Reflect a(java.lang.Class<?>[] r7, java.lang.Object... r8) {
            r6 = this;
            java.lang.Class r0 = r6.type()     // Catch: java.lang.NoSuchMethodException -> Ld
            java.lang.reflect.Constructor r0 = com.kwad.sdk.api.loader.Reflect.a.a(r0, r7)     // Catch: java.lang.NoSuchMethodException -> Ld
            com.kwad.sdk.api.loader.Reflect r7 = a(r0, r8)     // Catch: java.lang.NoSuchMethodException -> Ld
            return r7
        Ld:
            r0 = move-exception
            java.lang.Class r1 = r6.type()
            java.lang.reflect.Constructor[] r1 = com.kwad.sdk.api.loader.Reflect.a.e(r1)
            int r2 = r1.length
            r3 = 0
        L18:
            if (r3 >= r2) goto L2e
            r4 = r1[r3]
            java.lang.Class[] r5 = r4.getParameterTypes()
            boolean r5 = a(r5, r7)
            if (r5 == 0) goto L2b
            com.kwad.sdk.api.loader.Reflect r7 = a(r4, r8)
            return r7
        L2b:
            int r3 = r3 + 1
            goto L18
        L2e:
            com.kwad.sdk.api.loader.Reflect$ReflectException r7 = new com.kwad.sdk.api.loader.Reflect$ReflectException
            r7.<init>(r0)
            throw r7
    }

    public final com.kwad.sdk.api.loader.Reflect b(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            java.lang.reflect.Field r3 = r2.cc(r3)     // Catch: java.lang.Exception -> L2c
            int r0 = r3.getModifiers()     // Catch: java.lang.Exception -> L2c
            r1 = 16
            r0 = r0 & r1
            if (r0 != r1) goto L22
            java.lang.Class<java.lang.reflect.Field> r0 = java.lang.reflect.Field.class
            java.lang.String r1 = "modifiers"
            java.lang.reflect.Field r0 = com.kwad.sdk.api.loader.Reflect.a.a(r0, r1)     // Catch: java.lang.NoSuchFieldException -> L22 java.lang.Exception -> L2c
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.NoSuchFieldException -> L22 java.lang.Exception -> L2c
            int r1 = r3.getModifiers()     // Catch: java.lang.NoSuchFieldException -> L22 java.lang.Exception -> L2c
            r1 = r1 & (-17)
            r0.setInt(r3, r1)     // Catch: java.lang.NoSuchFieldException -> L22 java.lang.Exception -> L2c
        L22:
            java.lang.Object r0 = r2.aiY     // Catch: java.lang.Exception -> L2c
            java.lang.Object r4 = i(r4)     // Catch: java.lang.Exception -> L2c
            r3.set(r0, r4)     // Catch: java.lang.Exception -> L2c
            return r2
        L2c:
            r3 = move-exception
            com.kwad.sdk.api.loader.Reflect$ReflectException r4 = new com.kwad.sdk.api.loader.Reflect$ReflectException
            r4.<init>(r3)
            throw r4
    }

    public final com.kwad.sdk.api.loader.Reflect cd(java.lang.String r2) {
            r1 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.kwad.sdk.api.loader.Reflect r2 = r1.f(r2, r0)
            return r2
    }

    public final boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.kwad.sdk.api.loader.Reflect
            if (r0 == 0) goto L11
            java.lang.Object r0 = r1.aiY
            com.kwad.sdk.api.loader.Reflect r2 = (com.kwad.sdk.api.loader.Reflect) r2
            java.lang.Object r2 = r2.get()
            boolean r2 = r0.equals(r2)
            return r2
        L11:
            r2 = 0
            return r2
    }

    public final <T> T get() {
            r1 = this;
            java.lang.Object r0 = r1.aiY
            return r0
    }

    public final <T> T get(java.lang.String r1) {
            r0 = this;
            com.kwad.sdk.api.loader.Reflect r1 = r0.cb(r1)
            java.lang.Object r1 = r1.get()
            return r1
    }

    public final int hashCode() {
            r1 = this;
            java.lang.Object r0 = r1.aiY
            int r0 = r0.hashCode()
            return r0
    }

    public final java.lang.String toString() {
            r1 = this;
            java.lang.Object r0 = r1.aiY
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public final com.kwad.sdk.api.loader.Reflect yx() {
            r1 = this;
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.kwad.sdk.api.loader.Reflect r0 = r1.a(r0)
            return r0
    }
}
