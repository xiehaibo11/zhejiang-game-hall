package com.igexin.push.core.a.a;

public class k implements com.igexin.push.core.a.a.a {
    private static final java.lang.String a = null;

    static {
            java.lang.String r0 = com.igexin.push.config.i.a
            com.igexin.push.core.a.a.k.a = r0
            return
    }

    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(java.lang.String... r5) {
            r4 = this;
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L34
            r1.<init>()     // Catch: java.lang.Throwable -> L34
            java.lang.String r2 = com.igexin.push.core.a.a.k.a     // Catch: java.lang.Throwable -> L34
            r1.append(r2)     // Catch: java.lang.Throwable -> L34
            java.lang.String r2 = "|del condition taskid = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L34
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Throwable -> L34
            r1.append(r2)     // Catch: java.lang.Throwable -> L34
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L34
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L34
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> L34
            com.igexin.push.core.c r1 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> L34
            com.igexin.push.b.b r1 = r1.k()     // Catch: java.lang.Throwable -> L34
            java.lang.String r2 = "message"
            java.lang.String r3 = "taskid"
            java.lang.String[] r3 = new java.lang.String[]{r3}     // Catch: java.lang.Throwable -> L34
            r1.a(r2, r3, r5)     // Catch: java.lang.Throwable -> L34
            goto L54
        L34:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.core.a.a.k.a
            r1.append(r2)
            java.lang.String r2 = "|del condition"
            r1.append(r2)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r5, r0)
        L54:
            return
    }

    @Override
    public com.igexin.push.core.a a(com.igexin.push.core.bean.PushTaskBean r1, com.igexin.push.core.bean.BaseAction r2) {
            r0 = this;
            com.igexin.push.core.a r1 = com.igexin.push.core.a.a
            return r1
    }

    @Override
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r6) {
            r5 = this;
            java.lang.String r0 = "taskid"
            java.lang.String r1 = "actionid"
            java.lang.String r2 = "do"
            boolean r3 = r6.has(r2)     // Catch: java.lang.Exception -> L41
            if (r3 == 0) goto L41
            boolean r3 = r6.has(r1)     // Catch: java.lang.Exception -> L41
            if (r3 == 0) goto L41
            boolean r3 = r6.has(r0)     // Catch: java.lang.Exception -> L41
            if (r3 == 0) goto L41
            com.igexin.push.core.bean.l r3 = new com.igexin.push.core.bean.l     // Catch: java.lang.Exception -> L41
            r3.<init>()     // Catch: java.lang.Exception -> L41
            java.lang.String r4 = "terminatetask"
            r3.setType(r4)     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = r6.getString(r1)     // Catch: java.lang.Exception -> L41
            r3.setActionId(r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r1 = r6.getString(r2)     // Catch: java.lang.Exception -> L41
            r3.setDoActionId(r1)     // Catch: java.lang.Exception -> L41
            java.lang.String r0 = r6.getString(r0)     // Catch: java.lang.Exception -> L41
            r3.a(r0)     // Catch: java.lang.Exception -> L41
            java.lang.String r0 = "force"
            boolean r6 = r6.optBoolean(r0)     // Catch: java.lang.Exception -> L41
            r3.a(r6)     // Catch: java.lang.Exception -> L41
            return r3
        L41:
            r6 = 0
            return r6
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r14, com.igexin.push.core.bean.BaseAction r15) {
            r13 = this;
            r0 = r15
            com.igexin.push.core.bean.l r0 = (com.igexin.push.core.bean.l) r0
            java.lang.String r1 = r0.a()
            android.content.Context r2 = com.igexin.push.core.d.g
            java.lang.String r3 = "notification"
            java.lang.Object r2 = r2.getSystemService(r3)
            android.app.NotificationManager r2 = (android.app.NotificationManager) r2
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            r4 = 1
            r5 = 0
            if (r3 != 0) goto L17a
            r3 = 0
            com.igexin.push.core.c r6 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> L14f
            com.igexin.push.b.b r7 = r6.k()     // Catch: java.lang.Throwable -> L14f
            java.lang.String r8 = "message"
            java.lang.String r6 = "taskid"
            java.lang.String[] r9 = new java.lang.String[]{r6}     // Catch: java.lang.Throwable -> L14f
            java.lang.String[] r10 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L14f
            r10[r5] = r1     // Catch: java.lang.Throwable -> L14f
            r11 = 0
            java.lang.String r12 = "id ASC"
            android.database.Cursor r3 = r7.a(r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L14f
            if (r3 == 0) goto L12d
            boolean r6 = r3.moveToFirst()     // Catch: java.lang.Throwable -> L14f
            if (r6 == 0) goto L12d
            java.lang.String r6 = "msgextra"
            int r6 = r3.getColumnIndex(r6)     // Catch: java.lang.Throwable -> L14f
            byte[] r6 = r3.getBlob(r6)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r7 = "messageid"
            int r7 = r3.getColumnIndex(r7)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r7 = r3.getString(r7)     // Catch: java.lang.Throwable -> L14f
            com.igexin.push.core.a.e r8 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> L14f
            java.lang.String r7 = r8.a(r1, r7)     // Catch: java.lang.Throwable -> L14f
            com.igexin.push.core.b.d r8 = new com.igexin.push.core.b.d     // Catch: java.lang.Throwable -> L14f
            android.content.Context r9 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L14f
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L14f
            boolean r8 = r8.a(r1)     // Catch: java.lang.Throwable -> L14f
            if (r8 != 0) goto L83
            if (r6 == 0) goto L69
            goto L83
        L69:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14f
            r6.<init>()     // Catch: java.lang.Throwable -> L14f
            java.lang.String r8 = com.igexin.push.core.a.a.k.a     // Catch: java.lang.Throwable -> L14f
            r6.append(r8)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r8 = "| is not transmit"
            r6.append(r8)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L14f
            java.lang.Object[] r8 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L14f
            com.igexin.b.a.c.b.a(r6, r8)     // Catch: java.lang.Throwable -> L14f
            r6 = r5
            goto La3
        L83:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14f
            r6.<init>()     // Catch: java.lang.Throwable -> L14f
            java.lang.String r8 = com.igexin.push.core.a.a.k.a     // Catch: java.lang.Throwable -> L14f
            r6.append(r8)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r8 = "| revocation  transmit message "
            r6.append(r8)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L14f
            java.lang.Object[] r8 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L14f
            com.igexin.b.a.c.b.a(r6, r8)     // Catch: java.lang.Throwable -> L14f
            com.igexin.push.core.r r6 = com.igexin.push.core.r.a()     // Catch: java.lang.Throwable -> L14f
            r6.b(r1)     // Catch: java.lang.Throwable -> L14f
            r6 = r4
        La3:
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L12b
            if (r8 != 0) goto L10b
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r8 = com.igexin.push.core.d.Z     // Catch: java.lang.Throwable -> L12b
            java.lang.Object r7 = r8.get(r7)     // Catch: java.lang.Throwable -> L12b
            com.igexin.push.core.bean.PushTaskBean r7 = (com.igexin.push.core.bean.PushTaskBean) r7     // Catch: java.lang.Throwable -> L12b
            if (r7 == 0) goto Lb6
            r7.setStop(r4)     // Catch: java.lang.Throwable -> L12b
        Lb6:
            java.util.Map<java.lang.String, java.lang.Integer> r7 = com.igexin.push.core.d.aa     // Catch: java.lang.Throwable -> L12b
            boolean r7 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L12b
            if (r7 == 0) goto Lf2
            java.util.Map<java.lang.String, java.lang.Integer> r7 = com.igexin.push.core.d.aa     // Catch: java.lang.Throwable -> L12b
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L12b
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L12b
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> L12b
            r2.cancel(r7)     // Catch: java.lang.Throwable -> L12b
            java.util.Map<java.lang.String, java.lang.Integer> r6 = com.igexin.push.core.d.aa     // Catch: java.lang.Throwable -> Lef
            r6.remove(r1)     // Catch: java.lang.Throwable -> Lef
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lef
            r6.<init>()     // Catch: java.lang.Throwable -> Lef
            java.lang.String r8 = com.igexin.push.core.a.a.k.a     // Catch: java.lang.Throwable -> Lef
            r6.append(r8)     // Catch: java.lang.Throwable -> Lef
            java.lang.String r8 = "| cancle notify notifID = "
            r6.append(r8)     // Catch: java.lang.Throwable -> Lef
            r6.append(r7)     // Catch: java.lang.Throwable -> Lef
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Lef
            java.lang.Object[] r7 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Lef
            com.igexin.b.a.c.b.a(r6, r7)     // Catch: java.lang.Throwable -> Lef
            r6 = r4
            goto L123
        Lef:
            r1 = move-exception
            r6 = r4
            goto L151
        Lf2:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12b
            r7.<init>()     // Catch: java.lang.Throwable -> L12b
            java.lang.String r8 = com.igexin.push.core.a.a.k.a     // Catch: java.lang.Throwable -> L12b
            r7.append(r8)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r8 = "| is not notify or notify has handle"
            r7.append(r8)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L12b
            java.lang.Object[] r8 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L12b
            com.igexin.b.a.c.b.a(r7, r8)     // Catch: java.lang.Throwable -> L12b
            goto L123
        L10b:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12b
            r7.<init>()     // Catch: java.lang.Throwable -> L12b
            java.lang.String r8 = com.igexin.push.core.a.a.k.a     // Catch: java.lang.Throwable -> L12b
            r7.append(r8)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r8 = "| cacheid not found "
            r7.append(r8)     // Catch: java.lang.Throwable -> L12b
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L12b
            java.lang.Object[] r8 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L12b
            com.igexin.b.a.c.b.a(r7, r8)     // Catch: java.lang.Throwable -> L12b
        L123:
            java.lang.String[] r7 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L12b
            r7[r5] = r1     // Catch: java.lang.Throwable -> L12b
            r13.a(r7)     // Catch: java.lang.Throwable -> L12b
            goto L149
        L12b:
            r1 = move-exception
            goto L151
        L12d:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14f
            r6.<init>()     // Catch: java.lang.Throwable -> L14f
            java.lang.String r7 = com.igexin.push.core.a.a.k.a     // Catch: java.lang.Throwable -> L14f
            r6.append(r7)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r7 = "| terminateTaskId not found in table   "
            r6.append(r7)     // Catch: java.lang.Throwable -> L14f
            r6.append(r1)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> L14f
            java.lang.Object[] r6 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L14f
            com.igexin.b.a.c.b.a(r1, r6)     // Catch: java.lang.Throwable -> L14f
            r6 = r5
        L149:
            if (r3 == 0) goto L17b
        L14b:
            r3.close()
            goto L17b
        L14f:
            r1 = move-exception
            r6 = r5
        L151:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L173
            r7.<init>()     // Catch: java.lang.Throwable -> L173
            java.lang.String r8 = com.igexin.push.core.a.a.k.a     // Catch: java.lang.Throwable -> L173
            r7.append(r8)     // Catch: java.lang.Throwable -> L173
            java.lang.String r8 = "| TerminateTaskAction error "
            r7.append(r8)     // Catch: java.lang.Throwable -> L173
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L173
            r7.append(r1)     // Catch: java.lang.Throwable -> L173
            java.lang.String r1 = r7.toString()     // Catch: java.lang.Throwable -> L173
            java.lang.Object[] r7 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L173
            com.igexin.b.a.c.b.a(r1, r7)     // Catch: java.lang.Throwable -> L173
            if (r3 == 0) goto L17b
            goto L14b
        L173:
            r14 = move-exception
            if (r3 == 0) goto L179
            r3.close()
        L179:
            throw r14
        L17a:
            r6 = r5
        L17b:
            if (r6 != 0) goto L1a3
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L1a3
            if (r0 == 0) goto L1a3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1a3
            r0.<init>()     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r1 = com.igexin.push.core.a.a.k.a     // Catch: java.lang.Throwable -> L1a3
            r0.append(r1)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r1 = " | cancelAll()"
            r0.append(r1)     // Catch: java.lang.Throwable -> L1a3
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1a3
            java.lang.Object[] r1 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L1a3
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L1a3
            r2.cancelAll()     // Catch: java.lang.Throwable -> L1a3
            android.content.Context r0 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L1a3
            com.igexin.assist.sdk.a.j(r0)     // Catch: java.lang.Throwable -> L1a3
        L1a3:
            java.lang.String r0 = r15.getDoActionId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1c0
            com.igexin.push.core.w r0 = com.igexin.push.core.w.a()
            java.lang.String r1 = r14.getTaskId()
            java.lang.String r14 = r14.getMessageId()
            java.lang.String r15 = r15.getDoActionId()
            r0.b(r1, r14, r15)
        L1c0:
            return r4
    }
}
