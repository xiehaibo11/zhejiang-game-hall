package com.kwad.components.core.widget;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.m.l;

public class KsAutoCloseView extends LinearLayout implements View.OnClickListener {
    private static String AZ = "%s秒后自动关闭";
    private TextView YP;
    private ImageView YQ;
    private a YR;
    private boolean YS;
    private boolean YT;
    private int countDown;

    public interface a {
        void dI();

        void dJ();
    }

    public KsAutoCloseView(Context context) {
        super(context);
        this.countDown = 10;
        this.YS = true;
        this.YT = false;
        R(context);
    }

    public KsAutoCloseView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.countDown = 10;
        this.YS = true;
        this.YT = false;
        R(context);
    }

    public KsAutoCloseView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.countDown = 10;
        this.YS = true;
        this.YT = false;
        R(context);
    }

    public KsAutoCloseView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.countDown = 10;
        this.YS = true;
        this.YT = false;
        R(context);
    }

    private void R(Context context) {
        l.inflate(context, R.layout.ksad_auto_close, this);
        this.YP = (TextView) findViewById(R.id.ksad_auto_close_text);
        ImageView imageView = (ImageView) findViewById(R.id.ksad_auto_close_btn);
        this.YQ = imageView;
        imageView.setOnClickListener(this);
    }

    static int e(KsAutoCloseView ksAutoCloseView) {
        int i = ksAutoCloseView.countDown;
        ksAutoCloseView.countDown = i - 1;
        return i;
    }

    private void w(int i) {
        this.YP.setText(String.format(AZ, Integer.valueOf(i)));
    }

    public final void V(int i) {
        if (i <= 0) {
            return;
        }
        this.countDown = i;
        post(new Runnable() {
            @Override
            public final void run() {
                if (KsAutoCloseView.this.YS) {
                    if (!KsAutoCloseView.this.YT) {
                        if (KsAutoCloseView.this.countDown == 0) {
                            if (KsAutoCloseView.this.YR != null) {
                                KsAutoCloseView.this.YR.dI();
                                return;
                            }
                            return;
                        } else {
                            KsAutoCloseView ksAutoCloseView = KsAutoCloseView.this;
                            ksAutoCloseView.w(ksAutoCloseView.countDown);
                            KsAutoCloseView.e(KsAutoCloseView.this);
                        }
                    }
                    KsAutoCloseView.this.postDelayed(this, 1000L);
                }
            }
        });
    }

    public final void aR(boolean z) {
        this.YS = z;
        int i = z ? 0 : 8;
        TextView textView = this.YP;
        if (textView != null) {
            textView.setVisibility(i);
        }
    }

    @Override
    public void onClick(View view) {
        if (this.YR != null && view.equals(this.YQ)) {
            this.YR.dJ();
        }
    }

    public void setCountDownPaused(boolean z) {
        this.YT = z;
    }

    public void setViewListener(a aVar) {
        this.YR = aVar;
    }
}
