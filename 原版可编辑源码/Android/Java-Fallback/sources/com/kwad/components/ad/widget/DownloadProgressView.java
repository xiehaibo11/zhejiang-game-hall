package com.kwad.components.ad.widget;

public class DownloadProgressView extends android.widget.FrameLayout {
    protected android.widget.TextView Hm;
    private int Hn;
    private int Ho;
    private int Hp;
    private int Hq;
    private android.graphics.drawable.Drawable Hr;
    private android.graphics.drawable.Drawable Hs;
    private java.lang.String Ht;
    protected com.kwad.components.core.page.widget.TextProgressBar cX;
    private final com.kwad.sdk.api.KsAppDownloadListener cn;
    protected com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    protected com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;



    public DownloadProgressView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public DownloadProgressView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public DownloadProgressView(android.content.Context r2, android.util.AttributeSet r3, int r4) {
            r1 = this;
            android.content.Context r0 = com.kwad.sdk.m.l.wrapContextIfNeed(r2)
            r1.<init>(r0, r3, r4)
            com.kwad.components.ad.widget.DownloadProgressView$2 r4 = new com.kwad.components.ad.widget.DownloadProgressView$2
            r4.<init>(r1)
            r1.cn = r4
            r1.initAttrs(r2, r3)
            r1.initView()
            return
    }

    static java.lang.String a(com.kwad.components.ad.widget.DownloadProgressView r0) {
            java.lang.String r0 = r0.Ht
            return r0
    }

    private void initAttrs(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            int[] r0 = com.kwad.sdk.R.styleable.ksad_DownloadProgressView
            android.content.res.TypedArray r3 = r3.obtainStyledAttributes(r4, r0)
            int r4 = com.kwad.sdk.R.styleable.ksad_DownloadProgressView_ksad_downloadTextColor
            r0 = -117146(0xfffffffffffe3666, float:NaN)
            int r4 = r3.getColor(r4, r0)
            r2.Hn = r4
            int r4 = com.kwad.sdk.R.styleable.ksad_DownloadProgressView_ksad_downloadLeftTextColor
            r1 = -1
            int r4 = r3.getColor(r4, r1)
            r2.Ho = r4
            int r4 = com.kwad.sdk.R.styleable.ksad_DownloadProgressView_ksad_downloadRightTextColor
            int r4 = r3.getColor(r4, r0)
            r2.Hp = r4
            android.content.Context r4 = r2.getContext()
            r0 = 1093664768(0x41300000, float:11.0)
            int r4 = com.kwad.sdk.d.a.a.a(r4, r0)
            int r0 = com.kwad.sdk.R.styleable.ksad_DownloadProgressView_ksad_downloadTextSize
            int r4 = r3.getDimensionPixelSize(r0, r4)
            r2.Hq = r4
            int r4 = com.kwad.sdk.R.styleable.ksad_DownloadProgressView_ksad_progressDrawable
            android.graphics.drawable.Drawable r4 = r3.getDrawable(r4)
            r2.Hr = r4
            if (r4 != 0) goto L4a
            android.content.res.Resources r4 = r2.getResources()
            int r0 = com.kwad.sdk.R.drawable.ksad_feed_download_progress
            android.graphics.drawable.Drawable r4 = r4.getDrawable(r0)
            r2.Hr = r4
        L4a:
            int r4 = com.kwad.sdk.R.styleable.ksad_DownloadProgressView_ksad_backgroundDrawable
            android.graphics.drawable.Drawable r4 = r3.getDrawable(r4)
            r2.Hs = r4
            if (r4 != 0) goto L60
            android.content.res.Resources r4 = r2.getResources()
            int r0 = com.kwad.sdk.R.drawable.ksad_feed_app_download_before_bg
            android.graphics.drawable.Drawable r4 = r4.getDrawable(r0)
            r2.Hs = r4
        L60:
            int r4 = com.kwad.sdk.R.styleable.ksad_DownloadProgressView_ksad_downloadingFormat
            java.lang.String r4 = r3.getString(r4)
            r2.Ht = r4
            if (r4 != 0) goto L6e
            java.lang.String r4 = "下载中  %s%%"
            r2.Ht = r4
        L6e:
            r3.recycle()
            return
    }

    private void initView() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            int r1 = com.kwad.sdk.R.layout.ksad_download_progress_layout
            com.kwad.sdk.m.l.inflate(r0, r1, r3)
            int r0 = com.kwad.sdk.R.id.ksad_progress_bar
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.core.page.widget.TextProgressBar r0 = (com.kwad.components.core.page.widget.TextProgressBar) r0
            r3.cX = r0
            int r1 = r3.Hq
            float r1 = (float) r1
            r0.setTextDimen(r1)
            com.kwad.components.core.page.widget.TextProgressBar r0 = r3.cX
            int r1 = r3.Ho
            int r2 = r3.Hp
            r0.setTextColor(r1, r2)
            com.kwad.components.core.page.widget.TextProgressBar r0 = r3.cX
            android.graphics.drawable.Drawable r1 = r3.Hr
            r0.setProgressDrawable(r1)
            int r0 = com.kwad.sdk.R.id.ksad_normal_text
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.Hm = r0
            int r1 = r3.Hn
            r0.setTextColor(r1)
            android.widget.TextView r0 = r3.Hm
            int r1 = r3.Hq
            float r1 = (float) r1
            r2 = 0
            r0.setTextSize(r2, r1)
            android.widget.TextView r0 = r3.Hm
            r0.setVisibility(r2)
            android.widget.TextView r0 = r3.Hm
            android.graphics.drawable.Drawable r1 = r3.Hs
            r0.setBackground(r1)
            int r0 = com.kwad.sdk.R.id.ksad_foreground_cover
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.ad.widget.DownloadProgressView$1 r1 = new com.kwad.components.ad.widget.DownloadProgressView$1
            r1.<init>(r3)
            r0.setOnClickListener(r1)
            return
    }

    public final void H(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            r1.mAdTemplate = r2
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            r1.mAdInfo = r2
            android.widget.TextView r0 = r1.Hm
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aw(r2)
            r0.setText(r2)
            com.kwad.components.core.page.widget.TextProgressBar r2 = r1.cX
            r0 = 8
            r2.setVisibility(r0)
            android.widget.TextView r2 = r1.Hm
            r0 = 0
            r2.setVisibility(r0)
            return
    }

    public com.kwad.sdk.api.KsAppDownloadListener getAppDownloadListener() {
            r1 = this;
            com.kwad.sdk.api.KsAppDownloadListener r0 = r1.cn
            return r0
    }
}
