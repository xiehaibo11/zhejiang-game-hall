package com.mbridge.msdk.foundation.webview;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import com.mbridge.msdk.foundation.tools.ae;
import com.tkay.expressad.foundation.h.i;

public class ToolBar extends LinearLayout {
    public ToolBar(Context context) {
        super(context);
        a();
    }

    public ToolBar(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        a();
    }

    public void setOnItemClickListener(View.OnClickListener onClickListener) {
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            getChildAt(i).setOnClickListener(onClickListener);
        }
    }

    public View getItem(String str) {
        return findViewWithTag(str);
    }

    private void a() {
        setOrientation(0);
        try {
            int iB = ae.b(getContext(), 10.0f);
            setPadding(0, iB, 0, iB);
        } catch (Exception unused) {
        }
        try {
            ImageView imageView = (ImageView) b();
            imageView.setTag("backward");
            imageView.setImageDrawable(getResources().getDrawable(getResources().getIdentifier("mbridge_cm_backward", i.c, com.mbridge.msdk.foundation.controller.a.f().d())));
            addView(imageView);
        } catch (Exception unused2) {
        }
        try {
            ImageView imageView2 = (ImageView) b();
            imageView2.setTag("forward");
            imageView2.setImageDrawable(getResources().getDrawable(getResources().getIdentifier("mbridge_cm_forward", i.c, com.mbridge.msdk.foundation.controller.a.f().d())));
            addView(imageView2);
        } catch (Exception unused3) {
        }
        try {
            ImageView imageView3 = (ImageView) b();
            imageView3.setTag("refresh");
            imageView3.setImageDrawable(getResources().getDrawable(getResources().getIdentifier("mbridge_cm_refresh", i.c, com.mbridge.msdk.foundation.controller.a.f().d())));
            addView(imageView3);
        } catch (Exception unused4) {
        }
        try {
            ImageView imageView4 = (ImageView) b();
            imageView4.setTag("exits");
            imageView4.setImageDrawable(getResources().getDrawable(getResources().getIdentifier("mbridge_cm_exits", i.c, com.mbridge.msdk.foundation.controller.a.f().d())));
            addView(imageView4);
        } catch (Exception unused5) {
        }
    }

    private View b() {
        ImageView imageView = new ImageView(getContext());
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -1);
        layoutParams.weight = 1.0f;
        imageView.setLayoutParams(layoutParams);
        imageView.setClickable(true);
        return imageView;
    }
}
