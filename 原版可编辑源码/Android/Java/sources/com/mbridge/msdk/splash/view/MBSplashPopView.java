package com.mbridge.msdk.splash.view;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.os.Handler;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.mbridge.msdk.click.b;
import com.mbridge.msdk.click.h;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.c.c;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.y;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.confirmation.e;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.splash.d.d;
import com.tkay.expressad.foundation.h.i;
import java.util.concurrent.atomic.AtomicInteger;

public class MBSplashPopView extends RelativeLayout {
    public static final int TYPE_POP_DEFAULT = 1;
    public static final int TYPE_POP_LARGE = 4;
    public static final int TYPE_POP_MEDIUM = 3;
    public static final int TYPE_POP_SMALL = 2;
    private static final AtomicInteger c = new AtomicInteger(1);
    View.OnClickListener a;
    View.OnClickListener b;
    private String d;
    private String e;
    private int f;
    private CampaignEx g;
    private d h;
    private ImageView i;
    private ImageView j;
    private ImageView k;
    private ImageView l;
    private TextView m;
    private TextView n;
    private TextView o;
    private int p;
    private Handler q;
    private boolean r;
    private b s;
    private h t;
    private Runnable u;
    private Runnable v;

    static int m(MBSplashPopView mBSplashPopView) {
        int i = mBSplashPopView.p;
        mBSplashPopView.p = i - 1;
        return i;
    }

    public MBSplashPopView(Context context, a aVar, d dVar) {
        super(context);
        this.f = 1;
        this.p = -1;
        this.q = new Handler();
        this.r = false;
        this.t = new h() {
            @Override
            public final void onStartRedirection(Campaign campaign, String str) {
                int i;
                int i2 = 0;
                if (MBSplashPopView.this.f == 1) {
                    int iMin = Math.min(MBSplashPopView.this.getWidth(), MBSplashPopView.this.getHeight());
                    int iB = (ae.b(MBSplashPopView.this.getContext(), 60.0f) - Math.min(Math.max(iMin / 4, 70), iMin)) / 2;
                    int iB2 = ae.b(MBSplashPopView.this.getContext(), 23.0f) + iB;
                    int iB3 = iB + ae.b(MBSplashPopView.this.getContext(), 10.0f);
                    i2 = iB2;
                    i = iB3;
                } else {
                    i = 0;
                }
                ad.a(campaign, MBSplashPopView.this, i2, i);
            }

            @Override
            public final void onFinishRedirection(Campaign campaign, String str) {
                if (campaign == null) {
                    return;
                }
                CampaignEx campaignEx = (CampaignEx) campaign;
                if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
                    ad.a(MBSplashPopView.this);
                }
            }

            @Override
            public final void onRedirectionFailed(Campaign campaign, String str) {
                if (campaign == null) {
                    return;
                }
                CampaignEx campaignEx = (CampaignEx) campaign;
                if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
                    ad.a(MBSplashPopView.this);
                }
            }
        };
        this.u = new Runnable() {
            @Override
            public final void run() {
                if (MBSplashPopView.this.o != null) {
                    if (MBSplashPopView.this.p == 0) {
                        MBSplashPopView.this.p = -1;
                        MBSplashPopView.this.g();
                        MBSplashPopView.this.q.removeCallbacks(MBSplashPopView.this.u);
                        if (MBSplashPopView.this.h != null) {
                            MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), 5);
                            return;
                        }
                        return;
                    }
                    MBSplashPopView.m(MBSplashPopView.this);
                    MBSplashPopView.this.o.setText(String.valueOf(MBSplashPopView.this.p));
                    MBSplashPopView.this.q.postDelayed(MBSplashPopView.this.u, 1000L);
                }
            }
        };
        this.v = new Runnable() {
            @Override
            public final void run() {
                if (MBSplashPopView.this.h != null) {
                    MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), MBSplashPopView.this.getWidth(), MBSplashPopView.this.getHeight(), MBSplashPopView.this.f);
                }
            }
        };
        this.a = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (MBSplashPopView.this.h != null) {
                    MBSplashPopView mBSplashPopView = MBSplashPopView.this;
                    MBSplashPopView.a(mBSplashPopView, mBSplashPopView.g);
                }
            }
        };
        this.b = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (MBSplashPopView.this.p <= 0 && MBSplashPopView.this.h != null) {
                    MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), 4);
                }
            }
        };
        if (aVar == null) {
            throw new IllegalArgumentException("Parameters is NULL, can't gen view.");
        }
        this.e = aVar.b();
        this.d = aVar.a();
        this.f = aVar.c();
        this.g = aVar.d();
        this.h = dVar;
        a();
    }

    public MBSplashPopView(Context context) {
        super(context);
        this.f = 1;
        this.p = -1;
        this.q = new Handler();
        this.r = false;
        this.t = new h() {
            @Override
            public final void onStartRedirection(Campaign campaign, String str) {
                int i;
                int i2 = 0;
                if (MBSplashPopView.this.f == 1) {
                    int iMin = Math.min(MBSplashPopView.this.getWidth(), MBSplashPopView.this.getHeight());
                    int iB = (ae.b(MBSplashPopView.this.getContext(), 60.0f) - Math.min(Math.max(iMin / 4, 70), iMin)) / 2;
                    int iB2 = ae.b(MBSplashPopView.this.getContext(), 23.0f) + iB;
                    int iB3 = iB + ae.b(MBSplashPopView.this.getContext(), 10.0f);
                    i2 = iB2;
                    i = iB3;
                } else {
                    i = 0;
                }
                ad.a(campaign, MBSplashPopView.this, i2, i);
            }

            @Override
            public final void onFinishRedirection(Campaign campaign, String str) {
                if (campaign == null) {
                    return;
                }
                CampaignEx campaignEx = (CampaignEx) campaign;
                if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
                    ad.a(MBSplashPopView.this);
                }
            }

            @Override
            public final void onRedirectionFailed(Campaign campaign, String str) {
                if (campaign == null) {
                    return;
                }
                CampaignEx campaignEx = (CampaignEx) campaign;
                if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
                    ad.a(MBSplashPopView.this);
                }
            }
        };
        this.u = new Runnable() {
            @Override
            public final void run() {
                if (MBSplashPopView.this.o != null) {
                    if (MBSplashPopView.this.p == 0) {
                        MBSplashPopView.this.p = -1;
                        MBSplashPopView.this.g();
                        MBSplashPopView.this.q.removeCallbacks(MBSplashPopView.this.u);
                        if (MBSplashPopView.this.h != null) {
                            MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), 5);
                            return;
                        }
                        return;
                    }
                    MBSplashPopView.m(MBSplashPopView.this);
                    MBSplashPopView.this.o.setText(String.valueOf(MBSplashPopView.this.p));
                    MBSplashPopView.this.q.postDelayed(MBSplashPopView.this.u, 1000L);
                }
            }
        };
        this.v = new Runnable() {
            @Override
            public final void run() {
                if (MBSplashPopView.this.h != null) {
                    MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), MBSplashPopView.this.getWidth(), MBSplashPopView.this.getHeight(), MBSplashPopView.this.f);
                }
            }
        };
        this.a = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (MBSplashPopView.this.h != null) {
                    MBSplashPopView mBSplashPopView = MBSplashPopView.this;
                    MBSplashPopView.a(mBSplashPopView, mBSplashPopView.g);
                }
            }
        };
        this.b = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (MBSplashPopView.this.p <= 0 && MBSplashPopView.this.h != null) {
                    MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), 4);
                }
            }
        };
        this.f = 1;
        z.b("MBSplashPopView", "Please call setPopViewType() to init.");
    }

    public MBSplashPopView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f = 1;
        this.p = -1;
        this.q = new Handler();
        this.r = false;
        this.t = new h() {
            @Override
            public final void onStartRedirection(Campaign campaign, String str) {
                int i;
                int i2 = 0;
                if (MBSplashPopView.this.f == 1) {
                    int iMin = Math.min(MBSplashPopView.this.getWidth(), MBSplashPopView.this.getHeight());
                    int iB = (ae.b(MBSplashPopView.this.getContext(), 60.0f) - Math.min(Math.max(iMin / 4, 70), iMin)) / 2;
                    int iB2 = ae.b(MBSplashPopView.this.getContext(), 23.0f) + iB;
                    int iB3 = iB + ae.b(MBSplashPopView.this.getContext(), 10.0f);
                    i2 = iB2;
                    i = iB3;
                } else {
                    i = 0;
                }
                ad.a(campaign, MBSplashPopView.this, i2, i);
            }

            @Override
            public final void onFinishRedirection(Campaign campaign, String str) {
                if (campaign == null) {
                    return;
                }
                CampaignEx campaignEx = (CampaignEx) campaign;
                if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
                    ad.a(MBSplashPopView.this);
                }
            }

            @Override
            public final void onRedirectionFailed(Campaign campaign, String str) {
                if (campaign == null) {
                    return;
                }
                CampaignEx campaignEx = (CampaignEx) campaign;
                if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
                    ad.a(MBSplashPopView.this);
                }
            }
        };
        this.u = new Runnable() {
            @Override
            public final void run() {
                if (MBSplashPopView.this.o != null) {
                    if (MBSplashPopView.this.p == 0) {
                        MBSplashPopView.this.p = -1;
                        MBSplashPopView.this.g();
                        MBSplashPopView.this.q.removeCallbacks(MBSplashPopView.this.u);
                        if (MBSplashPopView.this.h != null) {
                            MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), 5);
                            return;
                        }
                        return;
                    }
                    MBSplashPopView.m(MBSplashPopView.this);
                    MBSplashPopView.this.o.setText(String.valueOf(MBSplashPopView.this.p));
                    MBSplashPopView.this.q.postDelayed(MBSplashPopView.this.u, 1000L);
                }
            }
        };
        this.v = new Runnable() {
            @Override
            public final void run() {
                if (MBSplashPopView.this.h != null) {
                    MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), MBSplashPopView.this.getWidth(), MBSplashPopView.this.getHeight(), MBSplashPopView.this.f);
                }
            }
        };
        this.a = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (MBSplashPopView.this.h != null) {
                    MBSplashPopView mBSplashPopView = MBSplashPopView.this;
                    MBSplashPopView.a(mBSplashPopView, mBSplashPopView.g);
                }
            }
        };
        this.b = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (MBSplashPopView.this.p <= 0 && MBSplashPopView.this.h != null) {
                    MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), 4);
                }
            }
        };
        this.f = 1;
        z.b("MBSplashPopView", "Please call setPopViewType() to init.");
    }

    public MBSplashPopView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f = 1;
        this.p = -1;
        this.q = new Handler();
        this.r = false;
        this.t = new h() {
            @Override
            public final void onStartRedirection(Campaign campaign, String str) {
                int i2;
                int i22 = 0;
                if (MBSplashPopView.this.f == 1) {
                    int iMin = Math.min(MBSplashPopView.this.getWidth(), MBSplashPopView.this.getHeight());
                    int iB = (ae.b(MBSplashPopView.this.getContext(), 60.0f) - Math.min(Math.max(iMin / 4, 70), iMin)) / 2;
                    int iB2 = ae.b(MBSplashPopView.this.getContext(), 23.0f) + iB;
                    int iB3 = iB + ae.b(MBSplashPopView.this.getContext(), 10.0f);
                    i22 = iB2;
                    i2 = iB3;
                } else {
                    i2 = 0;
                }
                ad.a(campaign, MBSplashPopView.this, i22, i2);
            }

            @Override
            public final void onFinishRedirection(Campaign campaign, String str) {
                if (campaign == null) {
                    return;
                }
                CampaignEx campaignEx = (CampaignEx) campaign;
                if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
                    ad.a(MBSplashPopView.this);
                }
            }

            @Override
            public final void onRedirectionFailed(Campaign campaign, String str) {
                if (campaign == null) {
                    return;
                }
                CampaignEx campaignEx = (CampaignEx) campaign;
                if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
                    ad.a(MBSplashPopView.this);
                }
            }
        };
        this.u = new Runnable() {
            @Override
            public final void run() {
                if (MBSplashPopView.this.o != null) {
                    if (MBSplashPopView.this.p == 0) {
                        MBSplashPopView.this.p = -1;
                        MBSplashPopView.this.g();
                        MBSplashPopView.this.q.removeCallbacks(MBSplashPopView.this.u);
                        if (MBSplashPopView.this.h != null) {
                            MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), 5);
                            return;
                        }
                        return;
                    }
                    MBSplashPopView.m(MBSplashPopView.this);
                    MBSplashPopView.this.o.setText(String.valueOf(MBSplashPopView.this.p));
                    MBSplashPopView.this.q.postDelayed(MBSplashPopView.this.u, 1000L);
                }
            }
        };
        this.v = new Runnable() {
            @Override
            public final void run() {
                if (MBSplashPopView.this.h != null) {
                    MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), MBSplashPopView.this.getWidth(), MBSplashPopView.this.getHeight(), MBSplashPopView.this.f);
                }
            }
        };
        this.a = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (MBSplashPopView.this.h != null) {
                    MBSplashPopView mBSplashPopView = MBSplashPopView.this;
                    MBSplashPopView.a(mBSplashPopView, mBSplashPopView.g);
                }
            }
        };
        this.b = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (MBSplashPopView.this.p <= 0 && MBSplashPopView.this.h != null) {
                    MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), 4);
                }
            }
        };
        this.f = 1;
        z.b("MBSplashPopView", "Please call setPopViewType() to init.");
    }

    public MBSplashPopView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.f = 1;
        this.p = -1;
        this.q = new Handler();
        this.r = false;
        this.t = new h() {
            @Override
            public final void onStartRedirection(Campaign campaign, String str) {
                int i22;
                int i222 = 0;
                if (MBSplashPopView.this.f == 1) {
                    int iMin = Math.min(MBSplashPopView.this.getWidth(), MBSplashPopView.this.getHeight());
                    int iB = (ae.b(MBSplashPopView.this.getContext(), 60.0f) - Math.min(Math.max(iMin / 4, 70), iMin)) / 2;
                    int iB2 = ae.b(MBSplashPopView.this.getContext(), 23.0f) + iB;
                    int iB3 = iB + ae.b(MBSplashPopView.this.getContext(), 10.0f);
                    i222 = iB2;
                    i22 = iB3;
                } else {
                    i22 = 0;
                }
                ad.a(campaign, MBSplashPopView.this, i222, i22);
            }

            @Override
            public final void onFinishRedirection(Campaign campaign, String str) {
                if (campaign == null) {
                    return;
                }
                CampaignEx campaignEx = (CampaignEx) campaign;
                if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
                    ad.a(MBSplashPopView.this);
                }
            }

            @Override
            public final void onRedirectionFailed(Campaign campaign, String str) {
                if (campaign == null) {
                    return;
                }
                CampaignEx campaignEx = (CampaignEx) campaign;
                if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
                    ad.a(MBSplashPopView.this);
                }
            }
        };
        this.u = new Runnable() {
            @Override
            public final void run() {
                if (MBSplashPopView.this.o != null) {
                    if (MBSplashPopView.this.p == 0) {
                        MBSplashPopView.this.p = -1;
                        MBSplashPopView.this.g();
                        MBSplashPopView.this.q.removeCallbacks(MBSplashPopView.this.u);
                        if (MBSplashPopView.this.h != null) {
                            MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), 5);
                            return;
                        }
                        return;
                    }
                    MBSplashPopView.m(MBSplashPopView.this);
                    MBSplashPopView.this.o.setText(String.valueOf(MBSplashPopView.this.p));
                    MBSplashPopView.this.q.postDelayed(MBSplashPopView.this.u, 1000L);
                }
            }
        };
        this.v = new Runnable() {
            @Override
            public final void run() {
                if (MBSplashPopView.this.h != null) {
                    MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), MBSplashPopView.this.getWidth(), MBSplashPopView.this.getHeight(), MBSplashPopView.this.f);
                }
            }
        };
        this.a = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (MBSplashPopView.this.h != null) {
                    MBSplashPopView mBSplashPopView = MBSplashPopView.this;
                    MBSplashPopView.a(mBSplashPopView, mBSplashPopView.g);
                }
            }
        };
        this.b = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (MBSplashPopView.this.p <= 0 && MBSplashPopView.this.h != null) {
                    MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), 4);
                }
            }
        };
        this.f = 1;
        z.b("MBSplashPopView", "Please call setPopViewType() to init.");
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.h != null) {
            postDelayed(this.v, 500L);
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        release();
    }

    public void setPopViewType(a aVar, d dVar) {
        if (aVar == null) {
            throw new IllegalArgumentException("Parameters is NULL, can't gen view.");
        }
        this.e = aVar.b();
        this.d = aVar.a();
        this.f = aVar.c();
        this.g = aVar.d();
        this.h = dVar;
        a();
    }

    public void startCountDown() {
        this.q.removeCallbacks(this.u);
        CampaignEx campaignEx = this.g;
        if (campaignEx == null || this.f != 1) {
            return;
        }
        int flbSkipTime = campaignEx.getFlbSkipTime();
        if (flbSkipTime > 0) {
            this.p = flbSkipTime;
            TextView textView = this.o;
            if (textView != null) {
                textView.setText(String.valueOf(flbSkipTime));
                this.q.postDelayed(this.u, 1000L);
                return;
            }
            return;
        }
        g();
    }

    public void reStartCountDown() {
        if (this.r) {
            this.r = false;
            int i = this.p;
            if (i == -1 || i == 0) {
                g();
                return;
            }
            TextView textView = this.o;
            if (textView != null) {
                textView.setText(String.valueOf(i));
                this.q.postDelayed(this.u, 1000L);
            }
        }
    }

    public void pauseCountDown() {
        this.r = true;
        if (this.o != null) {
            this.q.removeCallbacks(this.u);
        }
    }

    public void release() {
        try {
            this.q.removeCallbacks(this.v);
            this.q.removeCallbacks(this.u);
            this.u = null;
            detachAllViewsFromParent();
            this.g = null;
            this.h = null;
        } catch (Exception e) {
            z.d("MBSplashPopView", e.getMessage());
        }
    }

    private void a() {
        if (this.g == null) {
            return;
        }
        setLayoutParams(new RelativeLayout.LayoutParams(-1, -2));
        int i = this.f;
        if (i == 1) {
            b();
            return;
        }
        if (i == 2) {
            c();
        } else if (i == 3) {
            d();
        } else {
            if (i != 4) {
                return;
            }
            e();
        }
    }

    private void b() {
        ImageView imageView = new ImageView(getContext());
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(ae.b(getContext(), 80.0f), ae.b(getContext(), 80.0f));
        layoutParams.addRule(9);
        layoutParams.topMargin = ae.b(getContext(), 16.0f);
        imageView.setId(generateViewId());
        imageView.setLayoutParams(layoutParams);
        imageView.setBackgroundResource(getResources().getIdentifier("mbridge_splash_popview_default", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
        this.i = new ImageView(getContext());
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(ae.b(getContext(), 60.0f), ae.b(getContext(), 60.0f));
        layoutParams2.addRule(6, imageView.getId());
        layoutParams2.topMargin = ae.b(getContext(), 7.0f);
        layoutParams2.leftMargin = ae.b(getContext(), 10.0f);
        this.i.setId(generateViewId());
        this.i.setLayoutParams(layoutParams2);
        this.i.setScaleType(ImageView.ScaleType.FIT_CENTER);
        CampaignEx campaignEx = this.g;
        if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getIconUrl())) {
            a(this.g.getIconUrl(), true);
        }
        this.o = new TextView(getContext());
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams3.addRule(5, imageView.getId());
        layoutParams3.addRule(8, imageView.getId());
        layoutParams3.leftMargin = ae.b(getContext(), 62.0f);
        layoutParams3.bottomMargin = ae.b(getContext(), 70.0f);
        this.o.setId(generateViewId());
        this.o.setTextSize(10.0f);
        this.o.setTextColor(-1);
        this.o.setGravity(17);
        this.o.setMinWidth(ae.b(getContext(), 16.0f));
        this.o.setMaxHeight(ae.b(getContext(), 16.0f));
        this.o.setLayoutParams(layoutParams3);
        this.o.setBackgroundResource(getResources().getIdentifier("mbridge_cm_circle_50black", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
        addView(imageView);
        addView(this.o);
        addView(this.i);
        CampaignEx campaignEx2 = this.g;
        if (campaignEx2 != null && campaignEx2.getFlbSkipTime() <= 0) {
            g();
        }
        setOnClickListener(this.a);
        this.o.setOnClickListener(this.b);
    }

    private void c() {
        int iB = ae.b(getContext(), 4.0f);
        this.i = new ImageView(getContext());
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(ae.b(getContext(), 28.0f), ae.b(getContext(), 28.0f));
        layoutParams.addRule(9);
        this.i.setId(generateViewId());
        this.i.setLayoutParams(layoutParams);
        this.i.setPadding(iB, iB, iB, iB);
        this.i.setScaleType(ImageView.ScaleType.CENTER_INSIDE);
        a(this.g.getIconUrl(), false);
        TextView textView = new TextView(getContext());
        this.m = textView;
        textView.setId(generateViewId());
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams2.addRule(1, this.i.getId());
        layoutParams2.addRule(6, this.i.getId());
        layoutParams2.addRule(8, this.i.getId());
        layoutParams2.leftMargin = ae.b(getContext(), 4.0f);
        layoutParams2.rightMargin = ae.b(getContext(), 40.0f);
        this.m.setLayoutParams(layoutParams2);
        this.m.setGravity(16);
        this.m.setTextSize(10.0f);
        this.m.setSelected(true);
        this.m.setEllipsize(TextUtils.TruncateAt.MARQUEE);
        this.m.setMarqueeRepeatLimit(-1);
        this.m.setSingleLine(true);
        this.m.setTextColor(-16777216);
        this.m.setText(this.g.getAppName());
        setBackgroundResource(getResources().getIdentifier("mbridge_shape_corners_bg", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
        addView(this.i);
        addView(this.m);
        f();
        setOnClickListener(this.a);
    }

    private void d() {
        int iB = ae.b(getContext(), 4.0f);
        this.i = new ImageView(getContext());
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(ae.b(getContext(), 50.0f), ae.b(getContext(), 50.0f));
        layoutParams.addRule(9);
        this.i.setId(generateViewId());
        this.i.setLayoutParams(layoutParams);
        this.i.setScaleType(ImageView.ScaleType.CENTER_INSIDE);
        this.i.setPadding(iB, iB, iB, iB);
        a(this.g.getIconUrl(), false);
        RelativeLayout relativeLayout = new RelativeLayout(getContext());
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams2.addRule(1, this.i.getId());
        layoutParams2.addRule(6, this.i.getId());
        layoutParams2.addRule(8, this.i.getId());
        layoutParams2.leftMargin = ae.b(getContext(), 8.0f);
        layoutParams2.rightMargin = ae.b(getContext(), 8.0f);
        relativeLayout.setLayoutParams(layoutParams2);
        relativeLayout.setGravity(16);
        TextView textView = new TextView(getContext());
        this.m = textView;
        textView.setId(generateViewId());
        this.m.setLayoutParams(new RelativeLayout.LayoutParams(-2, -2));
        this.m.setGravity(16);
        this.m.setTextSize(12.0f);
        this.m.setSelected(true);
        this.m.setEllipsize(TextUtils.TruncateAt.MARQUEE);
        this.m.setMarqueeRepeatLimit(-1);
        this.m.setSingleLine(true);
        this.m.setTextColor(-16777216);
        this.m.setText(this.g.getAppName());
        TextView textView2 = new TextView(getContext());
        this.n = textView2;
        textView2.setId(generateViewId());
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams3.addRule(5, this.m.getId());
        layoutParams3.addRule(3, this.m.getId());
        layoutParams3.topMargin = ae.b(getContext(), 4.0f);
        layoutParams3.rightMargin = ae.b(getContext(), 36.0f);
        this.n.setGravity(16);
        this.n.setLayoutParams(layoutParams3);
        this.n.setTextSize(8.0f);
        this.n.setTextColor(-10066330);
        this.n.setEllipsize(TextUtils.TruncateAt.MARQUEE);
        this.n.setMarqueeRepeatLimit(-1);
        this.n.setSelected(true);
        this.n.setSingleLine(true);
        this.n.setText(this.g.getAppDesc());
        relativeLayout.addView(this.m);
        relativeLayout.addView(this.n);
        setBackgroundResource(getResources().getIdentifier("mbridge_shape_corners_bg", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
        addView(this.i);
        addView(relativeLayout);
        f();
        setOnClickListener(this.a);
    }

    private void e() {
        this.k = new ImageView(getContext());
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, ae.b(getContext(), 131.0f));
        layoutParams.addRule(10);
        layoutParams.addRule(14);
        this.k.setScaleType(ImageView.ScaleType.FIT_XY);
        this.k.setId(generateViewId());
        this.k.setLayoutParams(layoutParams);
        a(this.g.getImageUrl());
        this.j = new ImageView(getContext());
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, ae.b(getContext(), 131.0f));
        layoutParams2.addRule(10);
        layoutParams2.addRule(14);
        this.j.setScaleType(ImageView.ScaleType.FIT_CENTER);
        this.j.setId(generateViewId());
        this.j.setLayoutParams(layoutParams2);
        b(this.g.getImageUrl());
        this.i = new ImageView(getContext());
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(ae.b(getContext(), 50.0f), ae.b(getContext(), 50.0f));
        layoutParams3.addRule(9);
        layoutParams3.addRule(3, this.k.getId());
        layoutParams3.topMargin = 20;
        this.i.setScaleType(ImageView.ScaleType.CENTER_INSIDE);
        this.i.setId(generateViewId());
        this.i.setLayoutParams(layoutParams3);
        a(this.g.getIconUrl(), false);
        RelativeLayout relativeLayout = new RelativeLayout(getContext());
        RelativeLayout.LayoutParams layoutParams4 = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams4.addRule(1, this.i.getId());
        layoutParams4.addRule(6, this.i.getId());
        layoutParams4.addRule(8, this.i.getId());
        layoutParams4.leftMargin = ae.b(getContext(), 8.0f);
        layoutParams4.rightMargin = ae.b(getContext(), 8.0f);
        relativeLayout.setLayoutParams(layoutParams4);
        relativeLayout.setGravity(16);
        TextView textView = new TextView(getContext());
        this.m = textView;
        textView.setId(generateViewId());
        this.m.setGravity(16);
        this.m.setLayoutParams(new RelativeLayout.LayoutParams(-2, -2));
        this.m.setTextSize(12.0f);
        this.m.setTextColor(-16777216);
        this.m.setEllipsize(TextUtils.TruncateAt.MARQUEE);
        this.m.setMarqueeRepeatLimit(-1);
        this.m.setSelected(true);
        this.m.setSingleLine(true);
        this.m.setText(this.g.getAppName());
        TextView textView2 = new TextView(getContext());
        this.n = textView2;
        textView2.setId(generateViewId());
        RelativeLayout.LayoutParams layoutParams5 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams5.addRule(5, this.m.getId());
        layoutParams5.addRule(3, this.m.getId());
        layoutParams5.topMargin = ae.b(getContext(), 4.0f);
        layoutParams5.rightMargin = ae.b(getContext(), 36.0f);
        this.n.setGravity(16);
        this.n.setLayoutParams(layoutParams5);
        this.n.setTextSize(8.0f);
        this.n.setTextColor(-10066330);
        this.n.setEllipsize(TextUtils.TruncateAt.MARQUEE);
        this.n.setMarqueeRepeatLimit(-1);
        this.n.setSelected(true);
        this.n.setSingleLine(true);
        this.n.setText(this.g.getAppDesc());
        relativeLayout.addView(this.m);
        relativeLayout.addView(this.n);
        addView(this.k);
        addView(this.j);
        addView(this.i);
        addView(relativeLayout);
        f();
        setOnClickListener(this.a);
    }

    private void f() {
        String language;
        int identifier;
        this.l = new ImageView(getContext());
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(ae.b(getContext(), 32.0f), ae.b(getContext(), 13.0f));
        layoutParams.addRule(11);
        layoutParams.addRule(8, this.i.getId());
        this.l.setLayoutParams(layoutParams);
        try {
            language = getResources().getConfiguration().locale.getLanguage();
        } catch (Throwable th) {
            z.d("MBSplashPopView", th.getMessage());
            language = "ZH";
        }
        if (language.toUpperCase().equals("CN") || language.toUpperCase().equals("ZH")) {
            identifier = getResources().getIdentifier("mbridge_splash_pop_ad", i.c, com.mbridge.msdk.foundation.controller.a.f().d());
        } else {
            identifier = getResources().getIdentifier("mbridge_splash_pop_ad_en", i.c, com.mbridge.msdk.foundation.controller.a.f().d());
        }
        this.l.setBackgroundResource(identifier);
        addView(this.l);
    }

    private void a(String str, final boolean z) {
        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(str, new c() {
            @Override
            public final void onSuccessLoad(Bitmap bitmap, String str2) {
                Bitmap bitmapA;
                try {
                    if (bitmap.isRecycled()) {
                        return;
                    }
                    if (!z) {
                        bitmapA = y.a(bitmap, 1, 16);
                    } else if (bitmap == null || bitmap.isRecycled()) {
                        bitmapA = null;
                    } else {
                        int width = bitmap.getWidth();
                        bitmapA = Bitmap.createBitmap(width, width, Bitmap.Config.ARGB_4444);
                        Canvas canvas = new Canvas(bitmapA);
                        Paint paint = new Paint();
                        paint.setAntiAlias(true);
                        canvas.drawCircle(width / 2, width / 2, width / 2, paint);
                        paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.SRC_IN));
                        canvas.drawBitmap(bitmap, 0.0f, 0.0f, paint);
                    }
                    ImageView imageView = MBSplashPopView.this.i;
                    if (bitmapA != null) {
                        bitmap = bitmapA;
                    }
                    imageView.setImageBitmap(bitmap);
                } catch (Throwable th) {
                    z.d("MBSplashPopView", th.getMessage());
                }
            }

            @Override
            public final void onFailedLoad(String str2, String str3) {
                z.d("MBSplashPopView", str2);
            }
        });
    }

    private void a(String str) {
        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(str, new c() {
            @Override
            public final void onSuccessLoad(Bitmap bitmap, String str2) {
                try {
                    if (bitmap.isRecycled()) {
                        return;
                    }
                    MBSplashPopView.this.k.setImageBitmap(com.mbridge.msdk.widget.custom.b.b.a(bitmap, 10));
                } catch (Throwable th) {
                    z.d("MBSplashPopView", th.getMessage());
                }
            }

            @Override
            public final void onFailedLoad(String str2, String str3) {
                z.d("MBSplashPopView", str2);
            }
        });
    }

    private void b(String str) {
        com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(str, new c() {
            @Override
            public final void onSuccessLoad(Bitmap bitmap, String str2) {
                try {
                    if (bitmap.isRecycled()) {
                        return;
                    }
                    MBSplashPopView.this.j.setImageBitmap(y.a(bitmap, 1, 16));
                } catch (Throwable th) {
                    z.d("MBSplashPopView", th.getMessage());
                }
            }

            @Override
            public final void onFailedLoad(String str2, String str3) {
                z.d("MBSplashPopView", str2);
            }
        });
    }

    public static int generateViewId() {
        int i;
        int i2;
        do {
            i = c.get();
            i2 = i + 1;
            if (i2 > 16777215) {
                i2 = 1;
            }
        } while (!c.compareAndSet(i, i2));
        return i;
    }

    private void a(CampaignEx campaignEx) {
        if (this.s == null) {
            b bVar = new b(com.mbridge.msdk.foundation.controller.a.f().j(), this.e);
            this.s = bVar;
            bVar.a(this.t);
        }
        campaignEx.setCampaignUnitId(this.e);
        this.s.c(campaignEx);
        if (!campaignEx.isReportClick()) {
            campaignEx.setReportClick(true);
            com.mbridge.msdk.splash.e.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx);
        }
        d dVar = this.h;
        if (dVar != null) {
            dVar.b(new MBridgeIds(this.d, this.e));
            this.h.a(new MBridgeIds(this.d, this.e), 6);
        }
    }

    private void g() {
        TextView textView = this.o;
        if (textView != null) {
            ViewGroup.LayoutParams layoutParams = textView.getLayoutParams();
            layoutParams.width = ae.b(getContext(), 16.0f);
            layoutParams.height = ae.b(getContext(), 16.0f);
            this.o.setLayoutParams(layoutParams);
            this.o.setText("");
            this.o.setSelected(true);
            this.o.setBackgroundResource(getResources().getIdentifier("mbridge_splash_popview_close", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
        }
    }

    public static class a {
        private String a;
        private String b;
        private int c;
        private CampaignEx d;

        public a(String str, String str2, int i, CampaignEx campaignEx) {
            this.a = str;
            this.b = str2;
            this.c = i;
            this.d = campaignEx;
        }

        public final String a() {
            return this.a;
        }

        public final String b() {
            return this.b;
        }

        public final int c() {
            return this.c;
        }

        public final CampaignEx d() {
            return this.d;
        }
    }

    static void a(MBSplashPopView mBSplashPopView, final CampaignEx campaignEx) {
        try {
            com.mbridge.msdk.splash.e.a.b(campaignEx, mBSplashPopView.e);
            if (campaignEx != null && campaignEx.needShowIDialog()) {
                final com.mbridge.msdk.widget.dialog.a aVar = new com.mbridge.msdk.widget.dialog.a() {
                    @Override
                    public final void a() {
                        MBSplashPopView.this.a(campaignEx);
                    }

                    @Override
                    public final void b() {
                        MBSplashPopView.this.reStartCountDown();
                    }

                    @Override
                    public final void c() {
                        a();
                    }
                };
                if (com.mbridge.msdk.click.c.a(campaignEx) && campaignEx.needShowIDialog()) {
                    if (mBSplashPopView.s == null) {
                        mBSplashPopView.s = new b(com.mbridge.msdk.foundation.controller.a.f().j(), mBSplashPopView.e);
                    }
                    final Context context = mBSplashPopView.getContext();
                    mBSplashPopView.getHandler().post(new Runnable() {
                        @Override
                        public final void run() {
                            if (!MBSplashPopView.this.s.b(campaignEx)) {
                                MBSplashPopView.this.pauseCountDown();
                                Context context2 = context;
                                if (context2 != context2.getApplicationContext()) {
                                    e.a().a("", campaignEx, context, MBSplashPopView.this.e, aVar);
                                    return;
                                } else {
                                    e.a().a("", campaignEx, MBSplashPopView.this.getContext(), MBSplashPopView.this.e, aVar);
                                    return;
                                }
                            }
                            MBSplashPopView.this.pauseCountDown();
                            com.mbridge.msdk.splash.e.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx);
                            if (MBSplashPopView.this.h != null) {
                                MBSplashPopView.this.h.b(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e));
                                MBSplashPopView.this.h.a(new MBridgeIds(MBSplashPopView.this.d, MBSplashPopView.this.e), 6);
                            }
                        }
                    });
                    return;
                }
            }
        } catch (Throwable th) {
            z.a("MBSplashPopView", th.getMessage());
            mBSplashPopView.reStartCountDown();
        }
        mBSplashPopView.a(campaignEx);
    }
}
