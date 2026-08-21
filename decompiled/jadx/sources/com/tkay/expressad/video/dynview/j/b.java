package com.tkay.expressad.video.dynview.j;

import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.text.TextUtils;
import android.view.View;
import android.view.animation.AlphaAnimation;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.video.dynview.widget.TYFramLayout;
import com.tkay.expressad.video.dynview.widget.TYLevelLayoutView;
import com.tkay.expressad.video.dynview.widget.TYRelativeLayout;
import com.tkay.expressad.video.dynview.widget.TYTextView;
import com.tkay.expressad.video.module.TkayClickCTAView;
import com.tkay.expressad.video.widget.SoundImageView;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f7248a = "tkay_top_play_bg";
    private String b = "tkay_top_finger_bg";
    private String c = "tkay_bottom_play_bg";
    private String d = "tkay_bottom_finger_bg";
    private String e = "tkay_tv_count";
    private String f = "tkay_sound_switch";
    private String g = "tkay_top_control";
    private String h = "tkay_tv_title";
    private String i = "tkay_tv_desc";
    private String j = "tkay_tv_install";
    private String k = "tkay_sv_starlevel";
    private String l = "tkay_sv_heat_count_level";
    private String m = "tkay_tv_cta";
    private String n = "tkay_native_ec_controller";
    private String o = "tkay_reward_shape_choice_rl";
    private String p = "#FFFFFF";
    private String q = "#FF000000";
    private String r = "#40000000";
    private String s = "#CAEF79";
    private String t = "#2196F3";
    private String u = "#402196F3";
    private String v = "#8FC31F";
    private String w = "#03A9F4";
    private boolean x = false;

    private static void a() {
    }

    public final void a(View view) {
        ObjectAnimator objectAnimatorA;
        ObjectAnimator objectAnimatorB;
        ObjectAnimator objectAnimatorA2;
        if (view == null || !(view instanceof TYFramLayout)) {
            return;
        }
        TYFramLayout tYFramLayout = (TYFramLayout) view;
        AnimatorSet animatorSet = new AnimatorSet();
        if (view.getContext() != null) {
            this.x = false;
            ImageView imageView = (ImageView) view.findViewById(a(this.f7248a));
            ImageView imageView2 = (ImageView) view.findViewById(a(this.b));
            ImageView imageView3 = (ImageView) view.findViewById(a(this.c));
            ImageView imageView4 = (ImageView) view.findViewById(a(this.d));
            ObjectAnimator objectAnimatorB2 = null;
            if (imageView != null) {
                new com.tkay.expressad.video.dynview.h.b();
                objectAnimatorA = com.tkay.expressad.video.dynview.h.b.a(imageView);
            } else {
                objectAnimatorA = null;
            }
            if (imageView2 != null) {
                new com.tkay.expressad.video.dynview.h.b();
                objectAnimatorB = com.tkay.expressad.video.dynview.h.b.b(imageView2);
            } else {
                objectAnimatorB = null;
            }
            if (imageView3 != null) {
                new com.tkay.expressad.video.dynview.h.b();
                objectAnimatorA2 = com.tkay.expressad.video.dynview.h.b.a(imageView3);
            } else {
                objectAnimatorA2 = null;
            }
            if (imageView4 != null) {
                new com.tkay.expressad.video.dynview.h.b();
                objectAnimatorB2 = com.tkay.expressad.video.dynview.h.b.b(imageView4);
            }
            if (objectAnimatorA == null || objectAnimatorA2 == null || objectAnimatorB == null || objectAnimatorB2 == null) {
                return;
            }
            animatorSet.playTogether(objectAnimatorA, objectAnimatorA2, objectAnimatorB, objectAnimatorB2);
            tYFramLayout.setAnimatorSet(animatorSet);
        }
    }

    public final void a(View view, com.tkay.expressad.video.dynview.c cVar) {
        String str;
        String str2;
        Context context = view != null ? view.getContext() : null;
        if (context == null || cVar == null) {
            return;
        }
        this.x = false;
        TextView textView = (TextView) view.findViewById(a(this.e));
        TextView textView2 = (TextView) view.findViewById(a("tkay_reward_click_tv"));
        if (textView != null) {
            textView.setBackgroundResource(i.a(context, "tkay_reward_shape_progress", i.c));
            textView.setTextColor(Color.parseColor(this.p));
            textView.setTextSize(11.0f);
        }
        if (textView2 != null) {
            textView2.setTextSize(20.0f);
            if (textView2 instanceof TYTextView) {
                new com.tkay.expressad.video.dynview.h.b();
                ((TYTextView) textView2).setObjectAnimator(com.tkay.expressad.video.dynview.h.b.c(textView2));
            }
        }
        if (cVar != null) {
            String str3 = this.q;
            String str4 = this.s;
            float f = 1.0f;
            float f2 = 5.0f;
            int i = cVar.i();
            if (i == 302) {
                str = this.t;
                str2 = this.w;
                str3 = this.p;
                str4 = this.u;
                f2 = 10.0f;
            } else if (i == 802) {
                str = this.p;
                str3 = this.q;
                str4 = this.r;
                f = 0.5f;
                f2 = 25.0f;
                str2 = str;
            } else {
                str = this.v;
                str2 = this.s;
            }
            float f3 = f;
            String str5 = str4;
            float f4 = f2;
            if (textView2 != null) {
                textView2.setTextColor(Color.parseColor(str3));
                com.tkay.expressad.video.dynview.i.b.a.a(textView2, f3, f4, str5, new String[]{str, str2}, GradientDrawable.Orientation.LEFT_RIGHT);
            }
            if (cVar.f() != null) {
                RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) cVar.f().getLayoutParams();
                layoutParams.setMargins(0, 0, 0, 0);
                cVar.f().setLayoutParams(layoutParams);
            }
            RelativeLayout relativeLayout = (RelativeLayout) view.findViewById(a(this.g));
            if (relativeLayout != null) {
                if (com.tkay.expressad.video.dynview.a.b.f7215a == 0 && com.tkay.expressad.video.dynview.a.b.b == 0 && com.tkay.expressad.video.dynview.a.b.c == 0 && com.tkay.expressad.video.dynview.a.b.d == 0) {
                    return;
                }
                relativeLayout.setVisibility(4);
                AlphaAnimation alphaAnimation = new AlphaAnimation(0.0f, 100.0f);
                alphaAnimation.setDuration(200L);
                relativeLayout.startAnimation(alphaAnimation);
                relativeLayout.setVisibility(0);
            }
        }
    }

    private void a(Context context, View view, com.tkay.expressad.video.dynview.c cVar) {
        SoundImageView soundImageView = (SoundImageView) view.findViewById(a(this.f));
        int iB = t.b(context, 60.0f);
        int iB2 = t.b(context, 10.0f);
        if (soundImageView != null) {
            cVar.e();
            ((FrameLayout.LayoutParams) soundImageView.getLayoutParams()).setMargins(iB2, 0, 0, iB);
        }
    }

    private void b(View view) {
        RelativeLayout relativeLayout = (RelativeLayout) view.findViewById(a(this.g));
        if (relativeLayout != null) {
            if (com.tkay.expressad.video.dynview.a.b.f7215a == 0 && com.tkay.expressad.video.dynview.a.b.b == 0 && com.tkay.expressad.video.dynview.a.b.c == 0 && com.tkay.expressad.video.dynview.a.b.d == 0) {
                return;
            }
            relativeLayout.setVisibility(4);
            AlphaAnimation alphaAnimation = new AlphaAnimation(0.0f, 100.0f);
            alphaAnimation.setDuration(200L);
            relativeLayout.startAnimation(alphaAnimation);
            relativeLayout.setVisibility(0);
        }
    }

    public final void b(View view, com.tkay.expressad.video.dynview.c cVar) {
        Context context;
        int iB;
        if (view == null || cVar == null || (context = view.getContext()) == null) {
            return;
        }
        if (cVar.e() == 1) {
            view.setBackgroundDrawable(context.getResources().getDrawable(i.a(context, this.o, i.c)));
            TextView textView = (TextView) view.findViewById(a(this.h));
            if (textView != null) {
                textView.setTextColor(Color.parseColor(this.q));
            }
            TextView textView2 = (TextView) view.findViewById(a(this.i));
            if (textView2 != null) {
                textView2.setTextColor(Color.parseColor(this.q));
            }
            iB = t.b(context, 2.0f);
        } else {
            iB = t.b(context, 10.0f);
            view.getBackground().setAlpha(100);
        }
        int iB2 = t.b(context, 8.0f);
        View viewFindViewById = view.findViewById(a(this.j));
        if (viewFindViewById != null) {
            if (cVar.f() != null && (cVar.f() instanceof TkayClickCTAView)) {
                new com.tkay.expressad.video.dynview.h.b();
                ((TkayClickCTAView) cVar.f()).setObjectAnimator(com.tkay.expressad.video.dynview.h.b.c(viewFindViewById));
            }
            if (viewFindViewById instanceof TextView) {
                TextView textView3 = (TextView) viewFindViewById;
                textView3.setTextColor(Color.parseColor(this.p));
                textView3.setTextSize(15.0f);
                String str = this.s;
                com.tkay.expressad.video.dynview.i.b.a.a(textView3, 1.0f, 5.0f, str, new String[]{this.v, str}, GradientDrawable.Orientation.LEFT_RIGHT);
            }
        }
        if (view.getLayoutParams() == null) {
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
            layoutParams.setMargins(iB, iB, iB, iB2);
            layoutParams.height = t.b(context, 60.0f);
            view.setLayoutParams(layoutParams);
        }
    }

    public final void c(View view, com.tkay.expressad.video.dynview.c cVar) {
        if (view == null || cVar == null) {
            return;
        }
        if (view.getContext() != null) {
            this.x = false;
            LinearLayout linearLayout = (LinearLayout) view.findViewById(a(this.k));
            View viewFindViewById = view.findViewById(a(this.m));
            if (linearLayout != null && (linearLayout instanceof TYLevelLayoutView)) {
                if (cVar.e() == 1) {
                    linearLayout.setOrientation(1);
                } else {
                    linearLayout.setOrientation(0);
                }
            }
            RelativeLayout relativeLayout = (RelativeLayout) view.findViewById(a(this.n));
            if (relativeLayout != null) {
                if (cVar.e() == 1) {
                    FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
                    layoutParams.setMargins(layoutParams.leftMargin + com.tkay.expressad.video.dynview.a.b.f7215a, layoutParams.topMargin + com.tkay.expressad.video.dynview.a.b.c, layoutParams.rightMargin + com.tkay.expressad.video.dynview.a.b.b, layoutParams.bottomMargin + com.tkay.expressad.video.dynview.a.b.d);
                    relativeLayout.setLayoutParams(layoutParams);
                } else {
                    RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-1, -1);
                    layoutParams2.setMargins(layoutParams2.leftMargin + com.tkay.expressad.video.dynview.a.b.f7215a, layoutParams2.topMargin + com.tkay.expressad.video.dynview.a.b.c, layoutParams2.rightMargin + com.tkay.expressad.video.dynview.a.b.b, layoutParams2.bottomMargin + com.tkay.expressad.video.dynview.a.b.d);
                    relativeLayout.setLayoutParams(layoutParams2);
                }
            }
            if (viewFindViewById != null) {
                if (viewFindViewById instanceof TextView) {
                    TextView textView = (TextView) viewFindViewById;
                    textView.setTextColor(Color.parseColor(this.p));
                    textView.setTextSize(25.0f);
                    String str = this.s;
                    com.tkay.expressad.video.dynview.i.b.a.a(viewFindViewById, 1.0f, 5.0f, str, new String[]{this.v, str}, GradientDrawable.Orientation.LEFT_RIGHT);
                }
                AnimatorSet animatorSet = new AnimatorSet();
                new com.tkay.expressad.video.dynview.h.b();
                animatorSet.playTogether(com.tkay.expressad.video.dynview.h.b.c(viewFindViewById));
                if (view instanceof TYFramLayout) {
                    ((TYFramLayout) view).setAnimatorSet(animatorSet);
                }
                if (view instanceof TYRelativeLayout) {
                    ((TYRelativeLayout) view).setAnimatorSet(animatorSet);
                }
            }
        }
        new com.tkay.expressad.video.dynview.h.b();
        com.tkay.expressad.video.dynview.h.b.e(view);
    }

    private void d(View view, com.tkay.expressad.video.dynview.c cVar) {
        RelativeLayout relativeLayout = (RelativeLayout) view.findViewById(a(this.n));
        if (relativeLayout != null) {
            if (cVar.e() == 1) {
                FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
                layoutParams.setMargins(layoutParams.leftMargin + com.tkay.expressad.video.dynview.a.b.f7215a, layoutParams.topMargin + com.tkay.expressad.video.dynview.a.b.c, layoutParams.rightMargin + com.tkay.expressad.video.dynview.a.b.b, layoutParams.bottomMargin + com.tkay.expressad.video.dynview.a.b.d);
                relativeLayout.setLayoutParams(layoutParams);
                return;
            }
            RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-1, -1);
            layoutParams2.setMargins(layoutParams2.leftMargin + com.tkay.expressad.video.dynview.a.b.f7215a, layoutParams2.topMargin + com.tkay.expressad.video.dynview.a.b.c, layoutParams2.rightMargin + com.tkay.expressad.video.dynview.a.b.b, layoutParams2.bottomMargin + com.tkay.expressad.video.dynview.a.b.d);
            relativeLayout.setLayoutParams(layoutParams2);
        }
    }

    private static int a(String str) {
        return i.a(m.a().f(), str, "id");
    }

    private static int b(String str) {
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        return str.hashCode();
    }
}
