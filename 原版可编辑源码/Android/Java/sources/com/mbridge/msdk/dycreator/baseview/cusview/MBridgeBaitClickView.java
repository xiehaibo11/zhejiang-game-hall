package com.mbridge.msdk.dycreator.baseview.cusview;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.animation.AlphaAnimation;
import android.view.animation.Animation;
import android.view.animation.AnimationSet;
import android.view.animation.RotateAnimation;
import android.view.animation.ScaleAnimation;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.mbridge.msdk.foundation.same.c.b;
import com.mbridge.msdk.foundation.same.c.c;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.video.dynview.a.a;

public class MBridgeBaitClickView extends RelativeLayout {
    public static final int ANIMATION_TYPE_DOUBLE_CLICK = 4;
    public static final int ANIMATION_TYPE_FAST_SCALE = 1;
    public static final int ANIMATION_TYPE_ROTATE = 5;
    public static final int ANIMATION_TYPE_SLOW_SCALE = 2;
    public static final int ANIMATION_TYPE_SLOW_SCALE_WITH_PAUSE = 3;
    private MBridgeDyImageView a;
    private MBridgeDyImageView b;
    private TextView c;
    private String d;
    private String e;
    private String f;
    private int g;
    private int h;
    private Animation i;
    private Animation j;
    private Animation k;
    private Animation l;

    public MBridgeBaitClickView(Context context) {
        super(context);
        this.d = "";
        this.e = "";
        this.f = "Click now for details";
        this.g = 1;
        this.h = 1342177280;
    }

    public MBridgeBaitClickView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.d = "";
        this.e = "";
        this.f = "Click now for details";
        this.g = 1;
        this.h = 1342177280;
    }

    public MBridgeBaitClickView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.d = "";
        this.e = "";
        this.f = "Click now for details";
        this.g = 1;
        this.h = 1342177280;
    }

    public MBridgeBaitClickView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.d = "";
        this.e = "";
        this.f = "Click now for details";
        this.g = 1;
        this.h = 1342177280;
    }

    public void init(int i) {
        this.g = i;
        init();
    }

    public void init(int i, int i2) {
        this.h = i;
        this.g = i2;
        init();
    }

    public void init(int i, int i2, String str, String str2, String str3) {
        this.h = i;
        this.g = i2;
        this.d = str;
        this.e = str2;
        this.f = str3;
        init();
    }

    public void init() {
        try {
            setBackgroundColor(this.h);
            try {
                this.f = getContext().getResources().getConfiguration().locale.getLanguage().contains(a.Q) ? "点击查看详情" : "Click now for details";
            } catch (Throwable th) {
                z.d("MBridgeAnimationClickView", th.getMessage());
            }
            RelativeLayout relativeLayout = new RelativeLayout(getContext());
            relativeLayout.setLayoutParams(new RelativeLayout.LayoutParams(-2, -2));
            int iB = ae.b(getContext(), 55.0f);
            int iB2 = ae.b(getContext(), 33.0f);
            this.b = new MBridgeDyImageView(getContext());
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(iB, iB);
            layoutParams.setMargins(iB2, iB2, 0, 0);
            this.b.setLayoutParams(layoutParams);
            final int iA = s.a(getContext(), "mbridge_icon_click_circle", i.c);
            if (TextUtils.isEmpty(this.e)) {
                this.b.setImageResource(iA);
            } else {
                b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(this.d, new c() {
                    @Override
                    public void onSuccessLoad(Bitmap bitmap, String str) {
                        if (bitmap.isRecycled()) {
                            return;
                        }
                        MBridgeBaitClickView.this.b.setImageBitmap(bitmap);
                    }

                    @Override
                    public void onFailedLoad(String str, String str2) {
                        MBridgeBaitClickView.this.b.setImageResource(iA);
                    }
                });
            }
            int iB3 = ae.b(getContext(), 108.0f);
            int iB4 = ae.b(getContext(), 35.0f);
            int iB5 = ae.b(getContext(), 43.0f);
            this.a = new MBridgeDyImageView(getContext());
            RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(iB3, iB3);
            layoutParams2.setMargins(iB4, iB5, 0, 0);
            this.a.setLayoutParams(layoutParams2);
            final int iA2 = s.a(getContext(), "mbridge_icon_click_hand", i.c);
            if (TextUtils.isEmpty(this.d)) {
                this.a.setImageResource(iA2);
            } else {
                b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(this.d, new c() {
                    @Override
                    public void onSuccessLoad(Bitmap bitmap, String str) {
                        if (bitmap.isRecycled()) {
                            return;
                        }
                        MBridgeBaitClickView.this.a.setImageBitmap(bitmap);
                    }

                    @Override
                    public void onFailedLoad(String str, String str2) {
                        MBridgeBaitClickView.this.a.setImageResource(iA2);
                    }
                });
            }
            relativeLayout.addView(this.b);
            relativeLayout.addView(this.a);
            LinearLayout linearLayout = new LinearLayout(getContext());
            RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-2, -2);
            layoutParams3.addRule(13);
            linearLayout.setLayoutParams(layoutParams3);
            linearLayout.setOrientation(1);
            linearLayout.setGravity(1);
            linearLayout.addView(relativeLayout);
            this.c = new TextView(getContext());
            this.c.setLayoutParams(new RelativeLayout.LayoutParams(-2, -2));
            this.c.setText(this.f);
            this.c.setTextColor(-1);
            this.c.setGravity(14);
            linearLayout.addView(this.c);
            addView(linearLayout);
        } catch (Throwable th2) {
            z.d("MBridgeAnimationClickView", th2.getMessage());
        }
    }

    public void startAnimation() {
        int i = this.g;
        if (i == 2) {
            this.b.setVisibility(4);
            ScaleAnimation scaleAnimation = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
            this.i = scaleAnimation;
            scaleAnimation.setDuration(500L);
            this.i.setRepeatCount(-1);
            this.i.setRepeatMode(2);
            MBridgeDyImageView mBridgeDyImageView = this.a;
            if (mBridgeDyImageView != null) {
                mBridgeDyImageView.startAnimation(this.i);
                return;
            }
            return;
        }
        if (i == 3) {
            MBridgeDyImageView mBridgeDyImageView2 = this.b;
            if (mBridgeDyImageView2 != null) {
                mBridgeDyImageView2.setVisibility(4);
            }
            ScaleAnimation scaleAnimation2 = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
            this.i = scaleAnimation2;
            scaleAnimation2.setDuration(500L);
            this.i.setRepeatCount(1);
            this.i.setRepeatMode(2);
            ScaleAnimation scaleAnimation3 = new ScaleAnimation(0.0f, 1.5f, 0.0f, 1.5f, 1, 0.5f, 1, 0.5f);
            this.j = scaleAnimation3;
            scaleAnimation3.setDuration(1000L);
            this.j.setRepeatCount(0);
            AlphaAnimation alphaAnimation = new AlphaAnimation(1.0f, 0.0f);
            this.k = alphaAnimation;
            alphaAnimation.setDuration(1000L);
            this.k.setRepeatCount(0);
            final AnimationSet animationSet = new AnimationSet(true);
            animationSet.addAnimation(this.j);
            animationSet.addAnimation(this.k);
            this.j.setAnimationListener(new Animation.AnimationListener() {
                @Override
                public void onAnimationRepeat(Animation animation) {
                }

                @Override
                public void onAnimationStart(Animation animation) {
                    if (MBridgeBaitClickView.this.b != null) {
                        MBridgeBaitClickView.this.b.setVisibility(0);
                    }
                }

                @Override
                public void onAnimationEnd(Animation animation) {
                    if (MBridgeBaitClickView.this.b != null) {
                        MBridgeBaitClickView.this.b.setVisibility(4);
                    }
                }
            });
            this.i.setAnimationListener(new Animation.AnimationListener() {
                @Override
                public void onAnimationRepeat(Animation animation) {
                }

                @Override
                public void onAnimationStart(Animation animation) {
                    MBridgeBaitClickView.this.postDelayed(new Runnable() {
                        @Override
                        public void run() {
                            if (MBridgeBaitClickView.this.b != null) {
                                MBridgeBaitClickView.this.b.startAnimation(animationSet);
                            }
                        }
                    }, 550L);
                }

                @Override
                public void onAnimationEnd(Animation animation) {
                    MBridgeBaitClickView.this.postDelayed(new Runnable() {
                        @Override
                        public void run() {
                            if (MBridgeBaitClickView.this.a != null) {
                                MBridgeBaitClickView.this.a.startAnimation(MBridgeBaitClickView.this.i);
                            }
                        }
                    }, 1000L);
                }
            });
            MBridgeDyImageView mBridgeDyImageView3 = this.a;
            if (mBridgeDyImageView3 != null) {
                mBridgeDyImageView3.startAnimation(this.i);
                return;
            }
            return;
        }
        if (i == 4) {
            this.b.setVisibility(4);
            ScaleAnimation scaleAnimation4 = new ScaleAnimation(0.8f, 1.0f, 0.8f, 1.0f, 1, 0.5f, 1, 0.5f);
            this.i = scaleAnimation4;
            scaleAnimation4.setDuration(200L);
            this.i.setRepeatCount(1);
            this.i.setAnimationListener(new Animation.AnimationListener() {
                @Override
                public void onAnimationRepeat(Animation animation) {
                }

                @Override
                public void onAnimationStart(Animation animation) {
                }

                @Override
                public void onAnimationEnd(Animation animation) {
                    MBridgeBaitClickView.this.postDelayed(new Runnable() {
                        @Override
                        public void run() {
                            if (MBridgeBaitClickView.this.a != null) {
                                MBridgeBaitClickView.this.a.startAnimation(MBridgeBaitClickView.this.i);
                            }
                        }
                    }, 1000L);
                }
            });
            MBridgeDyImageView mBridgeDyImageView4 = this.a;
            if (mBridgeDyImageView4 != null) {
                mBridgeDyImageView4.startAnimation(this.i);
                return;
            }
            return;
        }
        if (i != 5) {
            ScaleAnimation scaleAnimation5 = new ScaleAnimation(1.0f, 0.7f, 1.0f, 0.7f, 1, 0.5f, 1, 0.5f);
            this.i = scaleAnimation5;
            scaleAnimation5.setDuration(200L);
            this.i.setRepeatCount(-1);
            this.i.setRepeatMode(2);
            MBridgeDyImageView mBridgeDyImageView5 = this.a;
            if (mBridgeDyImageView5 != null) {
                mBridgeDyImageView5.startAnimation(this.i);
            }
            ScaleAnimation scaleAnimation6 = new ScaleAnimation(0.0f, 1.2f, 0.0f, 1.2f, 1, 0.5f, 1, 0.5f);
            this.j = scaleAnimation6;
            scaleAnimation6.setDuration(400L);
            this.j.setRepeatCount(-1);
            AlphaAnimation alphaAnimation2 = new AlphaAnimation(1.0f, 0.3f);
            this.k = alphaAnimation2;
            alphaAnimation2.setDuration(400L);
            this.k.setRepeatCount(-1);
            AnimationSet animationSet2 = new AnimationSet(true);
            animationSet2.addAnimation(this.j);
            animationSet2.addAnimation(this.k);
            MBridgeDyImageView mBridgeDyImageView6 = this.b;
            if (mBridgeDyImageView6 != null) {
                mBridgeDyImageView6.startAnimation(animationSet2);
                return;
            }
            return;
        }
        RotateAnimation rotateAnimation = new RotateAnimation(-10.0f, 30.0f, 1, 0.5f, 1, 0.5f);
        this.l = rotateAnimation;
        rotateAnimation.setDuration(300L);
        this.l.setRepeatMode(2);
        this.l.setRepeatCount(-1);
        ScaleAnimation scaleAnimation7 = new ScaleAnimation(0.0f, 1.2f, 0.0f, 1.2f, 1, 0.5f, 1, 0.5f);
        this.j = scaleAnimation7;
        scaleAnimation7.setDuration(600L);
        this.j.setRepeatCount(-1);
        AlphaAnimation alphaAnimation3 = new AlphaAnimation(1.0f, 0.0f);
        this.k = alphaAnimation3;
        alphaAnimation3.setDuration(600L);
        this.k.setRepeatCount(-1);
        AnimationSet animationSet3 = new AnimationSet(true);
        animationSet3.addAnimation(this.j);
        animationSet3.addAnimation(this.k);
        MBridgeDyImageView mBridgeDyImageView7 = this.a;
        if (mBridgeDyImageView7 != null) {
            mBridgeDyImageView7.startAnimation(this.l);
        }
        MBridgeDyImageView mBridgeDyImageView8 = this.b;
        if (mBridgeDyImageView8 != null) {
            mBridgeDyImageView8.startAnimation(animationSet3);
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        clearAnimation();
        Animation animation = this.i;
        if (animation != null) {
            animation.cancel();
        }
        Animation animation2 = this.j;
        if (animation2 != null) {
            animation2.cancel();
        }
        Animation animation3 = this.k;
        if (animation3 != null) {
            animation3.cancel();
        }
        Animation animation4 = this.l;
        if (animation4 != null) {
            animation4.cancel();
        }
    }
}
