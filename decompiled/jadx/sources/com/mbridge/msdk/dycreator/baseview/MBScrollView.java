package com.mbridge.msdk.dycreator.baseview;

import android.content.Context;
import android.graphics.BitmapFactory;
import android.graphics.drawable.BitmapDrawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.widget.FrameLayout;
import android.widget.ScrollView;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.g;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class MBScrollView extends ScrollView implements InterBase {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Map<String, String> f3207a;
    private Map<String, Boolean> b;
    private String c;

    public MBScrollView(Context context, AttributeSet attributeSet) {
        super(context);
        this.c = "";
        this.f3207a = c.a(context, attributeSet);
        setAttributeSet(attributeSet);
        setLayoutParams(generateLayoutParams(attributeSet));
        c.a(this.f3207a, this);
    }

    public void setAttributeSet(AttributeSet attributeSet) {
        HashMap<String, com.mbridge.msdk.dycreator.a.c> mapC = b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = AnonymousClass1.f3208a[cVar.ordinal()];
                if (i2 == 1) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (attributeValue.startsWith("@+id/")) {
                        setId(attributeValue.substring(5).hashCode());
                    }
                } else if (i2 == 2) {
                    String attributeValue2 = attributeSet.getAttributeValue(i);
                    if (attributeValue2.startsWith("#")) {
                        setBackgroundColor(b.a().a(attributeSet.getAttributeValue(i)));
                    } else {
                        if (attributeValue2.startsWith("@drawable/")) {
                            attributeValue2 = attributeValue2.substring(10);
                        }
                        setBackgroundDrawable(new BitmapDrawable(BitmapFactory.decodeFile(getContext().getFilesDir().toString() + "/" + attributeValue2 + ".png")));
                    }
                } else if (i2 == 3) {
                    setContentDescription(attributeSet.getAttributeValue(i));
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.dycreator.baseview.MBScrollView$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f3208a;

        static {
            int[] iArr = new int[com.mbridge.msdk.dycreator.a.c.values().length];
            f3208a = iArr;
            try {
                iArr[com.mbridge.msdk.dycreator.a.c.id.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f3208a[com.mbridge.msdk.dycreator.a.c.background.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f3208a[com.mbridge.msdk.dycreator.a.c.contentDescription.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f3208a[com.mbridge.msdk.dycreator.a.c.fadingEdge.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f3208a[com.mbridge.msdk.dycreator.a.c.visibility.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                f3208a[com.mbridge.msdk.dycreator.a.c.layout_marginBottom.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
        }
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup
    public FrameLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        FrameLayout.LayoutParams layoutParamsGenerateDefaultLayoutParams = generateDefaultLayoutParams();
        HashMap<String, com.mbridge.msdk.dycreator.a.c> mapC = b.a().c();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = mapC.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                Log.e("MBscrollviewparam", cVar.toString());
            }
            if (cVar != null) {
                int i2 = AnonymousClass1.f3208a[cVar.ordinal()];
                if (i2 == 4) {
                    setHorizontalFadingEdgeEnabled(attributeSet.getAttributeBooleanValue(i, false));
                } else if (i2 == 5) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (!TextUtils.isEmpty(attributeValue)) {
                        if (attributeValue.equals("invisible")) {
                            setVisibility(4);
                        } else if (attributeValue.equalsIgnoreCase("gone")) {
                            setVisibility(8);
                        }
                    }
                } else if (i2 == 6) {
                    layoutParamsGenerateDefaultLayoutParams.bottomMargin = b.a().b(attributeSet.getAttributeValue(i));
                }
            }
        }
        return layoutParamsGenerateDefaultLayoutParams;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        Map<String, Boolean> map = this.b;
        if (map != null && map.containsKey("mbridgeAttached") && this.b.get("mbridgeAttached").booleanValue()) {
            new g.a("mbridgeAttached").a().a(this.c);
        }
    }

    @Override // android.widget.ScrollView, android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Map<String, Boolean> map = this.b;
        if (map != null && map.containsKey("mbridgeDetached") && this.b.get("mbridgeDetached").booleanValue()) {
            new g.a("mbridgeDetached").a().a(this.c);
        }
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getBindDataDes() {
        Map<String, String> map = this.f3207a;
        return (map == null || !map.containsKey("mbridgeData")) ? "" : this.f3207a.get("mbridgeData");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getActionDes() {
        Map<String, String> map = this.f3207a;
        return (map == null || !map.containsKey("mbridgeAction")) ? "" : this.f3207a.get("mbridgeAction");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getStrategyDes() {
        Map<String, String> map = this.f3207a;
        return (map == null || !map.containsKey("mbridgeStrategy")) ? "" : this.f3207a.get("mbridgeStrategy");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getEffectDes() {
        Map<String, String> map = this.f3207a;
        return (map == null || !map.containsKey("mbridgeEffect")) ? "" : this.f3207a.get("mbridgeEffect");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getReportDes() {
        Map<String, String> map = this.f3207a;
        return (map == null || !map.containsKey("mbridgeReport")) ? "" : this.f3207a.get("mbridgeReport");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public void setDynamicReport(String str, CampaignEx campaignEx) {
        this.b = c.a(str);
        if (campaignEx != null) {
            this.c = campaignEx.getCampaignUnitId();
        }
    }
}
