package com.sigmob.sdk.base.views;

import android.content.Context;
import android.graphics.Color;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.czhj.sdk.common.utils.Dips;

public class d extends RelativeLayout {
    private final int a;
    private final int b;
    private final int c;
    private final int d;
    private final int e;
    private final int f;
    private final int g;
    private Button h;
    private Button i;
    private int j;
    private TextView k;
    private com.sigmob.sdk.videoAd.e l;

    public interface a {
        void a();

        void b();
    }

    public d(Context context, com.sigmob.sdk.videoAd.e eVar) {
        super(context);
        this.l = null;
        this.l = eVar;
        this.a = Dips.dipsToIntPixels(10.0f, context);
        this.b = Dips.dipsToIntPixels(3.0f, context);
        int iDipsToIntPixels = Dips.dipsToIntPixels(200.0f, context);
        this.c = iDipsToIntPixels;
        this.f = (int) (((double) (iDipsToIntPixels * 16.0f)) / 9.0d);
        this.d = Dips.dipsToIntPixels(50.0f, context);
        Dips.dipsToIntPixels(35.0f, context);
        this.e = Dips.dipsToIntPixels(100.0f, context);
        this.g = this.d + this.b;
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        setBackgroundColor(Color.parseColor("#50000000"));
        setLayoutParams(layoutParams);
        e(context);
    }

    private TextView a(Context context) {
        TextView textView = new TextView(context);
        int i = this.a;
        textView.setPadding(i * 3, i * 2, 0, 0);
        textView.setText(this.l.a());
        textView.setTextColor(n.a);
        textView.setTextSize((float) (((double) this.a) * 0.7d));
        return textView;
    }

    private TextView b(Context context) {
        TextView textView = new TextView(context);
        this.k = textView;
        int i = this.a;
        textView.setPadding(i * 3, i * 2, 0, 0);
        this.k.setTextColor(n.b);
        this.k.setTextSize((float) (((double) this.a) * 0.55d));
        this.k.setMaxLines(2);
        return this.k;
    }

    private Button c(Context context) {
        Button button = new Button(context);
        button.setText(this.l.c());
        button.setTextColor(n.a);
        button.setTextSize((float) (((double) this.a) * 0.6d));
        button.setBackgroundColor(0);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(this.e, this.d + this.a);
        int i = this.a;
        layoutParams.setMargins(i * 6, 0, i, 0);
        button.setLayoutParams(layoutParams);
        return button;
    }

    private Button d(Context context) {
        Button button = new Button(context);
        button.setText(this.l.d());
        int i = this.e;
        int i2 = this.a;
        button.setLayoutParams(new LinearLayout.LayoutParams(i + i2, this.d + i2));
        button.setTextColor(-1);
        button.setBackgroundColor(0);
        button.setTextSize((float) (((double) this.a) * 0.6d));
        u.a(button, n.a, this.b, Color.parseColor("#66000000"), this.a, 0, 0);
        return button;
    }

    private void e(Context context) {
        RelativeLayout relativeLayout = new RelativeLayout(context);
        LinearLayout linearLayout = new LinearLayout(context);
        linearLayout.setOrientation(1);
        linearLayout.addView(a(context), new RelativeLayout.LayoutParams(-2, -2));
        linearLayout.addView(b(context), new RelativeLayout.LayoutParams(-2, -2));
        u.a(linearLayout, Color.parseColor("#FFFFFF"), this.b, Color.parseColor("#66000000"), this.a, 0, 0);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(this.f, this.c);
        layoutParams.addRule(13);
        relativeLayout.setLayoutParams(layoutParams);
        relativeLayout.addView(linearLayout, new RelativeLayout.LayoutParams(-1, -1));
        LinearLayout linearLayout2 = new LinearLayout(context);
        linearLayout2.setOrientation(0);
        Button buttonC = c(context);
        this.h = buttonC;
        linearLayout2.addView(buttonC);
        Button buttonD = d(context);
        this.i = buttonD;
        linearLayout2.addView(buttonD);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-1, this.g);
        layoutParams2.setMargins(0, 0, 0, this.a * 2);
        layoutParams2.addRule(12);
        relativeLayout.addView(linearLayout2, layoutParams2);
        addView(relativeLayout);
    }

    public void setDialogListener(final a aVar) {
        Button button = this.h;
        if (button != null) {
            button.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View view) {
                    aVar.a();
                }
            });
        }
        Button button2 = this.i;
        if (button2 != null) {
            button2.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View view) {
                    aVar.b();
                }
            });
        }
    }

    @Override
    public void setVisibility(int i) {
        super.setVisibility(i);
    }

    public void setduration(int i) {
        this.j = i;
        TextView textView = this.k;
        if (textView != null) {
            textView.setText(this.l.b().replace("_SEC_", String.valueOf(this.j)));
        }
    }
}
