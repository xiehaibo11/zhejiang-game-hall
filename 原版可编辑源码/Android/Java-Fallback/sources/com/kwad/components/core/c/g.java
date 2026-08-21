package com.kwad.components.core.c;

public final class g implements com.kwad.components.core.c.h, java.lang.Comparable<com.kwad.components.core.c.g> {
    private final java.lang.String ID;
    private final java.lang.String IK;
    private final java.lang.String IL;
    private final java.lang.String IM;
    private final long IN;
    private final long createTime;
    private final int ecpm;

    private g(java.lang.String r1, java.lang.String r2, java.lang.String r3, int r4, java.lang.String r5, long r6, long r8) {
            r0 = this;
            r0.<init>()
            r0.IK = r1
            r0.ID = r2
            r0.IL = r3
            r0.ecpm = r4
            r0.IM = r5
            r0.createTime = r6
            r0.IN = r8
            return
    }

    public static java.util.List<com.kwad.components.core.c.g> a(android.database.Cursor r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L9:
            boolean r1 = r2.moveToNext()
            if (r1 == 0) goto L1c
            com.kwad.components.core.c.g r1 = c(r2)     // Catch: java.lang.Exception -> L17
            r0.add(r1)     // Catch: java.lang.Exception -> L17
            goto L9
        L17:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            goto L9
        L1c:
            return r0
    }

    public static java.util.List<com.kwad.components.core.c.g> a(com.kwad.components.core.c.e r19, com.kwad.components.core.response.model.AdResultData r20) {
            java.util.List r0 = r20.getProceedTemplateList()
            int r1 = r0.size()
            long r2 = java.lang.System.currentTimeMillis()
            r4 = 1000(0x3e8, double:4.94E-321)
            long r4 = r2 / r4
            long r6 = r19.ms()
            long r4 = r4 + r6
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            com.kwad.sdk.internal.api.SceneImpl r7 = r20.getDefaultAdScene()
            java.util.Iterator r0 = r0.iterator()
        L22:
            boolean r8 = r0.hasNext()
            if (r8 == 0) goto L7b
            java.lang.Object r8 = r0.next()
            com.kwad.sdk.core.response.model.AdTemplate r8 = (com.kwad.sdk.core.response.model.AdTemplate) r8
            long r9 = com.kwad.sdk.core.response.b.d.cq(r8)
            long r11 = r20.getPosId()
            int r13 = com.kwad.sdk.core.response.b.d.cv(r8)
            com.kwad.sdk.internal.api.SceneImpl r14 = r20.getDefaultAdScene()
            org.json.JSONObject r14 = r14.toJson()
            java.lang.String r14 = r14.toString()
            com.kwad.components.core.response.model.AdResultData r15 = new com.kwad.components.core.response.model.AdResultData
            java.util.List r8 = java.util.Collections.singletonList(r8)
            r19 = r0
            r0 = r20
            r15.<init>(r0, r7, r8)
            com.kwad.components.core.c.g r8 = new com.kwad.components.core.c.g
            java.lang.String r9 = java.lang.String.valueOf(r9)
            java.lang.String r10 = java.lang.String.valueOf(r11)
            java.lang.String r11 = r15.getResponseJson()
            r18 = r7
            r12 = r8
            long r7 = (long) r1
            long r15 = r2 + r7
            r7 = r12
            r8 = r7
            r12 = r13
            r13 = r14
            r14 = r15
            r16 = r4
            r8.<init>(r9, r10, r11, r12, r13, r14, r16)
            r6.add(r7)
            int r1 = r1 + (-1)
            r0 = r19
            r7 = r18
            goto L22
        L7b:
            return r6
    }

    private static synchronized com.kwad.components.core.c.g c(android.database.Cursor r12) {
            java.lang.Class<com.kwad.components.core.c.g> r0 = com.kwad.components.core.c.g.class
            monitor-enter(r0)
            java.lang.String r1 = "creativeId"
            int r1 = r12.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L51
            java.lang.String r3 = r12.getString(r1)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = "posId"
            int r1 = r12.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L51
            java.lang.String r4 = r12.getString(r1)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = "adJson"
            int r1 = r12.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L51
            java.lang.String r5 = r12.getString(r1)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = "ecpm"
            int r1 = r12.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L51
            int r6 = r12.getInt(r1)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = "adSenseJson"
            int r1 = r12.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L51
            java.lang.String r7 = r12.getString(r1)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = "createTime"
            int r1 = r12.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L51
            long r8 = r12.getLong(r1)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = "expireTime"
            int r1 = r12.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L51
            long r10 = r12.getLong(r1)     // Catch: java.lang.Throwable -> L51
            com.kwad.components.core.c.g r12 = new com.kwad.components.core.c.g     // Catch: java.lang.Throwable -> L51
            r2 = r12
            r2.<init>(r3, r4, r5, r6, r7, r8, r10)     // Catch: java.lang.Throwable -> L51
            monitor-exit(r0)
            return r12
        L51:
            r12 = move-exception
            monitor-exit(r0)
            throw r12
    }

    private static com.kwad.components.core.response.model.AdResultData c(com.kwad.components.core.c.g r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r4.mw()
            if (r1 == 0) goto L48
            java.lang.String r1 = r4.mA()
            if (r1 != 0) goto L11
            goto L48
        L11:
            java.lang.String r1 = r4.mA()     // Catch: org.json.JSONException -> L43
            com.kwad.sdk.internal.api.SceneImpl r2 = new com.kwad.sdk.internal.api.SceneImpl     // Catch: org.json.JSONException -> L43
            r2.<init>()     // Catch: org.json.JSONException -> L43
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L43
            r3.<init>(r1)     // Catch: org.json.JSONException -> L43
            r2.parseJson(r3)     // Catch: org.json.JSONException -> L43
            java.lang.String r4 = r4.mw()     // Catch: org.json.JSONException -> L43
            com.kwad.components.core.response.model.AdResultData r4 = com.kwad.components.core.response.model.AdResultData.createFromResponseJson(r4, r2)     // Catch: org.json.JSONException -> L43
            java.util.List r1 = r4.getProceedTemplateList()     // Catch: org.json.JSONException -> L43
            java.util.Iterator r1 = r1.iterator()     // Catch: org.json.JSONException -> L43
        L32:
            boolean r2 = r1.hasNext()     // Catch: org.json.JSONException -> L43
            if (r2 == 0) goto L42
            java.lang.Object r2 = r1.next()     // Catch: org.json.JSONException -> L43
            com.kwad.sdk.core.response.model.AdTemplate r2 = (com.kwad.sdk.core.response.model.AdTemplate) r2     // Catch: org.json.JSONException -> L43
            r3 = 1
            r2.fromCache = r3     // Catch: org.json.JSONException -> L43
            goto L32
        L42:
            return r4
        L43:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
            return r0
        L48:
            java.lang.String r4 = "CachedAd"
            java.lang.String r1 = "createAdResultData cachedAd data illegal"
            com.kwad.sdk.core.e.c.w(r4, r1)
            return r0
    }

    private int d(com.kwad.components.core.c.g r5) {
            r4 = this;
            int r0 = r5.mx()
            int r1 = r4.mx()
            if (r0 != r1) goto L15
            long r0 = r5.my()
            long r2 = r4.my()
            long r0 = r0 - r2
            int r5 = (int) r0
            return r5
        L15:
            int r5 = r5.mx()
            int r0 = r4.mx()
            int r5 = r5 - r0
            return r5
    }

    public static com.kwad.components.core.response.model.AdResultData i(java.util.List<com.kwad.components.core.c.g> r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            if (r4 == 0) goto L3a
            int r2 = r4.size()
            if (r2 != 0) goto Lf
            goto L3a
        Lf:
            java.util.Iterator r4 = r4.iterator()
            r2 = r1
        L14:
            boolean r3 = r4.hasNext()
            if (r3 == 0) goto L34
            java.lang.Object r1 = r4.next()
            com.kwad.components.core.c.g r1 = (com.kwad.components.core.c.g) r1
            com.kwad.components.core.response.model.AdResultData r1 = c(r1)
            if (r1 == 0) goto L14
            if (r2 != 0) goto L2c
            com.kwad.sdk.internal.api.SceneImpl r2 = r1.getDefaultAdScene()
        L2c:
            java.util.List r3 = r1.getProceedTemplateList()
            r0.addAll(r3)
            goto L14
        L34:
            com.kwad.components.core.response.model.AdResultData r4 = new com.kwad.components.core.response.model.AdResultData
            r4.<init>(r1, r2, r0)
            return r4
        L3a:
            return r1
    }

    private java.lang.String mA() {
            r1 = this;
            java.lang.String r0 = r1.IM
            return r0
    }

    private java.lang.String mw() {
            r1 = this;
            java.lang.String r0 = r1.IL
            return r0
    }

    private int mx() {
            r1 = this;
            int r0 = r1.ecpm
            return r0
    }

    private long my() {
            r2 = this;
            long r0 = r2.createTime
            return r0
    }

    @Override
    public final int compareTo(com.kwad.components.core.c.g r1) {
            r0 = this;
            com.kwad.components.core.c.g r1 = (com.kwad.components.core.c.g) r1
            int r1 = r0.d(r1)
            return r1
    }

    public final java.lang.String mB() {
            r1 = this;
            java.lang.String r0 = r1.IK
            return r0
    }

    @Override
    public final android.content.ContentValues mt() {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.String r1 = r3.IK
            java.lang.String r2 = "creativeId"
            r0.put(r2, r1)
            java.lang.String r1 = r3.ID
            java.lang.String r2 = "posId"
            r0.put(r2, r1)
            java.lang.String r1 = r3.IL
            java.lang.String r2 = "adJson"
            r0.put(r2, r1)
            int r1 = r3.ecpm
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "ecpm"
            r0.put(r2, r1)
            java.lang.String r1 = r3.IM
            java.lang.String r2 = "adSenseJson"
            r0.put(r2, r1)
            long r1 = r3.createTime
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "createTime"
            r0.put(r2, r1)
            long r1 = r3.IN
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "expireTime"
            r0.put(r2, r1)
            java.lang.String r1 = "playAgainJson"
            r2 = 0
            r0.put(r1, r2)
            return r0
    }

    public final java.lang.String mv() {
            r1 = this;
            java.lang.String r0 = r1.ID
            return r0
    }

    public final long mz() {
            r2 = this;
            long r0 = r2.IN
            return r0
    }
}
