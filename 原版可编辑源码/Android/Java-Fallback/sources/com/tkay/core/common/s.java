package com.tkay.core.common;

public class s {
    public static final int a = 35;
    public static final java.lang.String b = "isDefaultOffer";
    private static volatile com.tkay.core.common.s g;
    java.lang.reflect.Method c;
    java.lang.reflect.Method d;
    java.lang.reflect.Method e;
    java.lang.reflect.Method f;

    private s() {
            r7 = this;
            r7.<init>()
            java.lang.String r0 = "com.tkay.network.myoffer.MyOfferAPI"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "preloadTYOffer"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L51
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L51
            java.lang.Class<com.tkay.core.common.f.s> r4 = com.tkay.core.common.f.s.class
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Exception -> L51
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Exception -> L51
            r7.c = r1     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "getOutOfCapOfferIds"
            java.lang.Class[] r3 = new java.lang.Class[r6]     // Catch: java.lang.Exception -> L51
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r5] = r4     // Catch: java.lang.Exception -> L51
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Exception -> L51
            r7.d = r1     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "getDefaultOfferId"
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L51
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r5] = r4     // Catch: java.lang.Exception -> L51
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r3[r6] = r4     // Catch: java.lang.Exception -> L51
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Exception -> L51
            r7.e = r1     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "checkOffersOutOfCap"
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L51
            java.lang.Class<android.content.Context> r3 = android.content.Context.class
            r2[r5] = r3     // Catch: java.lang.Exception -> L51
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            r2[r6] = r3     // Catch: java.lang.Exception -> L51
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r2)     // Catch: java.lang.Exception -> L51
            r7.f = r0     // Catch: java.lang.Exception -> L51
            return
        L51:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    public static com.tkay.core.common.s a() {
            com.tkay.core.common.s r0 = com.tkay.core.common.s.g
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.s> r0 = com.tkay.core.common.s.class
            monitor-enter(r0)
            com.tkay.core.common.s r1 = com.tkay.core.common.s.g     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.s r1 = new com.tkay.core.common.s     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.s.g = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.s r0 = com.tkay.core.common.s.g
            return r0
    }

    public final org.json.JSONArray a(android.content.Context r5) {
            r4 = this;
            java.lang.reflect.Method r0 = r4.d     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L1f
            java.lang.reflect.Method r0 = r4.d     // Catch: java.lang.Exception -> L1b
            r1 = 0
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L1b
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.Exception -> L1b
            java.lang.Object r5 = r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L1b
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L1b
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L1b
            r0.<init>(r5)     // Catch: java.lang.Exception -> L1b
            return r0
        L1b:
            r5 = move-exception
            r5.printStackTrace()
        L1f:
            org.json.JSONArray r5 = new org.json.JSONArray
            r5.<init>()
            return r5
    }

    public final void a(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            java.lang.reflect.Method r0 = r4.c     // Catch: java.lang.Exception -> L1b
            if (r0 == 0) goto L1a
            com.tkay.core.common.f.s r0 = new com.tkay.core.common.f.s     // Catch: java.lang.Exception -> L1b
            r0.<init>()     // Catch: java.lang.Exception -> L1b
            r0.a = r6     // Catch: java.lang.Exception -> L1b
            java.lang.reflect.Method r6 = r4.c     // Catch: java.lang.Exception -> L1b
            r1 = 0
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L1b
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.Exception -> L1b
            r5 = 1
            r2[r5] = r0     // Catch: java.lang.Exception -> L1b
            r6.invoke(r1, r2)     // Catch: java.lang.Exception -> L1b
        L1a:
            return
        L1b:
            r5 = move-exception
            r5.printStackTrace()
            return
    }

    public final java.lang.String b(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            java.lang.reflect.Method r0 = r4.e     // Catch: java.lang.Exception -> L19
            if (r0 == 0) goto L1d
            java.lang.reflect.Method r0 = r4.e     // Catch: java.lang.Exception -> L19
            r1 = 0
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L19
            r3 = 0
            r2[r3] = r5     // Catch: java.lang.Exception -> L19
            r5 = 1
            r2[r5] = r6     // Catch: java.lang.Exception -> L19
            java.lang.Object r5 = r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L19
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L19
            return r5
        L19:
            r5 = move-exception
            r5.printStackTrace()
        L1d:
            java.lang.String r5 = ""
            return r5
    }

    public final boolean c(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            r0 = 0
            java.lang.reflect.Method r1 = r4.f     // Catch: java.lang.Exception -> L1b
            if (r1 == 0) goto L1f
            java.lang.reflect.Method r1 = r4.f     // Catch: java.lang.Exception -> L1b
            r2 = 0
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L1b
            r3[r0] = r5     // Catch: java.lang.Exception -> L1b
            r5 = 1
            r3[r5] = r6     // Catch: java.lang.Exception -> L1b
            java.lang.Object r5 = r1.invoke(r2, r3)     // Catch: java.lang.Exception -> L1b
            java.lang.Boolean r5 = (java.lang.Boolean) r5     // Catch: java.lang.Exception -> L1b
            boolean r5 = r5.booleanValue()     // Catch: java.lang.Exception -> L1b
            return r5
        L1b:
            r5 = move-exception
            r5.printStackTrace()
        L1f:
            return r0
    }
}
