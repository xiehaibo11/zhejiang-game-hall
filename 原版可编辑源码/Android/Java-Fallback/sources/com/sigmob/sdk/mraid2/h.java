package com.sigmob.sdk.mraid2;

public class h {
    private static final java.lang.String a = "mraid_storage";

    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            if (r3 == 0) goto L12
            r1 = 0
            java.lang.String r2 = "mraid_storage"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r2, r1)
            if (r3 != 0) goto Ld
            return r0
        Ld:
            java.lang.String r3 = r3.getString(r4, r0)
            return r3
        L12:
            return r0
    }

    public static java.util.Map<java.lang.String, ?> a(android.content.Context r2) {
            java.lang.String r0 = "mraid_storage"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            if (r2 == 0) goto Le
            java.util.Map r2 = r2.getAll()
            return r2
        Le:
            r2 = 0
            return r2
    }

    public static void a(android.content.Context r2, java.lang.String r3, java.lang.Object r4) {
            java.lang.String r0 = "mraid_storage"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            if (r2 == 0) goto L5e
            android.content.SharedPreferences$Editor r2 = r2.edit()
            boolean r0 = r4 instanceof java.lang.Boolean
            if (r0 == 0) goto L1b
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            r2.putBoolean(r3, r4)
            goto L5b
        L1b:
            boolean r0 = r4 instanceof java.lang.Float
            if (r0 == 0) goto L29
            java.lang.Float r4 = (java.lang.Float) r4
            float r4 = r4.floatValue()
            r2.putFloat(r3, r4)
            goto L5b
        L29:
            boolean r0 = r4 instanceof java.lang.Integer
            if (r0 == 0) goto L37
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            r2.putInt(r3, r4)
            goto L5b
        L37:
            boolean r0 = r4 instanceof java.lang.Long
            if (r0 == 0) goto L45
            java.lang.Long r4 = (java.lang.Long) r4
            long r0 = r4.longValue()
            r2.putLong(r3, r0)
            goto L5b
        L45:
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L4f
            java.lang.String r4 = (java.lang.String) r4
            r2.putString(r3, r4)
            goto L5b
        L4f:
            boolean r0 = r4 instanceof java.util.Set
            if (r0 == 0) goto L5b
            r2.remove(r3)
            java.util.Set r4 = (java.util.Set) r4
            r2.putStringSet(r3, r4)
        L5b:
            r2.apply()
        L5e:
            return
    }

    public static java.lang.Object b(android.content.Context r2, java.lang.String r3, java.lang.Object r4) {
            java.lang.String r0 = "mraid_storage"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            r0 = 0
            if (r2 != 0) goto Lb
            return r0
        Lb:
            boolean r1 = r4 instanceof java.lang.Boolean
            if (r1 == 0) goto L1e
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            boolean r2 = r2.getBoolean(r3, r4)
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            return r2
        L1e:
            boolean r1 = r4 instanceof java.lang.Float
            if (r1 == 0) goto L31
            java.lang.Float r4 = (java.lang.Float) r4
            float r4 = r4.floatValue()
            float r2 = r2.getFloat(r3, r4)
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            return r2
        L31:
            boolean r1 = r4 instanceof java.lang.Integer
            if (r1 == 0) goto L44
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            int r2 = r2.getInt(r3, r4)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            return r2
        L44:
            boolean r1 = r4 instanceof java.lang.Long
            if (r1 == 0) goto L57
            java.lang.Long r4 = (java.lang.Long) r4
            long r0 = r4.longValue()
            long r2 = r2.getLong(r3, r0)
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            return r2
        L57:
            boolean r1 = r4 instanceof java.lang.String
            if (r1 == 0) goto L62
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r2 = r2.getString(r3, r4)
            return r2
        L62:
            boolean r1 = r4 instanceof java.util.Set
            if (r1 == 0) goto L6d
            java.util.Set r4 = (java.util.Set) r4
            java.util.Set r2 = r2.getStringSet(r3, r4)
            return r2
        L6d:
            return r0
    }

    public static void b(android.content.Context r2) {
            java.lang.String r0 = "mraid_storage"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            if (r2 == 0) goto L13
            android.content.SharedPreferences$Editor r2 = r2.edit()
            r2.clear()
            r2.apply()
        L13:
            return
    }

    public static void b(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "mraid_storage"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            if (r2 == 0) goto L13
            android.content.SharedPreferences$Editor r2 = r2.edit()
            r2.remove(r3)
            r2.apply()
        L13:
            return
    }

    public static boolean c(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            java.lang.String r1 = "mraid_storage"
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r1, r0)
            if (r2 == 0) goto L10
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L10
            r0 = 1
        L10:
            return r0
    }
}
