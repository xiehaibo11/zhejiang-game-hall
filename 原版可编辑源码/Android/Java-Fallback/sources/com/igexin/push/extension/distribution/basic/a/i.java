package com.igexin.push.extension.distribution.basic.a;

public class i implements com.igexin.push.core.a.a.a {
    private static final java.lang.String a = null;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "EXT-"
            r0.append(r1)
            java.lang.Class<com.igexin.push.extension.distribution.basic.a.i> r1 = com.igexin.push.extension.distribution.basic.a.i.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.extension.distribution.basic.a.i.a = r0
            return
    }

    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(java.lang.String r6) {
            r5 = this;
            com.igexin.push.extension.distribution.basic.e.b r0 = com.igexin.push.extension.distribution.basic.c.e.l
            boolean r0 = r0.a()
            if (r0 != 0) goto L9
            return
        L9:
            r0 = 0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d
            r1.<init>()     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = com.igexin.push.extension.distribution.basic.a.i.a     // Catch: java.lang.Throwable -> L3d
            r1.append(r2)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = "|del condition taskid = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L3d
            r1.append(r6)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L3d
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L3d
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> L3d
            com.igexin.push.extension.distribution.basic.e.b r1 = com.igexin.push.extension.distribution.basic.c.e.l     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = "message"
            java.lang.String r3 = "taskid"
            java.lang.String[] r3 = new java.lang.String[]{r3}     // Catch: java.lang.Throwable -> L3d
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> L3d
            r4[r0] = r6     // Catch: java.lang.Throwable -> L3d
            r1.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L3d
            com.igexin.push.extension.distribution.basic.e.b r6 = com.igexin.push.extension.distribution.basic.c.e.l     // Catch: java.lang.Throwable -> L3d
            r6.close()     // Catch: java.lang.Throwable -> L3d
            goto L5d
        L3d:
            r6 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.extension.distribution.basic.a.i.a
            r1.append(r2)
            java.lang.String r2 = "|del condition"
            r1.append(r2)
            java.lang.String r6 = r6.toString()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r6, r0)
        L5d:
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
            com.igexin.push.extension.distribution.basic.b.e r3 = new com.igexin.push.extension.distribution.basic.b.e     // Catch: java.lang.Exception -> L41
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
    public boolean b(com.igexin.push.core.bean.PushTaskBean r16, com.igexin.push.core.bean.BaseAction r17) {
            r15 = this;
            r0 = r17
            com.igexin.push.extension.distribution.basic.b.e r0 = (com.igexin.push.extension.distribution.basic.b.e) r0
            java.lang.String r1 = r0.a()
            android.content.Context r2 = com.igexin.push.core.d.g
            java.lang.String r3 = "notification"
            java.lang.Object r2 = r2.getSystemService(r3)
            android.app.NotificationManager r2 = (android.app.NotificationManager) r2
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r5 = ""
            r6 = 1
            r7 = 0
            if (r4 != 0) goto Lf2
            r4 = 0
            com.igexin.push.core.c r8 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> Led
            com.igexin.push.b.b r9 = r8.k()     // Catch: java.lang.Throwable -> Led
            java.lang.String r10 = "message"
            java.lang.String r8 = "taskid"
            java.lang.String[] r11 = new java.lang.String[]{r8}     // Catch: java.lang.Throwable -> Led
            java.lang.String[] r12 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> Led
            r12[r7] = r1     // Catch: java.lang.Throwable -> Led
            r13 = 0
            java.lang.String r14 = "id ASC"
            android.database.Cursor r4 = r9.a(r10, r11, r12, r13, r14)     // Catch: java.lang.Throwable -> Led
            if (r4 == 0) goto Le5
            boolean r8 = r4.moveToFirst()     // Catch: java.lang.Throwable -> Led
            if (r8 == 0) goto L53
            java.lang.String r8 = "messageid"
            int r8 = r4.getColumnIndex(r8)     // Catch: java.lang.Throwable -> Led
            java.lang.String r8 = r4.getString(r8)     // Catch: java.lang.Throwable -> Led
            com.igexin.push.core.a.e r9 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> Led
            java.lang.String r8 = r9.a(r1, r8)     // Catch: java.lang.Throwable -> Led
            goto L54
        L53:
            r8 = r5
        L54:
            boolean r9 = r8.equals(r5)     // Catch: java.lang.Throwable -> Led
            if (r9 != 0) goto Le5
            java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> r9 = com.igexin.push.core.d.Z     // Catch: java.lang.Throwable -> Led
            java.lang.Object r8 = r9.get(r8)     // Catch: java.lang.Throwable -> Led
            com.igexin.push.core.bean.PushTaskBean r8 = (com.igexin.push.core.bean.PushTaskBean) r8     // Catch: java.lang.Throwable -> Led
            if (r8 == 0) goto Le5
            r8.setStop(r6)     // Catch: java.lang.Throwable -> Led
            r9 = r15
            r15.a(r1)     // Catch: java.lang.Throwable -> Lee
            int r10 = r8.getPerActionid()     // Catch: java.lang.Throwable -> Lee
            java.lang.String r10 = java.lang.String.valueOf(r10)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r11 = "0"
            boolean r11 = r10.equals(r11)     // Catch: java.lang.Throwable -> Lee
            if (r11 != 0) goto Lc1
            com.igexin.push.core.bean.BaseAction r8 = r8.getBaseAction(r10)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r8 = r8.getType()     // Catch: java.lang.Throwable -> Lee
            boolean r3 = r8.equals(r3)     // Catch: java.lang.Throwable -> Lee
            if (r3 == 0) goto Lc1
            java.util.Map<java.lang.String, java.lang.Integer> r3 = com.igexin.push.core.d.aa     // Catch: java.lang.Throwable -> Lee
            boolean r3 = r3.containsKey(r1)     // Catch: java.lang.Throwable -> Lee
            if (r3 == 0) goto Lc1
            java.util.Map<java.lang.String, java.lang.Integer> r3 = com.igexin.push.core.d.aa     // Catch: java.lang.Throwable -> Lee
            java.lang.Object r3 = r3.get(r1)     // Catch: java.lang.Throwable -> Lee
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> Lee
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> Lee
            r2.cancel(r3)     // Catch: java.lang.Throwable -> Lee
            java.util.Map<java.lang.String, java.lang.Integer> r3 = com.igexin.push.core.d.aa     // Catch: java.lang.Throwable -> Lbf
            r3.remove(r1)     // Catch: java.lang.Throwable -> Lbf
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbf
            r3.<init>()     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r8 = com.igexin.push.extension.distribution.basic.a.i.a     // Catch: java.lang.Throwable -> Lbf
            r3.append(r8)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r8 = "remove terminateTaskId from cache"
            r3.append(r8)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> Lbf
            java.lang.Object[] r8 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> Lbf
            com.igexin.b.a.c.b.a(r3, r8)     // Catch: java.lang.Throwable -> Lbf
            r3 = r6
            goto Lc2
        Lbf:
            r3 = r6
            goto Lef
        Lc1:
            r3 = r7
        Lc2:
            com.igexin.push.core.e.b r8 = com.igexin.push.core.e.b.a()     // Catch: java.lang.Throwable -> Lef
            r10 = 11111111(0xa98ac7, double:5.489618E-317)
            java.lang.Long r10 = java.lang.Long.valueOf(r10)     // Catch: java.lang.Throwable -> Lef
            com.igexin.push.core.e.a r8 = r8.a(r10)     // Catch: java.lang.Throwable -> Lef
            if (r8 == 0) goto Le7
            java.lang.String r10 = r8.b()     // Catch: java.lang.Throwable -> Lef
            boolean r1 = r10.equals(r1)     // Catch: java.lang.Throwable -> Lef
            if (r1 == 0) goto Le7
            com.igexin.push.core.e.b r1 = com.igexin.push.core.e.b.a()     // Catch: java.lang.Throwable -> Lef
            r1.b(r8)     // Catch: java.lang.Throwable -> Lef
            goto Le7
        Le5:
            r9 = r15
            r3 = r7
        Le7:
            if (r4 == 0) goto Lf4
        Le9:
            r4.close()
            goto Lf4
        Led:
            r9 = r15
        Lee:
            r3 = r7
        Lef:
            if (r4 == 0) goto Lf4
            goto Le9
        Lf2:
            r9 = r15
            r3 = r7
        Lf4:
            if (r3 != 0) goto L11c
            boolean r0 = r0.b()     // Catch: java.lang.Throwable -> L11c
            if (r0 == 0) goto L11c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11c
            r0.<init>()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r1 = com.igexin.push.extension.distribution.basic.a.i.a     // Catch: java.lang.Throwable -> L11c
            r0.append(r1)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r1 = " | cancelAll()"
            r0.append(r1)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L11c
            java.lang.Object[] r1 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L11c
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L11c
            r2.cancelAll()     // Catch: java.lang.Throwable -> L11c
            android.content.Context r0 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L11c
            com.igexin.push.extension.distribution.basic.g.a.c(r0)     // Catch: java.lang.Throwable -> L11c
        L11c:
            java.lang.String r0 = r17.getDoActionId()
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto L139
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            java.lang.String r1 = r16.getTaskId()
            java.lang.String r2 = r16.getMessageId()
            java.lang.String r3 = r17.getDoActionId()
            r0.a(r1, r2, r3)
        L139:
            return r6
    }
}
