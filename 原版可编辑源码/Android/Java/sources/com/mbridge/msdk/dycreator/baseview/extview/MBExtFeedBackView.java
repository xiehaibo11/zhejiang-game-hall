package com.mbridge.msdk.dycreator.baseview.extview;

import android.content.Context;
import android.graphics.Typeface;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.g;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.mbridge.msdk.widget.FeedBackButton;
import com.tkay.expressad.foundation.h.i;
import java.util.HashMap;
import java.util.Map;

public class MBExtFeedBackView extends FeedBackButton implements InterBase {
    private Map<String, String> a;
    private Map<String, Boolean> b;
    private String c;

    public MBExtFeedBackView(Context context) {
        super(context);
        this.c = "";
    }

    public MBExtFeedBackView(Context context, AttributeSet attributeSet) {
        super(context);
        this.c = "";
        try {
            this.a = c.a(context, attributeSet);
            setAttributeSet(attributeSet);
            setLayoutParams(generateLayoutParams(attributeSet));
            c.a(this.a, this);
        } catch (Exception e) {
            z.d("MBExtFeedBackView", e.getMessage());
        }
    }

    public MBExtFeedBackView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.c = "";
    }

    public void setAttributeSet(AttributeSet attributeSet) {
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
                switch (1.a[cVar.ordinal()]) {
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
                            setTextSize(b.a().b(r8));
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
                            setBackgroundColor(b.a().a(attributeSet.getAttributeValue(i)));
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
                            CharSequence charSequence = (String) com.mbridge.msdk.dycreator.e.b.a.get(attributeValue8.substring(8));
                            if (!TextUtils.isEmpty(charSequence)) {
                                setContentDescription(charSequence);
                            }
                        }
                        break;
                    case 17:
                        String attributeValue9 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue9)) {
                            String str = com.mbridge.msdk.dycreator.e.b.a.get(attributeValue9.substring(8));
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
                }
            }
        }
    }

    static class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[com.mbridge.msdk.dycreator.a.c.values().length];
            a = iArr;
            try {
                iArr[com.mbridge.msdk.dycreator.a.c.a.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.G.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.H.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.I.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.K.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.aa.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.ab.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.L.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.M.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.N.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.O.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.P.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.Q.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.R.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.S.ordinal()] = 15;
            } catch (NoSuchFieldError unused15) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.W.ordinal()] = 16;
            } catch (NoSuchFieldError unused16) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.Y.ordinal()] = 17;
            } catch (NoSuchFieldError unused17) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.U.ordinal()] = 18;
            } catch (NoSuchFieldError unused18) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.ah.ordinal()] = 19;
            } catch (NoSuchFieldError unused19) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.ai.ordinal()] = 20;
            } catch (NoSuchFieldError unused20) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.aj.ordinal()] = 21;
            } catch (NoSuchFieldError unused21) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.ak.ordinal()] = 22;
            } catch (NoSuchFieldError unused22) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.al.ordinal()] = 23;
            } catch (NoSuchFieldError unused23) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.am.ordinal()] = 24;
            } catch (NoSuchFieldError unused24) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.an.ordinal()] = 25;
            } catch (NoSuchFieldError unused25) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.b.ordinal()] = 26;
            } catch (NoSuchFieldError unused26) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.c.ordinal()] = 27;
            } catch (NoSuchFieldError unused27) {
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
                int i2 = 1.a[cVar.ordinal()];
                if (i2 == 26) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (attributeValue.startsWith("f") || attributeValue.startsWith("m")) {
                        layoutParams.width = -1;
                    } else if (attributeValue.startsWith("wrap")) {
                        layoutParams.width = -2;
                    } else {
                        layoutParams.width = b.a().b(attributeValue);
                    }
                } else if (i2 == 27) {
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

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        Map<String, Boolean> map = this.b;
        if (map != null && map.containsKey("mbridgeAttached") && this.b.get("mbridgeAttached").booleanValue()) {
            new g.a("mbridgeAttached").a().a(this.c);
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Map<String, Boolean> map = this.b;
        if (map != null && map.containsKey("mbridgeDetached") && this.b.get("mbridgeDetached").booleanValue()) {
            new g.a("mbridgeDetached").a().a(this.c);
        }
    }

    @Override
    public String getBindDataDes() {
        Map<String, String> map = this.a;
        return (map == null || !map.containsKey("mbridgeData")) ? "" : this.a.get("mbridgeData");
    }

    @Override
    public String getActionDes() {
        Map<String, String> map = this.a;
        return (map == null || !map.containsKey("mbridgeAction")) ? "" : this.a.get("mbridgeAction");
    }

    @Override
    public String getStrategyDes() {
        Map<String, String> map = this.a;
        return (map == null || !map.containsKey("mbridgeStrategy")) ? "" : this.a.get("mbridgeStrategy");
    }

    @Override
    public String getEffectDes() {
        Map<String, String> map = this.a;
        return (map == null || !map.containsKey("mbridgeEffect")) ? "" : this.a.get("mbridgeEffect");
    }

    @Override
    public String getReportDes() {
        Map<String, String> map = this.a;
        return (map == null || !map.containsKey("mbridgeReport")) ? "" : this.a.get("mbridgeReport");
    }

    @Override
    public void setDynamicReport(String str, CampaignEx campaignEx) {
        this.b = c.a(str);
        if (campaignEx != null) {
            this.c = campaignEx.getCampaignUnitId();
        }
    }
}
