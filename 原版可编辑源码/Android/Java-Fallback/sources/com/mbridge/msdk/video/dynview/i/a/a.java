package com.mbridge.msdk.video.dynview.i.a;

public class a {
    private static volatile com.mbridge.msdk.video.dynview.i.a.a a;
    private android.view.View b;
    private android.graphics.Bitmap c;
    private android.graphics.Bitmap d;

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.video.dynview.i.a.a a() {
            com.mbridge.msdk.video.dynview.i.a.a r0 = com.mbridge.msdk.video.dynview.i.a.a.a
            if (r0 != 0) goto L19
            java.lang.Class<com.mbridge.msdk.video.dynview.i.a.a> r0 = com.mbridge.msdk.video.dynview.i.a.a.class
            monitor-enter(r0)
            com.mbridge.msdk.video.dynview.i.a.a r1 = com.mbridge.msdk.video.dynview.i.a.a.a     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L12
            com.mbridge.msdk.video.dynview.i.a.a r1 = new com.mbridge.msdk.video.dynview.i.a.a     // Catch: java.lang.Throwable -> L16
            r1.<init>()     // Catch: java.lang.Throwable -> L16
            com.mbridge.msdk.video.dynview.i.a.a.a = r1     // Catch: java.lang.Throwable -> L16
        L12:
            com.mbridge.msdk.video.dynview.i.a.a r1 = com.mbridge.msdk.video.dynview.i.a.a.a     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r1
        L19:
            com.mbridge.msdk.video.dynview.i.a.a r0 = com.mbridge.msdk.video.dynview.i.a.a.a
            return r0
    }

    private synchronized void a(int r3, float r4, float r5, android.graphics.Bitmap r6, android.graphics.Bitmap r7) {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.video.dynview.g.a$a r0 = com.mbridge.msdk.video.dynview.g.a.a()     // Catch: java.lang.Throwable -> L39
            com.mbridge.msdk.video.dynview.g.a$b r1 = r0.a(r3)     // Catch: java.lang.Throwable -> L39
            com.mbridge.msdk.video.dynview.g.a$b r6 = r1.a(r6)     // Catch: java.lang.Throwable -> L39
            r6.b(r7)     // Catch: java.lang.Throwable -> L39
            r6 = 2
            if (r3 != r6) goto L27
            int r3 = (r4 > r5 ? 1 : (r4 == r5 ? 0 : -1))
            if (r3 <= 0) goto L1f
            com.mbridge.msdk.video.dynview.g.a$b r3 = r0.a(r4)     // Catch: java.lang.Throwable -> L39
            r3.b(r5)     // Catch: java.lang.Throwable -> L39
            goto L2e
        L1f:
            com.mbridge.msdk.video.dynview.g.a$b r3 = r0.a(r5)     // Catch: java.lang.Throwable -> L39
            r3.b(r4)     // Catch: java.lang.Throwable -> L39
            goto L2e
        L27:
            com.mbridge.msdk.video.dynview.g.a$b r3 = r0.a(r4)     // Catch: java.lang.Throwable -> L39
            r3.b(r5)     // Catch: java.lang.Throwable -> L39
        L2e:
            android.view.View r3 = r2.b     // Catch: java.lang.Throwable -> L39
            com.mbridge.msdk.video.dynview.g.a r4 = r0.a()     // Catch: java.lang.Throwable -> L39
            r3.setBackground(r4)     // Catch: java.lang.Throwable -> L39
            monitor-exit(r2)
            return
        L39:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void a(java.util.Map r7, com.mbridge.msdk.video.dynview.c r8, android.view.View r9) {
            r6 = this;
            r6.b = r9
            int r1 = r8.e()
            float r2 = r8.d()
            float r3 = r8.c()
            if (r7 == 0) goto Lce
            int r9 = r7.size()
            r0 = 1
            if (r9 <= r0) goto Lce
            java.util.List r8 = r8.g()
            if (r8 == 0) goto Lce
            int r9 = r8.size()
            if (r9 <= r0) goto Lce
            r9 = 0
            java.lang.Object r4 = r8.get(r9)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4
            java.lang.String r4 = r4.getImageUrl()
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r4)
            java.lang.Object r4 = r7.get(r4)
            if (r4 == 0) goto L7a
            java.lang.Object r4 = r8.get(r9)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4
            java.lang.String r4 = r4.getImageUrl()
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r4)
            java.lang.Object r4 = r7.get(r4)
            boolean r4 = r4 instanceof android.graphics.Bitmap
            if (r4 == 0) goto L7a
            java.lang.Object r4 = r8.get(r9)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4
            java.lang.String r4 = r4.getImageUrl()
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r4)
            java.lang.Object r4 = r7.get(r4)
            android.graphics.Bitmap r4 = (android.graphics.Bitmap) r4
            java.lang.Object r5 = r8.get(r9)
            if (r5 == 0) goto L7a
            if (r4 == 0) goto L7a
            boolean r5 = r4.isRecycled()
            if (r5 != 0) goto L7a
            com.mbridge.msdk.video.dynview.i.a r5 = com.mbridge.msdk.video.dynview.i.a.a()
            android.graphics.Bitmap r9 = r5.a(r4, r9)
            r6.c = r9
        L7a:
            java.lang.Object r9 = r8.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9
            java.lang.String r9 = r9.getImageUrl()
            java.lang.String r9 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r9)
            java.lang.Object r9 = r7.get(r9)
            if (r9 == 0) goto Lce
            java.lang.Object r9 = r8.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9
            java.lang.String r9 = r9.getImageUrl()
            java.lang.String r9 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r9)
            java.lang.Object r9 = r7.get(r9)
            boolean r9 = r9 instanceof android.graphics.Bitmap
            if (r9 == 0) goto Lce
            java.lang.Object r9 = r8.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9
            java.lang.String r9 = r9.getImageUrl()
            java.lang.String r9 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r9)
            java.lang.Object r7 = r7.get(r9)
            android.graphics.Bitmap r7 = (android.graphics.Bitmap) r7
            java.lang.Object r8 = r8.get(r0)
            if (r8 == 0) goto Lce
            boolean r8 = r7.isRecycled()
            if (r8 != 0) goto Lce
            com.mbridge.msdk.video.dynview.i.a r8 = com.mbridge.msdk.video.dynview.i.a.a()
            android.graphics.Bitmap r7 = r8.a(r7, r0)
            r6.d = r7
        Lce:
            android.graphics.Bitmap r7 = r6.c
            if (r7 == 0) goto Lea
            boolean r7 = r7.isRecycled()
            if (r7 != 0) goto Lea
            android.graphics.Bitmap r7 = r6.d
            if (r7 == 0) goto Lea
            boolean r7 = r7.isRecycled()
            if (r7 != 0) goto Lea
            android.graphics.Bitmap r4 = r6.c
            android.graphics.Bitmap r5 = r6.d
            r0 = r6
            r0.a(r1, r2, r3, r4, r5)
        Lea:
            return
    }

    public final void b() {
            r2 = this;
            android.view.View r0 = r2.b
            r1 = 0
            if (r0 == 0) goto L7
            r2.b = r1
        L7:
            android.graphics.Bitmap r0 = r2.c
            if (r0 == 0) goto L18
            boolean r0 = r0.isRecycled()
            if (r0 != 0) goto L18
            android.graphics.Bitmap r0 = r2.c
            r0.recycle()
            r2.c = r1
        L18:
            android.graphics.Bitmap r0 = r2.d
            if (r0 == 0) goto L29
            boolean r0 = r0.isRecycled()
            if (r0 != 0) goto L29
            android.graphics.Bitmap r0 = r2.d
            r0.recycle()
            r2.d = r1
        L29:
            return
    }
}
