package com.sigmob.sdk.base.views;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.os.Build;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.mta.PointCategory;

/* JADX INFO: loaded from: classes3.dex */
public class w extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f4990a;
    boolean b;
    private final TextView c;
    private final TextView d;
    private int e;

    public w(Context context) {
        super(context);
        this.f4990a = 0;
        this.b = false;
        this.f4990a = Dips.asIntPixels(30.0f, context);
        ViewGroup.LayoutParams layoutParams = new RelativeLayout.LayoutParams(this.f4990a, -2);
        this.c = new TextView(context);
        this.d = new TextView(context);
        setLayoutParams(layoutParams);
        int i = this.f4990a;
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(i, i);
        layoutParams2.addRule(9);
        if (Build.VERSION.SDK_INT >= 17) {
            layoutParams2.addRule(20);
        }
        this.d.setTextColor(-16777216);
        this.d.setId(ClientMetadata.generateViewId());
        this.d.setTextSize(1, 14.0f);
        this.d.setGravity(17);
        addView(this.d, layoutParams2);
        int i2 = this.f4990a / 2;
        int color = Color.parseColor("#ffffff");
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(color);
        gradientDrawable.setCornerRadius(i2);
        gradientDrawable.setAlpha(102);
        setBackground(gradientDrawable);
        setContentDescription(PointCategory.SKIP);
    }

    public void a(int i) {
        this.e = i;
        if (!this.b) {
            if (i > 0) {
                this.d.setText(String.valueOf(i));
            }
        } else if (i > 0) {
            this.c.setText(com.sigmob.sdk.base.d.d(Integer.valueOf(i)));
            if (this.c.getVisibility() != 0) {
                this.c.setVisibility(0);
            }
        }
    }

    public boolean a() {
        return this.b;
    }

    public void b() {
        if (this.b) {
            return;
        }
        this.b = true;
        if (1 != 0) {
            SigmobLog.d("show skip widget");
        }
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, this.f4990a);
        this.c.setTextColor(-16777216);
        this.c.setTextSize(1, 14.0f);
        this.c.setGravity(17);
        this.c.setVisibility(0);
        this.d.setVisibility(8);
        TextView textView = this.c;
        int i = this.f4990a;
        textView.setPadding((int) (i / 3.0f), 0, (int) (i / 3.0f), 0);
        int i2 = this.e;
        if (i2 > 0) {
            this.c.setText(com.sigmob.sdk.base.d.d(Integer.valueOf(i2)));
        } else {
            this.c.setText(com.sigmob.sdk.base.d.h());
        }
        addView(this.c, layoutParams);
    }

    public int getTime() {
        return this.e;
    }
}
