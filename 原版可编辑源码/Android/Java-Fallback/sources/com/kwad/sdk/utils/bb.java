package com.kwad.sdk.utils;

@java.lang.Deprecated
public class bb {
    static final java.lang.String TAG = null;

    static {
            java.lang.Class<com.kwad.sdk.utils.bb> r0 = com.kwad.sdk.utils.bb.class
            java.lang.String r0 = r0.getSimpleName()
            com.kwad.sdk.utils.bb.TAG = r0
            return
    }

    public bb() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(android.content.SharedPreferences.Editor r2, java.lang.String r3, java.lang.Object r4) {
            if (r3 == 0) goto L4f
            boolean r0 = r4 instanceof java.lang.Integer
            if (r0 == 0) goto L10
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            r2.putInt(r3, r4)
            return
        L10:
            boolean r0 = r4 instanceof java.lang.Long
            if (r0 == 0) goto L1e
            java.lang.Long r4 = (java.lang.Long) r4
            long r0 = r4.longValue()
            r2.putLong(r3, r0)
            return
        L1e:
            boolean r0 = r4 instanceof java.lang.Boolean
            if (r0 == 0) goto L2c
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            r2.putBoolean(r3, r4)
            return
        L2c:
            boolean r0 = r4 instanceof java.lang.Float
            if (r0 == 0) goto L3a
            java.lang.Float r4 = (java.lang.Float) r4
            float r4 = r4.floatValue()
            r2.putFloat(r3, r4)
            return
        L3a:
            boolean r0 = r4 instanceof java.util.Set
            if (r0 == 0) goto L44
            java.util.Set r4 = (java.util.Set) r4
            r2.putStringSet(r3, r4)
            return
        L44:
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L4f
            java.lang.String r4 = java.lang.String.valueOf(r4)
            r2.putString(r3, r4)
        L4f:
            return
    }

    static void a(java.lang.String r0, java.lang.String r1, long r2) {
            android.content.SharedPreferences r0 = fH(r0)
            if (r0 != 0) goto L7
            return
        L7:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.putLong(r1, r2)
            r0.apply()
            return
    }

    static void a(java.lang.String r0, java.lang.String r1, java.lang.String r2, boolean r3) {
            android.content.SharedPreferences r0 = fH(r0)
            if (r0 != 0) goto L7
            return
        L7:
            if (r3 == 0) goto L13
            boolean r3 = com.kwad.sdk.core.a.c.cT(r2)
            if (r3 != 0) goto L13
            java.lang.String r2 = com.kwad.sdk.core.a.c.cR(r2)
        L13:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.putString(r1, r2)
            r0.apply()
            return
    }

    static <T> void a(java.lang.String r2, java.util.Map<java.lang.String, T> r3) {
            android.content.SharedPreferences r2 = fH(r2)
            if (r2 != 0) goto L7
            return
        L7:
            android.content.SharedPreferences$Editor r2 = r2.edit()
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L13:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L38
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            a(r2, r1, r0)     // Catch: java.lang.Throwable -> L2d
            goto L13
        L2d:
            r0 = move-exception
            java.lang.String r1 = com.kwad.sdk.utils.bb.TAG
            java.lang.String r0 = android.util.Log.getStackTraceString(r0)
            com.kwad.sdk.core.e.c.e(r1, r0)
            goto L13
        L38:
            r2.apply()
            return
    }

    static void ar(java.lang.String r0, java.lang.String r1) {
            android.content.SharedPreferences r0 = fH(r0)
            if (r0 != 0) goto L7
            return
        L7:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.remove(r1)
            r0.apply()
            return
    }

    static long b(java.lang.String r0, java.lang.String r1, long r2) {
            android.content.SharedPreferences r0 = fH(r0)
            if (r0 != 0) goto L7
            return r2
        L7:
            long r0 = r0.getLong(r1, r2)
            return r0
    }

    static void b(java.lang.String r0, java.lang.String r1, int r2) {
            android.content.SharedPreferences r0 = fH(r0)
            if (r0 != 0) goto L7
            return
        L7:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.putInt(r1, r2)
            r0.apply()
            return
    }

    static int c(java.lang.String r0, java.lang.String r1, int r2) {
            android.content.SharedPreferences r0 = fH(r0)
            if (r0 != 0) goto L7
            return r2
        L7:
            int r0 = r0.getInt(r1, r2)
            return r0
    }

    public static android.content.SharedPreferences fH(java.lang.String r2) {
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()     // Catch: java.lang.Throwable -> La
            r1 = 0
            android.content.SharedPreferences r2 = r0.getSharedPreferences(r2, r1)     // Catch: java.lang.Throwable -> La
            return r2
        La:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            r2 = 0
            return r2
    }

    static void g(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = 0
            a(r1, r2, r3, r0)
            return
    }

    static java.lang.String h(java.lang.String r0, java.lang.String r1, java.lang.String r2) {
            android.content.SharedPreferences r0 = fH(r0)
            if (r0 != 0) goto L7
            return r2
        L7:
            java.lang.String r0 = r0.getString(r1, r2)
            if (r0 == 0) goto L25
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L14
            goto L25
        L14:
            boolean r1 = android.text.TextUtils.equals(r0, r2)
            if (r1 != 0) goto L24
            boolean r1 = com.kwad.sdk.core.a.c.cT(r0)
            if (r1 == 0) goto L24
            java.lang.String r0 = com.kwad.sdk.core.a.c.cS(r0)
        L24:
            return r0
        L25:
            return r2
    }

    static void i(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.kwad.sdk.core.a.c.cT(r1)
            if (r0 != 0) goto Ld
            java.lang.String r1 = com.kwad.sdk.core.a.c.cR(r1)
            g(r2, r3, r1)
        Ld:
            return
    }

    static void l(java.lang.String r0, java.lang.String r1, boolean r2) {
            android.content.SharedPreferences r0 = fH(r0)
            if (r0 != 0) goto L7
            return
        L7:
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.putBoolean(r1, r2)
            r0.apply()
            return
    }

    static boolean m(java.lang.String r0, java.lang.String r1, boolean r2) {
            android.content.SharedPreferences r0 = fH(r0)
            if (r0 != 0) goto L7
            return r2
        L7:
            boolean r0 = r0.getBoolean(r1, r2)
            return r0
    }
}
