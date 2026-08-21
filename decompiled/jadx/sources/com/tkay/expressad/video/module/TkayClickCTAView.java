package com.tkay.expressad.video.module;

import android.animation.ObjectAnimator;
import android.content.Context;
import android.content.res.Configuration;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.video.dynview.a;
import com.tkay.expressad.video.dynview.c.b;
import com.tkay.expressad.video.dynview.f.h;
import com.tkay.expressad.video.module.a.a.e;
import com.tkay.expressad.video.signal.f;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class TkayClickCTAView extends TkayBaseView implements f {
    private static final String n = "tkay_reward_clickable_cta";
    private ViewGroup o;
    private ImageView p;
    private TextView q;
    private TextView r;
    private TextView s;
    private String t;
    private float u;
    private float v;
    private int w;
    private ObjectAnimator x;

    @Override // com.tkay.expressad.video.module.TkayBaseView
    public void init(Context context) {
    }

    public void setObjectAnimator(ObjectAnimator objectAnimator) {
        this.x = objectAnimator;
    }

    public void setUnitId(String str) {
        this.t = str;
    }

    public TkayClickCTAView(Context context) {
        super(context);
    }

    public TkayClickCTAView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayClickCTAView$1, reason: invalid class name */
    final class AnonymousClass1 implements h {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ ViewGroup f7280a;

        AnonymousClass1(ViewGroup viewGroup) {
            this.f7280a = viewGroup;
        }

        @Override // com.tkay.expressad.video.dynview.f.h
        public final void a(a aVar) {
            this.f7280a.addView(aVar.a());
            TkayClickCTAView tkayClickCTAView = TkayClickCTAView.this;
            tkayClickCTAView.f = tkayClickCTAView.f();
            TkayClickCTAView tkayClickCTAView2 = TkayClickCTAView.this;
            tkayClickCTAView2.r = (TextView) tkayClickCTAView2.findViewById(tkayClickCTAView2.findID("tkay_tv_desc"));
            TkayClickCTAView.this.c();
        }

        @Override // com.tkay.expressad.video.dynview.f.h
        public final void a(b bVar) {
            new StringBuilder("errorMsg:").append(bVar.b());
        }
    }

    private void a(ViewGroup viewGroup, c cVar) {
        new com.tkay.expressad.video.dynview.j.c();
        com.tkay.expressad.video.dynview.c cVarB = com.tkay.expressad.video.dynview.j.c.b(viewGroup, cVar);
        com.tkay.expressad.video.dynview.b.a();
        com.tkay.expressad.video.dynview.b.a(cVarB, new AnonymousClass1(viewGroup));
    }

    private void a() {
        int iFindLayout = findLayout(n);
        if (iFindLayout >= 0) {
            this.c.inflate(iFindLayout, this);
            this.f = f();
            c();
            setWrapContent();
        }
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView
    protected final void c() {
        super.c();
        if (this.f) {
            if (this.b != null && this.b.j()) {
                setOnClickListener(new com.tkay.expressad.widget.a() { // from class: com.tkay.expressad.video.module.TkayClickCTAView.2
                    @Override // com.tkay.expressad.widget.a
                    protected final void a(View view) {
                        TkayClickCTAView.b(TkayClickCTAView.this);
                    }
                });
            }
            this.s.setOnClickListener(new com.tkay.expressad.widget.a() { // from class: com.tkay.expressad.video.module.TkayClickCTAView.3
                @Override // com.tkay.expressad.widget.a
                protected final void a(View view) {
                    TkayClickCTAView.b(TkayClickCTAView.this);
                }
            });
            ImageView imageView = this.p;
            if (imageView != null) {
                imageView.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.module.TkayClickCTAView.4
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                    }
                });
            }
        }
    }

    @Override // com.tkay.expressad.video.signal.f
    public void preLoadData(com.tkay.expressad.video.signal.factory.b bVar) {
        if (this.b != null) {
            if (this.b.j()) {
                c cVar = this.b;
                new com.tkay.expressad.video.dynview.j.c();
                com.tkay.expressad.video.dynview.c cVarB = com.tkay.expressad.video.dynview.j.c.b(this, cVar);
                com.tkay.expressad.video.dynview.b.a();
                com.tkay.expressad.video.dynview.b.a(cVarB, new AnonymousClass1(this));
            } else {
                int iFindLayout = findLayout(n);
                if (iFindLayout >= 0) {
                    this.c.inflate(iFindLayout, this);
                    this.f = f();
                    c();
                    setWrapContent();
                }
            }
            if (this.f) {
                this.s.setText(this.b.cU);
                if (!TextUtils.isEmpty(this.b.bd())) {
                    com.tkay.expressad.foundation.g.d.b.a(this.f7279a.getApplicationContext()).a(this.b.bd(), new e(this.p, this.b, this.t) { // from class: com.tkay.expressad.video.module.TkayClickCTAView.5
                        @Override // com.tkay.expressad.video.module.a.a.e, com.tkay.expressad.foundation.g.d.c
                        public final void a(String str, String str2) {
                            super.a(str, str2);
                            TkayClickCTAView.this.b();
                        }
                    });
                } else {
                    b();
                }
                if (this.q != null && !TextUtils.isEmpty(this.b.bb())) {
                    this.q.setText(this.b.bb());
                }
                if (this.r == null || TextUtils.isEmpty(this.b.bc())) {
                    return;
                }
                this.r.setText(this.b.bc());
            }
        }
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView
    public void onSelfConfigurationChanged(Configuration configuration) {
        super.onSelfConfigurationChanged(configuration);
        this.w = configuration.orientation;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        ImageView imageView = this.p;
        if (imageView != null) {
            imageView.setVisibility(8);
        }
    }

    private void e() {
        setWrapContent();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean f() {
        this.o = (ViewGroup) findViewById(findID("tkay_viewgroup_ctaroot"));
        this.p = (ImageView) findViewById(findID("tkay_iv_appicon"));
        this.q = (TextView) findViewById(findID("tkay_tv_title"));
        TextView textView = (TextView) findViewById(findID("tkay_tv_install"));
        this.s = textView;
        return isNotNULL(this.o, this.p, this.q, textView);
    }

    private void g() {
        JSONObject jSONObject;
        JSONException e;
        if (this.b != null) {
            this.b.j();
        }
        try {
            jSONObject = new JSONObject();
            try {
                jSONObject.put(com.tkay.expressad.foundation.g.a.ce, a(0));
            } catch (JSONException e2) {
                e = e2;
                e.printStackTrace();
            }
        } catch (JSONException e3) {
            jSONObject = null;
            e = e3;
        }
        this.e.a(105, jSONObject);
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView, android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        this.u = motionEvent.getRawX();
        this.v = motionEvent.getRawY();
        return super.onInterceptTouchEvent(motionEvent);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        ObjectAnimator objectAnimator = this.x;
        if (objectAnimator != null) {
            try {
                objectAnimator.start();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        ObjectAnimator objectAnimator = this.x;
        if (objectAnimator != null) {
            try {
                objectAnimator.cancel();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    static /* synthetic */ void b(TkayClickCTAView tkayClickCTAView) {
        JSONObject jSONObject;
        JSONException e;
        if (tkayClickCTAView.b != null) {
            tkayClickCTAView.b.j();
        }
        try {
            jSONObject = new JSONObject();
            try {
                jSONObject.put(com.tkay.expressad.foundation.g.a.ce, tkayClickCTAView.a(0));
            } catch (JSONException e2) {
                e = e2;
                e.printStackTrace();
            }
        } catch (JSONException e3) {
            jSONObject = null;
            e = e3;
        }
        tkayClickCTAView.e.a(105, jSONObject);
    }
}
