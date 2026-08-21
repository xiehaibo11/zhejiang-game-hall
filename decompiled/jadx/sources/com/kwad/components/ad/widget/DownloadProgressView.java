package com.kwad.components.ad.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.TextView;
import com.kwad.components.core.page.widget.TextProgressBar;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;

/* JADX INFO: loaded from: classes2.dex */
public class DownloadProgressView extends FrameLayout {
    protected TextView Hm;
    private int Hn;
    private int Ho;
    private int Hp;
    private int Hq;
    private Drawable Hr;
    private Drawable Hs;
    private String Ht;
    protected TextProgressBar cX;

    /* JADX INFO: renamed from: cn, reason: collision with root package name */
    private final KsAppDownloadListener f2819cn;
    protected AdInfo mAdInfo;
    protected AdTemplate mAdTemplate;

    public DownloadProgressView(Context context) {
        this(context, null);
    }

    public DownloadProgressView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public DownloadProgressView(Context context, AttributeSet attributeSet, int i) {
        super(l.wrapContextIfNeed(context), attributeSet, i);
        this.f2819cn = new com.kwad.sdk.core.download.a.a() { // from class: com.kwad.components.ad.widget.DownloadProgressView.2
            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onDownloadFailed() {
                DownloadProgressView.this.Hm.setText(com.kwad.sdk.core.response.b.a.aw(DownloadProgressView.this.mAdInfo));
                DownloadProgressView.this.Hm.setVisibility(0);
                DownloadProgressView.this.cX.setVisibility(8);
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onDownloadFinished() {
                DownloadProgressView.this.Hm.setVisibility(8);
                DownloadProgressView.this.cX.setVisibility(0);
                DownloadProgressView.this.cX.e(com.kwad.sdk.core.response.b.a.aM(DownloadProgressView.this.mAdTemplate), DownloadProgressView.this.cX.getMax());
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onIdle() {
                DownloadProgressView.this.Hm.setText(com.kwad.sdk.core.response.b.a.aw(DownloadProgressView.this.mAdInfo));
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onInstalled() {
                DownloadProgressView.this.Hm.setVisibility(8);
                DownloadProgressView.this.cX.setVisibility(0);
                DownloadProgressView.this.cX.e(com.kwad.sdk.core.response.b.a.U(DownloadProgressView.this.mAdInfo), DownloadProgressView.this.cX.getMax());
            }

            @Override // com.kwad.sdk.core.download.a.a
            public final void onPaused(int i2) {
                DownloadProgressView.this.Hm.setVisibility(8);
                DownloadProgressView.this.cX.setVisibility(0);
                DownloadProgressView.this.cX.e(com.kwad.sdk.core.response.b.a.Cz(), i2);
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onProgressUpdate(int i2) {
                DownloadProgressView.this.Hm.setVisibility(8);
                DownloadProgressView.this.cX.setVisibility(0);
                DownloadProgressView.this.cX.e(com.kwad.sdk.core.response.b.a.l(i2, DownloadProgressView.this.Ht), i2);
            }
        };
        initAttrs(context, attributeSet);
        initView();
    }

    private void initAttrs(Context context, AttributeSet attributeSet) {
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, R.styleable.ksad_DownloadProgressView);
        this.Hn = typedArrayObtainStyledAttributes.getColor(R.styleable.ksad_DownloadProgressView_ksad_downloadTextColor, -117146);
        this.Ho = typedArrayObtainStyledAttributes.getColor(R.styleable.ksad_DownloadProgressView_ksad_downloadLeftTextColor, -1);
        this.Hp = typedArrayObtainStyledAttributes.getColor(R.styleable.ksad_DownloadProgressView_ksad_downloadRightTextColor, -117146);
        this.Hq = typedArrayObtainStyledAttributes.getDimensionPixelSize(R.styleable.ksad_DownloadProgressView_ksad_downloadTextSize, com.kwad.sdk.d.a.a.a(getContext(), 11.0f));
        Drawable drawable = typedArrayObtainStyledAttributes.getDrawable(R.styleable.ksad_DownloadProgressView_ksad_progressDrawable);
        this.Hr = drawable;
        if (drawable == null) {
            this.Hr = getResources().getDrawable(R.drawable.ksad_feed_download_progress);
        }
        Drawable drawable2 = typedArrayObtainStyledAttributes.getDrawable(R.styleable.ksad_DownloadProgressView_ksad_backgroundDrawable);
        this.Hs = drawable2;
        if (drawable2 == null) {
            this.Hs = getResources().getDrawable(R.drawable.ksad_feed_app_download_before_bg);
        }
        String string = typedArrayObtainStyledAttributes.getString(R.styleable.ksad_DownloadProgressView_ksad_downloadingFormat);
        this.Ht = string;
        if (string == null) {
            this.Ht = "下载中  %s%%";
        }
        typedArrayObtainStyledAttributes.recycle();
    }

    private void initView() {
        l.inflate(getContext(), R.layout.ksad_download_progress_layout, this);
        TextProgressBar textProgressBar = (TextProgressBar) findViewById(R.id.ksad_progress_bar);
        this.cX = textProgressBar;
        textProgressBar.setTextDimen(this.Hq);
        this.cX.setTextColor(this.Ho, this.Hp);
        this.cX.setProgressDrawable(this.Hr);
        TextView textView = (TextView) findViewById(R.id.ksad_normal_text);
        this.Hm = textView;
        textView.setTextColor(this.Hn);
        this.Hm.setTextSize(0, this.Hq);
        this.Hm.setVisibility(0);
        this.Hm.setBackground(this.Hs);
        findViewById(R.id.ksad_foreground_cover).setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.ad.widget.DownloadProgressView.1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                DownloadProgressView.this.performClick();
            }
        });
    }

    public final void H(AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
        AdInfo adInfoCg = d.cg(adTemplate);
        this.mAdInfo = adInfoCg;
        this.Hm.setText(com.kwad.sdk.core.response.b.a.aw(adInfoCg));
        this.cX.setVisibility(8);
        this.Hm.setVisibility(0);
    }

    public KsAppDownloadListener getAppDownloadListener() {
        return this.f2819cn;
    }
}
