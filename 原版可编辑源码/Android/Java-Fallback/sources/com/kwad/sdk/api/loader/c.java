package com.kwad.sdk.api.loader;

public final class c {

    static class a extends android.app.Application {
        private final android.content.Context aig;

        a(android.content.Context r1) {
                r0 = this;
                r0.<init>()
                r0.aig = r1
                return
        }

        @Override
        public final android.content.Context getApplicationContext() {
                r1 = this;
                android.content.Context r0 = r1.aig
                return r0
        }

        @Override
        public final android.content.pm.ApplicationInfo getApplicationInfo() {
                r1 = this;
                android.content.Context r0 = r1.aig
                android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo()
                return r0
        }
    }

    public static android.content.Context aw(android.content.Context r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            android.content.Context r0 = r2.getApplicationContext()
            if (r0 != 0) goto Lb
            return r2
        Lb:
            java.lang.ClassLoader r0 = r0.getClassLoader()
            java.lang.ClassLoader r1 = r2.getClassLoader()
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1f
            com.kwad.sdk.api.loader.c$a r0 = new com.kwad.sdk.api.loader.c$a
            r0.<init>(r2)
            return r0
        L1f:
            android.content.Context r2 = r2.getApplicationContext()
            return r2
    }
}
