package com.igexin.push.extension.distribution.basic.g;

public class g {
    public static void a(android.content.Context r2, java.lang.String r3, java.lang.Object r4) {
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r0 = "getui_sp"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L19
            java.lang.String r4 = (java.lang.String) r4
            r2.putString(r3, r4)
            goto L50
        L19:
            boolean r0 = r4 instanceof java.lang.Integer
            if (r0 == 0) goto L27
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            r2.putInt(r3, r4)
            goto L50
        L27:
            boolean r0 = r4 instanceof java.lang.Boolean
            if (r0 == 0) goto L35
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            r2.putBoolean(r3, r4)
            goto L50
        L35:
            boolean r0 = r4 instanceof java.lang.Float
            if (r0 == 0) goto L43
            java.lang.Float r4 = (java.lang.Float) r4
            float r4 = r4.floatValue()
            r2.putFloat(r3, r4)
            goto L50
        L43:
            boolean r0 = r4 instanceof java.lang.Long
            if (r0 == 0) goto L50
            java.lang.Long r4 = (java.lang.Long) r4
            long r0 = r4.longValue()
            r2.putLong(r3, r0)
        L50:
            r2.commit()
            return
    }

    public static java.lang.Object b(android.content.Context r2, java.lang.String r3, java.lang.Object r4) {
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r0 = "getui_sp"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L16
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r2 = r2.getString(r3, r4)
            return r2
        L16:
            boolean r0 = r4 instanceof java.lang.Integer
            if (r0 == 0) goto L29
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            int r2 = r2.getInt(r3, r4)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            return r2
        L29:
            boolean r0 = r4 instanceof java.lang.Boolean
            if (r0 == 0) goto L3c
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            boolean r2 = r2.getBoolean(r3, r4)
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            return r2
        L3c:
            boolean r0 = r4 instanceof java.lang.Float
            if (r0 == 0) goto L4f
            java.lang.Float r4 = (java.lang.Float) r4
            float r4 = r4.floatValue()
            float r2 = r2.getFloat(r3, r4)
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            return r2
        L4f:
            boolean r0 = r4 instanceof java.lang.Long
            if (r0 == 0) goto L62
            java.lang.Long r4 = (java.lang.Long) r4
            long r0 = r4.longValue()
            long r2 = r2.getLong(r3, r0)
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            return r2
        L62:
            return r4
    }
}
