package com.igexin.push.core;

public class w {
    private static com.igexin.push.core.w a;
    private static java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> b;
    private static java.util.Set<java.lang.String> c;

    private w() {
            r2 = this;
            r2.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.igexin.push.core.w.c = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.igexin.push.core.w.b = r0
            java.util.Set<java.lang.String> r0 = com.igexin.push.core.w.c
            java.lang.String r1 = "goto"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.core.w.c
            java.lang.String r1 = "notification"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.core.w.c
            java.lang.String r1 = "terminatetask"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.core.w.c
            java.lang.String r1 = "startmyactivity"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.core.w.c
            java.lang.String r1 = "startapp"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.core.w.c
            java.lang.String r1 = "null"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.core.w.c
            java.lang.String r1 = "startweb"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.core.w.c
            java.lang.String r1 = "checkapp"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.core.w.c
            java.lang.String r1 = "enablelog"
            r0.add(r1)
            java.util.Set<java.lang.String> r0 = com.igexin.push.core.w.c
            java.lang.String r1 = "disablelog"
            r0.add(r1)
            return
    }

    private com.igexin.push.core.a.a.a a(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto Lca
            java.util.Set<java.lang.String> r0 = com.igexin.push.core.w.c
            boolean r0 = r0.contains(r4)
            if (r0 != 0) goto L10
            goto Lca
        L10:
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r0 = com.igexin.push.core.w.b
            java.lang.Object r0 = r0.get(r4)
            com.igexin.push.core.a.a.a r0 = (com.igexin.push.core.a.a.a) r0
            if (r0 == 0) goto L1b
            return r0
        L1b:
            java.lang.String r0 = "goto"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L2f
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.core.w.b
            com.igexin.push.core.a.a.f r2 = new com.igexin.push.core.a.a.f
            r2.<init>()
        L2a:
            r1.put(r0, r2)
            goto Lc1
        L2f:
            java.lang.String r0 = "notification"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L3f
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.core.w.b
            com.igexin.push.core.a.a.g r2 = new com.igexin.push.core.a.a.g
            r2.<init>()
            goto L2a
        L3f:
            java.lang.String r0 = "terminatetask"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L4f
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.core.w.b
            com.igexin.push.core.a.a.k r2 = new com.igexin.push.core.a.a.k
            r2.<init>()
            goto L2a
        L4f:
            java.lang.String r0 = "startmyactivity"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L5f
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.core.w.b
            com.igexin.push.core.a.a.h r2 = new com.igexin.push.core.a.a.h
            r2.<init>()
            goto L2a
        L5f:
            java.lang.String r0 = "startapp"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L6f
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.core.w.b
            com.igexin.push.core.a.a.j r2 = new com.igexin.push.core.a.a.j
            r2.<init>()
            goto L2a
        L6f:
            java.lang.String r0 = "null"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L7f
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.core.w.b
            com.igexin.push.core.a.a.e r2 = new com.igexin.push.core.a.a.e
            r2.<init>()
            goto L2a
        L7f:
            java.lang.String r0 = "startweb"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L8f
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.core.w.b
            com.igexin.push.core.a.a.i r2 = new com.igexin.push.core.a.a.i
            r2.<init>()
            goto L2a
        L8f:
            java.lang.String r0 = "checkapp"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto L9f
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.core.w.b
            com.igexin.push.core.a.a.b r2 = new com.igexin.push.core.a.a.b
            r2.<init>()
            goto L2a
        L9f:
            java.lang.String r0 = "enablelog"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto Lb0
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.core.w.b
            com.igexin.push.core.a.a.d r2 = new com.igexin.push.core.a.a.d
            r2.<init>()
            goto L2a
        Lb0:
            java.lang.String r0 = "disablelog"
            boolean r1 = r4.equals(r0)
            if (r1 == 0) goto Lc1
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r1 = com.igexin.push.core.w.b
            com.igexin.push.core.a.a.c r2 = new com.igexin.push.core.a.a.c
            r2.<init>()
            goto L2a
        Lc1:
            java.util.Map<java.lang.String, com.igexin.push.core.a.a.a> r0 = com.igexin.push.core.w.b
            java.lang.Object r4 = r0.get(r4)
            com.igexin.push.core.a.a.a r4 = (com.igexin.push.core.a.a.a) r4
            return r4
        Lca:
            r4 = 0
            return r4
    }

    public static com.igexin.push.core.w a() {
            com.igexin.push.core.w r0 = com.igexin.push.core.w.a
            if (r0 != 0) goto Lb
            com.igexin.push.core.w r0 = new com.igexin.push.core.w
            r0.<init>()
            com.igexin.push.core.w.a = r0
        Lb:
            com.igexin.push.core.w r0 = com.igexin.push.core.w.a
            return r0
    }

    private void a(int r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            android.content.ContentValues r4 = new android.content.ContentValues
            r4.<init>()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r0 = "status"
            r4.put(r0, r2)
            com.igexin.push.core.n r2 = com.igexin.push.core.n.a()
            r2.b(r3, r4)
            return
    }

    private boolean a(org.json.JSONObject r2) {
            r1 = this;
            java.lang.String r0 = "condition"
            org.json.JSONObject r2 = r2.getJSONObject(r0)     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = "wifi"
            boolean r0 = r2.has(r0)     // Catch: java.lang.Exception -> L30
            if (r0 != 0) goto L2e
            java.lang.String r0 = "screenOn"
            boolean r0 = r2.has(r0)     // Catch: java.lang.Exception -> L30
            if (r0 != 0) goto L2e
            java.lang.String r0 = "ssid"
            boolean r0 = r2.has(r0)     // Catch: java.lang.Exception -> L30
            if (r0 != 0) goto L2e
            java.lang.String r0 = "duration"
            boolean r0 = r2.has(r0)     // Catch: java.lang.Exception -> L30
            if (r0 != 0) goto L2e
            java.lang.String r0 = "netConnected"
            boolean r2 = r2.has(r0)     // Catch: java.lang.Exception -> L30
            if (r2 == 0) goto L30
        L2e:
            r2 = 0
            return r2
        L30:
            r2 = 1
            return r2
    }

    private void b(org.json.JSONObject r11, com.igexin.push.core.bean.PushTaskBean r12) {
            r10 = this;
            java.lang.String r0 = "-"
            java.lang.String r1 = "duration"
            java.lang.String r2 = "expiredTime"
            java.lang.String r3 = "bssid"
            java.lang.String r4 = "netConnected"
            java.lang.String r5 = "ssid"
            java.lang.String r6 = "screenOn"
            java.lang.String r7 = "wifi"
            java.lang.String r8 = "condition"
            org.json.JSONObject r11 = r11.getJSONObject(r8)     // Catch: java.lang.Exception -> La5
            java.util.HashMap r8 = new java.util.HashMap     // Catch: java.lang.Exception -> La5
            r8.<init>()     // Catch: java.lang.Exception -> La5
            boolean r9 = r11.has(r7)     // Catch: java.lang.Exception -> La5
            if (r9 == 0) goto L28
            java.lang.String r9 = r11.getString(r7)     // Catch: java.lang.Exception -> La5
            r8.put(r7, r9)     // Catch: java.lang.Exception -> La5
        L28:
            boolean r7 = r11.has(r6)     // Catch: java.lang.Exception -> La5
            if (r7 == 0) goto L35
            java.lang.String r7 = r11.getString(r6)     // Catch: java.lang.Exception -> La5
            r8.put(r6, r7)     // Catch: java.lang.Exception -> La5
        L35:
            boolean r6 = r11.has(r5)     // Catch: java.lang.Exception -> La5
            if (r6 == 0) goto L4f
            java.lang.String r6 = r11.getString(r5)     // Catch: java.lang.Exception -> La5
            r8.put(r5, r6)     // Catch: java.lang.Exception -> La5
            boolean r5 = r11.has(r3)     // Catch: java.lang.Exception -> La5
            if (r5 == 0) goto L4f
            java.lang.String r5 = r11.getString(r3)     // Catch: java.lang.Exception -> La5
            r8.put(r3, r5)     // Catch: java.lang.Exception -> La5
        L4f:
            boolean r3 = r11.has(r1)     // Catch: java.lang.Exception -> La5
            if (r3 == 0) goto L7c
            java.lang.String r1 = r11.getString(r1)     // Catch: java.lang.Exception -> La5
            boolean r3 = r1.contains(r0)     // Catch: java.lang.Exception -> La5
            if (r3 == 0) goto L7c
            int r0 = r1.indexOf(r0)     // Catch: java.lang.Exception -> La5
            r3 = 0
            java.lang.String r3 = r1.substring(r3, r0)     // Catch: java.lang.Exception -> La5
            int r0 = r0 + 1
            int r5 = r1.length()     // Catch: java.lang.Exception -> La5
            java.lang.String r0 = r1.substring(r0, r5)     // Catch: java.lang.Exception -> La5
            java.lang.String r1 = "startTime"
            r8.put(r1, r3)     // Catch: java.lang.Exception -> La5
            java.lang.String r1 = "endTime"
            r8.put(r1, r0)     // Catch: java.lang.Exception -> La5
        L7c:
            boolean r0 = r11.has(r4)     // Catch: java.lang.Exception -> La5
            if (r0 == 0) goto L89
            java.lang.String r0 = r11.getString(r4)     // Catch: java.lang.Exception -> La5
            r8.put(r4, r0)     // Catch: java.lang.Exception -> La5
        L89:
            boolean r0 = r11.has(r2)     // Catch: java.lang.Exception -> La5
            if (r0 == 0) goto La2
            java.lang.String r11 = r11.getString(r2)     // Catch: java.lang.Exception -> La5
            boolean r0 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> La5
            if (r0 != 0) goto La2
            boolean r0 = android.text.TextUtils.isDigitsOnly(r11)     // Catch: java.lang.Exception -> La5
            if (r0 == 0) goto La2
            r8.put(r2, r11)     // Catch: java.lang.Exception -> La5
        La2:
            r12.setConditionMap(r8)     // Catch: java.lang.Exception -> La5
        La5:
            return
    }

    private boolean f() {
            r13 = this;
            java.lang.String r0 = "status"
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r1 = com.igexin.push.core.d.Z
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L10d
            boolean r1 = com.igexin.push.core.d.p
            if (r1 == 0) goto L10d
            r1 = 0
            r2 = 0
            com.igexin.push.core.c r3 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> Le5
            com.igexin.push.b.b r4 = r3.k()     // Catch: java.lang.Throwable -> Le5
            java.lang.String r5 = "message"
            java.lang.String[] r6 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> Le5
            java.lang.String r3 = "0"
            java.lang.String[] r7 = new java.lang.String[]{r3}     // Catch: java.lang.Throwable -> Le5
            r8 = 0
            r9 = 0
            android.database.Cursor r2 = r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> Le5
            if (r2 == 0) goto Le0
        L2c:
            boolean r3 = r2.moveToNext()     // Catch: java.lang.Throwable -> Le5
            if (r3 == 0) goto Le0
            java.lang.String r3 = "msgextra"
            int r3 = r2.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Le5
            byte[] r3 = r2.getBlob(r3)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r4 = "info"
            int r4 = r2.getColumnIndex(r4)     // Catch: java.lang.Throwable -> Le5
            byte[] r4 = r2.getBlob(r4)     // Catch: java.lang.Throwable -> Le5
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            java.lang.String r6 = new java.lang.String     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            byte[] r4 = com.igexin.b.b.a.c(r4)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r6.<init>(r4)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r5.<init>(r6)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            java.lang.String r4 = "id"
            java.lang.String r4 = r5.getString(r4)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            java.lang.String r6 = "appid"
            java.lang.String r6 = r5.getString(r6)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            java.lang.String r7 = "messageid"
            java.lang.String r7 = r5.getString(r7)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            java.lang.String r8 = "taskid"
            java.lang.String r8 = r5.getString(r8)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            java.lang.String r9 = "appkey"
            java.lang.String r9 = r5.getString(r9)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            java.lang.String r10 = "action_chains"
            org.json.JSONArray r10 = r5.getJSONArray(r10)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            com.igexin.push.core.a.e r11 = com.igexin.push.core.a.e.a()     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            java.lang.String r11 = r11.a(r8, r7)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            com.igexin.push.core.bean.PushTaskBean r12 = new com.igexin.push.core.bean.PushTaskBean     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r12.<init>()     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r12.setAppid(r6)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r12.setMessageId(r7)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r12.setTaskId(r8)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r12.setId(r4)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r12.setAppKey(r9)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r4 = 1
            r12.setCurrentActionid(r4)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            int r4 = r2.getColumnIndex(r0)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            int r4 = r2.getInt(r4)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r12.setStatus(r4)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            if (r3 == 0) goto La8
            r12.setMsgExtra(r3)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
        La8:
            java.lang.String r3 = "condition"
            boolean r3 = r5.has(r3)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            if (r3 == 0) goto Lb3
            r13.b(r5, r12)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
        Lb3:
            int r3 = r10.length()     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            if (r3 <= 0) goto Ld9
            boolean r3 = r13.a(r5, r12)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            if (r3 != 0) goto Ld9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r3.<init>()     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            java.lang.String r4 = "PushMessageExecutor|load task from db parseActionChains result = false ####### "
            r3.append(r4)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            java.lang.String r4 = r5.toString()     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r3.append(r4)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            com.igexin.b.a.c.b.a(r3, r4)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
        Ld9:
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r3 = com.igexin.push.core.d.Z     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            r3.put(r11, r12)     // Catch: org.json.JSONException -> L2c java.lang.Throwable -> Le5
            goto L2c
        Le0:
            com.igexin.push.core.d.p = r1     // Catch: java.lang.Throwable -> Le5
            if (r2 == 0) goto L10d
            goto L102
        Le5:
            r0 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L106
            r3.<init>()     // Catch: java.lang.Throwable -> L106
            java.lang.String r4 = "PushMessageExecutor|checkPushMessageMapValue error:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L106
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L106
            r3.append(r0)     // Catch: java.lang.Throwable -> L106
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L106
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L106
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L106
            if (r2 == 0) goto L10d
        L102:
            r2.close()
            goto L10d
        L106:
            r0 = move-exception
            if (r2 == 0) goto L10c
            r2.close()
        L10c:
            throw r0
        L10d:
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r0 = com.igexin.push.core.d.Z
            boolean r0 = r0.isEmpty()
            return r0
    }

    public void a(android.content.ContentValues r7) {
            r6 = this;
            java.lang.String r0 = "message"
            int r1 = com.igexin.push.core.d.an     // Catch: java.lang.Throwable -> L67
            r2 = 1000(0x3e8, float:1.401E-42)
            java.lang.String r3 = "taskid"
            if (r1 >= r2) goto L1c
            com.igexin.push.core.n r0 = com.igexin.push.core.n.a()     // Catch: java.lang.Throwable -> L67
            java.lang.String r1 = r7.getAsString(r3)     // Catch: java.lang.Throwable -> L67
            r0.a(r1, r7)     // Catch: java.lang.Throwable -> L67
        L15:
            int r7 = com.igexin.push.core.d.an     // Catch: java.lang.Throwable -> L67
            int r7 = r7 + 1
            com.igexin.push.core.d.an = r7     // Catch: java.lang.Throwable -> L67
            goto L67
        L1c:
            java.lang.String r1 = "id IN (SELECT id from message where status IS NULL or status=1 or status=2 order by id asc limit 250)"
            com.igexin.push.core.c r2 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> L67
            com.igexin.push.b.b r2 = r2.k()     // Catch: java.lang.Throwable -> L67
            int r1 = r2.a(r0, r1)     // Catch: java.lang.Throwable -> L67
            int r2 = com.igexin.push.core.d.an     // Catch: java.lang.Throwable -> L67
            int r2 = r2 - r1
            com.igexin.push.core.d.an = r2     // Catch: java.lang.Throwable -> L67
            r2 = 250(0xfa, float:3.5E-43)
            if (r1 >= r2) goto L5b
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L67
            r4.<init>()     // Catch: java.lang.Throwable -> L67
            java.lang.String r5 = "id IN (SELECT id from message where status=0 order by id asc limit "
            r4.append(r5)     // Catch: java.lang.Throwable -> L67
            int r2 = r2 - r1
            r4.append(r2)     // Catch: java.lang.Throwable -> L67
            java.lang.String r1 = ")"
            r4.append(r1)     // Catch: java.lang.Throwable -> L67
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L67
            com.igexin.push.core.c r2 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> L67
            com.igexin.push.b.b r2 = r2.k()     // Catch: java.lang.Throwable -> L67
            int r0 = r2.a(r0, r1)     // Catch: java.lang.Throwable -> L67
            int r1 = com.igexin.push.core.d.an     // Catch: java.lang.Throwable -> L67
            int r1 = r1 - r0
            com.igexin.push.core.d.an = r1     // Catch: java.lang.Throwable -> L67
        L5b:
            com.igexin.push.core.n r0 = com.igexin.push.core.n.a()     // Catch: java.lang.Throwable -> L67
            java.lang.String r1 = r7.getAsString(r3)     // Catch: java.lang.Throwable -> L67
            r0.a(r1, r7)     // Catch: java.lang.Throwable -> L67
            goto L15
        L67:
            return
    }

    public void a(android.content.Intent r9) {
            r8 = this;
            java.lang.String r0 = "taskid"
            java.lang.String r0 = r9.getStringExtra(r0)
            java.lang.String r1 = "messageid"
            java.lang.String r1 = r9.getStringExtra(r1)
            java.lang.String r2 = "actionid"
            java.lang.String r2 = r9.getStringExtra(r2)
            java.lang.String r3 = "accesstoken"
            java.lang.String r3 = r9.getStringExtra(r3)
            java.lang.String r4 = "title"
            boolean r5 = r9.hasExtra(r4)
            java.lang.String r6 = ""
            if (r5 == 0) goto L27
            java.lang.String r4 = r9.getStringExtra(r4)
            goto L28
        L27:
            r4 = r6
        L28:
            java.lang.String r5 = "content"
            boolean r7 = r9.hasExtra(r5)
            if (r7 == 0) goto L34
            java.lang.String r6 = r9.getStringExtra(r5)
        L34:
            r5 = 0
            java.lang.String r7 = "notifID"
            int r9 = r9.getIntExtra(r7, r5)
            android.content.Context r5 = com.igexin.push.core.d.g
            java.lang.String r7 = "notification"
            java.lang.Object r5 = r5.getSystemService(r7)
            android.app.NotificationManager r5 = (android.app.NotificationManager) r5
            if (r9 == 0) goto L4b
        L47:
            r5.cancel(r9)
            goto L60
        L4b:
            java.util.Map<java.lang.String, java.lang.Integer> r9 = com.igexin.push.core.d.aa
            boolean r9 = r9.containsKey(r0)
            if (r9 == 0) goto L60
            java.util.Map<java.lang.String, java.lang.Integer> r9 = com.igexin.push.core.d.aa
            java.lang.Object r9 = r9.get(r0)
            java.lang.Integer r9 = (java.lang.Integer) r9
            int r9 = r9.intValue()
            goto L47
        L60:
            java.util.Map<java.lang.String, java.lang.Integer> r9 = com.igexin.push.core.d.aa
            r9.remove(r0)
            java.lang.String r9 = com.igexin.push.core.d.ad
            boolean r9 = r3.equals(r9)
            if (r9 != 0) goto L6e
            goto L78
        L6e:
            com.igexin.push.core.r r9 = com.igexin.push.core.r.a()
            r9.b(r0, r1, r4, r6)
            r8.b(r0, r1, r2)
        L78:
            return
    }

    public void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "taskid"
            r0.putString(r1, r3)
            java.lang.String r3 = "messageid"
            r0.putString(r3, r4)
            android.os.Message r3 = android.os.Message.obtain()
            int r4 = com.igexin.push.core.CoreConsts.f
            r3.what = r4
            r3.obj = r0
            com.igexin.push.core.c r4 = com.igexin.push.core.c.a()
            r4.a(r3)
            return
    }

    public boolean a(java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            long r0 = r0.getId()
            com.igexin.push.core.c r2 = com.igexin.push.core.c.a()
            long r2 = r2.e()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L19
            r4.b(r5, r6, r7)
            r5 = 1
            return r5
        L19:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "taskid"
            r0.putString(r1, r5)
            java.lang.String r5 = "messageid"
            r0.putString(r5, r6)
            java.lang.String r5 = "actionid"
            r0.putString(r5, r7)
            android.os.Message r5 = android.os.Message.obtain()
            int r6 = com.igexin.push.core.CoreConsts.g
            r5.what = r6
            r5.obj = r0
            com.igexin.push.core.c r6 = com.igexin.push.core.c.a()
            boolean r5 = r6.a(r5)
            return r5
    }

    public boolean a(org.json.JSONObject r11, com.igexin.push.core.bean.PushTaskBean r12) {
            r10 = this;
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "PushMessageExecutor------parse pushmessage actionchain json start-------"
            com.igexin.b.a.c.b.a(r2, r1)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 1
            java.lang.String r3 = "action_chains"
            org.json.JSONArray r11 = r11.getJSONArray(r3)     // Catch: java.lang.Throwable -> L11d
            r3 = r0
        L15:
            int r4 = r11.length()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r5 = "type"
            if (r3 >= r4) goto L82
            java.lang.Object r4 = r11.get(r3)     // Catch: java.lang.Throwable -> L11d
            org.json.JSONObject r4 = (org.json.JSONObject) r4     // Catch: java.lang.Throwable -> L11d
            java.lang.String r4 = r4.getString(r5)     // Catch: java.lang.Throwable -> L11d
            com.igexin.push.extension.a r5 = com.igexin.push.extension.a.a()     // Catch: java.lang.Throwable -> L11d
            java.util.List r5 = r5.b()     // Catch: java.lang.Throwable -> L11d
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L11d
        L33:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Throwable -> L11d
            if (r6 == 0) goto L47
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Throwable -> L11d
            com.igexin.push.extension.stub.IPushExtension r6 = (com.igexin.push.extension.stub.IPushExtension) r6     // Catch: java.lang.Throwable -> L11d
            boolean r6 = r6.isActionSupported(r4)     // Catch: java.lang.Throwable -> L11d
            if (r6 == 0) goto L33
            r5 = r2
            goto L48
        L47:
            r5 = r0
        L48:
            if (r5 != 0) goto L7f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11d
            r5.<init>()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r6 = "PushMessageExecutor|extension not suport type = "
            r5.append(r6)     // Catch: java.lang.Throwable -> L11d
            r5.append(r4)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L11d
            java.lang.Object[] r6 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L11d
            com.igexin.b.a.c.b.a(r5, r6)     // Catch: java.lang.Throwable -> L11d
            java.util.Set<java.lang.String> r5 = com.igexin.push.core.w.c     // Catch: java.lang.Throwable -> L11d
            boolean r5 = r5.contains(r4)     // Catch: java.lang.Throwable -> L11d
            if (r5 != 0) goto L7f
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11d
            r11.<init>()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r3 = "PushMessageExecutor|action cannot be supported! --"
            r11.append(r3)     // Catch: java.lang.Throwable -> L11d
            r11.append(r4)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L11d
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L11d
            com.igexin.b.a.c.b.a(r11, r3)     // Catch: java.lang.Throwable -> L11d
            return r0
        L7f:
            int r3 = r3 + 1
            goto L15
        L82:
            r3 = r0
        L83:
            int r4 = r11.length()     // Catch: java.lang.Throwable -> L11d
            if (r3 >= r4) goto L138
            java.lang.Object r4 = r11.get(r3)     // Catch: java.lang.Throwable -> L11d
            org.json.JSONObject r4 = (org.json.JSONObject) r4     // Catch: java.lang.Throwable -> L11d
            java.lang.String r6 = r4.getString(r5)     // Catch: java.lang.Throwable -> L11d
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11d
            r7.<init>()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r8 = "PushMessageExecutor|start parse type = "
            r7.append(r8)     // Catch: java.lang.Throwable -> L11d
            r7.append(r6)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L11d
            java.lang.Object[] r8 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L11d
            com.igexin.b.a.c.b.a(r7, r8)     // Catch: java.lang.Throwable -> L11d
            com.igexin.push.extension.a r7 = com.igexin.push.extension.a.a()     // Catch: java.lang.Throwable -> L11d
            java.util.List r7 = r7.b()     // Catch: java.lang.Throwable -> L11d
            r8 = 0
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L11d
        Lb6:
            boolean r9 = r7.hasNext()     // Catch: java.lang.Throwable -> L11d
            if (r9 == 0) goto Lc8
            java.lang.Object r8 = r7.next()     // Catch: java.lang.Throwable -> L11d
            com.igexin.push.extension.stub.IPushExtension r8 = (com.igexin.push.extension.stub.IPushExtension) r8     // Catch: java.lang.Throwable -> L11d
            com.igexin.push.core.bean.BaseAction r8 = r8.parseAction(r4)     // Catch: java.lang.Throwable -> L11d
            if (r8 == 0) goto Lb6
        Lc8:
            if (r8 != 0) goto Lf1
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11d
            r7.<init>()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r9 = "PushMessageExecutor|extension can't process type = "
            r7.append(r9)     // Catch: java.lang.Throwable -> L11d
            r7.append(r6)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L11d
            java.lang.Object[] r9 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L11d
            com.igexin.b.a.c.b.a(r7, r9)     // Catch: java.lang.Throwable -> L11d
            com.igexin.push.core.a.a.a r6 = r10.a(r6)     // Catch: java.lang.Throwable -> L11d
            if (r6 == 0) goto L10c
            com.igexin.push.core.bean.BaseAction r4 = r6.a(r4)     // Catch: java.lang.Throwable -> L11d
            if (r4 == 0) goto Lef
            r4.setSupportExt(r0)     // Catch: java.lang.Throwable -> L11d
        Lef:
            r8 = r4
            goto L10c
        Lf1:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11d
            r4.<init>()     // Catch: java.lang.Throwable -> L11d
            java.lang.String r7 = "PushMessageExecutor|extension process type = "
            r4.append(r7)     // Catch: java.lang.Throwable -> L11d
            r4.append(r6)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r6 = " success"
            r4.append(r6)     // Catch: java.lang.Throwable -> L11d
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L11d
            java.lang.Object[] r6 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L11d
            com.igexin.b.a.c.b.a(r4, r6)     // Catch: java.lang.Throwable -> L11d
        L10c:
            if (r8 != 0) goto L116
            java.lang.String r11 = "PushMessageExecutor|action chains can't parse, throw ++++++"
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L11d
            com.igexin.b.a.c.b.a(r11, r3)     // Catch: java.lang.Throwable -> L11d
            return r0
        L116:
            r1.add(r8)     // Catch: java.lang.Throwable -> L11d
            int r3 = r3 + 1
            goto L83
        L11d:
            r11 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "PushMessageExecutor|"
            r3.append(r4)
            java.lang.String r11 = r11.toString()
            r3.append(r11)
            java.lang.String r11 = r3.toString()
            java.lang.Object[] r3 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r11, r3)
        L138:
            r12.setActionChains(r1)
            java.lang.Object[] r11 = new java.lang.Object[r0]
            java.lang.String r12 = "PushMessageExecutor------parse pushmessage actionchain json end-------"
            com.igexin.b.a.c.b.a(r12, r11)
            return r2
    }

    public boolean a(org.json.JSONObject r17, byte[] r18, boolean r19) {
            r16 = this;
            r1 = r16
            r0 = r17
            r2 = r18
            r3 = r19
            java.lang.String r4 = "taskid"
            java.lang.String r5 = "messageid"
            java.lang.String r6 = "appid"
            java.lang.String r7 = "action"
            java.lang.String r8 = "|"
            boolean r11 = r0.has(r7)     // Catch: java.lang.Exception -> L181
            if (r11 == 0) goto L19d
            java.lang.String r7 = r0.getString(r7)     // Catch: java.lang.Exception -> L181
            java.lang.String r11 = "pushmessage"
            boolean r7 = r7.equals(r11)     // Catch: java.lang.Exception -> L181
            if (r7 == 0) goto L19d
            java.lang.String r7 = "id"
            java.lang.String r7 = r0.getString(r7)     // Catch: java.lang.Exception -> L181
            java.lang.String r11 = r0.getString(r6)     // Catch: java.lang.Exception -> L181
            java.lang.String r12 = r0.getString(r5)     // Catch: java.lang.Exception -> L181
            java.lang.String r13 = r0.getString(r4)     // Catch: java.lang.Exception -> L181
            java.lang.String r14 = "appkey"
            java.lang.String r14 = r0.getString(r14)     // Catch: java.lang.Exception -> L181
            java.lang.String r15 = "action_chains"
            org.json.JSONArray r15 = r0.getJSONArray(r15)     // Catch: java.lang.Exception -> L181
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L181
            r10.<init>()     // Catch: java.lang.Exception -> L181
            java.lang.String r9 = "pushmessage|"
            r10.append(r9)     // Catch: java.lang.Exception -> L181
            r10.append(r13)     // Catch: java.lang.Exception -> L181
            r10.append(r8)     // Catch: java.lang.Exception -> L181
            r10.append(r12)     // Catch: java.lang.Exception -> L181
            r10.append(r8)     // Catch: java.lang.Exception -> L181
            r10.append(r11)     // Catch: java.lang.Exception -> L181
            r10.append(r8)     // Catch: java.lang.Exception -> L181
            r10.append(r3)     // Catch: java.lang.Exception -> L181
            java.lang.String r8 = r10.toString()     // Catch: java.lang.Exception -> L181
            r9 = 0
            java.lang.Object[] r10 = new java.lang.Object[r9]     // Catch: java.lang.Exception -> L181
            com.igexin.b.a.c.b.a(r8, r10)     // Catch: java.lang.Exception -> L181
            java.lang.String r8 = com.igexin.push.core.d.a     // Catch: java.lang.Exception -> L181
            boolean r8 = r11.equals(r8)     // Catch: java.lang.Exception -> L181
            if (r8 == 0) goto L178
            com.igexin.push.core.bean.PushTaskBean r8 = new com.igexin.push.core.bean.PushTaskBean     // Catch: java.lang.Exception -> L181
            r8.<init>()     // Catch: java.lang.Exception -> L181
            r8.setAppid(r11)     // Catch: java.lang.Exception -> L181
            r8.setMessageId(r12)     // Catch: java.lang.Exception -> L181
            r8.setTaskId(r13)     // Catch: java.lang.Exception -> L181
            r8.setId(r7)     // Catch: java.lang.Exception -> L181
            r8.setAppKey(r14)     // Catch: java.lang.Exception -> L181
            r7 = 1
            r8.setCurrentActionid(r7)     // Catch: java.lang.Exception -> L181
            com.igexin.push.core.a.e r7 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> L181
            java.lang.String r7 = r7.a(r13, r12)     // Catch: java.lang.Exception -> L181
            if (r3 == 0) goto Lba
            com.igexin.push.core.a.e r9 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> L181
            java.lang.String r10 = "0"
            r9.c(r8, r10)     // Catch: java.lang.Exception -> L181
            long r9 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L181
            boolean r9 = com.igexin.push.util.a.a(r9)     // Catch: java.lang.Exception -> L181
            if (r9 == 0) goto Laa
            r9 = 1
            return r9
        Laa:
            r9 = 1
            boolean r10 = com.igexin.push.util.a.a(r17)     // Catch: java.lang.Exception -> L181
            if (r10 == 0) goto Lba
            java.lang.String r0 = "PushMessageExecutor|message have loop"
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L181
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Exception -> L181
            return r9
        Lba:
            android.content.ContentValues r9 = new android.content.ContentValues     // Catch: java.lang.Exception -> L181
            r9.<init>()     // Catch: java.lang.Exception -> L181
            r9.put(r5, r12)     // Catch: java.lang.Exception -> L181
            r9.put(r4, r13)     // Catch: java.lang.Exception -> L181
            r9.put(r6, r11)     // Catch: java.lang.Exception -> L181
            java.lang.String r4 = "key"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L181
            r5.<init>()     // Catch: java.lang.Exception -> L181
            java.lang.String r6 = "CACHE_"
            r5.append(r6)     // Catch: java.lang.Exception -> L181
            r5.append(r7)     // Catch: java.lang.Exception -> L181
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L181
            r9.put(r4, r5)     // Catch: java.lang.Exception -> L181
            java.lang.String r4 = "info"
            java.lang.String r5 = r17.toString()     // Catch: java.lang.Exception -> L181
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L181
            byte[] r5 = com.igexin.b.b.a.b(r5)     // Catch: java.lang.Exception -> L181
            r9.put(r4, r5)     // Catch: java.lang.Exception -> L181
            java.lang.String r4 = "createtime"
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L181
            java.lang.Long r5 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Exception -> L181
            r9.put(r4, r5)     // Catch: java.lang.Exception -> L181
            if (r2 == 0) goto L106
            java.lang.String r4 = "msgextra"
            r9.put(r4, r2)     // Catch: java.lang.Exception -> L181
            r8.setMsgExtra(r2)     // Catch: java.lang.Exception -> L181
        L106:
            int r2 = r15.length()     // Catch: java.lang.Exception -> L181
            if (r2 <= 0) goto L11c
            boolean r2 = r1.a(r0, r8)     // Catch: java.lang.Exception -> L181
            if (r2 != 0) goto L11c
            java.lang.String r0 = "PushMessageExecutor parseActionChains result = false #######"
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L181
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Exception -> L181
            r2 = 1
            return r2
        L11c:
            java.lang.String r2 = "condition"
            if (r3 == 0) goto L164
            com.igexin.push.core.n r3 = com.igexin.push.core.n.a()     // Catch: java.lang.Exception -> L19d
            boolean r3 = r3.a(r13)     // Catch: java.lang.Exception -> L19d
            if (r3 != 0) goto L162
            boolean r3 = r0.has(r2)     // Catch: java.lang.Exception -> L19d
            java.lang.String r4 = "status"
            if (r3 == 0) goto L144
            r1.b(r0, r8)     // Catch: java.lang.Exception -> L19d
            int r3 = com.igexin.push.core.CoreConsts.k     // Catch: java.lang.Exception -> L19d
            r8.setStatus(r3)     // Catch: java.lang.Exception -> L19d
            int r3 = com.igexin.push.core.CoreConsts.k     // Catch: java.lang.Exception -> L19d
        L13c:
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L19d
            r9.put(r4, r3)     // Catch: java.lang.Exception -> L19d
            goto L14c
        L144:
            int r3 = com.igexin.push.core.CoreConsts.l     // Catch: java.lang.Exception -> L19d
            r8.setStatus(r3)     // Catch: java.lang.Exception -> L19d
            int r3 = com.igexin.push.core.CoreConsts.l     // Catch: java.lang.Exception -> L19d
            goto L13c
        L14c:
            r1.a(r9)     // Catch: java.lang.Exception -> L19d
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r3 = com.igexin.push.core.d.Z     // Catch: java.lang.Exception -> L19d
            r3.put(r7, r8)     // Catch: java.lang.Exception -> L19d
            boolean r0 = r0.has(r2)     // Catch: java.lang.Exception -> L19d
            if (r0 == 0) goto L15e
            r16.d()     // Catch: java.lang.Exception -> L19d
            goto L19d
        L15e:
            r1.a(r13, r12)     // Catch: java.lang.Exception -> L19d
            goto L19d
        L162:
            r2 = 1
            return r2
        L164:
            boolean r2 = r0.has(r2)     // Catch: java.lang.Exception -> L181
            if (r2 == 0) goto L16d
            r1.b(r0, r8)     // Catch: java.lang.Exception -> L181
        L16d:
            int r0 = com.igexin.push.core.CoreConsts.l     // Catch: java.lang.Exception -> L181
            r8.setStatus(r0)     // Catch: java.lang.Exception -> L181
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r0 = com.igexin.push.core.d.Z     // Catch: java.lang.Exception -> L181
            r0.put(r7, r8)     // Catch: java.lang.Exception -> L181
            goto L19d
        L178:
            java.lang.String r0 = "PushMessageExecutor receieve error pushmessage"
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L181
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Exception -> L181
            goto L19d
        L181:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "PushMessageExecutor "
            r2.append(r3)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r0, r2)
        L19d:
            r2 = 1
            return r2
    }

    public void b(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "PushMessageExecutor do processActionExecute"
            com.igexin.b.a.c.b.a(r2, r1)
            if (r5 == 0) goto L3c
            if (r4 != 0) goto Ld
            goto L3c
        Ld:
            com.igexin.push.core.c r1 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> L21
            if (r1 == 0) goto L3c
            com.igexin.push.core.a r1 = r3.c(r4, r5)     // Catch: java.lang.Throwable -> L21
            com.igexin.push.core.a r2 = com.igexin.push.core.a.a     // Catch: java.lang.Throwable -> L21
            if (r1 != r2) goto L3c
            java.lang.String r1 = "1"
            r3.a(r4, r5, r1)     // Catch: java.lang.Throwable -> L21
            goto L3c
        L21:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "PushMessageExecutor|"
            r5.append(r1)
            java.lang.String r4 = r4.toString()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.Object[] r5 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r4, r5)
        L3c:
            return
    }

    public boolean b() {
            r8 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.igexin.push.core.d.I
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r3 = 1
            r4 = 60000(0xea60, double:2.9644E-319)
            if (r2 <= 0) goto L1d
            long r6 = com.igexin.push.core.d.I
            long r6 = r0 - r6
            int r2 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r2 <= 0) goto L1b
            com.igexin.push.core.d.I = r0
            return r3
        L1b:
            r0 = 0
            return r0
        L1d:
            long r0 = r0 - r4
            com.igexin.push.core.d.I = r0
            return r3
    }

    public boolean b(java.lang.String r17, java.lang.String r18, java.lang.String r19) {
            r16 = this;
            r0 = r17
            r1 = r18
            r2 = r19
            com.igexin.push.core.a.e r3 = com.igexin.push.core.a.e.a()
            java.lang.String r3 = r3.a(r0, r1)
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r4 = com.igexin.push.core.d.Z
            java.lang.Object r4 = r4.get(r3)
            com.igexin.push.core.bean.PushTaskBean r4 = (com.igexin.push.core.bean.PushTaskBean) r4
            java.lang.String r5 = "PushMessageExecutor|"
            r6 = 1
            r7 = 0
            if (r4 != 0) goto Lc9
            r8 = 0
            com.igexin.push.core.c r9 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> La6
            com.igexin.push.b.b r10 = r9.k()     // Catch: java.lang.Throwable -> La6
            java.lang.String r11 = "message"
            java.lang.String r9 = "taskid"
            java.lang.String r12 = "messageid"
            java.lang.String[] r12 = new java.lang.String[]{r9, r12}     // Catch: java.lang.Throwable -> La6
            r9 = 2
            java.lang.String[] r13 = new java.lang.String[r9]     // Catch: java.lang.Throwable -> La6
            r13[r7] = r0     // Catch: java.lang.Throwable -> La6
            r13[r6] = r1     // Catch: java.lang.Throwable -> La6
            r14 = 0
            r15 = 0
            android.database.Cursor r8 = r10.a(r11, r12, r13, r14, r15)     // Catch: java.lang.Throwable -> La6
            if (r8 == 0) goto La0
            int r9 = r8.getCount()     // Catch: java.lang.Throwable -> La6
            if (r9 > 0) goto L45
            goto La0
        L45:
            boolean r9 = r8.moveToNext()     // Catch: java.lang.Throwable -> La6
            if (r9 == 0) goto L9a
            java.lang.String r9 = "info"
            int r9 = r8.getColumnIndexOrThrow(r9)     // Catch: java.lang.Throwable -> La6
            byte[] r9 = r8.getBlob(r9)     // Catch: java.lang.Throwable -> La6
            java.lang.String r10 = "msgextra"
            int r10 = r8.getColumnIndexOrThrow(r10)     // Catch: java.lang.Throwable -> La6
            byte[] r10 = r8.getBlob(r10)     // Catch: java.lang.Throwable -> La6
            java.lang.String r11 = new java.lang.String     // Catch: java.lang.Throwable -> La6
            byte[] r9 = com.igexin.b.b.a.c(r9)     // Catch: java.lang.Throwable -> La6
            r11.<init>(r9)     // Catch: java.lang.Throwable -> La6
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La6
            r9.<init>(r11)     // Catch: java.lang.Throwable -> La6
            com.igexin.push.core.w r11 = a()     // Catch: java.lang.Throwable -> La6
            r11.a(r9, r10, r7)     // Catch: java.lang.Throwable -> La6
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r9 = com.igexin.push.core.d.Z     // Catch: java.lang.Throwable -> La6
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La6
            r10.<init>()     // Catch: java.lang.Throwable -> La6
            r10.append(r0)     // Catch: java.lang.Throwable -> La6
            java.lang.String r11 = ":"
            r10.append(r11)     // Catch: java.lang.Throwable -> La6
            r10.append(r1)     // Catch: java.lang.Throwable -> La6
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> La6
            java.lang.Object r9 = r9.get(r10)     // Catch: java.lang.Throwable -> La6
            com.igexin.push.core.bean.PushTaskBean r9 = (com.igexin.push.core.bean.PushTaskBean) r9     // Catch: java.lang.Throwable -> La6
            if (r9 != 0) goto L98
            if (r8 == 0) goto L97
            r8.close()
        L97:
            return r7
        L98:
            r4 = r9
            goto L45
        L9a:
            if (r8 == 0) goto Lc9
        L9c:
            r8.close()
            goto Lc9
        La0:
            if (r8 == 0) goto La5
            r8.close()
        La5:
            return r7
        La6:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc2
            r1.<init>()     // Catch: java.lang.Throwable -> Lc2
            r1.append(r5)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lc2
            r1.append(r0)     // Catch: java.lang.Throwable -> Lc2
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> Lc2
            java.lang.Object[] r1 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> Lc2
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> Lc2
            if (r8 == 0) goto Lc9
            goto L9c
        Lc2:
            r0 = move-exception
            if (r8 == 0) goto Lc8
            r8.close()
        Lc8:
            throw r0
        Lc9:
            int r0 = r4.getExecuteTimes()
            r1 = 50
            if (r0 < r1) goto Lf1
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r0 = com.igexin.push.core.d.Z     // Catch: java.lang.Exception -> Ld7
            r0.remove(r3)     // Catch: java.lang.Exception -> Ld7
            goto Lf0
        Ld7:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.Object[] r1 = new java.lang.Object[r7]
            com.igexin.b.a.c.b.a(r0, r1)
        Lf0:
            return r6
        Lf1:
            int r0 = r0 + r6
            r4.setExecuteTimes(r0)
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.c(r4, r2)
            com.igexin.push.core.bean.BaseAction r0 = r4.getBaseAction(r2)     // Catch: java.lang.Throwable -> L143
            if (r0 != 0) goto L103
            return r7
        L103:
            boolean r1 = r0.isSupportExt()     // Catch: java.lang.Throwable -> L143
            if (r1 == 0) goto L128
            com.igexin.push.extension.a r1 = com.igexin.push.extension.a.a()     // Catch: java.lang.Throwable -> L143
            java.util.List r1 = r1.b()     // Catch: java.lang.Throwable -> L143
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L143
        L115:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L143
            if (r2 == 0) goto L128
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L143
            com.igexin.push.extension.stub.IPushExtension r2 = (com.igexin.push.extension.stub.IPushExtension) r2     // Catch: java.lang.Throwable -> L143
            boolean r2 = r2.executeAction(r4, r0)     // Catch: java.lang.Throwable -> L143
            if (r2 == 0) goto L115
            return r6
        L128:
            java.lang.String r1 = r0.getType()     // Catch: java.lang.Throwable -> L143
            r2 = r16
            com.igexin.push.core.a.a.a r1 = r2.a(r1)     // Catch: java.lang.Throwable -> L141
            if (r1 == 0) goto L140
            boolean r3 = r4.isStop()     // Catch: java.lang.Throwable -> L141
            if (r3 == 0) goto L13b
            goto L140
        L13b:
            boolean r0 = r1.b(r4, r0)     // Catch: java.lang.Throwable -> L141
            return r0
        L140:
            return r7
        L141:
            r0 = move-exception
            goto L146
        L143:
            r0 = move-exception
            r2 = r16
        L146:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.Object[] r1 = new java.lang.Object[r7]
            com.igexin.b.a.c.b.a(r0, r1)
            return r7
    }

    public com.igexin.push.core.a c(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            com.igexin.push.core.a r0 = com.igexin.push.core.a.a
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()
            java.lang.String r9 = r1.a(r8, r9)
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r1 = com.igexin.push.core.d.Z
            java.lang.Object r9 = r1.get(r9)
            com.igexin.push.core.bean.PushTaskBean r9 = (com.igexin.push.core.bean.PushTaskBean) r9
            if (r9 != 0) goto L17
            com.igexin.push.core.a r8 = com.igexin.push.core.a.c
            return r8
        L17:
            java.util.List r1 = r9.getActionChains()
            java.util.Iterator r1 = r1.iterator()
            r2 = 0
        L20:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L75
            java.lang.Object r3 = r1.next()
            com.igexin.push.core.bean.BaseAction r3 = (com.igexin.push.core.bean.BaseAction) r3
            com.igexin.push.core.a r4 = com.igexin.push.core.a.c
            if (r3 != 0) goto L31
            return r4
        L31:
            com.igexin.push.extension.a r5 = com.igexin.push.extension.a.a()
            java.util.List r5 = r5.b()
            java.util.Iterator r5 = r5.iterator()
        L3d:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L51
            java.lang.Object r4 = r5.next()
            com.igexin.push.extension.stub.IPushExtension r4 = (com.igexin.push.extension.stub.IPushExtension) r4
            com.igexin.push.core.a r4 = r4.prepareExecuteAction(r9, r3)
            com.igexin.push.core.a r6 = com.igexin.push.core.a.c
            if (r4 == r6) goto L3d
        L51:
            com.igexin.push.core.a r5 = com.igexin.push.core.a.c
            if (r4 != r5) goto L69
            java.lang.String r5 = r3.getType()
            com.igexin.push.core.a.a.a r5 = r7.a(r5)
            if (r5 != 0) goto L60
            return r4
        L60:
            com.igexin.push.core.a r4 = r5.a(r9, r3)
            com.igexin.push.core.a r3 = com.igexin.push.core.a.c
            if (r4 != r3) goto L69
            return r4
        L69:
            com.igexin.push.core.a r3 = com.igexin.push.core.a.a
            if (r0 != r3) goto L6e
            r0 = r4
        L6e:
            com.igexin.push.core.a r3 = com.igexin.push.core.a.b
            if (r4 != r3) goto L20
            int r2 = r2 + 1
            goto L20
        L75:
            if (r2 == 0) goto L84
            java.lang.Integer r9 = java.lang.Integer.valueOf(r2)
            r1 = 1
            boolean r8 = com.igexin.push.core.d.a(r8, r9, r1)
            if (r8 != 0) goto L84
            com.igexin.push.core.a r0 = com.igexin.push.core.a.a
        L84:
            return r0
    }

    public void c() {
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 604800000(0x240c8400, double:2.988109026E-315)
            long r0 = r0 - r2
            com.igexin.push.core.c r2 = com.igexin.push.core.c.a()
            com.igexin.push.b.b r2 = r2.k()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "createtime <= "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            java.lang.String r1 = "message"
            r2.a(r1, r0)
            return
    }

    public void d() {
            r18 = this;
            r1 = r18
            java.lang.String r2 = "netConnected"
            java.lang.String r3 = "startTime"
            java.lang.String r4 = "screenOn"
            java.lang.String r5 = "wifi"
            java.lang.String r6 = "endTime"
            java.lang.String r7 = "expiredTime"
            java.lang.String r8 = "PushMessageExecutor|"
            r9 = 0
            boolean r0 = r18.f()     // Catch: java.lang.Exception -> L128
            if (r0 == 0) goto L18
            return
        L18:
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r0 = com.igexin.push.core.d.Z     // Catch: java.lang.Exception -> L128
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Exception -> L128
            java.util.Iterator r10 = r0.iterator()     // Catch: java.lang.Exception -> L128
        L22:
            boolean r0 = r10.hasNext()     // Catch: java.lang.Exception -> L128
            if (r0 == 0) goto L141
            java.lang.Object r0 = r10.next()     // Catch: java.lang.Exception -> L10d
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Exception -> L10d
            java.lang.Object r11 = r0.getKey()     // Catch: java.lang.Exception -> L10d
            java.lang.String r11 = (java.lang.String) r11     // Catch: java.lang.Exception -> L10d
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Exception -> L10d
            com.igexin.push.core.bean.PushTaskBean r0 = (com.igexin.push.core.bean.PushTaskBean) r0     // Catch: java.lang.Exception -> L10d
            if (r0 != 0) goto L3d
            return
        L3d:
            int r12 = r0.getStatus()     // Catch: java.lang.Exception -> L10d
            int r13 = com.igexin.push.core.CoreConsts.k     // Catch: java.lang.Exception -> L10d
            if (r12 != r13) goto L22
            java.lang.String r12 = r0.getTaskId()     // Catch: java.lang.Exception -> L10d
            java.util.Map r13 = r0.getConditionMap()     // Catch: java.lang.Exception -> L10d
            if (r13 != 0) goto L50
            return
        L50:
            int r14 = r13.size()     // Catch: java.lang.Exception -> L10d
            if (r14 <= 0) goto Lfd
            boolean r14 = r13.containsKey(r7)     // Catch: java.lang.Exception -> L10d
            if (r14 == 0) goto L79
            java.lang.Object r14 = r13.get(r7)     // Catch: java.lang.Exception -> L10d
            java.lang.String r14 = (java.lang.String) r14     // Catch: java.lang.Exception -> L10d
            long r14 = java.lang.Long.parseLong(r14)     // Catch: java.lang.Exception -> L10d
            long r16 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L10d
            int r14 = (r14 > r16 ? 1 : (r14 == r16 ? 0 : -1))
            if (r14 >= 0) goto L79
            int r13 = com.igexin.push.core.CoreConsts.m     // Catch: java.lang.Exception -> L10d
            r1.a(r13, r12, r11)     // Catch: java.lang.Exception -> L10d
            int r11 = com.igexin.push.core.CoreConsts.l     // Catch: java.lang.Exception -> L10d
        L75:
            r0.setStatus(r11)     // Catch: java.lang.Exception -> L10d
            goto L22
        L79:
            boolean r14 = r13.containsKey(r6)     // Catch: java.lang.Exception -> L10d
            if (r14 == 0) goto L99
            java.lang.Object r14 = r13.get(r6)     // Catch: java.lang.Exception -> L10d
            java.lang.String r14 = (java.lang.String) r14     // Catch: java.lang.Exception -> L10d
            long r14 = java.lang.Long.parseLong(r14)     // Catch: java.lang.Exception -> L10d
            long r16 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L10d
            int r14 = (r14 > r16 ? 1 : (r14 == r16 ? 0 : -1))
            if (r14 >= 0) goto L99
            int r13 = com.igexin.push.core.CoreConsts.m     // Catch: java.lang.Exception -> L10d
            r1.a(r13, r12, r11)     // Catch: java.lang.Exception -> L10d
            int r11 = com.igexin.push.core.CoreConsts.l     // Catch: java.lang.Exception -> L10d
            goto L75
        L99:
            boolean r14 = r13.containsKey(r5)     // Catch: java.lang.Exception -> L10d
            if (r14 == 0) goto Lb2
            java.lang.Object r14 = r13.get(r5)     // Catch: java.lang.Exception -> L10d
            java.lang.String r14 = (java.lang.String) r14     // Catch: java.lang.Exception -> L10d
            int r14 = java.lang.Integer.parseInt(r14)     // Catch: java.lang.Exception -> L10d
            com.igexin.push.util.a.c()     // Catch: java.lang.Exception -> L10d
            int r15 = com.igexin.push.core.d.r     // Catch: java.lang.Exception -> L10d
            if (r14 == r15) goto Lb2
            goto L22
        Lb2:
            boolean r14 = r13.containsKey(r4)     // Catch: java.lang.Exception -> L10d
            if (r14 == 0) goto Lcb
            java.lang.Object r14 = r13.get(r4)     // Catch: java.lang.Exception -> L10d
            java.lang.String r14 = (java.lang.String) r14     // Catch: java.lang.Exception -> L10d
            int r14 = java.lang.Integer.parseInt(r14)     // Catch: java.lang.Exception -> L10d
            com.igexin.push.util.a.d()     // Catch: java.lang.Exception -> L10d
            int r15 = com.igexin.push.core.d.s     // Catch: java.lang.Exception -> L10d
            if (r14 == r15) goto Lcb
            goto L22
        Lcb:
            boolean r14 = r13.containsKey(r3)     // Catch: java.lang.Exception -> L10d
            if (r14 == 0) goto Le5
            java.lang.Object r14 = r13.get(r3)     // Catch: java.lang.Exception -> L10d
            java.lang.String r14 = (java.lang.String) r14     // Catch: java.lang.Exception -> L10d
            long r14 = java.lang.Long.parseLong(r14)     // Catch: java.lang.Exception -> L10d
            long r16 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L10d
            int r14 = (r14 > r16 ? 1 : (r14 == r16 ? 0 : -1))
            if (r14 <= 0) goto Le5
            goto L22
        Le5:
            boolean r14 = r13.containsKey(r2)     // Catch: java.lang.Exception -> L10d
            if (r14 == 0) goto Lfd
            java.lang.Object r13 = r13.get(r2)     // Catch: java.lang.Exception -> L22
            java.lang.String r13 = (java.lang.String) r13     // Catch: java.lang.Exception -> L22
            int r13 = java.lang.Integer.parseInt(r13)     // Catch: java.lang.Exception -> L22
            boolean r14 = com.igexin.push.util.a.f()     // Catch: java.lang.Exception -> L22
            if (r13 == r14) goto Lfd
            goto L22
        Lfd:
            java.lang.String r13 = r0.getMessageId()     // Catch: java.lang.Exception -> L10d
            r1.a(r12, r13)     // Catch: java.lang.Exception -> L10d
            int r13 = com.igexin.push.core.CoreConsts.l     // Catch: java.lang.Exception -> L10d
            r1.a(r13, r12, r11)     // Catch: java.lang.Exception -> L10d
            int r11 = com.igexin.push.core.CoreConsts.l     // Catch: java.lang.Exception -> L10d
            goto L75
        L10d:
            r0 = move-exception
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L128
            r11.<init>()     // Catch: java.lang.Exception -> L128
            r11.append(r8)     // Catch: java.lang.Exception -> L128
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L128
            r11.append(r0)     // Catch: java.lang.Exception -> L128
            java.lang.String r0 = r11.toString()     // Catch: java.lang.Exception -> L128
            java.lang.Object[] r11 = new java.lang.Object[r9]     // Catch: java.lang.Exception -> L128
            com.igexin.b.a.c.b.a(r0, r11)     // Catch: java.lang.Exception -> L128
            goto L22
        L128:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r8)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.Object[] r2 = new java.lang.Object[r9]
            com.igexin.b.a.c.b.a(r0, r2)
        L141:
            return
    }

    public void e() {
            r11 = this;
            java.lang.String r0 = "taskid"
            java.lang.String r1 = "PushMessageExecutor|del condition"
            r2 = 0
            r3 = 0
            com.igexin.push.core.c r4 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> Lae
            com.igexin.push.b.b r4 = r4.k()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r6 = "message"
            java.lang.String r5 = "status"
            java.lang.String[] r7 = new java.lang.String[]{r5}     // Catch: java.lang.Throwable -> Lae
            java.lang.String r5 = "0"
            java.lang.String[] r8 = new java.lang.String[]{r5}     // Catch: java.lang.Throwable -> Lae
            r9 = 0
            r10 = 0
            r5 = r4
            android.database.Cursor r3 = r5.a(r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> Lae
            if (r3 == 0) goto Lab
        L25:
            boolean r5 = r3.moveToNext()     // Catch: java.lang.Throwable -> Lae
            if (r5 == 0) goto Lab
            java.lang.String r5 = "info"
            int r5 = r3.getColumnIndex(r5)     // Catch: java.lang.Throwable -> Lae
            byte[] r5 = r3.getBlob(r5)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r6 = "createtime"
            int r6 = r3.getColumnIndex(r6)     // Catch: java.lang.Throwable -> Lae
            long r6 = r3.getLong(r6)     // Catch: java.lang.Throwable -> Lae
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L90
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.Throwable -> L90
            byte[] r5 = com.igexin.b.b.a.c(r5)     // Catch: java.lang.Throwable -> L90
            r9.<init>(r5)     // Catch: java.lang.Throwable -> L90
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L90
            java.lang.String r5 = r8.getString(r0)     // Catch: java.lang.Throwable -> L90
            java.lang.String r9 = "condition"
            boolean r9 = r8.has(r9)     // Catch: java.lang.Throwable -> L90
            if (r9 == 0) goto L25
            boolean r8 = r11.a(r8)     // Catch: java.lang.Throwable -> L90
            if (r8 != 0) goto L25
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L90
            long r8 = r8 - r6
            r6 = 259200000(0xf731400, double:1.280618154E-315)
            int r6 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            if (r6 <= 0) goto L25
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L90
            r6.<init>()     // Catch: java.lang.Throwable -> L90
            java.lang.String r7 = "PushMessageExecutor|del condition taskid = "
            r6.append(r7)     // Catch: java.lang.Throwable -> L90
            r6.append(r5)     // Catch: java.lang.Throwable -> L90
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L90
            java.lang.Object[] r7 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L90
            com.igexin.b.a.c.b.a(r6, r7)     // Catch: java.lang.Throwable -> L90
            java.lang.String r6 = "message"
            java.lang.String[] r7 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L90
            r8 = 1
            java.lang.String[] r8 = new java.lang.String[r8]     // Catch: java.lang.Throwable -> L90
            r8[r2] = r5     // Catch: java.lang.Throwable -> L90
            r4.a(r6, r7, r8)     // Catch: java.lang.Throwable -> L90
            goto L25
        L90:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lae
            r6.<init>()     // Catch: java.lang.Throwable -> Lae
            r6.append(r1)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lae
            r6.append(r5)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> Lae
            java.lang.Object[] r6 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> Lae
            com.igexin.b.a.c.b.a(r5, r6)     // Catch: java.lang.Throwable -> Lae
            goto L25
        Lab:
            if (r3 == 0) goto Lcc
            goto Lc9
        Lae:
            r0 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lcd
            r4.<init>()     // Catch: java.lang.Throwable -> Lcd
            r4.append(r1)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lcd
            r4.append(r0)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> Lcd
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> Lcd
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> Lcd
            if (r3 == 0) goto Lcc
        Lc9:
            r3.close()
        Lcc:
            return
        Lcd:
            r0 = move-exception
            if (r3 == 0) goto Ld3
            r3.close()
        Ld3:
            throw r0
    }
}
