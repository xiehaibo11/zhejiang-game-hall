package com.kwad.sdk.core.diskcache;

public class a {



    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void aS(android.content.Context r3) {
            com.kwad.sdk.core.diskcache.a$1 r0 = new com.kwad.sdk.core.diskcache.a$1
            r0.<init>(r3)
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.SECONDS
            r1 = 10
            com.kwad.sdk.utils.g.schedule(r0, r1, r3)
            return
    }

    private static android.content.pm.PackageInfo b(android.content.Context r4, java.io.File r5) {
            r0 = 0
            if (r5 == 0) goto L33
            boolean r1 = r5.exists()
            if (r1 != 0) goto La
            goto L33
        La:
            boolean r1 = r5.exists()     // Catch: java.lang.Exception -> L2f
            boolean r2 = r5.isDirectory()     // Catch: java.lang.Exception -> L2f
            r3 = 1
            r2 = r2 ^ r3
            r1 = r1 & r2
            if (r1 == 0) goto L33
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: java.lang.Exception -> L2f
            java.lang.String r5 = r5.getPath()     // Catch: java.lang.Exception -> L2f
            r1 = 65
            android.content.pm.PackageInfo r5 = r4.getPackageArchiveInfo(r5, r1)     // Catch: java.lang.Exception -> L2f
            java.lang.String r1 = r5.packageName     // Catch: java.lang.Exception -> L2f
            android.content.pm.PackageInfo r4 = r4.getPackageInfo(r1, r3)     // Catch: java.lang.Exception -> L2e
            if (r4 == 0) goto L2e
            return r0
        L2e:
            return r5
        L2f:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
        L33:
            return r0
    }

    static android.content.pm.PackageInfo c(android.content.Context r0, java.io.File r1) {
            android.content.pm.PackageInfo r0 = b(r0, r1)
            return r0
    }

    private static java.util.List<java.io.File> n(java.io.File r1) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.io.File[] r1 = r1.listFiles()
            if (r1 != 0) goto Lc
            return r0
        Lc:
            java.util.List r1 = java.util.Arrays.asList(r1)
            r0.addAll(r1)
            r(r0)
            return r0
    }

    static java.util.List o(java.io.File r0) {
            java.util.List r0 = n(r0)
            return r0
    }

    private static void r(java.util.List<java.io.File> r1) {
            com.kwad.sdk.core.diskcache.a$2 r0 = new com.kwad.sdk.core.diskcache.a$2
            r0.<init>()
            java.util.Collections.sort(r1, r0)
            return
    }
}
