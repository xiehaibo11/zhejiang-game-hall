package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.tkay.basead.a.b.c;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import com.tkay.core.common.f.r;
import com.tkay.core.common.f.z;
import com.tkay.core.common.l.l;
import com.tkay.core.common.l.u;
import com.tkay.core.common.res.b;
import com.tkay.core.common.res.e;
import com.tkay.core.common.res.image.RecycleImageView;
import com.tkay.core.common.ui.component.RoundImageView;

/* JADX INFO: loaded from: classes3.dex */
public class SdkBannerATView extends BaseBannerATView {
    private static final int x = 1;
    private static final int y = 2;
    private final View.OnClickListener A;
    boolean u;
    String v;
    private int w;
    private final View.OnClickListener z;

    public SdkBannerATView(Context context) {
        super(context);
        this.w = 2;
        this.z = new View.OnClickListener() { // from class: com.tkay.basead.ui.SdkBannerATView.1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (2 != SdkBannerATView.this.w) {
                    SdkBannerATView.super.b(1);
                } else {
                    if (SdkBannerATView.this.c.m == null || SdkBannerATView.this.c.m.x() != 0) {
                        return;
                    }
                    SdkBannerATView.super.b(1);
                }
            }
        };
        this.A = new View.OnClickListener() { // from class: com.tkay.basead.ui.SdkBannerATView.8
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                SdkBannerATView.super.b(1);
            }
        };
    }

    public SdkBannerATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar) {
        super(context, iVar, hVar, aVar);
        this.w = 2;
        this.z = new View.OnClickListener() { // from class: com.tkay.basead.ui.SdkBannerATView.1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (2 != SdkBannerATView.this.w) {
                    SdkBannerATView.super.b(1);
                } else {
                    if (SdkBannerATView.this.c.m == null || SdkBannerATView.this.c.m.x() != 0) {
                        return;
                    }
                    SdkBannerATView.super.b(1);
                }
            }
        };
        this.A = new View.OnClickListener() { // from class: com.tkay.basead.ui.SdkBannerATView.8
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                SdkBannerATView.super.b(1);
            }
        };
        b();
        c();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:112:0x03f5 A[PHI: r11 r15
      0x03f5: PHI (r11v11 java.lang.Object) = (r11v9 java.lang.Object), (r11v13 java.lang.Object), (r11v17 java.lang.Object) binds: [B:110:0x03f1, B:107:0x03e5, B:102:0x03cc] A[DONT_GENERATE, DONT_INLINE]
      0x03f5: PHI (r15v5 java.lang.Object) = (r15v3 java.lang.Object), (r15v6 java.lang.Object), (r15v8 java.lang.Object) binds: [B:110:0x03f1, B:107:0x03e5, B:102:0x03cc] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:114:0x03f8  */
    /* JADX WARN: Removed duplicated region for block: B:121:0x0431  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x0456  */
    /* JADX WARN: Removed duplicated region for block: B:125:0x0487  */
    /* JADX WARN: Removed duplicated region for block: B:130:0x04bf  */
    /* JADX WARN: Removed duplicated region for block: B:133:0x04d9  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x0506  */
    /* JADX WARN: Removed duplicated region for block: B:137:0x0510  */
    /* JADX WARN: Removed duplicated region for block: B:140:0x0558  */
    /* JADX WARN: Removed duplicated region for block: B:143:0x056a  */
    /* JADX WARN: Removed duplicated region for block: B:146:0x057d  */
    /* JADX WARN: Removed duplicated region for block: B:184:0x0675  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x004b  */
    /* JADX WARN: Removed duplicated region for block: B:237:0x07a1  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void o() {
        /*
            Method dump skipped, instruction units count: 2116
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.ui.SdkBannerATView.o():void");
    }

    private int a(String str) {
        int i = 1;
        if (this.d instanceof z) {
            if (((z) this.d).Y() != 1) {
                i = 2;
            }
        } else if (!(this.d instanceof r) || TextUtils.isEmpty(str) || !c.c(str)) {
            i = 2;
        }
        this.w = i;
        return i;
    }

    private void b(String str) {
        RelativeLayout relativeLayout = (RelativeLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_root", "id"));
        this.t = (CloseImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_close", "id"));
        RelativeLayout relativeLayout2 = (RelativeLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_container", "id"));
        TextView textView = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_publisher_name", "id"));
        TextView textView2 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_privacy_agreement", "id"));
        TextView textView3 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_permission_manage", "id"));
        TextView textView4 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_version_name", "id"));
        if (this.c.m.s() == 0) {
            this.t.setVisibility(0);
            if (TextUtils.equals(j.d, this.v)) {
                ViewGroup.LayoutParams layoutParams = this.t.getLayoutParams();
                layoutParams.width = com.tkay.core.common.l.h.a(getContext(), 23.0f);
                layoutParams.height = com.tkay.core.common.l.h.a(getContext(), 23.0f);
                this.t.setLayoutParams(layoutParams);
            }
            a(this.t, this.c.m.h());
        } else {
            this.t.setVisibility(8);
        }
        RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) relativeLayout.getLayoutParams();
        layoutParams2.width = -1;
        layoutParams2.height = -1;
        relativeLayout.setLayoutParams(layoutParams2);
        RecycleImageView recycleImageView = new RecycleImageView(getContext());
        recycleImageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
        addView(recycleImageView, 0, new RelativeLayout.LayoutParams(-1, -1));
        RecycleImageView recycleImageView2 = new RecycleImageView(getContext());
        recycleImageView2.setScaleType(ImageView.ScaleType.FIT_CENTER);
        com.tkay.core.common.res.b.a(getContext()).a(new e(1, str), new AnonymousClass9(str, recycleImageView2, recycleImageView));
        this.r.add(recycleImageView2);
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-1, -1);
        layoutParams3.addRule(13);
        addView(recycleImageView2, 1, layoutParams3);
        if (!TextUtils.isEmpty(this.d.v())) {
            ImageView imageView = (ImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_self_ad_logo", "id"));
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.v()), new AnonymousClass10(imageView));
            this.r.add(imageView);
        }
        if (this.d.K()) {
            if (relativeLayout2 != null) {
                relativeLayout2.setVisibility(0);
            }
            if (textView != null) {
                textView.setVisibility(0);
                textView.setText(this.d.F());
                textView.setOnClickListener(new AnonymousClass11());
            }
            if (textView2 != null) {
                textView2.setVisibility(0);
                textView2.setOnClickListener(new AnonymousClass12());
            }
            if (textView3 != null) {
                textView3.setVisibility(0);
                textView3.setOnClickListener(new AnonymousClass13());
            }
            if (textView4 != null) {
                textView4.setVisibility(0);
                textView4.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", com.tkay.expressad.foundation.h.i.g), this.d.G()));
                textView4.setOnClickListener(new AnonymousClass14());
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$9, reason: invalid class name */
    final class AnonymousClass9 implements b.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ String f5844a;
        final /* synthetic */ RecycleImageView b;
        final /* synthetic */ RecycleImageView c;

        @Override // com.tkay.core.common.res.b.a
        public final void onFail(String str, String str2) {
        }

        AnonymousClass9(String str, RecycleImageView recycleImageView, RecycleImageView recycleImageView2) {
            this.f5844a = str;
            this.b = recycleImageView;
            this.c = recycleImageView2;
        }

        @Override // com.tkay.core.common.res.b.a
        public final void onSuccess(String str, final Bitmap bitmap) {
            if (TextUtils.equals(this.f5844a, str)) {
                this.b.setImageBitmap(bitmap);
                SdkBannerATView.this.post(new Runnable() { // from class: com.tkay.basead.ui.SdkBannerATView.9.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        int[] iArrA = u.a(SdkBannerATView.this.getWidth(), SdkBannerATView.this.getHeight(), bitmap.getWidth() / bitmap.getHeight());
                        ViewGroup.LayoutParams layoutParams = AnonymousClass9.this.b.getLayoutParams();
                        if (layoutParams != null) {
                            layoutParams.width = iArrA[0];
                            layoutParams.height = iArrA[1];
                            AnonymousClass9.this.b.setLayoutParams(layoutParams);
                        }
                    }
                });
                this.c.setImageBitmap(com.tkay.core.common.l.b.a(SdkBannerATView.this.getContext(), bitmap));
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$10, reason: invalid class name */
    final class AnonymousClass10 implements b.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ ImageView f5831a;

        @Override // com.tkay.core.common.res.b.a
        public final void onFail(String str, String str2) {
        }

        AnonymousClass10(ImageView imageView) {
            this.f5831a = imageView;
        }

        @Override // com.tkay.core.common.res.b.a
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(SdkBannerATView.this.d.v(), str)) {
                this.f5831a.setImageBitmap(bitmap);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$11, reason: invalid class name */
    final class AnonymousClass11 implements View.OnClickListener {
        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
        }

        AnonymousClass11() {
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$12, reason: invalid class name */
    final class AnonymousClass12 implements View.OnClickListener {
        AnonymousClass12() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            l.a(m.a().f(), SdkBannerATView.this.d.H());
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$13, reason: invalid class name */
    final class AnonymousClass13 implements View.OnClickListener {
        AnonymousClass13() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            l.a(m.a().f(), SdkBannerATView.this.d.I());
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$14, reason: invalid class name */
    final class AnonymousClass14 implements View.OnClickListener {
        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
        }

        AnonymousClass14() {
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:151:0x04b0  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x011f  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0122  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x0155  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x02d1  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x038b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void p() {
        /*
            Method dump skipped, instruction units count: 1344
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.ui.SdkBannerATView.p():void");
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$15, reason: invalid class name */
    final class AnonymousClass15 implements b.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ RoundImageView f5836a;

        @Override // com.tkay.core.common.res.b.a
        public final void onFail(String str, String str2) {
        }

        AnonymousClass15(RoundImageView roundImageView) {
            this.f5836a = roundImageView;
        }

        @Override // com.tkay.core.common.res.b.a
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(SdkBannerATView.this.d.t(), str)) {
                this.f5836a.setImageBitmap(bitmap);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$2, reason: invalid class name */
    final class AnonymousClass2 implements b.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ ImageView f5837a;

        @Override // com.tkay.core.common.res.b.a
        public final void onFail(String str, String str2) {
        }

        AnonymousClass2(ImageView imageView) {
            this.f5837a = imageView;
        }

        @Override // com.tkay.core.common.res.b.a
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(SdkBannerATView.this.d.v(), str)) {
                this.f5837a.setImageBitmap(bitmap);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$3, reason: invalid class name */
    final class AnonymousClass3 implements b.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ RoundImageView f5838a;

        @Override // com.tkay.core.common.res.b.a
        public final void onFail(String str, String str2) {
        }

        AnonymousClass3(RoundImageView roundImageView) {
            this.f5838a = roundImageView;
        }

        @Override // com.tkay.core.common.res.b.a
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(SdkBannerATView.this.d.u(), str)) {
                this.f5838a.setImageBitmap(bitmap);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$4, reason: invalid class name */
    final class AnonymousClass4 implements View.OnClickListener {
        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
        }

        AnonymousClass4() {
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$5, reason: invalid class name */
    final class AnonymousClass5 implements View.OnClickListener {
        AnonymousClass5() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            l.a(m.a().f(), SdkBannerATView.this.d.H());
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$6, reason: invalid class name */
    final class AnonymousClass6 implements View.OnClickListener {
        AnonymousClass6() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            l.a(m.a().f(), SdkBannerATView.this.d.I());
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.SdkBannerATView$7, reason: invalid class name */
    final class AnonymousClass7 implements View.OnClickListener {
        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
        }

        AnonymousClass7() {
        }
    }

    @Override // com.tkay.basead.ui.BaseBannerATView
    protected final void c() {
        int size = this.r.size();
        for (int i = 0; i < size; i++) {
            View view = this.r.get(i);
            if (view != null) {
                view.setOnClickListener(this.A);
            }
        }
        setOnClickListener(this.z);
        super.c();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:112:0x03f5 A[PHI: r11 r15
      0x03f5: PHI (r11v11 java.lang.Object) = (r11v9 java.lang.Object), (r11v13 java.lang.Object), (r11v17 java.lang.Object) binds: [B:110:0x03f1, B:107:0x03e5, B:102:0x03cc] A[DONT_GENERATE, DONT_INLINE]
      0x03f5: PHI (r15v5 java.lang.Object) = (r15v3 java.lang.Object), (r15v6 java.lang.Object), (r15v8 java.lang.Object) binds: [B:110:0x03f1, B:107:0x03e5, B:102:0x03cc] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:114:0x03f8  */
    /* JADX WARN: Removed duplicated region for block: B:121:0x0431  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x0456  */
    /* JADX WARN: Removed duplicated region for block: B:125:0x0487  */
    /* JADX WARN: Removed duplicated region for block: B:130:0x04bf  */
    /* JADX WARN: Removed duplicated region for block: B:133:0x04d9  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x0506  */
    /* JADX WARN: Removed duplicated region for block: B:137:0x0510  */
    /* JADX WARN: Removed duplicated region for block: B:140:0x0558  */
    /* JADX WARN: Removed duplicated region for block: B:143:0x056a  */
    /* JADX WARN: Removed duplicated region for block: B:146:0x057d  */
    /* JADX WARN: Removed duplicated region for block: B:184:0x0675  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x004b  */
    /* JADX WARN: Removed duplicated region for block: B:237:0x07a1  */
    @Override // com.tkay.basead.ui.BaseATView
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected final void a() {
        /*
            Method dump skipped, instruction units count: 2116
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.ui.SdkBannerATView.a():void");
    }
}
