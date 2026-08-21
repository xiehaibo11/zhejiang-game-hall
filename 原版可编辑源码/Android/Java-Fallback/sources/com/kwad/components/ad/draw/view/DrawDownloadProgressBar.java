package com.kwad.components.ad.draw.view;

public class DrawDownloadProgressBar extends android.widget.FrameLayout {
    private com.kwad.components.core.page.widget.TextProgressBar cX;
    private android.view.View cY;
    private android.content.Context mContext;


    public DrawDownloadProgressBar(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.D(r1)
            return
    }

    public DrawDownloadProgressBar(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.D(r1)
            return
    }

    public DrawDownloadProgressBar(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.D(r1)
            return
    }

    private void D(android.content.Context r2) {
            r1 = this;
            r1.mContext = r2
            int r0 = com.kwad.sdk.R.layout.ksad_draw_download_bar
            com.kwad.sdk.m.l.inflate(r2, r0, r1)
            int r2 = com.kwad.sdk.R.id.ksad_download_progress
            android.view.View r2 = r1.findViewById(r2)
            com.kwad.components.core.page.widget.TextProgressBar r2 = (com.kwad.components.core.page.widget.TextProgressBar) r2
            r1.cX = r2
            int r2 = com.kwad.sdk.R.id.ksad_download_progress_cover
            android.view.View r2 = r1.findViewById(r2)
            r1.cY = r2
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar$1 r0 = new com.kwad.components.ad.draw.view.DrawDownloadProgressBar$1
            r0.<init>(r1)
            r2.setOnClickListener(r0)
            return
    }

    public final void e(java.lang.String r3, int r4) {
            r2 = this;
            if (r4 == 0) goto Le
            int r0 = r2.getMax()
            if (r4 != r0) goto L9
            goto Le
        L9:
            android.view.View r0 = r2.cY
            r1 = 8
            goto L11
        Le:
            android.view.View r0 = r2.cY
            r1 = 0
        L11:
            r0.setVisibility(r1)
            com.kwad.components.core.page.widget.TextProgressBar r0 = r2.cX
            r0.e(r3, r4)
            return
    }

    public int getMax() {
            r1 = this;
            com.kwad.components.core.page.widget.TextProgressBar r0 = r1.cX
            int r0 = r0.getMax()
            return r0
    }

    public void setTextColor(int r2) {
            r1 = this;
            com.kwad.components.core.page.widget.TextProgressBar r0 = r1.cX
            r0.setTextColor(r2)
            return
    }

    public void setTextSize(int r3) {
            r2 = this;
            com.kwad.components.core.page.widget.TextProgressBar r0 = r2.cX
            android.content.Context r1 = r2.getContext()
            float r3 = (float) r3
            int r3 = com.kwad.sdk.d.a.a.a(r1, r3)
            float r3 = (float) r3
            r0.setTextDimen(r3)
            return
    }
}
