package com.huawei.updatesdk.b.i;

public class a {
    private com.huawei.updatesdk.b.i.b a;
    private android.content.Context b;
    private java.lang.String c;
    private java.lang.CharSequence d;
    private android.app.AlertDialog e;
    private android.app.AlertDialog.Builder f;
    private android.content.DialogInterface.OnShowListener g;
    private android.content.DialogInterface.OnDismissListener h;

    class a implements android.content.DialogInterface.OnShowListener {
        final com.huawei.updatesdk.b.i.a a;

        class a implements android.view.View.OnClickListener {
            final com.huawei.updatesdk.b.i.a.a a;

            a(com.huawei.updatesdk.b.i.a.a r1) {
                    r0 = this;
                    r0.a = r1
                    r0.<init>()
                    return
            }

            @Override
            public void onClick(android.view.View r1) {
                    r0 = this;
                    com.huawei.updatesdk.b.i.a$a r1 = r0.a
                    com.huawei.updatesdk.b.i.a r1 = r1.a
                    com.huawei.updatesdk.b.i.b r1 = com.huawei.updatesdk.b.i.a.a(r1)
                    if (r1 == 0) goto L15
                    com.huawei.updatesdk.b.i.a$a r1 = r0.a
                    com.huawei.updatesdk.b.i.a r1 = r1.a
                    com.huawei.updatesdk.b.i.b r1 = com.huawei.updatesdk.b.i.a.a(r1)
                    r1.a()
                L15:
                    return
            }
        }

        class b implements android.view.View.OnClickListener {
            final com.huawei.updatesdk.b.i.a.a a;

            b(com.huawei.updatesdk.b.i.a.a r1) {
                    r0 = this;
                    r0.a = r1
                    r0.<init>()
                    return
            }

            @Override
            public void onClick(android.view.View r1) {
                    r0 = this;
                    com.huawei.updatesdk.b.i.a$a r1 = r0.a
                    com.huawei.updatesdk.b.i.a r1 = r1.a
                    com.huawei.updatesdk.b.i.b r1 = com.huawei.updatesdk.b.i.a.a(r1)
                    if (r1 == 0) goto L15
                    com.huawei.updatesdk.b.i.a$a r1 = r0.a
                    com.huawei.updatesdk.b.i.a r1 = r1.a
                    com.huawei.updatesdk.b.i.b r1 = com.huawei.updatesdk.b.i.a.a(r1)
                    r1.b()
                L15:
                    return
            }
        }

        a(com.huawei.updatesdk.b.i.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onShow(android.content.DialogInterface r4) {
                r3 = this;
                r0 = r4
                android.app.AlertDialog r0 = (android.app.AlertDialog) r0
                r1 = -1
                android.widget.Button r1 = r0.getButton(r1)
                com.huawei.updatesdk.b.i.a$a$a r2 = new com.huawei.updatesdk.b.i.a$a$a
                r2.<init>(r3)
                r1.setOnClickListener(r2)
                r1 = -2
                android.widget.Button r0 = r0.getButton(r1)
                if (r0 == 0) goto L1f
                com.huawei.updatesdk.b.i.a$a$b r1 = new com.huawei.updatesdk.b.i.a$a$b
                r1.<init>(r3)
                r0.setOnClickListener(r1)
            L1f:
                com.huawei.updatesdk.b.i.a r0 = r3.a
                android.content.DialogInterface$OnShowListener r0 = com.huawei.updatesdk.b.i.a.b(r0)
                if (r0 == 0) goto L30
                com.huawei.updatesdk.b.i.a r0 = r3.a
                android.content.DialogInterface$OnShowListener r0 = com.huawei.updatesdk.b.i.a.b(r0)
                r0.onShow(r4)
            L30:
                return
        }
    }

    class b implements android.content.DialogInterface.OnDismissListener {
        final com.huawei.updatesdk.b.i.a a;

        b(com.huawei.updatesdk.b.i.a r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void onDismiss(android.content.DialogInterface r2) {
                r1 = this;
                com.huawei.updatesdk.b.i.a r0 = r1.a
                android.content.DialogInterface$OnDismissListener r0 = com.huawei.updatesdk.b.i.a.c(r0)
                if (r0 == 0) goto L11
                com.huawei.updatesdk.b.i.a r0 = r1.a
                android.content.DialogInterface$OnDismissListener r0 = com.huawei.updatesdk.b.i.a.c(r0)
                r0.onDismiss(r2)
            L11:
                return
        }
    }

    public enum c extends java.lang.Enum<com.huawei.updatesdk.b.i.a.c> {
        public static final com.huawei.updatesdk.b.i.a.c a = null;
        public static final com.huawei.updatesdk.b.i.a.c b = null;
        private static final com.huawei.updatesdk.b.i.a.c[] c = null;

        static {
                com.huawei.updatesdk.b.i.a$c r0 = new com.huawei.updatesdk.b.i.a$c
                r1 = 0
                java.lang.String r2 = "CONFIRM"
                r0.<init>(r2, r1)
                com.huawei.updatesdk.b.i.a.c.a = r0
                com.huawei.updatesdk.b.i.a$c r0 = new com.huawei.updatesdk.b.i.a$c
                r2 = 1
                java.lang.String r3 = "CANCEL"
                r0.<init>(r3, r2)
                com.huawei.updatesdk.b.i.a.c.b = r0
                r3 = 2
                com.huawei.updatesdk.b.i.a$c[] r3 = new com.huawei.updatesdk.b.i.a.c[r3]
                com.huawei.updatesdk.b.i.a$c r4 = com.huawei.updatesdk.b.i.a.c.a
                r3[r1] = r4
                r3[r2] = r0
                com.huawei.updatesdk.b.i.a.c.c = r3
                return
        }

        c(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.huawei.updatesdk.b.i.a.c valueOf(java.lang.String r1) {
                java.lang.Class<com.huawei.updatesdk.b.i.a$c> r0 = com.huawei.updatesdk.b.i.a.c.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.huawei.updatesdk.b.i.a$c r1 = (com.huawei.updatesdk.b.i.a.c) r1
                return r1
        }

        public static com.huawei.updatesdk.b.i.a.c[] values() {
                com.huawei.updatesdk.b.i.a$c[] r0 = com.huawei.updatesdk.b.i.a.c.c
                java.lang.Object r0 = r0.clone()
                com.huawei.updatesdk.b.i.a$c[] r0 = (com.huawei.updatesdk.b.i.a.c[]) r0
                return r0
        }
    }

    public interface d {
        void a();
    }

    protected a(android.content.Context r2, java.lang.String r3, java.lang.CharSequence r4) {
            r1 = this;
            r1.<init>()
            r1.b = r2
            r1.c = r3
            r1.d = r4
            boolean r3 = com.huawei.updatesdk.a.a.d.h.c.i()
            if (r3 == 0) goto L17
            android.app.AlertDialog$Builder r3 = new android.app.AlertDialog$Builder
            r3.<init>(r2)
        L14:
            r1.f = r3
            goto L3f
        L17:
            android.content.res.Resources r3 = r2.getResources()
            android.content.res.Configuration r3 = r3.getConfiguration()
            int r3 = r3.uiMode
            r3 = r3 & 48
            r4 = 32
            if (r3 != r4) goto L36
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 29
            if (r3 < r4) goto L36
            android.app.AlertDialog$Builder r3 = new android.app.AlertDialog$Builder
            r4 = 16974545(0x10302d1, float:2.406292E-38)
            r3.<init>(r2, r4)
            goto L14
        L36:
            android.app.AlertDialog$Builder r3 = new android.app.AlertDialog$Builder
            r4 = 16974546(0x10302d2, float:2.4062923E-38)
            r3.<init>(r2, r4)
            goto L14
        L3f:
            android.app.AlertDialog$Builder r3 = r1.f
            java.lang.String r4 = r1.c
            r3.setTitle(r4)
            android.app.AlertDialog$Builder r3 = r1.f
            java.lang.String r4 = "upsdk_third_app_dl_sure_cancel_download"
            int r4 = com.huawei.updatesdk.b.h.c.c(r2, r4)
            r0 = 0
            r3.setPositiveButton(r4, r0)
            android.app.AlertDialog$Builder r3 = r1.f
            java.lang.String r4 = "upsdk_cancel"
            int r2 = com.huawei.updatesdk.b.h.c.c(r2, r4)
            r3.setNegativeButton(r2, r0)
            android.app.AlertDialog$Builder r2 = r1.f
            java.lang.CharSequence r3 = r1.d
            r2.setMessage(r3)
            return
    }

    public static com.huawei.updatesdk.b.i.a a(android.content.Context r1, java.lang.String r2, java.lang.CharSequence r3) {
            com.huawei.updatesdk.b.i.a r0 = new com.huawei.updatesdk.b.i.a
            r0.<init>(r1, r2, r3)
            return r0
    }

    static com.huawei.updatesdk.b.i.b a(com.huawei.updatesdk.b.i.a r0) {
            com.huawei.updatesdk.b.i.b r0 = r0.a
            return r0
    }

    static android.content.DialogInterface.OnShowListener b(com.huawei.updatesdk.b.i.a r0) {
            android.content.DialogInterface$OnShowListener r0 = r0.g
            return r0
    }

    static android.content.DialogInterface.OnDismissListener c(com.huawei.updatesdk.b.i.a r0) {
            android.content.DialogInterface$OnDismissListener r0 = r0.h
            return r0
    }

    public void a() {
            r2 = this;
            android.app.AlertDialog r0 = r2.e     // Catch: java.lang.IllegalArgumentException -> Ld
            if (r0 == 0) goto L14
            android.app.AlertDialog r0 = r2.e     // Catch: java.lang.IllegalArgumentException -> Ld
            r0.dismiss()     // Catch: java.lang.IllegalArgumentException -> Ld
            r0 = 0
            r2.e = r0     // Catch: java.lang.IllegalArgumentException -> Ld
            goto L14
        Ld:
            java.lang.String r0 = "BaseAlertDialog"
            java.lang.String r1 = "dialog dismiss IllegalArgumentException"
            com.huawei.updatesdk.a.a.a.b(r0, r1)
        L14:
            return
    }

    public void a(android.content.DialogInterface.OnDismissListener r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void a(android.content.DialogInterface.OnKeyListener r2) {
            r1 = this;
            android.app.AlertDialog r0 = r1.e
            if (r0 == 0) goto L7
            r0.setOnKeyListener(r2)
        L7:
            return
    }

    public void a(android.content.DialogInterface.OnShowListener r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void a(android.view.View r3) {
            r2 = this;
            android.app.AlertDialog$Builder r0 = r2.f
            if (r0 == 0) goto L32
            com.huawei.updatesdk.b.h.a r0 = com.huawei.updatesdk.b.h.a.d()
            int r0 = r0.a()
            r1 = 17
            if (r0 < r1) goto L27
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "divider"
            int r0 = com.huawei.updatesdk.b.h.c.a(r0, r1)
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            if (r0 == 0) goto L27
            r1 = 8
            r0.setVisibility(r1)
        L27:
            android.app.AlertDialog$Builder r0 = r2.f
            r1 = 0
            r0.setMessage(r1)
            android.app.AlertDialog$Builder r0 = r2.f
            r0.setView(r3)
        L32:
            return
    }

    public void a(com.huawei.updatesdk.b.i.a.c r3, java.lang.String r4) {
            r2 = this;
            android.app.AlertDialog r0 = r2.e
            if (r0 != 0) goto L5
            return
        L5:
            com.huawei.updatesdk.b.i.a$c r1 = com.huawei.updatesdk.b.i.a.c.a
            if (r3 != r1) goto Lf
            r3 = -1
        La:
            android.widget.Button r3 = r0.getButton(r3)
            goto L16
        Lf:
            com.huawei.updatesdk.b.i.a$c r1 = com.huawei.updatesdk.b.i.a.c.b
            if (r3 != r1) goto L15
            r3 = -2
            goto La
        L15:
            r3 = 0
        L16:
            if (r3 != 0) goto L19
            return
        L19:
            r3.setText(r4)
            r4 = 1
            r3.setAllCaps(r4)
            return
    }

    public void a(com.huawei.updatesdk.b.i.a.d r4) {
            r3 = this;
            android.content.Context r0 = r3.b
            java.lang.String r1 = "BaseAlertDialog"
            if (r0 == 0) goto L8e
            android.app.Activity r0 = (android.app.Activity) r0
            boolean r0 = r0.isFinishing()
            if (r0 == 0) goto L10
            goto L8e
        L10:
            boolean r0 = r3.b()
            if (r0 != 0) goto L5e
            android.app.AlertDialog$Builder r0 = r3.f     // Catch: java.lang.Exception -> L46
            android.app.AlertDialog r0 = r0.create()     // Catch: java.lang.Exception -> L46
            r3.e = r0     // Catch: java.lang.Exception -> L46
            r2 = 0
            r0.setCanceledOnTouchOutside(r2)     // Catch: java.lang.Exception -> L46
            android.app.AlertDialog r0 = r3.e     // Catch: java.lang.Exception -> L46
            com.huawei.updatesdk.b.i.a$a r2 = new com.huawei.updatesdk.b.i.a$a     // Catch: java.lang.Exception -> L46
            r2.<init>(r3)     // Catch: java.lang.Exception -> L46
            r0.setOnShowListener(r2)     // Catch: java.lang.Exception -> L46
            android.app.AlertDialog r0 = r3.e     // Catch: java.lang.Exception -> L46
            com.huawei.updatesdk.b.i.a$b r2 = new com.huawei.updatesdk.b.i.a$b     // Catch: java.lang.Exception -> L46
            r2.<init>(r3)     // Catch: java.lang.Exception -> L46
            r0.setOnDismissListener(r2)     // Catch: java.lang.Exception -> L46
            android.app.AlertDialog r0 = r3.e     // Catch: java.lang.Exception -> L46
            r0.show()     // Catch: java.lang.Exception -> L46
            android.app.AlertDialog r0 = r3.e     // Catch: java.lang.Exception -> L46
            r2 = -1
            android.widget.Button r0 = r0.getButton(r2)     // Catch: java.lang.Exception -> L46
            r0.requestFocus()     // Catch: java.lang.Exception -> L46
            goto L8d
        L46:
            r0 = move-exception
            if (r4 == 0) goto L4c
            r4.a()
        L4c:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "show dlg error, e: "
            r4.append(r2)
            java.lang.String r0 = r0.toString()
            r4.append(r0)
            goto L86
        L5e:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "show dlg error, mContext = "
            r4.append(r0)
            android.content.Context r0 = r3.b
            r4.append(r0)
            java.lang.String r0 = ", mContext.isFinishing is "
            r4.append(r0)
            android.content.Context r0 = r3.b
            if (r0 != 0) goto L79
            java.lang.String r0 = "mContext == null"
            goto L83
        L79:
            android.app.Activity r0 = (android.app.Activity) r0
            boolean r0 = r0.isFinishing()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
        L83:
            r4.append(r0)
        L86:
            java.lang.String r4 = r4.toString()
            com.huawei.updatesdk.a.a.a.a(r1, r4)
        L8d:
            return
        L8e:
            java.lang.String r0 = "context == null or activity isFinishing"
            com.huawei.updatesdk.a.a.a.b(r1, r0)
            if (r4 == 0) goto L98
            r4.a()
        L98:
            return
    }

    public void a(com.huawei.updatesdk.b.i.b r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(boolean r2) {
            r1 = this;
            android.app.AlertDialog r0 = r1.e
            if (r0 == 0) goto L7
            r0.setCancelable(r2)
        L7:
            return
    }

    public boolean b() {
            r1 = this;
            android.app.AlertDialog r0 = r1.e
            if (r0 == 0) goto Lc
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    public void c() {
            r2 = this;
            android.app.AlertDialog$Builder r0 = r2.f
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 0
            r0.setNegativeButton(r1, r1)
            return
    }
}
