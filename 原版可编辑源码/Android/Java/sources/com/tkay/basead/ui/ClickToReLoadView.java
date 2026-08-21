package com.tkay.basead.ui;

import android.content.Context;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.tkay.core.common.l.h;
import com.tkay.expressad.foundation.h.i;

public class ClickToReLoadView extends LinearLayout {
    private ImageView a;
    private TextView b;
    private a c;
    private int d;

    public interface a {
        void a();
    }

    public ClickToReLoadView(Context context) {
        super(context);
        setOrientation(1);
        setGravity(17);
        this.d = h.a(context, 10.0f);
        ImageView imageView = new ImageView(context);
        this.a = imageView;
        imageView.setImageResource(h.a(context, "myoffer_webview_reload_icon", i.c));
        int iA = h.a(context, 30.0f);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(iA, iA);
        layoutParams.gravity = 17;
        layoutParams.bottomMargin = this.d;
        TextView textView = new TextView(context);
        this.b = textView;
        textView.setText(getResources().getText(h.a(context, "myoffer_webview_reload", i.g)));
        this.b.setTextColor(getResources().getColor(h.a(context, "color_reload_button", "color")));
        this.b.setBackgroundResource(h.a(context, "myoffer_webview_bg_reload_button", i.c));
        int iA2 = h.a(context, 9.0f);
        int iA3 = h.a(context, 5.0f);
        this.b.setPadding(iA2, iA3, iA2, iA3);
        LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(-2, -2);
        layoutParams2.gravity = 17;
        layoutParams2.topMargin = this.d;
        addView(this.a, layoutParams);
        addView(this.b, layoutParams2);
        this.b.setOnClickListener(new 1());
    }

    private void a(Context context) {
        setOrientation(1);
        setGravity(17);
        this.d = h.a(context, 10.0f);
        ImageView imageView = new ImageView(context);
        this.a = imageView;
        imageView.setImageResource(h.a(context, "myoffer_webview_reload_icon", i.c));
        int iA = h.a(context, 30.0f);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(iA, iA);
        layoutParams.gravity = 17;
        layoutParams.bottomMargin = this.d;
        TextView textView = new TextView(context);
        this.b = textView;
        textView.setText(getResources().getText(h.a(context, "myoffer_webview_reload", i.g)));
        this.b.setTextColor(getResources().getColor(h.a(context, "color_reload_button", "color")));
        this.b.setBackgroundResource(h.a(context, "myoffer_webview_bg_reload_button", i.c));
        int iA2 = h.a(context, 9.0f);
        int iA3 = h.a(context, 5.0f);
        this.b.setPadding(iA2, iA3, iA2, iA3);
        LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(-2, -2);
        layoutParams2.gravity = 17;
        layoutParams2.topMargin = this.d;
        addView(this.a, layoutParams);
        addView(this.b, layoutParams2);
    }

    final class 1 implements View.OnClickListener {
        long a;

        1() {
        }

        @Override
        public final void onClick(View view) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (jCurrentTimeMillis - this.a > 1000) {
                this.a = jCurrentTimeMillis;
                if (ClickToReLoadView.this.c != null) {
                    ClickToReLoadView.this.c.a();
                }
            }
        }
    }

    private void a() {
        this.b.setOnClickListener(new 1());
    }

    public void setListener(a aVar) {
        this.c = aVar;
    }

    @Override
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
        if (getHeight() < h.a(getContext(), 100.0f)) {
            try {
                this.a.setVisibility(8);
                LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) this.b.getLayoutParams();
                if (layoutParams != null) {
                    layoutParams.topMargin = 0;
                    this.b.setLayoutParams(layoutParams);
                }
            } catch (Throwable unused) {
            }
        }
    }

    private void b() {
        try {
            this.a.setVisibility(8);
            LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) this.b.getLayoutParams();
            if (layoutParams != null) {
                layoutParams.topMargin = 0;
                this.b.setLayoutParams(layoutParams);
            }
        } catch (Throwable unused) {
        }
    }
}
