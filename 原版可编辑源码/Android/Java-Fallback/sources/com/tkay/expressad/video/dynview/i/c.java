package com.tkay.expressad.video.dynview.i;

public final class c {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(com.tkay.expressad.foundation.d.c r3) {
            r0 = -3
            if (r3 == 0) goto L2e
            com.tkay.expressad.foundation.d.c$c r1 = r3.M()
            if (r1 == 0) goto L2e
            com.tkay.expressad.foundation.d.c$c r1 = r3.M()
            int r1 = r1.b()
            r2 = 302(0x12e, float:4.23E-43)
            if (r1 == r2) goto L30
            r2 = 802(0x322, float:1.124E-42)
            if (r1 == r2) goto L30
            r2 = 904(0x388, float:1.267E-42)
            if (r1 == r2) goto L1e
            goto L2e
        L1e:
            com.tkay.expressad.foundation.d.c$c r3 = r3.M()
            java.lang.String r3 = r3.e()
            boolean r3 = a(r3)
            if (r3 != 0) goto L30
            r0 = -1
            goto L30
        L2e:
            r0 = 100
        L30:
            return r0
    }

    private static java.lang.String a(long r2, android.content.Context r4) {
            java.lang.String r0 = com.tkay.core.common.l.d.f(r4)
            java.lang.String r1 = "zh"
            boolean r1 = r0.startsWith(r1)
            if (r1 != 0) goto Lb6
            java.lang.String r1 = "ja"
            boolean r1 = r0.startsWith(r1)
            if (r1 == 0) goto L16
            goto Lb6
        L16:
            java.lang.String r4 = "de"
            boolean r4 = r0.startsWith(r4)
            if (r4 == 0) goto L33
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "Automatische Wiedergabe nach "
            r4.<init>(r0)
            r4.append(r2)
            java.lang.String r2 = " Sekunden"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            goto Ld6
        L33:
            java.lang.String r4 = "ko"
            boolean r4 = r0.startsWith(r4)
            if (r4 == 0) goto L4e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            java.lang.String r2 = " 초 후 자동 재생 "
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            goto Ld6
        L4e:
            java.lang.String r4 = "fr"
            boolean r4 = r0.startsWith(r4)
            if (r4 == 0) goto L6a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "Lecture de vidéo dans "
            r4.<init>(r0)
            r4.append(r2)
            java.lang.String r2 = " secondes"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            goto Ld6
        L6a:
            java.lang.String r4 = "ar"
            boolean r4 = r0.startsWith(r4)
            if (r4 == 0) goto L86
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = " ثوان"
            r4.<init>(r0)
            r4.append(r2)
            java.lang.String r2 = "لعب تلقائيا بعد "
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            goto Ld6
        L86:
            java.lang.String r4 = "ru"
            boolean r4 = r0.startsWith(r4)
            if (r4 == 0) goto La2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "Автовоспроизведение через "
            r4.<init>(r0)
            r4.append(r2)
            java.lang.String r2 = " секунд"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            goto Ld6
        La2:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r0 = "Auto play after "
            r4.<init>(r0)
            r4.append(r2)
            java.lang.String r2 = " s"
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            goto Ld6
        Lb6:
            java.lang.String r0 = "tkay_cm_video_auto_play_after"
            java.lang.String r1 = "string"
            int r0 = com.tkay.expressad.foundation.h.i.a(r4, r0, r1)
            java.lang.String r4 = r4.getString(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = r0.toString()
        Ld6:
            return r2
    }

    private static void a(android.app.Activity r1) {
            boolean r0 = a(r1)
            if (r0 == 0) goto Lb
            r0 = 6
            r1.setRequestedOrientation(r0)
            return
        Lb:
            r0 = 7
            r1.setRequestedOrientation(r0)
            return
    }

    private static void a(com.tkay.expressad.foundation.d.c r3, android.app.Activity r4) {
            if (r3 == 0) goto L35
            com.tkay.expressad.foundation.d.c$c r0 = r3.M()
            if (r0 == 0) goto L35
            com.tkay.expressad.foundation.d.c$c r3 = r3.M()
            int r3 = r3.c()
            if (r4 == 0) goto L35
            boolean r0 = r4.isFinishing()
            if (r0 != 0) goto L35
            r0 = 1
            r1 = 7
            if (r3 == r0) goto L32
            r0 = 2
            r2 = 6
            if (r3 == r0) goto L2e
            boolean r3 = a(r4)
            if (r3 == 0) goto L2a
            r4.setRequestedOrientation(r2)
            return
        L2a:
            r4.setRequestedOrientation(r1)
            goto L35
        L2e:
            r4.setRequestedOrientation(r2)
            return
        L32:
            r4.setRequestedOrientation(r1)
        L35:
            return
    }

    public static boolean a(android.content.Context r1) {
            android.content.res.Resources r1 = r1.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            int r1 = r1.orientation
            r0 = 2
            if (r1 != r0) goto Lf
            r1 = 1
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static boolean a(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L23
            if (r2 == 0) goto L23
            java.lang.String r0 = "alecfc"
            java.lang.String r2 = r2.getQueryParameter(r0)     // Catch: java.lang.Throwable -> L23
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L23
            java.lang.String r0 = "1"
            boolean r2 = r2.equals(r0)     // Catch: java.lang.Throwable -> L23
            if (r2 == 0) goto L23
            r1 = 1
        L23:
            return r1
    }

    private static boolean a(java.util.List<com.tkay.expressad.foundation.d.c> r2) {
            r0 = 0
            if (r2 == 0) goto L16
            int r1 = r2.size()
            if (r1 <= 0) goto L16
            java.lang.Object r2 = r2.get(r0)
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            if (r2 == 0) goto L16
            boolean r2 = r2.j()
            return r2
        L16:
            return r0
    }

    private static int b(com.tkay.expressad.foundation.d.c r1) {
            if (r1 == 0) goto L11
            com.tkay.expressad.foundation.d.c$c r0 = r1.M()
            if (r0 == 0) goto L11
            com.tkay.expressad.foundation.d.c$c r1 = r1.M()
            int r1 = r1.c()
            goto L12
        L11:
            r1 = 1
        L12:
            return r1
    }
}
