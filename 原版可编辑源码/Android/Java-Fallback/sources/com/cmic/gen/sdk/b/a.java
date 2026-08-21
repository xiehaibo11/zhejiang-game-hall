package com.cmic.gen.sdk.b;

public class a {
    private static com.cmic.gen.sdk.b.a a;
    private static long b;
    private com.cmic.gen.sdk.b.a.a c;

    public static class a {
        private int a;
        private int b;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.a = r0
                r1.b = r0
                return
        }

        static int a(com.cmic.gen.sdk.b.a.a r0) {
                int r0 = r0.b
                return r0
        }

        static int a(com.cmic.gen.sdk.b.a.a r0, int r1) {
                r0.a = r1
                return r1
        }

        static int b(com.cmic.gen.sdk.b.a.a r0) {
                int r0 = r0.a
                return r0
        }

        static int b(com.cmic.gen.sdk.b.a.a r0, int r1) {
                r0.b = r1
                return r1
        }

        public int a() {
                r1 = this;
                int r0 = r1.b
                return r0
        }
    }

    static {
            return
    }

    private a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            return
    }

    public static com.cmic.gen.sdk.b.a a() {
            com.cmic.gen.sdk.b.a r0 = com.cmic.gen.sdk.b.a.a
            if (r0 != 0) goto Lb
            com.cmic.gen.sdk.b.a r0 = new com.cmic.gen.sdk.b.a
            r0.<init>()
            com.cmic.gen.sdk.b.a.a = r0
        Lb:
            com.cmic.gen.sdk.b.a r0 = com.cmic.gen.sdk.b.a.a
            return r0
    }

    private void a(android.content.Context r6) {
            r5 = this;
            java.lang.String r0 = "UMCTelephonyManagement"
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = -1
            r3 = 22
            if (r1 < r3) goto Ld6
            android.content.Context r6 = r6.getApplicationContext()
            android.telephony.SubscriptionManager r6 = android.telephony.SubscriptionManager.from(r6)
            if (r6 == 0) goto Ldb
            com.cmic.gen.sdk.b.a$a r1 = r5.c     // Catch: java.lang.Exception -> L45
            int r1 = com.cmic.gen.sdk.b.a.a.b(r1)     // Catch: java.lang.Exception -> L45
            if (r1 != r2) goto L4a
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L45
            r2 = 24
            if (r1 < r2) goto L4a
            com.cmic.gen.sdk.b.a$a r1 = r5.c     // Catch: java.lang.Exception -> L45
            int r2 = android.telephony.SubscriptionManager.getDefaultDataSubscriptionId()     // Catch: java.lang.Exception -> L45
            com.cmic.gen.sdk.b.a.a.b(r1, r2)     // Catch: java.lang.Exception -> L45
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L45
            r1.<init>()     // Catch: java.lang.Exception -> L45
            java.lang.String r2 = "android 7.0及以上手机getDefaultDataSubscriptionId适配成功: dataSubId = "
            r1.append(r2)     // Catch: java.lang.Exception -> L45
            com.cmic.gen.sdk.b.a$a r2 = r5.c     // Catch: java.lang.Exception -> L45
            int r2 = com.cmic.gen.sdk.b.a.a.a(r2)     // Catch: java.lang.Exception -> L45
            r1.append(r2)     // Catch: java.lang.Exception -> L45
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L45
            com.cmic.gen.sdk.e.c.b(r0, r1)     // Catch: java.lang.Exception -> L45
            return
        L45:
            java.lang.String r1 = "android 7.0及以上手机getDefaultDataSubscriptionId适配失败"
            com.cmic.gen.sdk.e.c.a(r0, r1)
        L4a:
            r1 = 0
            java.lang.Class r2 = r6.getClass()     // Catch: java.lang.Exception -> L8b
            java.lang.String r3 = "getDefaultDataSubId"
            java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L8b
            java.lang.reflect.Method r2 = r2.getMethod(r3, r4)     // Catch: java.lang.Exception -> L8b
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L8b
            java.lang.Object r2 = r2.invoke(r6, r3)     // Catch: java.lang.Exception -> L8b
            boolean r3 = r2 instanceof java.lang.Integer     // Catch: java.lang.Exception -> L8b
            if (r3 != 0) goto L65
            boolean r3 = r2 instanceof java.lang.Long     // Catch: java.lang.Exception -> L8b
            if (r3 == 0) goto L90
        L65:
            com.cmic.gen.sdk.b.a$a r3 = r5.c     // Catch: java.lang.Exception -> L8b
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Exception -> L8b
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L8b
            com.cmic.gen.sdk.b.a.a.b(r3, r2)     // Catch: java.lang.Exception -> L8b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8b
            r2.<init>()     // Catch: java.lang.Exception -> L8b
            java.lang.String r3 = "android 7.0以下手机getDefaultDataSubId适配成功: dataSubId = "
            r2.append(r3)     // Catch: java.lang.Exception -> L8b
            com.cmic.gen.sdk.b.a$a r3 = r5.c     // Catch: java.lang.Exception -> L8b
            int r3 = com.cmic.gen.sdk.b.a.a.a(r3)     // Catch: java.lang.Exception -> L8b
            r2.append(r3)     // Catch: java.lang.Exception -> L8b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L8b
            com.cmic.gen.sdk.e.c.b(r0, r2)     // Catch: java.lang.Exception -> L8b
            return
        L8b:
            java.lang.String r2 = "readDefaultDataSubId-->getDefaultDataSubId 反射出错"
            com.cmic.gen.sdk.e.c.a(r0, r2)
        L90:
            java.lang.Class r2 = r6.getClass()     // Catch: java.lang.Exception -> Ld0
            java.lang.String r3 = "getDefaultDataSubscriptionId"
            java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> Ld0
            java.lang.reflect.Method r2 = r2.getMethod(r3, r4)     // Catch: java.lang.Exception -> Ld0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> Ld0
            java.lang.Object r6 = r2.invoke(r6, r1)     // Catch: java.lang.Exception -> Ld0
            boolean r1 = r6 instanceof java.lang.Integer     // Catch: java.lang.Exception -> Ld0
            if (r1 != 0) goto Laa
            boolean r1 = r6 instanceof java.lang.Long     // Catch: java.lang.Exception -> Ld0
            if (r1 == 0) goto Ldb
        Laa:
            com.cmic.gen.sdk.b.a$a r1 = r5.c     // Catch: java.lang.Exception -> Ld0
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Exception -> Ld0
            int r6 = r6.intValue()     // Catch: java.lang.Exception -> Ld0
            com.cmic.gen.sdk.b.a.a.b(r1, r6)     // Catch: java.lang.Exception -> Ld0
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld0
            r6.<init>()     // Catch: java.lang.Exception -> Ld0
            java.lang.String r1 = "反射getDefaultDataSubscriptionId适配成功: dataSubId = "
            r6.append(r1)     // Catch: java.lang.Exception -> Ld0
            com.cmic.gen.sdk.b.a$a r1 = r5.c     // Catch: java.lang.Exception -> Ld0
            int r1 = com.cmic.gen.sdk.b.a.a.a(r1)     // Catch: java.lang.Exception -> Ld0
            r6.append(r1)     // Catch: java.lang.Exception -> Ld0
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Ld0
            com.cmic.gen.sdk.e.c.b(r0, r6)     // Catch: java.lang.Exception -> Ld0
            goto Ldb
        Ld0:
            java.lang.String r6 = "getDefaultDataSubscriptionId-->getDefaultDataSubscriptionId 反射出错"
            com.cmic.gen.sdk.e.c.a(r0, r6)
            goto Ldb
        Ld6:
            com.cmic.gen.sdk.b.a$a r6 = r5.c
            com.cmic.gen.sdk.b.a.a.a(r6, r2)
        Ldb:
            return
    }

    private void b(android.content.Context r11) {
            r10 = this;
            java.lang.String r0 = "sim_id"
            java.lang.String r1 = "_id"
            java.lang.String r2 = "UMCTelephonyManagement"
            java.lang.String r3 = "readSimInfoDbStart"
            com.cmic.gen.sdk.e.c.b(r2, r3)
            java.lang.String r3 = "content://telephony/siminfo"
            android.net.Uri r5 = android.net.Uri.parse(r3)
            android.content.ContentResolver r4 = r11.getContentResolver()
            r11 = 2
            r3 = 0
            java.lang.String[] r6 = new java.lang.String[r11]     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r11 = 0
            r6[r11] = r1     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r7 = 1
            r6[r7] = r0     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r8 = "sim_id>=?"
            java.lang.String[] r9 = new java.lang.String[r7]     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r7 = "0"
            r9[r11] = r7     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r11 = 0
            r7 = r8
            r8 = r9
            r9 = r11
            android.database.Cursor r3 = r4.query(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            if (r3 == 0) goto L87
        L31:
            boolean r11 = r3.moveToNext()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            if (r11 == 0) goto L87
            int r11 = r3.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r11 = r3.getInt(r11)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r4 = r3.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r4 = r3.getInt(r4)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            com.cmic.gen.sdk.b.a$a r5 = r10.c     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r5 = com.cmic.gen.sdk.b.a.a.b(r5)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r6 = -1
            if (r5 != r6) goto L79
            com.cmic.gen.sdk.b.a$a r5 = r10.c     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r5 = com.cmic.gen.sdk.b.a.a.a(r5)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            if (r5 == r6) goto L79
            com.cmic.gen.sdk.b.a$a r5 = r10.c     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r5 = com.cmic.gen.sdk.b.a.a.a(r5)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            if (r5 != r4) goto L79
            com.cmic.gen.sdk.b.a$a r5 = r10.c     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            com.cmic.gen.sdk.b.a.a.a(r5, r11)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r5.<init>()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r6 = "通过读取sim db获取数据流量卡的卡槽值："
            r5.append(r6)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r5.append(r11)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            com.cmic.gen.sdk.e.c.b(r2, r5)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
        L79:
            com.cmic.gen.sdk.b.a$a r5 = r10.c     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r5 = com.cmic.gen.sdk.b.a.a.b(r5)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            if (r5 != r11) goto L31
            com.cmic.gen.sdk.b.a$a r11 = r10.c     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            com.cmic.gen.sdk.b.a.a.b(r11, r4)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            goto L31
        L87:
            if (r3 == 0) goto L96
            goto L93
        L8a:
            r11 = move-exception
            goto L9c
        L8c:
            java.lang.String r11 = "readSimInfoDb error"
            com.cmic.gen.sdk.e.c.a(r2, r11)     // Catch: java.lang.Throwable -> L8a
            if (r3 == 0) goto L96
        L93:
            r3.close()
        L96:
            java.lang.String r11 = "readSimInfoDbEnd"
            com.cmic.gen.sdk.e.c.b(r2, r11)
            return
        L9c:
            if (r3 == 0) goto La1
            r3.close()
        La1:
            goto La3
        La2:
            throw r11
        La3:
            goto La2
    }

    public void a(android.content.Context r6, boolean r7) {
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.cmic.gen.sdk.b.a.b
            long r0 = r0 - r2
            r2 = 5000(0x1388, double:2.4703E-320)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L14
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L14
            return
        L14:
            com.cmic.gen.sdk.b.a$a r0 = new com.cmic.gen.sdk.b.a$a
            r0.<init>()
            r5.c = r0
            if (r7 != 0) goto L1e
            return
        L1e:
            r5.a(r6)
            boolean r7 = com.cmic.gen.sdk.e.m.e()
            if (r7 == 0) goto L75
            boolean r7 = com.cmic.gen.sdk.e.m.d()
            if (r7 == 0) goto L75
            java.lang.String r7 = "UMCTelephonyManagement"
            java.lang.String r0 = "华为手机兼容性处理"
            com.cmic.gen.sdk.e.c.b(r7, r0)
            com.cmic.gen.sdk.b.a$a r7 = r5.c
            int r7 = com.cmic.gen.sdk.b.a.a.a(r7)
            r0 = -1
            if (r7 == 0) goto L46
            com.cmic.gen.sdk.b.a$a r7 = r5.c
            int r7 = com.cmic.gen.sdk.b.a.a.a(r7)
            r1 = 1
            if (r7 != r1) goto L5c
        L46:
            com.cmic.gen.sdk.b.a$a r7 = r5.c
            int r7 = com.cmic.gen.sdk.b.a.a.b(r7)
            if (r7 != r0) goto L57
            com.cmic.gen.sdk.b.a$a r7 = r5.c
            int r1 = com.cmic.gen.sdk.b.a.a.a(r7)
            com.cmic.gen.sdk.b.a.a.a(r7, r1)
        L57:
            com.cmic.gen.sdk.b.a$a r7 = r5.c
            com.cmic.gen.sdk.b.a.a.b(r7, r0)
        L5c:
            com.cmic.gen.sdk.b.a$a r7 = r5.c
            int r7 = com.cmic.gen.sdk.b.a.a.b(r7)
            if (r7 != r0) goto L6c
            com.cmic.gen.sdk.b.a$a r7 = r5.c
            int r7 = com.cmic.gen.sdk.b.a.a.a(r7)
            if (r7 == r0) goto L75
        L6c:
            int r7 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r7 < r0) goto L75
            r5.b(r6)
        L75:
            long r6 = java.lang.System.currentTimeMillis()
            com.cmic.gen.sdk.b.a.b = r6
            return
    }

    public com.cmic.gen.sdk.b.a.a b() {
            r1 = this;
            com.cmic.gen.sdk.b.a$a r0 = r1.c
            if (r0 != 0) goto L9
            com.cmic.gen.sdk.b.a$a r0 = new com.cmic.gen.sdk.b.a$a
            r0.<init>()
        L9:
            return r0
    }
}
