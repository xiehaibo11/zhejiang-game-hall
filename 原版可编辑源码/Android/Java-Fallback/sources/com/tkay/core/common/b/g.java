package com.tkay.core.common.b;

public class g implements java.lang.Thread.UncaughtExceptionHandler {
    private static volatile com.tkay.core.common.b.g d = null;
    private static final java.lang.String j = "0";
    private static final java.lang.String k = "1";
    private static final int l = 4;
    java.lang.String a;
    private java.lang.Thread.UncaughtExceptionHandler b;
    private android.content.Context c;
    private android.content.SharedPreferences e;
    private final java.lang.String f;
    private final java.lang.String g;
    private final java.lang.String h;
    private final java.lang.String i;


    private g(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "crash_type"
            r2.f = r0
            java.lang.String r0 = "crash_msg"
            r2.g = r0
            java.lang.String r0 = "psid"
            r2.h = r0
            java.lang.String r0 = "crash_sdk_type"
            r2.i = r0
            java.lang.String r0 = "com.tkay"
            r2.a = r0
            r2.c = r3
            java.lang.String r0 = "tkay_crash"
            r1 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r0, r1)
            r2.e = r3
            return
    }

    public static com.tkay.core.common.b.g a(android.content.Context r2) {
            com.tkay.core.common.b.g r0 = com.tkay.core.common.b.g.d
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.b.g> r0 = com.tkay.core.common.b.g.class
            monitor-enter(r0)
            com.tkay.core.common.b.g r1 = com.tkay.core.common.b.g.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.b.g r1 = new com.tkay.core.common.b.g     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.b.g.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.b.g r2 = com.tkay.core.common.b.g.d
            return r2
    }

    static void a(com.tkay.core.common.b.g r7) {
            android.content.SharedPreferences r0 = r7.e
            java.util.Map r0 = r0.getAll()
            java.util.Collection r1 = r0.values()
            java.util.Iterator r1 = r1.iterator()
        Le:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L48
            java.lang.Object r2 = r1.next()
            if (r2 == 0) goto L1f
            java.lang.String r2 = r2.toString()
            goto L21
        L1f:
            java.lang.String r2 = ""
        L21:
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto Le
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> Le
            r3.<init>(r2)     // Catch: java.lang.Exception -> Le
            java.lang.String r2 = "crash_type"
            java.lang.String r2 = r3.optString(r2)     // Catch: java.lang.Exception -> Le
            java.lang.String r4 = "crash_msg"
            java.lang.String r4 = r3.optString(r4)     // Catch: java.lang.Exception -> Le
            java.lang.String r5 = "psid"
            java.lang.String r5 = r3.optString(r5)     // Catch: java.lang.Exception -> Le
            java.lang.String r6 = "crash_sdk_type"
            java.lang.String r3 = r3.optString(r6)     // Catch: java.lang.Exception -> Le
            com.tkay.core.common.k.c.b(r2, r4, r5, r3)     // Catch: java.lang.Exception -> Le
            goto Le
        L48:
            int r0 = r0.size()
            if (r0 <= 0) goto L5b
            android.content.SharedPreferences r7 = r7.e
            android.content.SharedPreferences$Editor r7 = r7.edit()
            android.content.SharedPreferences$Editor r7 = r7.clear()
            r7.commit()
        L5b:
            return
    }

    private void a(java.lang.Throwable r6) {
            r5 = this;
            java.lang.String r6 = b(r6)     // Catch: java.lang.Throwable -> L78
            boolean r0 = r5.a(r6)     // Catch: java.lang.Throwable -> L78
            if (r0 == 0) goto L78
            java.lang.String r0 = b(r6)     // Catch: java.lang.Throwable -> L78
            java.lang.String r1 = r5.c(r6)     // Catch: java.lang.Throwable -> L78
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r3 = "crash_type"
            java.lang.String r0 = java.net.URLEncoder.encode(r0)
            r2.put(r3, r0)
            java.lang.String r0 = "crash_msg"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r5.b()
            r3.append(r4)
            java.lang.String r4 = "\n"
            r3.append(r4)
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            java.lang.String r6 = java.net.URLEncoder.encode(r6)
            r2.put(r0, r6)
            java.lang.String r6 = "psid"
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.q()
            r2.put(r6, r0)
            java.lang.String r6 = "crash_sdk_type"
            r2.put(r6, r1)
            android.content.SharedPreferences r6 = r5.e
            android.content.SharedPreferences$Editor r6 = r6.edit()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r3 = java.lang.System.currentTimeMillis()
            r0.append(r3)
            java.lang.String r1 = "_crash"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = r2.toString()
            r6.putString(r0, r1)
            r6.commit()
        L78:
            return
    }

    private boolean a(java.lang.String r6) {
            r5 = this;
            android.content.Context r0 = r5.c
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L42
            int r3 = r0.x()
            if (r3 != 0) goto L1d
            return r1
        L1d:
            java.lang.String r0 = r0.z()
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L4b
            if (r3 == 0) goto L28
            return r2
        L28:
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L4b
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L4b
            r0 = r1
        L2e:
            int r4 = r3.length()     // Catch: java.lang.Throwable -> L4b
            if (r0 >= r4) goto L4b
            java.lang.String r4 = r3.optString(r0)     // Catch: java.lang.Throwable -> L4b
            boolean r4 = r6.contains(r4)     // Catch: java.lang.Throwable -> L4b
            if (r4 == 0) goto L3f
            return r2
        L3f:
            int r0 = r0 + 1
            goto L2e
        L42:
            java.lang.String r0 = r5.a
            boolean r6 = r6.contains(r0)
            if (r6 == 0) goto L4b
            return r2
        L4b:
            return r1
    }

    private java.lang.String b() {
            r10 = this;
            java.util.Map r0 = java.lang.Thread.getAllStackTraces()     // Catch: java.lang.Throwable -> Lfd
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> Lfd
            r2 = 4
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lfd
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> Lfd
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> Lfd
            r2 = 0
            r3 = r2
        L14:
            boolean r4 = r0.hasNext()     // Catch: java.lang.Throwable -> Lfd
            r5 = 1
            if (r4 == 0) goto L72
            java.lang.Object r4 = r0.next()     // Catch: java.lang.Throwable -> Lfd
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> Lfd
            java.lang.Object r4 = r4.getKey()     // Catch: java.lang.Throwable -> Lfd
            java.lang.Thread r4 = (java.lang.Thread) r4     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r6 = r4.getName()     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r7 = "tkay"
            boolean r6 = r6.startsWith(r7)     // Catch: java.lang.Throwable -> Lfd
            if (r6 == 0) goto L14
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfd
            r6.<init>()     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r7 = r4.getName()     // Catch: java.lang.Throwable -> Lfd
            r6.append(r7)     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r7 = "-"
            r6.append(r7)     // Catch: java.lang.Throwable -> Lfd
            java.lang.Thread$State r4 = r4.getState()     // Catch: java.lang.Throwable -> Lfd
            r6.append(r4)     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> Lfd
            boolean r6 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> Lfd
            if (r6 == 0) goto L68
            java.lang.Object r6 = r1.get(r4)     // Catch: java.lang.Throwable -> Lfd
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Throwable -> Lfd
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> Lfd
            int r6 = r6 + r5
            java.lang.Integer r5 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> Lfd
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> Lfd
            goto L6f
        L68:
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> Lfd
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> Lfd
        L6f:
            int r3 = r3 + 1
            goto L14
        L72:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lf7
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r1 = "tkay_thread_count"
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> Lf7
            android.content.Context r1 = r10.c     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r3 = "activity"
            java.lang.Object r1 = r1.getSystemService(r3)     // Catch: java.lang.Throwable -> Lf2
            android.app.ActivityManager r1 = (android.app.ActivityManager) r1     // Catch: java.lang.Throwable -> Lf2
            int[] r3 = new int[r5]     // Catch: java.lang.Throwable -> Lf2
            int r4 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> Lf2
            r3[r2] = r4     // Catch: java.lang.Throwable -> Lf2
            android.os.Debug$MemoryInfo[] r3 = r1.getProcessMemoryInfo(r3)     // Catch: java.lang.Throwable -> Lf2
            int r4 = r3.length     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r5 = "MB"
            if (r4 <= 0) goto Lb3
            r2 = r3[r2]     // Catch: java.lang.Throwable -> Lf2
            int r2 = r2.getTotalPss()     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r3 = "app_memory"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf2
            r4.<init>()     // Catch: java.lang.Throwable -> Lf2
            int r2 = r2 / 1024
            r4.append(r2)     // Catch: java.lang.Throwable -> Lf2
            r4.append(r5)     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> Lf2
            r0.put(r3, r2)     // Catch: java.lang.Throwable -> Lf2
        Lb3:
            android.app.ActivityManager$MemoryInfo r2 = new android.app.ActivityManager$MemoryInfo     // Catch: java.lang.Throwable -> Lf2
            r2.<init>()     // Catch: java.lang.Throwable -> Lf2
            r1.getMemoryInfo(r2)     // Catch: java.lang.Throwable -> Lf2
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lf2
            r3 = 16
            if (r1 < r3) goto Lf2
            java.lang.String r1 = "sys_total_memory"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf2
            r3.<init>()     // Catch: java.lang.Throwable -> Lf2
            long r6 = r2.totalMem     // Catch: java.lang.Throwable -> Lf2
            r8 = 1048576(0x100000, double:5.180654E-318)
            long r6 = r6 / r8
            r3.append(r6)     // Catch: java.lang.Throwable -> Lf2
            r3.append(r5)     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Lf2
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r1 = "sys_avail_memory"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf2
            r3.<init>()     // Catch: java.lang.Throwable -> Lf2
            long r6 = r2.availMem     // Catch: java.lang.Throwable -> Lf2
            long r6 = r6 / r8
            r3.append(r6)     // Catch: java.lang.Throwable -> Lf2
            r3.append(r5)     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Lf2
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lf2
        Lf2:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lf7
            return r0
        Lf7:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> Lfd
            return r0
        Lfd:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            return r0
    }

    private static java.lang.String b(java.lang.String r3) {
            java.lang.String r0 = ""
            java.lang.String r1 = ".*?(Exception|Error|Death)"
            r2 = 2
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1, r2)     // Catch: java.lang.Exception -> L2e
            java.util.regex.Matcher r3 = r1.matcher(r3)     // Catch: java.lang.Exception -> L2e
            boolean r1 = r3.find()     // Catch: java.lang.Exception -> L2e
            if (r1 == 0) goto L19
            r1 = 0
            java.lang.String r3 = r3.group(r1)     // Catch: java.lang.Exception -> L2e
            goto L1a
        L19:
            r3 = r0
        L1a:
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L2d
            if (r1 != 0) goto L2f
            java.lang.String r1 = "Caused by:"
            java.lang.String r1 = r3.replaceAll(r1, r0)     // Catch: java.lang.Exception -> L2d
            java.lang.String r2 = " "
            java.lang.String r3 = r1.replaceAll(r2, r0)     // Catch: java.lang.Exception -> L2d
            goto L2f
        L2d:
            r0 = r3
        L2e:
            r3 = r0
        L2f:
            return r3
    }

    private static java.lang.String b(java.lang.Throwable r4) {
            java.lang.String r0 = ""
            if (r4 != 0) goto L5
            return r0
        L5:
            r1 = 0
            java.lang.Throwable r2 = new java.lang.Throwable     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L52
            java.lang.String r3 = com.tkay.core.common.l.g.a()     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L52
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L52
        Lf:
            if (r2 == 0) goto L1b
            boolean r3 = r2 instanceof java.net.UnknownHostException     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L52
            if (r3 == 0) goto L16
            return r0
        L16:
            java.lang.Throwable r2 = r2.getCause()     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L52
            goto Lf
        L1b:
            java.io.StringWriter r2 = new java.io.StringWriter     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L52
            r2.<init>()     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L52
            java.io.PrintWriter r3 = new java.io.PrintWriter     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L42
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L42
            r4.printStackTrace(r3)     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L43
            r3.flush()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L43
            r3.close()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L43
            r2.close()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L43
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L3c java.lang.Exception -> L43
            r2.close()     // Catch: java.lang.Throwable -> L3b
            r2.close()     // Catch: java.lang.Throwable -> L3b
        L3b:
            return r4
        L3c:
            r4 = move-exception
            goto L40
        L3e:
            r4 = move-exception
            r3 = r1
        L40:
            r1 = r2
            goto L47
        L42:
            r3 = r1
        L43:
            r1 = r2
            goto L53
        L45:
            r4 = move-exception
            r3 = r1
        L47:
            if (r1 == 0) goto L4c
            r1.close()     // Catch: java.lang.Throwable -> L51
        L4c:
            if (r3 == 0) goto L51
            r1.close()     // Catch: java.lang.Throwable -> L51
        L51:
            throw r4
        L52:
            r3 = r1
        L53:
            if (r1 == 0) goto L58
            r1.close()     // Catch: java.lang.Throwable -> L5d
        L58:
            if (r3 == 0) goto L5d
            r1.close()     // Catch: java.lang.Throwable -> L5d
        L5d:
            return r0
    }

    private java.lang.String c(java.lang.String r9) {
            r8 = this;
            java.lang.String r0 = r8.a
            boolean r1 = android.text.TextUtils.isEmpty(r9)
            java.lang.String r2 = "0"
            if (r1 != 0) goto L42
            boolean r1 = r9.contains(r0)
            if (r1 != 0) goto L11
            goto L42
        L11:
            java.lang.String r1 = "Caused by:"
            java.lang.String[] r9 = r9.split(r1)     // Catch: java.lang.Exception -> L42
            int r1 = r9.length     // Catch: java.lang.Exception -> L42
            r3 = 0
            r4 = r3
        L1a:
            if (r4 >= r1) goto L42
            r5 = r9[r4]     // Catch: java.lang.Exception -> L42
            boolean r6 = r5.contains(r0)     // Catch: java.lang.Exception -> L42
            if (r6 == 0) goto L3f
            java.lang.String r6 = "\\n"
            java.lang.String[] r5 = r5.split(r6)     // Catch: java.lang.Exception -> L42
            r6 = r3
        L2b:
            int r7 = r5.length     // Catch: java.lang.Exception -> L42
            if (r6 >= r7) goto L3f
            r7 = r5[r6]     // Catch: java.lang.Exception -> L42
            boolean r7 = r7.contains(r0)     // Catch: java.lang.Exception -> L42
            if (r7 == 0) goto L3c
            r7 = 4
            if (r6 > r7) goto L3c
            java.lang.String r9 = "1"
            return r9
        L3c:
            int r6 = r6 + 1
            goto L2b
        L3f:
            int r4 = r4 + 1
            goto L1a
        L42:
            return r2
    }

    private void c() {
            r7 = this;
            android.content.SharedPreferences r0 = r7.e
            java.util.Map r0 = r0.getAll()
            java.util.Collection r1 = r0.values()
            java.util.Iterator r1 = r1.iterator()
        Le:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L48
            java.lang.Object r2 = r1.next()
            if (r2 == 0) goto L1f
            java.lang.String r2 = r2.toString()
            goto L21
        L1f:
            java.lang.String r2 = ""
        L21:
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto Le
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> Le
            r3.<init>(r2)     // Catch: java.lang.Exception -> Le
            java.lang.String r2 = "crash_type"
            java.lang.String r2 = r3.optString(r2)     // Catch: java.lang.Exception -> Le
            java.lang.String r4 = "crash_msg"
            java.lang.String r4 = r3.optString(r4)     // Catch: java.lang.Exception -> Le
            java.lang.String r5 = "psid"
            java.lang.String r5 = r3.optString(r5)     // Catch: java.lang.Exception -> Le
            java.lang.String r6 = "crash_sdk_type"
            java.lang.String r3 = r3.optString(r6)     // Catch: java.lang.Exception -> Le
            com.tkay.core.common.k.c.b(r2, r4, r5, r3)     // Catch: java.lang.Exception -> Le
            goto Le
        L48:
            int r0 = r0.size()
            if (r0 <= 0) goto L5b
            android.content.SharedPreferences r0 = r7.e
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.clear()
            r0.commit()
        L5b:
            return
    }

    public final void a() {
            r2 = this;
            android.content.Context r0 = r2.c
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            if (r0 == 0) goto L1b
            int r0 = r0.x()
            if (r0 != 0) goto L1b
            return
        L1b:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Exception -> L38
            com.tkay.core.common.b.g$1 r1 = new com.tkay.core.common.b.g$1     // Catch: java.lang.Exception -> L38
            r1.<init>(r2)     // Catch: java.lang.Exception -> L38
            r0.a(r1)     // Catch: java.lang.Exception -> L38
            java.lang.Thread$UncaughtExceptionHandler r0 = java.lang.Thread.getDefaultUncaughtExceptionHandler()     // Catch: java.lang.Exception -> L38
            boolean r0 = r0 instanceof com.tkay.core.common.b.g     // Catch: java.lang.Exception -> L38
            if (r0 != 0) goto L35
            java.lang.Thread$UncaughtExceptionHandler r0 = java.lang.Thread.getDefaultUncaughtExceptionHandler()     // Catch: java.lang.Exception -> L38
            r2.b = r0     // Catch: java.lang.Exception -> L38
        L35:
            java.lang.Thread.setDefaultUncaughtExceptionHandler(r2)     // Catch: java.lang.Exception -> L38
        L38:
            return
    }

    @Override
    public void uncaughtException(java.lang.Thread r7, java.lang.Throwable r8) {
            r6 = this;
            if (r8 != 0) goto L3
            return
        L3:
            java.lang.String r0 = b(r8)     // Catch: java.lang.Throwable -> L7b
            boolean r1 = r6.a(r0)     // Catch: java.lang.Throwable -> L7b
            if (r1 == 0) goto L7b
            java.lang.String r1 = b(r0)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = r6.c(r0)     // Catch: java.lang.Throwable -> L7b
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.lang.String r4 = "crash_type"
            java.lang.String r1 = java.net.URLEncoder.encode(r1)
            r3.put(r4, r1)
            java.lang.String r1 = "crash_msg"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r6.b()
            r4.append(r5)
            java.lang.String r5 = "\n"
            r4.append(r5)
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            java.lang.String r0 = java.net.URLEncoder.encode(r0)
            r3.put(r1, r0)
            java.lang.String r0 = "psid"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.q()
            r3.put(r0, r1)
            java.lang.String r0 = "crash_sdk_type"
            r3.put(r0, r2)
            android.content.SharedPreferences r0 = r6.e
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            long r4 = java.lang.System.currentTimeMillis()
            r1.append(r4)
            java.lang.String r2 = "_crash"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = r3.toString()
            r0.putString(r1, r2)
            r0.commit()
        L7b:
            java.lang.Thread$UncaughtExceptionHandler r0 = r6.b     // Catch: java.lang.Exception -> L8e
            if (r0 == 0) goto L8e
            java.lang.Thread$UncaughtExceptionHandler r0 = r6.b     // Catch: java.lang.Exception -> L8e
            if (r0 == r6) goto L8e
            java.lang.Thread$UncaughtExceptionHandler r0 = r6.b     // Catch: java.lang.Exception -> L8e
            boolean r0 = r0 instanceof com.tkay.core.common.b.g     // Catch: java.lang.Exception -> L8e
            if (r0 != 0) goto L8e
            java.lang.Thread$UncaughtExceptionHandler r0 = r6.b     // Catch: java.lang.Exception -> L8e
            r0.uncaughtException(r7, r8)     // Catch: java.lang.Exception -> L8e
        L8e:
            return
    }
}
