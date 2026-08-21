package com.kwad.components.core.widget;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.core.assist.FailReason;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener;
import com.kwad.sdk.m.l;

/* JADX INFO: loaded from: classes2.dex */
public class KsLogoView extends LinearLayout {
    private boolean YV;
    TextView YW;
    ImageView YX;
    private a YY;
    private SimpleImageLoadingListener ei;

    public interface a {
        void kh();
    }

    public KsLogoView(Context context) {
        this(context, (AttributeSet) null);
    }

    public KsLogoView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public KsLogoView(Context context, AttributeSet attributeSet, int i) {
        super(l.wrapContextIfNeed(context), attributeSet, i);
        this.ei = new SimpleImageLoadingListener() { // from class: com.kwad.components.core.widget.KsLogoView.1
            @Override // com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
            public final void onLoadingComplete(String str, View view, DecodedResult decodedResult) {
                if (KsLogoView.this.YY != null) {
                    KsLogoView.this.YY.kh();
                }
            }

            @Override // com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
            public final void onLoadingFailed(String str, View view, FailReason failReason) {
                KsLogoView.this.su();
                if (KsLogoView.this.YY != null) {
                    KsLogoView.this.YY.kh();
                }
            }
        };
        init();
    }

    public KsLogoView(Context context, boolean z) {
        super(l.wrapContextIfNeed(context));
        this.ei = new SimpleImageLoadingListener() { // from class: com.kwad.components.core.widget.KsLogoView.1
            @Override // com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
            public final void onLoadingComplete(String str, View view, DecodedResult decodedResult) {
                if (KsLogoView.this.YY != null) {
                    KsLogoView.this.YY.kh();
                }
            }

            @Override // com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
            public final void onLoadingFailed(String str, View view, FailReason failReason) {
                KsLogoView.this.su();
                if (KsLogoView.this.YY != null) {
                    KsLogoView.this.YY.kh();
                }
            }
        };
        if (z) {
            setBackground(getResources().getDrawable(R.drawable.ksad_splash_logo_bg));
        }
        init();
    }

    public static Bitmap a(KsLogoView ksLogoView) {
        TextView textView = ksLogoView.getTextView();
        int iCeil = ((ksLogoView.getVisibility() != 0 || textView.getText() == null || textView.getText().length() <= 0) ? 0 : ((int) Math.ceil(textView.getPaint().measureText(textView.getText().toString()))) + textView.getPaddingLeft() + textView.getPaddingRight()) + (ksLogoView.getIcon().getVisibility() == 0 ? com.kwad.sdk.d.a.a.a(ksLogoView.getContext(), 18.0f) : 0);
        int iA = com.kwad.sdk.d.a.a.a(ksLogoView.getContext(), 16.0f);
        ksLogoView.measure(iCeil, iA);
        ksLogoView.layout(0, 0, iCeil, iA);
        Bitmap bitmapCreateBitmap = Bitmap.createBitmap(ksLogoView.getWidth(), ksLogoView.getHeight(), Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(bitmapCreateBitmap);
        canvas.drawColor(0);
        ksLogoView.draw(canvas);
        return bitmapCreateBitmap;
    }

    private void init() {
        TextView textView;
        int i;
        l.inflate(getContext(), R.layout.ksad_logo_layout, this);
        this.YW = (TextView) findViewById(R.id.ksad_logo_text);
        this.YX = (ImageView) findViewById(R.id.ksad_logo_icon);
        boolean z = getBackground() == null;
        this.YV = z;
        if (z) {
            this.YX.setImageDrawable(getResources().getDrawable(R.drawable.ksad_logo_gray));
            textView = this.YW;
            i = -6513508;
        } else {
            this.YX.setImageDrawable(getResources().getDrawable(R.drawable.ksad_logo_white));
            textView = this.YW;
            i = -1711276033;
        }
        textView.setTextColor(i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void su() {
        this.YX.setImageDrawable(getContext().getResources().getDrawable(this.YV ? R.drawable.ksad_logo_gray : R.drawable.ksad_logo_white));
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0042 A[PHI: r7
      0x0042: PHI (r7v5 com.kwad.components.core.widget.KsLogoView$a) = (r7v3 com.kwad.components.core.widget.KsLogoView$a), (r7v9 com.kwad.components.core.widget.KsLogoView$a) binds: [B:21:0x008d, B:11:0x0040] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void aa(com.kwad.sdk.core.response.model.AdTemplate r7) {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.components.core.widget.KsLogoView.aa(com.kwad.sdk.core.response.model.AdTemplate):void");
    }

    public ImageView getIcon() {
        return this.YX;
    }

    public TextView getTextView() {
        return this.YW;
    }

    public void setLogoLoadFinishListener(a aVar) {
        this.YY = aVar;
    }
}
