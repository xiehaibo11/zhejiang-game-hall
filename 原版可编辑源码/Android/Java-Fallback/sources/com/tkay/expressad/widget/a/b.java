package com.tkay.expressad.widget.a;

public final class b extends android.app.Dialog {
    private static final java.lang.String a = "TYAlertDialog";
    private com.tkay.expressad.widget.a.c b;
    private android.widget.TextView c;
    private android.widget.TextView d;
    private android.widget.Button e;
    private android.widget.Button f;



    public b(android.content.Context r6, com.tkay.expressad.widget.a.c r7) {
            r5 = this;
            java.lang.String r0 = "id"
            r5.<init>(r6)
            android.view.Window r1 = r5.getWindow()
            android.graphics.drawable.ColorDrawable r2 = new android.graphics.drawable.ColorDrawable
            r3 = 0
            r2.<init>(r3)
            r1.setBackgroundDrawable(r2)
            r1 = 1
            r5.requestWindowFeature(r1)
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r6)
            java.lang.String r2 = "tkay_cm_alertview"
            java.lang.String r4 = "layout"
            int r2 = com.tkay.expressad.foundation.h.i.a(r6, r2, r4)
            r4 = 0
            android.view.View r1 = r1.inflate(r2, r4)
            r5.b = r7
            if (r1 == 0) goto L70
            r5.setContentView(r1)
            java.lang.String r2 = "tkay_video_common_alertview_titleview"
            int r2 = com.tkay.expressad.foundation.h.i.a(r6, r2, r0)     // Catch: java.lang.Exception -> L3d
            android.view.View r2 = r1.findViewById(r2)     // Catch: java.lang.Exception -> L3d
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Exception -> L3d
            r5.c = r2     // Catch: java.lang.Exception -> L3d
            goto L41
        L3d:
            r2 = move-exception
            r2.getMessage()
        L41:
            java.lang.String r2 = "tkay_video_common_alertview_contentview"
            int r2 = com.tkay.expressad.foundation.h.i.a(r6, r2, r0)     // Catch: java.lang.Exception -> L6c
            android.view.View r2 = r1.findViewById(r2)     // Catch: java.lang.Exception -> L6c
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Exception -> L6c
            r5.d = r2     // Catch: java.lang.Exception -> L6c
            java.lang.String r2 = "tkay_video_common_alertview_confirm_button"
            int r2 = com.tkay.expressad.foundation.h.i.a(r6, r2, r0)     // Catch: java.lang.Exception -> L6c
            android.view.View r2 = r1.findViewById(r2)     // Catch: java.lang.Exception -> L6c
            android.widget.Button r2 = (android.widget.Button) r2     // Catch: java.lang.Exception -> L6c
            r5.e = r2     // Catch: java.lang.Exception -> L6c
            java.lang.String r2 = "tkay_video_common_alertview_cancel_button"
            int r6 = com.tkay.expressad.foundation.h.i.a(r6, r2, r0)     // Catch: java.lang.Exception -> L6c
            android.view.View r6 = r1.findViewById(r6)     // Catch: java.lang.Exception -> L6c
            android.widget.Button r6 = (android.widget.Button) r6     // Catch: java.lang.Exception -> L6c
            r5.f = r6     // Catch: java.lang.Exception -> L6c
            goto L70
        L6c:
            r6 = move-exception
            r6.getMessage()
        L70:
            android.widget.Button r6 = r5.f
            if (r6 == 0) goto L7c
            com.tkay.expressad.widget.a.b$1 r0 = new com.tkay.expressad.widget.a.b$1
            r0.<init>(r5, r7)
            r6.setOnClickListener(r0)
        L7c:
            android.widget.Button r6 = r5.e
            if (r6 == 0) goto L88
            com.tkay.expressad.widget.a.b$2 r0 = new com.tkay.expressad.widget.a.b$2
            r0.<init>(r5, r7)
            r6.setOnClickListener(r0)
        L88:
            r5.setCanceledOnTouchOutside(r3)
            r5.setCancelable(r3)
            return
    }

    private void a(int r11) {
            r10 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            android.content.Context r1 = r10.getContext()
            java.lang.String r2 = "string"
            java.lang.String r3 = "tkay_cm_dialog_alert_confim_close_warn"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r2)
            java.lang.String r1 = r0.getString(r1)
            android.content.Context r3 = r10.getContext()
            java.lang.String r4 = "tkay_cm_dialog_alert_confim_close_warn_tips"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r2)
            java.lang.String r3 = r0.getString(r3)
            android.content.Context r4 = r10.getContext()
            java.lang.String r5 = "tkay_cm_dialog_alert_confim_close_warn_close"
            int r4 = com.tkay.expressad.foundation.h.i.a(r4, r5, r2)
            java.lang.String r4 = r0.getString(r4)
            android.content.Context r5 = r10.getContext()
            java.lang.String r6 = "tkay_cm_dialog_alert_confim_close_warn_continue"
            int r5 = com.tkay.expressad.foundation.h.i.a(r5, r6, r2)
            java.lang.String r5 = r0.getString(r5)
            android.content.Context r6 = r10.getContext()
            java.lang.String r7 = "tkay_cm_dialog_alert_confim_close"
            int r6 = com.tkay.expressad.foundation.h.i.a(r6, r7, r2)
            java.lang.String r6 = r0.getString(r6)
            android.content.Context r7 = r10.getContext()
            java.lang.String r8 = "tkay_cm_dialog_alert_confim_close_cancel"
            int r7 = com.tkay.expressad.foundation.h.i.a(r7, r8, r2)
            java.lang.String r7 = r0.getString(r7)
            android.content.Context r8 = r10.getContext()
            java.lang.String r9 = "tkay_cm_dialog_alert_confim_close_continue"
            int r2 = com.tkay.expressad.foundation.h.i.a(r8, r9, r2)
            java.lang.String r0 = r0.getString(r2)
            int r2 = com.tkay.expressad.foundation.g.a.cr
            if (r11 != r2) goto L71
            goto L72
        L71:
            r1 = r3
        L72:
            r10.a(r1)
            int r1 = com.tkay.expressad.foundation.g.a.cr
            if (r11 != r1) goto L7a
            goto L7b
        L7a:
            r4 = r5
        L7b:
            r10.b(r4)
            int r1 = com.tkay.expressad.foundation.g.a.cr
            if (r11 != r1) goto L83
            goto L84
        L83:
            r6 = r7
        L84:
            r10.c(r6)
            r10.d(r0)
            return
    }

    private static void a(android.view.Window r2) {
            if (r2 == 0) goto L46
            r0 = 1024(0x400, float:1.435E-42)
            r2.setFlags(r0, r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L1c
            r0 = 67108864(0x4000000, float:1.5046328E-36)
            r2.addFlags(r0)
            android.view.View r0 = r2.getDecorView()
            r1 = 4098(0x1002, float:5.743E-42)
            r0.setSystemUiVisibility(r1)
            goto L24
        L1c:
            android.view.View r0 = r2.getDecorView()
            r1 = 2
            r0.setSystemUiVisibility(r1)
        L24:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L34
            android.view.WindowManager$LayoutParams r0 = r2.getAttributes()
            r1 = 1
            r0.layoutInDisplayCutoutMode = r1
            r2.setAttributes(r0)
        L34:
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r1 = 0
            r0.<init>(r1)
            r2.setBackgroundDrawable(r0)
            r0 = -1
            r2.setLayout(r0, r0)
            r0 = 17
            r2.setGravity(r0)
        L46:
            return
    }

    private void a(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.c
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    private void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.a(r1)
            r0.b(r2)
            r0.c(r3)
            r0.d(r4)
            return
    }

    private void b(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.d
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    private void c() {
            r7 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            android.content.Context r1 = r7.getContext()
            java.lang.String r2 = "string"
            java.lang.String r3 = "tkay_cm_dialog_alert_confim_close_warn"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r2)
            java.lang.String r1 = r0.getString(r1)
            android.content.Context r3 = r7.getContext()
            java.lang.String r4 = "tkay_cm_dialog_alert_confim_close_desc"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r2)
            java.lang.String r3 = r0.getString(r3)
            android.content.Context r4 = r7.getContext()
            java.lang.String r5 = "tkay_cm_dialog_alert_confim_close"
            int r4 = com.tkay.expressad.foundation.h.i.a(r4, r5, r2)
            java.lang.String r4 = r0.getString(r4)
            android.content.Context r5 = r7.getContext()
            java.lang.String r6 = "tkay_cm_dialog_alert_cancel_close"
            int r2 = com.tkay.expressad.foundation.h.i.a(r5, r6, r2)
            java.lang.String r0 = r0.getString(r2)
            r7.a(r1)
            r7.b(r3)
            r7.c(r4)
            r7.d(r0)
            return
    }

    private void c(java.lang.String r2) {
            r1 = this;
            android.widget.Button r0 = r1.e
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    private void d() {
            r7 = this;
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.e()
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.b()
            if (r0 == 0) goto L24
            java.lang.String r1 = r0.C()
            java.lang.String r2 = r0.D()
            java.lang.String r3 = r0.E()
            java.lang.String r0 = r0.F()
            r7.a(r1, r2, r3, r0)
            return
        L24:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            android.content.Context r1 = r7.getContext()
            java.lang.String r2 = "string"
            java.lang.String r3 = "tkay_cm_dialog_alert_confim_close_warn"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r2)
            java.lang.String r1 = r0.getString(r1)
            android.content.Context r3 = r7.getContext()
            java.lang.String r4 = "tkay_cm_dialog_alert_confim_close_desc"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r2)
            java.lang.String r3 = r0.getString(r3)
            android.content.Context r4 = r7.getContext()
            java.lang.String r5 = "tkay_cm_dialog_alert_confim_close"
            int r4 = com.tkay.expressad.foundation.h.i.a(r4, r5, r2)
            java.lang.String r4 = r0.getString(r4)
            android.content.Context r5 = r7.getContext()
            java.lang.String r6 = "tkay_cm_dialog_alert_continue_to_play"
            int r2 = com.tkay.expressad.foundation.h.i.a(r5, r6, r2)
            java.lang.String r0 = r0.getString(r2)
            r7.a(r1)
            r7.b(r3)
            r7.c(r4)
            r7.d(r0)
            return
    }

    private void d(java.lang.String r2) {
            r1 = this;
            android.widget.Button r0 = r1.f
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    private void e() {
            r7 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            android.content.Context r1 = r7.getContext()
            java.lang.String r2 = "string"
            java.lang.String r3 = "tkay_cm_dialog_alert_confim_close_warn"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r2)
            java.lang.String r1 = r0.getString(r1)
            android.content.Context r3 = r7.getContext()
            java.lang.String r4 = "tkay_cm_dialog_alert_confim_close_desc"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r2)
            java.lang.String r3 = r0.getString(r3)
            android.content.Context r4 = r7.getContext()
            java.lang.String r5 = "tkay_cm_dialog_alert_confim_close"
            int r4 = com.tkay.expressad.foundation.h.i.a(r4, r5, r2)
            java.lang.String r4 = r0.getString(r4)
            android.content.Context r5 = r7.getContext()
            java.lang.String r6 = "tkay_cm_dialog_alert_continue_to_play"
            int r2 = com.tkay.expressad.foundation.h.i.a(r5, r6, r2)
            java.lang.String r0 = r0.getString(r2)
            r7.a(r1)
            r7.b(r3)
            r7.c(r4)
            r7.d(r0)
            return
    }

    public final void a() {
            r1 = this;
            com.tkay.expressad.widget.a.c r0 = r1.b
            if (r0 == 0) goto L7
            r0 = 0
            r1.b = r0
        L7:
            return
    }

    public final void a(int r10, java.lang.String r11) {
            r9 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "string"
            android.content.Context r2 = r9.getContext()     // Catch: java.lang.Exception -> L101
            java.lang.String r3 = "Tkay_ConfirmTitle"
            java.lang.String r4 = java.lang.String.valueOf(r11)     // Catch: java.lang.Exception -> L101
            java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Exception -> L101
            java.lang.Object r2 = com.tkay.expressad.foundation.h.v.b(r2, r3, r0)     // Catch: java.lang.Exception -> L101
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L101
            android.content.Context r3 = r9.getContext()     // Catch: java.lang.Exception -> L101
            java.lang.String r4 = "Tkay_ConfirmContent"
            java.lang.String r5 = java.lang.String.valueOf(r11)     // Catch: java.lang.Exception -> L101
            java.lang.String r4 = r4.concat(r5)     // Catch: java.lang.Exception -> L101
            java.lang.Object r3 = com.tkay.expressad.foundation.h.v.b(r3, r4, r0)     // Catch: java.lang.Exception -> L101
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L101
            android.content.Context r4 = r9.getContext()     // Catch: java.lang.Exception -> L101
            java.lang.String r5 = "Tkay_CancelText"
            java.lang.String r6 = java.lang.String.valueOf(r11)     // Catch: java.lang.Exception -> L101
            java.lang.String r5 = r5.concat(r6)     // Catch: java.lang.Exception -> L101
            java.lang.Object r4 = com.tkay.expressad.foundation.h.v.b(r4, r5, r0)     // Catch: java.lang.Exception -> L101
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L101
            android.content.Context r5 = r9.getContext()     // Catch: java.lang.Exception -> L101
            java.lang.String r6 = "Tkay_ConfirmText"
            java.lang.String r11 = java.lang.String.valueOf(r11)     // Catch: java.lang.Exception -> L101
            java.lang.String r11 = r6.concat(r11)     // Catch: java.lang.Exception -> L101
            java.lang.Object r11 = com.tkay.expressad.foundation.h.v.b(r5, r11, r0)     // Catch: java.lang.Exception -> L101
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Exception -> L101
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L101
            if (r0 == 0) goto Lfd
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L101
            if (r0 == 0) goto Lfd
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L101
            if (r0 == 0) goto Lfd
            boolean r0 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> L101
            if (r0 == 0) goto Lfd
            com.tkay.core.common.b.m r11 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L101
            android.content.Context r11 = r11.f()     // Catch: java.lang.Exception -> L101
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.Exception -> L101
            java.lang.String r2 = "tkay_cm_dialog_alert_confim_close_warn"
            int r0 = com.tkay.expressad.foundation.h.i.a(r0, r2, r1)     // Catch: java.lang.Exception -> L101
            java.lang.String r0 = r11.getString(r0)     // Catch: java.lang.Exception -> L101
            android.content.Context r2 = r9.getContext()     // Catch: java.lang.Exception -> L101
            java.lang.String r3 = "tkay_cm_dialog_alert_confim_close_warn_tips"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Exception -> L101
            java.lang.String r2 = r11.getString(r2)     // Catch: java.lang.Exception -> L101
            android.content.Context r3 = r9.getContext()     // Catch: java.lang.Exception -> L101
            java.lang.String r4 = "tkay_cm_dialog_alert_confim_close_warn_close"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Exception -> L101
            java.lang.String r3 = r11.getString(r3)     // Catch: java.lang.Exception -> L101
            android.content.Context r4 = r9.getContext()     // Catch: java.lang.Exception -> L101
            java.lang.String r5 = "tkay_cm_dialog_alert_confim_close_warn_continue"
            int r4 = com.tkay.expressad.foundation.h.i.a(r4, r5, r1)     // Catch: java.lang.Exception -> L101
            java.lang.String r4 = r11.getString(r4)     // Catch: java.lang.Exception -> L101
            android.content.Context r5 = r9.getContext()     // Catch: java.lang.Exception -> L101
            java.lang.String r6 = "tkay_cm_dialog_alert_confim_close"
            int r5 = com.tkay.expressad.foundation.h.i.a(r5, r6, r1)     // Catch: java.lang.Exception -> L101
            java.lang.String r5 = r11.getString(r5)     // Catch: java.lang.Exception -> L101
            android.content.Context r6 = r9.getContext()     // Catch: java.lang.Exception -> L101
            java.lang.String r7 = "tkay_cm_dialog_alert_confim_close_cancel"
            int r6 = com.tkay.expressad.foundation.h.i.a(r6, r7, r1)     // Catch: java.lang.Exception -> L101
            java.lang.String r6 = r11.getString(r6)     // Catch: java.lang.Exception -> L101
            android.content.Context r7 = r9.getContext()     // Catch: java.lang.Exception -> L101
            java.lang.String r8 = "tkay_cm_dialog_alert_confim_close_continue"
            int r1 = com.tkay.expressad.foundation.h.i.a(r7, r8, r1)     // Catch: java.lang.Exception -> L101
            java.lang.String r11 = r11.getString(r1)     // Catch: java.lang.Exception -> L101
            int r1 = com.tkay.expressad.foundation.g.a.cr     // Catch: java.lang.Exception -> L101
            if (r10 != r1) goto Le3
            goto Le4
        Le3:
            r0 = r2
        Le4:
            r9.a(r0)     // Catch: java.lang.Exception -> L101
            int r0 = com.tkay.expressad.foundation.g.a.cr     // Catch: java.lang.Exception -> L101
            if (r10 != r0) goto Lec
            goto Led
        Lec:
            r3 = r4
        Led:
            r9.b(r3)     // Catch: java.lang.Exception -> L101
            int r0 = com.tkay.expressad.foundation.g.a.cr     // Catch: java.lang.Exception -> L101
            if (r10 != r0) goto Lf5
            goto Lf6
        Lf5:
            r5 = r6
        Lf6:
            r9.c(r5)     // Catch: java.lang.Exception -> L101
            r9.d(r11)     // Catch: java.lang.Exception -> L101
            return
        Lfd:
            r9.a(r2, r3, r4, r11)     // Catch: java.lang.Exception -> L101
            return
        L101:
            r10 = move-exception
            r10.getMessage()
            return
    }

    public final void b() {
            r7 = this;
            java.lang.String r0 = "string"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L4f
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> L4f
            android.content.Context r2 = r7.getContext()     // Catch: java.lang.Exception -> L4f
            java.lang.String r3 = "tkay_cm_dialog_alert_confim_close_warn"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r0)     // Catch: java.lang.Exception -> L4f
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Exception -> L4f
            android.content.Context r3 = r7.getContext()     // Catch: java.lang.Exception -> L4f
            java.lang.String r4 = "tkay_cm_dialog_alert_confim_close_desc"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r0)     // Catch: java.lang.Exception -> L4f
            java.lang.String r3 = r1.getString(r3)     // Catch: java.lang.Exception -> L4f
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Exception -> L4f
            java.lang.String r5 = "tkay_cm_dialog_alert_confim_close"
            int r4 = com.tkay.expressad.foundation.h.i.a(r4, r5, r0)     // Catch: java.lang.Exception -> L4f
            java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Exception -> L4f
            android.content.Context r5 = r7.getContext()     // Catch: java.lang.Exception -> L4f
            java.lang.String r6 = "tkay_cm_dialog_alert_cancel_close"
            int r0 = com.tkay.expressad.foundation.h.i.a(r5, r6, r0)     // Catch: java.lang.Exception -> L4f
            java.lang.String r0 = r1.getString(r0)     // Catch: java.lang.Exception -> L4f
            r7.a(r2)     // Catch: java.lang.Exception -> L4f
            r7.b(r3)     // Catch: java.lang.Exception -> L4f
            r7.c(r4)     // Catch: java.lang.Exception -> L4f
            r7.d(r0)     // Catch: java.lang.Exception -> L4f
            return
        L4f:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public final void show() {
            r4 = this;
            super.show()
            android.view.Window r0 = r4.getWindow()     // Catch: java.lang.Exception -> L61
            r1 = 8
            r0.setFlags(r1, r1)     // Catch: java.lang.Exception -> L61
            super.show()     // Catch: java.lang.Exception -> L61
            android.view.Window r0 = r4.getWindow()     // Catch: java.lang.Exception -> L61
            if (r0 == 0) goto L59
            r2 = 1024(0x400, float:1.435E-42)
            r0.setFlags(r2, r2)     // Catch: java.lang.Exception -> L61
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L61
            r3 = 19
            if (r2 < r3) goto L2f
            r2 = 67108864(0x4000000, float:1.5046328E-36)
            r0.addFlags(r2)     // Catch: java.lang.Exception -> L61
            android.view.View r2 = r0.getDecorView()     // Catch: java.lang.Exception -> L61
            r3 = 4098(0x1002, float:5.743E-42)
            r2.setSystemUiVisibility(r3)     // Catch: java.lang.Exception -> L61
            goto L37
        L2f:
            android.view.View r2 = r0.getDecorView()     // Catch: java.lang.Exception -> L61
            r3 = 2
            r2.setSystemUiVisibility(r3)     // Catch: java.lang.Exception -> L61
        L37:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L61
            r3 = 28
            if (r2 < r3) goto L47
            android.view.WindowManager$LayoutParams r2 = r0.getAttributes()     // Catch: java.lang.Exception -> L61
            r3 = 1
            r2.layoutInDisplayCutoutMode = r3     // Catch: java.lang.Exception -> L61
            r0.setAttributes(r2)     // Catch: java.lang.Exception -> L61
        L47:
            android.graphics.drawable.ColorDrawable r2 = new android.graphics.drawable.ColorDrawable     // Catch: java.lang.Exception -> L61
            r3 = 0
            r2.<init>(r3)     // Catch: java.lang.Exception -> L61
            r0.setBackgroundDrawable(r2)     // Catch: java.lang.Exception -> L61
            r2 = -1
            r0.setLayout(r2, r2)     // Catch: java.lang.Exception -> L61
            r2 = 17
            r0.setGravity(r2)     // Catch: java.lang.Exception -> L61
        L59:
            android.view.Window r0 = r4.getWindow()     // Catch: java.lang.Exception -> L61
            r0.clearFlags(r1)     // Catch: java.lang.Exception -> L61
            return
        L61:
            r0 = move-exception
            r0.getMessage()
            super.show()
            return
    }
}
