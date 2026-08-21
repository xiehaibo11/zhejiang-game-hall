package com.tkay.expressad.foundation.h;

public final class v {
    public static final java.lang.String a = "H+tU+FeXHM==";
    public static final java.lang.String b = "cv";
    private static final java.lang.String c = "tkay_share_date";

    public v() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a() {
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r0 = r0.d()
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = "cv"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.clear()
            r0.commit()
            return
    }

    private static void a(android.content.Context r2, java.lang.String r3) {
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r0 = "tkay_share_date"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            r2.remove(r3)
            r2.apply()
            return
    }

    public static void a(android.content.Context r3, java.lang.String r4, java.lang.Object r5) {
            java.lang.Class r0 = r5.getClass()
            java.lang.String r0 = r0.getSimpleName()
            if (r3 != 0) goto Lb
            return
        Lb:
            android.content.Context r3 = r3.getApplicationContext()
            r1 = 0
            java.lang.String r2 = "tkay_share_date"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r3 = r3.edit()
            java.lang.String r1 = "String"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L28
            java.lang.String r5 = (java.lang.String) r5
            r3.putString(r4, r5)
            goto L6f
        L28:
            java.lang.String r1 = "Integer"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L3a
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            r3.putInt(r4, r5)
            goto L6f
        L3a:
            java.lang.String r1 = "Boolean"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L4c
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            r3.putBoolean(r4, r5)
            goto L6f
        L4c:
            java.lang.String r1 = "Float"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L5e
            java.lang.Float r5 = (java.lang.Float) r5
            float r5 = r5.floatValue()
            r3.putFloat(r4, r5)
            goto L6f
        L5e:
            java.lang.String r1 = "Long"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L6f
            java.lang.Long r5 = (java.lang.Long) r5
            long r0 = r5.longValue()
            r3.putLong(r4, r0)
        L6f:
            r3.apply()
            return
    }

    private static void a(android.content.Context r3, java.lang.String... r4) {
            android.content.Context r3 = r3.getApplicationContext()
            r0 = 0
            java.lang.String r1 = "tkay_share_date"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r0)
            android.content.SharedPreferences$Editor r3 = r3.edit()
            int r1 = r4.length
        L10:
            if (r0 >= r1) goto L1a
            r2 = r4[r0]
            r3.remove(r2)
            int r0 = r0 + 1
            goto L10
        L1a:
            r3.apply()
            return
    }

    private static void a(java.lang.String r3) {
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r0 = r0.d()
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = "cv"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.remove(r3)
            r0.apply()
            return
    }

    public static java.lang.Object b(android.content.Context r3, java.lang.String r4, java.lang.Object r5) {
            if (r3 != 0) goto L3
            return r5
        L3:
            if (r5 == 0) goto Le
            java.lang.Class r0 = r5.getClass()
            java.lang.String r0 = r0.getSimpleName()
            goto L10
        Le:
            java.lang.String r0 = ""
        L10:
            r1 = 0
            java.lang.String r2 = "tkay_share_date"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r2, r1)
            java.lang.String r1 = "String"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L26
            java.lang.String r5 = (java.lang.String) r5
            java.lang.String r3 = r3.getString(r4, r5)
            return r3
        L26:
            java.lang.String r1 = "Integer"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L3d
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            int r3 = r3.getInt(r4, r5)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            return r3
        L3d:
            java.lang.String r1 = "Boolean"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L54
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            boolean r3 = r3.getBoolean(r4, r5)
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            return r3
        L54:
            java.lang.String r1 = "Float"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L6b
            java.lang.Float r5 = (java.lang.Float) r5
            float r5 = r5.floatValue()
            float r3 = r3.getFloat(r4, r5)
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            return r3
        L6b:
            java.lang.String r1 = "Long"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L82
            java.lang.Long r5 = (java.lang.Long) r5
            long r0 = r5.longValue()
            long r3 = r3.getLong(r4, r0)
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            return r3
        L82:
            return r5
    }

    private static void c(android.content.Context r3, java.lang.String r4, java.lang.Object r5) {
            java.lang.Class r0 = r5.getClass()
            java.lang.String r0 = r0.getSimpleName()
            android.content.Context r3 = r3.getApplicationContext()
            java.lang.String r1 = "cv"
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r3 = r3.edit()
            java.lang.String r1 = "String"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L25
            java.lang.String r5 = (java.lang.String) r5
            r3.putString(r4, r5)
            goto L6c
        L25:
            java.lang.String r1 = "Integer"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L37
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            r3.putInt(r4, r5)
            goto L6c
        L37:
            java.lang.String r1 = "Boolean"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L49
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            r3.putBoolean(r4, r5)
            goto L6c
        L49:
            java.lang.String r1 = "Float"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L5b
            java.lang.Float r5 = (java.lang.Float) r5
            float r5 = r5.floatValue()
            r3.putFloat(r4, r5)
            goto L6c
        L5b:
            java.lang.String r1 = "Long"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L6c
            java.lang.Long r5 = (java.lang.Long) r5
            long r0 = r5.longValue()
            r3.putLong(r4, r0)
        L6c:
            r3.apply()
            return
    }

    private static java.lang.Object d(android.content.Context r3, java.lang.String r4, java.lang.Object r5) {
            if (r5 == 0) goto Lb
            java.lang.Class r0 = r5.getClass()
            java.lang.String r0 = r0.getSimpleName()
            goto Ld
        Lb:
            java.lang.String r0 = ""
        Ld:
            r1 = 0
            java.lang.String r2 = "cv"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r2, r1)
            java.lang.String r1 = "String"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L23
            java.lang.String r5 = (java.lang.String) r5
            java.lang.String r3 = r3.getString(r4, r5)
            return r3
        L23:
            java.lang.String r1 = "Integer"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L3a
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            int r3 = r3.getInt(r4, r5)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            return r3
        L3a:
            java.lang.String r1 = "Boolean"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L51
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            boolean r3 = r3.getBoolean(r4, r5)
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            return r3
        L51:
            java.lang.String r1 = "Float"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L68
            java.lang.Float r5 = (java.lang.Float) r5
            float r5 = r5.floatValue()
            float r3 = r3.getFloat(r4, r5)
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            return r3
        L68:
            java.lang.String r1 = "Long"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L7f
            java.lang.Long r5 = (java.lang.Long) r5
            long r0 = r5.longValue()
            long r3 = r3.getLong(r4, r0)
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            return r3
        L7f:
            return r5
    }
}
