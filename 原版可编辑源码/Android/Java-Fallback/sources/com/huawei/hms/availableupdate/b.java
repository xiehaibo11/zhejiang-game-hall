package com.huawei.hms.availableupdate;

public class b {
    public java.lang.String a;
    public int b;
    public java.lang.String c;
    public int d;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public int a() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public void a(android.content.Context r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.d = r2
            r0.b(r1, r3)
            return
    }

    public void a(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "com.huawei.hms.update.DOWNLOAD_RECORD"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r0 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r4, r0)
            java.lang.String r4 = ""
            java.lang.String r1 = "mUri"
            java.lang.String r1 = r3.getString(r1, r4)
            r2.a = r1
            java.lang.String r1 = "mSize"
            int r1 = r3.getInt(r1, r0)
            r2.b = r1
            java.lang.String r1 = "mHash"
            java.lang.String r4 = r3.getString(r1, r4)
            r2.c = r4
            java.lang.String r4 = "mReceived"
            int r3 = r3.getInt(r4, r0)
            r2.d = r3
            return
    }

    public void a(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r1 = 0
            r0.d = r1
            return
    }

    public int b() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public final void b(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "com.huawei.hms.update.DOWNLOAD_RECORD"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r0 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r4, r0)
            android.content.SharedPreferences$Editor r3 = r3.edit()
            java.lang.String r4 = r2.a
            java.lang.String r0 = "mUri"
            r3.putString(r0, r4)
            int r4 = r2.b
            java.lang.String r0 = "mSize"
            r3.putInt(r0, r4)
            java.lang.String r4 = r2.c
            java.lang.String r0 = "mHash"
            r3.putString(r0, r4)
            int r4 = r2.d
            java.lang.String r0 = "mReceived"
            r3.putInt(r0, r4)
            r3.commit()
            return
    }

    public boolean b(java.lang.String r2, int r3, java.lang.String r4) {
            r1 = this;
            if (r2 == 0) goto L24
            if (r4 == 0) goto L24
            java.lang.String r0 = r1.a
            if (r0 == 0) goto L24
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L24
            int r2 = r1.b
            if (r2 != r3) goto L24
            java.lang.String r2 = r1.c
            if (r2 == 0) goto L24
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L24
            int r2 = r1.d
            int r3 = r1.b
            if (r2 > r3) goto L24
            r2 = 1
            goto L25
        L24:
            r2 = 0
        L25:
            return r2
    }
}
