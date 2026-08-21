package com.tkay.basead.ui;

import android.content.Context;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import com.tkay.basead.a.e;
import com.tkay.basead.c.f;
import com.tkay.basead.ui.PanelView;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.l;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.j.c;
import java.util.ArrayList;
import java.util.Timer;
import java.util.TimerTask;

public class ThirdPartyFullScreenATView extends BaseScreenATView {
    public static final String TAG = ThirdPartyFullScreenATView.class.getSimpleName();
    View ae;
    Timer af;
    private BaseAd ag;
    private final com.tkay.core.common.j.a ah;
    private final com.tkay.core.common.j.b ai;

    public ThirdPartyFullScreenATView(Context context) {
        super(context);
        this.ah = c.a();
        this.ai = new com.tkay.core.common.j.b() {
            @Override
            public final void run() {
                ThirdPartyFullScreenATView.this.G();
            }
        };
    }

    public ThirdPartyFullScreenATView(Context context, i iVar, h hVar, String str, int i, int i2, BaseAd baseAd) {
        super(context, iVar, hVar, str, i, i2);
        this.ah = c.a();
        this.ai = new com.tkay.core.common.j.b() {
            @Override
            public final void run() {
                ThirdPartyFullScreenATView.this.G();
            }
        };
        this.ag = baseAd;
        this.ae = baseAd.getAdMediaView(new Object[0]);
        setId(com.tkay.core.common.l.h.a(getContext(), "myoffer_thirdparty_full_screen_view_id", "id"));
        this.G = 0;
    }

    @Override
    protected final void a() {
        LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_thirdparty_full_screen", "layout"), this);
    }

    @Override
    public void init() {
        b();
        this.F = c(this.Q);
        this.ag.setNativeEventListener(new l() {
            @Override
            public final void onAdDislikeButtonClick() {
            }

            @Override
            public final void onDeeplinkCallback(boolean z) {
            }

            @Override
            public final void onDownloadConfirmCallback(Context context, View view, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
            }

            @Override
            public final void onAdImpressed() {
                if (ThirdPartyFullScreenATView.this.E != null) {
                    ThirdPartyFullScreenATView.this.E.a();
                }
            }

            @Override
            public final void onAdClicked(View view) {
                if (ThirdPartyFullScreenATView.this.E != null) {
                    ThirdPartyFullScreenATView.this.E.a(1);
                }
            }

            @Override
            public final void onAdVideoStart() {
                ThirdPartyFullScreenATView.a(ThirdPartyFullScreenATView.this);
                if (ThirdPartyFullScreenATView.this.E != null) {
                    ThirdPartyFullScreenATView.this.E.b();
                }
            }

            @Override
            public final void onAdVideoEnd() {
                ThirdPartyFullScreenATView.b(ThirdPartyFullScreenATView.this);
                ThirdPartyFullScreenATView.this.G();
                if (ThirdPartyFullScreenATView.this.E != null) {
                    ThirdPartyFullScreenATView.this.E.c();
                }
                ThirdPartyFullScreenATView.this.p();
            }

            @Override
            public final void a(String str, String str2) {
                ThirdPartyFullScreenATView.this.p();
                ThirdPartyFullScreenATView.this.a(f.a(str, str2));
            }

            @Override
            public final void onAdVideoProgress(int i) {
                ThirdPartyFullScreenATView.b(ThirdPartyFullScreenATView.this);
                ThirdPartyFullScreenATView.a(ThirdPartyFullScreenATView.this, i);
            }
        });
        if (!this.u) {
            if (1 == this.a || 3 != this.a) {
                return;
            }
            if (TextUtils.equals(this.ag.getAdType(), "1") && this.ae != null) {
                J();
                c();
                if (this.L >= 0) {
                    if (this.L > 0) {
                        this.ah.a(this.ai, this.L, true);
                        return;
                    } else {
                        G();
                        return;
                    }
                }
                return;
            }
        }
        J();
        p();
    }

    private void K() {
        if (this.L < 0) {
            return;
        }
        if (this.L > 0) {
            this.ah.a(this.ai, this.L, true);
        } else {
            G();
        }
    }

    private void e(int i) {
        post(new -$$Lambda$ThirdPartyFullScreenATView$KGTMASoqLZMXr69F-klAnlgxrX4(this, i));
    }

    private void f(int i) {
        int i2 = i * 1000;
        if (this.H != null && this.H.isShown()) {
            this.H.refresh(i2);
        }
        if (this.L < 0 || i2 < this.L) {
            return;
        }
        G();
    }

    private void L() {
        ArrayList arrayList = new ArrayList();
        int iX = this.c.m.x();
        if (iX == 0) {
            arrayList.addAll(this.y.getClickViews());
            arrayList.add(this.y);
            if (this.z != null) {
                arrayList.add(this.z);
            }
        } else if (iX != 1) {
            if (iX == 2) {
                arrayList.addAll(this.y.getClickViews());
                arrayList.add(this.y);
            }
        } else if (this.y.getCTAButton() != null) {
            arrayList.add(this.y.getCTAButton());
        }
        this.ag.registerListener(this, arrayList, null);
    }

    @Override
    protected final void c() {
        if (this.ae != null) {
            this.w.addView(this.ae, 0, new RelativeLayout.LayoutParams(-1, -1));
            d(((int) this.ag.getVideoDuration()) * 1000);
            D();
            L();
        }
    }

    @Override
    protected final void v() {
        if (this.y != null) {
            this.y.setVisibility(4);
            this.y.init(this.d, this.c, this.t, false, new PanelView.a() {
                @Override
                public final void a() {
                }

                @Override
                public final boolean b() {
                    return false;
                }
            });
        }
        w();
    }

    @Override
    protected final void z() {
        if (this.K == null) {
            return;
        }
        if (this.M) {
            this.K.setMute(true);
        } else {
            this.K.setMute(false);
        }
        this.K.setVisibility(4);
        this.K.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (ThirdPartyFullScreenATView.this.ae == null || ThirdPartyFullScreenATView.this.K == null || ThirdPartyFullScreenATView.this.ag == null) {
                    return;
                }
                ThirdPartyFullScreenATView.this.M = !r2.M;
                ThirdPartyFullScreenATView.this.K.setMute(ThirdPartyFullScreenATView.this.M);
                ThirdPartyFullScreenATView.this.ag.setVideoMute(ThirdPartyFullScreenATView.this.M);
            }
        });
    }

    @Override
    protected final boolean c(int i) {
        if (i == 0 || i == 1 || i == 2 || i == 5 || i == 6) {
            return e.a(this.d);
        }
        return i == 8;
    }

    @Override
    protected final void w() {
        if (this.y != null) {
            if (!e.a(this.d)) {
                this.Q = 8;
            } else {
                this.Q = 0;
            }
            this.y.setLayoutType(this.Q);
            if (this.Q == 8 && this.c.m.x() == 0) {
                this.y.getCTAButton().setVisibility(8);
            }
            this.y.setVisibility(0);
        }
    }

    @Override
    protected final void J() {
        this.O = this.C;
        this.P = this.D;
    }

    @Override
    protected final void I() {
        View view = this.ae;
        if (view != null && view.getParent() != null) {
            ((ViewGroup) this.ae.getParent()).removeView(this.ae);
        }
        if (this.H != null) {
            this.H.setVisibility(8);
        }
        if (this.K != null) {
            this.K.setVisibility(8);
        }
    }

    @Override
    protected final void G() {
        super.G();
        this.ah.a(this.ai);
    }

    @Override
    protected final void u() {
        String strU = this.d.u();
        if (TextUtils.isEmpty(strU)) {
            return;
        }
        com.tkay.basead.a.f.a();
        int[] iArrA = com.tkay.core.common.l.b.a(com.tkay.basead.a.f.a(2, strU));
        if (iArrA != null) {
            this.ac = iArrA[0];
            this.ad = iArrA[1];
        }
    }

    @Override
    protected final int q() {
        if (this.Q == 8) {
            return this.Q;
        }
        return this.C < this.D ? this.ac >= this.ad ? 1 : 5 : this.ac < this.ad ? 2 : 6;
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x0073  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected final void H() {
        int iA;
        View shakeView;
        if (this.w == null || this.z == null) {
            return;
        }
        this.z.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
        if (c(this.Q)) {
            int i = this.Q;
            if (i == 1) {
                this.w.setBackgroundColor(-1);
                int i2 = (int) (this.D * 0.5f);
                if (TextUtils.isEmpty(this.d.t())) {
                    iA = this.D - i2;
                } else {
                    iA = (this.D - i2) + com.tkay.core.common.l.h.a(getContext(), 50.0f);
                }
                this.z.setLayoutParams(new RelativeLayout.LayoutParams(-1, i2));
                this.z.setNeedArc(true);
                RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.y.getLayoutParams();
                if (layoutParams != null) {
                    layoutParams.width = this.C;
                    layoutParams.height = iA;
                    this.y.setLayoutParams(layoutParams);
                    this.y.removeAllViews();
                    this.y.setLayoutType(this.Q);
                }
            } else if (i == 2) {
                int iA2 = com.tkay.core.common.l.h.a(getContext(), 300.0f);
                this.z.setLayoutParams(new RelativeLayout.LayoutParams(this.C - iA2, -1));
                RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) this.y.getLayoutParams();
                if (layoutParams2 != null) {
                    layoutParams2.width = iA2;
                    layoutParams2.height = -1;
                    this.y.setLayoutParams(layoutParams2);
                    this.y.removeAllViews();
                    this.y.setLayoutType(this.Q);
                }
            } else if (i == 5) {
                int i3 = (int) (this.D * 0.5f);
                this.z.setLayoutParams(new RelativeLayout.LayoutParams(-1, this.D - i3));
                RelativeLayout.LayoutParams layoutParams3 = (RelativeLayout.LayoutParams) this.y.getLayoutParams();
                if (layoutParams3 != null) {
                    layoutParams3.width = this.C;
                    layoutParams3.height = i3;
                    this.y.setLayoutParams(layoutParams3);
                    this.y.removeAllViews();
                    this.y.setLayoutType(this.Q);
                }
            } else if (i != 6) {
                if (i == 8 && (shakeView = this.y.getShakeView()) != null) {
                    shakeView.setVisibility(8);
                }
            }
        }
        this.w.addView(this.z, 1);
        L();
    }

    @Override
    protected final void A() {
        super.C();
    }

    @Override
    protected void destroy() {
        super.destroy();
        Timer timer = this.af;
        if (timer != null) {
            timer.cancel();
            this.af = null;
        }
        this.ah.a(this.ai);
    }

    private void M() {
        if (this.af == null) {
            Timer timer = new Timer();
            this.af = timer;
            timer.schedule(new 5(), 0L, 300L);
        }
    }

    final class 5 extends TimerTask {
        5() {
        }

        @Override
        public final void run() {
            ThirdPartyFullScreenATView thirdPartyFullScreenATView = ThirdPartyFullScreenATView.this;
            ThirdPartyFullScreenATView.a(thirdPartyFullScreenATView, (int) thirdPartyFullScreenATView.ag.getVideoProgress());
        }
    }

    private void N() {
        Timer timer = this.af;
        if (timer != null) {
            timer.cancel();
        }
    }

    private void O() {
        Timer timer = this.af;
        if (timer != null) {
            timer.cancel();
            this.af = null;
        }
        this.ah.a(this.ai);
    }

    static void a(ThirdPartyFullScreenATView thirdPartyFullScreenATView) {
        if (thirdPartyFullScreenATView.af == null) {
            Timer timer = new Timer();
            thirdPartyFullScreenATView.af = timer;
            timer.schedule(thirdPartyFullScreenATView.new 5(), 0L, 300L);
        }
    }

    static void b(ThirdPartyFullScreenATView thirdPartyFullScreenATView) {
        Timer timer = thirdPartyFullScreenATView.af;
        if (timer != null) {
            timer.cancel();
        }
    }

    static void a(ThirdPartyFullScreenATView thirdPartyFullScreenATView, int i) {
        thirdPartyFullScreenATView.post(new -$$Lambda$ThirdPartyFullScreenATView$KGTMASoqLZMXr69F-klAnlgxrX4(thirdPartyFullScreenATView, i));
    }
}
