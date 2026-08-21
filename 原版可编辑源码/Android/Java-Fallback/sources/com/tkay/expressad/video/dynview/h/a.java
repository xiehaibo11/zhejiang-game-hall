package com.tkay.expressad.video.dynview.h;

public final class a {


    public a(android.content.Context r2, java.util.List<com.tkay.expressad.foundation.d.c> r3, com.tkay.expressad.video.dynview.f.h r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r1 = this;
            r1.<init>()
            com.tkay.expressad.video.dynview.j.c r0 = new com.tkay.expressad.video.dynview.j.c
            r0.<init>()
            com.tkay.expressad.video.dynview.c r2 = com.tkay.expressad.video.dynview.j.c.a(r2, r3)
            r1.a(r2, r4, r5)
            return
    }

    public a(com.tkay.expressad.video.dynview.c r1, com.tkay.expressad.video.dynview.f.h r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r0.<init>()
            r0.a(r1, r2, r3)
            return
    }

    private void a(com.tkay.expressad.video.dynview.c r4, com.tkay.expressad.video.dynview.f.h r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            if (r4 != 0) goto Lb
            com.tkay.expressad.video.dynview.c.b r4 = com.tkay.expressad.video.dynview.c.b.a
            r5.a(r4)
            return
        Lb:
            android.content.Context r0 = r4.a()
            if (r0 != 0) goto L17
            com.tkay.expressad.video.dynview.c.b r4 = com.tkay.expressad.video.dynview.c.b.b
            r5.a(r4)
            return
        L17:
            java.lang.String r0 = r4.b()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L27
            com.tkay.expressad.video.dynview.c.b r4 = com.tkay.expressad.video.dynview.c.b.c
            r5.a(r4)
            return
        L27:
            android.content.Context r0 = r4.a()
            java.lang.String r1 = r4.b()
            java.lang.String r2 = "layout"
            int r0 = com.tkay.expressad.foundation.h.i.a(r0, r1, r2)
            android.content.Context r1 = r4.a()
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            r2 = 0
            android.view.View r0 = r1.inflate(r0, r2)
            com.tkay.expressad.video.dynview.b.b.a()
            com.tkay.expressad.video.dynview.b.b.a(r0, r4)
            com.tkay.expressad.video.dynview.b.a r1 = com.tkay.expressad.video.dynview.b.a.a()
            com.tkay.expressad.video.dynview.h.a$1 r2 = new com.tkay.expressad.video.dynview.h.a$1
            r2.<init>(r3, r5)
            r1.a(r0, r4, r6, r2)
            return
    }
}
