package com.mbridge.msdk.dycreator.baseview;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.widget.AbsListView;
import android.widget.ListView;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import com.mbridge.msdk.dycreator.e.a;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.g;
import com.mbridge.msdk.foundation.tools.z;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class MBListView extends ListView implements InterBase {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Map<String, String> f3200a;
    private Map<String, Boolean> b;
    private String c;

    public MBListView(Context context, AttributeSet attributeSet) {
        super(context);
        this.c = "";
        try {
            this.f3200a = c.a(context, attributeSet);
            a.a(this, attributeSet);
            setLayoutParams(generateLayoutParams(attributeSet));
            c.a(this.f3200a, this);
        } catch (Exception e) {
            z.d("MBListView", e.getMessage());
        }
    }

    @Override // android.widget.AbsListView, android.view.ViewGroup
    public AbsListView.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        AbsListView.LayoutParams layoutParams = (AbsListView.LayoutParams) generateDefaultLayoutParams();
        HashMap<String, com.mbridge.msdk.dycreator.a.c> mapC = b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = AnonymousClass1.f3201a[cVar.ordinal()];
                if (i2 == 1) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (attributeValue.startsWith("f") || attributeValue.startsWith("m")) {
                        layoutParams.width = -1;
                    } else if (attributeValue.startsWith("wrap")) {
                        layoutParams.width = -2;
                    } else {
                        layoutParams.width = b.a().b(attributeValue);
                    }
                } else if (i2 == 2) {
                    String attributeValue2 = attributeSet.getAttributeValue(i);
                    if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                        layoutParams.height = -1;
                    } else if (attributeValue2.startsWith("wrap")) {
                        layoutParams.height = -2;
                    } else {
                        layoutParams.height = b.a().b(attributeValue2);
                    }
                } else if (i2 == 3) {
                    setHorizontalFadingEdgeEnabled(attributeSet.getAttributeBooleanValue(i, false));
                } else if (i2 == 4) {
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
        return layoutParams;
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.dycreator.baseview.MBListView$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f3201a;

        static {
            int[] iArr = new int[com.mbridge.msdk.dycreator.a.c.values().length];
            f3201a = iArr;
            try {
                iArr[com.mbridge.msdk.dycreator.a.c.layout_width.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f3201a[com.mbridge.msdk.dycreator.a.c.layout_height.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f3201a[com.mbridge.msdk.dycreator.a.c.fadingEdge.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f3201a[com.mbridge.msdk.dycreator.a.c.visibility.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
        }
    }

    @Override // android.widget.AbsListView, android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        Map<String, Boolean> map = this.b;
        if (map != null && map.containsKey("mbridgeAttached") && this.b.get("mbridgeAttached").booleanValue()) {
            new g.a("mbridgeAttached").a().a(this.c);
        }
    }

    @Override // android.widget.ListView, android.widget.AbsListView, android.widget.AdapterView, android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Map<String, Boolean> map = this.b;
        if (map != null && map.containsKey("mbridgeDetached") && this.b.get("mbridgeDetached").booleanValue()) {
            new g.a("mbridgeDetached").a().a(this.c);
        }
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getBindDataDes() {
        Map<String, String> map = this.f3200a;
        return (map == null || !map.containsKey("mbridgeData")) ? "" : this.f3200a.get("mbridgeData");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getActionDes() {
        Map<String, String> map = this.f3200a;
        return (map == null || !map.containsKey("mbridgeAction")) ? "" : this.f3200a.get("mbridgeAction");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getStrategyDes() {
        Map<String, String> map = this.f3200a;
        return (map == null || !map.containsKey("mbridgeStrategy")) ? "" : this.f3200a.get("mbridgeStrategy");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getEffectDes() {
        Map<String, String> map = this.f3200a;
        return (map == null || !map.containsKey("mbridgeEffect")) ? "" : this.f3200a.get("mbridgeEffect");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getReportDes() {
        Map<String, String> map = this.f3200a;
        return (map == null || !map.containsKey("mbridgeReport")) ? "" : this.f3200a.get("mbridgeReport");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public void setDynamicReport(String str, CampaignEx campaignEx) {
        this.b = c.a(str);
        if (campaignEx != null) {
            this.c = campaignEx.getCampaignUnitId();
        }
    }
}
