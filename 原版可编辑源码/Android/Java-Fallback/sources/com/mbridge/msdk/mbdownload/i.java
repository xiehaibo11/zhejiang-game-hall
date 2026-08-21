package com.mbridge.msdk.mbdownload;

public class i {
    private static final java.lang.String a = null;
    private final android.content.Context b;
    private final boolean c;
    private com.mbridge.msdk.foundation.tools.FastKV d;

    static {
            java.lang.Class<com.mbridge.msdk.mbdownload.i> r0 = com.mbridge.msdk.mbdownload.i.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.mbdownload.i.a = r0
            return
    }

    public i(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            com.mbridge.msdk.foundation.controller.b r1 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r1 = r1.d()
            r0.c = r1
            return
    }

    public final java.util.List<java.lang.Integer> a() {
            r8 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = r8.c
            java.lang.String r2 = "MB_RUNTIME_CACHE"
            r3 = 0
            if (r1 == 0) goto L24
            com.mbridge.msdk.foundation.tools.FastKV r1 = r8.d
            if (r1 != 0) goto L24
            com.mbridge.msdk.foundation.tools.FastKV$Builder r1 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.same.b.c r4 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L22
            java.lang.String r4 = com.mbridge.msdk.foundation.same.b.e.b(r4)     // Catch: java.lang.Exception -> L22
            r1.<init>(r4, r2)     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.foundation.tools.FastKV r1 = r1.build()     // Catch: java.lang.Exception -> L22
            r8.d = r1     // Catch: java.lang.Exception -> L22
            goto L24
        L22:
            r8.d = r3
        L24:
            com.mbridge.msdk.foundation.tools.FastKV r1 = r8.d
            java.lang.String r4 = "]"
            java.lang.String r5 = "get nid ["
            if (r1 == 0) goto L6f
            java.util.Map r3 = r1.getAll()     // Catch: java.lang.Exception -> L30
        L30:
            if (r3 == 0) goto L69
            java.util.Set r1 = r3.keySet()
            java.util.Iterator r1 = r1.iterator()
        L3a:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L69
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> L3a
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.NumberFormatException -> L3a
            r0.add(r3)     // Catch: java.lang.NumberFormatException -> L3a
            java.lang.String r3 = com.mbridge.msdk.mbdownload.i.a     // Catch: java.lang.NumberFormatException -> L3a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> L3a
            r6.<init>()     // Catch: java.lang.NumberFormatException -> L3a
            r6.append(r5)     // Catch: java.lang.NumberFormatException -> L3a
            r6.append(r2)     // Catch: java.lang.NumberFormatException -> L3a
            r6.append(r4)     // Catch: java.lang.NumberFormatException -> L3a
            java.lang.String r2 = r6.toString()     // Catch: java.lang.NumberFormatException -> L3a
            com.mbridge.msdk.foundation.tools.z.b(r3, r2)     // Catch: java.lang.NumberFormatException -> L3a
            goto L3a
        L69:
            com.mbridge.msdk.foundation.tools.FastKV r1 = r8.d
            r1.clear()
            goto Lbc
        L6f:
            android.content.Context r1 = r8.b     // Catch: java.lang.Exception -> Lbc
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)     // Catch: java.lang.Exception -> Lbc
            java.util.Map r2 = r1.getAll()     // Catch: java.lang.Exception -> Lbc
            java.util.Set r2 = r2.keySet()     // Catch: java.lang.Exception -> Lbc
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> Lbc
        L82:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> Lbc
            if (r3 == 0) goto Lb1
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> Lbc
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> Lbc
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.NumberFormatException -> L82 java.lang.Exception -> Lbc
            java.lang.Integer r6 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.NumberFormatException -> L82 java.lang.Exception -> Lbc
            r0.add(r6)     // Catch: java.lang.NumberFormatException -> L82 java.lang.Exception -> Lbc
            java.lang.String r6 = com.mbridge.msdk.mbdownload.i.a     // Catch: java.lang.NumberFormatException -> L82 java.lang.Exception -> Lbc
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> L82 java.lang.Exception -> Lbc
            r7.<init>()     // Catch: java.lang.NumberFormatException -> L82 java.lang.Exception -> Lbc
            r7.append(r5)     // Catch: java.lang.NumberFormatException -> L82 java.lang.Exception -> Lbc
            r7.append(r3)     // Catch: java.lang.NumberFormatException -> L82 java.lang.Exception -> Lbc
            r7.append(r4)     // Catch: java.lang.NumberFormatException -> L82 java.lang.Exception -> Lbc
            java.lang.String r3 = r7.toString()     // Catch: java.lang.NumberFormatException -> L82 java.lang.Exception -> Lbc
            com.mbridge.msdk.foundation.tools.z.b(r6, r3)     // Catch: java.lang.NumberFormatException -> L82 java.lang.Exception -> Lbc
            goto L82
        Lb1:
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Exception -> Lbc
            android.content.SharedPreferences$Editor r1 = r1.clear()     // Catch: java.lang.Exception -> Lbc
            r1.apply()     // Catch: java.lang.Exception -> Lbc
        Lbc:
            return r0
    }

    public final void a(int r5) {
            r4 = this;
            boolean r0 = r4.c
            if (r0 == 0) goto L1f
            com.mbridge.msdk.foundation.tools.FastKV r0 = r4.d
            if (r0 != 0) goto L1f
            com.mbridge.msdk.foundation.tools.FastKV$Builder r0 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L1c
            com.mbridge.msdk.foundation.same.b.c r1 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L1c
            java.lang.String r1 = com.mbridge.msdk.foundation.same.b.e.b(r1)     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = "MB_RUNTIME_CACHE"
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L1c
            com.mbridge.msdk.foundation.tools.FastKV r0 = r0.build()     // Catch: java.lang.Exception -> L1c
            r4.d = r0     // Catch: java.lang.Exception -> L1c
            goto L1f
        L1c:
            r0 = 0
            r4.d = r0
        L1f:
            com.mbridge.msdk.foundation.tools.FastKV r0 = r4.d
            if (r0 == 0) goto L43
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3a
            r1.<init>()     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = ""
            r1.append(r2)     // Catch: java.lang.Exception -> L3a
            r1.append(r5)     // Catch: java.lang.Exception -> L3a
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = ""
            r0.putString(r5, r1)     // Catch: java.lang.Exception -> L3a
            goto L8a
        L3a:
            r5 = move-exception
            java.lang.String r0 = com.mbridge.msdk.mbdownload.i.a
            java.lang.String r1 = "addNid error"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r5)
            goto L8a
        L43:
            android.content.Context r0 = r4.b     // Catch: java.lang.Exception -> L8a
            java.lang.String r1 = "MB_RUNTIME_CACHE"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Exception -> L8a
            android.content.SharedPreferences$Editor r1 = r0.edit()     // Catch: java.lang.Exception -> L8a
            monitor-enter(r0)     // Catch: java.lang.Exception -> L8a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L87
            r2.<init>()     // Catch: java.lang.Throwable -> L87
            java.lang.String r3 = ""
            r2.append(r3)     // Catch: java.lang.Throwable -> L87
            r2.append(r5)     // Catch: java.lang.Throwable -> L87
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L87
            java.lang.String r3 = ""
            r1.putString(r2, r3)     // Catch: java.lang.Throwable -> L87
            r1.apply()     // Catch: java.lang.Throwable -> L87
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L87
            java.lang.String r0 = com.mbridge.msdk.mbdownload.i.a     // Catch: java.lang.Exception -> L8a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8a
            r1.<init>()     // Catch: java.lang.Exception -> L8a
            java.lang.String r2 = "add nid ["
            r1.append(r2)     // Catch: java.lang.Exception -> L8a
            r1.append(r5)     // Catch: java.lang.Exception -> L8a
            java.lang.String r5 = "] to runtime cache."
            r1.append(r5)     // Catch: java.lang.Exception -> L8a
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> L8a
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Exception -> L8a
            goto L8a
        L87:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L87
            throw r5     // Catch: java.lang.Exception -> L8a
        L8a:
            return
    }

    public final void b(int r5) {
            r4 = this;
            java.lang.String r0 = ""
            android.content.Context r1 = r4.b     // Catch: java.lang.Exception -> L54
            java.lang.String r2 = "MB_RUNTIME_CACHE"
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)     // Catch: java.lang.Exception -> L54
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L54
            r2.<init>()     // Catch: java.lang.Exception -> L54
            r2.append(r0)     // Catch: java.lang.Exception -> L54
            r2.append(r5)     // Catch: java.lang.Exception -> L54
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L54
            boolean r2 = r1.contains(r2)     // Catch: java.lang.Exception -> L54
            if (r2 == 0) goto L39
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Exception -> L54
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L54
            r2.<init>()     // Catch: java.lang.Exception -> L54
            r2.append(r0)     // Catch: java.lang.Exception -> L54
            r2.append(r5)     // Catch: java.lang.Exception -> L54
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L54
            r1.remove(r0)     // Catch: java.lang.Exception -> L54
            r1.apply()     // Catch: java.lang.Exception -> L54
        L39:
            java.lang.String r0 = com.mbridge.msdk.mbdownload.i.a     // Catch: java.lang.Exception -> L54
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L54
            r1.<init>()     // Catch: java.lang.Exception -> L54
            java.lang.String r2 = "remove nid ["
            r1.append(r2)     // Catch: java.lang.Exception -> L54
            r1.append(r5)     // Catch: java.lang.Exception -> L54
            java.lang.String r5 = "] to runtime cache."
            r1.append(r5)     // Catch: java.lang.Exception -> L54
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> L54
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Exception -> L54
        L54:
            return
    }

    public final boolean b() {
            r4 = this;
            boolean r0 = r4.c
            java.lang.String r1 = "MB_RUNTIME_CACHE"
            if (r0 == 0) goto L1f
            com.mbridge.msdk.foundation.tools.FastKV r0 = r4.d
            if (r0 != 0) goto L1f
            com.mbridge.msdk.foundation.tools.FastKV$Builder r0 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L1c
            com.mbridge.msdk.foundation.same.b.c r2 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = com.mbridge.msdk.foundation.same.b.e.b(r2)     // Catch: java.lang.Exception -> L1c
            r0.<init>(r2, r1)     // Catch: java.lang.Exception -> L1c
            com.mbridge.msdk.foundation.tools.FastKV r0 = r0.build()     // Catch: java.lang.Exception -> L1c
            r4.d = r0     // Catch: java.lang.Exception -> L1c
            goto L1f
        L1c:
            r0 = 0
            r4.d = r0
        L1f:
            com.mbridge.msdk.foundation.tools.FastKV r0 = r4.d
            r2 = 1
            r3 = 0
            if (r0 == 0) goto L33
            java.util.Map r0 = r0.getAll()     // Catch: java.lang.Exception -> L32
            int r0 = r0.size()     // Catch: java.lang.Exception -> L32
            if (r0 <= 0) goto L30
            goto L31
        L30:
            r2 = r3
        L31:
            return r2
        L32:
            return r3
        L33:
            android.content.Context r0 = r4.b
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r3)
            java.util.Map r0 = r0.getAll()
            int r0 = r0.size()
            if (r0 <= 0) goto L44
            goto L45
        L44:
            r2 = r3
        L45:
            return r2
    }
}
