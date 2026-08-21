package com.mbridge.msdk.video.module;

import android.animation.ObjectAnimator;
import android.content.Context;
import android.content.res.Configuration;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.dynview.e.g;
import com.mbridge.msdk.video.dynview.j.c;
import com.mbridge.msdk.video.js.factory.b;
import com.mbridge.msdk.video.module.a.a.d;
import com.mbridge.msdk.widget.MBDownloadProgressBar;
import com.mbridge.msdk.widget.a;
import org.json.JSONException;
import org.json.JSONObject;

public class MBridgeClickCTAView extends MBridgeBaseView {
    private ViewGroup n;
    private ImageView o;
    private TextView p;
    private TextView q;
    private MBDownloadProgressBar r;
    private String s;
    private float t;
    private float u;
    private int v;
    private ObjectAnimator w;

    @Override
    public void init(Context context) {
    }

    public void setObjectAnimator(ObjectAnimator objectAnimator) {
        this.w = objectAnimator;
    }

    public void setUnitId(String str) {
        this.s = str;
    }

    public MBridgeClickCTAView(Context context) {
        super(context);
    }

    public MBridgeClickCTAView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    @Override
    protected final void c() {
        super.c();
        if (this.f) {
            if (this.b != null && this.b.isDynamicView()) {
                setOnClickListener(new a() {
                    @Override
                    protected final void a(View view) {
                        MBridgeClickCTAView.b(MBridgeClickCTAView.this);
                    }
                });
            }
            this.r.setOnClickListener(new a() {
                @Override
                protected final void a(View view) {
                    MBridgeClickCTAView.b(MBridgeClickCTAView.this);
                }
            });
            ImageView imageView = this.o;
            if (imageView != null) {
                imageView.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                    }
                });
            }
        }
    }

    public void preLoadData(b bVar) {
        if (this.b != null) {
            if (this.b.isDynamicView()) {
                com.mbridge.msdk.video.dynview.b.a().a(new c().b(this, this.b), new g() {
                    @Override
                    public final void a(com.mbridge.msdk.video.dynview.a aVar) {
                        if (aVar != null) {
                            this.addView(aVar.a());
                            MBridgeClickCTAView mBridgeClickCTAView = MBridgeClickCTAView.this;
                            mBridgeClickCTAView.f = mBridgeClickCTAView.b();
                            MBridgeClickCTAView mBridgeClickCTAView2 = MBridgeClickCTAView.this;
                            mBridgeClickCTAView2.q = (TextView) mBridgeClickCTAView2.findViewById(mBridgeClickCTAView2.findID("mbridge_tv_desc"));
                            MBridgeClickCTAView.this.c();
                        }
                    }

                    @Override
                    public final void a(com.mbridge.msdk.video.dynview.c.a aVar) {
                        z.d(MBridgeBaseView.TAG, "errorMsg:" + aVar.b());
                    }
                });
            } else {
                int iFindLayout = findLayout("mbridge_reward_clickable_cta");
                if (iFindLayout >= 0) {
                    this.c.inflate(iFindLayout, this);
                    this.f = b();
                    c();
                    setWrapContent();
                }
            }
            if (this.f) {
                if (this.b.getAdSpaceT() == 2) {
                    RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(ae.b(getContext(), 95.0f), ae.b(getContext(), 38.0f));
                    layoutParams.addRule(11);
                    this.r.setLayoutParams(layoutParams);
                }
                this.r.setUniqueKey(this.b.getAkdlui());
                this.r.setLinkType(this.b.getLinkType());
                this.r.setCtaldtypeUrl(this.b.getCMPTEntryUrl());
                this.r.setText(this.b.getAdCall());
                if (!TextUtils.isEmpty(this.b.getIconUrl())) {
                    com.mbridge.msdk.foundation.same.c.b.a(this.a.getApplicationContext()).a(this.b.getIconUrl(), new d(this.o, this.b, this.s) {
                        @Override
                        public final void onFailedLoad(String str, String str2) {
                            super.onFailedLoad(str, str2);
                            MBridgeClickCTAView.this.a();
                        }
                    });
                } else {
                    a();
                }
                if (this.p != null && !TextUtils.isEmpty(this.b.getAppName())) {
                    this.p.setText(this.b.getAppName());
                }
                if (this.q == null || TextUtils.isEmpty(this.b.getAppDesc())) {
                    return;
                }
                this.q.setText(this.b.getAppDesc());
            }
        }
    }

    @Override
    public void onSelfConfigurationChanged(Configuration configuration) {
        super.onSelfConfigurationChanged(configuration);
        this.v = configuration.orientation;
    }

    private void a() {
        ImageView imageView = this.o;
        if (imageView != null) {
            imageView.setVisibility(8);
        }
    }

    private boolean b() {
        this.n = (ViewGroup) findViewById(findID("mbridge_viewgroup_ctaroot"));
        this.o = (ImageView) findViewById(findID("mbridge_iv_appicon"));
        this.p = (TextView) findViewById(findID("mbridge_tv_title"));
        MBDownloadProgressBar mBDownloadProgressBar = (MBDownloadProgressBar) findViewById(findID("mbridge_tv_install"));
        this.r = mBDownloadProgressBar;
        return isNotNULL(this.n, this.o, this.p, mBDownloadProgressBar);
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        this.t = motionEvent.getRawX();
        this.u = motionEvent.getRawY();
        return super.onInterceptTouchEvent(motionEvent);
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        ObjectAnimator objectAnimator = this.w;
        if (objectAnimator != null) {
            try {
                objectAnimator.start();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        ObjectAnimator objectAnimator = this.w;
        if (objectAnimator != null) {
            try {
                objectAnimator.cancel();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    static void b(MBridgeClickCTAView mBridgeClickCTAView) {
        JSONObject jSONObject;
        JSONException e;
        if (mBridgeClickCTAView.b != null && mBridgeClickCTAView.b.isDynamicView()) {
            try {
                CampaignEx.c rewardTemplateMode = mBridgeClickCTAView.b.getRewardTemplateMode();
                String str = "";
                if (rewardTemplateMode != null) {
                    str = rewardTemplateMode.b() + "";
                }
                e.a(mBridgeClickCTAView.a, "cta_click", mBridgeClickCTAView.b.getCampaignUnitId(), mBridgeClickCTAView.b.isBidCampaign(), mBridgeClickCTAView.b.getRequestId(), mBridgeClickCTAView.b.getRequestIdNotice(), mBridgeClickCTAView.b.getId(), str);
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        try {
            jSONObject = new JSONObject();
            try {
                jSONObject.put(com.mbridge.msdk.foundation.same.a.p, mBridgeClickCTAView.a(0));
            } catch (JSONException e3) {
                e = e3;
                e.printStackTrace();
            }
        } catch (JSONException e4) {
            jSONObject = null;
            e = e4;
        }
        mBridgeClickCTAView.e.a(105, jSONObject);
    }
}
