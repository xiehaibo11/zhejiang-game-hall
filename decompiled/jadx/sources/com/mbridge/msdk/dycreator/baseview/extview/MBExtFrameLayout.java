package com.mbridge.msdk.dycreator.baseview.extview;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.FrameLayout;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.baseview.cusview.MBridgeFramLayout;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import com.mbridge.msdk.dycreator.e.a;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.g;
import com.mbridge.msdk.foundation.tools.z;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class MBExtFrameLayout extends MBridgeFramLayout implements InterBase {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Map<String, String> f3242a;
    private Map<String, Boolean> b;
    private String c;

    public MBExtFrameLayout(Context context) {
        super(context);
        this.c = "";
    }

    public MBExtFrameLayout(Context context, AttributeSet attributeSet) {
        super(context);
        this.c = "";
        try {
            this.f3242a = c.a(context, attributeSet);
            a.a(this, attributeSet);
            setLayoutParams(generateLayoutParams(attributeSet));
            c.a(this.f3242a, this);
        } catch (Exception e) {
            z.d("MBExtFrameLayout", e.getMessage());
        }
    }

    public MBExtFrameLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.c = "";
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup
    public FrameLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        FrameLayout.LayoutParams layoutParamsGenerateDefaultLayoutParams = generateDefaultLayoutParams();
        HashMap mapB = b.a().b();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = (com.mbridge.msdk.dycreator.a.c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (AnonymousClass1.f3243a[cVar.ordinal()]) {
                    case 1:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("f") || attributeValue.startsWith("m")) {
                            layoutParamsGenerateDefaultLayoutParams.width = -1;
                        } else if (attributeValue.startsWith("w")) {
                            layoutParamsGenerateDefaultLayoutParams.width = -2;
                        } else {
                            layoutParamsGenerateDefaultLayoutParams.width = b.a().b(attributeValue);
                        }
                        break;
                    case 2:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                            layoutParamsGenerateDefaultLayoutParams.width = -1;
                        } else if (attributeValue2.startsWith("w")) {
                            layoutParamsGenerateDefaultLayoutParams.width = -2;
                        } else {
                            layoutParamsGenerateDefaultLayoutParams.height = b.a().b(attributeValue2);
                        }
                        break;
                    case 3:
                        layoutParamsGenerateDefaultLayoutParams.gravity = b.a().c(attributeSet.getAttributeValue(i));
                        break;
                    case 4:
                        int iB = b.a().b(attributeSet.getAttributeValue(i));
                        layoutParamsGenerateDefaultLayoutParams.setMargins(iB, iB, iB, iB);
                        break;
                    case 5:
                        layoutParamsGenerateDefaultLayoutParams.leftMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case 6:
                        layoutParamsGenerateDefaultLayoutParams.rightMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case 7:
                        layoutParamsGenerateDefaultLayoutParams.topMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case 8:
                        layoutParamsGenerateDefaultLayoutParams.bottomMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                }
            }
        }
        return layoutParamsGenerateDefaultLayoutParams;
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.dycreator.baseview.extview.MBExtFrameLayout$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f3243a;

        static {
            int[] iArr = new int[com.mbridge.msdk.dycreator.a.c.values().length];
            f3243a = iArr;
            try {
                iArr[com.mbridge.msdk.dycreator.a.c.layout_width.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f3243a[com.mbridge.msdk.dycreator.a.c.layout_height.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f3243a[com.mbridge.msdk.dycreator.a.c.layout_gravity.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f3243a[com.mbridge.msdk.dycreator.a.c.layout_margin.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f3243a[com.mbridge.msdk.dycreator.a.c.layout_marginLeft.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                f3243a[com.mbridge.msdk.dycreator.a.c.layout_marginRight.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                f3243a[com.mbridge.msdk.dycreator.a.c.layout_marginTop.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                f3243a[com.mbridge.msdk.dycreator.a.c.layout_marginBottom.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
        }
    }

    @Override // com.mbridge.msdk.dycreator.baseview.cusview.MBridgeFramLayout, android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        Map<String, Boolean> map = this.b;
        if (map != null && map.containsKey("mbridgeAttached") && this.b.get("mbridgeAttached").booleanValue()) {
            new g.a("mbridgeAttached").a().a(this.c);
        }
    }

    @Override // com.mbridge.msdk.dycreator.baseview.cusview.MBridgeFramLayout, android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Map<String, Boolean> map = this.b;
        if (map != null && map.containsKey("mbridgeDetached") && this.b.get("mbridgeDetached").booleanValue()) {
            new g.a("mbridgeDetached").a().a(this.c);
        }
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getBindDataDes() {
        Map<String, String> map = this.f3242a;
        return (map == null || !map.containsKey("mbridgeData")) ? "" : this.f3242a.get("mbridgeData");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getActionDes() {
        Map<String, String> map = this.f3242a;
        return (map == null || !map.containsKey("mbridgeAction")) ? "" : this.f3242a.get("mbridgeAction");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getStrategyDes() {
        Map<String, String> map = this.f3242a;
        return (map == null || !map.containsKey("mbridgeStrategy")) ? "" : this.f3242a.get("mbridgeStrategy");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getEffectDes() {
        Map<String, String> map = this.f3242a;
        return (map == null || !map.containsKey("mbridgeEffect")) ? "" : this.f3242a.get("mbridgeEffect");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getReportDes() {
        Map<String, String> map = this.f3242a;
        return (map == null || !map.containsKey("mbridgeReport")) ? "" : this.f3242a.get("mbridgeReport");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public void setDynamicReport(String str, CampaignEx campaignEx) {
        this.b = c.a(str);
        if (campaignEx != null) {
            this.c = campaignEx.getCampaignUnitId();
        }
    }
}
