package com.kwad.components.core.widget;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.imageloader.core.assist.FailReason;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;

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
        this.ei = new SimpleImageLoadingListener() {
            @Override
            public final void onLoadingComplete(String str, View view, DecodedResult decodedResult) {
                if (KsLogoView.this.YY != null) {
                    KsLogoView.this.YY.kh();
                }
            }

            @Override
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
        this.ei = new SimpleImageLoadingListener() {
            @Override
            public final void onLoadingComplete(String str, View view, DecodedResult decodedResult) {
                if (KsLogoView.this.YY != null) {
                    KsLogoView.this.YY.kh();
                }
            }

            @Override
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

    private void su() {
        this.YX.setImageDrawable(getContext().getResources().getDrawable(this.YV ? R.drawable.ksad_logo_gray : R.drawable.ksad_logo_white));
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0042 A[PHI: r7
      0x0042: PHI (r7v5 com.kwad.components.core.widget.KsLogoView$a) = (r7v3 com.kwad.components.core.widget.KsLogoView$a), (r7v9 com.kwad.components.core.widget.KsLogoView$a) binds: [B:21:0x008d, B:11:0x0040] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void aa(AdTemplate adTemplate) {
        a aVar;
        View viewFindViewById = findViewById(R.id.ksad_logo_container);
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        String str = this.YV ? adInfoCg.adBaseInfo.adGrayMarkIcon : adInfoCg.adBaseInfo.adMarkIcon;
        if (TextUtils.isEmpty(str) && TextUtils.isEmpty(adInfoCg.adBaseInfo.adSourceDescription)) {
            this.YW.setVisibility(0);
            this.YW.setText(com.kwad.sdk.core.response.b.a.av(adInfoCg));
            this.YX.setVisibility(0);
            su();
            aVar = this.YY;
            if (aVar != null) {
            }
        } else {
            if (TextUtils.isEmpty(adInfoCg.adBaseInfo.adSourceDescription)) {
                this.YW.setVisibility(8);
                this.YW.setText("");
            } else {
                this.YW.setText(com.kwad.sdk.core.response.b.a.av(adInfoCg));
                this.YW.setVisibility(0);
            }
            if (TextUtils.isEmpty(str)) {
                this.YX.setVisibility(8);
                this.YX.setImageDrawable(null);
                aVar = this.YY;
                if (aVar != null) {
                    aVar.kh();
                }
            } else {
                KSImageLoader.loadFeeImage(this.YX, str, adTemplate, this.ei);
                this.YX.setVisibility(0);
            }
        }
        viewFindViewById.setVisibility(0);
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
