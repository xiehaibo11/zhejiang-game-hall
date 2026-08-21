package com.mbridge.msdk.foundation.tools;

public final class ag {
    static com.mbridge.msdk.foundation.tools.FastKV a;

    static {
            return
    }

    public static void a(android.content.Context r8, java.lang.String r9, java.lang.Object r10) {
            java.lang.Class r0 = r10.getClass()
            java.lang.String r0 = r0.getSimpleName()
            if (r8 != 0) goto Lb
            return
        Lb:
            com.mbridge.msdk.foundation.controller.b r1 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r1 = r1.d()
            java.lang.String r2 = "share_date"
            if (r1 == 0) goto L30
            com.mbridge.msdk.foundation.tools.FastKV r1 = com.mbridge.msdk.foundation.tools.ag.a
            if (r1 != 0) goto L30
            com.mbridge.msdk.foundation.tools.FastKV$Builder r1 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L2d
            java.lang.String r3 = com.mbridge.msdk.foundation.same.b.e.b(r3)     // Catch: java.lang.Exception -> L2d
            r1.<init>(r3, r2)     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.foundation.tools.FastKV r1 = r1.build()     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.foundation.tools.ag.a = r1     // Catch: java.lang.Exception -> L2d
            goto L30
        L2d:
            r1 = 0
            com.mbridge.msdk.foundation.tools.ag.a = r1
        L30:
            com.mbridge.msdk.foundation.tools.FastKV r1 = com.mbridge.msdk.foundation.tools.ag.a
            java.lang.String r3 = "Long"
            java.lang.String r4 = "Float"
            java.lang.String r5 = "Boolean"
            java.lang.String r6 = "Integer"
            java.lang.String r7 = "String"
            if (r1 == 0) goto L98
            boolean r8 = r7.equals(r0)     // Catch: java.lang.Exception -> Lf3
            if (r8 == 0) goto L4d
            com.mbridge.msdk.foundation.tools.FastKV r8 = com.mbridge.msdk.foundation.tools.ag.a     // Catch: java.lang.Exception -> Lf3
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> Lf3
            r8.putString(r9, r10)     // Catch: java.lang.Exception -> Lf3
            goto Lf3
        L4d:
            boolean r8 = r6.equals(r0)     // Catch: java.lang.Exception -> Lf3
            if (r8 == 0) goto L60
            com.mbridge.msdk.foundation.tools.FastKV r8 = com.mbridge.msdk.foundation.tools.ag.a     // Catch: java.lang.Exception -> Lf3
            java.lang.Integer r10 = (java.lang.Integer) r10     // Catch: java.lang.Exception -> Lf3
            int r10 = r10.intValue()     // Catch: java.lang.Exception -> Lf3
            r8.putInt(r9, r10)     // Catch: java.lang.Exception -> Lf3
            goto Lf3
        L60:
            boolean r8 = r5.equals(r0)     // Catch: java.lang.Exception -> Lf3
            if (r8 == 0) goto L73
            com.mbridge.msdk.foundation.tools.FastKV r8 = com.mbridge.msdk.foundation.tools.ag.a     // Catch: java.lang.Exception -> Lf3
            java.lang.Boolean r10 = (java.lang.Boolean) r10     // Catch: java.lang.Exception -> Lf3
            boolean r10 = r10.booleanValue()     // Catch: java.lang.Exception -> Lf3
            r8.putBoolean(r9, r10)     // Catch: java.lang.Exception -> Lf3
            goto Lf3
        L73:
            boolean r8 = r4.equals(r0)     // Catch: java.lang.Exception -> Lf3
            if (r8 == 0) goto L86
            com.mbridge.msdk.foundation.tools.FastKV r8 = com.mbridge.msdk.foundation.tools.ag.a     // Catch: java.lang.Exception -> Lf3
            java.lang.Float r10 = (java.lang.Float) r10     // Catch: java.lang.Exception -> Lf3
            float r10 = r10.floatValue()     // Catch: java.lang.Exception -> Lf3
            r8.putFloat(r9, r10)     // Catch: java.lang.Exception -> Lf3
            goto Lf3
        L86:
            boolean r8 = r3.equals(r0)     // Catch: java.lang.Exception -> Lf3
            if (r8 == 0) goto Lf3
            com.mbridge.msdk.foundation.tools.FastKV r8 = com.mbridge.msdk.foundation.tools.ag.a     // Catch: java.lang.Exception -> Lf3
            java.lang.Long r10 = (java.lang.Long) r10     // Catch: java.lang.Exception -> Lf3
            long r0 = r10.longValue()     // Catch: java.lang.Exception -> Lf3
            r8.putLong(r9, r0)     // Catch: java.lang.Exception -> Lf3
            goto Lf3
        L98:
            android.content.Context r8 = r8.getApplicationContext()
            r1 = 0
            android.content.SharedPreferences r8 = r8.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r8 = r8.edit()
            boolean r1 = r7.equals(r0)
            if (r1 == 0) goto Lb1
            java.lang.String r10 = (java.lang.String) r10
            r8.putString(r9, r10)
            goto Lf0
        Lb1:
            boolean r1 = r6.equals(r0)
            if (r1 == 0) goto Lc1
            java.lang.Integer r10 = (java.lang.Integer) r10
            int r10 = r10.intValue()
            r8.putInt(r9, r10)
            goto Lf0
        Lc1:
            boolean r1 = r5.equals(r0)
            if (r1 == 0) goto Ld1
            java.lang.Boolean r10 = (java.lang.Boolean) r10
            boolean r10 = r10.booleanValue()
            r8.putBoolean(r9, r10)
            goto Lf0
        Ld1:
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto Le1
            java.lang.Float r10 = (java.lang.Float) r10
            float r10 = r10.floatValue()
            r8.putFloat(r9, r10)
            goto Lf0
        Le1:
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto Lf0
            java.lang.Long r10 = (java.lang.Long) r10
            long r0 = r10.longValue()
            r8.putLong(r9, r0)
        Lf0:
            r8.apply()
        Lf3:
            return
    }

    public static void a(android.content.Context r3, java.lang.String... r4) {
            if (r3 != 0) goto L3
            return
        L3:
            if (r4 == 0) goto L5a
            int r0 = r4.length
            if (r0 != 0) goto L9
            goto L5a
        L9:
            com.mbridge.msdk.foundation.controller.b r0 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r0 = r0.d()
            java.lang.String r1 = "share_date"
            if (r0 == 0) goto L2e
            com.mbridge.msdk.foundation.tools.FastKV r0 = com.mbridge.msdk.foundation.tools.ag.a
            if (r0 != 0) goto L2e
            com.mbridge.msdk.foundation.tools.FastKV$Builder r0 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L2b
            com.mbridge.msdk.foundation.same.b.c r2 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = com.mbridge.msdk.foundation.same.b.e.b(r2)     // Catch: java.lang.Exception -> L2b
            r0.<init>(r2, r1)     // Catch: java.lang.Exception -> L2b
            com.mbridge.msdk.foundation.tools.FastKV r0 = r0.build()     // Catch: java.lang.Exception -> L2b
            com.mbridge.msdk.foundation.tools.ag.a = r0     // Catch: java.lang.Exception -> L2b
            goto L2e
        L2b:
            r0 = 0
            com.mbridge.msdk.foundation.tools.ag.a = r0
        L2e:
            com.mbridge.msdk.foundation.tools.FastKV r0 = com.mbridge.msdk.foundation.tools.ag.a
            r2 = 0
            if (r0 == 0) goto L40
            int r3 = r4.length
        L34:
            if (r2 >= r3) goto L5a
            r0 = r4[r2]
            com.mbridge.msdk.foundation.tools.FastKV r1 = com.mbridge.msdk.foundation.tools.ag.a     // Catch: java.lang.Exception -> L3d
            r1.remove(r0)     // Catch: java.lang.Exception -> L3d
        L3d:
            int r2 = r2 + 1
            goto L34
        L40:
            android.content.Context r3 = r3.getApplicationContext()
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r3 = r3.edit()
            int r0 = r4.length
        L4d:
            if (r2 >= r0) goto L57
            r1 = r4[r2]
            r3.remove(r1)
            int r2 = r2 + 1
            goto L4d
        L57:
            r3.apply()
        L5a:
            return
    }

    public static java.lang.Object b(android.content.Context r8, java.lang.String r9, java.lang.Object r10) {
            if (r8 != 0) goto L3
            return r10
        L3:
            if (r10 == 0) goto Le
            java.lang.Class r0 = r10.getClass()
            java.lang.String r0 = r0.getSimpleName()
            goto L10
        Le:
            java.lang.String r0 = ""
        L10:
            com.mbridge.msdk.foundation.controller.b r1 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r1 = r1.d()
            java.lang.String r2 = "share_date"
            if (r1 == 0) goto L35
            com.mbridge.msdk.foundation.tools.FastKV r1 = com.mbridge.msdk.foundation.tools.ag.a
            if (r1 != 0) goto L35
            com.mbridge.msdk.foundation.tools.FastKV$Builder r1 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L32
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L32
            java.lang.String r3 = com.mbridge.msdk.foundation.same.b.e.b(r3)     // Catch: java.lang.Exception -> L32
            r1.<init>(r3, r2)     // Catch: java.lang.Exception -> L32
            com.mbridge.msdk.foundation.tools.FastKV r1 = r1.build()     // Catch: java.lang.Exception -> L32
            com.mbridge.msdk.foundation.tools.ag.a = r1     // Catch: java.lang.Exception -> L32
            goto L35
        L32:
            r1 = 0
            com.mbridge.msdk.foundation.tools.ag.a = r1
        L35:
            com.mbridge.msdk.foundation.tools.FastKV r1 = com.mbridge.msdk.foundation.tools.ag.a
            java.lang.String r3 = "Long"
            java.lang.String r4 = "Float"
            java.lang.String r5 = "Boolean"
            java.lang.String r6 = "Integer"
            java.lang.String r7 = "String"
            if (r1 == 0) goto Lb4
            boolean r8 = r7.equals(r0)     // Catch: java.lang.Exception -> Lb3
            if (r8 == 0) goto L53
            com.mbridge.msdk.foundation.tools.FastKV r8 = com.mbridge.msdk.foundation.tools.ag.a     // Catch: java.lang.Exception -> Lb3
            r0 = r10
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> Lb3
            java.lang.String r8 = r8.getString(r9, r0)     // Catch: java.lang.Exception -> Lb3
            return r8
        L53:
            boolean r8 = r6.equals(r0)     // Catch: java.lang.Exception -> Lb3
            if (r8 == 0) goto L6b
            com.mbridge.msdk.foundation.tools.FastKV r8 = com.mbridge.msdk.foundation.tools.ag.a     // Catch: java.lang.Exception -> Lb3
            r0 = r10
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Exception -> Lb3
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> Lb3
            int r8 = r8.getInt(r9, r0)     // Catch: java.lang.Exception -> Lb3
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Exception -> Lb3
            return r8
        L6b:
            boolean r8 = r5.equals(r0)     // Catch: java.lang.Exception -> Lb3
            if (r8 == 0) goto L83
            com.mbridge.msdk.foundation.tools.FastKV r8 = com.mbridge.msdk.foundation.tools.ag.a     // Catch: java.lang.Exception -> Lb3
            r0 = r10
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Exception -> Lb3
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Exception -> Lb3
            boolean r8 = r8.getBoolean(r9, r0)     // Catch: java.lang.Exception -> Lb3
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)     // Catch: java.lang.Exception -> Lb3
            return r8
        L83:
            boolean r8 = r4.equals(r0)     // Catch: java.lang.Exception -> Lb3
            if (r8 == 0) goto L9b
            com.mbridge.msdk.foundation.tools.FastKV r8 = com.mbridge.msdk.foundation.tools.ag.a     // Catch: java.lang.Exception -> Lb3
            r0 = r10
            java.lang.Float r0 = (java.lang.Float) r0     // Catch: java.lang.Exception -> Lb3
            float r0 = r0.floatValue()     // Catch: java.lang.Exception -> Lb3
            float r8 = r8.getFloat(r9, r0)     // Catch: java.lang.Exception -> Lb3
            java.lang.Float r8 = java.lang.Float.valueOf(r8)     // Catch: java.lang.Exception -> Lb3
            return r8
        L9b:
            boolean r8 = r3.equals(r0)     // Catch: java.lang.Exception -> Lb3
            if (r8 == 0) goto L11a
            com.mbridge.msdk.foundation.tools.FastKV r8 = com.mbridge.msdk.foundation.tools.ag.a     // Catch: java.lang.Exception -> Lb3
            r0 = r10
            java.lang.Long r0 = (java.lang.Long) r0     // Catch: java.lang.Exception -> Lb3
            long r0 = r0.longValue()     // Catch: java.lang.Exception -> Lb3
            long r8 = r8.getLong(r9, r0)     // Catch: java.lang.Exception -> Lb3
            java.lang.Long r8 = java.lang.Long.valueOf(r8)     // Catch: java.lang.Exception -> Lb3
            return r8
        Lb3:
            return r10
        Lb4:
            r1 = 0
            android.content.SharedPreferences r8 = r8.getSharedPreferences(r2, r1)
            boolean r1 = r7.equals(r0)
            if (r1 == 0) goto Lc6
            java.lang.String r10 = (java.lang.String) r10
            java.lang.String r8 = r8.getString(r9, r10)
            return r8
        Lc6:
            boolean r1 = r6.equals(r0)
            if (r1 == 0) goto Ldb
            java.lang.Integer r10 = (java.lang.Integer) r10
            int r10 = r10.intValue()
            int r8 = r8.getInt(r9, r10)
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            return r8
        Ldb:
            boolean r1 = r5.equals(r0)
            if (r1 == 0) goto Lf0
            java.lang.Boolean r10 = (java.lang.Boolean) r10
            boolean r10 = r10.booleanValue()
            boolean r8 = r8.getBoolean(r9, r10)
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)
            return r8
        Lf0:
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L105
            java.lang.Float r10 = (java.lang.Float) r10
            float r10 = r10.floatValue()
            float r8 = r8.getFloat(r9, r10)
            java.lang.Float r8 = java.lang.Float.valueOf(r8)
            return r8
        L105:
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L11a
            java.lang.Long r10 = (java.lang.Long) r10
            long r0 = r10.longValue()
            long r8 = r8.getLong(r9, r0)
            java.lang.Long r8 = java.lang.Long.valueOf(r8)
            return r8
        L11a:
            return r10
    }
}
