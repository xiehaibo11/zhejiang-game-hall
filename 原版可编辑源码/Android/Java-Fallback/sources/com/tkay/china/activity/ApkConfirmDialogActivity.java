package com.tkay.china.activity;

public class ApkConfirmDialogActivity extends android.app.Activity {
    public static com.tkay.core.common.f.h a;
    private static com.tkay.core.common.g.a b;
    private android.app.Dialog c;


    final class 2 implements android.view.View.OnClickListener {
        final com.tkay.china.activity.ApkConfirmDialogActivity a;


        2(com.tkay.china.activity.ApkConfirmDialogActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
                com.tkay.china.activity.ApkConfirmDialogActivity$2$1 r0 = new com.tkay.china.activity.ApkConfirmDialogActivity$2$1
                r0.<init>(r1)
                r2.a(r0)
                com.tkay.china.activity.ApkConfirmDialogActivity r2 = r1.a
                r2.finish()
                return
        }
    }

    final class 3 implements android.view.View.OnClickListener {
        final com.tkay.china.activity.ApkConfirmDialogActivity a;


        3(com.tkay.china.activity.ApkConfirmDialogActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
                com.tkay.china.activity.ApkConfirmDialogActivity$3$1 r0 = new com.tkay.china.activity.ApkConfirmDialogActivity$3$1
                r0.<init>(r1)
                r2.a(r0)
                com.tkay.china.activity.ApkConfirmDialogActivity r2 = r1.a
                r2.finish()
                return
        }
    }

    final class 4 implements com.tkay.core.common.res.b.a {
        final java.lang.String a;
        final com.tkay.core.common.ui.component.RoundImageView b;
        final com.tkay.china.activity.ApkConfirmDialogActivity c;

        4(com.tkay.china.activity.ApkConfirmDialogActivity r1, java.lang.String r2, com.tkay.core.common.ui.component.RoundImageView r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void onFail(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }

        @Override
        public final void onSuccess(java.lang.String r2, android.graphics.Bitmap r3) {
                r1 = this;
                java.lang.String r0 = r1.a
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                if (r2 == 0) goto Ld
                com.tkay.core.common.ui.component.RoundImageView r2 = r1.b
                r2.setImageBitmap(r3)
            Ld:
                return
        }
    }

    final class 5 implements android.view.View.OnClickListener {
        final com.tkay.core.common.f.h a;
        final com.tkay.china.activity.ApkConfirmDialogActivity b;

        5(com.tkay.china.activity.ApkConfirmDialogActivity r1, com.tkay.core.common.f.h r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.china.activity.ApkConfirmDialogActivity r2 = r1.b
                com.tkay.core.common.f.h r0 = r1.a
                java.lang.String r0 = r0.I()
                com.tkay.core.common.l.l.a(r2, r0)
                return
        }
    }

    final class 6 implements android.view.View.OnClickListener {
        final com.tkay.core.common.f.h a;
        final com.tkay.china.activity.ApkConfirmDialogActivity b;

        6(com.tkay.china.activity.ApkConfirmDialogActivity r1, com.tkay.core.common.f.h r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.china.activity.ApkConfirmDialogActivity r2 = r1.b
                com.tkay.core.common.f.h r0 = r1.a
                java.lang.String r0 = r0.H()
                com.tkay.core.common.l.l.a(r2, r0)
                return
        }
    }

    final class 7 implements android.view.View.OnClickListener {
        final com.tkay.china.activity.ApkConfirmDialogActivity a;


        7(com.tkay.china.activity.ApkConfirmDialogActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
                com.tkay.china.activity.ApkConfirmDialogActivity$7$1 r0 = new com.tkay.china.activity.ApkConfirmDialogActivity$7$1
                r0.<init>(r1)
                r2.a(r0)
                com.tkay.china.activity.ApkConfirmDialogActivity r2 = r1.a
                r2.finish()
                return
        }
    }

    final class 8 implements android.view.View.OnClickListener {
        final com.tkay.china.activity.ApkConfirmDialogActivity a;


        8(com.tkay.china.activity.ApkConfirmDialogActivity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
                com.tkay.china.activity.ApkConfirmDialogActivity$8$1 r0 = new com.tkay.china.activity.ApkConfirmDialogActivity$8$1
                r0.<init>(r1)
                r2.a(r0)
                com.tkay.china.activity.ApkConfirmDialogActivity r2 = r1.a
                r2.finish()
                return
        }
    }

    public ApkConfirmDialogActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.tkay.core.common.g.a a() {
            com.tkay.core.common.g.a r0 = com.tkay.china.activity.ApkConfirmDialogActivity.b
            return r0
    }

    static com.tkay.core.common.g.a a(com.tkay.core.common.g.a r0) {
            com.tkay.china.activity.ApkConfirmDialogActivity.b = r0
            return r0
    }

    public static void a(android.content.Context r2, com.tkay.core.common.f.h r3, com.tkay.core.common.g.a r4) {
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.china.activity.ApkConfirmDialogActivity$1 r1 = new com.tkay.china.activity.ApkConfirmDialogActivity$1
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }

    private void b() {
            r8 = this;
            java.lang.String r0 = "id"
            java.lang.String r1 = ""
            com.tkay.core.common.f.h r2 = com.tkay.china.activity.ApkConfirmDialogActivity.a     // Catch: java.lang.Throwable -> La1
            boolean r2 = r2 instanceof com.tkay.core.common.f.z     // Catch: java.lang.Throwable -> La1
            if (r2 == 0) goto L12
            com.tkay.core.common.f.h r1 = com.tkay.china.activity.ApkConfirmDialogActivity.a     // Catch: java.lang.Throwable -> La1
            com.tkay.core.common.f.z r1 = (com.tkay.core.common.f.z) r1     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r1.aa()     // Catch: java.lang.Throwable -> La1
        L12:
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> La1
            if (r2 == 0) goto L1e
            com.tkay.core.common.f.h r1 = com.tkay.china.activity.ApkConfirmDialogActivity.a     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r1.r()     // Catch: java.lang.Throwable -> La1
        L1e:
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r8)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = "myoffer_confirm_dialog"
            java.lang.String r4 = "layout"
            int r3 = com.tkay.core.common.l.h.a(r8, r3, r4)     // Catch: java.lang.Throwable -> La1
            r4 = 0
            r5 = 0
            android.view.View r2 = r2.inflate(r3, r4, r5)     // Catch: java.lang.Throwable -> La1
            java.lang.String r3 = "myoffer_confirm_msg"
            int r3 = com.tkay.core.common.l.h.a(r8, r3, r0)     // Catch: java.lang.Throwable -> La1
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> La1
            android.widget.TextView r3 = (android.widget.TextView) r3     // Catch: java.lang.Throwable -> La1
            java.lang.String r4 = "myoffer_confirm_give_up"
            int r4 = com.tkay.core.common.l.h.a(r8, r4, r0)     // Catch: java.lang.Throwable -> La1
            android.view.View r4 = r2.findViewById(r4)     // Catch: java.lang.Throwable -> La1
            android.widget.TextView r4 = (android.widget.TextView) r4     // Catch: java.lang.Throwable -> La1
            java.lang.String r6 = "myoffer_confirm_continue"
            int r0 = com.tkay.core.common.l.h.a(r8, r6, r0)     // Catch: java.lang.Throwable -> La1
            android.view.View r0 = r2.findViewById(r0)     // Catch: java.lang.Throwable -> La1
            android.widget.TextView r0 = (android.widget.TextView) r0     // Catch: java.lang.Throwable -> La1
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La1
            java.lang.String r7 = "立即下载\""
            r6.<init>(r7)     // Catch: java.lang.Throwable -> La1
            r6.append(r1)     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = "\"?"
            r6.append(r1)     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> La1
            r3.setText(r1)     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = "取 消"
            r4.setText(r1)     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = "确 定"
            r0.setText(r1)     // Catch: java.lang.Throwable -> La1
            com.tkay.china.activity.ApkConfirmDialogActivity$2 r1 = new com.tkay.china.activity.ApkConfirmDialogActivity$2     // Catch: java.lang.Throwable -> La1
            r1.<init>(r8)     // Catch: java.lang.Throwable -> La1
            r4.setOnClickListener(r1)     // Catch: java.lang.Throwable -> La1
            com.tkay.china.activity.ApkConfirmDialogActivity$3 r1 = new com.tkay.china.activity.ApkConfirmDialogActivity$3     // Catch: java.lang.Throwable -> La1
            r1.<init>(r8)     // Catch: java.lang.Throwable -> La1
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> La1
            android.app.Dialog r0 = new android.app.Dialog     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = "style_full_screen_translucent_dialog"
            java.lang.String r3 = "style"
            int r1 = com.tkay.core.common.l.h.a(r8, r1, r3)     // Catch: java.lang.Throwable -> La1
            r0.<init>(r8, r1)     // Catch: java.lang.Throwable -> La1
            r8.c = r0     // Catch: java.lang.Throwable -> La1
            r0.setContentView(r2)     // Catch: java.lang.Throwable -> La1
            android.app.Dialog r0 = r8.c     // Catch: java.lang.Throwable -> La1
            r0.setCancelable(r5)     // Catch: java.lang.Throwable -> La1
            android.app.Dialog r0 = r8.c     // Catch: java.lang.Throwable -> La1
            r0.show()     // Catch: java.lang.Throwable -> La1
            return
        La1:
            r8.finish()
            return
    }

    private void c() {
            r19 = this;
            r0 = r19
            java.lang.String r1 = "confirm_dialog_privacy_agreement"
            java.lang.String r2 = "string"
            java.lang.String r3 = "id"
            com.tkay.core.common.f.h r4 = com.tkay.china.activity.ApkConfirmDialogActivity.a     // Catch: java.lang.Throwable -> L1e2
            android.view.LayoutInflater r5 = android.view.LayoutInflater.from(r19)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r6 = "confirm"
            java.lang.String r7 = "layout"
            int r6 = com.tkay.core.common.l.h.a(r0, r6, r7)     // Catch: java.lang.Throwable -> L1e2
            r7 = 0
            r8 = 0
            android.view.View r5 = r5.inflate(r6, r7, r8)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r6 = "confirm_dialog_icon"
            int r6 = com.tkay.core.common.l.h.a(r0, r6, r3)     // Catch: java.lang.Throwable -> L1e2
            android.view.View r6 = r5.findViewById(r6)     // Catch: java.lang.Throwable -> L1e2
            com.tkay.core.common.ui.component.RoundImageView r6 = (com.tkay.core.common.ui.component.RoundImageView) r6     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r7 = "confirm_dialog_title"
            int r7 = com.tkay.core.common.l.h.a(r0, r7, r3)     // Catch: java.lang.Throwable -> L1e2
            android.view.View r7 = r5.findViewById(r7)     // Catch: java.lang.Throwable -> L1e2
            android.widget.TextView r7 = (android.widget.TextView) r7     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r9 = "confirm_dialog_version_name"
            int r9 = com.tkay.core.common.l.h.a(r0, r9, r3)     // Catch: java.lang.Throwable -> L1e2
            android.view.View r9 = r5.findViewById(r9)     // Catch: java.lang.Throwable -> L1e2
            android.widget.TextView r9 = (android.widget.TextView) r9     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r10 = "confirm_dialog_publisher_name"
            int r10 = com.tkay.core.common.l.h.a(r0, r10, r3)     // Catch: java.lang.Throwable -> L1e2
            android.view.View r10 = r5.findViewById(r10)     // Catch: java.lang.Throwable -> L1e2
            android.widget.TextView r10 = (android.widget.TextView) r10     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r11 = "confirm_dialog_permission_manage"
            int r11 = com.tkay.core.common.l.h.a(r0, r11, r3)     // Catch: java.lang.Throwable -> L1e2
            android.view.View r11 = r5.findViewById(r11)     // Catch: java.lang.Throwable -> L1e2
            android.widget.TextView r11 = (android.widget.TextView) r11     // Catch: java.lang.Throwable -> L1e2
            int r12 = com.tkay.core.common.l.h.a(r0, r1, r3)     // Catch: java.lang.Throwable -> L1e2
            android.view.View r12 = r5.findViewById(r12)     // Catch: java.lang.Throwable -> L1e2
            android.widget.TextView r12 = (android.widget.TextView) r12     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r13 = "confirm_dialog_download_now"
            int r13 = com.tkay.core.common.l.h.a(r0, r13, r3)     // Catch: java.lang.Throwable -> L1e2
            android.view.View r13 = r5.findViewById(r13)     // Catch: java.lang.Throwable -> L1e2
            android.widget.TextView r13 = (android.widget.TextView) r13     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r14 = "confirm_dialog_give_up"
            int r3 = com.tkay.core.common.l.h.a(r0, r14, r3)     // Catch: java.lang.Throwable -> L1e2
            android.view.View r3 = r5.findViewById(r3)     // Catch: java.lang.Throwable -> L1e2
            android.widget.TextView r3 = (android.widget.TextView) r3     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r14 = r4.t()     // Catch: java.lang.Throwable -> L1e2
            boolean r15 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> L1e2
            r8 = 1
            if (r15 != 0) goto Lad
            r6.setNeedRadiu(r8)     // Catch: java.lang.Throwable -> L1e2
            r15 = 4
            r6.setRadiusInDip(r15)     // Catch: java.lang.Throwable -> L1e2
            android.view.ViewGroup$LayoutParams r15 = r6.getLayoutParams()     // Catch: java.lang.Throwable -> L1e2
            com.tkay.core.common.res.b r8 = com.tkay.core.common.res.b.a(r19)     // Catch: java.lang.Throwable -> L1e2
            r16 = r5
            com.tkay.core.common.res.e r5 = new com.tkay.core.common.res.e     // Catch: java.lang.Throwable -> L1e2
            r17 = r3
            r3 = 1
            r5.<init>(r3, r14)     // Catch: java.lang.Throwable -> L1e2
            int r3 = r15.width     // Catch: java.lang.Throwable -> L1e2
            int r15 = r15.height     // Catch: java.lang.Throwable -> L1e2
            r18 = r13
            com.tkay.china.activity.ApkConfirmDialogActivity$4 r13 = new com.tkay.china.activity.ApkConfirmDialogActivity$4     // Catch: java.lang.Throwable -> L1e2
            r13.<init>(r0, r14, r6)     // Catch: java.lang.Throwable -> L1e2
            r8.a(r5, r3, r15, r13)     // Catch: java.lang.Throwable -> L1e2
            goto Lbf
        Lad:
            r17 = r3
            r16 = r5
            r18 = r13
            android.view.ViewGroup$LayoutParams r3 = r6.getLayoutParams()     // Catch: java.lang.Throwable -> L1e2
            r5 = 0
            r3.width = r5     // Catch: java.lang.Throwable -> L1e2
            r3.height = r5     // Catch: java.lang.Throwable -> L1e2
            r6.setLayoutParams(r3)     // Catch: java.lang.Throwable -> L1e2
        Lbf:
            java.lang.String r3 = ""
            boolean r5 = r4 instanceof com.tkay.core.common.f.z     // Catch: java.lang.Throwable -> L1e2
            if (r5 == 0) goto Lcc
            r3 = r4
            com.tkay.core.common.f.z r3 = (com.tkay.core.common.f.z) r3     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = r3.aa()     // Catch: java.lang.Throwable -> L1e2
        Lcc:
            boolean r5 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1e2
            if (r5 == 0) goto Ld6
            java.lang.String r3 = r4.r()     // Catch: java.lang.Throwable -> L1e2
        Ld6:
            r7.setText(r3)     // Catch: java.lang.Throwable -> L1e2
            android.content.res.Resources r3 = r19.getResources()     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r5 = "confirm_dialog_version"
            int r5 = com.tkay.core.common.l.h.a(r0, r5, r2)     // Catch: java.lang.Throwable -> L1e2
            r6 = 1
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r6 = r4.G()     // Catch: java.lang.Throwable -> L1e2
            r8 = 0
            r7[r8] = r6     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = r3.getString(r5, r7)     // Catch: java.lang.Throwable -> L1e2
            r9.setText(r3)     // Catch: java.lang.Throwable -> L1e2
            android.content.res.Resources r3 = r19.getResources()     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r5 = "confirm_dialog_publisher"
            int r5 = com.tkay.core.common.l.h.a(r0, r5, r2)     // Catch: java.lang.Throwable -> L1e2
            r6 = 1
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r7 = r4.F()     // Catch: java.lang.Throwable -> L1e2
            r8 = 0
            r6[r8] = r7     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = r3.getString(r5, r6)     // Catch: java.lang.Throwable -> L1e2
            r10.setText(r3)     // Catch: java.lang.Throwable -> L1e2
            android.content.res.Resources r3 = r19.getResources()     // Catch: java.lang.Throwable -> L1e2
            int r1 = com.tkay.core.common.l.h.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r1 = r3.getString(r1)     // Catch: java.lang.Throwable -> L1e2
            android.content.res.Resources r3 = r19.getResources()     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r5 = "confirm_dialog_application_permission"
            int r2 = com.tkay.core.common.l.h.a(r0, r5, r2)     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r2 = r3.getString(r2)     // Catch: java.lang.Throwable -> L1e2
            int r3 = r1.length()     // Catch: java.lang.Throwable -> L1e2
            int r2 = r2.length()     // Catch: java.lang.Throwable -> L1e2
            if (r3 != r2) goto L134
            goto L14d
        L134:
            int r2 = r2 - r3
            int r2 = java.lang.Math.abs(r2)     // Catch: java.lang.Throwable -> L1e2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e2
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L1e2
            r5 = 0
        L13f:
            if (r5 >= r2) goto L149
            java.lang.String r1 = " "
            r3.append(r1)     // Catch: java.lang.Throwable -> L1e2
            int r5 = r5 + 1
            goto L13f
        L149:
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L1e2
        L14d:
            r12.setText(r1)     // Catch: java.lang.Throwable -> L1e2
            com.tkay.china.activity.ApkConfirmDialogActivity$5 r1 = new com.tkay.china.activity.ApkConfirmDialogActivity$5     // Catch: java.lang.Throwable -> L1e2
            r1.<init>(r0, r4)     // Catch: java.lang.Throwable -> L1e2
            r11.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L1e2
            com.tkay.china.activity.ApkConfirmDialogActivity$6 r1 = new com.tkay.china.activity.ApkConfirmDialogActivity$6     // Catch: java.lang.Throwable -> L1e2
            r1.<init>(r0, r4)     // Catch: java.lang.Throwable -> L1e2
            r12.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L1e2
            com.tkay.china.activity.ApkConfirmDialogActivity$7 r1 = new com.tkay.china.activity.ApkConfirmDialogActivity$7     // Catch: java.lang.Throwable -> L1e2
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1e2
            r13 = r18
            r13.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L1e2
            com.tkay.china.activity.ApkConfirmDialogActivity$8 r1 = new com.tkay.china.activity.ApkConfirmDialogActivity$8     // Catch: java.lang.Throwable -> L1e2
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1e2
            r3 = r17
            r3.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L1e2
            android.app.Dialog r1 = new android.app.Dialog     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r2 = "style_full_screen_translucent_dialog"
            java.lang.String r3 = "style"
            int r2 = com.tkay.core.common.l.h.a(r0, r2, r3)     // Catch: java.lang.Throwable -> L1e2
            r1.<init>(r0, r2)     // Catch: java.lang.Throwable -> L1e2
            r0.c = r1     // Catch: java.lang.Throwable -> L1e2
            r2 = r16
            r1.setContentView(r2)     // Catch: java.lang.Throwable -> L1e2
            android.app.Dialog r1 = r0.c     // Catch: java.lang.Throwable -> L1e2
            r2 = 0
            r1.setCancelable(r2)     // Catch: java.lang.Throwable -> L1e2
            android.app.Dialog r1 = r0.c     // Catch: java.lang.Throwable -> L1e2
            android.view.Window r1 = r1.getWindow()     // Catch: java.lang.Throwable -> L1e2
            if (r1 == 0) goto L1dc
            android.content.res.Resources r2 = r19.getResources()     // Catch: java.lang.Throwable -> L1e2
            java.lang.String r3 = "confirm_dialog_margin"
            java.lang.String r4 = "dimen"
            int r3 = com.tkay.core.common.l.h.a(r0, r3, r4)     // Catch: java.lang.Throwable -> L1e2
            int r2 = r2.getDimensionPixelSize(r3)     // Catch: java.lang.Throwable -> L1e2
            android.content.res.Resources r3 = r19.getResources()     // Catch: java.lang.Throwable -> L1e2
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()     // Catch: java.lang.Throwable -> L1e2
            int r3 = r3.widthPixels     // Catch: java.lang.Throwable -> L1e2
            android.content.res.Resources r4 = r19.getResources()     // Catch: java.lang.Throwable -> L1e2
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()     // Catch: java.lang.Throwable -> L1e2
            int r4 = r4.heightPixels     // Catch: java.lang.Throwable -> L1e2
            r5 = 1065161841(0x3f7d1471, float:0.98859316)
            if (r3 <= r4) goto L1ce
            int r2 = r2 * 2
            int r4 = r4 - r2
            float r2 = (float) r4     // Catch: java.lang.Throwable -> L1e2
            float r2 = r2 * r5
            double r2 = (double) r2     // Catch: java.lang.Throwable -> L1e2
            double r2 = java.lang.Math.ceil(r2)     // Catch: java.lang.Throwable -> L1e2
            int r2 = (int) r2     // Catch: java.lang.Throwable -> L1e2
            r1.setLayout(r2, r4)     // Catch: java.lang.Throwable -> L1e2
            goto L1dc
        L1ce:
            int r2 = r2 * 2
            int r3 = r3 - r2
            float r2 = (float) r3     // Catch: java.lang.Throwable -> L1e2
            float r2 = r2 / r5
            double r4 = (double) r2     // Catch: java.lang.Throwable -> L1e2
            double r4 = java.lang.Math.ceil(r4)     // Catch: java.lang.Throwable -> L1e2
            int r2 = (int) r4     // Catch: java.lang.Throwable -> L1e2
            r1.setLayout(r3, r2)     // Catch: java.lang.Throwable -> L1e2
        L1dc:
            android.app.Dialog r1 = r0.c     // Catch: java.lang.Throwable -> L1e2
            r1.show()     // Catch: java.lang.Throwable -> L1e2
            return
        L1e2:
            r19.finish()
            return
    }

    @Override
    public void onCreate(android.os.Bundle r23) {
            r22 = this;
            r0 = r22
            java.lang.String r1 = "confirm_dialog_privacy_agreement"
            java.lang.String r2 = "string"
            super.onCreate(r23)
            com.tkay.core.common.f.h r3 = com.tkay.china.activity.ApkConfirmDialogActivity.a
            if (r3 != 0) goto L11
            r22.finish()
            return
        L11:
            java.lang.String r3 = r3.r()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            r5 = 0
            if (r3 == 0) goto L31
            com.tkay.core.common.f.h r3 = com.tkay.china.activity.ApkConfirmDialogActivity.a
            boolean r6 = r3 instanceof com.tkay.core.common.f.z
            if (r6 == 0) goto L2f
            com.tkay.core.common.f.z r3 = (com.tkay.core.common.f.z) r3
            java.lang.String r3 = r3.aa()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L2f
            goto L31
        L2f:
            r3 = r5
            goto L32
        L31:
            r3 = 1
        L32:
            java.lang.String r6 = "style"
            java.lang.String r7 = "style_full_screen_translucent_dialog"
            r8 = 0
            java.lang.String r9 = "layout"
            java.lang.String r10 = ""
            java.lang.String r11 = "id"
            if (r3 == 0) goto L254
            com.tkay.core.common.f.h r3 = com.tkay.china.activity.ApkConfirmDialogActivity.a
            java.lang.String r3 = r3.G()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L254
            com.tkay.core.common.f.h r3 = com.tkay.china.activity.ApkConfirmDialogActivity.a
            java.lang.String r3 = r3.F()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L254
            com.tkay.core.common.f.h r3 = com.tkay.china.activity.ApkConfirmDialogActivity.a
            java.lang.String r3 = r3.H()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L254
            com.tkay.core.common.f.h r3 = com.tkay.china.activity.ApkConfirmDialogActivity.a
            java.lang.String r3 = r3.I()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L254
            com.tkay.core.common.f.h r3 = com.tkay.china.activity.ApkConfirmDialogActivity.a     // Catch: java.lang.Throwable -> L250
            android.view.LayoutInflater r12 = android.view.LayoutInflater.from(r22)     // Catch: java.lang.Throwable -> L250
            java.lang.String r13 = "confirm"
            int r9 = com.tkay.core.common.l.h.a(r0, r13, r9)     // Catch: java.lang.Throwable -> L250
            android.view.View r8 = r12.inflate(r9, r8, r5)     // Catch: java.lang.Throwable -> L250
            java.lang.String r9 = "confirm_dialog_icon"
            int r9 = com.tkay.core.common.l.h.a(r0, r9, r11)     // Catch: java.lang.Throwable -> L250
            android.view.View r9 = r8.findViewById(r9)     // Catch: java.lang.Throwable -> L250
            com.tkay.core.common.ui.component.RoundImageView r9 = (com.tkay.core.common.ui.component.RoundImageView) r9     // Catch: java.lang.Throwable -> L250
            java.lang.String r12 = "confirm_dialog_title"
            int r12 = com.tkay.core.common.l.h.a(r0, r12, r11)     // Catch: java.lang.Throwable -> L250
            android.view.View r12 = r8.findViewById(r12)     // Catch: java.lang.Throwable -> L250
            android.widget.TextView r12 = (android.widget.TextView) r12     // Catch: java.lang.Throwable -> L250
            java.lang.String r13 = "confirm_dialog_version_name"
            int r13 = com.tkay.core.common.l.h.a(r0, r13, r11)     // Catch: java.lang.Throwable -> L250
            android.view.View r13 = r8.findViewById(r13)     // Catch: java.lang.Throwable -> L250
            android.widget.TextView r13 = (android.widget.TextView) r13     // Catch: java.lang.Throwable -> L250
            java.lang.String r14 = "confirm_dialog_publisher_name"
            int r14 = com.tkay.core.common.l.h.a(r0, r14, r11)     // Catch: java.lang.Throwable -> L250
            android.view.View r14 = r8.findViewById(r14)     // Catch: java.lang.Throwable -> L250
            android.widget.TextView r14 = (android.widget.TextView) r14     // Catch: java.lang.Throwable -> L250
            java.lang.String r15 = "confirm_dialog_permission_manage"
            int r15 = com.tkay.core.common.l.h.a(r0, r15, r11)     // Catch: java.lang.Throwable -> L250
            android.view.View r15 = r8.findViewById(r15)     // Catch: java.lang.Throwable -> L250
            android.widget.TextView r15 = (android.widget.TextView) r15     // Catch: java.lang.Throwable -> L250
            int r5 = com.tkay.core.common.l.h.a(r0, r1, r11)     // Catch: java.lang.Throwable -> L250
            android.view.View r5 = r8.findViewById(r5)     // Catch: java.lang.Throwable -> L250
            android.widget.TextView r5 = (android.widget.TextView) r5     // Catch: java.lang.Throwable -> L250
            java.lang.String r4 = "confirm_dialog_download_now"
            int r4 = com.tkay.core.common.l.h.a(r0, r4, r11)     // Catch: java.lang.Throwable -> L250
            android.view.View r4 = r8.findViewById(r4)     // Catch: java.lang.Throwable -> L250
            android.widget.TextView r4 = (android.widget.TextView) r4     // Catch: java.lang.Throwable -> L250
            r16 = r10
            java.lang.String r10 = "confirm_dialog_give_up"
            int r10 = com.tkay.core.common.l.h.a(r0, r10, r11)     // Catch: java.lang.Throwable -> L250
            android.view.View r10 = r8.findViewById(r10)     // Catch: java.lang.Throwable -> L250
            android.widget.TextView r10 = (android.widget.TextView) r10     // Catch: java.lang.Throwable -> L250
            java.lang.String r11 = r3.t()     // Catch: java.lang.Throwable -> L250
            boolean r17 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L250
            if (r17 != 0) goto L116
            r17 = r8
            r8 = 1
            r9.setNeedRadiu(r8)     // Catch: java.lang.Throwable -> L250
            r8 = 4
            r9.setRadiusInDip(r8)     // Catch: java.lang.Throwable -> L250
            android.view.ViewGroup$LayoutParams r8 = r9.getLayoutParams()     // Catch: java.lang.Throwable -> L250
            r18 = r6
            com.tkay.core.common.res.b r6 = com.tkay.core.common.res.b.a(r22)     // Catch: java.lang.Throwable -> L250
            r19 = r7
            com.tkay.core.common.res.e r7 = new com.tkay.core.common.res.e     // Catch: java.lang.Throwable -> L250
            r20 = r10
            r10 = 1
            r7.<init>(r10, r11)     // Catch: java.lang.Throwable -> L250
            int r10 = r8.width     // Catch: java.lang.Throwable -> L250
            int r8 = r8.height     // Catch: java.lang.Throwable -> L250
            r21 = r4
            com.tkay.china.activity.ApkConfirmDialogActivity$4 r4 = new com.tkay.china.activity.ApkConfirmDialogActivity$4     // Catch: java.lang.Throwable -> L250
            r4.<init>(r0, r11, r9)     // Catch: java.lang.Throwable -> L250
            r6.a(r7, r10, r8, r4)     // Catch: java.lang.Throwable -> L250
            goto L12c
        L116:
            r21 = r4
            r18 = r6
            r19 = r7
            r17 = r8
            r20 = r10
            android.view.ViewGroup$LayoutParams r4 = r9.getLayoutParams()     // Catch: java.lang.Throwable -> L250
            r6 = 0
            r4.width = r6     // Catch: java.lang.Throwable -> L250
            r4.height = r6     // Catch: java.lang.Throwable -> L250
            r9.setLayoutParams(r4)     // Catch: java.lang.Throwable -> L250
        L12c:
            boolean r4 = r3 instanceof com.tkay.core.common.f.z     // Catch: java.lang.Throwable -> L250
            if (r4 == 0) goto L138
            r4 = r3
            com.tkay.core.common.f.z r4 = (com.tkay.core.common.f.z) r4     // Catch: java.lang.Throwable -> L250
            java.lang.String r10 = r4.aa()     // Catch: java.lang.Throwable -> L250
            goto L13a
        L138:
            r10 = r16
        L13a:
            boolean r4 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L250
            if (r4 == 0) goto L144
            java.lang.String r10 = r3.r()     // Catch: java.lang.Throwable -> L250
        L144:
            r12.setText(r10)     // Catch: java.lang.Throwable -> L250
            android.content.res.Resources r4 = r22.getResources()     // Catch: java.lang.Throwable -> L250
            java.lang.String r6 = "confirm_dialog_version"
            int r6 = com.tkay.core.common.l.h.a(r0, r6, r2)     // Catch: java.lang.Throwable -> L250
            r7 = 1
            java.lang.Object[] r8 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L250
            java.lang.String r7 = r3.G()     // Catch: java.lang.Throwable -> L250
            r9 = 0
            r8[r9] = r7     // Catch: java.lang.Throwable -> L250
            java.lang.String r4 = r4.getString(r6, r8)     // Catch: java.lang.Throwable -> L250
            r13.setText(r4)     // Catch: java.lang.Throwable -> L250
            android.content.res.Resources r4 = r22.getResources()     // Catch: java.lang.Throwable -> L250
            java.lang.String r6 = "confirm_dialog_publisher"
            int r6 = com.tkay.core.common.l.h.a(r0, r6, r2)     // Catch: java.lang.Throwable -> L250
            r7 = 1
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Throwable -> L250
            java.lang.String r8 = r3.F()     // Catch: java.lang.Throwable -> L250
            r9 = 0
            r7[r9] = r8     // Catch: java.lang.Throwable -> L250
            java.lang.String r4 = r4.getString(r6, r7)     // Catch: java.lang.Throwable -> L250
            r14.setText(r4)     // Catch: java.lang.Throwable -> L250
            android.content.res.Resources r4 = r22.getResources()     // Catch: java.lang.Throwable -> L250
            int r1 = com.tkay.core.common.l.h.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L250
            java.lang.String r1 = r4.getString(r1)     // Catch: java.lang.Throwable -> L250
            android.content.res.Resources r4 = r22.getResources()     // Catch: java.lang.Throwable -> L250
            java.lang.String r6 = "confirm_dialog_application_permission"
            int r2 = com.tkay.core.common.l.h.a(r0, r6, r2)     // Catch: java.lang.Throwable -> L250
            java.lang.String r2 = r4.getString(r2)     // Catch: java.lang.Throwable -> L250
            int r4 = r1.length()     // Catch: java.lang.Throwable -> L250
            int r2 = r2.length()     // Catch: java.lang.Throwable -> L250
            if (r4 != r2) goto L1a2
            goto L1bb
        L1a2:
            int r2 = r2 - r4
            int r2 = java.lang.Math.abs(r2)     // Catch: java.lang.Throwable -> L250
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L250
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L250
            r1 = 0
        L1ad:
            if (r1 >= r2) goto L1b7
            java.lang.String r6 = " "
            r4.append(r6)     // Catch: java.lang.Throwable -> L250
            int r1 = r1 + 1
            goto L1ad
        L1b7:
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L250
        L1bb:
            r5.setText(r1)     // Catch: java.lang.Throwable -> L250
            com.tkay.china.activity.ApkConfirmDialogActivity$5 r1 = new com.tkay.china.activity.ApkConfirmDialogActivity$5     // Catch: java.lang.Throwable -> L250
            r1.<init>(r0, r3)     // Catch: java.lang.Throwable -> L250
            r15.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L250
            com.tkay.china.activity.ApkConfirmDialogActivity$6 r1 = new com.tkay.china.activity.ApkConfirmDialogActivity$6     // Catch: java.lang.Throwable -> L250
            r1.<init>(r0, r3)     // Catch: java.lang.Throwable -> L250
            r5.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L250
            com.tkay.china.activity.ApkConfirmDialogActivity$7 r1 = new com.tkay.china.activity.ApkConfirmDialogActivity$7     // Catch: java.lang.Throwable -> L250
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L250
            r4 = r21
            r4.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L250
            com.tkay.china.activity.ApkConfirmDialogActivity$8 r1 = new com.tkay.china.activity.ApkConfirmDialogActivity$8     // Catch: java.lang.Throwable -> L250
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L250
            r10 = r20
            r10.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L250
            android.app.Dialog r1 = new android.app.Dialog     // Catch: java.lang.Throwable -> L250
            r2 = r18
            r3 = r19
            int r2 = com.tkay.core.common.l.h.a(r0, r3, r2)     // Catch: java.lang.Throwable -> L250
            r1.<init>(r0, r2)     // Catch: java.lang.Throwable -> L250
            r0.c = r1     // Catch: java.lang.Throwable -> L250
            r2 = r17
            r1.setContentView(r2)     // Catch: java.lang.Throwable -> L250
            android.app.Dialog r1 = r0.c     // Catch: java.lang.Throwable -> L250
            r2 = 0
            r1.setCancelable(r2)     // Catch: java.lang.Throwable -> L250
            android.app.Dialog r1 = r0.c     // Catch: java.lang.Throwable -> L250
            android.view.Window r1 = r1.getWindow()     // Catch: java.lang.Throwable -> L250
            if (r1 == 0) goto L24a
            android.content.res.Resources r2 = r22.getResources()     // Catch: java.lang.Throwable -> L250
            java.lang.String r3 = "confirm_dialog_margin"
            java.lang.String r4 = "dimen"
            int r3 = com.tkay.core.common.l.h.a(r0, r3, r4)     // Catch: java.lang.Throwable -> L250
            int r2 = r2.getDimensionPixelSize(r3)     // Catch: java.lang.Throwable -> L250
            android.content.res.Resources r3 = r22.getResources()     // Catch: java.lang.Throwable -> L250
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()     // Catch: java.lang.Throwable -> L250
            int r3 = r3.widthPixels     // Catch: java.lang.Throwable -> L250
            android.content.res.Resources r4 = r22.getResources()     // Catch: java.lang.Throwable -> L250
            android.util.DisplayMetrics r4 = r4.getDisplayMetrics()     // Catch: java.lang.Throwable -> L250
            int r4 = r4.heightPixels     // Catch: java.lang.Throwable -> L250
            r5 = 1065161841(0x3f7d1471, float:0.98859316)
            if (r3 <= r4) goto L23c
            int r2 = r2 * 2
            int r4 = r4 - r2
            float r2 = (float) r4     // Catch: java.lang.Throwable -> L250
            float r2 = r2 * r5
            double r2 = (double) r2     // Catch: java.lang.Throwable -> L250
            double r2 = java.lang.Math.ceil(r2)     // Catch: java.lang.Throwable -> L250
            int r2 = (int) r2     // Catch: java.lang.Throwable -> L250
            r1.setLayout(r2, r4)     // Catch: java.lang.Throwable -> L250
            goto L24a
        L23c:
            int r2 = r2 * 2
            int r3 = r3 - r2
            float r2 = (float) r3     // Catch: java.lang.Throwable -> L250
            float r2 = r2 / r5
            double r4 = (double) r2     // Catch: java.lang.Throwable -> L250
            double r4 = java.lang.Math.ceil(r4)     // Catch: java.lang.Throwable -> L250
            int r2 = (int) r4     // Catch: java.lang.Throwable -> L250
            r1.setLayout(r3, r2)     // Catch: java.lang.Throwable -> L250
        L24a:
            android.app.Dialog r1 = r0.c     // Catch: java.lang.Throwable -> L250
            r1.show()     // Catch: java.lang.Throwable -> L250
            return
        L250:
            r22.finish()
            return
        L254:
            r2 = r6
            r3 = r7
            r16 = r10
            com.tkay.core.common.f.h r1 = com.tkay.china.activity.ApkConfirmDialogActivity.a     // Catch: java.lang.Throwable -> L2f2
            boolean r1 = r1 instanceof com.tkay.core.common.f.z     // Catch: java.lang.Throwable -> L2f2
            if (r1 == 0) goto L267
            com.tkay.core.common.f.h r1 = com.tkay.china.activity.ApkConfirmDialogActivity.a     // Catch: java.lang.Throwable -> L2f2
            com.tkay.core.common.f.z r1 = (com.tkay.core.common.f.z) r1     // Catch: java.lang.Throwable -> L2f2
            java.lang.String r10 = r1.aa()     // Catch: java.lang.Throwable -> L2f2
            goto L269
        L267:
            r10 = r16
        L269:
            boolean r1 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L2f2
            if (r1 == 0) goto L275
            com.tkay.core.common.f.h r1 = com.tkay.china.activity.ApkConfirmDialogActivity.a     // Catch: java.lang.Throwable -> L2f2
            java.lang.String r10 = r1.r()     // Catch: java.lang.Throwable -> L2f2
        L275:
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r22)     // Catch: java.lang.Throwable -> L2f2
            java.lang.String r4 = "myoffer_confirm_dialog"
            int r4 = com.tkay.core.common.l.h.a(r0, r4, r9)     // Catch: java.lang.Throwable -> L2f2
            r5 = 0
            android.view.View r1 = r1.inflate(r4, r8, r5)     // Catch: java.lang.Throwable -> L2f2
            java.lang.String r4 = "myoffer_confirm_msg"
            int r4 = com.tkay.core.common.l.h.a(r0, r4, r11)     // Catch: java.lang.Throwable -> L2f2
            android.view.View r4 = r1.findViewById(r4)     // Catch: java.lang.Throwable -> L2f2
            android.widget.TextView r4 = (android.widget.TextView) r4     // Catch: java.lang.Throwable -> L2f2
            java.lang.String r5 = "myoffer_confirm_give_up"
            int r5 = com.tkay.core.common.l.h.a(r0, r5, r11)     // Catch: java.lang.Throwable -> L2f2
            android.view.View r5 = r1.findViewById(r5)     // Catch: java.lang.Throwable -> L2f2
            android.widget.TextView r5 = (android.widget.TextView) r5     // Catch: java.lang.Throwable -> L2f2
            java.lang.String r6 = "myoffer_confirm_continue"
            int r6 = com.tkay.core.common.l.h.a(r0, r6, r11)     // Catch: java.lang.Throwable -> L2f2
            android.view.View r6 = r1.findViewById(r6)     // Catch: java.lang.Throwable -> L2f2
            android.widget.TextView r6 = (android.widget.TextView) r6     // Catch: java.lang.Throwable -> L2f2
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2f2
            java.lang.String r8 = "立即下载\""
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L2f2
            r7.append(r10)     // Catch: java.lang.Throwable -> L2f2
            java.lang.String r8 = "\"?"
            r7.append(r8)     // Catch: java.lang.Throwable -> L2f2
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L2f2
            r4.setText(r7)     // Catch: java.lang.Throwable -> L2f2
            java.lang.String r4 = "取 消"
            r5.setText(r4)     // Catch: java.lang.Throwable -> L2f2
            java.lang.String r4 = "确 定"
            r6.setText(r4)     // Catch: java.lang.Throwable -> L2f2
            com.tkay.china.activity.ApkConfirmDialogActivity$2 r4 = new com.tkay.china.activity.ApkConfirmDialogActivity$2     // Catch: java.lang.Throwable -> L2f2
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L2f2
            r5.setOnClickListener(r4)     // Catch: java.lang.Throwable -> L2f2
            com.tkay.china.activity.ApkConfirmDialogActivity$3 r4 = new com.tkay.china.activity.ApkConfirmDialogActivity$3     // Catch: java.lang.Throwable -> L2f2
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L2f2
            r6.setOnClickListener(r4)     // Catch: java.lang.Throwable -> L2f2
            android.app.Dialog r4 = new android.app.Dialog     // Catch: java.lang.Throwable -> L2f2
            int r2 = com.tkay.core.common.l.h.a(r0, r3, r2)     // Catch: java.lang.Throwable -> L2f2
            r4.<init>(r0, r2)     // Catch: java.lang.Throwable -> L2f2
            r0.c = r4     // Catch: java.lang.Throwable -> L2f2
            r4.setContentView(r1)     // Catch: java.lang.Throwable -> L2f2
            android.app.Dialog r1 = r0.c     // Catch: java.lang.Throwable -> L2f2
            r2 = 0
            r1.setCancelable(r2)     // Catch: java.lang.Throwable -> L2f2
            android.app.Dialog r1 = r0.c     // Catch: java.lang.Throwable -> L2f2
            r1.show()     // Catch: java.lang.Throwable -> L2f2
            return
        L2f2:
            r22.finish()
            return
    }

    @Override
    protected void onDestroy() {
            r2 = this;
            r0 = 0
            com.tkay.core.common.l.u.a(r0)
            android.app.Dialog r0 = r2.c
            r1 = 0
            if (r0 == 0) goto Le
            r0.dismiss()
            r2.c = r1
        Le:
            com.tkay.china.activity.ApkConfirmDialogActivity.a = r1
            com.tkay.china.activity.ApkConfirmDialogActivity.b = r1
            super.onDestroy()
            return
    }

    @Override
    public boolean onKeyDown(int r2, android.view.KeyEvent r3) {
            r1 = this;
            r0 = 4
            if (r0 != r2) goto L5
            r2 = 1
            return r2
        L5:
            boolean r2 = super.onKeyDown(r2, r3)
            return r2
    }

    @Override
    protected void onResume() {
            r1 = this;
            super.onResume()
            r0 = 1
            com.tkay.core.common.l.u.a(r0)
            return
    }
}
