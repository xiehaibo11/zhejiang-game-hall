package com.igexin.push.extension.distribution.basic.a;

class f implements java.lang.Runnable {
    final com.igexin.push.extension.distribution.basic.b.b a;
    final com.igexin.push.core.bean.PushTaskBean b;
    final com.igexin.push.extension.distribution.basic.a.e c;

    f(com.igexin.push.extension.distribution.basic.a.e r1, com.igexin.push.extension.distribution.basic.b.b r2, com.igexin.push.core.bean.PushTaskBean r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            android.content.Context r0 = com.igexin.push.core.d.g
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = "android.intent.action.MAIN"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3c
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r1.setFlags(r2)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = "android.intent.category.HOME"
            r1.addCategory(r2)     // Catch: java.lang.Throwable -> L3c
            r0.startActivity(r1)     // Catch: java.lang.Throwable -> L3c
            com.igexin.push.extension.distribution.basic.b.b r0 = r4.a     // Catch: java.lang.Throwable -> L3c
            java.lang.String r0 = r0.getDoActionId()     // Catch: java.lang.Throwable -> L3c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3c
            if (r0 != 0) goto L58
            com.igexin.push.core.a.e r0 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> L3c
            com.igexin.push.core.bean.PushTaskBean r1 = r4.b     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = r1.getTaskId()     // Catch: java.lang.Throwable -> L3c
            com.igexin.push.core.bean.PushTaskBean r2 = r4.b     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = r2.getMessageId()     // Catch: java.lang.Throwable -> L3c
            com.igexin.push.extension.distribution.basic.b.b r3 = r4.a     // Catch: java.lang.Throwable -> L3c
            java.lang.String r3 = r3.getDoActionId()     // Catch: java.lang.Throwable -> L3c
            r0.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L3c
            goto L58
        L3c:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "StartHomeAction | "
            r1.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
        L58:
            return
    }
}
