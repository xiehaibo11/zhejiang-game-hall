package com.mbridge.msdk.video.dynview.j;

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
import com.mbridge.msdk.dycreator.baseview.MBFrameLayout;
import com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView;
import com.mbridge.msdk.dycreator.baseview.MBTextView;
import com.mbridge.msdk.dycreator.baseview.cusview.MBridgeFramLayout;
import com.mbridge.msdk.dycreator.baseview.cusview.MBridgeTextView;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView;
import com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout;
import com.mbridge.msdk.video.module.MBridgeClickCTAView;
import com.tkay.expressad.foundation.h.i;
import java.util.Map;

/* JADX INFO: compiled from: UIEnergizeWrapper.java */
/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4167a = "mbridge_top_play_bg";
    private String b = "mbridge_top_finger_bg";
    private String c = "mbridge_bottom_play_bg";
    private String d = "mbridge_bottom_finger_bg";
    private String e = "mbridge_tv_count";
    private String f = "mbridge_sound_switch";
    private String g = "mbridge_top_control";
    private String h = "mbridge_tv_title";
    private String i = "mbridge_tv_desc";
    private String j = "mbridge_tv_install";
    private String k = "mbridge_sv_starlevel";
    private String l = "mbridge_sv_heat_count_level";
    private String m = "mbridge_tv_cta";
    private String n = "mbridge_native_ec_controller";
    private String o = "mbridge_reward_shape_choice_rl";
    private String p = "#FFFFFF";
    private String q = "#FF000000";
    private String r = "#40000000";
    private String s = "#CAEF79";
    private String t = "#2196F3";
    private String u = "#402196F3";
    private String v = "#8FC31F";
    private String w = "#03A9F4";
    private boolean x = false;

    public final void a(View view, Map<String, Object> map) {
        ImageView imageView;
        ImageView imageView2;
        ImageView imageView3;
        ImageView imageView4;
        if (view == null || !(view instanceof MBridgeFramLayout)) {
            return;
        }
        MBridgeFramLayout mBridgeFramLayout = (MBridgeFramLayout) view;
        AnimatorSet animatorSet = new AnimatorSet();
        if (view.getContext() != null) {
            if (map != null && map.containsKey("is_dy_success")) {
                this.x = ((Boolean) map.get("is_dy_success")).booleanValue();
            }
            if (this.x) {
                imageView = (ImageView) view.findViewById(b(this.f4167a));
                imageView2 = (ImageView) view.findViewById(b(this.b));
                imageView3 = (ImageView) view.findViewById(b(this.c));
                imageView4 = (ImageView) view.findViewById(b(this.d));
            } else {
                imageView = (ImageView) view.findViewById(a(this.f4167a));
                imageView2 = (ImageView) view.findViewById(a(this.b));
                imageView3 = (ImageView) view.findViewById(a(this.c));
                imageView4 = (ImageView) view.findViewById(a(this.d));
            }
            ObjectAnimator objectAnimatorA = imageView != null ? new com.mbridge.msdk.video.dynview.h.b().a(imageView) : null;
            ObjectAnimator objectAnimatorB = imageView2 != null ? new com.mbridge.msdk.video.dynview.h.b().b(imageView2) : null;
            ObjectAnimator objectAnimatorA2 = imageView3 != null ? new com.mbridge.msdk.video.dynview.h.b().a(imageView3) : null;
            ObjectAnimator objectAnimatorB2 = imageView4 != null ? new com.mbridge.msdk.video.dynview.h.b().b(imageView4) : null;
            if (objectAnimatorA == null || objectAnimatorA2 == null || objectAnimatorB == null || objectAnimatorB2 == null) {
                return;
            }
            animatorSet.playTogether(objectAnimatorA, objectAnimatorA2, objectAnimatorB, objectAnimatorB2);
            mBridgeFramLayout.setAnimatorSet(animatorSet);
        }
    }

    public final void a(View view, com.mbridge.msdk.video.dynview.c cVar, Map<String, Object> map) {
        TextView textView;
        TextView textView2;
        String str;
        String str2;
        RelativeLayout relativeLayout;
        Context context = view != null ? view.getContext() : null;
        if (context == null || cVar == null) {
            return;
        }
        if (map != null && map.containsKey("is_dy_success")) {
            boolean zBooleanValue = ((Boolean) map.get("is_dy_success")).booleanValue();
            this.x = zBooleanValue;
            if (zBooleanValue) {
                textView = (TextView) view.findViewById(b(this.e));
                textView2 = (TextView) view.findViewById(b("mbridge_reward_click_tv"));
            } else {
                textView = (TextView) view.findViewById(a(this.e));
                textView2 = (TextView) view.findViewById(a("mbridge_reward_click_tv"));
            }
        } else {
            textView = (TextView) view.findViewById(a(this.e));
            textView2 = (TextView) view.findViewById(a("mbridge_reward_click_tv"));
        }
        if (textView != null) {
            textView.setBackgroundResource(s.a(context, "mbridge_reward_shape_progress", i.c));
            textView.setTextColor(Color.parseColor(this.p));
            textView.setTextSize(11.0f);
        }
        if (textView2 != null) {
            textView2.setTextSize(20.0f);
            if (textView2 instanceof MBridgeTextView) {
                ((MBridgeTextView) textView2).setObjectAnimator(new com.mbridge.msdk.video.dynview.h.b().c(textView2));
            }
            if (textView2 instanceof MBTextView) {
                ((MBTextView) textView2).setAnimator(new com.mbridge.msdk.video.dynview.h.b().c(textView2));
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
            if (textView2 != null) {
                textView2.setTextColor(Color.parseColor(str3));
                com.mbridge.msdk.video.dynview.i.b.a.a(textView2, f, f2, str4, new String[]{str, str2}, GradientDrawable.Orientation.LEFT_RIGHT);
            }
            if (cVar.f() != null) {
                RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) cVar.f().getLayoutParams();
                layoutParams.setMargins(0, 0, 0, 0);
                cVar.f().setLayoutParams(layoutParams);
            }
            if (this.x) {
                relativeLayout = (RelativeLayout) view.findViewById(b(this.g));
            } else {
                relativeLayout = (RelativeLayout) view.findViewById(a(this.g));
            }
            if (relativeLayout != null) {
                if (com.mbridge.msdk.video.dynview.a.a.f4131a == 0 && com.mbridge.msdk.video.dynview.a.a.b == 0 && com.mbridge.msdk.video.dynview.a.a.c == 0 && com.mbridge.msdk.video.dynview.a.a.d == 0) {
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

    public final void a(View view, com.mbridge.msdk.video.dynview.c cVar) {
        Context context;
        int iB;
        if (view == null || cVar == null || (context = view.getContext()) == null) {
            return;
        }
        if (cVar.e() == 1) {
            view.setBackground(context.getResources().getDrawable(s.a(context, this.o, i.c)));
            TextView textView = (TextView) view.findViewById(a(this.h));
            if (textView != null) {
                textView.setTextColor(Color.parseColor(this.q));
            }
            TextView textView2 = (TextView) view.findViewById(a(this.i));
            if (textView2 != null) {
                textView2.setTextColor(Color.parseColor(this.q));
            }
            iB = ae.b(context, 2.0f);
        } else {
            iB = ae.b(context, 10.0f);
            view.getBackground().setAlpha(100);
        }
        int iB2 = ae.b(context, 8.0f);
        View viewFindViewById = view.findViewById(a(this.j));
        if (viewFindViewById != null) {
            if (cVar.f() != null && (cVar.f() instanceof MBridgeClickCTAView)) {
                ((MBridgeClickCTAView) cVar.f()).setObjectAnimator(new com.mbridge.msdk.video.dynview.h.b().c(viewFindViewById));
            }
            if (viewFindViewById instanceof TextView) {
                TextView textView3 = (TextView) viewFindViewById;
                textView3.setTextColor(Color.parseColor(this.p));
                textView3.setTextSize(15.0f);
                String str = this.s;
                com.mbridge.msdk.video.dynview.i.b.a.a(textView3, 1.0f, 5.0f, str, new String[]{this.v, str}, GradientDrawable.Orientation.LEFT_RIGHT);
            }
        }
        if (view.getLayoutParams() == null) {
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
            layoutParams.setMargins(iB, iB, iB, iB2);
            layoutParams.height = ae.b(context, 60.0f);
            view.setLayoutParams(layoutParams);
        }
    }

    public final void b(View view, com.mbridge.msdk.video.dynview.c cVar, Map<String, Object> map) {
        LinearLayout linearLayout;
        View viewFindViewById;
        if (view == null || cVar == null) {
            return;
        }
        if (view.getContext() != null) {
            if (map != null && map.containsKey("is_dy_success")) {
                this.x = ((Boolean) map.get("is_dy_success")).booleanValue();
            }
            if (this.x) {
                linearLayout = (LinearLayout) view.findViewById(b(this.k));
                viewFindViewById = view.findViewById(b(this.m));
            } else {
                linearLayout = (LinearLayout) view.findViewById(a(this.k));
                viewFindViewById = view.findViewById(a(this.m));
            }
            View view2 = viewFindViewById;
            if (linearLayout != null && (linearLayout instanceof MBridgeLevelLayoutView)) {
                if (cVar.e() == 1) {
                    linearLayout.setOrientation(1);
                } else {
                    linearLayout.setOrientation(0);
                }
            }
            if (linearLayout != null && (linearLayout instanceof MBStarLevelLayoutView)) {
                linearLayout.setOrientation(0);
            }
            RelativeLayout relativeLayout = (RelativeLayout) view.findViewById(a(this.n));
            if (relativeLayout != null) {
                if (cVar.e() == 1) {
                    FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
                    layoutParams.setMargins(layoutParams.leftMargin + com.mbridge.msdk.video.dynview.a.a.f4131a, layoutParams.topMargin + com.mbridge.msdk.video.dynview.a.a.c, layoutParams.rightMargin + com.mbridge.msdk.video.dynview.a.a.b, layoutParams.bottomMargin + com.mbridge.msdk.video.dynview.a.a.d);
                    relativeLayout.setLayoutParams(layoutParams);
                } else {
                    RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-1, -1);
                    layoutParams2.setMargins(layoutParams2.leftMargin + com.mbridge.msdk.video.dynview.a.a.f4131a, layoutParams2.topMargin + com.mbridge.msdk.video.dynview.a.a.c, layoutParams2.rightMargin + com.mbridge.msdk.video.dynview.a.a.b, layoutParams2.bottomMargin + com.mbridge.msdk.video.dynview.a.a.d);
                    relativeLayout.setLayoutParams(layoutParams2);
                }
            }
            if (view2 != null) {
                if (view2 instanceof TextView) {
                    TextView textView = (TextView) view2;
                    textView.setTextColor(Color.parseColor(this.p));
                    textView.setTextSize(25.0f);
                    String str = this.s;
                    com.mbridge.msdk.video.dynview.i.b.a.a(view2, 1.0f, 5.0f, str, new String[]{this.v, str}, GradientDrawable.Orientation.LEFT_RIGHT);
                }
                AnimatorSet animatorSet = new AnimatorSet();
                animatorSet.playTogether(new com.mbridge.msdk.video.dynview.h.b().c(view2));
                if (view instanceof MBFrameLayout) {
                    ((MBFrameLayout) view).setAnimator(animatorSet);
                }
                if (view instanceof MBridgeFramLayout) {
                    ((MBridgeFramLayout) view).setAnimatorSet(animatorSet);
                }
                if (view instanceof MBridgeRelativeLayout) {
                    ((MBridgeRelativeLayout) view).setAnimatorSet(animatorSet);
                }
            }
        }
        new com.mbridge.msdk.video.dynview.h.b().c(view, 500L);
    }

    private int a(String str) {
        return s.a(com.mbridge.msdk.foundation.controller.a.f().j(), str, "id");
    }

    private int b(String str) {
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        return str.hashCode();
    }
}
