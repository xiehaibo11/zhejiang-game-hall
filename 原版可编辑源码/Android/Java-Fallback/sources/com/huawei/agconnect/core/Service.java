package com.huawei.agconnect.core;

public class Service {
    private final java.lang.Class<?> a;
    private final java.lang.Class<?> b;
    private final java.lang.Object c;
    private boolean d;

    static class 1 {
    }

    public static class Builder {
        java.lang.Class<?> a;
        java.lang.Class<?> b;
        java.lang.Object c;
        private boolean d;

        public Builder() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.huawei.agconnect.core.Service build() {
                r4 = this;
                java.lang.Class<?> r0 = r4.a
                if (r0 == 0) goto L48
                java.lang.Class<?> r0 = r4.b
                r1 = 0
                if (r0 == 0) goto L32
                boolean r0 = r0.isInterface()
                if (r0 != 0) goto L2a
                java.lang.Class<?> r0 = r4.b
                int r0 = r0.getModifiers()
                boolean r0 = java.lang.reflect.Modifier.isPublic(r0)
                if (r0 == 0) goto L2a
                com.huawei.agconnect.core.Service r0 = new com.huawei.agconnect.core.Service
                java.lang.Class<?> r2 = r4.a
                java.lang.Class<?> r3 = r4.b
                r0.<init>(r2, r3, r1)
            L24:
                boolean r1 = r4.d
                com.huawei.agconnect.core.Service.a(r0, r1)
                return r0
            L2a:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "the clazz parameter cant be interface type or not public"
                r0.<init>(r1)
                throw r0
            L32:
                java.lang.Object r0 = r4.c
                if (r0 == 0) goto L40
                com.huawei.agconnect.core.Service r0 = new com.huawei.agconnect.core.Service
                java.lang.Class<?> r2 = r4.a
                java.lang.Object r3 = r4.c
                r0.<init>(r2, r3, r1)
                goto L24
            L40:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "the clazz or object parameter must set one"
                r0.<init>(r1)
                throw r0
            L48:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "the interface parameter cannot be NULL"
                r0.<init>(r1)
                throw r0
        }

        public com.huawei.agconnect.core.Service.Builder isSingleton(boolean r1) {
                r0 = this;
                r0.d = r1
                return r0
        }

        public com.huawei.agconnect.core.Service.Builder setClass(java.lang.Class<?> r1) {
                r0 = this;
                r0.b = r1
                return r0
        }

        public com.huawei.agconnect.core.Service.Builder setInterface(java.lang.Class<?> r1) {
                r0 = this;
                r0.a = r1
                return r0
        }

        public com.huawei.agconnect.core.Service.Builder setObject(java.lang.Object r1) {
                r0 = this;
                r0.c = r1
                return r0
        }
    }

    private Service(java.lang.Class<?> r1, java.lang.Class<?> r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r1 = 0
            r0.c = r1
            return
    }

    Service(java.lang.Class r1, java.lang.Class r2, com.huawei.agconnect.core.Service.1 r3) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private Service(java.lang.Class<?> r1, java.lang.Object r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r1 = 0
            r0.b = r1
            r0.c = r2
            return
    }

    Service(java.lang.Class r1, java.lang.Object r2, com.huawei.agconnect.core.Service.1 r3) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    static boolean a(com.huawei.agconnect.core.Service r0, boolean r1) {
            r0.d = r1
            return r1
    }

    public static com.huawei.agconnect.core.Service.Builder builder(java.lang.Class<?> r2) {
            com.huawei.agconnect.core.Service$Builder r0 = new com.huawei.agconnect.core.Service$Builder
            r0.<init>()
            com.huawei.agconnect.core.Service$Builder r0 = r0.setInterface(r2)
            com.huawei.agconnect.core.Service$Builder r0 = r0.setClass(r2)
            java.lang.Class<com.huawei.agconnect.annotation.Singleton> r1 = com.huawei.agconnect.annotation.Singleton.class
            boolean r2 = r2.isAnnotationPresent(r1)
            com.huawei.agconnect.core.Service$Builder r2 = r0.isSingleton(r2)
            return r2
    }

    public static com.huawei.agconnect.core.Service.Builder builder(java.lang.Class<?> r1, java.lang.Class<?> r2) {
            com.huawei.agconnect.core.Service$Builder r0 = new com.huawei.agconnect.core.Service$Builder
            r0.<init>()
            com.huawei.agconnect.core.Service$Builder r1 = r0.setInterface(r1)
            com.huawei.agconnect.core.Service$Builder r1 = r1.setClass(r2)
            java.lang.Class<com.huawei.agconnect.annotation.Singleton> r0 = com.huawei.agconnect.annotation.Singleton.class
            boolean r2 = r2.isAnnotationPresent(r0)
            com.huawei.agconnect.core.Service$Builder r1 = r1.isSingleton(r2)
            return r1
    }

    public static com.huawei.agconnect.core.Service.Builder builder(java.lang.Class<?> r1, java.lang.Object r2) {
            com.huawei.agconnect.core.Service$Builder r0 = new com.huawei.agconnect.core.Service$Builder
            r0.<init>()
            com.huawei.agconnect.core.Service$Builder r1 = r0.setInterface(r1)
            com.huawei.agconnect.core.Service$Builder r1 = r1.setObject(r2)
            r2 = 1
            com.huawei.agconnect.core.Service$Builder r1 = r1.isSingleton(r2)
            return r1
    }

    public java.lang.Object getInstance() {
            r1 = this;
            java.lang.Object r0 = r1.c
            return r0
    }

    public java.lang.Class<?> getInterface() {
            r1 = this;
            java.lang.Class<?> r0 = r1.a
            return r0
    }

    public java.lang.Class<?> getType() {
            r1 = this;
            java.lang.Class<?> r0 = r1.b
            return r0
    }

    public boolean isSingleton() {
            r1 = this;
            boolean r0 = r1.d
            return r0
    }
}
