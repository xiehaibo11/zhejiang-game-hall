package com.kwad.components.ad.widget;

import android.content.Context;
import android.text.SpannableString;
import android.text.TextUtils;
import android.text.style.AbsoluteSizeSpan;
import android.text.style.ForegroundColorSpan;
import android.text.style.StrikethroughSpan;
import android.util.AttributeSet;
import android.widget.TextView;
import com.kwad.components.core.widget.d;
import com.kwad.components.core.widget.e;
import com.kwad.sdk.R;
import com.kwad.sdk.core.e.c;

public class KsPriceView extends TextView implements d {
    private static String Hx = "¥%s 到手约 ¥%s";
    private static String Hy = "¥%s  ¥%s";
    private static String Hz = "¥%s";
    private String HA;
    private String HB;
    private boolean HC;
    private a Hw;

    public static class a {
        private int HD;
        private int HE;
        private int HF;
        private int HG;
        private int HH;
        private int HI;

        public final a ag(int i) {
            this.HE = i;
            return this;
        }

        public final a ah(int i) {
            this.HH = i;
            return this;
        }

        public final a ai(int i) {
            this.HI = i;
            return this;
        }

        public final int lW() {
            return this.HF;
        }

        public final int lX() {
            return this.HH;
        }

        public final int lY() {
            return this.HG;
        }

        public final int lZ() {
            return this.HI;
        }

        public final int ma() {
            return this.HD;
        }

        public final int mb() {
            return this.HE;
        }
    }

    public KsPriceView(Context context) {
        super(context);
        this.Hw = new a();
        R(context);
    }

    public KsPriceView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.Hw = new a();
        R(context);
    }

    public KsPriceView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.Hw = new a();
        R(context);
    }

    public KsPriceView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        this.Hw = new a();
        R(context);
    }

    private void R(Context context) {
        setMaxLines(1);
        this.Hw.HF = context.getResources().getColor(R.color.ksad_reward_main_color);
        this.Hw.HG = context.getResources().getDimensionPixelSize(R.dimen.ksad_reward_order_price_size);
        this.Hw.HH = context.getResources().getColor(R.color.ksad_reward_original_price);
        this.Hw.HI = context.getResources().getDimensionPixelSize(R.dimen.ksad_reward_order_original_price_size);
        this.Hw.HD = context.getResources().getColor(R.color.ksad_reward_main_color);
        this.Hw.HE = context.getResources().getDimensionPixelSize(R.dimen.ksad_reward_order_price_size);
    }

    private static SpannableString a(String str, String str2, boolean z, a aVar) {
        String str3;
        if (str2 == null) {
            str3 = String.format(Hz, str);
        } else {
            str3 = String.format(z ? Hy : Hx, str, str2);
        }
        SpannableString spannableString = new SpannableString(str3);
        if (str3.startsWith("¥")) {
            spannableString.setSpan(new ForegroundColorSpan(aVar.ma()), 0, 1, 17);
            spannableString.setSpan(new AbsoluteSizeSpan(aVar.mb()), 0, 1, 17);
        }
        int iIndexOf = str3.indexOf(str);
        if (iIndexOf < 0) {
            return null;
        }
        int length = str.length() + iIndexOf;
        spannableString.setSpan(new ForegroundColorSpan(aVar.lW()), iIndexOf, length, 18);
        spannableString.setSpan(new AbsoluteSizeSpan(aVar.lY()), iIndexOf, length, 18);
        if (str2 != null) {
            int iLastIndexOf = str3.lastIndexOf(str2) - 1;
            int length2 = str2.length() + 1 + iLastIndexOf;
            spannableString.setSpan(new ForegroundColorSpan(aVar.lX()), iLastIndexOf, length2, 18);
            spannableString.setSpan(new AbsoluteSizeSpan(aVar.lZ()), iLastIndexOf, length2, 18);
            spannableString.setSpan(new StrikethroughSpan(), iLastIndexOf, length2, 18);
        }
        return spannableString;
    }

    @Override
    public final void a(e eVar) {
        this.Hw.HF = eVar.sv();
        d(this.HA, this.HB, this.HC);
    }

    public final void d(String str, String str2, boolean z) {
        if (TextUtils.isEmpty(str) && TextUtils.isEmpty(str2)) {
            return;
        }
        this.HA = str;
        this.HB = str2;
        this.HC = z;
        SpannableString spannableStringA = null;
        if (TextUtils.isEmpty(str2)) {
            this.HB = null;
        }
        if (str != null && str.startsWith("¥")) {
            str = str.replaceFirst("¥", "");
        }
        setTextColor(this.Hw.lW());
        try {
            spannableStringA = a(str, this.HB, z, this.Hw);
        } catch (Exception e) {
            c.printStackTraceOnly(e);
        }
        if (spannableStringA != null) {
            setText(spannableStringA);
        }
    }

    public final void f(String str, String str2) {
        d(str, str2, false);
    }

    public a getConfig() {
        return this.Hw;
    }
}
