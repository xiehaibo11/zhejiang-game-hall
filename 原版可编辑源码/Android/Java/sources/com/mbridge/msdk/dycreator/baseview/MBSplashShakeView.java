package com.mbridge.msdk.dycreator.baseview;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.animation.Animation;
import android.view.animation.RotateAnimation;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.tools.ae;
import com.tkay.expressad.foundation.h.i;

public class MBSplashShakeView extends MBLinearLayout {
    private final String a;
    private final String b;
    private final String c;
    private final String d;
    private final String e;
    private final String f;
    private ImageView g;
    private Animation h;

    public MBSplashShakeView(Context context) {
        super(context);
        this.a = "浏览第三方应用";
        this.b = "View";
        this.c = "打开第三方应用";
        this.d = "Open";
        this.e = "下载第三方应用";
        this.f = "Install";
    }

    public MBSplashShakeView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.a = "浏览第三方应用";
        this.b = "View";
        this.c = "打开第三方应用";
        this.d = "Open";
        this.e = "下载第三方应用";
        this.f = "Install";
    }

    public MBSplashShakeView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.a = "浏览第三方应用";
        this.b = "View";
        this.c = "打开第三方应用";
        this.d = "Open";
        this.e = "下载第三方应用";
        this.f = "Install";
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:35:0x012d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void initView(String str) {
        byte b;
        boolean z = true;
        setOrientation(1);
        setGravity(1);
        ImageView imageView = new ImageView(getContext());
        imageView.setLayoutParams(new LinearLayout.LayoutParams(ae.b(getContext(), 80.0f), ae.b(getContext(), 80.0f)));
        int color = Color.parseColor("#60000000");
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(color);
        gradientDrawable.setCornerRadius(200);
        imageView.setBackground(gradientDrawable);
        this.g = new ImageView(getContext());
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(ae.b(getContext(), 40.0f), ae.b(getContext(), 40.0f));
        layoutParams.gravity = 17;
        this.g.setLayoutParams(layoutParams);
        this.g.setImageResource(getResources().getIdentifier("mbridge_cm_btn_shake", i.c, a.f().d()));
        FrameLayout frameLayout = new FrameLayout(getContext());
        frameLayout.setLayoutParams(new LinearLayout.LayoutParams(-2, -2));
        frameLayout.addView(imageView);
        frameLayout.addView(this.g);
        TextView textView = new TextView(getContext());
        LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(-2, -2);
        layoutParams2.topMargin = ae.b(getContext(), 10.0f);
        textView.setLayoutParams(layoutParams2);
        textView.setGravity(17);
        textView.setText("Shake your phone");
        textView.setTextSize(16.0f);
        textView.setTextColor(-1);
        if (!TextUtils.isEmpty(str)) {
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
            if (b != 0 && b != 1 && b != 2 && b != 3 && b != 4 && b != 5) {
                z = false;
            }
            if (!z) {
                str = getContext().getResources().getConfiguration().locale.getLanguage().contains(com.tkay.expressad.video.dynview.a.a.Q) ? "浏览第三方应用" : "View";
            }
        }
        TextView textView2 = new TextView(getContext());
        LinearLayout.LayoutParams layoutParams3 = new LinearLayout.LayoutParams(-2, -2);
        layoutParams3.topMargin = ae.b(getContext(), 5.0f);
        textView2.setLayoutParams(layoutParams3);
        textView2.setGravity(17);
        textView2.setText(str);
        textView2.setTextSize(12.0f);
        textView2.setTextColor(-1);
        addView(frameLayout);
        addView(textView);
        addView(textView2);
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.g != null) {
            RotateAnimation rotateAnimation = new RotateAnimation(-10.0f, 10.0f, 1, 0.5f, 1, 0.5f);
            this.h = rotateAnimation;
            rotateAnimation.setDuration(100L);
            this.h.setRepeatMode(2);
            this.h.setRepeatCount(-1);
            this.g.startAnimation(this.h);
        }
    }
}
