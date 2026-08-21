package com.kwad.components.core.webview.b.c;

public class d extends com.kwad.components.core.n.g {
    public com.kwad.components.core.webview.b.e.c QM;
    protected com.kwad.components.offline.api.tk.model.StyleTemplate QO;
    protected com.kwad.components.core.webview.b.c.b Xl;
    protected com.kwad.sdk.components.g Xn;
    public boolean Xo;
    public com.kwad.components.core.webview.b.c.d.a Xp;
    private com.kwad.components.core.webview.b.e.d Xs;
    private com.kwad.sdk.widget.KSFrameLayout Xu;
    protected java.util.List<android.content.DialogInterface.OnDismissListener> Xv;
    public boolean Xw;
    public com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.sdk.mvp.Presenter mPresenter;
    public java.lang.String xD;



    public interface a {
        boolean gi();
    }

    public static class b {
        private com.kwad.sdk.components.g Xn;
        private boolean Xo;
        private boolean Xw;
        private com.kwad.components.offline.api.tk.model.StyleTemplate Xy;
        private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
        private java.lang.String templateId;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        static boolean c(com.kwad.components.core.webview.b.c.d.b r0) {
                boolean r0 = r0.Xo
                return r0
        }

        static boolean d(com.kwad.components.core.webview.b.c.d.b r0) {
                boolean r0 = r0.Xw
                return r0
        }

        static com.kwad.components.offline.api.tk.model.StyleTemplate e(com.kwad.components.core.webview.b.c.d.b r0) {
                com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r0.Xy
                return r0
        }

        static com.kwad.sdk.components.g f(com.kwad.components.core.webview.b.c.d.b r0) {
                com.kwad.sdk.components.g r0 = r0.Xn
                return r0
        }

        public final void a(com.kwad.components.offline.api.tk.model.StyleTemplate r1) {
                r0 = this;
                r0.Xy = r1
                return
        }

        public final void aO(java.lang.String r1) {
                r0 = this;
                r0.templateId = r1
                return
        }

        public final void aP(boolean r1) {
                r0 = this;
                r1 = 0
                r0.Xo = r1
                return
        }

        public final void aQ(boolean r1) {
                r0 = this;
                r1 = 1
                r0.Xw = r1
                return
        }

        public final void c(com.kwad.sdk.components.g r1) {
                r0 = this;
                r0.Xn = r1
                return
        }

        public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
                r1 = this;
                com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
                return r0
        }

        public final java.lang.String getTemplateId() {
                r1 = this;
                java.lang.String r0 = r1.templateId
                return r0
        }

        public final boolean rZ() {
                r1 = this;
                boolean r0 = r1.Xo
                return r0
        }

        public final boolean sa() {
                r1 = this;
                boolean r0 = r1.Xw
                return r0
        }

        public final void setAdTemplate(com.kwad.sdk.core.response.model.AdTemplate r1) {
                r0 = this;
                r0.mAdTemplate = r1
                return
        }
    }

    public d() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.Xv = r0
            r0 = 0
            r1.Xw = r0
            return
    }

    private com.kwad.sdk.mvp.Presenter ad() {
            r2 = this;
            com.kwad.sdk.mvp.Presenter r0 = new com.kwad.sdk.mvp.Presenter
            r0.<init>()
            r2.mPresenter = r0
            com.kwad.components.core.webview.b.c.c r1 = r2.jr()
            r0.a(r1)
            com.kwad.sdk.mvp.Presenter r0 = r2.mPresenter
            return r0
    }

    public static com.kwad.components.core.webview.b.c.d b(com.kwad.components.core.webview.b.c.d.b r3) {
            com.kwad.components.core.webview.b.c.d r0 = new com.kwad.components.core.webview.b.c.d
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.getAdTemplate()
            r0.mAdTemplate = r1
            java.lang.String r1 = r3.getTemplateId()
            r0.xD = r1
            boolean r1 = com.kwad.components.core.webview.b.c.d.b.c(r3)
            r0.Xo = r1
            boolean r1 = com.kwad.components.core.webview.b.c.d.b.d(r3)
            r0.Xw = r1
            com.kwad.components.offline.api.tk.model.StyleTemplate r1 = com.kwad.components.core.webview.b.c.d.b.e(r3)
            r0.QO = r1
            com.kwad.sdk.components.g r1 = com.kwad.components.core.webview.b.c.d.b.f(r3)
            r0.Xn = r1
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r3 = r3.getTemplateId()
            java.lang.String r2 = "templateId"
            r1.putString(r2, r3)
            r0.setArguments(r1)
            return r0
    }

    private void y(android.view.View r2) {
            r1 = this;
            com.kwad.sdk.mvp.Presenter r0 = r1.mPresenter
            if (r0 != 0) goto L13
            com.kwad.sdk.mvp.Presenter r0 = r1.ad()
            r1.mPresenter = r0
            r0.F(r2)
            com.kwad.components.core.webview.b.c.b r2 = r1.jq()
            r1.Xl = r2
        L13:
            r1.js()
            com.kwad.sdk.mvp.Presenter r2 = r1.mPresenter
            com.kwad.components.core.webview.b.c.b r0 = r1.Xl
            r2.k(r0)
            return
    }

    @Override
    public final android.view.View a(android.view.LayoutInflater r3, android.view.ViewGroup r4) {
            r2 = this;
            com.kwad.sdk.widget.KSFrameLayout r0 = r2.Xu
            if (r0 != 0) goto Lf
            int r0 = com.kwad.sdk.R.layout.ksad_video_tk_dialog_layout
            r1 = 0
            android.view.View r3 = r3.inflate(r0, r4, r1)
            com.kwad.sdk.widget.KSFrameLayout r3 = (com.kwad.sdk.widget.KSFrameLayout) r3
            r2.Xu = r3
        Lf:
            com.kwad.sdk.widget.KSFrameLayout r3 = r2.Xu
            return r3
    }

    public final void a(com.kwad.components.core.webview.b.e.d r1) {
            r0 = this;
            r0.Xs = r1
            return
    }

    public final void d(android.content.DialogInterface.OnDismissListener r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.List<android.content.DialogInterface$OnDismissListener> r0 = r1.Xv
            r0.add(r2)
        L7:
            return
    }

    public final void e(android.content.DialogInterface.OnDismissListener r2) {
            r1 = this;
            java.util.List<android.content.DialogInterface$OnDismissListener> r0 = r1.Xv
            r0.remove(r2)
            return
    }

    protected com.kwad.components.core.webview.b.c.b jq() {
            r1 = this;
            com.kwad.components.core.webview.b.c.b r0 = new com.kwad.components.core.webview.b.c.b
            r0.<init>()
            return r0
    }

    protected com.kwad.components.core.webview.b.c.c jr() {
            r1 = this;
            com.kwad.components.core.webview.b.c.c r0 = new com.kwad.components.core.webview.b.c.c
            r0.<init>()
            return r0
    }

    protected void js() {
            r2 = this;
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            android.app.Activity r1 = r2.getActivity()
            r0.mActivity = r1
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            r0.VP = r2
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            com.kwad.sdk.widget.KSFrameLayout r1 = r2.Xu
            r0.Xm = r1
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.mAdTemplate = r1
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            java.lang.String r1 = r2.xD
            r0.xD = r1
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            com.kwad.components.offline.api.tk.model.StyleTemplate r1 = r2.QO
            r0.QO = r1
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            boolean r1 = r2.Xo
            r0.Xo = r1
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            com.kwad.sdk.components.g r1 = r2.Xn
            r0.Xn = r1
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            com.kwad.components.core.webview.b.c.d$a r1 = r2.Xp
            r0.Xp = r1
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            com.kwad.components.core.webview.b.e.c r1 = r2.QM
            r0.QM = r1
            return
    }

    @Override
    public void onActivityCreated(android.os.Bundle r4) {
            r3 = this;
            super.onActivityCreated(r4)     // Catch: java.lang.Throwable -> L3
        L3:
            android.app.Dialog r4 = r3.getDialog()
            if (r4 != 0) goto La
            return
        La:
            android.app.Dialog r4 = r3.getDialog()
            android.view.Window r4 = r4.getWindow()
            if (r4 != 0) goto L15
            return
        L15:
            android.view.WindowManager$LayoutParams r0 = r4.getAttributes()
            r1 = 0
            r0.dimAmount = r1
            r4.setAttributes(r0)
            android.app.Dialog r0 = r3.getDialog()
            r1 = 0
            r0.setCanceledOnTouchOutside(r1)
            android.view.View r0 = r4.getDecorView()
            r0.setPadding(r1, r1, r1, r1)
            r0 = -1
            r4.setLayout(r0, r0)
            android.app.Dialog r0 = r3.getDialog()
            android.view.Window r0 = r0.getWindow()
            android.graphics.drawable.ColorDrawable r2 = new android.graphics.drawable.ColorDrawable
            r2.<init>(r1)
            r0.setBackgroundDrawable(r2)
            r0 = 16
            r4.setSoftInputMode(r0)
            boolean r0 = r3.Xw
            if (r0 == 0) goto L57
            android.app.Dialog r0 = r3.getDialog()
            com.kwad.components.core.webview.b.c.d$1 r1 = new com.kwad.components.core.webview.b.c.d$1
            r1.<init>(r3)
            r0.setOnKeyListener(r1)
        L57:
            r0 = 1024(0x400, float:1.435E-42)
            r4.setFlags(r0, r0)
            boolean r4 = r3.Xw
            if (r4 == 0) goto L6c
            android.app.Dialog r4 = r3.getDialog()
            com.kwad.components.core.webview.b.c.d$2 r0 = new com.kwad.components.core.webview.b.c.d$2
            r0.<init>(r3)
            r4.setOnKeyListener(r0)
        L6c:
            return
    }

    @Override
    public void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            android.os.Bundle r2 = r1.getArguments()
            java.lang.String r0 = "templateId"
            java.lang.String r2 = r2.getString(r0)
            r1.xD = r2
            return
    }

    @Override
    public void onDestroy() {
            r2 = this;
            super.onDestroy()
            com.kwad.sdk.mvp.Presenter r0 = r2.mPresenter
            r1 = 0
            if (r0 == 0) goto Ld
            r0.destroy()
            r2.mPresenter = r1
        Ld:
            com.kwad.components.core.webview.b.c.b r0 = r2.Xl
            if (r0 == 0) goto L16
            r0.release()
            r2.Xl = r1
        L16:
            return
    }

    @Override
    public void onDestroyView() {
            r2 = this;
            super.onDestroyView()
            com.kwad.sdk.widget.KSFrameLayout r0 = r2.Xu
            if (r0 == 0) goto L1f
            android.view.ViewParent r0 = r0.getParent()
            boolean r0 = r0 instanceof android.view.ViewGroup
            if (r0 == 0) goto L1f
            com.kwad.sdk.widget.KSFrameLayout r0 = r2.Xu
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            com.kwad.sdk.widget.KSFrameLayout r1 = r2.Xu
            r0.removeView(r1)
            r0 = 0
            r2.Xu = r0
        L1f:
            com.kwad.components.core.webview.b.e.d r0 = r2.Xs
            if (r0 == 0) goto L26
            r0.go()
        L26:
            return
    }

    @Override
    public void onDismiss(android.content.DialogInterface r3) {
            r2 = this;
            super.onDismiss(r3)
            com.kwad.components.core.webview.b.e.c r0 = r2.QM
            if (r0 == 0) goto La
            r0.go()
        La:
            java.util.List<android.content.DialogInterface$OnDismissListener> r0 = r2.Xv
            java.util.Iterator r0 = r0.iterator()
        L10:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L22
            java.lang.Object r1 = r0.next()
            android.content.DialogInterface$OnDismissListener r1 = (android.content.DialogInterface.OnDismissListener) r1
            if (r1 == 0) goto L10
            r1.onDismiss(r3)
            goto L10
        L22:
            com.kwad.sdk.components.g r3 = r2.Xn
            if (r3 == 0) goto L29
            r3.callbackDialogDismiss()
        L29:
            return
    }

    @Override
    public void onViewCreated(android.view.View r1, android.os.Bundle r2) {
            r0 = this;
            super.onViewCreated(r1, r2)
            r0.y(r1)
            com.kwad.components.core.webview.b.e.c r1 = r0.QM
            if (r1 == 0) goto Ld
            r1.gg()
        Ld:
            com.kwad.components.core.webview.b.e.d r1 = r0.Xs
            if (r1 == 0) goto L14
            r1.gg()
        L14:
            return
    }
}
