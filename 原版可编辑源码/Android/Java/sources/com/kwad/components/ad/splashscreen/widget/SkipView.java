package com.kwad.components.ad.splashscreen.widget;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.components.ad.splashscreen.local.SplashSkipViewModel;
import com.kwad.sdk.R;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.m.l;

public class SkipView extends LinearLayout implements com.kwad.components.ad.splashscreen.widget.a {
    private a EW;
    private Runnable Fh;
    private final b Gp;
    private View Gq;
    private TextView Gr;
    private TextView Gs;
    private int Gt;
    private boolean nL;
    private boolean sy;

    public interface a {
        void Z(int i);

        void kU();

        void kV();
    }

    static class b {
        private int Fd;
        private String Gv;
        private String Gw;
        private int Gx;
        private boolean Gy;
        private boolean Gz;

        private b() {
            this.Gv = "跳过";
            this.Gw = "";
            this.Gx = 5;
            this.Fd = 5;
            this.Gy = true;
            this.Gz = true;
        }

        b(byte b) {
            this();
        }

        static int d(b bVar) {
            int i = bVar.Fd;
            bVar.Fd = i - 1;
            return i;
        }

        private boolean lM() {
            return this.Gy && this.Gz;
        }

        public final void ad(String str) {
            this.Fd = -1;
            this.Gw = str;
        }

        public final void af(int i) {
            this.Gx = i;
            this.Fd = i;
        }

        public final String lK() {
            StringBuilder sb;
            int i;
            int i2 = this.Fd;
            if (i2 < 0) {
                return this.Gw;
            }
            if (i2 == 0) {
                sb = new StringBuilder();
                sb.append(this.Gw);
                i = 1;
            } else {
                sb = new StringBuilder();
                sb.append(this.Gw);
                i = this.Fd;
            }
            sb.append(i);
            return sb.toString();
        }

        public final boolean lL() {
            return this.Fd <= 0;
        }
    }

    public SkipView(Context context) {
        this(context, null);
    }

    public SkipView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public SkipView(Context context, AttributeSet attributeSet, int i) {
        super(l.wrapContextIfNeed(context), attributeSet, i);
        this.Gp = new b((byte) 0);
        this.Gt = -1;
        this.nL = false;
        this.sy = true;
        this.Fh = new Runnable() {
            @Override
            public final void run() {
                if (SkipView.this.nL) {
                    SkipView.this.postDelayed(this, 300L);
                    return;
                }
                SkipView skipView = SkipView.this;
                skipView.a(skipView.Gp);
                SkipView skipView2 = SkipView.this;
                skipView2.Y(skipView2.Gp.Gx - SkipView.this.Gp.Fd);
                if (!SkipView.this.Gp.lL()) {
                    SkipView.this.postDelayed(this, 1000L);
                    b.d(SkipView.this.Gp);
                } else if (SkipView.this.EW != null) {
                    SkipView.this.EW.kV();
                }
            }
        };
        init();
    }

    private void Y(int i) {
        a aVar = this.EW;
        if (aVar != null) {
            aVar.Z(i);
        }
    }

    private void a(b bVar) {
        if (bVar == null) {
            return;
        }
        if (this.Gr != null) {
            if (bVar.Gv != null) {
                this.Gr.setText(bVar.Gv);
            }
            this.Gr.setVisibility(this.Gp.Gy ? 0 : 8);
        }
        String strLK = bVar.lK();
        TextView textView = this.Gs;
        if (textView != null) {
            if (strLK != null) {
                textView.setText(strLK);
            }
            this.Gs.setVisibility(this.Gp.Gz ? 0 : 8);
        }
        if (this.Gq != null) {
            boolean zLM = this.Gp.lM();
            this.Gq.setVisibility(zLM ? 0 : 8);
            ViewGroup.LayoutParams layoutParams = getLayoutParams();
            if (layoutParams != null) {
                if (!zLM) {
                    layoutParams.width = -2;
                    invalidate();
                    return;
                }
                int i = this.Gt;
                if (i > 0) {
                    layoutParams.width = i;
                    invalidate();
                }
            }
        }
    }

    private void eX() {
        a(this.Gp);
        post(this.Fh);
    }

    private void eY() {
        this.nL = true;
    }

    private void eZ() {
        this.nL = false;
    }

    private void init() {
        setOrientation(0);
        l.inflate(getContext(), R.layout.ksad_skip_view, this);
        this.Gr = (TextView) findViewById(R.id.ksad_skip_view_skip);
        this.Gs = (TextView) findViewById(R.id.ksad_skip_view_timer);
        this.Gq = findViewById(R.id.ksad_skip_view_divider);
        setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (SkipView.this.EW != null) {
                    SkipView.this.EW.kU();
                }
            }
        });
        setSkipBtnVisible(true);
        setTimerBtnVisible(true);
    }

    private void lJ() {
        if (getVisibility() == 0) {
            return;
        }
        setVisibility(0);
        setAlpha(0.0f);
        animate().alpha(1.0f).setDuration(500L).start();
    }

    private void y(AdInfo adInfo) {
        setTimerBtnVisible(com.kwad.sdk.core.response.b.a.cj(adInfo));
    }

    @Override
    public final void a(SplashSkipViewModel splashSkipViewModel, AdInfo adInfo) {
        this.sy = com.kwad.sdk.core.response.b.a.ci(adInfo);
        setTimerPrefixText(d.a(com.kwad.components.ad.splashscreen.b.a.Cw));
        setTimerSecond(splashSkipViewModel.skipSecond);
        if (!com.kwad.sdk.core.response.b.a.aU(adInfo)) {
            eX();
        }
        setSkipText(com.kwad.sdk.core.response.b.a.bS(adInfo));
        setVisibility(8);
        y(adInfo);
    }

    @Override
    public final int ac(int i) {
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        layoutParams.height = com.kwad.sdk.d.a.a.a(getContext(), 35.0f);
        int width = getWidth();
        setLayoutParams(layoutParams);
        return width;
    }

    public final void ad(String str) {
        if (str == null) {
            return;
        }
        this.Gp.ad(str);
        a(this.Gp);
    }

    @Override
    public final void bd() {
        if (getHandler() != null) {
            getHandler().removeCallbacksAndMessages(null);
        }
    }

    @Override
    public void setLayoutParams(ViewGroup.LayoutParams layoutParams) {
        super.setLayoutParams(layoutParams);
        this.Gt = layoutParams.width;
    }

    @Override
    public void setOnViewListener(a aVar) {
        this.EW = aVar;
    }

    public void setSkipBtnVisible(boolean z) {
        this.Gp.Gy = z;
        a(this.Gp);
    }

    public void setSkipText(String str) {
        this.Gp.Gv = str;
        a(this.Gp);
    }

    public void setTimerBtnVisible(boolean z) {
        this.Gp.Gz = z;
        a(this.Gp);
    }

    public void setTimerPrefixText(String str) {
        this.Gp.Gw = str;
        a(this.Gp);
    }

    public void setTimerSecond(int i) {
        this.Gp.af(i);
        a(this.Gp);
    }

    @Override
    public final void w(AdInfo adInfo) {
        if (com.kwad.sdk.core.response.b.a.aU(adInfo)) {
            return;
        }
        eY();
    }

    @Override
    public final void x(AdInfo adInfo) {
        if (this.sy) {
            lJ();
        }
        if (com.kwad.sdk.core.response.b.a.aU(adInfo)) {
            return;
        }
        eZ();
    }
}
