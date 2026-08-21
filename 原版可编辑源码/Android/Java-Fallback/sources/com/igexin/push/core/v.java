package com.igexin.push.core;

public class v {
    private static com.igexin.push.core.v a;

    private v() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.push.core.v a() {
            com.igexin.push.core.v r0 = com.igexin.push.core.v.a
            if (r0 != 0) goto Lb
            com.igexin.push.core.v r0 = new com.igexin.push.core.v
            r0.<init>()
            com.igexin.push.core.v.a = r0
        Lb:
            com.igexin.push.core.v r0 = com.igexin.push.core.v.a
            return r0
    }

    public void a(int r1, int r2, java.lang.String r3) {
            r0 = this;
            com.igexin.push.config.j.a = r1
            com.igexin.push.config.j.b = r2
            com.igexin.push.config.a r1 = com.igexin.push.config.a.a()
            r1.b()
            com.igexin.push.a.a.c r1 = com.igexin.push.a.a.c.c()
            r1.d()
            return
    }

    public void a(int r3, java.lang.String r4) {
            r2 = this;
            com.igexin.push.config.j.d = r3
            com.igexin.push.config.a r3 = com.igexin.push.config.a.a()
            r3.c()
            boolean r3 = com.igexin.push.core.d.n
            if (r3 == 0) goto L2f
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r4 = "setHeartbeatInterval heartbeatReq"
            com.igexin.b.a.c.b.a(r4, r3)
            long r3 = java.lang.System.currentTimeMillis()
            long r0 = com.igexin.push.core.d.M
            long r3 = r3 - r0
            r0 = 5000(0x1388, double:2.4703E-320)
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 <= 0) goto L2f
            long r3 = java.lang.System.currentTimeMillis()
            com.igexin.push.core.d.M = r3
            com.igexin.push.core.a.e r3 = com.igexin.push.core.a.e.a()
            r3.b()
        L2f:
            return
    }

    public void a(android.os.Bundle r8) {
            r7 = this;
            java.lang.String r0 = "action"
            java.lang.String r0 = r8.getString(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "PushController|action pushmanager action = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L24
            return
        L24:
            java.lang.String r1 = "setTag"
            boolean r1 = r0.equals(r1)
            java.lang.String r3 = "sn"
            if (r1 == 0) goto L3d
            java.lang.String r0 = "tags"
            java.lang.String r0 = r8.getString(r0)
            java.lang.String r8 = r8.getString(r3)
            r7.a(r0, r8)
            goto L1bd
        L3d:
            java.lang.String r1 = "setSilentTime"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L65
            java.lang.String r0 = "beginHour"
            int r0 = r8.getInt(r0, r2)
            java.lang.String r1 = "duration"
            int r8 = r8.getInt(r1, r2)
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.String r1 = r1.getPackageName()
            r7.a(r0, r8, r1)
            com.igexin.assist.sdk.AssistPushManager r1 = com.igexin.assist.sdk.AssistPushManager.getInstance()
            android.content.Context r2 = com.igexin.push.core.d.g
            r1.setSilentTime(r2, r0, r8)
            goto L1bd
        L65:
            java.lang.String r1 = "sendMessage"
            boolean r1 = r0.equals(r1)
            java.lang.String r4 = "taskid"
            if (r1 == 0) goto La0
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r1 = "PushController onPushManagerMessage recevie action : sendMessage"
            com.igexin.b.a.c.b.a(r1, r0)
            java.lang.String r0 = r8.getString(r4)
            java.lang.String r1 = "extraData"
            byte[] r8 = r8.getByteArray(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "PushController receive broadcast msg data , task id : "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = " ######@##@@@#"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r2)
            r7.a(r0, r8)
            goto L1bd
        La0:
            java.lang.String r1 = "setHeartbeatInterval"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto Lb9
            java.lang.String r0 = "interval"
            int r8 = r8.getInt(r0, r2)
            android.content.Context r0 = com.igexin.push.core.d.g
            java.lang.String r0 = r0.getPackageName()
            r7.a(r8, r0)
            goto L1bd
        Lb9:
            java.lang.String r1 = "setSocketTimeout"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto Ld2
            java.lang.String r0 = "timeout"
            int r8 = r8.getInt(r0, r2)
            android.content.Context r0 = com.igexin.push.core.d.g
            java.lang.String r0 = r0.getPackageName()
            r7.b(r8, r0)
            goto L1bd
        Ld2:
            java.lang.String r1 = "sendFeedbackMessage"
            boolean r1 = r0.equals(r1)
            r5 = 1
            if (r1 == 0) goto L143
            int r0 = com.igexin.push.core.d.ac
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 > r1) goto L1bd
            java.lang.String r0 = r8.getString(r4)
            java.lang.String r1 = "messageid"
            java.lang.String r1 = r8.getString(r1)
            java.lang.String r2 = "actionid"
            java.lang.String r8 = r8.getString(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r3 = ":"
            r2.append(r3)
            r2.append(r1)
            r2.append(r3)
            r2.append(r8)
            java.lang.String r2 = r2.toString()
            java.util.HashMap<java.lang.String, java.lang.Long> r3 = com.igexin.push.core.d.ab
            java.lang.Object r3 = r3.get(r2)
            if (r3 != 0) goto L1bd
            long r3 = java.lang.System.currentTimeMillis()
            com.igexin.push.core.bean.PushTaskBean r6 = new com.igexin.push.core.bean.PushTaskBean
            r6.<init>()
            r6.setTaskId(r0)
            r6.setMessageId(r1)
            java.lang.String r0 = com.igexin.push.core.d.a
            r6.setAppid(r0)
            java.lang.String r0 = com.igexin.push.core.d.b
            r6.setAppKey(r0)
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            r0.b(r6, r8)
            int r8 = com.igexin.push.core.d.ac
            int r8 = r8 + r5
            com.igexin.push.core.d.ac = r8
            java.util.HashMap<java.lang.String, java.lang.Long> r8 = com.igexin.push.core.d.ab
            java.lang.Long r0 = java.lang.Long.valueOf(r3)
            r8.put(r2, r0)
            goto L1bd
        L143:
            java.lang.String r1 = "turnOffPush"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L15c
            com.igexin.push.core.c r8 = com.igexin.push.core.c.a()
            r8.g()
            com.igexin.assist.sdk.AssistPushManager r8 = com.igexin.assist.sdk.AssistPushManager.getInstance()
            android.content.Context r0 = com.igexin.push.core.d.g
            r8.turnOffPush(r0)
            goto L1bd
        L15c:
            java.lang.String r1 = "bindAlias"
            boolean r1 = r0.equals(r1)
            java.lang.String r4 = "alias"
            if (r1 == 0) goto L179
            java.lang.String r0 = r8.getString(r4)
            java.lang.String r8 = r8.getString(r3)
            java.lang.Object[] r1 = new java.lang.Object[r2]
            java.lang.String r2 = "PushController|onPushManagerMessage bindAlias..."
            com.igexin.b.a.c.b.a(r2, r1)
            r7.b(r0, r8)
            goto L1bd
        L179:
            java.lang.String r1 = "unbindAlias"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L19a
            java.lang.String r0 = r8.getString(r4)
            java.lang.String r1 = r8.getString(r3)
            java.lang.String r3 = "isSeft"
            boolean r8 = r8.getBoolean(r3)
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.String r3 = "PushController|onPushManagerMessage unbindAlias..."
            com.igexin.b.a.c.b.a(r3, r2)
            r7.a(r0, r1, r8)
            goto L1bd
        L19a:
            java.lang.String r1 = "sendApplinkFeedback"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L1ac
            java.lang.String r0 = "url"
            java.lang.String r8 = r8.getString(r0)
            r7.a(r8)
            goto L1bd
        L1ac:
            java.lang.String r1 = "setHwBadgeNum"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L1bd
            java.lang.String r0 = "badgeNum"
            int r8 = r8.getInt(r0)
            com.igexin.push.util.b.a(r8, r5)
        L1bd:
            return
    }

    public void a(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 0
            android.net.Uri r1 = android.net.Uri.parse(r5)     // Catch: java.lang.Exception -> L6e
            java.lang.String r2 = r1.getHost()     // Catch: java.lang.Exception -> L6e
            java.lang.String r3 = "p"
            java.lang.String r1 = r1.getQueryParameter(r3)     // Catch: java.lang.Exception -> L6e
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L6e
            if (r3 != 0) goto L52
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L6e
            if (r3 == 0) goto L23
            goto L52
        L23:
            boolean r5 = com.igexin.push.util.a.b(r2)     // Catch: java.lang.Exception -> L6e
            if (r5 != 0) goto L31
            java.lang.String r5 = "PushController|checkIsWhiteApplinkDomain is false, not feedback"
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L6e
            com.igexin.b.a.c.b.a(r5, r1)     // Catch: java.lang.Exception -> L6e
            return
        L31:
            com.igexin.push.core.bean.PushTaskBean r5 = new com.igexin.push.core.bean.PushTaskBean     // Catch: java.lang.Exception -> L6e
            r5.<init>()     // Catch: java.lang.Exception -> L6e
            java.lang.String r2 = "getuiapplinkup"
            r5.setTaskId(r2)     // Catch: java.lang.Exception -> L6e
            r5.setMessageId(r1)     // Catch: java.lang.Exception -> L6e
            java.lang.String r1 = com.igexin.push.core.d.a     // Catch: java.lang.Exception -> L6e
            r5.setAppid(r1)     // Catch: java.lang.Exception -> L6e
            java.lang.String r1 = com.igexin.push.core.d.b     // Catch: java.lang.Exception -> L6e
            r5.setAppKey(r1)     // Catch: java.lang.Exception -> L6e
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> L6e
            java.lang.String r2 = "20000"
            r1.b(r5, r2)     // Catch: java.lang.Exception -> L6e
            goto L89
        L52:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6e
            r1.<init>()     // Catch: java.lang.Exception -> L6e
            java.lang.String r2 = "PushController|url "
            r1.append(r2)     // Catch: java.lang.Exception -> L6e
            r1.append(r5)     // Catch: java.lang.Exception -> L6e
            java.lang.String r5 = " is invalid"
            r1.append(r5)     // Catch: java.lang.Exception -> L6e
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> L6e
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L6e
            com.igexin.b.a.c.b.a(r5, r1)     // Catch: java.lang.Exception -> L6e
            return
        L6e:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "PushController|"
            r1.append(r2)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r5, r0)
        L89:
            return
    }

    public void a(java.lang.String r9, java.lang.String r10) {
            r8 = this;
            java.lang.String r0 = com.igexin.push.core.d.u
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L12
            com.igexin.push.core.r r9 = com.igexin.push.core.r.a()
            java.lang.String r0 = "10099"
            r9.a(r10, r0)
            return
        L12:
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L99
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L99
            r0.<init>()     // Catch: java.lang.Exception -> L99
            java.lang.String r1 = "action"
            java.lang.String r4 = "set_tag"
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L49
            java.lang.String r1 = "id"
            java.lang.String r4 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L49
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L49
            java.lang.String r1 = "cid"
            java.lang.String r4 = com.igexin.push.core.d.u     // Catch: java.lang.Exception -> L49
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L49
            java.lang.String r1 = "appid"
            java.lang.String r4 = com.igexin.push.core.d.a     // Catch: java.lang.Exception -> L49
            r0.put(r1, r4)     // Catch: java.lang.Exception -> L49
            java.lang.String r1 = "tags"
            java.lang.String r4 = "utf-8"
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r4)     // Catch: java.lang.Exception -> L49
            r0.put(r1, r9)     // Catch: java.lang.Exception -> L49
            java.lang.String r9 = "sn"
            r0.put(r9, r10)     // Catch: java.lang.Exception -> L49
        L49:
            java.lang.String r9 = r0.toString()     // Catch: java.lang.Exception -> L99
            boolean r10 = com.igexin.push.core.d.n     // Catch: java.lang.Exception -> L99
            if (r10 == 0) goto L53
            r6 = r2
            goto L56
        L53:
            r0 = 0
            r6 = r0
        L56:
            com.igexin.push.core.b.e r10 = com.igexin.push.core.b.e.a()     // Catch: java.lang.Exception -> L99
            com.igexin.push.core.bean.h r0 = new com.igexin.push.core.bean.h     // Catch: java.lang.Exception -> L99
            r5 = 2
            r1 = r0
            r4 = r9
            r1.<init>(r2, r4, r5, r6)     // Catch: java.lang.Exception -> L99
            r10.a(r0)     // Catch: java.lang.Exception -> L99
            com.igexin.push.d.c.b r10 = new com.igexin.push.d.c.b     // Catch: java.lang.Exception -> L99
            r10.<init>()     // Catch: java.lang.Exception -> L99
            r10.b()     // Catch: java.lang.Exception -> L99
            java.lang.String r0 = "17258000"
            r10.d = r0     // Catch: java.lang.Exception -> L99
            r10.e = r9     // Catch: java.lang.Exception -> L99
            com.igexin.push.core.c r9 = com.igexin.push.core.c.a()     // Catch: java.lang.Exception -> L99
            com.igexin.push.e.a r9 = r9.i()     // Catch: java.lang.Exception -> L99
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L99
            r0.<init>()     // Catch: java.lang.Exception -> L99
            java.lang.String r1 = "C-"
            r0.append(r1)     // Catch: java.lang.Exception -> L99
            java.lang.String r1 = com.igexin.push.core.d.u     // Catch: java.lang.Exception -> L99
            r0.append(r1)     // Catch: java.lang.Exception -> L99
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L99
            r9.a(r0, r10)     // Catch: java.lang.Exception -> L99
            java.lang.String r9 = "settag"
            r10 = 0
            java.lang.Object[] r10 = new java.lang.Object[r10]     // Catch: java.lang.Exception -> L99
            com.igexin.b.a.c.b.a(r9, r10)     // Catch: java.lang.Exception -> L99
        L99:
            return
    }

    public void a(java.lang.String r7, java.lang.String r8, boolean r9) {
            r6 = this;
            if (r9 == 0) goto L14
            java.lang.String r0 = com.igexin.push.core.d.u
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L14
            com.igexin.push.core.r r7 = com.igexin.push.core.r.a()
            java.lang.String r9 = "10099"
            r7.c(r8, r9)
            return
        L14:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.igexin.push.core.d.O
            long r2 = r0 - r2
            r4 = 1000(0x3e8, double:4.94E-321)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r3 = 0
            if (r2 <= 0) goto L73
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat
            java.util.Locale r4 = java.util.Locale.getDefault()
            java.lang.String r5 = "yyyy-MM-dd"
            r2.<init>(r5, r4)
            java.util.Date r4 = new java.util.Date
            r4.<init>(r0)
            java.lang.String r2 = r2.format(r4)
            java.lang.String r4 = com.igexin.push.core.d.N
            boolean r4 = r2.equals(r4)
            if (r4 != 0) goto L4d
            com.igexin.push.core.b.i r4 = com.igexin.push.core.b.i.a()
            r4.f(r2)
            com.igexin.push.core.b.i r2 = com.igexin.push.core.b.i.a()
            r2.a(r3)
        L4d:
            int r2 = com.igexin.push.core.d.P
            r4 = 100
            if (r2 >= r4) goto L6b
            java.lang.Object[] r2 = new java.lang.Object[r3]
            java.lang.String r3 = "start unbindAlias ###"
            com.igexin.b.a.c.b.a(r3, r2)
            com.igexin.push.core.d.O = r0
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            int r1 = com.igexin.push.core.d.P
            r2 = 1
            int r1 = r1 + r2
            r0.a(r1)
            r6.a(r7, r8, r2, r9)
            goto L7a
        L6b:
            java.lang.Object[] r7 = new java.lang.Object[r3]
            java.lang.String r8 = "PushController|unbindAlias times exceed"
            com.igexin.b.a.c.b.a(r8, r7)
            goto L7a
        L73:
            java.lang.Object[] r7 = new java.lang.Object[r3]
            java.lang.String r8 = "PushController|unbindAlias frequently called"
            com.igexin.b.a.c.b.a(r8, r7)
        L7a:
            return
    }

    public void a(java.lang.String r9, java.lang.String r10, boolean r11, boolean r12) {
            r8 = this;
            java.lang.String r0 = com.igexin.push.core.d.u
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L12
            com.igexin.push.core.r r9 = com.igexin.push.core.r.a()
            java.lang.String r11 = "10099"
            r9.b(r10, r11)
            return
        L12:
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Lb8
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lb8
            r0.<init>()     // Catch: java.lang.Exception -> Lb8
            if (r11 == 0) goto L20
            java.lang.String r3 = "unbind_alias"
            goto L22
        L20:
            java.lang.String r3 = "bind_alias"
        L22:
            r7 = r3
            if (r11 == 0) goto L28
            r3 = 8
            goto L29
        L28:
            r3 = 7
        L29:
            r4 = r3
            java.lang.String r3 = "action"
            r0.put(r3, r7)     // Catch: java.lang.Exception -> L57
            java.lang.String r3 = "id"
            java.lang.String r5 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> L57
            r0.put(r3, r5)     // Catch: java.lang.Exception -> L57
            java.lang.String r3 = "cid"
            java.lang.String r5 = com.igexin.push.core.d.u     // Catch: java.lang.Exception -> L57
            r0.put(r3, r5)     // Catch: java.lang.Exception -> L57
            java.lang.String r3 = "appid"
            java.lang.String r5 = com.igexin.push.core.d.a     // Catch: java.lang.Exception -> L57
            r0.put(r3, r5)     // Catch: java.lang.Exception -> L57
            java.lang.String r3 = "alias"
            r0.put(r3, r9)     // Catch: java.lang.Exception -> L57
            java.lang.String r9 = "sn"
            r0.put(r9, r10)     // Catch: java.lang.Exception -> L57
            if (r11 == 0) goto L57
            java.lang.String r9 = "is_self"
            r0.put(r9, r12)     // Catch: java.lang.Exception -> L57
        L57:
            java.lang.String r9 = r0.toString()     // Catch: java.lang.Exception -> Lb8
            boolean r10 = com.igexin.push.core.d.n     // Catch: java.lang.Exception -> Lb8
            if (r10 == 0) goto L61
            r5 = r1
            goto L64
        L61:
            r10 = 0
            r5 = r10
        L64:
            com.igexin.push.core.b.e r10 = com.igexin.push.core.b.e.a()     // Catch: java.lang.Exception -> Lb8
            com.igexin.push.core.bean.h r11 = new com.igexin.push.core.bean.h     // Catch: java.lang.Exception -> Lb8
            r0 = r11
            r3 = r9
            r0.<init>(r1, r3, r4, r5)     // Catch: java.lang.Exception -> Lb8
            r10.a(r11)     // Catch: java.lang.Exception -> Lb8
            com.igexin.push.d.c.b r10 = new com.igexin.push.d.c.b     // Catch: java.lang.Exception -> Lb8
            r10.<init>()     // Catch: java.lang.Exception -> Lb8
            r10.b()     // Catch: java.lang.Exception -> Lb8
            java.lang.String r11 = "17258000"
            r10.d = r11     // Catch: java.lang.Exception -> Lb8
            r10.e = r9     // Catch: java.lang.Exception -> Lb8
            com.igexin.push.core.c r11 = com.igexin.push.core.c.a()     // Catch: java.lang.Exception -> Lb8
            com.igexin.push.e.a r11 = r11.i()     // Catch: java.lang.Exception -> Lb8
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb8
            r12.<init>()     // Catch: java.lang.Exception -> Lb8
            java.lang.String r0 = "C-"
            r12.append(r0)     // Catch: java.lang.Exception -> Lb8
            java.lang.String r0 = com.igexin.push.core.d.u     // Catch: java.lang.Exception -> Lb8
            r12.append(r0)     // Catch: java.lang.Exception -> Lb8
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Exception -> Lb8
            r11.a(r12, r10)     // Catch: java.lang.Exception -> Lb8
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb8
            r10.<init>()     // Catch: java.lang.Exception -> Lb8
            r10.append(r7)     // Catch: java.lang.Exception -> Lb8
            java.lang.String r11 = " = "
            r10.append(r11)     // Catch: java.lang.Exception -> Lb8
            r10.append(r9)     // Catch: java.lang.Exception -> Lb8
            java.lang.String r9 = r10.toString()     // Catch: java.lang.Exception -> Lb8
            r10 = 0
            java.lang.Object[] r10 = new java.lang.Object[r10]     // Catch: java.lang.Exception -> Lb8
            com.igexin.b.a.c.b.a(r9, r10)     // Catch: java.lang.Exception -> Lb8
        Lb8:
            return
    }

    public void a(java.lang.String r14, byte[] r15) {
            r13 = this;
            java.lang.String r0 = com.igexin.push.core.d.u
            if (r0 == 0) goto Lc0
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            long r8 = java.lang.System.currentTimeMillis()
            r10 = 0
            java.lang.String r1 = "action"
            java.lang.String r2 = "sendmessage"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "id"
            java.lang.String r2 = java.lang.String.valueOf(r8)     // Catch: java.lang.Throwable -> La5
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "cid"
            java.lang.String r2 = com.igexin.push.core.d.u     // Catch: java.lang.Throwable -> La5
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "appid"
            java.lang.String r2 = com.igexin.push.core.d.a     // Catch: java.lang.Throwable -> La5
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "taskid"
            r0.put(r1, r14)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "extraData"
            java.lang.String r2 = com.igexin.push.util.d.b(r15, r10)     // Catch: java.lang.Throwable -> La5
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> La5
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> La5
            com.igexin.push.core.b.e r11 = com.igexin.push.core.b.e.a()     // Catch: java.lang.Throwable -> La5
            com.igexin.push.core.bean.h r12 = new com.igexin.push.core.bean.h     // Catch: java.lang.Throwable -> La5
            r5 = 6
            r1 = r12
            r2 = r8
            r4 = r0
            r6 = r8
            r1.<init>(r2, r4, r5, r6)     // Catch: java.lang.Throwable -> La5
            r11.a(r12)     // Catch: java.lang.Throwable -> La5
            com.igexin.push.d.c.b r1 = new com.igexin.push.d.c.b     // Catch: java.lang.Throwable -> La5
            r1.<init>()     // Catch: java.lang.Throwable -> La5
            r1.b()     // Catch: java.lang.Throwable -> La5
            int r2 = (int) r8     // Catch: java.lang.Throwable -> La5
            r1.a = r2     // Catch: java.lang.Throwable -> La5
            java.lang.String r2 = com.igexin.push.core.d.u     // Catch: java.lang.Throwable -> La5
            r1.d = r2     // Catch: java.lang.Throwable -> La5
            r1.e = r0     // Catch: java.lang.Throwable -> La5
            r1.f = r15     // Catch: java.lang.Throwable -> La5
            java.lang.String r15 = com.igexin.push.core.d.u     // Catch: java.lang.Throwable -> La5
            r1.g = r15     // Catch: java.lang.Throwable -> La5
            com.igexin.push.core.c r15 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> La5
            com.igexin.push.e.a r15 = r15.i()     // Catch: java.lang.Throwable -> La5
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La5
            r2.<init>()     // Catch: java.lang.Throwable -> La5
            java.lang.String r3 = "C-"
            r2.append(r3)     // Catch: java.lang.Throwable -> La5
            java.lang.String r3 = com.igexin.push.core.d.u     // Catch: java.lang.Throwable -> La5
            r2.append(r3)     // Catch: java.lang.Throwable -> La5
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> La5
            r15.a(r2, r1)     // Catch: java.lang.Throwable -> La5
            if (r14 == 0) goto Lc0
            java.lang.String r15 = "4T5@S_"
            boolean r14 = r14.startsWith(r15)     // Catch: java.lang.Throwable -> La5
            if (r14 == 0) goto Lc0
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La5
            r14.<init>()     // Catch: java.lang.Throwable -> La5
            java.lang.String r15 = "PushController sending lbs report message : "
            r14.append(r15)     // Catch: java.lang.Throwable -> La5
            r14.append(r0)     // Catch: java.lang.Throwable -> La5
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> La5
            java.lang.Object[] r15 = new java.lang.Object[r10]     // Catch: java.lang.Throwable -> La5
            com.igexin.b.a.c.b.a(r14, r15)     // Catch: java.lang.Throwable -> La5
            goto Lc0
        La5:
            r14 = move-exception
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            java.lang.String r0 = "PushController|"
            r15.append(r0)
            java.lang.String r14 = r14.toString()
            r15.append(r14)
            java.lang.String r14 = r15.toString()
            java.lang.Object[] r15 = new java.lang.Object[r10]
            com.igexin.b.a.c.b.a(r14, r15)
        Lc0:
            return
    }

    public void b(int r1, java.lang.String r2) {
            r0 = this;
            com.igexin.push.config.j.e = r1
            com.igexin.push.config.a r1 = com.igexin.push.config.a.a()
            r1.d()
            return
    }

    public void b(java.lang.String r7, java.lang.String r8) {
            r6 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = com.igexin.push.core.d.O
            long r2 = r0 - r2
            r4 = 1000(0x3e8, double:4.94E-321)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r3 = 0
            if (r2 <= 0) goto L77
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat
            java.util.Locale r4 = java.util.Locale.getDefault()
            java.lang.String r5 = "yyyy-MM-dd"
            r2.<init>(r5, r4)
            java.util.Date r4 = new java.util.Date
            r4.<init>(r0)
            java.lang.String r2 = r2.format(r4)
            java.lang.String r4 = com.igexin.push.core.d.N
            boolean r4 = r2.equals(r4)
            if (r4 != 0) goto L39
            com.igexin.push.core.b.i r4 = com.igexin.push.core.b.i.a()
            r4.f(r2)
            com.igexin.push.core.b.i r2 = com.igexin.push.core.b.i.a()
            r2.a(r3)
        L39:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "-> CoreRuntimeInfo.opAliasTimes:"
            r2.append(r4)
            int r4 = com.igexin.push.core.d.P
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.Object[] r4 = new java.lang.Object[r3]
            com.igexin.b.a.c.b.a(r2, r4)
            int r2 = com.igexin.push.core.d.P
            r4 = 100
            if (r2 >= r4) goto L6f
            java.lang.Object[] r2 = new java.lang.Object[r3]
            java.lang.String r4 = "start bindAlias ###"
            com.igexin.b.a.c.b.a(r4, r2)
            com.igexin.push.core.d.O = r0
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            int r1 = com.igexin.push.core.d.P
            r2 = 1
            int r1 = r1 + r2
            r0.a(r1)
            r6.a(r7, r8, r3, r2)
            goto L7e
        L6f:
            java.lang.Object[] r7 = new java.lang.Object[r3]
            java.lang.String r8 = "PushController|bindAlias times exceed"
            com.igexin.b.a.c.b.a(r8, r7)
            goto L7e
        L77:
            java.lang.Object[] r7 = new java.lang.Object[r3]
            java.lang.String r8 = "PushController|bindAlias frequently called"
            com.igexin.b.a.c.b.a(r8, r7)
        L7e:
            return
    }
}
