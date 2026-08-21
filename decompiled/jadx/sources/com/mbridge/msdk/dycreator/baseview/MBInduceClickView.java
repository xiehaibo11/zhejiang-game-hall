package com.mbridge.msdk.dycreator.baseview;

import android.animation.Animator;
import android.content.Context;
import android.util.AttributeSet;
import android.widget.FrameLayout;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import com.mbridge.msdk.dycreator.baseview.inter.InterEffect;
import com.mbridge.msdk.dycreator.e.a;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.g;
import com.mbridge.msdk.foundation.tools.z;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class MBInduceClickView extends FrameLayout implements InterBase, InterEffect {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Map<String, String> f3196a;
    private Map<String, Boolean> b;
    private String c;

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterEffect
    public void setAnimator(Animator animator) {
    }

    public MBInduceClickView(Context context) {
        super(context);
        this.c = "";
    }

    public MBInduceClickView(Context context, AttributeSet attributeSet) {
        super(context);
        this.c = "";
        if (context != null && attributeSet != null) {
            try {
                this.f3196a = c.a(context, attributeSet);
            } catch (Exception e) {
                z.d("MBInduceClickView", e.getMessage());
                return;
            }
        }
        a.a(this, attributeSet);
        setLayoutParams(generateLayoutParams(attributeSet));
        c.a(this.f3196a, this);
    }

    public MBInduceClickView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.c = "";
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup
    public FrameLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(0, 0);
        HashMap mapB = b.a().b();
        layoutParams.width = -2;
        layoutParams.height = -2;
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = (com.mbridge.msdk.dycreator.a.c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = AnonymousClass1.f3197a[cVar.ordinal()];
                if (i2 == 1) {
                    String attributeValue = attributeSet.getAttributeValue(i);
                    if (attributeValue.startsWith("f") || attributeValue.startsWith("m")) {
                        layoutParams.width = -1;
                    } else if (attributeValue.startsWith("w")) {
                        layoutParams.width = -2;
                    } else {
                        layoutParams.width = b.a().b(attributeValue);
                    }
                } else if (i2 == 2) {
                    String attributeValue2 = attributeSet.getAttributeValue(i);
                    if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                        layoutParams.width = -1;
                    } else if (attributeValue2.startsWith("w")) {
                        layoutParams.width = -2;
                    } else {
                        layoutParams.height = b.a().b(attributeValue2);
                    }
                } else if (i2 == 3) {
                    layoutParams.gravity = b.a().c(attributeSet.getAttributeValue(i));
                } else if (i2 == 4) {
                    layoutParams.leftMargin = b.a().b(attributeSet.getAttributeValue(i));
                } else if (i2 == 5) {
                    int iB = b.a().b(attributeSet.getAttributeValue(i));
                    layoutParams.setMargins(iB, iB, iB, iB);
                }
            }
        }
        return layoutParams;
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.dycreator.baseview.MBInduceClickView$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f3197a;

        static {
            int[] iArr = new int[com.mbridge.msdk.dycreator.a.c.values().length];
            f3197a = iArr;
            try {
                iArr[com.mbridge.msdk.dycreator.a.c.layout_width.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f3197a[com.mbridge.msdk.dycreator.a.c.layout_height.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f3197a[com.mbridge.msdk.dycreator.a.c.layout_gravity.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f3197a[com.mbridge.msdk.dycreator.a.c.layout_marginLeft.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f3197a[com.mbridge.msdk.dycreator.a.c.layout_margin.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        Map<String, Boolean> map = this.b;
        if (map != null && map.containsKey("mbridgeAttached") && this.b.get("mbridgeAttached").booleanValue()) {
            new g.a("mbridgeAttached").a().a(this.c);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Map<String, Boolean> map = this.b;
        if (map != null && map.containsKey("mbridgeDetached") && this.b.get("mbridgeDetached").booleanValue()) {
            new g.a("mbridgeDetached").a().a(this.c);
        }
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getBindDataDes() {
        Map<String, String> map = this.f3196a;
        return (map == null || !map.containsKey("mbridgeData")) ? "" : this.f3196a.get("mbridgeData");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getActionDes() {
        Map<String, String> map = this.f3196a;
        return (map == null || !map.containsKey("mbridgeAction")) ? "" : this.f3196a.get("mbridgeAction");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getStrategyDes() {
        Map<String, String> map = this.f3196a;
        return (map == null || !map.containsKey("mbridgeStrategy")) ? "" : this.f3196a.get("mbridgeStrategy");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getEffectDes() {
        Map<String, String> map = this.f3196a;
        return (map == null || !map.containsKey("mbridgeEffect")) ? "" : this.f3196a.get("mbridgeEffect");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public String getReportDes() {
        Map<String, String> map = this.f3196a;
        return (map == null || !map.containsKey("mbridgeReport")) ? "" : this.f3196a.get("mbridgeReport");
    }

    @Override // com.mbridge.msdk.dycreator.baseview.inter.InterBase
    public void setDynamicReport(String str, CampaignEx campaignEx) {
        this.b = c.a(str);
        if (campaignEx != null) {
            this.c = campaignEx.getCampaignUnitId();
        }
    }
}
