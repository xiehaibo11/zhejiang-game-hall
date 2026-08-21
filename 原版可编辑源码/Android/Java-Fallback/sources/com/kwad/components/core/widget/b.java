package com.kwad.components.core.widget;

import com.kwad.sdk.core.response.model.AdTemplate;

public abstract class b<T extends com.kwad.sdk.core.response.model.AdTemplate> extends com.kwad.sdk.widget.KSFrameLayout implements android.content.DialogInterface.OnDismissListener, android.content.DialogInterface.OnShowListener, com.kwad.sdk.core.h.c {
    public com.kwad.components.core.widget.b.a XT;
    private long XU;
    private com.kwad.components.core.widget.a.b bG;
    private com.kwad.sdk.core.h.b bJ;
    protected boolean mA;
    public com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    public T mAdTemplate;
    public android.content.Context mContext;
    private com.kwad.sdk.utils.bi mTimerHelper;



    public interface a {
        void onAdClicked();

        void onAdShow();

        void onDislikeClicked();

        void onDownloadTipsDialogDismiss();

        void onDownloadTipsDialogShow();
    }

    public b(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public b(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public b(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.mContext = r1
            r0.initView()
            return
    }

    static long a(com.kwad.components.core.widget.b r2) {
            long r0 = r2.XU
            return r0
    }

    static long a(com.kwad.components.core.widget.b r0, long r1) {
            r0.XU = r1
            return r1
    }

    private void a(android.view.ViewGroup r3) {
            r2 = this;
            boolean r0 = com.kwad.sdk.core.config.d.zJ()
            if (r0 != 0) goto L2a
            float r0 = com.kwad.sdk.core.config.d.zI()
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 < 0) goto L2a
            c(r3)
            com.kwad.components.core.widget.a r0 = new com.kwad.components.core.widget.a
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1, r3)
            r3.addView(r0)
            com.kwad.components.core.widget.b$1 r3 = new com.kwad.components.core.widget.b$1
            r3.<init>(r2)
            r0.setViewCallback(r3)
            r0.sl()
            return
        L2a:
            com.kwad.components.core.widget.c r0 = b(r3)
            if (r0 != 0) goto L3c
            com.kwad.components.core.widget.c r0 = new com.kwad.components.core.widget.c
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1, r3)
            r3.addView(r0)
        L3c:
            com.kwad.components.core.widget.b$2 r3 = new com.kwad.components.core.widget.b$2
            r3.<init>(r2)
            r0.setViewCallback(r3)
            r3 = 1
            r0.setNeedCheckingShow(r3)
            return
    }

    private static com.kwad.components.core.widget.c b(android.view.ViewGroup r3) {
            r0 = 0
        L1:
            int r1 = r3.getChildCount()
            if (r0 >= r1) goto L15
            android.view.View r1 = r3.getChildAt(r0)
            boolean r2 = r1 instanceof com.kwad.components.core.widget.c
            if (r2 == 0) goto L12
            com.kwad.components.core.widget.c r1 = (com.kwad.components.core.widget.c) r1
            return r1
        L12:
            int r0 = r0 + 1
            goto L1
        L15:
            r3 = 0
            return r3
    }

    public static void c(android.view.ViewGroup r3) {
            r0 = 0
        L1:
            int r1 = r3.getChildCount()
            if (r0 >= r1) goto L15
            android.view.View r1 = r3.getChildAt(r0)
            boolean r2 = r1 instanceof com.kwad.components.core.widget.a
            if (r2 == 0) goto L12
            r3.removeView(r1)
        L12:
            int r0 = r0 + 1
            goto L1
        L15:
            return
    }

    private void initView() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            int r1 = r2.getLayoutId()
            com.kwad.sdk.m.l.inflate(r0, r1, r2)
            float r0 = r2.getHWRatio()
            r2.setRatio(r0)
            r2.ba()
            com.kwad.components.core.widget.a.b r0 = new com.kwad.components.core.widget.a.b
            r1 = 70
            r0.<init>(r2, r1)
            r2.bG = r0
            r2.a(r2)
            return
    }

    public void aK() {
            r0 = this;
            return
    }

    public final void aK(int r3) {
            r2 = this;
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.utils.ac$a r1 = r2.getTouchCoords()
            com.kwad.sdk.core.report.a.a(r0, r3, r1)
            com.kwad.components.core.widget.b$a r3 = r2.XT
            if (r3 == 0) goto L10
            r3.onAdClicked()
        L10:
            return
    }

    public void aL() {
            r0 = this;
            return
    }

    @Override
    public void aa() {
            r2 = this;
            super.aa()
            com.kwad.components.core.widget.a.b r0 = r2.bG
            r0.a(r2)
            com.kwad.components.core.widget.a.b r0 = r2.bG
            com.kwad.sdk.core.h.b r1 = r2.bJ
            r0.a(r1)
            com.kwad.components.core.widget.a.b r0 = r2.bG
            r0.sy()
            return
    }

    @Override
    public void ab() {
            r1 = this;
            super.ab()
            com.kwad.components.core.widget.a.b r0 = r1.bG
            r0.b(r1)
            com.kwad.components.core.widget.a.b r0 = r1.bG
            r0.sz()
            r1.bd()
            return
    }

    public void b(T r1) {
            r0 = this;
            r0.mAdTemplate = r1
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            r0.mAdInfo = r1
            return
    }

    protected abstract void ba();

    public void bd() {
            r0 = this;
            return
    }

    protected void bt() {
            r4 = this;
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            boolean r0 = r0.mPvReported
            if (r0 != 0) goto Ld
            com.kwad.components.core.widget.b$a r0 = r4.XT
            if (r0 == 0) goto Ld
            r0.onAdShow()
        Ld:
            com.kwad.sdk.core.report.j r0 = new com.kwad.sdk.core.report.j
            r0.<init>()
            com.kwad.sdk.core.report.z$a r1 = new com.kwad.sdk.core.report.z$a
            r1.<init>()
            T extends com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            int r2 = r2.type
            com.kwad.components.model.FeedType r2 = com.kwad.components.model.FeedType.fromInt(r2)
            com.kwad.components.model.FeedType r3 = com.kwad.components.model.FeedType.FEED_TYPE_TEXT_NEW
            if (r2 != r3) goto L25
            com.kwad.components.model.FeedType r2 = com.kwad.components.model.FeedType.FEED_TYPE_TEXT_BELOW
        L25:
            int r2 = r2.getType()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r1.templateId = r2
            r0.a(r1)
            int r1 = r4.getHeight()
            int r2 = r4.getWidth()
            r0.t(r1, r2)
            com.kwad.components.core.t.b r1 = com.kwad.components.core.t.b.qj()
            T extends com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            r3 = 0
            r1.a(r2, r3, r0)
            return
    }

    public final void c(com.kwad.sdk.core.report.j r3) {
            r2 = this;
            com.kwad.sdk.utils.ac$a r0 = r2.getTouchCoords()
            r3.c(r0)
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            r1 = 0
            com.kwad.sdk.core.report.a.a(r0, r3, r1)
            com.kwad.components.core.widget.b$a r3 = r2.XT
            if (r3 == 0) goto L14
            r3.onAdClicked()
        L14:
            return
    }

    public final void eb() {
            r1 = this;
            com.kwad.components.core.widget.b$a r0 = r1.XT
            if (r0 == 0) goto L7
            r0.onAdClicked()
        L7:
            return
    }

    protected float getHWRatio() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected abstract int getLayoutId();

    public long getStayTime() {
            r4 = this;
            long r0 = r4.XU
            com.kwad.sdk.utils.bi r2 = r4.getTimerHelper()
            long r2 = r2.getTime()
            long r0 = r0 + r2
            return r0
    }

    public com.kwad.sdk.utils.bi getTimerHelper() {
            r1 = this;
            com.kwad.sdk.utils.bi r0 = r1.mTimerHelper
            if (r0 != 0) goto Lb
            com.kwad.sdk.utils.bi r0 = new com.kwad.sdk.utils.bi
            r0.<init>()
            r1.mTimerHelper = r0
        Lb:
            com.kwad.sdk.utils.bi r0 = r1.mTimerHelper
            return r0
    }

    @Override
    public void onDismiss(android.content.DialogInterface r1) {
            r0 = this;
            com.kwad.components.core.widget.b$a r1 = r0.XT
            if (r1 == 0) goto L7
            r1.onDownloadTipsDialogDismiss()
        L7:
            return
    }

    @Override
    public void onShow(android.content.DialogInterface r1) {
            r0 = this;
            com.kwad.components.core.widget.b$a r1 = r0.XT
            if (r1 == 0) goto L7
            r1.onDownloadTipsDialogShow()
        L7:
            return
    }

    public void setInnerAdInteractionListener(com.kwad.components.core.widget.b.a r1) {
            r0 = this;
            r0.XT = r1
            return
    }

    public void setMargin(int r1) {
            r0 = this;
            r0.setPadding(r1, r1, r1, r1)
            r1 = -1
            r0.setBackgroundColor(r1)
            return
    }

    public void setPageExitListener(com.kwad.sdk.core.h.b r1) {
            r0 = this;
            r0.bJ = r1
            return
    }

    public final void sm() {
            r1 = this;
            T extends com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            com.kwad.sdk.core.report.a.at(r0)
            com.kwad.components.core.widget.b$a r0 = r1.XT
            if (r0 == 0) goto Lc
            r0.onDislikeClicked()
        Lc:
            return
    }
}
