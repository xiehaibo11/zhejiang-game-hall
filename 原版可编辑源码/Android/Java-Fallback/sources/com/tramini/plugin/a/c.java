package com.tramini.plugin.a;

public class c extends android.content.BroadcastReceiver {
    public static final java.lang.String a = null;

    static {
            java.lang.Class<com.tramini.plugin.a.c> r0 = com.tramini.plugin.a.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.tramini.plugin.a.c.a = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            java.lang.String r3 = r4.getAction()     // Catch: java.lang.Throwable -> L37
            java.lang.String r3 = r4.getStringExtra(r3)     // Catch: java.lang.Throwable -> L37
            java.lang.String r0 = "data"
            java.lang.String r0 = r4.getStringExtra(r0)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "denied"
            java.lang.String[] r4 = r4.getStringArrayExtra(r1)     // Catch: java.lang.Throwable -> L37
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L37
            if (r1 != 0) goto L36
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L37
            if (r1 == 0) goto L21
            goto L36
        L21:
            com.tramini.plugin.a.a.c r1 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L37
            r1.a(r4)     // Catch: java.lang.Throwable -> L37
            com.tramini.plugin.a.a.c r4 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L37
            r4.b(r3)     // Catch: java.lang.Throwable -> L37
            com.tramini.plugin.a.a.c r3 = com.tramini.plugin.a.a.c.a()     // Catch: java.lang.Throwable -> L37
            r3.c(r0)     // Catch: java.lang.Throwable -> L37
        L36:
            return
        L37:
            r3 = move-exception
            r3.printStackTrace()
            return
    }
}
