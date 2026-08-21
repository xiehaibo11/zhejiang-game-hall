package com.kwad.components.core.widget;

public class KsLogoView extends android.widget.LinearLayout {
    private boolean YV;
    android.widget.TextView YW;
    android.widget.ImageView YX;
    private com.kwad.components.core.widget.KsLogoView.a YY;
    private com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener ei;


    public interface a {
        void kh();
    }

    public KsLogoView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public KsLogoView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public KsLogoView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            android.content.Context r1 = com.kwad.sdk.m.l.wrapContextIfNeed(r1)
            r0.<init>(r1, r2, r3)
            com.kwad.components.core.widget.KsLogoView$1 r1 = new com.kwad.components.core.widget.KsLogoView$1
            r1.<init>(r0)
            r0.ei = r1
            r0.init()
            return
    }

    public KsLogoView(android.content.Context r1, boolean r2) {
            r0 = this;
            android.content.Context r1 = com.kwad.sdk.m.l.wrapContextIfNeed(r1)
            r0.<init>(r1)
            com.kwad.components.core.widget.KsLogoView$1 r1 = new com.kwad.components.core.widget.KsLogoView$1
            r1.<init>(r0)
            r0.ei = r1
            if (r2 == 0) goto L1d
            android.content.res.Resources r1 = r0.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_splash_logo_bg
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setBackground(r1)
        L1d:
            r0.init()
            return
    }

    public static android.graphics.Bitmap a(com.kwad.components.core.widget.KsLogoView r4) {
            android.widget.TextView r0 = r4.getTextView()
            android.text.TextPaint r1 = r0.getPaint()
            int r2 = r4.getVisibility()
            r3 = 0
            if (r2 != 0) goto L3c
            java.lang.CharSequence r2 = r0.getText()
            if (r2 == 0) goto L3c
            java.lang.CharSequence r2 = r0.getText()
            int r2 = r2.length()
            if (r2 <= 0) goto L3c
            java.lang.CharSequence r2 = r0.getText()
            java.lang.String r2 = r2.toString()
            float r1 = r1.measureText(r2)
            double r1 = (double) r1
            double r1 = java.lang.Math.ceil(r1)
            int r1 = (int) r1
            int r2 = r0.getPaddingLeft()
            int r1 = r1 + r2
            int r0 = r0.getPaddingRight()
            int r1 = r1 + r0
            goto L3d
        L3c:
            r1 = r3
        L3d:
            android.widget.ImageView r0 = r4.getIcon()
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L52
            android.content.Context r0 = r4.getContext()
            r2 = 1099956224(0x41900000, float:18.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r2)
            goto L53
        L52:
            r0 = r3
        L53:
            int r1 = r1 + r0
            android.content.Context r0 = r4.getContext()
            r2 = 1098907648(0x41800000, float:16.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r2)
            r4.measure(r1, r0)
            r4.layout(r3, r3, r1, r0)
            int r0 = r4.getWidth()
            int r1 = r4.getHeight()
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r1, r2)
            android.graphics.Canvas r1 = new android.graphics.Canvas
            r1.<init>(r0)
            r1.drawColor(r3)
            r4.draw(r1)
            return r0
    }

    static void b(com.kwad.components.core.widget.KsLogoView r0) {
            r0.su()
            return
    }

    static com.kwad.components.core.widget.KsLogoView.a c(com.kwad.components.core.widget.KsLogoView r0) {
            com.kwad.components.core.widget.KsLogoView$a r0 = r0.YY
            return r0
    }

    private void init() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            int r1 = com.kwad.sdk.R.layout.ksad_logo_layout
            com.kwad.sdk.m.l.inflate(r0, r1, r3)
            int r0 = com.kwad.sdk.R.id.ksad_logo_text
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.YW = r0
            int r0 = com.kwad.sdk.R.id.ksad_logo_icon
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.YX = r0
            android.graphics.drawable.Drawable r0 = r3.getBackground()
            if (r0 != 0) goto L25
            r0 = 1
            goto L26
        L25:
            r0 = 0
        L26:
            r3.YV = r0
            if (r0 == 0) goto L42
            android.widget.ImageView r0 = r3.YX
            android.content.res.Resources r1 = r3.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_logo_gray
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setImageDrawable(r1)
            android.widget.TextView r0 = r3.YW
            r1 = -6513508(0xffffffffff9c9c9c, float:NaN)
        L3e:
            r0.setTextColor(r1)
            return
        L42:
            android.widget.ImageView r0 = r3.YX
            android.content.res.Resources r1 = r3.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_logo_white
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            r0.setImageDrawable(r1)
            android.widget.TextView r0 = r3.YW
            r1 = -1711276033(0xffffffff99ffffff, float:-2.6469778E-23)
            goto L3e
    }

    private void su() {
            r2 = this;
            android.content.Context r0 = r2.getContext()
            android.content.res.Resources r0 = r0.getResources()
            boolean r1 = r2.YV
            if (r1 == 0) goto Lf
            int r1 = com.kwad.sdk.R.drawable.ksad_logo_gray
            goto L11
        Lf:
            int r1 = com.kwad.sdk.R.drawable.ksad_logo_white
        L11:
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            android.widget.ImageView r1 = r2.YX
            r1.setImageDrawable(r0)
            return
    }

    public final void aa(com.kwad.sdk.core.response.model.AdTemplate r7) {
            r6 = this;
            int r0 = com.kwad.sdk.R.id.ksad_logo_container
            android.view.View r0 = r6.findViewById(r0)
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r7)
            boolean r2 = r6.YV
            if (r2 == 0) goto L13
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r2 = r1.adBaseInfo
            java.lang.String r2 = r2.adGrayMarkIcon
            goto L17
        L13:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r2 = r1.adBaseInfo
            java.lang.String r2 = r2.adMarkIcon
        L17:
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            r4 = 0
            if (r3 == 0) goto L46
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r3 = r1.adBaseInfo
            java.lang.String r3 = r3.adSourceDescription
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L46
            android.widget.TextView r7 = r6.YW
            r7.setVisibility(r4)
            android.widget.TextView r7 = r6.YW
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.av(r1)
            r7.setText(r1)
            android.widget.ImageView r7 = r6.YX
            r7.setVisibility(r4)
            r6.su()
            com.kwad.components.core.widget.KsLogoView$a r7 = r6.YY
            if (r7 == 0) goto L90
        L42:
            r7.kh()
            goto L90
        L46:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r3 = r1.adBaseInfo
            java.lang.String r3 = r3.adSourceDescription
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            r5 = 8
            if (r3 != 0) goto L61
            android.widget.TextView r3 = r6.YW
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.av(r1)
            r3.setText(r1)
            android.widget.TextView r1 = r6.YW
            r1.setVisibility(r4)
            goto L6d
        L61:
            android.widget.TextView r1 = r6.YW
            r1.setVisibility(r5)
            android.widget.TextView r1 = r6.YW
            java.lang.String r3 = ""
            r1.setText(r3)
        L6d:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L80
            android.widget.ImageView r1 = r6.YX
            com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener r3 = r6.ei
            com.kwad.sdk.core.imageloader.KSImageLoader.loadFeeImage(r1, r2, r7, r3)
            android.widget.ImageView r7 = r6.YX
            r7.setVisibility(r4)
            goto L90
        L80:
            android.widget.ImageView r7 = r6.YX
            r7.setVisibility(r5)
            android.widget.ImageView r7 = r6.YX
            r1 = 0
            r7.setImageDrawable(r1)
            com.kwad.components.core.widget.KsLogoView$a r7 = r6.YY
            if (r7 == 0) goto L90
            goto L42
        L90:
            r0.setVisibility(r4)
            return
    }

    public android.widget.ImageView getIcon() {
            r1 = this;
            android.widget.ImageView r0 = r1.YX
            return r0
    }

    public android.widget.TextView getTextView() {
            r1 = this;
            android.widget.TextView r0 = r1.YW
            return r0
    }

    public void setLogoLoadFinishListener(com.kwad.components.core.widget.KsLogoView.a r1) {
            r0 = this;
            r0.YY = r1
            return
    }
}
