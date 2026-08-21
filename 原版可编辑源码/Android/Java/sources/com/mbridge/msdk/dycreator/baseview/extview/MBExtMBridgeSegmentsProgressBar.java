package com.mbridge.msdk.dycreator.baseview.extview;

import android.content.Context;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.GradientDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.LinearLayout;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.baseview.GradientOrientationUtils;
import com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.g;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;
import java.util.Map;

public class MBExtMBridgeSegmentsProgressBar extends MBridgeSegmentsProgressBar implements InterBase {
    private Map<String, String> a;
    private Map<String, Boolean> b;
    private String c;

    @Override
    public void setDynamicReport(String str, CampaignEx campaignEx) {
    }

    public MBExtMBridgeSegmentsProgressBar(Context context) {
        super(context);
        this.c = "";
    }

    public MBExtMBridgeSegmentsProgressBar(Context context, AttributeSet attributeSet) {
        super(context);
        this.c = "";
        try {
            this.a = c.a(context, attributeSet);
            setAttributeSet(attributeSet);
            setLayoutParams(generateLayoutParams(attributeSet));
            c.a(this.a, this);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public MBExtMBridgeSegmentsProgressBar(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.c = "";
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
                        setBackgroundDrawable(new BitmapDrawable(BitmapFactory.decodeFile(getContext().getFilesDir().toString() + "/" + attributeValue2 + ".png")));
                    }
                } else if (i2 != 3) {
                    if (i2 == 4) {
                        String attributeValue3 = attributeSet.getAttributeValue(i);
                        if (!TextUtils.isEmpty(attributeValue3)) {
                            if (attributeValue3.equals("invisible")) {
                                setVisibility(4);
                            } else if (attributeValue3.equalsIgnoreCase("gone")) {
                                setVisibility(8);
                            }
                        }
                    } else if (i2 == 5) {
                        int iB = b.a().b(attributeSet.getAttributeValue(i));
                        setPadding(iB, iB, iB, iB);
                    }
                } else if ("horizontal".equalsIgnoreCase(attributeSet.getAttributeValue(i))) {
                    setOrientation(0);
                } else {
                    setOrientation(1);
                }
            }
        }
    }

    @Override
    public LinearLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        LinearLayout.LayoutParams layoutParamsGenerateDefaultLayoutParams = generateDefaultLayoutParams();
        HashMap mapB = b.a().b();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = (com.mbridge.msdk.dycreator.a.c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (cVar) {
                    case b:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("f") || attributeValue.startsWith("m")) {
                            layoutParamsGenerateDefaultLayoutParams.width = -1;
                        } else if (attributeValue.startsWith("wrap")) {
                            layoutParamsGenerateDefaultLayoutParams.width = -2;
                        } else {
                            layoutParamsGenerateDefaultLayoutParams.width = b.a().b(attributeValue);
                        }
                        break;
                    case c:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                            layoutParamsGenerateDefaultLayoutParams.height = -1;
                        } else if (attributeValue2.startsWith("wrap")) {
                            layoutParamsGenerateDefaultLayoutParams.height = -2;
                        } else {
                            layoutParamsGenerateDefaultLayoutParams.height = b.a().b(attributeValue2);
                        }
                        break;
                    case e:
                        layoutParamsGenerateDefaultLayoutParams.gravity = 1;
                        break;
                    case f:
                        layoutParamsGenerateDefaultLayoutParams.gravity = 16;
                        break;
                    case x:
                        layoutParamsGenerateDefaultLayoutParams.weight = attributeSet.getAttributeFloatValue(i, 0.0f);
                        break;
                    case U:
                        setGravity(b.a().c(attributeSet.getAttributeValue(i)));
                        break;
                    case q:
                        int iB = b.a().b(attributeSet.getAttributeValue(i));
                        layoutParamsGenerateDefaultLayoutParams.bottomMargin = iB;
                        layoutParamsGenerateDefaultLayoutParams.leftMargin = iB;
                        layoutParamsGenerateDefaultLayoutParams.rightMargin = iB;
                        layoutParamsGenerateDefaultLayoutParams.topMargin = iB;
                        break;
                    case l:
                        layoutParamsGenerateDefaultLayoutParams.leftMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case m:
                        layoutParamsGenerateDefaultLayoutParams.rightMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case n:
                        layoutParamsGenerateDefaultLayoutParams.topMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case o:
                        layoutParamsGenerateDefaultLayoutParams.bottomMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case r:
                        layoutParamsGenerateDefaultLayoutParams.gravity = b.a().c(attributeSet.getAttributeValue(i));
                        break;
                }
            }
        }
        return layoutParamsGenerateDefaultLayoutParams;
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
}
