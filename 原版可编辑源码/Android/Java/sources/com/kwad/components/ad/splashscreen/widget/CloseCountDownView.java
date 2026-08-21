package com.kwad.components.ad.splashscreen.widget;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.m.l;

public class CloseCountDownView extends LinearLayout {
    private a Ep;
    private String Fc;
    private int Fd;
    private TextView Fe;
    private TextView Ff;
    private ImageView Fg;
    private Runnable Fh;
    private boolean nL;

    public interface a {
        void dJ();

        void kV();
    }

    public CloseCountDownView(Context context) {
        super(context);
        this.Fc = "%ss";
        this.Fd = 5;
        this.nL = false;
        this.Fh = new Runnable() {
            @Override
            public final void run() {
                if (CloseCountDownView.this.nL) {
                    CloseCountDownView.this.postDelayed(this, 300L);
                    return;
                }
                if (CloseCountDownView.this.Fd <= 0) {
                    if (CloseCountDownView.this.Ep != null) {
                        CloseCountDownView.this.Ep.kV();
                    }
                } else {
                    CloseCountDownView.this.postDelayed(this, 1000L);
                    CloseCountDownView closeCountDownView = CloseCountDownView.this;
                    closeCountDownView.ad(closeCountDownView.Fd);
                    CloseCountDownView.d(CloseCountDownView.this);
                }
            }
        };
        Z(context);
    }

    public CloseCountDownView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.Fc = "%ss";
        this.Fd = 5;
        this.nL = false;
        this.Fh = new Runnable() {
            @Override
            public final void run() {
                if (CloseCountDownView.this.nL) {
                    CloseCountDownView.this.postDelayed(this, 300L);
                    return;
                }
                if (CloseCountDownView.this.Fd <= 0) {
                    if (CloseCountDownView.this.Ep != null) {
                        CloseCountDownView.this.Ep.kV();
                    }
                } else {
                    CloseCountDownView.this.postDelayed(this, 1000L);
                    CloseCountDownView closeCountDownView = CloseCountDownView.this;
                    closeCountDownView.ad(closeCountDownView.Fd);
                    CloseCountDownView.d(CloseCountDownView.this);
                }
            }
        };
        Z(context);
    }

    public CloseCountDownView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.Fc = "%ss";
        this.Fd = 5;
        this.nL = false;
        this.Fh = new Runnable() {
            @Override
            public final void run() {
                if (CloseCountDownView.this.nL) {
                    CloseCountDownView.this.postDelayed(this, 300L);
                    return;
                }
                if (CloseCountDownView.this.Fd <= 0) {
                    if (CloseCountDownView.this.Ep != null) {
                        CloseCountDownView.this.Ep.kV();
                    }
                } else {
                    CloseCountDownView.this.postDelayed(this, 1000L);
                    CloseCountDownView closeCountDownView = CloseCountDownView.this;
                    closeCountDownView.ad(closeCountDownView.Fd);
                    CloseCountDownView.d(CloseCountDownView.this);
                }
            }
        };
        Z(context);
    }

    public CloseCountDownView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.Fc = "%ss";
        this.Fd = 5;
        this.nL = false;
        this.Fh = new Runnable() {
            @Override
            public final void run() {
                if (CloseCountDownView.this.nL) {
                    CloseCountDownView.this.postDelayed(this, 300L);
                    return;
                }
                if (CloseCountDownView.this.Fd <= 0) {
                    if (CloseCountDownView.this.Ep != null) {
                        CloseCountDownView.this.Ep.kV();
                    }
                } else {
                    CloseCountDownView.this.postDelayed(this, 1000L);
                    CloseCountDownView closeCountDownView = CloseCountDownView.this;
                    closeCountDownView.ad(closeCountDownView.Fd);
                    CloseCountDownView.d(CloseCountDownView.this);
                }
            }
        };
        Z(context);
    }

    private void Z(Context context) {
        setOrientation(0);
        l.inflate(context, R.layout.ksad_endcard_close_view, this);
        this.Fe = (TextView) findViewById(R.id.ksad_ad_endcard_second);
        this.Ff = (TextView) findViewById(R.id.ksad_ad_endcard_line);
        ImageView imageView = (ImageView) findViewById(R.id.ksad_splash_endcard_close_img);
        this.Fg = imageView;
        imageView.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (CloseCountDownView.this.Ep != null) {
                    CloseCountDownView.this.Ep.dJ();
                }
            }
        });
    }

    private void ad(int i) {
        this.Fe.setText(String.format(this.Fc, Integer.valueOf(i)));
    }

    static int d(CloseCountDownView closeCountDownView) {
        int i = closeCountDownView.Fd;
        closeCountDownView.Fd = i - 1;
        return i;
    }

    private void eX() {
        post(this.Fh);
    }

    private void eY() {
        this.nL = true;
    }

    private void eZ() {
        this.nL = false;
    }

    public final void a(AdInfo adInfo) {
        Context context;
        float f;
        boolean zBV = com.kwad.sdk.core.response.b.a.bV(adInfo);
        this.Fd = com.kwad.sdk.core.response.b.a.bU(adInfo);
        if (zBV) {
            this.Fe.setVisibility(0);
            this.Ff.setVisibility(0);
            ad(this.Fd);
            context = getContext();
            f = 12.0f;
        } else {
            context = getContext();
            f = 4.0f;
        }
        setPadding(com.kwad.sdk.d.a.a.a(context, f), 0, com.kwad.sdk.d.a.a.a(getContext(), f), 0);
        eX();
    }

    public final void aK() {
        eZ();
    }

    public final void aL() {
        eY();
    }

    public final void bd() {
        if (getHandler() != null) {
            getHandler().removeCallbacksAndMessages(null);
        }
    }

    public void setOnViewClickListener(a aVar) {
        this.Ep = aVar;
    }
}
