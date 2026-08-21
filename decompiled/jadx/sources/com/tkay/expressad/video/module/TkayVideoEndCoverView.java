package com.tkay.expressad.video.module;

import android.content.Context;
import android.content.res.Configuration;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.g.a;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.video.module.a.a.j;
import com.tkay.expressad.video.signal.f;
import com.tkay.expressad.video.signal.factory.b;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class TkayVideoEndCoverView extends TkayBaseView implements f {
    private final String n;
    private View o;
    private ImageView p;
    private ImageView q;
    private TextView r;
    private TextView s;
    private TextView t;
    private b u;

    public TkayVideoEndCoverView(Context context) {
        super(context);
        this.n = "TkayVideoEndCoverView";
    }

    public TkayVideoEndCoverView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.n = "TkayVideoEndCoverView";
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView
    public void init(Context context) {
        int iFindLayout = findLayout("tkay_reward_videoend_cover");
        if (iFindLayout >= 0) {
            View viewInflate = this.c.inflate(iFindLayout, (ViewGroup) null);
            this.o = viewInflate;
            if (viewInflate != null) {
                this.f = a(viewInflate);
                addView(this.o, -1, -1);
                c();
            }
        }
    }

    @Override // com.tkay.expressad.video.signal.f
    public void preLoadData(b bVar) {
        this.u = bVar;
        try {
            if (this.b == null || !this.f || this.b == null) {
                return;
            }
            if (!TextUtils.isEmpty(this.b.bd()) && this.p != null) {
                com.tkay.expressad.foundation.g.d.b.a(this.f7279a.getApplicationContext()).a(this.b.bd(), new j(this.p, t.b(m.a().f(), 8.0f)));
            }
            if (this.r != null) {
                this.r.setText(this.b.bb());
            }
            if (this.t != null) {
                this.t.setText(this.b.cU);
            }
            if (this.s != null) {
                this.s.setText(this.b.bc());
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView, android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        this.g = motionEvent.getRawX();
        this.h = motionEvent.getRawY();
        return super.onInterceptTouchEvent(motionEvent);
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView
    public void onSelfConfigurationChanged(Configuration configuration) {
        super.onSelfConfigurationChanged(configuration);
        this.d = configuration.orientation;
        removeView(this.o);
        View view = this.o;
        if (view == null) {
            init(this.f7279a);
            preLoadData(this.u);
            return;
        }
        if (view.getParent() != null) {
            ((ViewGroup) this.o.getParent()).removeView(this.o);
        }
        addView(this.o);
        a(this.o);
        c();
    }

    private void b() {
        View view = this.o;
        if (view == null) {
            init(this.f7279a);
            preLoadData(this.u);
            return;
        }
        if (view.getParent() != null) {
            ((ViewGroup) this.o.getParent()).removeView(this.o);
        }
        addView(this.o);
        a(this.o);
        c();
    }

    private boolean a(View view) {
        if (view == null) {
            return true;
        }
        try {
            this.p = (ImageView) view.findViewById(findID("tkay_vec_iv_icon"));
            this.q = (ImageView) view.findViewById(findID("tkay_vec_iv_close"));
            this.r = (TextView) view.findViewById(findID("tkay_vec_tv_title"));
            this.s = (TextView) view.findViewById(findID("tkay_vec_tv_desc"));
            this.t = (TextView) view.findViewById(findID("tkay_vec_btn"));
            return true;
        } catch (Throwable th) {
            th.getMessage();
            return false;
        }
    }

    private void e() {
        ImageView imageView;
        if (this.b != null) {
            if (!TextUtils.isEmpty(this.b.bd()) && (imageView = this.p) != null) {
                com.tkay.expressad.foundation.g.d.b.a(this.f7279a.getApplicationContext()).a(this.b.bd(), new j(imageView, t.b(m.a().f(), 8.0f)));
            }
            TextView textView = this.r;
            if (textView != null) {
                textView.setText(this.b.bb());
            }
            TextView textView2 = this.t;
            if (textView2 != null) {
                textView2.setText(this.b.cU);
            }
            TextView textView3 = this.s;
            if (textView3 != null) {
                textView3.setText(this.b.bc());
            }
        }
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView
    protected final void c() {
        super.c();
        this.q.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.module.TkayVideoEndCoverView.1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                TkayVideoEndCoverView.this.e.a(104, "");
            }
        });
        this.p.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.module.TkayVideoEndCoverView.2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                TkayVideoEndCoverView.this.a();
            }
        });
        this.t.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.module.TkayVideoEndCoverView.3
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                TkayVideoEndCoverView.this.a();
            }
        });
    }

    protected final void a() {
        JSONObject jSONObject;
        JSONException e;
        JSONObject jSONObject2;
        JSONException e2;
        try {
            JSONObject jSONObject3 = new JSONObject();
            try {
                jSONObject2 = new JSONObject();
                try {
                    jSONObject2.put(a.cc, t.a(m.a().f(), this.g));
                    jSONObject2.put(a.cd, t.a(m.a().f(), this.h));
                    jSONObject2.put(a.cf, 0);
                    try {
                        this.d = getContext().getResources().getConfiguration().orientation;
                    } catch (Exception e3) {
                        e3.printStackTrace();
                    }
                    jSONObject2.put(a.cg, this.d);
                    jSONObject2.put(a.ch, t.c(getContext()));
                } catch (JSONException e4) {
                    e2 = e4;
                    e2.getMessage();
                }
            } catch (JSONException e5) {
                jSONObject2 = jSONObject3;
                e2 = e5;
            }
            jSONObject = new JSONObject();
            try {
                jSONObject.put(a.ce, jSONObject2);
            } catch (JSONException e6) {
                e = e6;
                e.printStackTrace();
            }
        } catch (JSONException e7) {
            jSONObject = null;
            e = e7;
        }
        this.e.a(105, jSONObject);
    }
}
