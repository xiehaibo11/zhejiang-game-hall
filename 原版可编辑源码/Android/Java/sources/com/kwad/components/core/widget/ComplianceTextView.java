package com.kwad.components.core.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.os.Build;
import android.support.v4.content.ContextCompat;
import android.text.Layout;
import android.text.SpannableStringBuilder;
import android.text.StaticLayout;
import android.text.TextPaint;
import android.text.TextUtils;
import android.text.method.LinkMovementMethod;
import android.text.style.ClickableSpan;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ai;

public class ComplianceTextView extends TextView {
    private String XW;
    private String XX;
    private String XY;
    private String XZ;
    private String Ya;
    private int Yb;
    private String Yc;
    private int Yd;
    private boolean Ye;
    private AdTemplate mAdTemplate;

    public ComplianceTextView(Context context) {
        this(context, null);
    }

    public ComplianceTextView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public ComplianceTextView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.Yb = 154;
        init(context, attributeSet);
    }

    private void a(String str, String str2, String str3) {
        StringBuilder sb;
        String str4;
        if (TextUtils.isEmpty(str)) {
            setVisibility(8);
            return;
        }
        StringBuilder sb2 = new StringBuilder();
        if (!TextUtils.isEmpty(this.XZ) || !TextUtils.isEmpty(this.Ya)) {
            sb2.append("  ");
        }
        if (!TextUtils.isEmpty(this.XZ)) {
            sb2.append(str2);
        }
        if (!TextUtils.isEmpty(this.XZ) && !TextUtils.isEmpty(this.Ya)) {
            sb2.append(" | ");
        }
        if (!TextUtils.isEmpty(this.Ya)) {
            sb2.append(str3);
        }
        getContext();
        int width = ((!ai.IN() ? this.Yb : getWidth()) - getPaddingLeft()) - getPaddingRight();
        if (width < 0) {
            return;
        }
        if (a(str, sb2.toString(), width)) {
            sb = new StringBuilder();
            sb.append(str);
            str4 = "\n";
        } else {
            sb = new StringBuilder();
            sb.append(str);
            str4 = "   ";
        }
        sb.append(str4);
        this.Yc = sb.toString();
        l(str2, str3);
        requestLayout();
    }

    private boolean a(String str, String str2, int i) {
        StaticLayout staticLayout;
        StaticLayout staticLayoutBuild;
        String str3 = str + str2;
        if (Build.VERSION.SDK_INT >= 23) {
            staticLayoutBuild = StaticLayout.Builder.obtain(str, 0, str.length(), getPaint(), i).build();
            staticLayout = StaticLayout.Builder.obtain(str3, 0, str3.length(), getPaint(), i).build();
        } else {
            StaticLayout staticLayout2 = new StaticLayout(str, getPaint(), i, Layout.Alignment.ALIGN_NORMAL, 0.0f, 0.0f, true);
            staticLayout = new StaticLayout(str3, getPaint(), i, Layout.Alignment.ALIGN_NORMAL, 0.0f, 0.0f, true);
            staticLayoutBuild = staticLayout2;
        }
        return staticLayout.getLineCount() > staticLayoutBuild.getLineCount();
    }

    private void init(Context context, AttributeSet attributeSet) {
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, R.styleable.ksad_ComplianceTextView);
        this.Yb = typedArrayObtainStyledAttributes.getDimensionPixelOffset(R.styleable.ksad_ComplianceTextView_ksad_width_in_landscape, 154);
        this.Yd = typedArrayObtainStyledAttributes.getColor(R.styleable.ksad_ComplianceTextView_ksad_privacy_color, getResources().getColor(R.color.ksad_default_privacy_link_color));
        this.Ye = typedArrayObtainStyledAttributes.getBoolean(R.styleable.ksad_ComplianceTextView_ksad_show_clickable_underline, true);
        if (getBackground() == null) {
            setBackground(ContextCompat.getDrawable(context, R.drawable.ksad_compliance_view_bg));
        }
        typedArrayObtainStyledAttributes.recycle();
    }

    private void l(final String str, final String str2) {
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder();
        spannableStringBuilder.append((CharSequence) this.Yc);
        if (!TextUtils.isEmpty(this.XZ)) {
            int length = spannableStringBuilder.length();
            spannableStringBuilder.append((CharSequence) str);
            spannableStringBuilder.setSpan(new ClickableSpan() {
                @Override
                public final void onClick(View view) {
                    AdWebViewActivityProxy.launch(ComplianceTextView.this.getContext(), new AdWebViewActivityProxy.a.a().aq(str).ar(ComplianceTextView.this.XZ).ay(true).S(ComplianceTextView.this.mAdTemplate).oA());
                }

                @Override
                public final void updateDrawState(TextPaint textPaint) {
                    super.updateDrawState(textPaint);
                    textPaint.setColor(ComplianceTextView.this.Yd);
                    textPaint.setUnderlineText(ComplianceTextView.this.Ye);
                }
            }, length, spannableStringBuilder.length(), 33);
        }
        if (!TextUtils.isEmpty(this.XZ) && !TextUtils.isEmpty(this.Ya)) {
            spannableStringBuilder.append((CharSequence) " | ");
        }
        if (!TextUtils.isEmpty(this.Ya)) {
            int length2 = spannableStringBuilder.length();
            spannableStringBuilder.append((CharSequence) str2);
            spannableStringBuilder.setSpan(new ClickableSpan() {
                @Override
                public final void onClick(View view) {
                    AdWebViewActivityProxy.launch(ComplianceTextView.this.getContext(), new AdWebViewActivityProxy.a.a().aq(str2).ar(ComplianceTextView.this.Ya).ay(true).S(ComplianceTextView.this.mAdTemplate).oA());
                }

                @Override
                public final void updateDrawState(TextPaint textPaint) {
                    super.updateDrawState(textPaint);
                    textPaint.setColor(ComplianceTextView.this.Yd);
                    textPaint.setUnderlineText(ComplianceTextView.this.Ye);
                }
            }, length2, spannableStringBuilder.length(), 33);
        }
        spannableStringBuilder.append((CharSequence) " ");
        setMovementMethod(LinkMovementMethod.getInstance());
        setHighlightColor(ContextCompat.getColor(getContext(), R.color.ksad_translucent));
        setText(spannableStringBuilder);
    }

    public void setAdTemplate(AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        StringBuilder sb = new StringBuilder();
        if (!TextUtils.isEmpty(adInfoCg.downloadSafeInfo.appName)) {
            sb.append("应用名：");
            sb.append(adInfoCg.downloadSafeInfo.appName);
            sb.append(" ");
        }
        if (!TextUtils.isEmpty(adInfoCg.downloadSafeInfo.appVersion)) {
            sb.append("版本号：");
            sb.append(adInfoCg.downloadSafeInfo.appVersion);
            sb.append(" ");
        }
        if (adInfoCg.downloadSafeInfo.packageSize > 0) {
            sb.append("应用大小：");
            sb.append(com.kwad.components.core.t.e.a(adInfoCg.downloadSafeInfo.packageSize, true));
            sb.append(" ");
        }
        if (!TextUtils.isEmpty(adInfoCg.downloadSafeInfo.corporationName)) {
            sb.append("开发者：");
            sb.append(adInfoCg.downloadSafeInfo.corporationName);
            sb.append(" ");
        }
        this.XW = sb.toString();
        this.XX = "权限信息";
        this.XY = "隐私政策";
        this.XZ = adInfoCg.downloadSafeInfo.appPermissionInfoUrl;
        this.Ya = adInfoCg.downloadSafeInfo.appPrivacyUrl;
        if (this.Yb > 0) {
            ViewGroup.LayoutParams layoutParams = getLayoutParams();
            getContext();
            layoutParams.width = !ai.IN() ? com.kwad.sdk.d.a.a.a(getContext(), this.Yb) : -1;
            setLayoutParams(layoutParams);
        }
        post(new Runnable() {
            @Override
            public final void run() {
                ComplianceTextView complianceTextView = ComplianceTextView.this;
                complianceTextView.a(complianceTextView.XW, ComplianceTextView.this.XX, ComplianceTextView.this.XY);
            }
        });
    }
}
