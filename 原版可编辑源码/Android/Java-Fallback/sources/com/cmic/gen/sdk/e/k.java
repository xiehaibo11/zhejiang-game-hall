package com.cmic.gen.sdk.e;

public class k {
    private static android.content.Context a;

    public static class a {
        private final android.content.SharedPreferences.Editor a;

        a(android.content.SharedPreferences.Editor r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        public void a() {
                r1 = this;
                android.content.SharedPreferences$Editor r0 = r1.a
                r0.apply()
                return
        }

        public void a(java.lang.String r2) {
                r1 = this;
                android.content.SharedPreferences$Editor r0 = r1.a
                java.lang.String r2 = com.cmic.gen.sdk.e.d.a(r2)
                r0.remove(r2)
                return
        }

        public void a(java.lang.String r2, int r3) {
                r1 = this;
                android.content.SharedPreferences$Editor r0 = r1.a
                java.lang.String r2 = com.cmic.gen.sdk.e.d.a(r2)
                r0.putInt(r2, r3)
                return
        }

        public void a(java.lang.String r2, long r3) {
                r1 = this;
                android.content.SharedPreferences$Editor r0 = r1.a
                java.lang.String r2 = com.cmic.gen.sdk.e.d.a(r2)
                r0.putLong(r2, r3)
                return
        }

        public void a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                android.content.SharedPreferences$Editor r0 = r1.a
                java.lang.String r2 = com.cmic.gen.sdk.e.d.a(r2)
                r0.putString(r2, r3)
                return
        }

        public void b() {
                r1 = this;
                android.content.SharedPreferences$Editor r0 = r1.a
                r0.commit()
                return
        }

        public void c() {
                r1 = this;
                android.content.SharedPreferences$Editor r0 = r1.a
                r0.clear()
                return
        }
    }

    public static int a(java.lang.String r3, int r4) {
            android.content.Context r0 = com.cmic.gen.sdk.e.k.a
            java.lang.String r1 = "ssoconfigs"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r3 = com.cmic.gen.sdk.e.d.a(r3)
            int r3 = r0.getInt(r3, r4)
            return r3
    }

    public static int a(java.lang.String r2, java.lang.String r3, int r4) {
            android.content.Context r0 = com.cmic.gen.sdk.e.k.a
            r1 = 0
            android.content.SharedPreferences r2 = r0.getSharedPreferences(r2, r1)
            java.lang.String r3 = com.cmic.gen.sdk.e.d.a(r3)
            int r2 = r2.getInt(r3, r4)
            return r2
    }

    public static long a(java.lang.String r3, long r4) {
            android.content.Context r0 = com.cmic.gen.sdk.e.k.a
            java.lang.String r1 = "ssoconfigs"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r3 = com.cmic.gen.sdk.e.d.a(r3)
            long r3 = r0.getLong(r3, r4)
            return r3
    }

    public static long a(java.lang.String r2, java.lang.String r3, long r4) {
            android.content.Context r0 = com.cmic.gen.sdk.e.k.a
            r1 = 0
            android.content.SharedPreferences r2 = r0.getSharedPreferences(r2, r1)
            java.lang.String r3 = com.cmic.gen.sdk.e.d.a(r3)
            long r2 = r2.getLong(r3, r4)
            return r2
    }

    public static com.cmic.gen.sdk.e.k.a a() {
            android.content.Context r0 = com.cmic.gen.sdk.e.k.a
            java.lang.String r1 = "ssoconfigs"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            com.cmic.gen.sdk.e.k$a r1 = new com.cmic.gen.sdk.e.k$a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r1.<init>(r0)
            return r1
    }

    public static java.lang.String a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            android.content.Context r0 = com.cmic.gen.sdk.e.k.a
            r1 = 0
            android.content.SharedPreferences r2 = r0.getSharedPreferences(r2, r1)
            java.lang.String r3 = com.cmic.gen.sdk.e.d.a(r3)
            java.lang.String r2 = r2.getString(r3, r4)
            return r2
    }

    public static void a(android.content.Context r0) {
            android.content.Context r0 = r0.getApplicationContext()
            com.cmic.gen.sdk.e.k.a = r0
            return
    }

    public static void a(java.lang.String r3) {
            android.content.Context r0 = com.cmic.gen.sdk.e.k.a
            java.lang.String r1 = "ssoconfigs"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r3 = com.cmic.gen.sdk.e.d.a(r3)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r3 = r0.remove(r3)
            r3.commit()
            return
    }

    public static void a(java.lang.String r3, java.lang.String r4) {
            android.content.Context r0 = com.cmic.gen.sdk.e.k.a
            java.lang.String r1 = "ssoconfigs"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r3 = com.cmic.gen.sdk.e.d.a(r3)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r3 = r0.putString(r3, r4)
            r3.commit()
            return
    }

    public static void a(java.util.Map<java.lang.String, java.lang.Object> r5) {
            if (r5 == 0) goto L68
            boolean r0 = r5.isEmpty()
            if (r0 != 0) goto L68
            android.content.Context r0 = com.cmic.gen.sdk.e.k.a
            r1 = 0
            java.lang.String r2 = "ssoconfigs"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.util.Set r1 = r5.keySet()
            java.util.Iterator r1 = r1.iterator()
        L1d:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L65
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r5.get(r2)
            java.lang.String r2 = com.cmic.gen.sdk.e.d.a(r2)
            boolean r4 = r3 instanceof java.lang.String
            if (r4 == 0) goto L3b
            java.lang.String r3 = (java.lang.String) r3
            r0.putString(r2, r3)
            goto L1d
        L3b:
            boolean r4 = r3 instanceof java.lang.Integer
            if (r4 == 0) goto L49
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            r0.putInt(r2, r3)
            goto L1d
        L49:
            boolean r4 = r3 instanceof java.lang.Long
            if (r4 == 0) goto L57
            java.lang.Long r3 = (java.lang.Long) r3
            long r3 = r3.longValue()
            r0.putLong(r2, r3)
            goto L1d
        L57:
            boolean r4 = r3 instanceof java.lang.Boolean
            if (r4 == 0) goto L1d
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            r0.putBoolean(r2, r3)
            goto L1d
        L65:
            r0.commit()
        L68:
            return
    }

    public static com.cmic.gen.sdk.e.k.a b(java.lang.String r2) {
            android.content.Context r0 = com.cmic.gen.sdk.e.k.a
            r1 = 0
            android.content.SharedPreferences r2 = r0.getSharedPreferences(r2, r1)
            com.cmic.gen.sdk.e.k$a r0 = new com.cmic.gen.sdk.e.k$a
            android.content.SharedPreferences$Editor r2 = r2.edit()
            r0.<init>(r2)
            return r0
    }

    public static java.lang.String b(java.lang.String r3, java.lang.String r4) {
            android.content.Context r0 = com.cmic.gen.sdk.e.k.a
            java.lang.String r1 = "ssoconfigs"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r3 = com.cmic.gen.sdk.e.d.a(r3)
            java.lang.String r3 = r0.getString(r3, r4)
            return r3
    }
}
