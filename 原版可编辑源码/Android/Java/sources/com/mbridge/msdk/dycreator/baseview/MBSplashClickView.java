package com.mbridge.msdk.dycreator.baseview;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.RectF;
import android.graphics.drawable.GradientDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import android.view.animation.ScaleAnimation;
import android.view.animation.TranslateAnimation;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.mbridge.msdk.foundation.same.c.b;
import com.mbridge.msdk.foundation.same.c.c;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.video.dynview.a.a;

public class MBSplashClickView extends MBRelativeLayout {
    public final int TYPE_SPLASH_BTN_CLICK;
    public final int TYPE_SPLASH_BTN_GO;
    public final int TYPE_SPLASH_BTN_OPEN;
    private final String a;
    private final String b;
    private final String c;
    private final String d;
    private final String e;
    private final String f;
    private final String g;
    private final String h;
    private final String i;
    private final String j;
    private final String k;
    private final String l;
    private String m;
    private int n;
    private ImageView o;
    private ImageView p;
    private final RectF q;
    private final Paint r;
    private final Paint s;

    public MBSplashClickView(Context context) {
        super(context);
        this.a = "浏览第三方应用";
        this.b = "View";
        this.c = "打开第三方应用";
        this.d = "Open";
        this.e = "下载第三方应用";
        this.f = "Install";
        this.g = "mbridge_splash_btn_arrow_right";
        this.h = "mbridge_splash_btn_circle";
        this.i = "mbridge_splash_btn_finger";
        this.j = "mbridge_splash_btn_go";
        this.k = "mbridge_splash_btn_light";
        this.l = "mbridge_expand_data";
        this.TYPE_SPLASH_BTN_OPEN = 1;
        this.TYPE_SPLASH_BTN_GO = 2;
        this.TYPE_SPLASH_BTN_CLICK = 3;
        this.q = new RectF();
        this.r = new Paint();
        this.s = new Paint();
        a();
    }

    public MBSplashClickView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.a = "浏览第三方应用";
        this.b = "View";
        this.c = "打开第三方应用";
        this.d = "Open";
        this.e = "下载第三方应用";
        this.f = "Install";
        this.g = "mbridge_splash_btn_arrow_right";
        this.h = "mbridge_splash_btn_circle";
        this.i = "mbridge_splash_btn_finger";
        this.j = "mbridge_splash_btn_go";
        this.k = "mbridge_splash_btn_light";
        this.l = "mbridge_expand_data";
        this.TYPE_SPLASH_BTN_OPEN = 1;
        this.TYPE_SPLASH_BTN_GO = 2;
        this.TYPE_SPLASH_BTN_CLICK = 3;
        this.q = new RectF();
        this.r = new Paint();
        this.s = new Paint();
        a();
    }

    public MBSplashClickView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.a = "浏览第三方应用";
        this.b = "View";
        this.c = "打开第三方应用";
        this.d = "Open";
        this.e = "下载第三方应用";
        this.f = "Install";
        this.g = "mbridge_splash_btn_arrow_right";
        this.h = "mbridge_splash_btn_circle";
        this.i = "mbridge_splash_btn_finger";
        this.j = "mbridge_splash_btn_go";
        this.k = "mbridge_splash_btn_light";
        this.l = "mbridge_expand_data";
        this.TYPE_SPLASH_BTN_OPEN = 1;
        this.TYPE_SPLASH_BTN_GO = 2;
        this.TYPE_SPLASH_BTN_CLICK = 3;
        this.q = new RectF();
        this.r = new Paint();
        this.s = new Paint();
        a();
    }

    private void a() {
        this.r.setAntiAlias(true);
        this.r.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.SRC_IN));
        this.s.setAntiAlias(true);
        this.s.setColor(-1);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0067  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x00ae  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x00cd  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x00d1  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x011a  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0157  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0264  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x026a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void initView(String str) {
        byte b;
        boolean z;
        String string;
        int i;
        int i2;
        View viewA;
        this.m = str;
        final int identifier = 0;
        switch (str.hashCode()) {
            case -672744069:
                b = !str.equals("Install") ? (byte) -1 : (byte) 2;
                break;
            case 2464362:
                b = !str.equals("Open") ? (byte) -1 : (byte) 4;
                break;
            case 2666181:
                b = !str.equals("View") ? (byte) -1 : (byte) 1;
                break;
            case 855294846:
                b = !str.equals("下载第三方应用") ? (byte) -1 : (byte) 3;
                break;
            case 1383132195:
                b = !str.equals("打开第三方应用") ? (byte) -1 : (byte) 5;
                break;
            case 1681333335:
                b = !str.equals("浏览第三方应用") ? (byte) -1 : (byte) 0;
                break;
            default:
                b = -1;
                break;
        }
        if (b == 0 || b == 1) {
            this.n = 2;
        } else if (b == 2 || b == 3) {
            this.n = 3;
        } else {
            if (b != 4 && b != 5) {
                z = false;
                if (!z) {
                    boolean zContains = getContext().getResources().getConfiguration().locale.getLanguage().contains(a.Q);
                    if (TextUtils.isEmpty(this.m)) {
                        this.m = zContains ? "浏览第三方应用" : "View";
                    }
                    this.n = 2;
                }
                ViewGroup viewGroup = (ViewGroup) getParent();
                string = (viewGroup == null && (viewA = a(viewGroup, "mbridge_expand_data")) != null && (viewA instanceof TextView)) ? ((TextView) viewA).getText().toString() : "";
                i = this.n;
                int color = Color.parseColor("#666666");
                int color2 = Color.parseColor("#8FC31F");
                int color3 = Color.parseColor("#000000");
                GradientDrawable gradientDrawable = new GradientDrawable();
                if (i != 2) {
                    gradientDrawable.setColor(color2);
                } else {
                    gradientDrawable.setColor(color3);
                    gradientDrawable.setStroke(2, color);
                }
                gradientDrawable.setCornerRadius(200);
                setBackground(gradientDrawable);
                TextView textView = new TextView(getContext());
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
                layoutParams.addRule(15);
                textView.setLayoutParams(layoutParams);
                textView.setGravity(17);
                textView.setTextSize(20.0f);
                textView.setTextColor(-1);
                textView.setText(this.m);
                this.o = new ImageView(getContext());
                RelativeLayout.LayoutParams layoutParams2 = null;
                i2 = this.n;
                if (i2 != 2) {
                    identifier = getResources().getIdentifier("mbridge_splash_btn_go", i.c, com.mbridge.msdk.foundation.controller.a.f().d());
                    layoutParams2 = new RelativeLayout.LayoutParams(ae.b(getContext(), 35.0f), ae.b(getContext(), 35.0f));
                    layoutParams2.addRule(11);
                    layoutParams2.addRule(15);
                    layoutParams2.rightMargin = ae.b(getContext(), 10.0f);
                } else if (i2 == 1) {
                    identifier = getResources().getIdentifier("mbridge_splash_btn_light", i.c, com.mbridge.msdk.foundation.controller.a.f().d());
                    layoutParams2 = new RelativeLayout.LayoutParams(-2, -1);
                    layoutParams2.leftMargin = 20;
                    layoutParams2.rightMargin = 20;
                    ImageView imageView = new ImageView(getContext());
                    RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-2, -1);
                    layoutParams3.addRule(11);
                    layoutParams3.addRule(15);
                    layoutParams3.rightMargin = ae.b(getContext(), 50.0f);
                    imageView.setImageResource(getResources().getIdentifier("mbridge_splash_btn_arrow_right", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
                    imageView.setScaleType(ImageView.ScaleType.CENTER);
                    imageView.setLayoutParams(layoutParams3);
                    addView(imageView);
                } else if (i2 == 3) {
                    identifier = getResources().getIdentifier("mbridge_splash_btn_finger", i.c, com.mbridge.msdk.foundation.controller.a.f().d());
                    layoutParams2 = new RelativeLayout.LayoutParams(ae.b(getContext(), 25.0f), ae.b(getContext(), 25.0f));
                    layoutParams2.addRule(11);
                    layoutParams2.rightMargin = ae.b(getContext(), 50.0f);
                    layoutParams2.topMargin = ae.b(getContext(), 18.0f);
                    this.p = new ImageView(getContext());
                    RelativeLayout.LayoutParams layoutParams4 = new RelativeLayout.LayoutParams(ae.b(getContext(), 30.0f), ae.b(getContext(), 30.0f));
                    layoutParams4.addRule(11);
                    layoutParams4.rightMargin = ae.b(getContext(), 50.0f);
                    layoutParams4.topMargin = ae.b(getContext(), 5.0f);
                    this.p.setLayoutParams(layoutParams4);
                    this.p.setImageResource(getResources().getIdentifier("mbridge_splash_btn_circle", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
                    addView(this.p);
                }
                this.o.setLayoutParams(layoutParams2);
                if (!TextUtils.isEmpty(string)) {
                    this.o.setImageResource(identifier);
                } else {
                    final ImageView imageView2 = this.o;
                    if (imageView2 != null) {
                        try {
                            if (TextUtils.isEmpty(string)) {
                                imageView2.setBackgroundResource(identifier);
                            }
                            b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(string, new c() {
                                @Override
                                public void onSuccessLoad(Bitmap bitmap, String str2) {
                                    if (imageView2 != null) {
                                        if (bitmap != null && !bitmap.isRecycled()) {
                                            if (MBSplashClickView.this.p != null) {
                                                MBSplashClickView mBSplashClickView = MBSplashClickView.this;
                                                mBSplashClickView.removeView(mBSplashClickView.p);
                                            }
                                            imageView2.setImageBitmap(bitmap);
                                            return;
                                        }
                                        imageView2.setBackgroundResource(identifier);
                                    }
                                }

                                @Override
                                public void onFailedLoad(String str2, String str3) {
                                    ImageView imageView3 = imageView2;
                                    if (imageView3 != null) {
                                        imageView3.setBackgroundResource(identifier);
                                    }
                                }
                            });
                        } catch (Exception e) {
                            z.a("MBSplashClickView", e.getMessage());
                            if (imageView2 != null) {
                                imageView2.setBackgroundResource(identifier);
                            }
                        }
                    }
                }
                addView(textView);
                addView(this.o);
                invalidate();
            }
            this.n = 1;
        }
        z = true;
        if (!z) {
        }
        ViewGroup viewGroup2 = (ViewGroup) getParent();
        if (viewGroup2 == null) {
        }
        i = this.n;
        int color4 = Color.parseColor("#666666");
        int color22 = Color.parseColor("#8FC31F");
        int color32 = Color.parseColor("#000000");
        GradientDrawable gradientDrawable2 = new GradientDrawable();
        if (i != 2) {
        }
        gradientDrawable2.setCornerRadius(200);
        setBackground(gradientDrawable2);
        TextView textView2 = new TextView(getContext());
        RelativeLayout.LayoutParams layoutParams5 = new RelativeLayout.LayoutParams(-1, -1);
        layoutParams5.addRule(15);
        textView2.setLayoutParams(layoutParams5);
        textView2.setGravity(17);
        textView2.setTextSize(20.0f);
        textView2.setTextColor(-1);
        textView2.setText(this.m);
        this.o = new ImageView(getContext());
        RelativeLayout.LayoutParams layoutParams22 = null;
        i2 = this.n;
        if (i2 != 2) {
        }
        this.o.setLayoutParams(layoutParams22);
        if (!TextUtils.isEmpty(string)) {
        }
        addView(textView2);
        addView(this.o);
        invalidate();
    }

    @Override
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
        this.q.set(0.0f, 0.0f, getWidth(), getHeight());
    }

    @Override
    public void draw(Canvas canvas) {
        canvas.saveLayer(this.q, this.s, 31);
        canvas.drawRoundRect(this.q, 200.0f, 200.0f, this.s);
        canvas.saveLayer(this.q, this.r, 31);
        super.draw(canvas);
        canvas.restore();
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        int i = this.n;
        if (i == 2) {
            ScaleAnimation scaleAnimation = new ScaleAnimation(0.8f, 1.0f, 0.8f, 1.0f, 1, 0.5f, 1, 0.5f);
            scaleAnimation.setDuration(500L);
            scaleAnimation.setRepeatCount(-1);
            scaleAnimation.setRepeatMode(2);
            this.o.startAnimation(scaleAnimation);
            return;
        }
        if (i == 1) {
            TranslateAnimation translateAnimation = new TranslateAnimation(0, -100.0f, 0, 1000.0f, 0, 0.0f, 0, 0.0f);
            translateAnimation.setDuration(1000L);
            translateAnimation.setAnimationListener(new Animation.AnimationListener() {
                @Override
                public void onAnimationRepeat(Animation animation) {
                }

                @Override
                public void onAnimationStart(Animation animation) {
                    MBSplashClickView.this.o.setVisibility(0);
                }

                @Override
                public void onAnimationEnd(final Animation animation) {
                    MBSplashClickView.this.o.setVisibility(4);
                    MBSplashClickView.this.o.postDelayed(new Runnable() {
                        @Override
                        public void run() {
                            MBSplashClickView.this.o.startAnimation(animation);
                        }
                    }, 2000L);
                }
            });
            this.o.startAnimation(translateAnimation);
            return;
        }
        if (i == 3) {
            ScaleAnimation scaleAnimation2 = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
            scaleAnimation2.setDuration(1000L);
            scaleAnimation2.setRepeatCount(-1);
            scaleAnimation2.setRepeatMode(2);
            final ScaleAnimation scaleAnimation3 = new ScaleAnimation(0.0f, 0.5f, 0.0f, 0.5f, 1, 0.5f, 1, 0.5f);
            scaleAnimation3.setDuration(400L);
            scaleAnimation3.setAnimationListener(new Animation.AnimationListener() {
                @Override
                public void onAnimationRepeat(Animation animation) {
                }

                @Override
                public void onAnimationStart(Animation animation) {
                    MBSplashClickView.this.p.setVisibility(0);
                }

                @Override
                public void onAnimationEnd(Animation animation) {
                    MBSplashClickView.this.p.setVisibility(4);
                    MBSplashClickView.this.p.postDelayed(new Runnable() {
                        @Override
                        public void run() {
                            MBSplashClickView.this.p.startAnimation(scaleAnimation3);
                        }
                    }, 1600L);
                }
            });
            this.p.setVisibility(4);
            this.o.startAnimation(scaleAnimation2);
            this.p.postDelayed(new Runnable() {
                @Override
                public void run() {
                    MBSplashClickView.this.p.startAnimation(scaleAnimation3);
                }
            }, 800L);
        }
    }

    private View a(ViewGroup viewGroup, String str) {
        if (viewGroup != null) {
            try {
                if (!TextUtils.isEmpty(str)) {
                    if (viewGroup.getId() == str.hashCode()) {
                        return viewGroup;
                    }
                    int childCount = viewGroup.getChildCount();
                    for (int i = 0; i < childCount; i++) {
                        View childAt = viewGroup.getChildAt(i);
                        if (childAt.getId() == str.hashCode()) {
                            return childAt;
                        }
                        if (childAt instanceof ViewGroup) {
                            a((ViewGroup) childAt, str);
                        }
                    }
                    return null;
                }
            } catch (Exception e) {
                z.d("MBSplashClickView", e.getMessage());
            }
        }
        return null;
    }
}
