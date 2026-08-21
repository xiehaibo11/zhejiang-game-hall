package com.xiaomi.push;

public class hd implements com.xiaomi.push.service.XMPushService.n {
    private static boolean a;
    private int a;
    private android.content.Context a;
    private boolean b;

    static {
            return
    }

    public hd(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private java.lang.String a(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "com.xiaomi.xmsf"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto Lb
            java.lang.String r4 = "1000271"
            goto L19
        Lb:
            android.content.Context r0 = r3.a
            r1 = 0
            java.lang.String r2 = "pref_registered_pkg_names"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            r1 = 0
            java.lang.String r4 = r0.getString(r4, r1)
        L19:
            return r4
    }

    private void a(android.content.Context r4) {
            r3 = this;
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r4)
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.ak
            int r1 = r1.a()
            r2 = 1
            boolean r0 = r0.a(r1, r2)
            r3.b = r0
            com.xiaomi.push.service.ba r4 = com.xiaomi.push.service.ba.a(r4)
            com.xiaomi.push.ho r0 = com.xiaomi.push.ho.al
            int r0 = r0.a()
            r1 = 7200(0x1c20, float:1.009E-41)
            int r4 = r4.a(r0, r1)
            r3.a = r4
            r0 = 60
            int r4 = java.lang.Math.max(r0, r4)
            r3.a = r4
            return
    }

    public static void a(boolean r0) {
            com.xiaomi.push.hd.a = r0
            return
    }

    private boolean a() {
            r6 = this;
            android.content.Context r0 = r6.a
            java.lang.String r1 = "mipush_extra"
            r2 = 4
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            java.lang.String r1 = "last_tiny_data_upload_timestamp"
            r2 = -1
            long r0 = r0.getLong(r1, r2)
            long r2 = java.lang.System.currentTimeMillis()
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 / r4
            long r2 = r2 - r0
            long r0 = java.lang.Math.abs(r2)
            int r2 = r6.a
            long r2 = (long) r2
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L26
            r0 = 1
            goto L27
        L26:
            r0 = 0
        L27:
            return r0
    }

    private boolean a(com.xiaomi.push.hh r4) {
            r3 = this;
            android.content.Context r0 = r3.a
            boolean r0 = com.xiaomi.push.bj.b(r0)
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            if (r4 != 0) goto Ld
            return r1
        Ld:
            android.content.Context r4 = r3.a
            java.lang.String r4 = r4.getPackageName()
            java.lang.String r4 = r3.a(r4)
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L1e
            return r1
        L1e:
            java.io.File r4 = new java.io.File
            android.content.Context r0 = r3.a
            java.io.File r0 = r0.getFilesDir()
            java.lang.String r2 = "tiny_data.data"
            r4.<init>(r0, r2)
            boolean r4 = r4.exists()
            if (r4 != 0) goto L32
            return r1
        L32:
            boolean r4 = com.xiaomi.push.hd.a
            if (r4 == 0) goto L37
            return r1
        L37:
            android.content.Context r4 = r3.a
            com.xiaomi.push.service.ba r4 = com.xiaomi.push.service.ba.a(r4)
            com.xiaomi.push.ho r0 = com.xiaomi.push.ho.aV
            int r0 = r0.a()
            boolean r4 = r4.a(r0, r1)
            if (r4 == 0) goto L5a
            android.content.Context r4 = r3.a
            boolean r4 = com.xiaomi.push.j.a(r4)
            if (r4 != 0) goto L5a
            android.content.Context r4 = r3.a
            boolean r4 = com.xiaomi.push.j.b(r4)
            if (r4 != 0) goto L5a
            return r1
        L5a:
            r4 = 1
            return r4
    }

    @Override
    public void a() {
            r4 = this;
            android.content.Context r0 = r4.a
            com.xiaomi.push.hg r0 = com.xiaomi.push.hg.a(r0)
            com.xiaomi.push.hh r0 = r0.a()
            android.content.Context r1 = r4.a
            boolean r1 = com.xiaomi.push.hi.a(r1)
            if (r1 == 0) goto L23
            if (r0 == 0) goto L23
            android.content.Context r1 = r4.a
            java.util.ArrayList<com.xiaomi.push.hn> r2 = com.xiaomi.push.service.ca.a
            com.xiaomi.push.hf.a(r1, r0, r2)
            com.xiaomi.push.service.ca.a()
            java.lang.String r1 = "coord data upload"
            com.xiaomi.channel.commonutils.logger.b.c(r1)
        L23:
            android.content.Context r1 = r4.a
            r4.a(r1)
            boolean r1 = r4.b
            if (r1 == 0) goto L72
            boolean r1 = r4.a()
            if (r1 != 0) goto L33
            goto L72
        L33:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "TinyData TinyDataCacheProcessor.pingFollowUpAction ts:"
            r1.append(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            boolean r1 = r4.a(r0)
            if (r1 != 0) goto L6a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TinyData TinyDataCacheProcessor.pingFollowUpAction !canUpload(uploader) ts:"
            r0.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            return
        L6a:
            r1 = 1
            com.xiaomi.push.hd.a = r1
            android.content.Context r1 = r4.a
            com.xiaomi.push.he.a(r1, r0)
        L72:
            return
    }
}
