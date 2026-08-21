package com.tkay.basead;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.Color;
import android.os.Handler;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.TextView;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public h f5601a;
    public i b;
    private Context c;
    private Dialog d;
    private View e;
    private EditText f;
    private ImageView g;
    private TextView h;
    private TextView i;
    private TextView j;
    private TextView k;
    private TextView l;
    private TextView m;
    private TextView n;
    private TextView o;
    private TextView p;
    private TextView q;
    private boolean r;
    private a s;
    private View.OnClickListener t = new View.OnClickListener() { // from class: com.tkay.basead.c.5
        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            if (view instanceof TextView) {
                com.tkay.core.common.k.c.a(c.this.f5601a, c.this.b, ((TextView) view).getTag().toString(), "");
                c.b(c.this);
                if (c.this.s != null) {
                    c.this.s.a();
                }
            }
        }
    };

    public interface a {
        void a();

        void b();
    }

    public final void a(Context context, h hVar, i iVar, a aVar) {
        try {
            this.c = context;
            this.f5601a = hVar;
            this.b = iVar;
            this.s = aVar;
            int i = context.getResources().getDisplayMetrics().widthPixels;
            int i2 = context.getResources().getDisplayMetrics().heightPixels;
            if (i > i2) {
                this.e = LayoutInflater.from(context).inflate(com.tkay.core.common.l.h.a(context, "myoffer_feedback_land", "layout"), (ViewGroup) null, false);
            } else {
                this.e = LayoutInflater.from(context).inflate(com.tkay.core.common.l.h.a(context, "myoffer_feedback", "layout"), (ViewGroup) null, false);
            }
            this.g = (ImageView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_iv_close", "id"));
            this.f = (EditText) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_et", "id"));
            this.h = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_commit", "id"));
            this.i = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_1", "id"));
            this.j = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_2", "id"));
            this.k = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_3", "id"));
            this.l = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_4", "id"));
            this.m = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_5", "id"));
            this.n = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_6", "id"));
            this.o = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_7", "id"));
            this.p = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_8", "id"));
            this.q = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_9", "id"));
            this.g.setOnClickListener(new AnonymousClass2());
            this.i.setOnClickListener(this.t);
            this.j.setOnClickListener(this.t);
            this.k.setOnClickListener(this.t);
            this.l.setOnClickListener(this.t);
            this.m.setOnClickListener(this.t);
            this.n.setOnClickListener(this.t);
            this.o.setOnClickListener(this.t);
            this.p.setOnClickListener(this.t);
            this.q.setOnClickListener(this.t);
            this.h.setOnClickListener(new AnonymousClass3());
            Dialog dialog = new Dialog(this.c, com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_dialog", "style"));
            this.d = dialog;
            dialog.setContentView(this.e);
            this.d.setCancelable(true);
            this.d.setOnCancelListener(new AnonymousClass1());
            Window window = this.d.getWindow();
            if (window != null) {
                if (i > i2) {
                    window.setLayout(com.tkay.core.common.l.h.a(this.c, 280.0f), com.tkay.core.common.l.h.a(this.c, 320.0f));
                } else {
                    window.setLayout(com.tkay.core.common.l.h.a(this.c, 300.0f), com.tkay.core.common.l.h.a(this.c, 426.0f));
                }
            }
            this.d.show();
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void a(int i, int i2) {
        Context context = this.c;
        Dialog dialog = new Dialog(context, com.tkay.core.common.l.h.a(context, "myoffer_feedback_dialog", "style"));
        this.d = dialog;
        dialog.setContentView(this.e);
        this.d.setCancelable(true);
        this.d.setOnCancelListener(new AnonymousClass1());
        Window window = this.d.getWindow();
        if (window != null) {
            if (i > i2) {
                window.setLayout(com.tkay.core.common.l.h.a(this.c, 280.0f), com.tkay.core.common.l.h.a(this.c, 320.0f));
            } else {
                window.setLayout(com.tkay.core.common.l.h.a(this.c, 300.0f), com.tkay.core.common.l.h.a(this.c, 426.0f));
            }
        }
        this.d.show();
    }

    /* JADX INFO: renamed from: com.tkay.basead.c$1, reason: invalid class name */
    final class AnonymousClass1 implements DialogInterface.OnCancelListener {
        AnonymousClass1() {
        }

        @Override // android.content.DialogInterface.OnCancelListener
        public final void onCancel(DialogInterface dialogInterface) {
            if (c.this.s != null) {
                c.this.s.b();
            }
        }
    }

    public final boolean a() {
        Dialog dialog = this.d;
        return dialog != null && dialog.isShowing();
    }

    private void c() {
        this.g = (ImageView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_iv_close", "id"));
        this.f = (EditText) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_et", "id"));
        this.h = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_commit", "id"));
        this.i = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_1", "id"));
        this.j = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_2", "id"));
        this.k = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_3", "id"));
        this.l = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_4", "id"));
        this.m = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_5", "id"));
        this.n = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_6", "id"));
        this.o = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_7", "id"));
        this.p = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_8", "id"));
        this.q = (TextView) this.e.findViewById(com.tkay.core.common.l.h.a(this.c, "myoffer_feedback_tv_9", "id"));
        this.g.setOnClickListener(new AnonymousClass2());
        this.i.setOnClickListener(this.t);
        this.j.setOnClickListener(this.t);
        this.k.setOnClickListener(this.t);
        this.l.setOnClickListener(this.t);
        this.m.setOnClickListener(this.t);
        this.n.setOnClickListener(this.t);
        this.o.setOnClickListener(this.t);
        this.p.setOnClickListener(this.t);
        this.q.setOnClickListener(this.t);
        this.h.setOnClickListener(new AnonymousClass3());
    }

    /* JADX INFO: renamed from: com.tkay.basead.c$2, reason: invalid class name */
    final class AnonymousClass2 implements View.OnClickListener {
        AnonymousClass2() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            c.b(c.this);
        }
    }

    private void d() {
        this.g.setOnClickListener(new AnonymousClass2());
        this.i.setOnClickListener(this.t);
        this.j.setOnClickListener(this.t);
        this.k.setOnClickListener(this.t);
        this.l.setOnClickListener(this.t);
        this.m.setOnClickListener(this.t);
        this.n.setOnClickListener(this.t);
        this.o.setOnClickListener(this.t);
        this.p.setOnClickListener(this.t);
        this.q.setOnClickListener(this.t);
        this.h.setOnClickListener(new AnonymousClass3());
    }

    /* JADX INFO: renamed from: com.tkay.basead.c$3, reason: invalid class name */
    final class AnonymousClass3 implements View.OnClickListener {
        AnonymousClass3() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            if (c.this.f != null) {
                String string = c.this.f.getText().toString();
                if (TextUtils.isEmpty(string)) {
                    if (c.this.r) {
                        return;
                    }
                    c.this.r = true;
                    c.this.f.setCursorVisible(false);
                    c.this.f.setHint(com.tkay.core.common.l.h.a(c.this.c, "myoffer_feedback_hint", com.tkay.expressad.foundation.h.i.g));
                    c.this.f.setHintTextColor(Color.parseColor("#999999"));
                    c.this.f.postDelayed(new Runnable() { // from class: com.tkay.basead.c.3.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            c.this.r = false;
                            c.this.f.setCursorVisible(true);
                            c.this.f.setHint("");
                        }
                    }, 1500L);
                    return;
                }
                com.tkay.core.common.k.c.a(c.this.f5601a, c.this.b, "0", string);
                c.b(c.this);
                if (c.this.s != null) {
                    c.this.s.a();
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.c$4, reason: invalid class name */
    final class AnonymousClass4 implements Runnable {
        AnonymousClass4() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (c.this.d != null) {
                c.this.d.dismiss();
            }
            if (c.this.s != null) {
                c.this.s.b();
            }
        }
    }

    private void e() {
        new Handler().postDelayed(new AnonymousClass4(), 30L);
    }

    public final void b() {
        this.c = null;
        this.f5601a = null;
        this.b = null;
        this.s = null;
    }

    static /* synthetic */ void b(c cVar) {
        new Handler().postDelayed(cVar.new AnonymousClass4(), 30L);
    }
}
