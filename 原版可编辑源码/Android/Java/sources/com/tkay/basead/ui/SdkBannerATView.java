package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.view.LayoutInflater;
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
        this.z = new View.OnClickListener() {
            @Override
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
        this.A = new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                SdkBannerATView.super.b(1);
            }
        };
    }

    public SdkBannerATView(Context context, i iVar, h hVar, com.tkay.basead.e.a aVar) {
        super(context, iVar, hVar, aVar);
        this.w = 2;
        this.z = new View.OnClickListener() {
            @Override
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
        this.A = new View.OnClickListener() {
            @Override
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
    */
    private void o() {
        byte b;
        String str;
        TextView textView;
        Object obj;
        Object obj2;
        byte b2;
        TextView textView2;
        TextView textView3;
        RelativeLayout relativeLayout;
        TextView textView4;
        ImageView imageView;
        RoundImageView roundImageView;
        Object obj3;
        byte b3;
        RelativeLayout relativeLayout2;
        TextView textView5;
        char c;
        byte b4;
        byte b5;
        byte b6;
        String strR = this.c.m.r();
        String strU = this.d instanceof z ? this.d.u() : null;
        switch (strR.hashCode()) {
            case -559799608:
                b = !strR.equals(j.c) ? (byte) -1 : (byte) 1;
                break;
            case 1507809730:
                if (strR.equals(j.a)) {
                    b = 3;
                    break;
                }
                break;
            case 1507809854:
                if (strR.equals(j.b)) {
                    b = 0;
                    break;
                }
                break;
            case 1622564786:
                if (strR.equals(j.d)) {
                    b = 2;
                    break;
                }
                break;
        }
        String str2 = "myoffer_banner_ad_layout_320x50";
        if (b == 0) {
            this.v = j.b;
            if (strU == null && (this.d instanceof r)) {
                strU = ((r) this.d).b();
            }
            this.u = true;
            str2 = "myoffer_banner_ad_layout_320x90";
        } else if (b == 1) {
            this.v = j.c;
            if (strU == null && (this.d instanceof r)) {
                strU = ((r) this.d).c();
            }
            this.u = true;
            str2 = "myoffer_banner_ad_layout_300x250";
        } else if (b == 2) {
            this.v = j.d;
            if (strU == null && (this.d instanceof r)) {
                strU = ((r) this.d).N();
            }
            this.u = true;
            str2 = "myoffer_banner_ad_layout_728x90";
        } else {
            this.v = j.a;
            if (strU == null && (this.d instanceof r)) {
                strU = ((r) this.d).a();
            }
        }
        int i = (!(this.d instanceof z) ? (this.d instanceof r) && !TextUtils.isEmpty(strU) && c.c(strU) : ((z) this.d).Y() == 1) ? 2 : 1;
        this.w = i;
        if (1 == i) {
            LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_ad_layout_pure_picture", "layout"), this);
            RelativeLayout relativeLayout3 = (RelativeLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_root", "id"));
            this.t = (CloseImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_close", "id"));
            RelativeLayout relativeLayout4 = (RelativeLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_container", "id"));
            TextView textView6 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_publisher_name", "id"));
            TextView textView7 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_privacy_agreement", "id"));
            TextView textView8 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_permission_manage", "id"));
            TextView textView9 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_version_name", "id"));
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
            RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) relativeLayout3.getLayoutParams();
            layoutParams2.width = -1;
            layoutParams2.height = -1;
            relativeLayout3.setLayoutParams(layoutParams2);
            RecycleImageView recycleImageView = new RecycleImageView(getContext());
            recycleImageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
            addView(recycleImageView, 0, new RelativeLayout.LayoutParams(-1, -1));
            RecycleImageView recycleImageView2 = new RecycleImageView(getContext());
            recycleImageView2.setScaleType(ImageView.ScaleType.FIT_CENTER);
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, strU), new 9(strU, recycleImageView2, recycleImageView));
            this.r.add(recycleImageView2);
            RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-1, -1);
            layoutParams3.addRule(13);
            addView(recycleImageView2, 1, layoutParams3);
            if (!TextUtils.isEmpty(this.d.v())) {
                ImageView imageView2 = (ImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_self_ad_logo", "id"));
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.v()), new 10(imageView2));
                this.r.add(imageView2);
            }
            if (this.d.K()) {
                if (relativeLayout4 != null) {
                    relativeLayout4.setVisibility(0);
                }
                if (textView6 != null) {
                    textView6.setVisibility(0);
                    textView6.setText(this.d.F());
                    textView6.setOnClickListener(new 11());
                }
                if (textView7 != null) {
                    textView7.setVisibility(0);
                    textView7.setOnClickListener(new 12());
                }
                if (textView8 != null) {
                    textView8.setVisibility(0);
                    textView8.setOnClickListener(new 13());
                }
                if (textView9 != null) {
                    textView9.setVisibility(0);
                    textView9.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", com.tkay.expressad.foundation.h.i.g), this.d.G()));
                    textView9.setOnClickListener(new 14());
                    return;
                }
                return;
            }
            return;
        }
        LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), str2, "layout"), this);
        RoundImageView roundImageView2 = (RoundImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_icon", "id"));
        TextView textView10 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_ad_title", "id"));
        TextView textView11 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_desc", "id"));
        TextView textView12 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_ad_install_btn", "id"));
        SpreadAnimLayout spreadAnimLayout = (SpreadAnimLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_spread_layout", "id"));
        this.t = (CloseImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_close", "id"));
        RelativeLayout relativeLayout5 = (RelativeLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_container", "id"));
        TextView textView13 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_publisher_name", "id"));
        TextView textView14 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_privacy_agreement", "id"));
        TextView textView15 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_permission_manage", "id"));
        TextView textView16 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_version_name", "id"));
        boolean z = this.c.m.s() == 0;
        if (z) {
            CloseImageView closeImageView = this.t;
            str = com.tkay.expressad.foundation.h.i.g;
            closeImageView.setVisibility(0);
            a(this.t, this.c.m.h());
            textView = textView15;
            obj = j.a;
            obj2 = j.b;
            textView2 = textView14;
        } else {
            str = com.tkay.expressad.foundation.h.i.g;
            this.t.setVisibility(8);
            String str3 = this.v;
            int iHashCode = str3.hashCode();
            textView = textView15;
            if (iHashCode == 1507809730) {
                obj = j.a;
                obj2 = j.b;
                if (str3.equals(obj)) {
                    b2 = 0;
                }
                if (b2 == 0) {
                }
            } else if (iHashCode == 1507809854) {
                obj2 = j.b;
                boolean zEquals = str3.equals(obj2);
                obj = j.a;
                b2 = zEquals ? (byte) 1 : (byte) -1;
                if (b2 == 0) {
                }
            } else if (iHashCode == 1622564786 && str3.equals(j.d)) {
                obj = j.a;
                obj2 = j.b;
                b2 = 2;
                if (b2 == 0) {
                    textView2 = textView14;
                    if (b2 == 1) {
                        textView3 = textView13;
                        RelativeLayout.LayoutParams layoutParams4 = (RelativeLayout.LayoutParams) textView10.getLayoutParams();
                        layoutParams4.rightMargin = com.tkay.core.common.l.h.a(getContext(), 10.0f);
                        textView10.setLayoutParams(layoutParams4);
                    } else if (b2 == 2) {
                        RelativeLayout.LayoutParams layoutParams5 = (RelativeLayout.LayoutParams) spreadAnimLayout.getLayoutParams();
                        textView3 = textView13;
                        layoutParams5.rightMargin = com.tkay.core.common.l.h.a(getContext(), 20.0f);
                        spreadAnimLayout.setLayoutParams(layoutParams5);
                    }
                } else {
                    textView2 = textView14;
                    textView3 = textView13;
                    RelativeLayout.LayoutParams layoutParams6 = (RelativeLayout.LayoutParams) spreadAnimLayout.getLayoutParams();
                    layoutParams6.rightMargin = com.tkay.core.common.l.h.a(getContext(), 10.0f);
                    spreadAnimLayout.setLayoutParams(layoutParams6);
                }
            } else {
                obj = j.a;
                obj2 = j.b;
                if (b2 == 0) {
                }
            }
            if (TextUtils.isEmpty(this.d.t())) {
                ViewGroup.LayoutParams layoutParams7 = roundImageView2.getLayoutParams();
                roundImageView2.setRadiusInDip(2);
                roundImageView2.setNeedRadiu(true);
                relativeLayout = relativeLayout5;
                textView4 = textView16;
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.t()), layoutParams7.width, layoutParams7.height, new 15(roundImageView2));
            } else {
                relativeLayout = relativeLayout5;
                textView4 = textView16;
                com.tkay.basead.ui.a.a.a(roundImageView2);
                RelativeLayout.LayoutParams layoutParams8 = (RelativeLayout.LayoutParams) textView10.getLayoutParams();
                if (layoutParams8 != null) {
                    layoutParams8.leftMargin = 0;
                    textView10.setLayoutParams(layoutParams8);
                }
            }
            this.r.add(roundImageView2);
            textView10.setText(this.d.r());
            this.r.add(textView10);
            textView12.setText(this.d.w());
            this.r.add(textView12);
            if (textView11 != null) {
                textView11.setText(this.d.s());
                this.r.add(textView11);
            }
            if (TextUtils.isEmpty(this.d.v())) {
                imageView = (ImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_self_ad_logo", "id"));
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.v()), new 2(imageView));
            } else {
                imageView = null;
            }
            this.r.add(imageView);
            if (this.u) {
                roundImageView = null;
            } else {
                roundImageView = (RoundImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_main_image", "id"));
                if (!TextUtils.isEmpty(this.d.u())) {
                    roundImageView.getLayoutParams();
                    roundImageView.setRadiusInDip(2);
                    roundImageView.setNeedRadiu(true);
                    com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.u()), new 3(roundImageView));
                    this.r.add(roundImageView);
                }
            }
            this.r.add(roundImageView);
            if (TextUtils.isEmpty(this.d.w())) {
                spreadAnimLayout.setVisibility(0);
                textView12.setVisibility(0);
                this.s = textView12;
                obj3 = j.c;
            } else {
                spreadAnimLayout.setVisibility(8);
                textView12.setVisibility(8);
                String str4 = this.v;
                switch (str4.hashCode()) {
                    case -559799608:
                        obj3 = j.c;
                        b3 = !str4.equals(obj3) ? (byte) -1 : (byte) 1;
                        break;
                    case 1507809730:
                        if (!str4.equals(obj)) {
                            obj3 = j.c;
                        } else {
                            obj3 = j.c;
                            b3 = 3;
                        }
                        break;
                    case 1507809854:
                        if (!str4.equals(obj2)) {
                            obj3 = j.c;
                        } else {
                            obj3 = j.c;
                            b3 = 0;
                        }
                        break;
                    case 1622564786:
                        if (!str4.equals(j.d)) {
                            obj3 = j.c;
                        } else {
                            obj3 = j.c;
                            b3 = 2;
                        }
                        break;
                    default:
                        obj3 = j.c;
                        break;
                }
                if (b3 == 0) {
                    relativeLayout2 = relativeLayout;
                    textView5 = textView4;
                    c = 2;
                    RelativeLayout.LayoutParams layoutParams9 = (RelativeLayout.LayoutParams) roundImageView2.getLayoutParams();
                    layoutParams9.addRule(15);
                    b4 = -1;
                    layoutParams9.addRule(6, -1);
                    roundImageView2.setLayoutParams(layoutParams9);
                    if (!this.d.K()) {
                    }
                } else {
                    if (b3 != 1) {
                        c = 2;
                        if (b3 == 2) {
                            textView5 = textView4;
                            RelativeLayout.LayoutParams layoutParams10 = (RelativeLayout.LayoutParams) textView10.getLayoutParams();
                            layoutParams10.rightMargin = com.tkay.core.common.l.h.a(getContext(), 18.0f);
                            textView10.setLayoutParams(layoutParams10);
                            if (textView11 != null) {
                                RelativeLayout.LayoutParams layoutParams11 = (RelativeLayout.LayoutParams) textView11.getLayoutParams();
                                layoutParams11.rightMargin = com.tkay.core.common.l.h.a(getContext(), 114.0f);
                                textView11.setLayoutParams(layoutParams11);
                            }
                            if (relativeLayout != null) {
                                RelativeLayout.LayoutParams layoutParams12 = (RelativeLayout.LayoutParams) relativeLayout.getLayoutParams();
                                layoutParams12.rightMargin = com.tkay.core.common.l.h.a(getContext(), 114.0f);
                                relativeLayout2 = relativeLayout;
                                relativeLayout2.setLayoutParams(layoutParams12);
                            }
                        } else {
                            RelativeLayout.LayoutParams layoutParams13 = (RelativeLayout.LayoutParams) textView10.getLayoutParams();
                            layoutParams13.addRule(11);
                            if (z) {
                                layoutParams13.rightMargin = com.tkay.core.common.l.h.a(getContext(), 18.0f);
                            } else {
                                layoutParams13.rightMargin = com.tkay.core.common.l.h.a(getContext(), 10.0f);
                            }
                            textView10.setLayoutParams(layoutParams13);
                            if (textView4 != null) {
                                RelativeLayout.LayoutParams layoutParams14 = (RelativeLayout.LayoutParams) textView4.getLayoutParams();
                                layoutParams14.rightMargin = com.tkay.core.common.l.h.a(getContext(), 55.0f);
                                textView5 = textView4;
                                textView5.setLayoutParams(layoutParams14);
                            } else {
                                textView5 = textView4;
                            }
                        }
                        relativeLayout2 = relativeLayout;
                    }
                    b4 = -1;
                    if (!this.d.K()) {
                        textView11.setVisibility(8);
                        String str5 = this.v;
                        switch (str5.hashCode()) {
                            case -559799608:
                                b5 = !str5.equals(obj3) ? b4 : (byte) 0;
                                break;
                            case 1507809730:
                                b5 = !str5.equals(obj) ? b4 : (byte) 3;
                                break;
                            case 1507809854:
                                b5 = !str5.equals(obj2) ? b4 : (byte) 1;
                                break;
                            case 1622564786:
                                b5 = !str5.equals(j.d) ? b4 : c;
                                break;
                            default:
                                b5 = b4;
                                break;
                        }
                        if (b5 == 0 && imageView != null) {
                            RelativeLayout.LayoutParams layoutParams15 = (RelativeLayout.LayoutParams) imageView.getLayoutParams();
                            layoutParams15.topMargin = com.tkay.core.common.l.h.a(getContext(), 8.0f);
                            imageView.setLayoutParams(layoutParams15);
                        }
                        if (relativeLayout2 != null) {
                            relativeLayout2.setVisibility(0);
                        }
                        if (textView3 != null) {
                            TextView textView17 = textView3;
                            textView17.setVisibility(0);
                            textView17.setText(this.d.F());
                            textView17.setOnClickListener(new 4());
                        }
                        if (textView2 != null) {
                            TextView textView18 = textView2;
                            textView18.setVisibility(0);
                            textView18.setOnClickListener(new 5());
                        }
                        if (textView != null) {
                            TextView textView19 = textView;
                            textView19.setVisibility(0);
                            textView19.setOnClickListener(new 6());
                        }
                        if (textView5 != null) {
                            textView5.setVisibility(0);
                            String str6 = this.v;
                            switch (str6.hashCode()) {
                                case -559799608:
                                    b6 = !str6.equals(obj3) ? b4 : c;
                                    break;
                                case 1507809730:
                                    b6 = !str6.equals(obj) ? b4 : (byte) 3;
                                    break;
                                case 1507809854:
                                    b6 = !str6.equals(obj2) ? b4 : (byte) 0;
                                    break;
                                case 1622564786:
                                    b6 = !str6.equals(j.d) ? b4 : (byte) 1;
                                    break;
                                default:
                                    b6 = b4;
                                    break;
                            }
                            if (b6 == 0 || b6 == 1) {
                                textView5.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", str), this.d.G() + "  " + this.d.F()));
                            } else {
                                textView5.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", str), this.d.G()));
                            }
                            textView5.setOnClickListener(new 7());
                            return;
                        }
                        return;
                    }
                    byte b7 = 0;
                    textView11.setVisibility(0);
                    String str7 = this.v;
                    switch (str7.hashCode()) {
                        case -559799608:
                            b7 = !str7.equals(obj3) ? b4 : c;
                            break;
                        case 1507809730:
                            if (!str7.equals(obj)) {
                                b7 = b4;
                            }
                            break;
                        case 1507809854:
                            b7 = !str7.equals(obj2) ? b4 : (byte) 1;
                            break;
                        case 1622564786:
                            b7 = !str7.equals(j.d) ? b4 : (byte) 3;
                            break;
                        default:
                            b7 = b4;
                            break;
                    }
                    if (b7 != 0) {
                        return;
                    }
                    RelativeLayout.LayoutParams layoutParams16 = (RelativeLayout.LayoutParams) textView10.getLayoutParams();
                    layoutParams16.topMargin = com.tkay.core.common.l.h.a(getContext(), 8.0f);
                    textView10.setLayoutParams(layoutParams16);
                    return;
                }
            }
            relativeLayout2 = relativeLayout;
            textView5 = textView4;
            c = 2;
            b4 = -1;
            if (!this.d.K()) {
            }
        }
        textView3 = textView13;
        if (TextUtils.isEmpty(this.d.t())) {
        }
        this.r.add(roundImageView2);
        textView10.setText(this.d.r());
        this.r.add(textView10);
        textView12.setText(this.d.w());
        this.r.add(textView12);
        if (textView11 != null) {
        }
        if (TextUtils.isEmpty(this.d.v())) {
        }
        this.r.add(imageView);
        if (this.u) {
        }
        this.r.add(roundImageView);
        if (TextUtils.isEmpty(this.d.w())) {
        }
        relativeLayout2 = relativeLayout;
        textView5 = textView4;
        c = 2;
        b4 = -1;
        if (!this.d.K()) {
        }
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
        com.tkay.core.common.res.b.a(getContext()).a(new e(1, str), new 9(str, recycleImageView2, recycleImageView));
        this.r.add(recycleImageView2);
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-1, -1);
        layoutParams3.addRule(13);
        addView(recycleImageView2, 1, layoutParams3);
        if (!TextUtils.isEmpty(this.d.v())) {
            ImageView imageView = (ImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_self_ad_logo", "id"));
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.v()), new 10(imageView));
            this.r.add(imageView);
        }
        if (this.d.K()) {
            if (relativeLayout2 != null) {
                relativeLayout2.setVisibility(0);
            }
            if (textView != null) {
                textView.setVisibility(0);
                textView.setText(this.d.F());
                textView.setOnClickListener(new 11());
            }
            if (textView2 != null) {
                textView2.setVisibility(0);
                textView2.setOnClickListener(new 12());
            }
            if (textView3 != null) {
                textView3.setVisibility(0);
                textView3.setOnClickListener(new 13());
            }
            if (textView4 != null) {
                textView4.setVisibility(0);
                textView4.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", com.tkay.expressad.foundation.h.i.g), this.d.G()));
                textView4.setOnClickListener(new 14());
            }
        }
    }

    final class 9 implements b.a {
        final String a;
        final RecycleImageView b;
        final RecycleImageView c;

        @Override
        public final void onFail(String str, String str2) {
        }

        9(String str, RecycleImageView recycleImageView, RecycleImageView recycleImageView2) {
            this.a = str;
            this.b = recycleImageView;
            this.c = recycleImageView2;
        }

        @Override
        public final void onSuccess(String str, final Bitmap bitmap) {
            if (TextUtils.equals(this.a, str)) {
                this.b.setImageBitmap(bitmap);
                SdkBannerATView.this.post(new Runnable() {
                    @Override
                    public final void run() {
                        int[] iArrA = u.a(SdkBannerATView.this.getWidth(), SdkBannerATView.this.getHeight(), bitmap.getWidth() / bitmap.getHeight());
                        ViewGroup.LayoutParams layoutParams = 9.this.b.getLayoutParams();
                        if (layoutParams != null) {
                            layoutParams.width = iArrA[0];
                            layoutParams.height = iArrA[1];
                            9.this.b.setLayoutParams(layoutParams);
                        }
                    }
                });
                this.c.setImageBitmap(com.tkay.core.common.l.b.a(SdkBannerATView.this.getContext(), bitmap));
            }
        }
    }

    final class 10 implements b.a {
        final ImageView a;

        @Override
        public final void onFail(String str, String str2) {
        }

        10(ImageView imageView) {
            this.a = imageView;
        }

        @Override
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(SdkBannerATView.this.d.v(), str)) {
                this.a.setImageBitmap(bitmap);
            }
        }
    }

    final class 11 implements View.OnClickListener {
        @Override
        public final void onClick(View view) {
        }

        11() {
        }
    }

    final class 12 implements View.OnClickListener {
        12() {
        }

        @Override
        public final void onClick(View view) {
            l.a(m.a().f(), SdkBannerATView.this.d.H());
        }
    }

    final class 13 implements View.OnClickListener {
        13() {
        }

        @Override
        public final void onClick(View view) {
            l.a(m.a().f(), SdkBannerATView.this.d.I());
        }
    }

    final class 14 implements View.OnClickListener {
        @Override
        public final void onClick(View view) {
        }

        14() {
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
    */
    private void p() {
        TextView textView;
        TextView textView2;
        byte b;
        RelativeLayout relativeLayout;
        TextView textView3;
        ImageView imageView;
        RoundImageView roundImageView;
        byte b2;
        RelativeLayout relativeLayout2;
        TextView textView4;
        byte b3;
        byte b4;
        byte b5;
        byte b6;
        RoundImageView roundImageView2 = (RoundImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_icon", "id"));
        TextView textView5 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_ad_title", "id"));
        TextView textView6 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_desc", "id"));
        TextView textView7 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_ad_install_btn", "id"));
        SpreadAnimLayout spreadAnimLayout = (SpreadAnimLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_spread_layout", "id"));
        this.t = (CloseImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_close", "id"));
        RelativeLayout relativeLayout3 = (RelativeLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_container", "id"));
        TextView textView8 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_publisher_name", "id"));
        TextView textView9 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_privacy_agreement", "id"));
        TextView textView10 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_permission_manage", "id"));
        TextView textView11 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_version_name", "id"));
        boolean z = this.c.m.s() == 0;
        if (z) {
            textView = textView9;
            this.t.setVisibility(0);
            a(this.t, this.c.m.h());
            textView2 = textView8;
        } else {
            textView = textView9;
            this.t.setVisibility(8);
            String str = this.v;
            int iHashCode = str.hashCode();
            textView2 = textView8;
            if (iHashCode == 1507809730) {
                if (str.equals(j.a)) {
                    b = 0;
                }
                if (b == 0) {
                }
            } else if (iHashCode != 1507809854) {
                b = (iHashCode == 1622564786 && str.equals(j.d)) ? (byte) 2 : (byte) -1;
                if (b == 0) {
                    RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) spreadAnimLayout.getLayoutParams();
                    layoutParams.rightMargin = com.tkay.core.common.l.h.a(getContext(), 10.0f);
                    spreadAnimLayout.setLayoutParams(layoutParams);
                } else if (b == 1) {
                    RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) textView5.getLayoutParams();
                    layoutParams2.rightMargin = com.tkay.core.common.l.h.a(getContext(), 10.0f);
                    textView5.setLayoutParams(layoutParams2);
                } else if (b == 2) {
                    RelativeLayout.LayoutParams layoutParams3 = (RelativeLayout.LayoutParams) spreadAnimLayout.getLayoutParams();
                    layoutParams3.rightMargin = com.tkay.core.common.l.h.a(getContext(), 20.0f);
                    spreadAnimLayout.setLayoutParams(layoutParams3);
                }
            } else {
                if (str.equals(j.b)) {
                    b = 1;
                }
                if (b == 0) {
                }
            }
        }
        if (!TextUtils.isEmpty(this.d.t())) {
            ViewGroup.LayoutParams layoutParams4 = roundImageView2.getLayoutParams();
            roundImageView2.setRadiusInDip(2);
            roundImageView2.setNeedRadiu(true);
            relativeLayout = relativeLayout3;
            textView3 = textView11;
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.t()), layoutParams4.width, layoutParams4.height, new 15(roundImageView2));
        } else {
            relativeLayout = relativeLayout3;
            textView3 = textView11;
            com.tkay.basead.ui.a.a.a(roundImageView2);
            RelativeLayout.LayoutParams layoutParams5 = (RelativeLayout.LayoutParams) textView5.getLayoutParams();
            if (layoutParams5 != null) {
                layoutParams5.leftMargin = 0;
                textView5.setLayoutParams(layoutParams5);
            }
        }
        this.r.add(roundImageView2);
        textView5.setText(this.d.r());
        this.r.add(textView5);
        textView7.setText(this.d.w());
        this.r.add(textView7);
        if (textView6 != null) {
            textView6.setText(this.d.s());
            this.r.add(textView6);
        }
        if (TextUtils.isEmpty(this.d.v())) {
            imageView = null;
        } else {
            imageView = (ImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_self_ad_logo", "id"));
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.v()), new 2(imageView));
        }
        this.r.add(imageView);
        if (this.u) {
            roundImageView = (RoundImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_main_image", "id"));
            if (!TextUtils.isEmpty(this.d.u())) {
                roundImageView.getLayoutParams();
                roundImageView.setRadiusInDip(2);
                roundImageView.setNeedRadiu(true);
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.u()), new 3(roundImageView));
                this.r.add(roundImageView);
            }
        } else {
            roundImageView = null;
        }
        this.r.add(roundImageView);
        if (!TextUtils.isEmpty(this.d.w())) {
            spreadAnimLayout.setVisibility(0);
            textView7.setVisibility(0);
            this.s = textView7;
        } else {
            spreadAnimLayout.setVisibility(8);
            textView7.setVisibility(8);
            String str2 = this.v;
            switch (str2.hashCode()) {
                case -559799608:
                    b2 = !str2.equals(j.c) ? (byte) -1 : (byte) 1;
                    break;
                case 1507809730:
                    if (str2.equals(j.a)) {
                        b2 = 3;
                        break;
                    }
                    break;
                case 1507809854:
                    if (str2.equals(j.b)) {
                        b2 = 0;
                        break;
                    }
                    break;
                case 1622564786:
                    if (str2.equals(j.d)) {
                        b2 = 2;
                        break;
                    }
                    break;
            }
            if (b2 == 0) {
                relativeLayout2 = relativeLayout;
                textView4 = textView3;
                b3 = 2;
                RelativeLayout.LayoutParams layoutParams6 = (RelativeLayout.LayoutParams) roundImageView2.getLayoutParams();
                layoutParams6.addRule(15);
                b4 = -1;
                layoutParams6.addRule(6, -1);
                roundImageView2.setLayoutParams(layoutParams6);
                if (this.d.K()) {
                }
            } else {
                if (b2 != 1) {
                    b3 = 2;
                    if (b2 == 2) {
                        textView4 = textView3;
                        RelativeLayout.LayoutParams layoutParams7 = (RelativeLayout.LayoutParams) textView5.getLayoutParams();
                        layoutParams7.rightMargin = com.tkay.core.common.l.h.a(getContext(), 18.0f);
                        textView5.setLayoutParams(layoutParams7);
                        if (textView6 != null) {
                            RelativeLayout.LayoutParams layoutParams8 = (RelativeLayout.LayoutParams) textView6.getLayoutParams();
                            layoutParams8.rightMargin = com.tkay.core.common.l.h.a(getContext(), 114.0f);
                            textView6.setLayoutParams(layoutParams8);
                        }
                        if (relativeLayout != null) {
                            RelativeLayout.LayoutParams layoutParams9 = (RelativeLayout.LayoutParams) relativeLayout.getLayoutParams();
                            layoutParams9.rightMargin = com.tkay.core.common.l.h.a(getContext(), 114.0f);
                            relativeLayout2 = relativeLayout;
                            relativeLayout2.setLayoutParams(layoutParams9);
                        }
                    } else {
                        RelativeLayout.LayoutParams layoutParams10 = (RelativeLayout.LayoutParams) textView5.getLayoutParams();
                        layoutParams10.addRule(11);
                        if (z) {
                            layoutParams10.rightMargin = com.tkay.core.common.l.h.a(getContext(), 18.0f);
                        } else {
                            layoutParams10.rightMargin = com.tkay.core.common.l.h.a(getContext(), 10.0f);
                        }
                        textView5.setLayoutParams(layoutParams10);
                        if (textView3 != null) {
                            RelativeLayout.LayoutParams layoutParams11 = (RelativeLayout.LayoutParams) textView3.getLayoutParams();
                            layoutParams11.rightMargin = com.tkay.core.common.l.h.a(getContext(), 55.0f);
                            textView4 = textView3;
                            textView4.setLayoutParams(layoutParams11);
                        } else {
                            textView4 = textView3;
                        }
                    }
                    relativeLayout2 = relativeLayout;
                }
                b4 = -1;
                if (this.d.K()) {
                    textView6.setVisibility(8);
                    String str3 = this.v;
                    switch (str3.hashCode()) {
                        case -559799608:
                            b6 = !str3.equals(j.c) ? b4 : (byte) 0;
                            break;
                        case 1507809730:
                            b6 = !str3.equals(j.a) ? b4 : (byte) 3;
                            break;
                        case 1507809854:
                            b6 = !str3.equals(j.b) ? b4 : (byte) 1;
                            break;
                        case 1622564786:
                            b6 = !str3.equals(j.d) ? b4 : b3;
                            break;
                        default:
                            b6 = b4;
                            break;
                    }
                    if (b6 == 0 && imageView != null) {
                        RelativeLayout.LayoutParams layoutParams12 = (RelativeLayout.LayoutParams) imageView.getLayoutParams();
                        layoutParams12.topMargin = com.tkay.core.common.l.h.a(getContext(), 8.0f);
                        imageView.setLayoutParams(layoutParams12);
                    }
                    if (relativeLayout2 != null) {
                        relativeLayout2.setVisibility(0);
                    }
                    if (textView2 != null) {
                        TextView textView12 = textView2;
                        textView12.setVisibility(0);
                        textView12.setText(this.d.F());
                        textView12.setOnClickListener(new 4());
                    }
                    if (textView != null) {
                        TextView textView13 = textView;
                        textView13.setVisibility(0);
                        textView13.setOnClickListener(new 5());
                    }
                    if (textView10 != null) {
                        textView10.setVisibility(0);
                        textView10.setOnClickListener(new 6());
                    }
                    if (textView4 != null) {
                        textView4.setVisibility(0);
                        String str4 = this.v;
                        switch (str4.hashCode()) {
                            case -559799608:
                                if (!str4.equals(j.c)) {
                                    b3 = b4;
                                }
                                break;
                            case 1507809730:
                                b3 = !str4.equals(j.a) ? b4 : (byte) 3;
                                break;
                            case 1507809854:
                                b3 = !str4.equals(j.b) ? b4 : (byte) 0;
                                break;
                            case 1622564786:
                                b3 = !str4.equals(j.d) ? b4 : (byte) 1;
                                break;
                            default:
                                b3 = b4;
                                break;
                        }
                        if (b3 == 0 || b3 == 1) {
                            textView4.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", com.tkay.expressad.foundation.h.i.g), this.d.G() + "  " + this.d.F()));
                        } else {
                            textView4.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", com.tkay.expressad.foundation.h.i.g), this.d.G()));
                        }
                        textView4.setOnClickListener(new 7());
                        return;
                    }
                    return;
                }
                textView6.setVisibility(0);
                String str5 = this.v;
                switch (str5.hashCode()) {
                    case -559799608:
                        b5 = !str5.equals(j.c) ? b4 : b3;
                        break;
                    case 1507809730:
                        b5 = !str5.equals(j.a) ? b4 : (byte) 0;
                        break;
                    case 1507809854:
                        b5 = !str5.equals(j.b) ? b4 : (byte) 1;
                        break;
                    case 1622564786:
                        b5 = !str5.equals(j.d) ? b4 : (byte) 3;
                        break;
                    default:
                        b5 = b4;
                        break;
                }
                if (b5 != 0) {
                    return;
                }
                RelativeLayout.LayoutParams layoutParams13 = (RelativeLayout.LayoutParams) textView5.getLayoutParams();
                layoutParams13.topMargin = com.tkay.core.common.l.h.a(getContext(), 8.0f);
                textView5.setLayoutParams(layoutParams13);
                return;
            }
        }
        relativeLayout2 = relativeLayout;
        textView4 = textView3;
        b3 = 2;
        b4 = -1;
        if (this.d.K()) {
        }
    }

    final class 15 implements b.a {
        final RoundImageView a;

        @Override
        public final void onFail(String str, String str2) {
        }

        15(RoundImageView roundImageView) {
            this.a = roundImageView;
        }

        @Override
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(SdkBannerATView.this.d.t(), str)) {
                this.a.setImageBitmap(bitmap);
            }
        }
    }

    final class 2 implements b.a {
        final ImageView a;

        @Override
        public final void onFail(String str, String str2) {
        }

        2(ImageView imageView) {
            this.a = imageView;
        }

        @Override
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(SdkBannerATView.this.d.v(), str)) {
                this.a.setImageBitmap(bitmap);
            }
        }
    }

    final class 3 implements b.a {
        final RoundImageView a;

        @Override
        public final void onFail(String str, String str2) {
        }

        3(RoundImageView roundImageView) {
            this.a = roundImageView;
        }

        @Override
        public final void onSuccess(String str, Bitmap bitmap) {
            if (TextUtils.equals(SdkBannerATView.this.d.u(), str)) {
                this.a.setImageBitmap(bitmap);
            }
        }
    }

    final class 4 implements View.OnClickListener {
        @Override
        public final void onClick(View view) {
        }

        4() {
        }
    }

    final class 5 implements View.OnClickListener {
        5() {
        }

        @Override
        public final void onClick(View view) {
            l.a(m.a().f(), SdkBannerATView.this.d.H());
        }
    }

    final class 6 implements View.OnClickListener {
        6() {
        }

        @Override
        public final void onClick(View view) {
            l.a(m.a().f(), SdkBannerATView.this.d.I());
        }
    }

    final class 7 implements View.OnClickListener {
        @Override
        public final void onClick(View view) {
        }

        7() {
        }
    }

    @Override
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
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected final void a() {
        byte b;
        String str;
        TextView textView;
        Object obj;
        Object obj2;
        byte b2;
        TextView textView2;
        TextView textView3;
        RelativeLayout relativeLayout;
        TextView textView4;
        ImageView imageView;
        RoundImageView roundImageView;
        Object obj3;
        byte b3;
        RelativeLayout relativeLayout2;
        TextView textView5;
        char c;
        byte b4;
        byte b5;
        byte b6;
        String strR = this.c.m.r();
        String strU = this.d instanceof z ? this.d.u() : null;
        switch (strR.hashCode()) {
            case -559799608:
                b = !strR.equals(j.c) ? (byte) -1 : (byte) 1;
                break;
            case 1507809730:
                if (strR.equals(j.a)) {
                    b = 3;
                    break;
                }
                break;
            case 1507809854:
                if (strR.equals(j.b)) {
                    b = 0;
                    break;
                }
                break;
            case 1622564786:
                if (strR.equals(j.d)) {
                    b = 2;
                    break;
                }
                break;
        }
        String str2 = "myoffer_banner_ad_layout_320x50";
        if (b == 0) {
            this.v = j.b;
            if (strU == null && (this.d instanceof r)) {
                strU = ((r) this.d).b();
            }
            this.u = true;
            str2 = "myoffer_banner_ad_layout_320x90";
        } else if (b == 1) {
            this.v = j.c;
            if (strU == null && (this.d instanceof r)) {
                strU = ((r) this.d).c();
            }
            this.u = true;
            str2 = "myoffer_banner_ad_layout_300x250";
        } else if (b == 2) {
            this.v = j.d;
            if (strU == null && (this.d instanceof r)) {
                strU = ((r) this.d).N();
            }
            this.u = true;
            str2 = "myoffer_banner_ad_layout_728x90";
        } else {
            this.v = j.a;
            if (strU == null && (this.d instanceof r)) {
                strU = ((r) this.d).a();
            }
        }
        int i = (!(this.d instanceof z) ? (this.d instanceof r) && !TextUtils.isEmpty(strU) && c.c(strU) : ((z) this.d).Y() == 1) ? 2 : 1;
        this.w = i;
        if (1 == i) {
            LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_ad_layout_pure_picture", "layout"), this);
            RelativeLayout relativeLayout3 = (RelativeLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_root", "id"));
            this.t = (CloseImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_close", "id"));
            RelativeLayout relativeLayout4 = (RelativeLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_container", "id"));
            TextView textView6 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_publisher_name", "id"));
            TextView textView7 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_privacy_agreement", "id"));
            TextView textView8 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_permission_manage", "id"));
            TextView textView9 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_version_name", "id"));
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
            RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) relativeLayout3.getLayoutParams();
            layoutParams2.width = -1;
            layoutParams2.height = -1;
            relativeLayout3.setLayoutParams(layoutParams2);
            RecycleImageView recycleImageView = new RecycleImageView(getContext());
            recycleImageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
            addView(recycleImageView, 0, new RelativeLayout.LayoutParams(-1, -1));
            RecycleImageView recycleImageView2 = new RecycleImageView(getContext());
            recycleImageView2.setScaleType(ImageView.ScaleType.FIT_CENTER);
            com.tkay.core.common.res.b.a(getContext()).a(new e(1, strU), new 9(strU, recycleImageView2, recycleImageView));
            this.r.add(recycleImageView2);
            RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-1, -1);
            layoutParams3.addRule(13);
            addView(recycleImageView2, 1, layoutParams3);
            if (!TextUtils.isEmpty(this.d.v())) {
                ImageView imageView2 = (ImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_self_ad_logo", "id"));
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.v()), new 10(imageView2));
                this.r.add(imageView2);
            }
            if (this.d.K()) {
                if (relativeLayout4 != null) {
                    relativeLayout4.setVisibility(0);
                }
                if (textView6 != null) {
                    textView6.setVisibility(0);
                    textView6.setText(this.d.F());
                    textView6.setOnClickListener(new 11());
                }
                if (textView7 != null) {
                    textView7.setVisibility(0);
                    textView7.setOnClickListener(new 12());
                }
                if (textView8 != null) {
                    textView8.setVisibility(0);
                    textView8.setOnClickListener(new 13());
                }
                if (textView9 != null) {
                    textView9.setVisibility(0);
                    textView9.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", com.tkay.expressad.foundation.h.i.g), this.d.G()));
                    textView9.setOnClickListener(new 14());
                    return;
                }
                return;
            }
            return;
        }
        LayoutInflater.from(getContext()).inflate(com.tkay.core.common.l.h.a(getContext(), str2, "layout"), this);
        RoundImageView roundImageView2 = (RoundImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_icon", "id"));
        TextView textView10 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_ad_title", "id"));
        TextView textView11 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_desc", "id"));
        TextView textView12 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_ad_install_btn", "id"));
        SpreadAnimLayout spreadAnimLayout = (SpreadAnimLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_spread_layout", "id"));
        this.t = (CloseImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_close", "id"));
        RelativeLayout relativeLayout5 = (RelativeLayout) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_container", "id"));
        TextView textView13 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_publisher_name", "id"));
        TextView textView14 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_privacy_agreement", "id"));
        TextView textView15 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_permission_manage", "id"));
        TextView textView16 = (TextView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_version_name", "id"));
        boolean z = this.c.m.s() == 0;
        if (z) {
            CloseImageView closeImageView = this.t;
            str = com.tkay.expressad.foundation.h.i.g;
            closeImageView.setVisibility(0);
            a(this.t, this.c.m.h());
            textView = textView15;
            obj = j.a;
            obj2 = j.b;
            textView2 = textView14;
        } else {
            str = com.tkay.expressad.foundation.h.i.g;
            this.t.setVisibility(8);
            String str3 = this.v;
            int iHashCode = str3.hashCode();
            textView = textView15;
            if (iHashCode == 1507809730) {
                obj = j.a;
                obj2 = j.b;
                if (str3.equals(obj)) {
                    b2 = 0;
                }
                if (b2 == 0) {
                }
            } else if (iHashCode == 1507809854) {
                obj2 = j.b;
                boolean zEquals = str3.equals(obj2);
                obj = j.a;
                b2 = zEquals ? (byte) 1 : (byte) -1;
                if (b2 == 0) {
                }
            } else if (iHashCode == 1622564786 && str3.equals(j.d)) {
                obj = j.a;
                obj2 = j.b;
                b2 = 2;
                if (b2 == 0) {
                    textView2 = textView14;
                    if (b2 == 1) {
                        textView3 = textView13;
                        RelativeLayout.LayoutParams layoutParams4 = (RelativeLayout.LayoutParams) textView10.getLayoutParams();
                        layoutParams4.rightMargin = com.tkay.core.common.l.h.a(getContext(), 10.0f);
                        textView10.setLayoutParams(layoutParams4);
                    } else if (b2 == 2) {
                        RelativeLayout.LayoutParams layoutParams5 = (RelativeLayout.LayoutParams) spreadAnimLayout.getLayoutParams();
                        textView3 = textView13;
                        layoutParams5.rightMargin = com.tkay.core.common.l.h.a(getContext(), 20.0f);
                        spreadAnimLayout.setLayoutParams(layoutParams5);
                    }
                } else {
                    textView2 = textView14;
                    textView3 = textView13;
                    RelativeLayout.LayoutParams layoutParams6 = (RelativeLayout.LayoutParams) spreadAnimLayout.getLayoutParams();
                    layoutParams6.rightMargin = com.tkay.core.common.l.h.a(getContext(), 10.0f);
                    spreadAnimLayout.setLayoutParams(layoutParams6);
                }
            } else {
                obj = j.a;
                obj2 = j.b;
                if (b2 == 0) {
                }
            }
            if (TextUtils.isEmpty(this.d.t())) {
                ViewGroup.LayoutParams layoutParams7 = roundImageView2.getLayoutParams();
                roundImageView2.setRadiusInDip(2);
                roundImageView2.setNeedRadiu(true);
                relativeLayout = relativeLayout5;
                textView4 = textView16;
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.t()), layoutParams7.width, layoutParams7.height, new 15(roundImageView2));
            } else {
                relativeLayout = relativeLayout5;
                textView4 = textView16;
                com.tkay.basead.ui.a.a.a(roundImageView2);
                RelativeLayout.LayoutParams layoutParams8 = (RelativeLayout.LayoutParams) textView10.getLayoutParams();
                if (layoutParams8 != null) {
                    layoutParams8.leftMargin = 0;
                    textView10.setLayoutParams(layoutParams8);
                }
            }
            this.r.add(roundImageView2);
            textView10.setText(this.d.r());
            this.r.add(textView10);
            textView12.setText(this.d.w());
            this.r.add(textView12);
            if (textView11 != null) {
                textView11.setText(this.d.s());
                this.r.add(textView11);
            }
            if (TextUtils.isEmpty(this.d.v())) {
                imageView = (ImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_self_ad_logo", "id"));
                com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.v()), new 2(imageView));
            } else {
                imageView = null;
            }
            this.r.add(imageView);
            if (this.u) {
                roundImageView = null;
            } else {
                roundImageView = (RoundImageView) findViewById(com.tkay.core.common.l.h.a(getContext(), "myoffer_banner_main_image", "id"));
                if (!TextUtils.isEmpty(this.d.u())) {
                    roundImageView.getLayoutParams();
                    roundImageView.setRadiusInDip(2);
                    roundImageView.setNeedRadiu(true);
                    com.tkay.core.common.res.b.a(getContext()).a(new e(1, this.d.u()), new 3(roundImageView));
                    this.r.add(roundImageView);
                }
            }
            this.r.add(roundImageView);
            if (TextUtils.isEmpty(this.d.w())) {
                spreadAnimLayout.setVisibility(0);
                textView12.setVisibility(0);
                this.s = textView12;
                obj3 = j.c;
            } else {
                spreadAnimLayout.setVisibility(8);
                textView12.setVisibility(8);
                String str4 = this.v;
                switch (str4.hashCode()) {
                    case -559799608:
                        obj3 = j.c;
                        b3 = !str4.equals(obj3) ? (byte) -1 : (byte) 1;
                        break;
                    case 1507809730:
                        if (!str4.equals(obj)) {
                            obj3 = j.c;
                        } else {
                            obj3 = j.c;
                            b3 = 3;
                        }
                        break;
                    case 1507809854:
                        if (!str4.equals(obj2)) {
                            obj3 = j.c;
                        } else {
                            obj3 = j.c;
                            b3 = 0;
                        }
                        break;
                    case 1622564786:
                        if (!str4.equals(j.d)) {
                            obj3 = j.c;
                        } else {
                            obj3 = j.c;
                            b3 = 2;
                        }
                        break;
                    default:
                        obj3 = j.c;
                        break;
                }
                if (b3 == 0) {
                    relativeLayout2 = relativeLayout;
                    textView5 = textView4;
                    c = 2;
                    RelativeLayout.LayoutParams layoutParams9 = (RelativeLayout.LayoutParams) roundImageView2.getLayoutParams();
                    layoutParams9.addRule(15);
                    b4 = -1;
                    layoutParams9.addRule(6, -1);
                    roundImageView2.setLayoutParams(layoutParams9);
                    if (!this.d.K()) {
                    }
                } else {
                    if (b3 != 1) {
                        c = 2;
                        if (b3 == 2) {
                            textView5 = textView4;
                            RelativeLayout.LayoutParams layoutParams10 = (RelativeLayout.LayoutParams) textView10.getLayoutParams();
                            layoutParams10.rightMargin = com.tkay.core.common.l.h.a(getContext(), 18.0f);
                            textView10.setLayoutParams(layoutParams10);
                            if (textView11 != null) {
                                RelativeLayout.LayoutParams layoutParams11 = (RelativeLayout.LayoutParams) textView11.getLayoutParams();
                                layoutParams11.rightMargin = com.tkay.core.common.l.h.a(getContext(), 114.0f);
                                textView11.setLayoutParams(layoutParams11);
                            }
                            if (relativeLayout != null) {
                                RelativeLayout.LayoutParams layoutParams12 = (RelativeLayout.LayoutParams) relativeLayout.getLayoutParams();
                                layoutParams12.rightMargin = com.tkay.core.common.l.h.a(getContext(), 114.0f);
                                relativeLayout2 = relativeLayout;
                                relativeLayout2.setLayoutParams(layoutParams12);
                            }
                        } else {
                            RelativeLayout.LayoutParams layoutParams13 = (RelativeLayout.LayoutParams) textView10.getLayoutParams();
                            layoutParams13.addRule(11);
                            if (z) {
                                layoutParams13.rightMargin = com.tkay.core.common.l.h.a(getContext(), 18.0f);
                            } else {
                                layoutParams13.rightMargin = com.tkay.core.common.l.h.a(getContext(), 10.0f);
                            }
                            textView10.setLayoutParams(layoutParams13);
                            if (textView4 != null) {
                                RelativeLayout.LayoutParams layoutParams14 = (RelativeLayout.LayoutParams) textView4.getLayoutParams();
                                layoutParams14.rightMargin = com.tkay.core.common.l.h.a(getContext(), 55.0f);
                                textView5 = textView4;
                                textView5.setLayoutParams(layoutParams14);
                            } else {
                                textView5 = textView4;
                            }
                        }
                        relativeLayout2 = relativeLayout;
                    }
                    b4 = -1;
                    if (!this.d.K()) {
                        textView11.setVisibility(8);
                        String str5 = this.v;
                        switch (str5.hashCode()) {
                            case -559799608:
                                b5 = !str5.equals(obj3) ? b4 : (byte) 0;
                                break;
                            case 1507809730:
                                b5 = !str5.equals(obj) ? b4 : (byte) 3;
                                break;
                            case 1507809854:
                                b5 = !str5.equals(obj2) ? b4 : (byte) 1;
                                break;
                            case 1622564786:
                                b5 = !str5.equals(j.d) ? b4 : c;
                                break;
                            default:
                                b5 = b4;
                                break;
                        }
                        if (b5 == 0 && imageView != null) {
                            RelativeLayout.LayoutParams layoutParams15 = (RelativeLayout.LayoutParams) imageView.getLayoutParams();
                            layoutParams15.topMargin = com.tkay.core.common.l.h.a(getContext(), 8.0f);
                            imageView.setLayoutParams(layoutParams15);
                        }
                        if (relativeLayout2 != null) {
                            relativeLayout2.setVisibility(0);
                        }
                        if (textView3 != null) {
                            TextView textView17 = textView3;
                            textView17.setVisibility(0);
                            textView17.setText(this.d.F());
                            textView17.setOnClickListener(new 4());
                        }
                        if (textView2 != null) {
                            TextView textView18 = textView2;
                            textView18.setVisibility(0);
                            textView18.setOnClickListener(new 5());
                        }
                        if (textView != null) {
                            TextView textView19 = textView;
                            textView19.setVisibility(0);
                            textView19.setOnClickListener(new 6());
                        }
                        if (textView5 != null) {
                            textView5.setVisibility(0);
                            String str6 = this.v;
                            switch (str6.hashCode()) {
                                case -559799608:
                                    b6 = !str6.equals(obj3) ? b4 : c;
                                    break;
                                case 1507809730:
                                    b6 = !str6.equals(obj) ? b4 : (byte) 3;
                                    break;
                                case 1507809854:
                                    b6 = !str6.equals(obj2) ? b4 : (byte) 0;
                                    break;
                                case 1622564786:
                                    b6 = !str6.equals(j.d) ? b4 : (byte) 1;
                                    break;
                                default:
                                    b6 = b4;
                                    break;
                            }
                            if (b6 == 0 || b6 == 1) {
                                textView5.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", str), this.d.G() + "  " + this.d.F()));
                            } else {
                                textView5.setText(getContext().getResources().getString(com.tkay.core.common.l.h.a(getContext(), "myoffer_panel_version", str), this.d.G()));
                            }
                            textView5.setOnClickListener(new 7());
                            return;
                        }
                        return;
                    }
                    byte b7 = 0;
                    textView11.setVisibility(0);
                    String str7 = this.v;
                    switch (str7.hashCode()) {
                        case -559799608:
                            b7 = !str7.equals(obj3) ? b4 : c;
                            break;
                        case 1507809730:
                            if (!str7.equals(obj)) {
                                b7 = b4;
                            }
                            break;
                        case 1507809854:
                            b7 = !str7.equals(obj2) ? b4 : (byte) 1;
                            break;
                        case 1622564786:
                            b7 = !str7.equals(j.d) ? b4 : (byte) 3;
                            break;
                        default:
                            b7 = b4;
                            break;
                    }
                    if (b7 != 0) {
                        return;
                    }
                    RelativeLayout.LayoutParams layoutParams16 = (RelativeLayout.LayoutParams) textView10.getLayoutParams();
                    layoutParams16.topMargin = com.tkay.core.common.l.h.a(getContext(), 8.0f);
                    textView10.setLayoutParams(layoutParams16);
                    return;
                }
            }
            relativeLayout2 = relativeLayout;
            textView5 = textView4;
            c = 2;
            b4 = -1;
            if (!this.d.K()) {
            }
        }
        textView3 = textView13;
        if (TextUtils.isEmpty(this.d.t())) {
        }
        this.r.add(roundImageView2);
        textView10.setText(this.d.r());
        this.r.add(textView10);
        textView12.setText(this.d.w());
        this.r.add(textView12);
        if (textView11 != null) {
        }
        if (TextUtils.isEmpty(this.d.v())) {
        }
        this.r.add(imageView);
        if (this.u) {
        }
        this.r.add(roundImageView);
        if (TextUtils.isEmpty(this.d.w())) {
        }
        relativeLayout2 = relativeLayout;
        textView5 = textView4;
        c = 2;
        b4 = -1;
        if (!this.d.K()) {
        }
    }
}
