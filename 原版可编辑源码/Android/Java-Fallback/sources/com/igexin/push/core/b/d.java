package com.igexin.push.core.b;

public class d {
    private static final java.lang.Object b = null;
    private static final java.lang.Object c = null;
    private android.content.SharedPreferences a;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.igexin.push.core.b.d.b = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.igexin.push.core.b.d.c = r0
            return
    }

    public d(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            if (r3 == 0) goto Le
            r0 = 0
            java.lang.String r1 = "gx_msg_sp"
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r0)
            r2.a = r3
        Le:
            return
    }

    private void a(org.json.JSONObject r13) {
            r12 = this;
            int r0 = r13.length()     // Catch: java.lang.Throwable -> L42
            r1 = 150(0x96, float:2.1E-43)
            if (r0 >= r1) goto L9
            return
        L9:
            r0 = 0
            r1 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r3 = 0
            java.util.Iterator r4 = r13.keys()     // Catch: java.lang.Throwable -> L42
        L14:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L42
            if (r5 == 0) goto L3b
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L42
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L42
            long r6 = r13.getLong(r5)     // Catch: java.lang.Throwable -> L42
            int r8 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r8 <= 0) goto L2a
            r3 = r5
            r1 = r6
        L2a:
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L42
            r10 = 432000000(0x19bfcc00, double:2.13436359E-315)
            long r8 = r8 - r10
            int r5 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r5 >= 0) goto L14
            r4.remove()     // Catch: java.lang.Throwable -> L42
            r0 = 1
            goto L14
        L3b:
            if (r0 != 0) goto L42
            if (r3 == 0) goto L42
            r13.remove(r3)     // Catch: java.lang.Throwable -> L42
        L42:
            return
    }

    private void b(org.json.JSONObject r13) {
            r12 = this;
            int r0 = r13.length()     // Catch: java.lang.Throwable -> L4c
            r1 = 20
            if (r0 >= r1) goto L9
            return
        L9:
            r0 = 0
            r1 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r3 = 0
            java.util.Iterator r4 = r13.keys()     // Catch: java.lang.Throwable -> L4c
        L14:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L4c
            if (r5 == 0) goto L45
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L4c
            org.json.JSONObject r6 = r13.getJSONObject(r5)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r7 = "timestamp"
            java.lang.String r6 = r6.getString(r7)     // Catch: java.lang.Throwable -> L4c
            long r6 = java.lang.Long.parseLong(r6)     // Catch: java.lang.Throwable -> L4c
            int r8 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r8 <= 0) goto L34
            r3 = r5
            r1 = r6
        L34:
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L4c
            r10 = 432000000(0x19bfcc00, double:2.13436359E-315)
            long r8 = r8 - r10
            int r5 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r5 >= 0) goto L14
            r4.remove()     // Catch: java.lang.Throwable -> L4c
            r0 = 1
            goto L14
        L45:
            if (r0 != 0) goto L4c
            if (r3 == 0) goto L4c
            r13.remove(r3)     // Catch: java.lang.Throwable -> L4c
        L4c:
            return
    }

    public org.json.JSONObject a() {
            r3 = this;
            android.content.SharedPreferences r0 = r3.a     // Catch: java.lang.Throwable -> L16
            java.lang.String r1 = "taskIdList"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.getString(r1, r2)     // Catch: java.lang.Throwable -> L16
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L16
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L16
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r0 = 0
            return r0
    }

    public void a(java.lang.String r4, org.json.JSONObject r5) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.a
            if (r0 == 0) goto L3e
            if (r5 == 0) goto L3e
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Ld
            goto L3e
        Ld:
            java.lang.Object r0 = com.igexin.push.core.b.d.b
            monitor-enter(r0)
            org.json.JSONObject r1 = r3.b()     // Catch: java.lang.Throwable -> L39
            if (r1 != 0) goto L1b
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L39
            r1.<init>()     // Catch: java.lang.Throwable -> L39
        L1b:
            int r2 = r1.length()     // Catch: java.lang.Throwable -> L39
            if (r2 <= 0) goto L24
            r3.b(r1)     // Catch: java.lang.Throwable -> L39
        L24:
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> L39
            android.content.SharedPreferences r4 = r3.a     // Catch: java.lang.Throwable -> L39
            android.content.SharedPreferences$Editor r4 = r4.edit()     // Catch: java.lang.Throwable -> L39
            java.lang.String r5 = "usfdl"
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L39
            r4.putString(r5, r1)     // Catch: java.lang.Throwable -> L39
            r4.apply()     // Catch: java.lang.Throwable -> L39
        L39:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3b
            return
        L3b:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3b
            throw r4
        L3e:
            return
    }

    public boolean a(java.lang.String r4) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.a
            r1 = 0
            if (r0 == 0) goto L35
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lc
            goto L35
        Lc:
            org.json.JSONObject r0 = r3.a()     // Catch: java.lang.Throwable -> L35
            if (r0 == 0) goto L35
            boolean r0 = r0.has(r4)     // Catch: java.lang.Throwable -> L35
            if (r0 == 0) goto L35
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r0.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "sp task "
            r0.append(r2)     // Catch: java.lang.Throwable -> L35
            r0.append(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = " already exists"
            r0.append(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L35
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L35
            com.igexin.b.a.c.b.a(r4, r0)     // Catch: java.lang.Throwable -> L35
            r4 = 1
            return r4
        L35:
            return r1
    }

    public org.json.JSONObject b() {
            r3 = this;
            android.content.SharedPreferences r0 = r3.a     // Catch: java.lang.Throwable -> L16
            java.lang.String r1 = "usfdl"
            java.lang.String r2 = ""
            java.lang.String r0 = r0.getString(r1, r2)     // Catch: java.lang.Throwable -> L16
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L16
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L16
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r0 = 0
            return r0
    }

    public void b(java.lang.String r5) {
            r4 = this;
            android.content.SharedPreferences r0 = r4.a
            if (r0 == 0) goto L40
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto Lb
            goto L40
        Lb:
            java.lang.Object r0 = com.igexin.push.core.b.d.c
            monitor-enter(r0)
            org.json.JSONObject r1 = r4.a()     // Catch: java.lang.Throwable -> L3b
            if (r1 != 0) goto L19
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3b
            r1.<init>()     // Catch: java.lang.Throwable -> L3b
        L19:
            int r2 = r1.length()     // Catch: java.lang.Throwable -> L3b
            if (r2 <= 0) goto L22
            r4.a(r1)     // Catch: java.lang.Throwable -> L3b
        L22:
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L3b
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L3b
            android.content.SharedPreferences r5 = r4.a     // Catch: java.lang.Throwable -> L3b
            android.content.SharedPreferences$Editor r5 = r5.edit()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = "taskIdList"
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L3b
            r5.putString(r2, r1)     // Catch: java.lang.Throwable -> L3b
            r5.apply()     // Catch: java.lang.Throwable -> L3b
        L3b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            return
        L3d:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            throw r5
        L40:
            return
    }

    public org.json.JSONObject c() {
            r10 = this;
            java.lang.Object r0 = com.igexin.push.core.b.d.b
            monitor-enter(r0)
            r1 = 0
            android.content.SharedPreferences r2 = r10.a     // Catch: java.lang.Throwable -> L54
            java.lang.String r3 = "usfdl"
            java.lang.String r4 = ""
            java.lang.String r2 = r2.getString(r3, r4)     // Catch: java.lang.Throwable -> L54
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L54
            if (r3 == 0) goto L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            return r1
        L16:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L54
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L54
            java.util.Iterator r2 = r3.keys()     // Catch: java.lang.Throwable -> L54
        L1f:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> L54
            if (r4 == 0) goto L52
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> L54
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L54
            org.json.JSONObject r4 = r3.getJSONObject(r4)     // Catch: java.lang.Throwable -> L54
            java.lang.String r5 = "timestamp"
            boolean r5 = r4.has(r5)     // Catch: java.lang.Throwable -> L54
            if (r5 != 0) goto L3b
        L37:
            r2.remove()     // Catch: java.lang.Throwable -> L54
            goto L1f
        L3b:
            java.lang.String r5 = "timestamp"
            java.lang.String r4 = r4.getString(r5)     // Catch: java.lang.Throwable -> L54
            long r4 = java.lang.Long.parseLong(r4)     // Catch: java.lang.Throwable -> L54
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L54
            r8 = 432000000(0x19bfcc00, double:2.13436359E-315)
            long r6 = r6 - r8
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 >= 0) goto L1f
            goto L37
        L52:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            return r3
        L54:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            return r1
        L56:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L56
            throw r1
    }

    public void c(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.a     // Catch: java.lang.Throwable -> Le
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> Le
            java.lang.String r1 = "gx_vendor_token"
            r0.putString(r1, r3)     // Catch: java.lang.Throwable -> Le
            r0.apply()     // Catch: java.lang.Throwable -> Le
        Le:
            return
    }

    public void d() {
            r4 = this;
            java.lang.Object r0 = com.igexin.push.core.b.d.b
            monitor-enter(r0)
            android.content.SharedPreferences r1 = r4.a     // Catch: java.lang.Throwable -> L17
            if (r1 == 0) goto L17
            android.content.SharedPreferences r1 = r4.a     // Catch: java.lang.Throwable -> L17
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L17
            java.lang.String r2 = "usfdl"
            java.lang.String r3 = ""
            r1.putString(r2, r3)     // Catch: java.lang.Throwable -> L17
            r1.apply()     // Catch: java.lang.Throwable -> L17
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r1
    }

    public java.lang.String e() {
            r3 = this;
            r0 = 0
            android.content.SharedPreferences r1 = r3.a     // Catch: java.lang.Throwable -> L9
            java.lang.String r2 = "gx_vendor_token"
            java.lang.String r0 = r1.getString(r2, r0)     // Catch: java.lang.Throwable -> L9
        L9:
            return r0
    }
}
