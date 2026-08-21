package com.bumptech.glide.module;

public final class ManifestParser {
    private static final java.lang.String GLIDE_MODULE_VALUE = "GlideModule";
    private final android.content.Context context;

    public ManifestParser(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            return
    }

    private static com.bumptech.glide.module.GlideModule parseModule(java.lang.String r4) {
            java.lang.String r0 = "Unable to instantiate GlideModule implementation for "
            java.lang.Class r4 = java.lang.Class.forName(r4)     // Catch: java.lang.ClassNotFoundException -> L54
            java.lang.Object r4 = r4.newInstance()     // Catch: java.lang.IllegalAccessException -> L28 java.lang.InstantiationException -> L3e
            boolean r0 = r4 instanceof com.bumptech.glide.module.GlideModule
            if (r0 == 0) goto L11
            com.bumptech.glide.module.GlideModule r4 = (com.bumptech.glide.module.GlideModule) r4
            return r4
        L11:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Expected instanceof GlideModule, but found: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L28:
            r1 = move-exception
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r4)
            java.lang.String r4 = r3.toString()
            r2.<init>(r4, r1)
            throw r2
        L3e:
            r1 = move-exception
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r4)
            java.lang.String r4 = r3.toString()
            r2.<init>(r4, r1)
            throw r2
        L54:
            r4 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Unable to find GlideModule implementation"
            r0.<init>(r1, r4)
            throw r0
    }

    public java.util.List<com.bumptech.glide.module.GlideModule> parse() {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.content.Context r1 = r6.context     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            android.content.Context r2 = r6.context     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            java.lang.String r2 = r2.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo(r2, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            android.os.Bundle r2 = r1.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            if (r2 == 0) goto L47
            android.os.Bundle r2 = r1.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            java.util.Set r2 = r2.keySet()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            java.util.Iterator r2 = r2.iterator()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
        L25:
            boolean r3 = r2.hasNext()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            if (r3 == 0) goto L47
            java.lang.Object r3 = r2.next()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            java.lang.String r3 = (java.lang.String) r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            java.lang.String r4 = "GlideModule"
            android.os.Bundle r5 = r1.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            java.lang.Object r5 = r5.get(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            boolean r4 = r4.equals(r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            if (r4 == 0) goto L25
            com.bumptech.glide.module.GlideModule r3 = parseModule(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            r0.add(r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L48
            goto L25
        L47:
            return r0
        L48:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Unable to find metadata to parse GlideModules"
            r1.<init>(r2, r0)
            goto L52
        L51:
            throw r1
        L52:
            goto L51
    }
}
