package com.igexin.push.core.a.a;

public class b implements com.igexin.push.core.a.a.a {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private boolean a(java.lang.String r3) {
            r2 = this;
            r0 = 0
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> Le
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Le
            android.content.pm.PackageInfo r3 = r1.getPackageInfo(r3, r0)     // Catch: java.lang.Exception -> Le
            if (r3 == 0) goto Le
            r0 = 1
        Le:
            return r0
    }

    @Override
    public com.igexin.push.core.a a(com.igexin.push.core.bean.PushTaskBean r1, com.igexin.push.core.bean.BaseAction r2) {
            r0 = this;
            com.igexin.push.core.a r1 = com.igexin.push.core.a.a
            return r1
    }

    @Override
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r7) {
            r6 = this;
            java.lang.String r0 = "android"
            java.lang.String r1 = "appstartupid"
            java.lang.String r2 = "actionid"
            java.lang.String r3 = "do_installed"
            java.lang.String r4 = "type"
            boolean r4 = r7.has(r4)     // Catch: java.lang.Exception -> L67
            if (r4 == 0) goto L67
            boolean r4 = r7.has(r2)     // Catch: java.lang.Exception -> L67
            if (r4 == 0) goto L67
            com.igexin.push.core.bean.b r4 = new com.igexin.push.core.bean.b     // Catch: java.lang.Exception -> L67
            r4.<init>()     // Catch: java.lang.Exception -> L67
            java.lang.String r5 = "checkapp"
            r4.setType(r5)     // Catch: java.lang.Exception -> L67
            java.lang.String r2 = r7.getString(r2)     // Catch: java.lang.Exception -> L67
            r4.setActionId(r2)     // Catch: java.lang.Exception -> L67
            boolean r2 = r7.has(r1)     // Catch: java.lang.Exception -> L67
            if (r2 == 0) goto L67
            org.json.JSONObject r1 = r7.getJSONObject(r1)     // Catch: java.lang.Exception -> L67
            boolean r2 = r1.has(r0)     // Catch: java.lang.Exception -> L67
            if (r2 == 0) goto L67
            java.lang.String r0 = r1.getString(r0)     // Catch: java.lang.Exception -> L67
            r4.a(r0)     // Catch: java.lang.Exception -> L67
            boolean r0 = r7.has(r3)     // Catch: java.lang.Exception -> L67
            java.lang.String r1 = "do_uninstalled"
            if (r0 != 0) goto L4c
            boolean r0 = r7.has(r1)     // Catch: java.lang.Exception -> L67
            if (r0 == 0) goto L67
        L4c:
            boolean r0 = r7.has(r3)     // Catch: java.lang.Exception -> L67
            if (r0 == 0) goto L59
            java.lang.String r0 = r7.getString(r3)     // Catch: java.lang.Exception -> L67
            r4.b(r0)     // Catch: java.lang.Exception -> L67
        L59:
            boolean r0 = r7.has(r1)     // Catch: java.lang.Exception -> L67
            if (r0 == 0) goto L66
            java.lang.String r7 = r7.getString(r1)     // Catch: java.lang.Exception -> L67
            r4.c(r7)     // Catch: java.lang.Exception -> L67
        L66:
            return r4
        L67:
            r7 = 0
            return r7
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r4, com.igexin.push.core.bean.BaseAction r5) {
            r3 = this;
            com.igexin.push.core.bean.b r5 = (com.igexin.push.core.bean.b) r5
            java.lang.String r0 = r4.getTaskId()
            java.lang.String r4 = r4.getMessageId()
            java.lang.String r1 = r5.a()
            boolean r1 = r3.a(r1)
            java.lang.String r2 = ""
            if (r1 == 0) goto L2f
            java.lang.String r1 = r5.b()
            if (r1 == 0) goto L4a
            java.lang.String r1 = r5.b()
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L4a
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()
            java.lang.String r5 = r5.b()
            goto L47
        L2f:
            java.lang.String r1 = r5.c()
            if (r1 == 0) goto L4a
            java.lang.String r1 = r5.c()
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L4a
            com.igexin.push.core.a.e r1 = com.igexin.push.core.a.e.a()
            java.lang.String r5 = r5.c()
        L47:
            r1.a(r0, r4, r5)
        L4a:
            r4 = 1
            return r4
    }
}
