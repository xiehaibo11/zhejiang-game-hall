package com.kwad.components.core.c;

public class e implements com.kwad.components.core.c.h {
    private static volatile com.kwad.components.core.c.e IC;
    private java.lang.String ID;
    private int IE;
    private int IF;
    private long IG;
    private boolean IH;

    private e() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.IE = r0
            r1 = 1
            r3.IF = r1
            r1 = 1800(0x708, double:8.893E-321)
            r3.IG = r1
            r3.IH = r0
            return
    }

    private e(long r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.IE = r0
            r1 = 1
            r3.IF = r1
            r1 = 1800(0x708, double:8.893E-321)
            r3.IG = r1
            r3.IH = r0
            java.lang.String r4 = java.lang.String.valueOf(r4)
            r3.ID = r4
            return
    }

    public static com.kwad.components.core.c.e I(com.kwad.sdk.core.response.model.AdTemplate r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            long r0 = r3.posId
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            com.kwad.components.core.c.e r2 = new com.kwad.components.core.c.e
            r2.<init>(r0)
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            int r0 = r0.adCacheStrategy
            r2.IE = r0
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            long r0 = r0.adCacheSecond
            r2.IG = r0
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            int r0 = r0.adCacheSize
            r2.IF = r0
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r3 = r3.adBaseInfo
            int r3 = r3.adCacheSwitch
            r0 = 1
            if (r3 != r0) goto L29
            goto L2a
        L29:
            r0 = 0
        L2a:
            r2.IH = r0
            return r2
    }

    public static synchronized java.util.List<com.kwad.components.core.c.e> a(android.database.Cursor r3) {
            java.lang.Class<com.kwad.components.core.c.e> r0 = com.kwad.components.core.c.e.class
            monitor-enter(r0)
            if (r3 != 0) goto L8
            r3 = 0
            monitor-exit(r0)
            return r3
        L8:
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L22
            r1.<init>()     // Catch: java.lang.Throwable -> L22
        Ld:
            boolean r2 = r3.moveToNext()     // Catch: java.lang.Throwable -> L22
            if (r2 == 0) goto L20
            com.kwad.components.core.c.e r2 = b(r3)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L22
            r1.add(r2)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L22
            goto Ld
        L1b:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)     // Catch: java.lang.Throwable -> L22
            goto Ld
        L20:
            monitor-exit(r0)
            return r1
        L22:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private static synchronized com.kwad.components.core.c.e b(android.database.Cursor r7) {
            java.lang.Class<com.kwad.components.core.c.e> r0 = com.kwad.components.core.c.e.class
            monitor-enter(r0)
            java.lang.String r1 = "posId"
            int r1 = r7.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r1 = r7.getString(r1)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r2 = "strategyCode"
            int r2 = r7.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L4b
            int r2 = r7.getInt(r2)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r3 = "cacheSize"
            int r3 = r7.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L4b
            int r3 = r7.getInt(r3)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r4 = "cacheSecond"
            int r4 = r7.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L4b
            long r4 = r7.getLong(r4)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r6 = "enable"
            int r6 = r7.getColumnIndex(r6)     // Catch: java.lang.Throwable -> L4b
            int r7 = r7.getInt(r6)     // Catch: java.lang.Throwable -> L4b
            r6 = 1
            if (r7 != r6) goto L39
            goto L3a
        L39:
            r6 = 0
        L3a:
            com.kwad.components.core.c.e r7 = new com.kwad.components.core.c.e     // Catch: java.lang.Throwable -> L4b
            r7.<init>()     // Catch: java.lang.Throwable -> L4b
            r7.ID = r1     // Catch: java.lang.Throwable -> L4b
            r7.IE = r2     // Catch: java.lang.Throwable -> L4b
            r7.IF = r3     // Catch: java.lang.Throwable -> L4b
            r7.IG = r4     // Catch: java.lang.Throwable -> L4b
            r7.IH = r6     // Catch: java.lang.Throwable -> L4b
            monitor-exit(r0)
            return r7
        L4b:
            r7 = move-exception
            monitor-exit(r0)
            throw r7
    }

    private static com.kwad.components.core.c.e mp() {
            com.kwad.components.core.c.e r0 = com.kwad.components.core.c.e.IC
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.core.c.e> r0 = com.kwad.components.core.c.e.class
            monitor-enter(r0)
            com.kwad.components.core.c.e r1 = com.kwad.components.core.c.e.IC     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.core.c.e r1 = new com.kwad.components.core.c.e     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.core.c.e.IC = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.core.c.e r0 = com.kwad.components.core.c.e.IC
            return r0
    }

    public static com.kwad.components.core.c.e p(long r1) {
            com.kwad.components.core.c.a r0 = com.kwad.components.core.c.a.mg()
            if (r0 == 0) goto L15
            com.kwad.components.core.c.a r0 = com.kwad.components.core.c.a.mg()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            com.kwad.components.core.c.e r1 = r0.ae(r1)
            if (r1 == 0) goto L15
            return r1
        L15:
            com.kwad.components.core.c.e r1 = mp()
            return r1
    }

    public final boolean isDefault() {
            r1 = this;
            com.kwad.components.core.c.e r0 = mp()
            boolean r0 = r1.equals(r0)
            return r0
    }

    public final boolean isEnable() {
            r1 = this;
            boolean r0 = r1.IH
            return r0
    }

    public final int mq() {
            r1 = this;
            int r0 = r1.IE
            return r0
    }

    public final int mr() {
            r1 = this;
            int r0 = r1.IF
            return r0
    }

    public final long ms() {
            r2 = this;
            long r0 = r2.IG
            return r0
    }

    @Override
    public final android.content.ContentValues mt() {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.String r1 = r3.ID
            java.lang.String r2 = "posId"
            r0.put(r2, r1)
            int r1 = r3.IE
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "strategyCode"
            r0.put(r2, r1)
            int r1 = r3.IF
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "cacheSize"
            r0.put(r2, r1)
            long r1 = r3.IG
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "cacheSecond"
            r0.put(r2, r1)
            boolean r1 = r3.IH
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "enable"
            r0.put(r2, r1)
            return r0
    }
}
