package com.mbridge.msdk.dycreator.baseview.extview;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.widget.RelativeLayout;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.baseview.GradientOrientationUtils;
import com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.h.i;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;
import java.util.Map;

public class MBExtMBridgeBaitClickView extends MBridgeBaitClickView implements InterBase {
    private Map<String, String> a;

    @Override
    public void setDynamicReport(String str, CampaignEx campaignEx) {
    }

    public MBExtMBridgeBaitClickView(Context context) {
        super(context);
    }

    public MBExtMBridgeBaitClickView(Context context, AttributeSet attributeSet) {
        super(context);
        try {
            this.a = c.a(context, attributeSet);
            setAttributeSet(attributeSet);
            setLayoutParams(generateLayoutParams(attributeSet));
            c.a(this.a, this);
        } catch (Exception e) {
            z.d("MBExtMBridgeBaitClickView", e.getMessage());
        }
    }

    public MBExtMBridgeBaitClickView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public void setAttributeSet(AttributeSet attributeSet) {
        String[] strArrSplit;
        HashMap<String, com.mbridge.msdk.dycreator.a.c> mapC = b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = 1.a[cVar.ordinal()];
                if (i2 == 1) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (attributeValue.startsWith("@+id/")) {
                        setId(attributeValue.substring(5).hashCode());
                    }
                } else if (i2 == 2) {
                    Log.i("litongtest", "设置背景颜色");
                    String attributeValue2 = attributeSet.getAttributeValue(i);
                    if (attributeValue2.startsWith("#")) {
                        try {
                            strArrSplit = attributeValue2.split(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
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
                        if (attributeValue2.startsWith("@drawable/")) {
                            attributeValue2 = attributeValue2.substring(10);
                        }
                        setBackgroundResource(s.a(a.f().j(), attributeValue2, i.c));
                    }
                } else if (i2 == 3) {
                    int iB = b.a().b(attributeSet.getAttributeValue(i));
                    setPadding(iB, iB, iB, iB);
                } else if (i2 == 4) {
                    setGravity(b.a().c(attributeSet.getAttributeValue(i)));
                } else if (i2 == 5) {
                    String attributeValue3 = attributeSet.getAttributeValue(i);
                    if (!TextUtils.isEmpty(attributeValue3)) {
                        if (attributeValue3.equals("invisible")) {
                            setVisibility(4);
                        } else if (attributeValue3.equalsIgnoreCase("gone")) {
                            setVisibility(8);
                        }
                    }
                }
            }
        }
    }

    @Override
    public RelativeLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(0, 0);
        HashMap mapB = b.a().b();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = (com.mbridge.msdk.dycreator.a.c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (cVar) {
                    case b:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("fill") || attributeValue.startsWith("match")) {
                            layoutParams.width = -1;
                        } else if (attributeValue.startsWith("w")) {
                            layoutParams.width = -2;
                        } else {
                            layoutParams.width = b.a().b(attributeValue);
                        }
                        break;
                    case c:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (attributeValue2.startsWith("fill") || attributeValue2.startsWith("match")) {
                            layoutParams.height = -1;
                        } else if (attributeValue2.startsWith("wrap")) {
                            layoutParams.height = -2;
                        } else {
                            layoutParams.height = b.a().b(attributeValue2);
                        }
                        break;
                    case e:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(14, -1);
                        }
                        break;
                    case u:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(12, -1);
                        }
                        break;
                    case v:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(10, -1);
                        }
                        break;
                    case f:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(15, -1);
                        }
                        break;
                    case g:
                        String attributeValue3 = attributeSet.getAttributeValue(i);
                        if (attributeValue3.startsWith("@+id")) {
                            layoutParams.addRule(3, attributeValue3.substring(5).hashCode());
                        }
                        break;
                    case h:
                        String attributeValue4 = attributeSet.getAttributeValue(i);
                        if (attributeValue4.startsWith("@+id")) {
                            layoutParams.addRule(2, attributeValue4.substring(5).hashCode());
                        }
                        break;
                    case j:
                        String attributeValue5 = attributeSet.getAttributeValue(i);
                        if (attributeValue5.startsWith("@+id")) {
                            layoutParams.addRule(0, attributeValue5.substring(5).hashCode());
                        }
                        break;
                    case i:
                        String attributeValue6 = attributeSet.getAttributeValue(i);
                        if (attributeValue6.startsWith("@+id")) {
                            layoutParams.addRule(1, attributeValue6.substring(5).hashCode());
                        }
                        break;
                    case k:
                        String attributeValue7 = attributeSet.getAttributeValue(i);
                        if (attributeValue7.startsWith("@+id")) {
                            layoutParams.addRule(17, attributeValue7.substring(5).hashCode());
                        }
                        break;
                    case q:
                        int iB = b.a().b(attributeSet.getAttributeValue(i));
                        layoutParams.setMargins(iB, iB, iB, iB);
                        break;
                    case l:
                        layoutParams.leftMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case m:
                        layoutParams.rightMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case n:
                        layoutParams.topMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case o:
                        layoutParams.bottomMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case s:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(11, -1);
                        }
                        break;
                    case t:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(9, -1);
                        }
                        break;
                    case ad:
                        String attributeValue8 = attributeSet.getAttributeValue(i);
                        if (attributeValue8.startsWith("@+id")) {
                            layoutParams.addRule(6, attributeValue8.substring(5).hashCode());
                        }
                        break;
                    case af:
                        String attributeValue9 = attributeSet.getAttributeValue(i);
                        if (attributeValue9.startsWith("@+id")) {
                            layoutParams.addRule(5, attributeValue9.substring(5).hashCode());
                        }
                        break;
                    case ag:
                        String attributeValue10 = attributeSet.getAttributeValue(i);
                        if (attributeValue10.startsWith("@+id")) {
                            layoutParams.addRule(7, attributeValue10.substring(5).hashCode());
                        }
                        break;
                    case ac:
                        String attributeValue11 = attributeSet.getAttributeValue(i);
                        if (attributeValue11.startsWith("@+id")) {
                            layoutParams.addRule(8, attributeValue11.substring(5).hashCode());
                        }
                        break;
                    case ae:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(13, -1);
                        }
                        break;
                    case y:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(21, -1);
                        }
                        break;
                }
            }
        }
        return layoutParams;
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
}
