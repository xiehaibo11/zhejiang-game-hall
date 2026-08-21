package com.mbridge.msdk.foundation.tools;

public final class o {
    private static volatile java.lang.String d;
    private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> a;
    private volatile com.mbridge.msdk.foundation.tools.o.b b;
    private final java.util.concurrent.atomic.AtomicBoolean c;
    private volatile java.lang.Boolean e;
    private com.mbridge.msdk.foundation.entity.CampaignEx f;
    private int g;
    private android.content.Context h;






    private static final class a {
        private static final com.mbridge.msdk.foundation.tools.o a = null;

        static {
                com.mbridge.msdk.foundation.tools.o r0 = new com.mbridge.msdk.foundation.tools.o
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.tools.o.a.a = r0
                return
        }

        static com.mbridge.msdk.foundation.tools.o a() {
                com.mbridge.msdk.foundation.tools.o r0 = com.mbridge.msdk.foundation.tools.o.a.a
                return r0
        }
    }

    private static class b extends android.content.BroadcastReceiver {
        private b() {
                r0 = this;
                r0.<init>()
                return
        }

        b(com.mbridge.msdk.foundation.tools.o.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void onReceive(android.content.Context r9, android.content.Intent r10) {
                r8 = this;
                java.lang.String r0 = r10.getAction()
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                if (r1 == 0) goto Lb
                return
            Lb:
                java.lang.String r1 = "DFKwWgtuDkKwLZPwD+z8H+N/xj26Vjcdx5KyVj5GxVN="
                java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)
                boolean r1 = r0.equals(r1)
                if (r1 == 0) goto L19
                goto Lb2
            L19:
                java.lang.String r1 = "DFKwWgtuDkKwLZPwD+z8H+N/xj26Vjcdx5KanjKnxVN="
                java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)
                boolean r1 = r0.equals(r1)
                if (r1 == 0) goto L27
                goto Lb2
            L27:
                java.lang.String r1 = "DFKwWgtuDkKwLZPwD+z8H+N/xjQZxVfV+T2SZVe6V2xS5c5n"
                java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)
                boolean r0 = r0.equals(r1)
                if (r0 == 0) goto Lb2
                android.os.Bundle r10 = r10.getExtras()     // Catch: java.lang.Exception -> La8
                if (r10 != 0) goto L3a
                return
            L3a:
                java.lang.String r0 = "statusCode"
                r1 = -1
                int r7 = r10.getInt(r0, r1)     // Catch: java.lang.Exception -> La8
                java.lang.String r0 = "packageName"
                java.lang.String r2 = ""
                java.lang.String r10 = r10.getString(r0, r2)     // Catch: java.lang.Exception -> La8
                if (r7 == r1) goto La7
                boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> La8
                if (r0 == 0) goto L52
                goto La7
            L52:
                com.mbridge.msdk.foundation.tools.o r0 = com.mbridge.msdk.foundation.tools.o.a.a()     // Catch: java.lang.Exception -> La8
                com.mbridge.msdk.foundation.entity.CampaignEx r10 = com.mbridge.msdk.foundation.tools.o.a(r0, r10)     // Catch: java.lang.Exception -> La8
                if (r10 != 0) goto L5d
                return
            L5d:
                com.mbridge.msdk.foundation.tools.o r0 = com.mbridge.msdk.foundation.tools.o.a.a()     // Catch: java.lang.Exception -> La8
                r1 = 3001(0xbb9, float:4.205E-42)
                if (r7 == r1) goto L7b
                r1 = 3002(0xbba, float:4.207E-42)
                if (r7 == r1) goto L75
                r1 = 3008(0xbc0, float:4.215E-42)
                if (r7 == r1) goto L6f
                r10 = 0
                goto L81
            L6f:
                com.mbridge.msdk.foundation.tools.o$2 r1 = new com.mbridge.msdk.foundation.tools.o$2     // Catch: java.lang.Exception -> La8
                r1.<init>(r0, r9, r10)     // Catch: java.lang.Exception -> La8
                goto L80
            L75:
                com.mbridge.msdk.foundation.tools.o$3 r1 = new com.mbridge.msdk.foundation.tools.o$3     // Catch: java.lang.Exception -> La8
                r1.<init>(r0, r9, r10)     // Catch: java.lang.Exception -> La8
                goto L80
            L7b:
                com.mbridge.msdk.foundation.tools.o$4 r1 = new com.mbridge.msdk.foundation.tools.o$4     // Catch: java.lang.Exception -> La8
                r1.<init>(r0, r9, r10)     // Catch: java.lang.Exception -> La8
            L80:
                r10 = r1
            L81:
                if (r10 == 0) goto L8a
                java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Exception -> La8
                r0.execute(r10)     // Catch: java.lang.Exception -> La8
            L8a:
                com.mbridge.msdk.foundation.tools.o r3 = com.mbridge.msdk.foundation.tools.o.a.a()     // Catch: java.lang.Exception -> La8
                java.lang.String r5 = "dm_page_status"
                com.mbridge.msdk.foundation.tools.o r10 = com.mbridge.msdk.foundation.tools.o.a.a()     // Catch: java.lang.Exception -> La8
                com.mbridge.msdk.foundation.entity.CampaignEx r6 = r10.b()     // Catch: java.lang.Exception -> La8
                java.util.concurrent.ThreadPoolExecutor r10 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Exception -> La8
                com.mbridge.msdk.foundation.tools.o$5 r0 = new com.mbridge.msdk.foundation.tools.o$5     // Catch: java.lang.Exception -> La8
                r2 = r0
                r4 = r9
                r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> La8
                r10.execute(r0)     // Catch: java.lang.Exception -> La8
                goto Lb2
            La7:
                return
            La8:
                r9 = move-exception
                java.lang.String r9 = r9.getMessage()
                java.lang.String r10 = "MIMManager"
                com.mbridge.msdk.foundation.tools.z.d(r10, r9)
            Lb2:
                return
        }
    }

    private o() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.g = r0
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
            r1.<init>()
            r2.a = r1
            java.util.concurrent.atomic.AtomicBoolean r1 = new java.util.concurrent.atomic.AtomicBoolean
            r1.<init>(r0)
            r2.c = r1
            return
    }

    o(com.mbridge.msdk.foundation.tools.o.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx a(com.mbridge.msdk.foundation.tools.o r0, java.lang.String r1) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.b(r1)
            return r0
    }

    static com.mbridge.msdk.foundation.tools.o.b a(com.mbridge.msdk.foundation.tools.o r0, com.mbridge.msdk.foundation.tools.o.b r1) {
            r0.b = r1
            return r1
    }

    public static com.mbridge.msdk.foundation.tools.o a() {
            com.mbridge.msdk.foundation.tools.o r0 = com.mbridge.msdk.foundation.tools.o.a.a()
            return r0
    }

    static java.lang.Boolean a(com.mbridge.msdk.foundation.tools.o r0, java.lang.Boolean r1) {
            r0.e = r1
            return r1
    }

    static java.util.concurrent.atomic.AtomicBoolean a(com.mbridge.msdk.foundation.tools.o r0) {
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.c
            return r0
    }

    private com.mbridge.msdk.foundation.entity.CampaignEx b(java.lang.String r4) {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.f     // Catch: java.lang.Exception -> L3e
            if (r0 == 0) goto L13
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.f     // Catch: java.lang.Exception -> L3e
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Exception -> L3e
            boolean r0 = android.text.TextUtils.equals(r0, r4)     // Catch: java.lang.Exception -> L3e
            if (r0 == 0) goto L13
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.f     // Catch: java.lang.Exception -> L3e
            return r4
        L13:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r3.a     // Catch: java.lang.Exception -> L3e
            if (r0 == 0) goto L48
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r3.a     // Catch: java.lang.Exception -> L3e
            int r0 = r0.size()     // Catch: java.lang.Exception -> L3e
            if (r0 <= 0) goto L48
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r3.a     // Catch: java.lang.Exception -> L3e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L3e
        L25:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L3e
            if (r1 == 0) goto L48
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L3e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Exception -> L3e
            if (r1 == 0) goto L25
            java.lang.String r2 = r1.getPackageName()     // Catch: java.lang.Exception -> L3e
            boolean r2 = android.text.TextUtils.equals(r2, r4)     // Catch: java.lang.Exception -> L3e
            if (r2 == 0) goto L25
            return r1
        L3e:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r0 = "MIMManager"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L48:
            r4 = 0
            return r4
    }

    static java.lang.Boolean b(com.mbridge.msdk.foundation.tools.o r0) {
            java.lang.Boolean r0 = r0.g()
            return r0
    }

    static java.lang.Boolean c(com.mbridge.msdk.foundation.tools.o r0) {
            java.lang.Boolean r0 = r0.e
            return r0
    }

    static com.mbridge.msdk.foundation.tools.o.b d(com.mbridge.msdk.foundation.tools.o r0) {
            com.mbridge.msdk.foundation.tools.o$b r0 = r0.b
            return r0
    }

    static java.util.concurrent.CopyOnWriteArrayList e(com.mbridge.msdk.foundation.tools.o r0) {
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r0.a
            return r0
    }

    private java.lang.Boolean g() {
            r10 = this;
            java.lang.String r0 = "MIMManager"
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r2 = 0
            if (r1 == 0) goto L97
            android.content.ContentResolver r3 = r1.getContentResolver()     // Catch: java.lang.Exception -> L8f
            if (r3 == 0) goto L97
            android.content.ContentResolver r4 = r1.getContentResolver()     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = "DFK/J75/JaEXWFfXYZP9LkcXYk3/YkcBLF5TWgSBYbHuH75BW3xuhr5UJj2tLkeNhrKFLkxQhl=="
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)     // Catch: java.lang.Exception -> L2a
            android.net.Uri r5 = android.net.Uri.parse(r1)     // Catch: java.lang.Exception -> L2a
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            android.database.Cursor r1 = r4.query(r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L2a
            goto L2b
        L2a:
            r1 = r2
        L2b:
            if (r1 == 0) goto L97
        L2d:
            boolean r3 = r1.moveToNext()     // Catch: java.lang.Exception -> L8f
            if (r3 == 0) goto L82
            java.lang.String r3 = "support"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Exception -> L64
            java.lang.String r3 = r1.getString(r3)     // Catch: java.lang.Exception -> L64
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L64
            if (r4 != 0) goto L6c
            java.lang.String r4 = "null"
            boolean r4 = r3.equalsIgnoreCase(r4)     // Catch: java.lang.Exception -> L64
            if (r4 != 0) goto L6c
            java.lang.String r4 = "false"
            boolean r4 = r3.equalsIgnoreCase(r4)     // Catch: java.lang.Exception -> L64
            if (r4 != 0) goto L5b
            java.lang.String r4 = "true"
            boolean r4 = r3.equalsIgnoreCase(r4)     // Catch: java.lang.Exception -> L64
            if (r4 == 0) goto L6c
        L5b:
            boolean r3 = java.lang.Boolean.parseBoolean(r3)     // Catch: java.lang.Exception -> L64
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Exception -> L64
            goto L6c
        L64:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Exception -> L8f
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)     // Catch: java.lang.Exception -> L8f
        L6c:
            java.lang.String r3 = "detailStyle"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Exception -> L79
            java.lang.String r3 = r1.getString(r3)     // Catch: java.lang.Exception -> L79
            com.mbridge.msdk.foundation.tools.o.d = r3     // Catch: java.lang.Exception -> L79
            goto L2d
        L79:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Exception -> L8f
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)     // Catch: java.lang.Exception -> L8f
            goto L2d
        L82:
            r1.close()     // Catch: java.lang.Exception -> L86
            goto L97
        L86:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> L8f
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> L8f
            goto L97
        L8f:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L97:
            return r2
    }

    public final void a(android.content.Context r3) {
            r2 = this;
            r2.h = r3
            java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.a()
            com.mbridge.msdk.foundation.tools.o$1 r1 = new com.mbridge.msdk.foundation.tools.o$1
            r1.<init>(r2, r3)
            r0.execute(r1)
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r1 = this;
            java.lang.Boolean r0 = r1.e     // Catch: java.lang.Exception -> L16
            if (r0 == 0) goto L20
            if (r2 == 0) goto L20
            java.lang.Boolean r0 = r1.e     // Catch: java.lang.Exception -> L16
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Exception -> L16
            if (r0 == 0) goto L20
            r1.f = r2     // Catch: java.lang.Exception -> L16
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.a     // Catch: java.lang.Exception -> L16
            r0.add(r2)     // Catch: java.lang.Exception -> L16
            goto L20
        L16:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "MIMManager"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L20:
            return
    }

    public final boolean a(java.lang.String r6) {
            r5 = this;
            r0 = 1
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            r5.e = r1
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L79
            if (r2 != 0) goto L83
            java.lang.Boolean r2 = r5.e     // Catch: java.lang.Exception -> L79
            if (r2 == 0) goto L83
            java.lang.Boolean r2 = r5.e     // Catch: java.lang.Exception -> L79
            boolean r2 = r2.booleanValue()     // Catch: java.lang.Exception -> L79
            if (r2 == 0) goto L83
            java.lang.String r6 = r6.trim()     // Catch: java.lang.Exception -> L83
            java.lang.String r2 = "YkQwD+z8H+N1WBK3H+xtLkeAyM=="
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.b(r2)     // Catch: java.lang.Exception -> L83
            boolean r2 = r6.startsWith(r2)     // Catch: java.lang.Exception -> L83
            if (r2 == 0) goto L76
            java.lang.String r2 = "H75TDkQsVbxPY7V="
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.b(r2)     // Catch: java.lang.Exception -> L83
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L83
            r3.<init>()     // Catch: java.lang.Exception -> L83
            r3.append(r2)     // Catch: java.lang.Exception -> L83
            java.lang.String r4 = "=1"
            r3.append(r4)     // Catch: java.lang.Exception -> L83
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L83
            boolean r3 = r6.contains(r3)     // Catch: java.lang.Exception -> L83
            if (r3 != 0) goto L77
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L83
            r3.<init>()     // Catch: java.lang.Exception -> L83
            r3.append(r2)     // Catch: java.lang.Exception -> L83
            java.lang.String r4 = "=2"
            r3.append(r4)     // Catch: java.lang.Exception -> L83
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L83
            boolean r3 = r6.contains(r3)     // Catch: java.lang.Exception -> L83
            if (r3 != 0) goto L77
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L83
            r3.<init>()     // Catch: java.lang.Exception -> L83
            r3.append(r2)     // Catch: java.lang.Exception -> L83
            java.lang.String r2 = "=3"
            r3.append(r2)     // Catch: java.lang.Exception -> L83
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> L83
            boolean r6 = r6.contains(r2)     // Catch: java.lang.Exception -> L83
            if (r6 == 0) goto L76
            goto L77
        L76:
            r0 = r1
        L77:
            r1 = r0
            goto L83
        L79:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            java.lang.String r0 = "MIMManager"
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
        L83:
            return r1
    }

    final com.mbridge.msdk.foundation.entity.CampaignEx b() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.f
            return r0
    }

    public final void b(com.mbridge.msdk.foundation.entity.CampaignEx r3) {
            r2 = this;
            java.lang.String r0 = "MIMManager"
            java.lang.Boolean r1 = r2.e     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L2a
            if (r3 == 0) goto L2a
            java.lang.Boolean r1 = r2.e     // Catch: java.lang.Exception -> L22
            boolean r1 = r1.booleanValue()     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L2a
            r1 = 0
            r2.f = r1     // Catch: java.lang.Exception -> L22
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r1 = r2.a     // Catch: java.lang.Exception -> L19
            r1.remove(r3)     // Catch: java.lang.Exception -> L19
            goto L2a
        L19:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)     // Catch: java.lang.Exception -> L22
            goto L2a
        L22:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
        L2a:
            return
    }

    public final void c() {
            r1 = this;
            int r0 = r1.g
            int r0 = r0 + 1
            r1.g = r0
            return
    }

    public final void d() {
            r3 = this;
            int r0 = r3.g
            int r0 = r0 + (-1)
            r3.g = r0
            if (r0 > 0) goto L3f
            android.content.Context r0 = r3.h
            com.mbridge.msdk.foundation.tools.o$b r1 = r3.b
            if (r1 == 0) goto L3f
            if (r0 == 0) goto L3f
            r1 = 0
            com.mbridge.msdk.foundation.tools.o$b r2 = r3.b     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
            r0.unregisterReceiver(r2)     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L26
        L16:
            r3.f = r1
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r3.a
            r0.clear()
            r3.a = r1
            r3.b = r1
            r3.h = r1
            goto L3f
        L24:
            r0 = move-exception
            goto L31
        L26:
            r0 = move-exception
            java.lang.String r2 = "MIMManager"
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L24
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)     // Catch: java.lang.Throwable -> L24
            goto L16
        L31:
            r3.f = r1
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r3.a
            r2.clear()
            r3.a = r1
            r3.b = r1
            r3.h = r1
            throw r0
        L3f:
            return
    }

    public final java.lang.Boolean e() {
            r1 = this;
            java.lang.Boolean r0 = r1.e
            return r0
    }

    public final java.lang.String f() {
            r5 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.o.d     // Catch: java.lang.Exception -> L15
            if (r1 != 0) goto L7
            goto L15
        L7:
            java.lang.String r1 = "[%s]"
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L15
            r3 = 0
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.o.d     // Catch: java.lang.Exception -> L15
            r2[r3] = r4     // Catch: java.lang.Exception -> L15
            java.lang.String r0 = java.lang.String.format(r1, r2)     // Catch: java.lang.Exception -> L15
        L15:
            return r0
    }
}
