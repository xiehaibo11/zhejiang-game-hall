package com.mbridge.msdk.video.dynview.widget;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AlphaAnimation;
import android.view.animation.TranslateAnimation;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.bt.module.b.f;
import com.mbridge.msdk.video.dynview.e.b;
import com.mbridge.msdk.video.dynview.e.c;
import com.mbridge.msdk.video.dynview.e.g;
import com.mbridge.msdk.video.module.MBridgeBaseView;
import com.mbridge.msdk.widget.FeedBackButton;
import java.util.HashMap;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

public class MBridgeOrderCampView extends MBridgeBaseView {
    private MBridgeOrderCampView n;
    private List<CampaignEx> o;
    private int p;
    private int q;
    private int r;
    private int s;
    private String t;
    private FeedBackButton u;
    private ImageView v;
    private boolean w;
    private c x;
    private b y;
    private boolean z;

    public MBridgeOrderCampView(Context context) {
        super(context);
        this.w = false;
        this.x = new c() {
            @Override
            public final void a(CampaignEx campaignEx, int i) {
                if (campaignEx != null) {
                    try {
                        MBridgeOrderCampView.this.setCampaign(campaignEx);
                        MBridgeOrderCampView.a(MBridgeOrderCampView.this, campaignEx, 0, i);
                    } catch (Exception e) {
                        z.d(MBridgeBaseView.TAG, e.getMessage());
                    }
                }
            }

            @Override
            public final void a() {
                MBridgeOrderCampView.a(MBridgeOrderCampView.this);
            }
        };
        this.z = false;
    }

    public MBridgeOrderCampView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.w = false;
        this.x = new c() {
            @Override
            public final void a(CampaignEx campaignEx, int i) {
                if (campaignEx != null) {
                    try {
                        MBridgeOrderCampView.this.setCampaign(campaignEx);
                        MBridgeOrderCampView.a(MBridgeOrderCampView.this, campaignEx, 0, i);
                    } catch (Exception e) {
                        z.d(MBridgeBaseView.TAG, e.getMessage());
                    }
                }
            }

            @Override
            public final void a() {
                MBridgeOrderCampView.a(MBridgeOrderCampView.this);
            }
        };
        this.z = false;
    }

    @Override
    public void init(Context context) {
        this.n = this;
    }

    public void createView(final ViewGroup viewGroup) {
        if (this.o == null) {
            b bVar = this.y;
            if (bVar != null) {
                bVar.b();
                return;
            }
            return;
        }
        HashMap map = new HashMap();
        map.put(com.tkay.expressad.video.dynview.a.a.E, this.x);
        com.mbridge.msdk.video.dynview.c cVarB = new com.mbridge.msdk.video.dynview.j.c().b(com.mbridge.msdk.foundation.controller.a.f().j(), this.o);
        com.mbridge.msdk.video.dynview.b.a();
        new com.mbridge.msdk.video.dynview.h.a(cVarB, new g() {
            @Override
            public final void a(com.mbridge.msdk.video.dynview.a aVar) {
                if (aVar != null) {
                    try {
                        MBridgeOrderCampView.this.n.addView(aVar.a());
                        MBridgeOrderCampView.this.w = aVar.c();
                        viewGroup.removeAllViews();
                        viewGroup.addView(MBridgeOrderCampView.this.n);
                        f.a(com.mbridge.msdk.foundation.controller.a.f().j(), (List<CampaignEx>) MBridgeOrderCampView.this.o, ((CampaignEx) MBridgeOrderCampView.this.o.get(0)).getCampaignUnitId());
                        MBridgeOrderCampView.this.setViewStatus();
                        if (MBridgeOrderCampView.this.y != null) {
                            MBridgeOrderCampView.this.y.a();
                        }
                    } catch (Exception e) {
                        z.d(MBridgeBaseView.TAG, e.getMessage());
                    }
                }
            }

            @Override
            public final void a(com.mbridge.msdk.video.dynview.c.a aVar) {
                try {
                    f.a(com.mbridge.msdk.foundation.controller.a.f().j(), (List<CampaignEx>) MBridgeOrderCampView.this.o, ((CampaignEx) MBridgeOrderCampView.this.o.get(0)).getCampaignUnitId(), aVar.b());
                    if (MBridgeOrderCampView.this.y != null) {
                        MBridgeOrderCampView.this.y.b();
                    }
                } catch (Exception e) {
                    z.d(MBridgeBaseView.TAG, e.getMessage());
                }
            }
        }, map);
    }

    public void setCampaignExes(List<CampaignEx> list) {
        this.o = list;
    }

    public void setCampOrderViewBuildCallback(b bVar) {
        this.y = bVar;
    }

    public void setRewarded(boolean z) {
        this.z = z;
    }

    @Override
    protected void onAttachedToWindow() {
        JSONObject jSONObject;
        JSONException e;
        super.onAttachedToWindow();
        if (this.o == null) {
            return;
        }
        for (int i = 0; i < this.o.size(); i++) {
            try {
                jSONObject = new JSONObject();
                try {
                    jSONObject.put("camp_position", i);
                } catch (JSONException e2) {
                    e = e2;
                    e.printStackTrace();
                }
            } catch (JSONException e3) {
                jSONObject = null;
                e = e3;
            }
            if (this.e != null) {
                this.e.a(110, jSONObject);
            }
        }
    }

    public void setViewStatus() {
        MBridgeOrderCampView mBridgeOrderCampView = this.n;
        if (mBridgeOrderCampView == null || !this.z) {
            return;
        }
        RelativeLayout relativeLayout = (RelativeLayout) mBridgeOrderCampView.findViewById(filterFindViewId(this.w, "mbridge_native_order_camp_controller"));
        this.u = (FeedBackButton) this.n.findViewById(filterFindViewId(this.w, "mbridge_native_order_camp_feed_btn"));
        this.v = (ImageView) this.n.findViewById(filterFindViewId(this.w, "mbridge_iv_link"));
        if (relativeLayout != null) {
            relativeLayout.setPadding(this.p, this.r, this.q, this.s);
        }
        FeedBackButton feedBackButton = this.u;
        if (feedBackButton != null && feedBackButton != null) {
            try {
                if (this.o == null) {
                    feedBackButton.setVisibility(8);
                } else if (this.o.get(0) != null && com.mbridge.msdk.foundation.b.b.a().b()) {
                    this.t = this.o.get(0).getCampaignUnitId();
                    this.b = this.o.get(0);
                    com.mbridge.msdk.foundation.b.b.a().a(this.t + "_2", new com.mbridge.msdk.foundation.b.a() {
                        @Override
                        public final void a() {
                        }

                        @Override
                        public final void a(String str) {
                        }

                        @Override
                        public final void b() {
                        }
                    });
                    com.mbridge.msdk.foundation.b.b.a().a(this.t + "_2", this.b);
                    com.mbridge.msdk.foundation.b.b.a().a(this.t + "_2", this.u);
                } else {
                    this.u.setVisibility(8);
                }
            } catch (Exception e) {
                z.d(MBridgeBaseView.TAG, e.getMessage());
            }
        }
        ImageView imageView = this.v;
        if (imageView == null || imageView == null) {
            return;
        }
        try {
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB != null) {
                final String strAz = aVarB.az();
                if (TextUtils.isEmpty(strAz)) {
                    this.v.setVisibility(8);
                }
                this.v.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                        com.mbridge.msdk.click.c.b(MBridgeOrderCampView.this.a, strAz);
                    }
                });
                return;
            }
            this.v.setVisibility(8);
        } catch (Exception e2) {
            z.d(MBridgeBaseView.TAG, e2.getMessage());
        }
    }

    public void setNotchPadding(int i, int i2, int i3, int i4) {
        this.p = i;
        this.q = i2;
        this.r = i3;
        this.s = i4;
        setViewStatus();
    }

    public void startAlphaAnimation() {
        AlphaAnimation alphaAnimation = new AlphaAnimation(0.0f, 1.0f);
        alphaAnimation.setDuration(500L);
        this.n.startAnimation(alphaAnimation);
    }

    public void startTranslateAnimation() {
        TranslateAnimation translateAnimation = new TranslateAnimation(2, 1.0f, 2, 0.0f, 2, 0.0f, 2, 0.0f);
        translateAnimation.setDuration(500L);
        this.n.startAnimation(translateAnimation);
    }

    static void a(MBridgeOrderCampView mBridgeOrderCampView, CampaignEx campaignEx, int i, int i2) {
        JSONObject jSONObject;
        JSONException e;
        if (campaignEx != null && campaignEx.isDynamicView()) {
            try {
                CampaignEx.c rewardTemplateMode = campaignEx.getRewardTemplateMode();
                String str = "";
                if (rewardTemplateMode != null) {
                    str = rewardTemplateMode.b() + "";
                }
                String str2 = str;
                e.a(com.mbridge.msdk.foundation.controller.a.f().j(), "order_view_click" + str2, campaignEx.getCampaignUnitId(), campaignEx.isBidCampaign(), campaignEx.getRequestId(), campaignEx.getRequestIdNotice(), campaignEx.getId(), str2);
            } catch (Exception e2) {
                z.d(MBridgeBaseView.TAG, e2.getMessage());
            }
        }
        try {
            jSONObject = new JSONObject();
            try {
                jSONObject.put(com.mbridge.msdk.foundation.same.a.p, mBridgeOrderCampView.a(i));
                jSONObject.put("camp_position", i2);
            } catch (JSONException e3) {
                e = e3;
                e.printStackTrace();
            }
        } catch (JSONException e4) {
            jSONObject = null;
            e = e4;
        }
        if (mBridgeOrderCampView.e != null) {
            mBridgeOrderCampView.e.a(105, jSONObject);
        }
    }

    static void a(MBridgeOrderCampView mBridgeOrderCampView) {
        try {
            com.mbridge.msdk.video.dynview.moffer.a.a().b();
        } catch (Exception e) {
            z.d(MBridgeBaseView.TAG, e.getMessage());
        }
        if (mBridgeOrderCampView.e != null) {
            mBridgeOrderCampView.e.a(104, "");
        }
    }
}
