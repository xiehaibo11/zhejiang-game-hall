package com.kwad.sdk.a.a;

public final class a extends com.kwad.components.core.n.d {
    private static com.kwad.sdk.a.a.a ahr;
    private final android.content.DialogInterface.OnDismissListener ahs;
    private final com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private final android.content.DialogInterface.OnClickListener mOnClickListener;



    private a(android.app.Activity r1, com.kwad.sdk.core.response.model.AdTemplate r2, android.content.DialogInterface.OnDismissListener r3, android.content.DialogInterface.OnClickListener r4) {
            r0 = this;
            r0.<init>(r1)
            r0.mAdTemplate = r2
            r0.ahs = r3
            r0.mOnClickListener = r4
            return
    }

    static android.content.DialogInterface.OnClickListener a(com.kwad.sdk.a.a.a r0) {
            android.content.DialogInterface$OnClickListener r0 = r0.mOnClickListener
            return r0
    }

    public static boolean a(android.app.Activity r2, android.content.DialogInterface.OnDismissListener r3, android.content.DialogInterface.OnClickListener r4) {
            r0 = 0
            if (r2 == 0) goto L1a
            boolean r1 = r2.isFinishing()
            if (r1 == 0) goto La
            goto L1a
        La:
            com.kwad.sdk.a.a.c r1 = com.kwad.sdk.a.a.c.yb()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.yc()
            if (r1 != 0) goto L15
            return r0
        L15:
            boolean r2 = a(r2, r1, r3, r4)
            return r2
        L1a:
            return r0
    }

    public static boolean a(android.app.Activity r2, com.kwad.sdk.core.response.model.AdTemplate r3, android.content.DialogInterface.OnDismissListener r4, android.content.DialogInterface.OnClickListener r5) {
            r0 = 0
            if (r2 == 0) goto L27
            boolean r1 = r2.isFinishing()
            if (r1 != 0) goto L27
            if (r3 != 0) goto Lc
            goto L27
        Lc:
            com.kwad.sdk.a.a.a r1 = com.kwad.sdk.a.a.a.ahr
            if (r1 == 0) goto L1b
            boolean r1 = r1.isShowing()
            if (r1 == 0) goto L1b
            com.kwad.sdk.a.a.a r1 = com.kwad.sdk.a.a.a.ahr
            r1.dismiss()
        L1b:
            com.kwad.sdk.a.a.a r1 = new com.kwad.sdk.a.a.a     // Catch: java.lang.Throwable -> L27
            r1.<init>(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L27
            r1.show()     // Catch: java.lang.Throwable -> L27
            com.kwad.sdk.a.a.a.ahr = r1     // Catch: java.lang.Throwable -> L27
            r2 = 1
            return r2
        L27:
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate b(com.kwad.sdk.a.a.a r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    public static boolean mZ() {
            com.kwad.sdk.a.a.a r0 = com.kwad.sdk.a.a.a.ahr
            if (r0 == 0) goto Lc
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public static boolean xW() {
            com.kwad.sdk.a.a.a r0 = com.kwad.sdk.a.a.a.ahr
            if (r0 == 0) goto L11
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L11
            com.kwad.sdk.a.a.a r0 = com.kwad.sdk.a.a.a.ahr
            r0.dismiss()
            r0 = 1
            return r0
        L11:
            r0 = 0
            return r0
    }

    @Override
    public final void dismiss() {
            r1 = this;
            super.dismiss()
            android.content.DialogInterface$OnDismissListener r0 = r1.ahs
            if (r0 == 0) goto La
            r0.onDismiss(r1)
        La:
            r0 = 0
            com.kwad.sdk.a.a.a.ahr = r0
            return
    }

    @Override
    public final void g(android.view.View r8) {
            r7 = this;
            int r0 = com.kwad.sdk.R.id.ksad_install_tips_content
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            int r1 = com.kwad.sdk.R.id.ksad_install_cancel
            android.view.View r1 = r8.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            int r2 = com.kwad.sdk.R.id.ksad_install_tv
            android.view.View r8 = r8.findViewById(r2)
            android.widget.TextView r8 = (android.widget.TextView) r8
            com.kwad.sdk.core.response.model.AdTemplate r2 = r7.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r7.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            java.lang.String r3 = com.kwad.sdk.a.a.d.A(r3)
            java.lang.String r4 = ""
            boolean r4 = r3.equals(r4)
            if (r4 == 0) goto L42
            android.content.Context r3 = r7.mContext
            int r4 = com.kwad.sdk.R.string.ksad_install_tips
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]
            r6 = 0
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.ao(r2)
            r5[r6] = r2
            java.lang.String r3 = r3.getString(r4, r5)
        L42:
            r0.setText(r3)
            java.lang.String r0 = com.kwad.sdk.a.a.d.yh()
            r8.setText(r0)
            java.lang.String r0 = com.kwad.sdk.a.a.d.yi()
            r1.setText(r0)
            com.kwad.sdk.a.a.a$1 r0 = new com.kwad.sdk.a.a.a$1
            r0.<init>(r7)
            r1.setOnClickListener(r0)
            com.kwad.sdk.a.a.a$2 r0 = new com.kwad.sdk.a.a.a$2
            r0.<init>(r7)
            r8.setOnClickListener(r0)
            return
    }

    @Override
    public final int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_install_dialog
            return r0
    }
}
