package com.tkay.expressad.video.dynview.widget;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AlphaAnimation;
import android.view.animation.ScaleAnimation;
import android.view.animation.TranslateAnimation;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.l;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.video.dynview.f.b;
import com.tkay.expressad.video.dynview.f.h;
import com.tkay.expressad.video.module.TkayBaseView;
import com.tkay.expressad.widget.FeedBackButton;
import java.util.HashMap;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

public class TYOrderCampView extends TkayBaseView {
    private TYOrderCampView n;
    private List<c> o;
    private int p;
    private int q;
    private int r;
    private int s;
    private String t;
    private FeedBackButton u;
    private ImageView v;
    private boolean w;
    private com.tkay.expressad.video.dynview.f.c x;
    private b y;
    private boolean z;

    public TYOrderCampView(Context context) {
        super(context);
        this.w = false;
        this.x = new com.tkay.expressad.video.dynview.f.c() {
            @Override
            public final void a(c cVar, int i) {
                if (cVar != null) {
                    try {
                        TYOrderCampView.this.setCampaign(cVar);
                        TYOrderCampView.a(TYOrderCampView.this, cVar, i);
                    } catch (Exception e) {
                        e.getMessage();
                    }
                }
            }

            @Override
            public final void a() {
                TYOrderCampView.a(TYOrderCampView.this);
            }
        };
        this.z = false;
    }

    public TYOrderCampView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.w = false;
        this.x = new com.tkay.expressad.video.dynview.f.c() {
            @Override
            public final void a(c cVar, int i) {
                if (cVar != null) {
                    try {
                        TYOrderCampView.this.setCampaign(cVar);
                        TYOrderCampView.a(TYOrderCampView.this, cVar, i);
                    } catch (Exception e) {
                        e.getMessage();
                    }
                }
            }

            @Override
            public final void a() {
                TYOrderCampView.a(TYOrderCampView.this);
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
        new com.tkay.expressad.video.dynview.j.c();
        com.tkay.expressad.video.dynview.c cVarB = com.tkay.expressad.video.dynview.j.c.b(m.a().f(), this.o);
        com.tkay.expressad.video.dynview.b.a();
        com.tkay.expressad.video.dynview.b.a(cVarB, new h() {
            @Override
            public final void a(com.tkay.expressad.video.dynview.a aVar) {
                try {
                    TYOrderCampView.this.n.addView(aVar.a());
                    TYOrderCampView.this.w = aVar.c();
                    viewGroup.removeAllViews();
                    viewGroup.addView(TYOrderCampView.this.n);
                    TYOrderCampView.this.setViewStatus();
                    if (TYOrderCampView.this.y != null) {
                        TYOrderCampView.this.y.a();
                    }
                } catch (Exception e) {
                    e.getMessage();
                }
            }

            @Override
            public final void a(com.tkay.expressad.video.dynview.c.b bVar2) {
                try {
                    if (TYOrderCampView.this.y != null) {
                        TYOrderCampView.this.y.b();
                    }
                } catch (Exception e) {
                    e.getMessage();
                }
            }
        }, map);
    }

    public void setCampaignExes(List<c> list) {
        this.o = list;
    }

    public void setCampOrderViewBuildCallback(b bVar) {
        this.y = bVar;
    }

    public void setRewarded(boolean z) {
        this.z = z;
    }

    private void a(c cVar, int i, int i2) {
        JSONObject jSONObject;
        JSONException e;
        if (cVar != null && cVar.j()) {
            try {
                c.c cVarM = cVar.M();
                if (cVarM != null) {
                    new StringBuilder().append(cVarM.b());
                }
            } catch (Exception e2) {
                e2.getMessage();
            }
        }
        try {
            jSONObject = new JSONObject();
            try {
                jSONObject.put(com.tkay.expressad.foundation.g.a.ce, a(i));
                jSONObject.put("camp_position", i2);
            } catch (JSONException e3) {
                e = e3;
                e.printStackTrace();
            }
        } catch (JSONException e4) {
            jSONObject = null;
            e = e4;
        }
        if (this.e != null) {
            this.e.a(105, jSONObject);
        }
    }

    private void a() {
        if (this.e != null) {
            this.e.a(104, "");
        }
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
        TYOrderCampView tYOrderCampView = this.n;
        if (tYOrderCampView == null || !this.z) {
            return;
        }
        RelativeLayout relativeLayout = (RelativeLayout) tYOrderCampView.findViewById(filterFindViewId(this.w, "tkay_native_order_camp_controller"));
        this.u = (FeedBackButton) this.n.findViewById(filterFindViewId(this.w, "tkay_native_order_camp_feed_btn"));
        this.v = (ImageView) this.n.findViewById(filterFindViewId(this.w, "tkay_iv_link"));
        if (relativeLayout != null) {
            relativeLayout.setPadding(this.p, this.r, this.q, this.s);
        }
        FeedBackButton feedBackButton = this.u;
        if (feedBackButton != null && feedBackButton != null) {
            try {
                if (this.o == null) {
                    feedBackButton.setVisibility(8);
                } else if (this.o.get(0) != null && com.tkay.expressad.foundation.f.b.a().b()) {
                    this.t = this.o.get(0).K();
                    this.b = this.o.get(0);
                    com.tkay.expressad.foundation.f.b.a().a(this.t + "_2", new 3());
                    com.tkay.expressad.foundation.f.b.a().a(this.t + "_2", this.b);
                    com.tkay.expressad.foundation.f.b.a().a(this.t + "_2", this.u);
                } else {
                    this.u.setVisibility(8);
                }
            } catch (Exception e) {
                e.getMessage();
            }
        }
        ImageView imageView = this.v;
        if (imageView == null || imageView == null) {
            return;
        }
        try {
            com.tkay.expressad.foundation.b.b.b().e();
            com.tkay.expressad.d.b.a();
            com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
            if (aVarB != null) {
                String strJ = aVarB.J();
                if (TextUtils.isEmpty(strJ)) {
                    this.v.setVisibility(8);
                }
                this.v.setOnClickListener(new 4(strJ));
                return;
            }
            this.v.setVisibility(8);
        } catch (Exception e2) {
            e2.getMessage();
        }
    }

    public void setNotchPadding(int i, int i2, int i3, int i4) {
        this.p = i;
        this.q = i2;
        this.r = i3;
        this.s = i4;
        setViewStatus();
    }

    private void b() {
        ScaleAnimation scaleAnimation = new ScaleAnimation(0.0f, 1.0f, 0.0f, 1.0f, 2, 0.5f, 2, 0.5f);
        scaleAnimation.setDuration(500L);
        this.n.startAnimation(scaleAnimation);
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

    private void e() {
        FeedBackButton feedBackButton = this.u;
        if (feedBackButton == null) {
            return;
        }
        List<c> list = this.o;
        if (list == null) {
            feedBackButton.setVisibility(8);
            return;
        }
        if (list.get(0) == null) {
            this.u.setVisibility(8);
            return;
        }
        if (com.tkay.expressad.foundation.f.b.a().b()) {
            this.t = this.o.get(0).K();
            this.b = this.o.get(0);
            com.tkay.expressad.foundation.f.b.a().a(this.t + "_2", new 3());
            com.tkay.expressad.foundation.f.b.a().a(this.t + "_2", this.b);
            com.tkay.expressad.foundation.f.b.a().a(this.t + "_2", this.u);
            return;
        }
        this.u.setVisibility(8);
    }

    final class 3 implements com.tkay.expressad.foundation.f.a {
        @Override
        public final void a() {
        }

        @Override
        public final void b() {
        }

        @Override
        public final void c() {
        }

        3() {
        }
    }

    private void f() {
        if (this.v == null) {
            return;
        }
        com.tkay.expressad.foundation.b.b.b().e();
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
        if (aVarB != null) {
            String strJ = aVarB.J();
            if (TextUtils.isEmpty(strJ)) {
                this.v.setVisibility(8);
            }
            this.v.setOnClickListener(new 4(strJ));
            return;
        }
        this.v.setVisibility(8);
    }

    final class 4 implements View.OnClickListener {
        final String a;

        4(String str) {
            this.a = str;
        }

        @Override
        public final void onClick(View view) {
            l.a(this.a);
        }
    }

    static void a(TYOrderCampView tYOrderCampView, c cVar, int i) {
        JSONObject jSONObject;
        JSONException e;
        if (cVar != null && cVar.j()) {
            try {
                c.c cVarM = cVar.M();
                if (cVarM != null) {
                    new StringBuilder().append(cVarM.b());
                }
            } catch (Exception e2) {
                e2.getMessage();
            }
        }
        try {
            jSONObject = new JSONObject();
            try {
                jSONObject.put(com.tkay.expressad.foundation.g.a.ce, tYOrderCampView.a(0));
                jSONObject.put("camp_position", i);
            } catch (JSONException e3) {
                e = e3;
                e.printStackTrace();
            }
        } catch (JSONException e4) {
            jSONObject = null;
            e = e4;
        }
        if (tYOrderCampView.e != null) {
            tYOrderCampView.e.a(105, jSONObject);
        }
    }

    static void a(TYOrderCampView tYOrderCampView) {
        if (tYOrderCampView.e != null) {
            tYOrderCampView.e.a(104, "");
        }
    }
}
