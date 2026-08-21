package com.igexin.push.extension.distribution.basic.a;

public class h implements com.igexin.push.core.a.a.a {
    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.igexin.push.core.a a(com.igexin.push.core.bean.PushTaskBean r6, com.igexin.push.core.bean.BaseAction r7) {
            r5 = this;
            com.igexin.push.extension.distribution.basic.b.d r7 = (com.igexin.push.extension.distribution.basic.b.d) r7
            r0 = 0
            java.lang.String r1 = r7.a()     // Catch: java.lang.Throwable -> L41
            android.content.Intent r1 = com.igexin.push.util.b.a(r1, r0)     // Catch: java.lang.Throwable -> L41
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> L41
            r1.setPackage(r2)     // Catch: java.lang.Throwable -> L41
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r2)     // Catch: java.lang.Throwable -> L41
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L41
            boolean r1 = com.igexin.push.extension.distribution.basic.g.b.a(r1, r2)     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L24
            com.igexin.push.core.a r6 = com.igexin.push.core.a.a     // Catch: java.lang.Throwable -> L41
            return r6
        L24:
            java.lang.String r1 = "EXT-StartMyActivity|execute failed, activity not exist"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L41
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> L41
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = r6.getId()     // Catch: java.lang.Throwable -> L41
            java.lang.String r3 = r6.getMessageId()     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = r7.b()     // Catch: java.lang.Throwable -> L41
            r1.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L41
            com.igexin.push.core.a r6 = com.igexin.push.core.a.c     // Catch: java.lang.Throwable -> L41
            return r6
        L41:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "EXT-StartMyActivity|execute exception = "
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            java.lang.String r1 = r6.getId()
            java.lang.String r6 = r6.getMessageId()
            java.lang.String r7 = r7.b()
            r0.a(r1, r6, r7)
            com.igexin.push.core.a r6 = com.igexin.push.core.a.c
            return r6
    }

    @Override
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r7) {
            r6 = this;
            java.lang.String r0 = "do_failed"
            java.lang.String r1 = "uri"
            java.lang.String r2 = "actionid"
            java.lang.String r3 = "do"
            boolean r4 = r7.has(r3)     // Catch: java.lang.Exception -> L55
            if (r4 == 0) goto L55
            boolean r4 = r7.has(r2)     // Catch: java.lang.Exception -> L55
            if (r4 == 0) goto L55
            java.lang.String r4 = "type"
            boolean r4 = r7.has(r4)     // Catch: java.lang.Exception -> L55
            if (r4 == 0) goto L55
            boolean r4 = r7.has(r1)     // Catch: java.lang.Exception -> L55
            if (r4 == 0) goto L55
            boolean r4 = r7.has(r0)     // Catch: java.lang.Exception -> L55
            if (r4 == 0) goto L55
            java.lang.String r1 = r7.getString(r1)     // Catch: java.lang.Exception -> L55
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L55
            if (r4 != 0) goto L55
            com.igexin.push.extension.distribution.basic.b.d r4 = new com.igexin.push.extension.distribution.basic.b.d     // Catch: java.lang.Exception -> L55
            r4.<init>()     // Catch: java.lang.Exception -> L55
            java.lang.String r5 = "startmyactivity"
            r4.setType(r5)     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = r7.getString(r2)     // Catch: java.lang.Exception -> L55
            r4.setActionId(r2)     // Catch: java.lang.Exception -> L55
            java.lang.String r2 = r7.getString(r3)     // Catch: java.lang.Exception -> L55
            r4.setDoActionId(r2)     // Catch: java.lang.Exception -> L55
            r4.a(r1)     // Catch: java.lang.Exception -> L55
            java.lang.String r7 = r7.getString(r0)     // Catch: java.lang.Exception -> L55
            r4.b(r7)     // Catch: java.lang.Exception -> L55
            return r4
        L55:
            r7 = 0
            return r7
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r6, com.igexin.push.core.bean.BaseAction r7) {
            r5 = this;
            com.igexin.push.extension.distribution.basic.b.d r7 = (com.igexin.push.extension.distribution.basic.b.d) r7
            r0 = 0
            java.lang.String r1 = r7.a()     // Catch: java.lang.Throwable -> L52
            android.content.Intent r1 = com.igexin.push.util.b.a(r1, r0)     // Catch: java.lang.Throwable -> L52
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> L52
            r1.setPackage(r2)     // Catch: java.lang.Throwable -> L52
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r2)     // Catch: java.lang.Throwable -> L52
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L52
            boolean r2 = com.igexin.push.extension.distribution.basic.g.b.a(r1, r2)     // Catch: java.lang.Throwable -> L52
            if (r2 == 0) goto L3a
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L52
            r2.startActivity(r1)     // Catch: java.lang.Throwable -> L52
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = r6.getTaskId()     // Catch: java.lang.Throwable -> L52
            java.lang.String r3 = r6.getMessageId()     // Catch: java.lang.Throwable -> L52
            java.lang.String r4 = r7.getDoActionId()     // Catch: java.lang.Throwable -> L52
        L36:
            r1.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L52
            goto L80
        L3a:
            java.lang.String r1 = "EXT-StartMyActivity|execute failed, activity not exist"
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L52
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> L52
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> L52
            java.lang.String r2 = r6.getId()     // Catch: java.lang.Throwable -> L52
            java.lang.String r3 = r6.getMessageId()     // Catch: java.lang.Throwable -> L52
            java.lang.String r4 = r7.b()     // Catch: java.lang.Throwable -> L52
            goto L36
        L52:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "EXT-StartMyActivity|execute exception = "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            java.lang.String r1 = r6.getId()
            java.lang.String r6 = r6.getMessageId()
            java.lang.String r7 = r7.b()
            r0.a(r1, r6, r7)
        L80:
            r6 = 1
            return r6
    }
}
