package com.tkay.basead.c;

public final class g extends com.tkay.core.common.f.x {
    java.lang.String a;
    java.lang.String b;



    public g(com.tkay.core.common.f.h r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.a = r2
            r0.b = r3
            r0.c = r1
            return
    }

    static com.tkay.core.common.f.h a(com.tkay.basead.c.g r0) {
            com.tkay.core.common.f.h r0 = r0.c
            return r0
    }

    static com.tkay.core.common.f.h b(com.tkay.basead.c.g r0) {
            com.tkay.core.common.f.h r0 = r0.c
            return r0
    }

    static com.tkay.core.common.f.h c(com.tkay.basead.c.g r0) {
            com.tkay.core.common.f.h r0 = r0.c
            return r0
    }

    static com.tkay.core.common.f.h d(com.tkay.basead.c.g r0) {
            com.tkay.core.common.f.h r0 = r0.c
            return r0
    }

    @Override
    public final void a(android.app.Activity r13) {
            r12 = this;
            java.lang.String r0 = "myoffer_confirm_msg"
            java.lang.String r1 = "string"
            java.lang.String r2 = "id"
            java.lang.String r3 = ""
            com.tkay.core.common.f.h r4 = r12.c     // Catch: java.lang.Throwable -> Lda
            boolean r4 = r4 instanceof com.tkay.core.common.f.z     // Catch: java.lang.Throwable -> Lda
            if (r4 == 0) goto L16
            com.tkay.core.common.f.h r3 = r12.c     // Catch: java.lang.Throwable -> Lda
            com.tkay.core.common.f.z r3 = (com.tkay.core.common.f.z) r3     // Catch: java.lang.Throwable -> Lda
            java.lang.String r3 = r3.aa()     // Catch: java.lang.Throwable -> Lda
        L16:
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lda
            if (r4 == 0) goto L22
            com.tkay.core.common.f.h r3 = r12.c     // Catch: java.lang.Throwable -> Lda
            java.lang.String r3 = r3.r()     // Catch: java.lang.Throwable -> Lda
        L22:
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lda
            android.content.Context r4 = r4.f()     // Catch: java.lang.Throwable -> Lda
            android.view.LayoutInflater r5 = android.view.LayoutInflater.from(r13)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r6 = "myoffer_confirm_dialog"
            java.lang.String r7 = "layout"
            int r6 = com.tkay.core.common.l.h.a(r4, r6, r7)     // Catch: java.lang.Throwable -> Lda
            r7 = 0
            r8 = 0
            android.view.View r5 = r5.inflate(r6, r7, r8)     // Catch: java.lang.Throwable -> Lda
            int r6 = com.tkay.core.common.l.h.a(r4, r0, r2)     // Catch: java.lang.Throwable -> Lda
            android.view.View r6 = r5.findViewById(r6)     // Catch: java.lang.Throwable -> Lda
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Throwable -> Lda
            java.lang.String r7 = "myoffer_confirm_give_up"
            int r7 = com.tkay.core.common.l.h.a(r4, r7, r2)     // Catch: java.lang.Throwable -> Lda
            android.view.View r7 = r5.findViewById(r7)     // Catch: java.lang.Throwable -> Lda
            android.widget.TextView r7 = (android.widget.TextView) r7     // Catch: java.lang.Throwable -> Lda
            java.lang.String r9 = "myoffer_confirm_continue"
            int r2 = com.tkay.core.common.l.h.a(r4, r9, r2)     // Catch: java.lang.Throwable -> Lda
            android.view.View r2 = r5.findViewById(r2)     // Catch: java.lang.Throwable -> Lda
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Throwable -> Lda
            com.tkay.core.common.b.m r9 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lda
            android.content.Context r9 = r9.f()     // Catch: java.lang.Throwable -> Lda
            int r0 = com.tkay.core.common.l.h.a(r9, r0, r1)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r0 = r4.getString(r0)     // Catch: java.lang.Throwable -> Lda
            com.tkay.core.common.b.m r9 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lda
            android.content.Context r9 = r9.f()     // Catch: java.lang.Throwable -> Lda
            java.lang.String r10 = "myoffer_give_up"
            int r9 = com.tkay.core.common.l.h.a(r9, r10, r1)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r9 = r4.getString(r9)     // Catch: java.lang.Throwable -> Lda
            com.tkay.core.common.b.m r10 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lda
            android.content.Context r10 = r10.f()     // Catch: java.lang.Throwable -> Lda
            java.lang.String r11 = "myoffer_continue"
            int r1 = com.tkay.core.common.l.h.a(r10, r11, r1)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = r4.getString(r1)     // Catch: java.lang.Throwable -> Lda
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lda
            r10.<init>()     // Catch: java.lang.Throwable -> Lda
            r10.append(r0)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r0 = "\""
            r10.append(r0)     // Catch: java.lang.Throwable -> Lda
            r10.append(r3)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r0 = "\"?"
            r10.append(r0)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r0 = r10.toString()     // Catch: java.lang.Throwable -> Lda
            r6.setText(r0)     // Catch: java.lang.Throwable -> Lda
            r7.setText(r9)     // Catch: java.lang.Throwable -> Lda
            r2.setText(r1)     // Catch: java.lang.Throwable -> Lda
            android.app.Dialog r0 = new android.app.Dialog     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = "style_full_screen_translucent_dialog"
            java.lang.String r3 = "style"
            int r1 = com.tkay.core.common.l.h.a(r4, r1, r3)     // Catch: java.lang.Throwable -> Lda
            r0.<init>(r13, r1)     // Catch: java.lang.Throwable -> Lda
            r0.setContentView(r5)     // Catch: java.lang.Throwable -> Lda
            r0.setCancelable(r8)     // Catch: java.lang.Throwable -> Lda
            com.tkay.basead.c.g$1 r13 = new com.tkay.basead.c.g$1     // Catch: java.lang.Throwable -> Lda
            r13.<init>(r12, r0)     // Catch: java.lang.Throwable -> Lda
            r7.setOnClickListener(r13)     // Catch: java.lang.Throwable -> Lda
            com.tkay.basead.c.g$2 r13 = new com.tkay.basead.c.g$2     // Catch: java.lang.Throwable -> Lda
            r13.<init>(r12, r4, r0)     // Catch: java.lang.Throwable -> Lda
            r2.setOnClickListener(r13)     // Catch: java.lang.Throwable -> Lda
            r0.show()     // Catch: java.lang.Throwable -> Lda
        Lda:
            return
    }
}
