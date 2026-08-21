package com.igexin.push.core.a.a;

public class i implements com.igexin.push.core.a.a.a {
    private static final java.lang.String a = null;

    static {
            java.lang.String r0 = com.igexin.push.config.i.a
            com.igexin.push.core.a.a.i.a = r0
            return
    }

    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(com.igexin.push.core.bean.k r12, java.lang.String r13) {
            r11 = this;
            java.lang.String r0 = r12.a()
            if (r0 != 0) goto L7
            return
        L7:
            int r13 = r0.indexOf(r13)
            r1 = -1
            if (r13 != r1) goto Lf
            return
        Lf:
            r2 = 0
            java.lang.String r3 = "&"
            int r4 = r0.indexOf(r3)
            java.lang.String r5 = ""
            r6 = 0
            java.lang.String r7 = "="
            if (r4 != r1) goto L38
            int r1 = r13 + (-1)
            java.lang.String r5 = r0.substring(r6, r1)
            java.lang.String r13 = r0.substring(r13)
            boolean r0 = r13.contains(r7)
            if (r0 == 0) goto L9e
        L2d:
            int r0 = r13.indexOf(r7)
            int r0 = r0 + 1
            java.lang.String r2 = r13.substring(r0)
            goto L9e
        L38:
            int r8 = r13 + (-1)
            char r9 = r0.charAt(r8)
            r10 = 63
            if (r9 != r10) goto L66
            java.lang.String r1 = r0.substring(r6, r13)
            int r3 = r4 + 1
            java.lang.String r3 = r0.substring(r3)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            java.lang.String r13 = r0.substring(r13, r4)
            boolean r0 = r13.contains(r7)
            if (r0 == 0) goto L9e
            goto L2d
        L66:
            char r4 = r0.charAt(r8)
            r9 = 38
            if (r4 != r9) goto L9e
            java.lang.String r2 = r0.substring(r6, r8)
            java.lang.String r13 = r0.substring(r13)
            int r0 = r13.indexOf(r3)
            if (r0 == r1) goto L84
            java.lang.String r5 = r13.substring(r0)
            java.lang.String r13 = r13.substring(r6, r0)
        L84:
            int r0 = r13.indexOf(r7)
            int r0 = r0 + 1
            java.lang.String r13 = r13.substring(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r2 = r13
        L9e:
            r12.a(r5)
            r12.b(r2)
            return
    }

    @Override
    public com.igexin.push.core.a a(com.igexin.push.core.bean.PushTaskBean r1, com.igexin.push.core.bean.BaseAction r2) {
            r0 = this;
            com.igexin.push.core.a r1 = com.igexin.push.core.a.a
            return r1
    }

    @Override
    public com.igexin.push.core.bean.BaseAction a(org.json.JSONObject r8) {
            r7 = this;
            java.lang.String r0 = "is_withnettype"
            java.lang.String r1 = "is_withcid"
            java.lang.String r2 = "actionid"
            java.lang.String r3 = "do"
            java.lang.String r4 = "url"
            boolean r5 = r8.has(r4)     // Catch: org.json.JSONException -> L6d
            if (r5 == 0) goto L6d
            boolean r5 = r8.has(r3)     // Catch: org.json.JSONException -> L6d
            if (r5 == 0) goto L6d
            boolean r5 = r8.has(r2)     // Catch: org.json.JSONException -> L6d
            if (r5 == 0) goto L6d
            java.lang.String r4 = r8.getString(r4)     // Catch: org.json.JSONException -> L6d
            java.lang.String r5 = ""
            boolean r5 = r4.equals(r5)     // Catch: org.json.JSONException -> L6d
            if (r5 != 0) goto L6d
            com.igexin.push.core.bean.k r5 = new com.igexin.push.core.bean.k     // Catch: org.json.JSONException -> L6d
            r5.<init>()     // Catch: org.json.JSONException -> L6d
            java.lang.String r6 = "startweb"
            r5.setType(r6)     // Catch: org.json.JSONException -> L6d
            java.lang.String r2 = r8.getString(r2)     // Catch: org.json.JSONException -> L6d
            r5.setActionId(r2)     // Catch: org.json.JSONException -> L6d
            java.lang.String r2 = r8.getString(r3)     // Catch: org.json.JSONException -> L6d
            r5.setDoActionId(r2)     // Catch: org.json.JSONException -> L6d
            r5.a(r4)     // Catch: org.json.JSONException -> L6d
            boolean r2 = r8.has(r1)     // Catch: org.json.JSONException -> L6d
            r3 = 1
            java.lang.String r4 = "true"
            if (r2 == 0) goto L59
            java.lang.String r1 = r8.getString(r1)     // Catch: org.json.JSONException -> L6d
            boolean r1 = r1.equals(r4)     // Catch: org.json.JSONException -> L6d
            if (r1 == 0) goto L59
            r5.a(r3)     // Catch: org.json.JSONException -> L6d
        L59:
            boolean r1 = r8.has(r0)     // Catch: org.json.JSONException -> L6d
            if (r1 == 0) goto L6c
            java.lang.String r8 = r8.getString(r0)     // Catch: org.json.JSONException -> L6d
            boolean r8 = r8.equals(r4)     // Catch: org.json.JSONException -> L6d
            if (r8 == 0) goto L6c
            r5.b(r3)     // Catch: org.json.JSONException -> L6d
        L6c:
            return r5
        L6d:
            r8 = 0
            return r8
    }

    @Override
    public boolean b(com.igexin.push.core.bean.PushTaskBean r4, com.igexin.push.core.bean.BaseAction r5) {
            r3 = this;
            r0 = r5
            com.igexin.push.core.bean.k r0 = (com.igexin.push.core.bean.k) r0
            java.lang.String r1 = "targetpkgname"
            r3.a(r0, r1)
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            java.lang.String r2 = "android.intent.action.VIEW"
            r1.setAction(r2)
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.setFlags(r2)
            java.lang.String r2 = r0.b()
            r1.setPackage(r2)
            java.lang.String r0 = r0.c()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            r1.setData(r0)
            android.content.Context r0 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L2e
            r0.startActivity(r1)     // Catch: java.lang.Exception -> L2e
        L2e:
            java.lang.String r0 = r5.getDoActionId()
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L4d
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()
            java.lang.String r1 = r4.getTaskId()
            java.lang.String r4 = r4.getMessageId()
            java.lang.String r5 = r5.getDoActionId()
            r0.a(r1, r4, r5)
        L4d:
            r4 = 1
            return r4
    }
}
