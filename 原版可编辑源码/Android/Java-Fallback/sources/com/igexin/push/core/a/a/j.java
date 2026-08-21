package com.igexin.push.core.a.a;

public class j implements com.igexin.push.core.a.a.a {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.igexin.push.core.a.a.j> r0 = com.igexin.push.core.a.a.j.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.core.a.a.j.a = r0
            return
    }

    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(android.content.Context r5, java.lang.String r6) {
            java.lang.String r0 = "android.intent.category.LAUNCHER"
            java.lang.String r1 = "android.intent.action.MAIN"
            android.content.pm.PackageManager r2 = r5.getPackageManager()     // Catch: java.lang.Exception -> L4f
            r3 = 0
            android.content.pm.PackageInfo r6 = r2.getPackageInfo(r6, r3)     // Catch: java.lang.Exception -> L4f
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Exception -> L4f
            r4 = 0
            r2.<init>(r1, r4)     // Catch: java.lang.Exception -> L4f
            r2.addCategory(r0)     // Catch: java.lang.Exception -> L4f
            java.lang.String r6 = r6.packageName     // Catch: java.lang.Exception -> L4f
            r2.setPackage(r6)     // Catch: java.lang.Exception -> L4f
            android.content.pm.PackageManager r6 = r5.getPackageManager()     // Catch: java.lang.Exception -> L4f
            java.util.List r6 = r6.queryIntentActivities(r2, r3)     // Catch: java.lang.Exception -> L4f
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Exception -> L4f
            java.lang.Object r6 = r6.next()     // Catch: java.lang.Exception -> L4f
            android.content.pm.ResolveInfo r6 = (android.content.pm.ResolveInfo) r6     // Catch: java.lang.Exception -> L4f
            if (r6 == 0) goto L4f
            android.content.pm.ActivityInfo r2 = r6.activityInfo     // Catch: java.lang.Exception -> L4f
            java.lang.String r2 = r2.packageName     // Catch: java.lang.Exception -> L4f
            android.content.pm.ActivityInfo r6 = r6.activityInfo     // Catch: java.lang.Exception -> L4f
            java.lang.String r6 = r6.name     // Catch: java.lang.Exception -> L4f
            android.content.Intent r3 = new android.content.Intent     // Catch: java.lang.Exception -> L4f
            r3.<init>(r1)     // Catch: java.lang.Exception -> L4f
            r3.addCategory(r0)     // Catch: java.lang.Exception -> L4f
            r0 = 270532608(0x10200000, float:3.1554436E-29)
            r3.setFlags(r0)     // Catch: java.lang.Exception -> L4f
            android.content.ComponentName r0 = new android.content.ComponentName     // Catch: java.lang.Exception -> L4f
            r0.<init>(r2, r6)     // Catch: java.lang.Exception -> L4f
            r3.setComponent(r0)     // Catch: java.lang.Exception -> L4f
            r5.startActivity(r3)     // Catch: java.lang.Exception -> L4f
        L4f:
            return
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
            java.lang.String r0 = "noinstall_action"
            java.lang.String r1 = "appid"
            java.lang.String r2 = "is_autostart"
            java.lang.String r3 = "appstartupid"
            com.igexin.push.core.bean.i r4 = new com.igexin.push.core.bean.i     // Catch: org.json.JSONException -> L5f
            r4.<init>()     // Catch: org.json.JSONException -> L5f
            java.lang.String r5 = "startapp"
            r4.setType(r5)     // Catch: org.json.JSONException -> L5f
            java.lang.String r5 = "actionid"
            java.lang.String r5 = r7.getString(r5)     // Catch: org.json.JSONException -> L5f
            r4.setActionId(r5)     // Catch: org.json.JSONException -> L5f
            java.lang.String r5 = "do"
            java.lang.String r5 = r7.getString(r5)     // Catch: org.json.JSONException -> L5f
            r4.setDoActionId(r5)     // Catch: org.json.JSONException -> L5f
            boolean r5 = r7.has(r3)     // Catch: org.json.JSONException -> L5f
            if (r5 == 0) goto L37
            org.json.JSONObject r3 = r7.getJSONObject(r3)     // Catch: org.json.JSONException -> L5f
            java.lang.String r5 = "android"
            java.lang.String r3 = r3.getString(r5)     // Catch: org.json.JSONException -> L5f
            r4.a(r3)     // Catch: org.json.JSONException -> L5f
        L37:
            boolean r3 = r7.has(r2)     // Catch: org.json.JSONException -> L5f
            if (r3 == 0) goto L44
            java.lang.String r2 = r7.getString(r2)     // Catch: org.json.JSONException -> L5f
            r4.d(r2)     // Catch: org.json.JSONException -> L5f
        L44:
            boolean r2 = r7.has(r1)     // Catch: org.json.JSONException -> L5f
            if (r2 == 0) goto L51
            java.lang.String r1 = r7.getString(r1)     // Catch: org.json.JSONException -> L5f
            r4.b(r1)     // Catch: org.json.JSONException -> L5f
        L51:
            boolean r1 = r7.has(r0)     // Catch: org.json.JSONException -> L5f
            if (r1 == 0) goto L5e
            java.lang.String r7 = r7.getString(r0)     // Catch: org.json.JSONException -> L5f
            r4.c(r7)     // Catch: org.json.JSONException -> L5f
        L5e:
            return r4
        L5f:
            r7 = 0
            return r7
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r12, com.igexin.push.core.bean.BaseAction r13) {
            r11 = this;
            r0 = 1
            if (r12 == 0) goto Le6
            if (r13 == 0) goto Le6
            r1 = r13
            com.igexin.push.core.bean.i r1 = (com.igexin.push.core.bean.i) r1
            java.lang.String r2 = r1.b()
            java.lang.String r3 = ""
            boolean r3 = r2.equals(r3)
            r4 = 0
            if (r3 == 0) goto L1a
            java.lang.String r2 = com.igexin.push.core.d.a
            r8 = r2
        L18:
            r2 = r0
            goto L29
        L1a:
            java.lang.String r3 = com.igexin.push.core.d.a
            java.lang.String r5 = r1.b()
            boolean r3 = r3.equals(r5)
            r8 = r2
            if (r3 == 0) goto L28
            goto L18
        L28:
            r2 = r4
        L29:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "doStartApp|"
            r3.append(r5)
            r3.append(r2)
            java.lang.String r5 = "|"
            r3.append(r5)
            r3.append(r8)
            java.lang.String r3 = r3.toString()
            java.lang.Object[] r5 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r3, r5)
            java.lang.String r3 = "true"
            if (r2 == 0) goto L89
            com.igexin.push.core.r r5 = com.igexin.push.core.r.a()     // Catch: java.lang.Exception -> Le6
            java.lang.String r6 = r12.getTaskId()     // Catch: java.lang.Exception -> Le6
            java.lang.String r7 = r12.getMessageId()     // Catch: java.lang.Exception -> Le6
            r9 = 0
            r10 = r12
            r5.a(r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> Le6
            com.igexin.push.core.bean.i r13 = (com.igexin.push.core.bean.i) r13     // Catch: java.lang.Exception -> Le6
            java.lang.String r13 = r13.d()     // Catch: java.lang.Exception -> Le6
            boolean r13 = r13.equals(r3)     // Catch: java.lang.Exception -> Le6
            if (r13 == 0) goto L6f
            android.content.Context r13 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> Le6
            java.lang.String r2 = com.igexin.push.core.d.e     // Catch: java.lang.Exception -> Le6
            a(r13, r2)     // Catch: java.lang.Exception -> Le6
        L6f:
            java.lang.String r13 = r1.getDoActionId()     // Catch: java.lang.Exception -> Le6
            if (r13 == 0) goto Le6
            com.igexin.push.core.a.e r13 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> Le6
            java.lang.String r2 = r12.getTaskId()     // Catch: java.lang.Exception -> Le6
            java.lang.String r12 = r12.getMessageId()     // Catch: java.lang.Exception -> Le6
        L81:
            java.lang.String r1 = r1.getDoActionId()     // Catch: java.lang.Exception -> Le6
        L85:
            r13.a(r2, r12, r1)     // Catch: java.lang.Exception -> Le6
            goto Le6
        L89:
            com.igexin.push.core.r r5 = com.igexin.push.core.r.a()     // Catch: java.lang.Exception -> Le6
            java.lang.String r6 = r12.getTaskId()     // Catch: java.lang.Exception -> Le6
            java.lang.String r7 = r12.getMessageId()     // Catch: java.lang.Exception -> Le6
            r9 = 0
            r10 = r12
            r5.a(r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> Le6
            java.lang.String r2 = r1.d()     // Catch: java.lang.Exception -> Le6
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Exception -> Le6
            if (r2 == 0) goto Lb9
            java.lang.String r2 = r1.a()     // Catch: java.lang.Exception -> Le6
            boolean r2 = com.igexin.push.util.a.a(r2)     // Catch: java.lang.Exception -> Le6
            if (r2 == 0) goto Lba
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> Le6
            com.igexin.push.core.bean.i r13 = (com.igexin.push.core.bean.i) r13     // Catch: java.lang.Exception -> Le6
            java.lang.String r13 = r13.a()     // Catch: java.lang.Exception -> Le6
            a(r2, r13)     // Catch: java.lang.Exception -> Le6
        Lb9:
            r4 = r0
        Lba:
            if (r4 == 0) goto Lcf
            java.lang.String r13 = r1.getDoActionId()     // Catch: java.lang.Exception -> Le6
            if (r13 == 0) goto Le6
            com.igexin.push.core.a.e r13 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> Le6
            java.lang.String r2 = r12.getTaskId()     // Catch: java.lang.Exception -> Le6
            java.lang.String r12 = r12.getMessageId()     // Catch: java.lang.Exception -> Le6
            goto L81
        Lcf:
            java.lang.String r13 = r1.c()     // Catch: java.lang.Exception -> Le6
            if (r13 == 0) goto Le6
            com.igexin.push.core.a.e r13 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> Le6
            java.lang.String r2 = r12.getTaskId()     // Catch: java.lang.Exception -> Le6
            java.lang.String r12 = r12.getMessageId()     // Catch: java.lang.Exception -> Le6
            java.lang.String r1 = r1.c()     // Catch: java.lang.Exception -> Le6
            goto L85
        Le6:
            return r0
    }
}
