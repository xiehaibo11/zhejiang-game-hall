package com.igexin.push.util;

public class k {
    public static void a(android.content.Context r8, android.content.Intent r9) {
            java.lang.String r0 = "ua"
            java.lang.String r1 = "uis"
            java.lang.String r2 = "us"
            boolean r3 = r9.hasExtra(r2)     // Catch: java.lang.Throwable -> L80
            r4 = 0
            java.lang.String r5 = ""
            if (r3 == 0) goto L3e
            java.lang.String r3 = r9.getStringExtra(r2)     // Catch: java.lang.Throwable -> L80
            java.lang.String r3 = com.igexin.b.b.a.b(r3, r5)     // Catch: java.lang.Throwable -> L80
            java.lang.String[] r6 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L80
            java.lang.Object r6 = c(r8, r2, r5, r6)     // Catch: java.lang.Throwable -> L80
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L80
            boolean r7 = r6.equals(r3)     // Catch: java.lang.Throwable -> L80
            if (r7 != 0) goto L3e
            java.lang.String r7 = com.igexin.push.core.CoreConsts.n     // Catch: java.lang.Throwable -> L80
            boolean r7 = r7.equals(r3)     // Catch: java.lang.Throwable -> L80
            if (r7 == 0) goto L39
            boolean r3 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L80
            if (r3 != 0) goto L3e
            java.lang.String[] r3 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L80
            a(r8, r2, r5, r3)     // Catch: java.lang.Throwable -> L80
            goto L3e
        L39:
            java.lang.String[] r6 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L80
            a(r8, r2, r3, r6)     // Catch: java.lang.Throwable -> L80
        L3e:
            boolean r2 = r9.hasExtra(r1)     // Catch: java.lang.Throwable -> L80
            if (r2 == 0) goto L5f
            java.lang.String[] r2 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L80
            java.lang.Object r2 = c(r8, r1, r5, r2)     // Catch: java.lang.Throwable -> L80
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L80
            java.lang.String r3 = r9.getStringExtra(r1)     // Catch: java.lang.Throwable -> L80
            java.lang.String r3 = com.igexin.b.b.a.b(r3, r5)     // Catch: java.lang.Throwable -> L80
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L80
            if (r2 != 0) goto L5f
            java.lang.String[] r2 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L80
            a(r8, r1, r3, r2)     // Catch: java.lang.Throwable -> L80
        L5f:
            boolean r1 = r9.hasExtra(r0)     // Catch: java.lang.Throwable -> L80
            if (r1 == 0) goto L80
            com.igexin.push.core.x r1 = com.igexin.push.core.x.a()     // Catch: java.lang.Throwable -> L80
            java.lang.String r1 = r1.e(r8)     // Catch: java.lang.Throwable -> L80
            java.lang.String r9 = r9.getStringExtra(r0)     // Catch: java.lang.Throwable -> L80
            java.lang.String r9 = com.igexin.b.b.a.b(r9, r5)     // Catch: java.lang.Throwable -> L80
            boolean r1 = r1.equals(r9)     // Catch: java.lang.Throwable -> L80
            if (r1 != 0) goto L80
            java.lang.String[] r1 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L80
            a(r8, r0, r9, r1)     // Catch: java.lang.Throwable -> L80
        L80:
            return
    }

    public static void a(android.content.Context r3, java.lang.String r4, java.lang.Object r5, java.lang.String... r6) {
            android.content.Context r3 = r3.getApplicationContext()
            r0 = 0
            if (r6 == 0) goto Le
            int r1 = r6.length
            r2 = 1
            if (r1 != r2) goto Le
            r6 = r6[r0]
            goto L10
        Le:
            java.lang.String r6 = "getui_sp"
        L10:
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r6, r0)
            android.content.SharedPreferences$Editor r3 = r3.edit()
            boolean r6 = r5 instanceof java.lang.String
            if (r6 == 0) goto L22
            java.lang.String r5 = (java.lang.String) r5
            r3.putString(r4, r5)
            goto L59
        L22:
            boolean r6 = r5 instanceof java.lang.Integer
            if (r6 == 0) goto L30
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            r3.putInt(r4, r5)
            goto L59
        L30:
            boolean r6 = r5 instanceof java.lang.Boolean
            if (r6 == 0) goto L3e
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            r3.putBoolean(r4, r5)
            goto L59
        L3e:
            boolean r6 = r5 instanceof java.lang.Float
            if (r6 == 0) goto L4c
            java.lang.Float r5 = (java.lang.Float) r5
            float r5 = r5.floatValue()
            r3.putFloat(r4, r5)
            goto L59
        L4c:
            boolean r6 = r5 instanceof java.lang.Long
            if (r6 == 0) goto L59
            java.lang.Long r5 = (java.lang.Long) r5
            long r5 = r5.longValue()
            r3.putLong(r4, r5)
        L59:
            r3.apply()
            return
    }

    public static void b(android.content.Context r3, java.lang.String r4, java.lang.Object r5, java.lang.String... r6) {
            android.content.Context r3 = r3.getApplicationContext()
            r0 = 0
            if (r6 == 0) goto Le
            int r1 = r6.length
            r2 = 1
            if (r1 != r2) goto Le
            r6 = r6[r0]
            goto L10
        Le:
            java.lang.String r6 = "getui_sp"
        L10:
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r6, r0)
            android.content.SharedPreferences$Editor r3 = r3.edit()
            boolean r6 = r5 instanceof java.lang.String
            if (r6 == 0) goto L22
            java.lang.String r5 = (java.lang.String) r5
            r3.putString(r4, r5)
            goto L59
        L22:
            boolean r6 = r5 instanceof java.lang.Integer
            if (r6 == 0) goto L30
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            r3.putInt(r4, r5)
            goto L59
        L30:
            boolean r6 = r5 instanceof java.lang.Boolean
            if (r6 == 0) goto L3e
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            r3.putBoolean(r4, r5)
            goto L59
        L3e:
            boolean r6 = r5 instanceof java.lang.Float
            if (r6 == 0) goto L4c
            java.lang.Float r5 = (java.lang.Float) r5
            float r5 = r5.floatValue()
            r3.putFloat(r4, r5)
            goto L59
        L4c:
            boolean r6 = r5 instanceof java.lang.Long
            if (r6 == 0) goto L59
            java.lang.Long r5 = (java.lang.Long) r5
            long r5 = r5.longValue()
            r3.putLong(r4, r5)
        L59:
            r3.commit()
            return
    }

    public static java.lang.Object c(android.content.Context r3, java.lang.String r4, java.lang.Object r5, java.lang.String... r6) {
            android.content.Context r3 = r3.getApplicationContext()
            r0 = 0
            if (r6 == 0) goto Le
            int r1 = r6.length
            r2 = 1
            if (r1 != r2) goto Le
            r6 = r6[r0]
            goto L10
        Le:
            java.lang.String r6 = "getui_sp"
        L10:
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r6, r0)
            boolean r6 = r5 instanceof java.lang.String
            if (r6 == 0) goto L1f
            java.lang.String r5 = (java.lang.String) r5
            java.lang.String r3 = r3.getString(r4, r5)
            return r3
        L1f:
            boolean r6 = r5 instanceof java.lang.Integer
            if (r6 == 0) goto L32
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            int r3 = r3.getInt(r4, r5)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            return r3
        L32:
            boolean r6 = r5 instanceof java.lang.Boolean
            if (r6 == 0) goto L45
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            boolean r3 = r3.getBoolean(r4, r5)
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            return r3
        L45:
            boolean r6 = r5 instanceof java.lang.Float
            if (r6 == 0) goto L58
            java.lang.Float r5 = (java.lang.Float) r5
            float r5 = r5.floatValue()
            float r3 = r3.getFloat(r4, r5)
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            return r3
        L58:
            boolean r6 = r5 instanceof java.lang.Long
            if (r6 == 0) goto L6b
            java.lang.Long r5 = (java.lang.Long) r5
            long r5 = r5.longValue()
            long r3 = r3.getLong(r4, r5)
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            return r3
        L6b:
            return r5
    }
}
