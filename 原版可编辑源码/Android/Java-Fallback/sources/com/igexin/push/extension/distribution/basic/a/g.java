package com.igexin.push.extension.distribution.basic.a;

public class g implements com.igexin.push.core.a.a.a {
    private static final java.lang.String a = null;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "EXT-"
            r0.append(r1)
            java.lang.Class<com.igexin.push.extension.distribution.basic.a.g> r1 = com.igexin.push.extension.distribution.basic.a.g.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.extension.distribution.basic.a.g.a = r0
            return
    }

    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.igexin.push.core.a a(com.igexin.push.core.bean.PushTaskBean r1, com.igexin.push.core.bean.BaseAction r2) {
            r0 = this;
            com.igexin.push.core.a r1 = com.igexin.push.core.a.a
            return r1
    }

    @Override
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r11) {
            r10 = this;
            java.lang.String r0 = "0"
            java.lang.String r1 = "t"
            java.lang.String r2 = "intent"
            java.lang.String r3 = "actionid"
            java.lang.String r4 = "do_failed"
            java.lang.String r5 = "do"
            r6 = 0
            boolean r7 = r11.has(r5)     // Catch: java.lang.Exception -> L88
            if (r7 == 0) goto L88
            boolean r7 = r11.has(r3)     // Catch: java.lang.Exception -> L88
            if (r7 == 0) goto L88
            java.lang.String r7 = "type"
            boolean r7 = r11.has(r7)     // Catch: java.lang.Exception -> L88
            if (r7 == 0) goto L88
            boolean r7 = r11.has(r2)     // Catch: java.lang.Exception -> L88
            if (r7 == 0) goto L88
            boolean r7 = r11.has(r4)     // Catch: java.lang.Exception -> L88
            if (r7 == 0) goto L88
            boolean r7 = r11.has(r1)     // Catch: java.lang.Exception -> L88
            if (r7 == 0) goto L88
            java.lang.String r2 = r11.getString(r2)     // Catch: java.lang.Exception -> L88
            java.lang.String r1 = r11.getString(r1)     // Catch: java.lang.Exception -> L88
            java.lang.String r7 = r11.getString(r5)     // Catch: java.lang.Exception -> L88
            java.lang.String r8 = r11.getString(r4)     // Catch: java.lang.Exception -> L88
            boolean r9 = r1.equals(r0)     // Catch: java.lang.Exception -> L88
            if (r9 != 0) goto L52
            java.lang.String r9 = "1"
            boolean r9 = r1.equals(r9)     // Catch: java.lang.Exception -> L88
            if (r9 != 0) goto L52
            return r6
        L52:
            java.lang.String r9 = ""
            boolean r8 = r8.equals(r9)     // Catch: java.lang.Exception -> L88
            if (r8 == 0) goto L5b
            return r6
        L5b:
            boolean r0 = r7.equals(r0)     // Catch: java.lang.Exception -> L88
            if (r0 == 0) goto L62
            return r6
        L62:
            com.igexin.push.extension.distribution.basic.b.c r0 = new com.igexin.push.extension.distribution.basic.b.c     // Catch: java.lang.Exception -> L88
            r0.<init>()     // Catch: java.lang.Exception -> L88
            java.lang.String r7 = "startintent"
            r0.setType(r7)     // Catch: java.lang.Exception -> L88
            java.lang.String r3 = r11.getString(r3)     // Catch: java.lang.Exception -> L88
            r0.setActionId(r3)     // Catch: java.lang.Exception -> L88
            java.lang.String r3 = r11.getString(r5)     // Catch: java.lang.Exception -> L88
            r0.setDoActionId(r3)     // Catch: java.lang.Exception -> L88
            r0.b(r2)     // Catch: java.lang.Exception -> L88
            r0.a(r1)     // Catch: java.lang.Exception -> L88
            java.lang.String r11 = r11.getString(r4)     // Catch: java.lang.Exception -> L88
            r0.c(r11)     // Catch: java.lang.Exception -> L88
            return r0
        L88:
            return r6
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r7, com.igexin.push.core.bean.BaseAction r8) {
            r6 = this;
            java.lang.String r0 = " t="
            com.igexin.push.extension.distribution.basic.b.c r8 = (com.igexin.push.extension.distribution.basic.b.c) r8
            java.lang.String r1 = r8.b()     // Catch: java.lang.Exception -> Ld9
            r2 = 0
            android.content.Intent r1 = com.igexin.push.util.b.a(r1, r2)     // Catch: java.lang.Exception -> Ld9
            java.lang.String r3 = r8.a()     // Catch: java.lang.Exception -> L9d
            java.lang.String r4 = "0"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L9d
            if (r3 == 0) goto L38
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r1.setFlags(r3)     // Catch: java.lang.Exception -> L9d
            android.content.Context r3 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L9d
            r3.startActivity(r1)     // Catch: java.lang.Exception -> L9d
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> L9d
            java.lang.String r3 = r7.getTaskId()     // Catch: java.lang.Exception -> L9d
            java.lang.String r4 = r7.getMessageId()     // Catch: java.lang.Exception -> L9d
        L2f:
            java.lang.String r5 = r8.getDoActionId()     // Catch: java.lang.Exception -> L9d
        L33:
            r1.a(r3, r4, r5)     // Catch: java.lang.Exception -> L9d
            goto Ld9
        L38:
            java.lang.String r3 = r8.a()     // Catch: java.lang.Exception -> L9d
            java.lang.String r4 = "1"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L9d
            if (r3 == 0) goto Ld9
            android.content.Context r3 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L9d
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L9d
            java.util.List r3 = r3.queryIntentServices(r1, r2)     // Catch: java.lang.Exception -> L9d
            if (r3 == 0) goto L68
            int r3 = r3.size()     // Catch: java.lang.Exception -> L9d
            if (r3 <= 0) goto L68
            android.content.Context r3 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L9d
            r3.startService(r1)     // Catch: java.lang.Exception -> L9d
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> L9d
            java.lang.String r3 = r7.getTaskId()     // Catch: java.lang.Exception -> L9d
            java.lang.String r4 = r7.getMessageId()     // Catch: java.lang.Exception -> L9d
            goto L2f
        L68:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9d
            r1.<init>()     // Catch: java.lang.Exception -> L9d
            java.lang.String r3 = "StartIntentAction err intent="
            r1.append(r3)     // Catch: java.lang.Exception -> L9d
            java.lang.String r3 = r8.b()     // Catch: java.lang.Exception -> L9d
            r1.append(r3)     // Catch: java.lang.Exception -> L9d
            r1.append(r0)     // Catch: java.lang.Exception -> L9d
            java.lang.String r3 = r8.a()     // Catch: java.lang.Exception -> L9d
            r1.append(r3)     // Catch: java.lang.Exception -> L9d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L9d
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L9d
            com.igexin.b.a.c.b.a(r1, r3)     // Catch: java.lang.Exception -> L9d
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> L9d
            java.lang.String r3 = r7.getTaskId()     // Catch: java.lang.Exception -> L9d
            java.lang.String r4 = r7.getMessageId()     // Catch: java.lang.Exception -> L9d
            java.lang.String r5 = r8.c()     // Catch: java.lang.Exception -> L9d
            goto L33
        L9d:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld9
            r1.<init>()     // Catch: java.lang.Exception -> Ld9
            java.lang.String r3 = com.igexin.push.extension.distribution.basic.a.g.a     // Catch: java.lang.Exception -> Ld9
            r1.append(r3)     // Catch: java.lang.Exception -> Ld9
            java.lang.String r3 = "|executeAction err intent="
            r1.append(r3)     // Catch: java.lang.Exception -> Ld9
            java.lang.String r3 = r8.b()     // Catch: java.lang.Exception -> Ld9
            r1.append(r3)     // Catch: java.lang.Exception -> Ld9
            r1.append(r0)     // Catch: java.lang.Exception -> Ld9
            java.lang.String r0 = r8.a()     // Catch: java.lang.Exception -> Ld9
            r1.append(r0)     // Catch: java.lang.Exception -> Ld9
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> Ld9
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> Ld9
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Exception -> Ld9
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> Ld9
            java.lang.String r1 = r7.getTaskId()     // Catch: java.lang.Exception -> Ld9
            java.lang.String r7 = r7.getMessageId()     // Catch: java.lang.Exception -> Ld9
            java.lang.String r8 = r8.c()     // Catch: java.lang.Exception -> Ld9
            r0.a(r1, r7, r8)     // Catch: java.lang.Exception -> Ld9
        Ld9:
            r7 = 1
            return r7
    }
}
