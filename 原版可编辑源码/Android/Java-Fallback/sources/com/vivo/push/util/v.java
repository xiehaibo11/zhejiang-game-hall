package com.vivo.push.util;

final class v implements com.vivo.push.util.d {
    private android.content.ContentResolver a;

    v() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.ContentResolver r0 = r1.a     // Catch: java.lang.Exception -> L7
            java.lang.String r3 = android.provider.Settings.System.getString(r0, r2)     // Catch: java.lang.Exception -> L7
            goto L1a
        L7:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "getString error by "
            java.lang.String r2 = r0.concat(r2)
            java.lang.String r0 = "SettingsCache"
            com.vivo.push.util.p.b(r0, r2)
        L1a:
            return r3
    }

    @Override
    public final boolean a(android.content.Context r2) {
            r1 = this;
            boolean r0 = com.vivo.push.util.j.b()
            if (r0 == 0) goto Le
            android.content.ContentResolver r2 = r2.getContentResolver()
            r1.a = r2
            r2 = 1
            return r2
        Le:
            r2 = 0
            return r2
    }

    @Override
    public final void b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.ContentResolver r0 = r1.a     // Catch: java.lang.Exception -> L6
            android.provider.Settings.System.putString(r0, r2, r3)     // Catch: java.lang.Exception -> L6
            return
        L6:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "putString error by "
            java.lang.String r2 = r3.concat(r2)
            java.lang.String r3 = "SettingsCache"
            com.vivo.push.util.p.b(r3, r2)
            return
    }
}
