package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.l.u;
import com.tkay.core.common.res.b;
import com.tkay.core.common.res.e;
import com.tkay.core.common.ui.component.RoundImageView;

/* JADX INFO: loaded from: classes3.dex */
public class EndCardView extends BaseEndCardView {
    private a e;
    private int f;
    private int g;
    private ImageView h;
    private RoundImageView i;
    private ImageView j;
    private TextView k;
    private final View.OnClickListener l;

    public interface a {
        void a();

        void b();
    }

    @Override // com.tkay.basead.ui.BaseEndCardView
    protected final void a() {
    }

    public EndCardView(Context context, h hVar, i iVar) {
        super(context, hVar, iVar);
        this.l = new View.OnClickListener() { // from class: com.tkay.basead.ui.EndCardView.1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (EndCardView.this.d != null) {
                    if (EndCardView.this.d.x() == 0) {
                        if (EndCardView.this.e != null) {
                            EndCardView.this.e.a();
                        }
                    } else {
                        if (EndCardView.this.k == null || !EndCardView.this.k.isShown() || view != EndCardView.this.k || EndCardView.this.e == null) {
                            return;
                        }
                        EndCardView.this.e.a();
                    }
                }
            }
        };
    }

    public void setSize(int i, int i2) {
        this.f = i;
        this.g = i2;
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.EndCardView$2, reason: invalid class name */
    final class AnonymousClass2 implements b.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ h f5777a;

        AnonymousClass2(h hVar) {
            this.f5777a = hVar;
        }

        @Override // com.tkay.core.common.res.b.a
        public final void onSuccess(String str, final Bitmap bitmap) {
            if (TextUtils.equals(str, this.f5777a.u())) {
                EndCardView.this.h.setImageBitmap(bitmap);
                EndCardView.this.post(new Runnable() { // from class: com.tkay.basead.ui.EndCardView.2.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        int[] iArrA = u.a(EndCardView.this.getWidth(), EndCardView.this.getHeight(), bitmap.getWidth() / bitmap.getHeight());
                        ViewGroup.LayoutParams layoutParams = EndCardView.this.h.getLayoutParams();
                        if (layoutParams != null) {
                            layoutParams.width = iArrA[0];
                            layoutParams.height = iArrA[1];
                            EndCardView.this.h.setLayoutParams(layoutParams);
                        }
                        if (EndCardView.this.e != null) {
                            EndCardView.this.e.b();
                        }
                    }
                });
                EndCardView.this.i.setImageBitmap(com.tkay.core.common.l.b.a(EndCardView.this.getContext(), bitmap));
            }
        }

        @Override // com.tkay.core.common.res.b.a
        public final void onFail(String str, String str2) {
            if (EndCardView.this.e != null) {
                EndCardView.this.e.b();
            }
        }
    }

    private void a(h hVar) {
        try {
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, hVar.u()), this.f, this.g, new AnonymousClass2(hVar));
        } catch (Exception e) {
            e.printStackTrace();
        } catch (OutOfMemoryError e2) {
            e2.printStackTrace();
        }
    }

    public void init(boolean z, boolean z2, a aVar) {
        setId(com.tkay.core.common.l.h.a(getContext(), "myoffer_end_card_id", "id"));
        this.e = aVar;
        RoundImageView roundImageView = new RoundImageView(getContext());
        this.i = roundImageView;
        roundImageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
        this.h = new RoundImageView(getContext());
        ViewGroup.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(this.f, this.g);
        layoutParams2.addRule(13);
        addView(this.i, layoutParams);
        addView(this.h, layoutParams2);
        if (z) {
            h hVar = this.b;
            this.j = new RoundImageView(getContext());
            int iA = com.tkay.core.common.l.h.a(getContext(), 12.0f);
            RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-2, iA);
            layoutParams3.addRule(11);
            layoutParams3.addRule(12);
            addView(this.j, layoutParams3);
            String strV = hVar.v();
            if (!TextUtils.isEmpty(strV)) {
                ViewGroup.LayoutParams layoutParams4 = this.j.getLayoutParams();
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, strV), layoutParams4.width, layoutParams4.height, new AnonymousClass3(strV, iA));
            }
        }
        if (z2) {
            ScanningAnimTextView scanningAnimTextView = new ScanningAnimTextView(getContext());
            this.k = scanningAnimTextView;
            scanningAnimTextView.setText(com.tkay.core.common.l.h.a(getContext(), "myoffer_cta_learn_more", com.tkay.expressad.foundation.h.i.g));
            this.k.setTextColor(Color.parseColor("#ffffffff"));
            this.k.setTextSize(14.0f);
            this.k.setGravity(17);
            this.k.setBackgroundResource(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_bg_rectangle_btn_cta_asseblem", com.tkay.expressad.foundation.h.i.c));
            this.k.setOnClickListener(this.l);
            RelativeLayout.LayoutParams layoutParams5 = new RelativeLayout.LayoutParams(-1, com.tkay.core.common.l.h.a(getContext(), 48.0f));
            layoutParams5.addRule(12);
            layoutParams5.bottomMargin = com.tkay.core.common.l.h.a(getContext(), 96.0f);
            layoutParams5.leftMargin = com.tkay.core.common.l.h.a(getContext(), 24.0f);
            layoutParams5.rightMargin = com.tkay.core.common.l.h.a(getContext(), 24.0f);
            addView(this.k, layoutParams5);
        }
        setOnClickListener(this.l);
    }

    private void b(h hVar) {
        this.j = new RoundImageView(getContext());
        int iA = com.tkay.core.common.l.h.a(getContext(), 12.0f);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, iA);
        layoutParams.addRule(11);
        layoutParams.addRule(12);
        addView(this.j, layoutParams);
        String strV = hVar.v();
        if (TextUtils.isEmpty(strV)) {
            return;
        }
        ViewGroup.LayoutParams layoutParams2 = this.j.getLayoutParams();
        com.tkay.core.common.res.b.a(getContext()).a(new e(1, strV), layoutParams2.width, layoutParams2.height, new AnonymousClass3(strV, iA));
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.EndCardView$3, reason: invalid class name */
    final class AnonymousClass3 implements b.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ String f5779a;
        final /* synthetic */ int b;

        @Override // com.tkay.core.common.res.b.a
        public final void onFail(String str, String str2) {
        }

        AnonymousClass3(String str, int i) {
            this.f5779a = str;
            this.b = i;
        }

        @Override // com.tkay.core.common.res.b.a
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(str, this.f5779a)) {
                int i = this.b;
                ViewGroup.LayoutParams layoutParams = EndCardView.this.j.getLayoutParams();
                layoutParams.width = (int) (i * ((bitmap.getWidth() * 1.0f) / bitmap.getHeight()));
                layoutParams.height = i;
                EndCardView.this.j.setLayoutParams(layoutParams);
                EndCardView.this.j.setScaleType(ImageView.ScaleType.FIT_XY);
                EndCardView.this.j.setImageBitmap(bitmap);
            }
        }
    }

    private void b() {
        ScanningAnimTextView scanningAnimTextView = new ScanningAnimTextView(getContext());
        this.k = scanningAnimTextView;
        scanningAnimTextView.setText(com.tkay.core.common.l.h.a(getContext(), "myoffer_cta_learn_more", com.tkay.expressad.foundation.h.i.g));
        this.k.setTextColor(Color.parseColor("#ffffffff"));
        this.k.setTextSize(14.0f);
        this.k.setGravity(17);
        this.k.setBackgroundResource(com.tkay.core.common.l.h.a(getContext(), "myoffer_splash_bg_rectangle_btn_cta_asseblem", com.tkay.expressad.foundation.h.i.c));
        this.k.setOnClickListener(this.l);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, com.tkay.core.common.l.h.a(getContext(), 48.0f));
        layoutParams.addRule(12);
        layoutParams.bottomMargin = com.tkay.core.common.l.h.a(getContext(), 96.0f);
        layoutParams.leftMargin = com.tkay.core.common.l.h.a(getContext(), 24.0f);
        layoutParams.rightMargin = com.tkay.core.common.l.h.a(getContext(), 24.0f);
        addView(this.k, layoutParams);
    }

    public void load() {
        h hVar = this.b;
        try {
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, hVar.u()), this.f, this.g, new AnonymousClass2(hVar));
        } catch (Exception e) {
            e.printStackTrace();
        } catch (OutOfMemoryError e2) {
            e2.printStackTrace();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    public View getLearnMoreButton() {
        return this.k;
    }
}
