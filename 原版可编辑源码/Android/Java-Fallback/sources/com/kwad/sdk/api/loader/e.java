package com.kwad.sdk.api.loader;

final class e {
    private static final java.util.List<java.lang.String> aim = null;

    static class a extends dalvik.system.DexClassLoader {
        private final java.lang.ClassLoader ain;

        public a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.ClassLoader r4) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4)
                r0.ain = r4
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "pcl"
                r1.<init>(r2)
                java.lang.ClassLoader r2 = r0.ain
                java.lang.Class r2 = r2.getClass()
                java.lang.String r2 = r2.getName()
                r1.append(r2)
                return
        }

        private static boolean bV(java.lang.String r1) {
                boolean r0 = android.text.TextUtils.isEmpty(r1)
                if (r0 != 0) goto L10
                java.lang.String r0 = "com.kwad.sdk.api"
                boolean r1 = r1.startsWith(r0)
                if (r1 == 0) goto L10
                r1 = 1
                return r1
            L10:
                r1 = 0
                return r1
        }

        @Override
        protected final java.lang.Class<?> loadClass(java.lang.String r2, boolean r3) {
                r1 = this;
                boolean r0 = bV(r2)
                if (r0 == 0) goto Lf
                java.lang.ClassLoader r3 = r1.getParent()
                java.lang.Class r2 = r3.loadClass(r2)
                return r2
            Lf:
                java.lang.Class r0 = r1.findLoadedClass(r2)
                if (r0 == 0) goto L16
                return r0
            L16:
                java.lang.Class r0 = r1.findClass(r2)     // Catch: java.lang.ClassNotFoundException -> L1a
            L1a:
                if (r0 == 0) goto L1d
                return r0
            L1d:
                java.lang.Class r2 = super.loadClass(r2, r3)
                return r2
        }
    }

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.api.loader.e.aim = r0
            java.lang.String r1 = "com.kwad.sdk"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = com.kwad.sdk.api.loader.e.aim
            java.lang.String r1 = "com.ksad"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = com.kwad.sdk.api.loader.e.aim
            java.lang.String r1 = "com.kwai"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = com.kwad.sdk.api.loader.e.aim
            java.lang.String r1 = "kwad.support"
            r0.add(r1)
            java.util.List<java.lang.String> r0 = com.kwad.sdk.api.loader.e.aim
            java.lang.String r1 = "android.support.rastermill"
            r0.add(r1)
            return
    }

    static java.lang.ClassLoader a(android.content.Context r2, java.lang.ClassLoader r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = "useContextClassLoader"
            r1 = 0
            boolean r0 = com.kwad.sdk.api.loader.t.b(r2, r0, r1)
            if (r0 == 0) goto Ld
            java.lang.ClassLoader r3 = r2.getClassLoader()
        Ld:
            com.kwad.sdk.api.loader.e$a r2 = new com.kwad.sdk.api.loader.e$a
            r2.<init>(r4, r5, r6, r3)
            return r2
    }
}
