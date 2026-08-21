package com.tkay.expressad.video.dynview.ordercamp.a;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.g.d.b;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.video.dynview.widget.ATRotationView;
import com.tkay.expressad.video.dynview.widget.TYImageView;
import com.tkay.expressad.video.dynview.widget.TYLevelLayoutView;
import com.tkay.expressad.video.dynview.widget.TYTextView;
import com.tkay.expressad.videocommon.view.RoundImageView;
import java.util.List;
import java.util.Locale;

/* JADX INFO: loaded from: classes3.dex */
public final class a extends BaseAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7250a = "OrderCampAdapter";
    private static final String e = "tkay_lv_item_rl";
    private static final String f = "tkay_lv_iv";
    private static final String g = "tkay_lv_icon_iv";
    private static final String h = "tkay_lv_title_tv";
    private static final String i = "tkay_lv_tv_install";
    private static final String j = "tkay_lv_sv_starlevel";
    private static final String k = "tkay_lv_sv_heat_level";
    private static final String l = "tkay_lv_ration";
    private static final String m = "tkay_lv_desc_tv";
    private static final String n = "tkay_iv_flag";
    private static final String o = "tkay_order_viewed_tv";
    private static final String p = "tkay_order_layout_item";
    private static final String q = "tkay_lv_iv_burl";
    private static final String r = "501";
    private static final String s = "\\.xml";
    private static final String t = "\\/xml";
    private static final String u = "_item.xml";
    private boolean b = false;
    private C0480a c;
    private List<c> d;

    @Override // android.widget.Adapter
    public final long getItemId(int i2) {
        return i2;
    }

    public a(List<c> list) {
        this.d = list;
    }

    @Override // android.widget.Adapter
    public final int getCount() {
        List<c> list = this.d;
        if (list == null || list.size() <= 0) {
            return 0;
        }
        return this.d.size();
    }

    @Override // android.widget.Adapter
    public final Object getItem(int i2) {
        List<c> list = this.d;
        if (list != null) {
            return list.get(i2);
        }
        return null;
    }

    private void a(int i2) {
        List<c> list = this.d;
        if (list == null || this.c == null || list.size() == 0) {
            return;
        }
        if (this.c.c != null) {
            a(this.c.c, this.d.get(i2).be(), false);
        }
        if (this.c.d != null) {
            this.c.d.setBorderRadius(25);
            a(this.c.d, this.d.get(i2).bd(), true);
        }
        double dAX = this.d.get(i2).aX();
        if (dAX <= 0.0d) {
            dAX = 5.0d;
        }
        if (this.c.i != null) {
            this.c.i.setRatingAndUser(dAX, this.d.get(i2).aY());
            this.c.i.setOrientation(0);
        }
        if (this.c.b != null) {
            this.c.b.setWidthRatio(1.0f);
            this.c.b.setHeightRatio(1.0f);
            this.c.b.setAutoscroll(false);
        }
        if (this.c.c != null) {
            this.c.c.setCustomBorder(30, 30, 30, 30, 10, -1728053248);
        }
    }

    private View b() {
        View viewInflate = LayoutInflater.from(m.a().f()).inflate(i.a(m.a().f().getApplicationContext(), p, "layout"), (ViewGroup) null);
        C0480a c0480a = new C0480a();
        this.c = c0480a;
        c0480a.c = (TYImageView) viewInflate.findViewById(b(f));
        this.c.d = (RoundImageView) viewInflate.findViewById(b(g));
        this.c.i = (TYLevelLayoutView) viewInflate.findViewById(b(j));
        this.c.b = (ATRotationView) viewInflate.findViewById(b(l));
        viewInflate.setTag(this.c);
        return viewInflate;
    }

    private void a(View view) {
        this.c.f7253a = (RelativeLayout) view.findViewById(d(e));
        this.c.e = (TextView) view.findViewById(d(h));
        this.c.g = (TextView) view.findViewById(d(i));
        this.c.f = (TextView) view.findViewById(d(m));
        this.c.j = (ImageView) view.findViewById(d(n));
        this.c.h = (TextView) view.findViewById(d(o));
    }

    private void a(final ImageView imageView, String str, final boolean z) {
        if (imageView == null) {
            return;
        }
        if (!TextUtils.isEmpty(str)) {
            b.a(imageView.getContext()).a(str, new com.tkay.expressad.foundation.g.d.c() { // from class: com.tkay.expressad.video.dynview.ordercamp.a.a.1
                @Override // com.tkay.expressad.foundation.g.d.c
                public final void a(Bitmap bitmap, String str2) {
                    try {
                        if (bitmap.isRecycled()) {
                            return;
                        }
                        imageView.setImageBitmap(bitmap);
                    } catch (Throwable th) {
                        th.getMessage();
                    }
                }

                @Override // com.tkay.expressad.foundation.g.d.c
                public final void a(String str2, String str3) {
                    if (z) {
                        imageView.setVisibility(8);
                    }
                }
            });
        } else if (z) {
            imageView.setVisibility(8);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.dynview.ordercamp.a.a$a, reason: collision with other inner class name */
    static class C0480a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        RelativeLayout f7253a;
        ATRotationView b;
        TYImageView c;
        RoundImageView d;
        TextView e;
        TextView f;
        TextView g;
        TextView h;
        TYLevelLayoutView i;
        ImageView j;

        C0480a() {
        }
    }

    private static int a(String str) {
        return i.a(m.a().f().getApplicationContext(), str, "layout");
    }

    private static int b(String str) {
        return i.a(m.a().f().getApplicationContext(), str, "id");
    }

    private static int c(String str) {
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        return str.hashCode();
    }

    private void b(int i2) {
        if (this.c != null) {
            c cVar = this.d.get(i2);
            if (this.c.e != null) {
                this.c.e.setText(cVar.bb());
            }
            if (this.c.f != null) {
                this.c.f.setText(cVar.bc());
            }
            if (this.c.g != null) {
                String str = cVar.cU;
                if (this.c.g instanceof TYTextView) {
                    new com.tkay.expressad.video.dynview.h.b();
                    ((TYTextView) this.c.g).setObjectAnimator(com.tkay.expressad.video.dynview.h.b.c(this.c.g));
                }
                this.c.g.setText(str);
            }
            if (this.c.j != null) {
                try {
                    Locale.getDefault().getLanguage();
                    Context contextF = m.a().f();
                    b.a(contextF).a(cVar.aE(), new AnonymousClass2(contextF));
                } catch (Exception e2) {
                    e2.getMessage();
                }
            }
            if (this.c.h != null) {
                try {
                    this.c.h.setText(m.a().f().getResources().getString(m.a().f().getResources().getIdentifier("tkay_reward_viewed_text_str", i.g, m.a().f().getPackageName())));
                    this.c.h.setVisibility(0);
                } catch (Exception e3) {
                    e3.getMessage();
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.dynview.ordercamp.a.a$2, reason: invalid class name */
    final class AnonymousClass2 implements com.tkay.expressad.foundation.g.d.c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Context f7252a;

        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(String str, String str2) {
        }

        AnonymousClass2(Context context) {
            this.f7252a = context;
        }

        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(Bitmap bitmap, String str) {
            if (bitmap == null || bitmap.isRecycled()) {
                return;
            }
            try {
                int iB = t.b(this.f7252a, 12.0f);
                a.this.c.j.getLayoutParams().height = iB;
                a.this.c.j.getLayoutParams().width = (int) (iB * ((bitmap.getWidth() * 1.0f) / bitmap.getHeight()));
                a.this.c.j.setImageBitmap(bitmap);
                a.this.c.j.setBackgroundColor(1426063360);
            } catch (Throwable unused) {
            }
        }
    }

    private int d(String str) {
        if (this.b) {
            return c(str);
        }
        return b(str);
    }

    @Override // android.widget.Adapter
    public final View getView(int i2, View view, ViewGroup viewGroup) {
        try {
            if (view != null) {
                this.c = (C0480a) view.getTag();
            } else {
                View viewInflate = LayoutInflater.from(m.a().f()).inflate(i.a(m.a().f().getApplicationContext(), p, "layout"), (ViewGroup) null);
                C0480a c0480a = new C0480a();
                this.c = c0480a;
                c0480a.c = (TYImageView) viewInflate.findViewById(b(f));
                this.c.d = (RoundImageView) viewInflate.findViewById(b(g));
                this.c.i = (TYLevelLayoutView) viewInflate.findViewById(b(j));
                this.c.b = (ATRotationView) viewInflate.findViewById(b(l));
                viewInflate.setTag(this.c);
                view = viewInflate;
            }
            this.c.f7253a = (RelativeLayout) view.findViewById(d(e));
            this.c.e = (TextView) view.findViewById(d(h));
            this.c.g = (TextView) view.findViewById(d(i));
            this.c.f = (TextView) view.findViewById(d(m));
            this.c.j = (ImageView) view.findViewById(d(n));
            this.c.h = (TextView) view.findViewById(d(o));
            if (this.d != null && this.c != null && this.d.size() != 0) {
                if (this.c.c != null) {
                    a(this.c.c, this.d.get(i2).be(), false);
                }
                if (this.c.d != null) {
                    this.c.d.setBorderRadius(25);
                    a(this.c.d, this.d.get(i2).bd(), true);
                }
                double dAX = this.d.get(i2).aX();
                if (dAX <= 0.0d) {
                    dAX = 5.0d;
                }
                if (this.c.i != null) {
                    this.c.i.setRatingAndUser(dAX, this.d.get(i2).aY());
                    this.c.i.setOrientation(0);
                }
                if (this.c.b != null) {
                    this.c.b.setWidthRatio(1.0f);
                    this.c.b.setHeightRatio(1.0f);
                    this.c.b.setAutoscroll(false);
                }
                if (this.c.c != null) {
                    this.c.c.setCustomBorder(30, 30, 30, 30, 10, -1728053248);
                }
            }
            if (this.c != null) {
                c cVar = this.d.get(i2);
                if (this.c.e != null) {
                    this.c.e.setText(cVar.bb());
                }
                if (this.c.f != null) {
                    this.c.f.setText(cVar.bc());
                }
                if (this.c.g != null) {
                    String str = cVar.cU;
                    if (this.c.g instanceof TYTextView) {
                        new com.tkay.expressad.video.dynview.h.b();
                        ((TYTextView) this.c.g).setObjectAnimator(com.tkay.expressad.video.dynview.h.b.c(this.c.g));
                    }
                    this.c.g.setText(str);
                }
                if (this.c.j != null) {
                    try {
                        Locale.getDefault().getLanguage();
                        Context contextF = m.a().f();
                        b.a(contextF).a(cVar.aE(), new AnonymousClass2(contextF));
                    } catch (Exception e2) {
                        e2.getMessage();
                    }
                }
                if (this.c.h != null) {
                    try {
                        this.c.h.setText(m.a().f().getResources().getString(m.a().f().getResources().getIdentifier("tkay_reward_viewed_text_str", i.g, m.a().f().getPackageName())));
                        this.c.h.setVisibility(0);
                    } catch (Exception e3) {
                        e3.getMessage();
                    }
                }
            }
        } catch (Exception e4) {
            e4.getMessage();
        }
        return view;
    }

    private View a() {
        View viewInflate = LayoutInflater.from(m.a().f()).inflate(i.a(m.a().f().getApplicationContext(), p, "layout"), (ViewGroup) null);
        C0480a c0480a = new C0480a();
        this.c = c0480a;
        c0480a.c = (TYImageView) viewInflate.findViewById(b(f));
        this.c.d = (RoundImageView) viewInflate.findViewById(b(g));
        this.c.i = (TYLevelLayoutView) viewInflate.findViewById(b(j));
        this.c.b = (ATRotationView) viewInflate.findViewById(b(l));
        viewInflate.setTag(this.c);
        return viewInflate;
    }
}
