package com.kwad.components.core.page.widget;

public final class a extends android.app.Dialog {
    private final com.kwad.components.core.page.widget.a.a OJ;
    private final java.lang.String OK;





    public interface a {
        void a(android.content.DialogInterface r1);

        void b(android.content.DialogInterface r1);

        void c(android.content.DialogInterface r1);
    }

    public a(android.content.Context r2, com.kwad.components.core.page.widget.a.a r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r3)
            return
    }

    public a(android.content.Context r2, java.lang.String r3, com.kwad.components.core.page.widget.a.a r4) {
            r1 = this;
            r1.<init>(r2)
            boolean r0 = r2 instanceof android.app.Activity
            if (r0 == 0) goto Lc
            android.app.Activity r2 = (android.app.Activity) r2
            r1.setOwnerActivity(r2)
        Lc:
            r1.OJ = r4
            r1.OK = r3
            return
    }

    static com.kwad.components.core.page.widget.a.a a(com.kwad.components.core.page.widget.a r0) {
            com.kwad.components.core.page.widget.a$a r0 = r0.OJ
            return r0
    }

    private android.view.View pt() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            int r1 = com.kwad.sdk.R.layout.ksad_web_exit_intercept_content_layout
            r2 = 0
            android.view.View r0 = com.kwad.sdk.m.l.inflate(r0, r1, r2)
            int r1 = com.kwad.sdk.R.id.ksad_exit_intercept_dialog_layout
            android.view.View r1 = r0.findViewById(r1)
            com.kwad.components.core.page.widget.a$1 r2 = new com.kwad.components.core.page.widget.a$1
            r2.<init>(r3)
            r1.setOnClickListener(r2)
            int r1 = com.kwad.sdk.R.id.ksad_exit_intercept_content_layout
            android.view.View r1 = r0.findViewById(r1)
            com.kwad.components.core.page.widget.a$2 r2 = new com.kwad.components.core.page.widget.a$2
            r2.<init>(r3)
            r1.setOnClickListener(r2)
            int r1 = com.kwad.sdk.R.id.ksad_web_exit_intercept_positive_btn
            android.view.View r1 = r0.findViewById(r1)
            com.kwad.components.core.page.widget.a$3 r2 = new com.kwad.components.core.page.widget.a$3
            r2.<init>(r3)
            r1.setOnClickListener(r2)
            int r1 = com.kwad.sdk.R.id.ksad_web_exit_intercept_negative_btn
            android.view.View r1 = r0.findViewById(r1)
            com.kwad.components.core.page.widget.a$4 r2 = new com.kwad.components.core.page.widget.a$4
            r2.<init>(r3)
            r1.setOnClickListener(r2)
            int r1 = com.kwad.sdk.R.id.ksad_exit_intercept_content
            android.view.View r1 = r0.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            java.lang.String r2 = r3.OK
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L58
            java.lang.String r2 = r3.OK
            r1.setText(r2)
        L58:
            return r0
    }

    @Override
    protected final void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            r3 = 1
            r2.requestWindowFeature(r3)
            android.view.View r3 = r2.pt()
            r2.setContentView(r3)
            r3 = 0
            r2.setCanceledOnTouchOutside(r3)
            android.view.Window r0 = r2.getWindow()
            android.graphics.drawable.ColorDrawable r1 = new android.graphics.drawable.ColorDrawable
            r1.<init>(r3)
            r0.setBackgroundDrawable(r1)
            android.view.Window r0 = r2.getWindow()
            r1 = -1
            r0.setLayout(r1, r1)
            r2.setCancelable(r3)
            return
    }
}
