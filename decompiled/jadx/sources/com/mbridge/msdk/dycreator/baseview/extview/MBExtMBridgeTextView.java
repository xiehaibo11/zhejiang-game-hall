package com.mbridge.msdk.dycreator.baseview.extview;

import android.content.Context;
import android.graphics.Color;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.text.InputFilter;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.baseview.GradientOrientationUtils;
import com.mbridge.msdk.dycreator.baseview.cusview.MBridgeTextView;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.g;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.tkay.expressad.foundation.h.i;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class MBExtMBridgeTextView extends MBridgeTextView implements InterBase {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Map<String, String> f3251a;
    private Map<String, Boolean> b;
    private String c;

    public MBExtMBridgeTextView(Context context) {
        super(context);
        this.c = "";
    }

    public MBExtMBridgeTextView(Context context, AttributeSet attributeSet) {
        super(context);
        this.c = "";
        try {
            this.f3251a = c.a(context, attributeSet);
            setAttributeSet(attributeSet);
            setLayoutParams(generateLayoutParams(attributeSet));
            c.a(this.f3251a, this);
        } catch (Exception e) {
            z.d("MBExtMBridgeTextView", e.getMessage());
        }
    }

    public MBExtMBridgeTextView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.c = "";
    }

    public void setAttributeSet(AttributeSet attributeSet) {
        String[] strArrSplit;
        HashMap<String, com.mbridge.msdk.dycreator.a.c> mapC = b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        int iB = 0;
        int iB2 = 0;
        int iB3 = 0;
        int iB4 = 0;
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                Log.d("setupview", cVar.toString());
                switch (AnonymousClass1.f3252a[cVar.ordinal()]) {
                    case 1:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("@+id/")) {
                            setId(attributeValue.substring(5).hashCode());
                        }
                        break;
                    case 2:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue2)) {
                            if (attributeValue2.startsWith("@string/")) {
                                setText(b.a().e(attributeSet.getAttributeValue(i)));
                            } else {
                                setText(attributeValue2);
                            }
                        }
                        break;
                    case 3:
                        String attributeValue3 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue3)) {
                            if (attributeValue3.equals(TtmlNode.END)) {
                                setEllipsize(TextUtils.TruncateAt.END);
                            }
                            if (attributeValue3.equals("start")) {
                                setEllipsize(TextUtils.TruncateAt.START);
                            }
                            if (attributeValue3.equals("middle")) {
                                setEllipsize(TextUtils.TruncateAt.MIDDLE);
                            }
                            if (attributeValue3.equals("marquee")) {
                                setEllipsize(TextUtils.TruncateAt.MARQUEE);
                            }
                        }
                        break;
                    case 4:
                        setSingleLine(attributeSet.getAttributeBooleanValue(i, false));
                        break;
                    case 5:
                        setLines(attributeSet.getAttributeIntValue(i, 1));
                        break;
                    case 6:
                        String attributeValue4 = attributeSet.getAttributeValue(i);
                        String strSubstring = attributeValue4.startsWith("@drawable/") ? attributeValue4.substring(10) : "";
                        if (!TextUtils.isEmpty(strSubstring)) {
                            Drawable drawable = getResources().getDrawable(s.a(a.f().j(), strSubstring, i.c));
                            drawable.setBounds(0, 0, ae.b(getContext(), 14.0f), ae.b(getContext(), 14.0f));
                            setCompoundDrawables(drawable, null, null, null);
                        }
                        break;
                    case 7:
                        setCompoundDrawablePadding(b.a().b(attributeSet.getAttributeValue(i)));
                        break;
                    case 8:
                        setHorizontalFadingEdgeEnabled(attributeSet.getAttributeBooleanValue(i, false));
                        break;
                    case 9:
                        setHorizontallyScrolling(attributeSet.getAttributeBooleanValue(i, false));
                        break;
                    case 10:
                        setTextColor(b.a().a(attributeSet.getAttributeValue(i)));
                        break;
                    case 11:
                        if (!TextUtils.isEmpty(attributeSet.getAttributeValue(i))) {
                            setTextSize(b.a().b(r10));
                        }
                        break;
                    case 12:
                        String attributeValue5 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue5)) {
                            if (attributeValue5.equals("invisible")) {
                                setVisibility(4);
                            } else if (attributeValue5.equalsIgnoreCase("gone")) {
                                setVisibility(8);
                            }
                        }
                        break;
                    case 13:
                        String attributeValue6 = attributeSet.getAttributeValue(i);
                        if (attributeValue6.startsWith("#")) {
                            try {
                                strArrSplit = attributeValue6.split(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
                            } catch (Exception unused) {
                                strArrSplit = null;
                            }
                            if (strArrSplit != null && strArrSplit.length <= 2) {
                                setBackgroundColor(b.a().a(attributeSet.getAttributeValue(i)));
                            } else if (strArrSplit != null && strArrSplit.length == 3) {
                                try {
                                    GradientDrawable gradientDrawable = new GradientDrawable(GradientOrientationUtils.getOrientation(strArrSplit[2]), new int[]{Color.parseColor(strArrSplit[0]), Color.parseColor(strArrSplit[1])});
                                    gradientDrawable.setGradientType(0);
                                    setBackground(gradientDrawable);
                                } catch (Exception unused2) {
                                    setBackgroundColor(b.a().a(attributeSet.getAttributeValue(i)));
                                }
                            } else {
                                setBackgroundColor(b.a().a(attributeSet.getAttributeValue(i)));
                            }
                        } else {
                            if (attributeValue6.startsWith("@drawable/")) {
                                attributeValue6 = attributeValue6.substring(10);
                            }
                            setBackgroundResource(getResources().getIdentifier(attributeValue6, i.c, getContext().getPackageName()));
                        }
                        break;
                    case 14:
                        if (TtmlNode.BOLD.equalsIgnoreCase(attributeSet.getAttributeValue(i))) {
                            setTypeface(Typeface.defaultFromStyle(1));
                        }
                        break;
                    case 15:
                        String attributeValue7 = attributeSet.getAttributeValue(i);
                        String strSubstring2 = attributeValue7.substring(attributeValue7.indexOf("/") + 1);
                        setTextAppearance(getContext(), b.a().d("R.style." + strSubstring2));
                        break;
                    case 16:
                        String attributeValue8 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue8)) {
                            CharSequence charSequence = (String) com.mbridge.msdk.dycreator.e.b.f3300a.get(attributeValue8.substring(8));
                            if (!TextUtils.isEmpty(charSequence)) {
                                setContentDescription(charSequence);
                            }
                        }
                        break;
                    case 17:
                        String attributeValue9 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue9)) {
                            String str = com.mbridge.msdk.dycreator.e.b.f3300a.get(attributeValue9.substring(8));
                            if (!TextUtils.isEmpty(str)) {
                                setTag(str);
                            }
                        }
                        break;
                    case 18:
                        setGravity(b.a().c(attributeSet.getAttributeValue(i)));
                        break;
                    case 19:
                        int iB5 = b.a().b(attributeSet.getAttributeValue(i));
                        setPadding(iB5, iB5, iB5, iB5);
                        break;
                    case 20:
                        iB4 = b.a().b(attributeSet.getAttributeValue(i));
                        setPadding(iB, iB4, iB2, iB3);
                        break;
                    case 21:
                        iB3 = b.a().b(attributeSet.getAttributeValue(i));
                        setPadding(iB, iB4, iB2, iB3);
                        break;
                    case 22:
                        iB = b.a().b(attributeSet.getAttributeValue(i));
                        setPadding(iB, iB4, iB2, iB3);
                        break;
                    case 23:
                        iB2 = b.a().b(attributeSet.getAttributeValue(i));
                        setPadding(iB, iB4, iB2, iB3);
                        break;
                    case 24:
                        setPadding(b.a().b(attributeSet.getAttributeValue(i)), iB4, iB2, iB3);
                        break;
                    case 25:
                        setPadding(iB, iB4, b.a().b(attributeSet.getAttributeValue(i)), iB3);
                        break;
                    case 26:
                        setFilters(new InputFilter[]{new InputFilter.LengthFilter(b.a().b(attributeSet.getAttributeValue(i)))});
                        break;
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.dycreator.baseview.extview.MBExtMBridgeTextView$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f3252a;

        static {
            int[] iArr = new int[com.mbridge.msdk.dycreator.a.c.values().length];
            f3252a = iArr;
            try {
                iArr[com.mbridge.msdk.dycreator.a.c.id.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.text.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.ellipsize.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.singleLine.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.lines.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.drawableLeft.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.drawablePadding.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.fadingEdge.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.scrollHorizontally.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.textColor.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.textSize.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.visibility.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.background.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.textStyle.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.style.ordinal()] = 15;
            } catch (NoSuchFieldError unused15) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.contentDescription.ordinal()] = 16;
            } catch (NoSuchFieldError unused16) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.tag.ordinal()] = 17;
            } catch (NoSuchFieldError unused17) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.gravity.ordinal()] = 18;
            } catch (NoSuchFieldError unused18) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.padding.ordinal()] = 19;
            } catch (NoSuchFieldError unused19) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.paddingTop.ordinal()] = 20;
            } catch (NoSuchFieldError unused20) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.paddingBottom.ordinal()] = 21;
            } catch (NoSuchFieldError unused21) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.paddingLeft.ordinal()] = 22;
            } catch (NoSuchFieldError unused22) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.paddingRight.ordinal()] = 23;
            } catch (NoSuchFieldError unused23) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.paddingStart.ordinal()] = 24;
            } catch (NoSuchFieldError unused24) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.paddingEnd.ordinal()] = 25;
            } catch (NoSuchFieldError unused25) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.maxLength.ordinal()] = 26;
            } catch (NoSuchFieldError unused26) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.layout_width.ordinal()] = 27;
            } catch (NoSuchFieldError unused27) {
            }
            try {
                f3252a[com.mbridge.msdk.dycreator.a.c.layout_height.ordinal()] = 28;
            } catch (NoSuchFieldError unused28) {
            }
        }
    }

    public ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        HashMap mapB = b.a().b();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = (com.mbridge.msdk.dycreator.a.c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = AnonymousClass1.f3252a[cVar.ordinal()];
                if (i2 == 27) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (attributeValue.startsWith("f") || attributeValue.startsWith("m")) {
                        layoutParams.width = -1;
                    } else if (attributeValue.startsWith("wrap")) {
                        layoutParams.width = -2;
                    } else {
                        layoutParams.width = b.a().b(attributeValue);
                    }
                } else if (i2 == 28) {
                    String attributeValue2 = attributeSet.getAttributeValue(i);
                    if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                        layoutParams.height = -1;
                    } else if (attributeValue2.startsWith("wrap")) {
                        layoutParams.height = -2;
                    } else {
                        layoutParams.height = b.a().b(attributeValue2);
                    }
                }
            }
        }
        return layoutParams;
    }

    @Override // com.mbridge.msdk.dycreator.baseview.cusview.MBridgeTextView, android.widget.TextView, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        Map<String, Boolean> map = this.b;
        if (map != null && map.containsKey("mbridgeAttached") && this.b.get("mbridgeAttached").booleanValue()) {
            new g.a("mbridgeAttached").a().a(this.c);
        }
    }

    @Override // com.mbridge.msdk.dycreator.baseview.cusview.MBridgeTextView, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Map<String, Boolean> map = this.b;
        if (map != null && map.containsKey("mbridgeDetached") && this.b.get("mbridgeDetached").booleanValue()) {
            new g.a("mbridgeDetached").a().a(this.c);
        }
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getBindDataDes() {
        Map<String, String> map = this.f3251a;
        return (map == null || !map.containsKey("mbridgeData")) ? "" : this.f3251a.get("mbridgeData");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getActionDes() {
        Map<String, String> map = this.f3251a;
        return (map == null || !map.containsKey("mbridgeAction")) ? "" : this.f3251a.get("mbridgeAction");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getStrategyDes() {
        Map<String, String> map = this.f3251a;
        return (map == null || !map.containsKey("mbridgeStrategy")) ? "" : this.f3251a.get("mbridgeStrategy");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getEffectDes() {
        Map<String, String> map = this.f3251a;
        return (map == null || !map.containsKey("mbridgeEffect")) ? "" : this.f3251a.get("mbridgeEffect");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getReportDes() {
        Map<String, String> map = this.f3251a;
        return (map == null || !map.containsKey("mbridgeReport")) ? "" : this.f3251a.get("mbridgeReport");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public void setDynamicReport(String str, CampaignEx campaignEx) {
        this.b = c.a(str);
        if (campaignEx != null) {
            this.c = campaignEx.getCampaignUnitId();
        }
    }
}
