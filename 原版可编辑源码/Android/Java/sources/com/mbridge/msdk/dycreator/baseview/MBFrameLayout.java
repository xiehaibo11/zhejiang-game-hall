package com.mbridge.msdk.dycreator.baseview;

import android.animation.Animator;
import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
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

public class MBFrameLayout extends FrameLayout implements InterBase, InterEffect {
    private Animator a;
    private Map<String, String> b;
    private Map<String, Boolean> c;
    private String d;

    public MBFrameLayout(Context context, AttributeSet attributeSet) {
        super(context);
        this.d = "";
        try {
            this.b = c.a(context, attributeSet);
            a.a(this, attributeSet);
            setLayoutParams(generateLayoutParams(attributeSet));
            c.a(this.b, this);
        } catch (Exception e) {
            z.d("MBFrameLayout", e.getMessage());
        }
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        try {
            if (this.a != null) {
                this.a.start();
            }
        } catch (Exception e) {
            z.d("MBFrameLayout", e.getMessage());
        }
        Map<String, Boolean> map = this.c;
        if (map != null && map.containsKey("mbridgeAttached") && this.c.get("mbridgeAttached").booleanValue()) {
            new g.a("mbridgeAttached").a().a(this.d);
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        try {
            if (this.a != null) {
                this.a.cancel();
            }
        } catch (Exception e) {
            z.d("MBFrameLayout", e.getMessage());
        }
        Map<String, Boolean> map = this.c;
        if (map != null && map.containsKey("mbridgeDetached") && this.c.get("mbridgeDetached").booleanValue()) {
            new g.a("mbridgeDetached").a().a(this.d);
        }
    }

    @Override
    public void setOnClickListener(View.OnClickListener onClickListener) {
        super.setOnClickListener(onClickListener);
    }

    @Override
    public FrameLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(0, 0);
        HashMap mapB = b.a().b();
        layoutParams.width = -2;
        layoutParams.height = -2;
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = (com.mbridge.msdk.dycreator.a.c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                int i2 = 1.a[cVar.ordinal()];
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

    static class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[com.mbridge.msdk.dycreator.a.c.values().length];
            a = iArr;
            try {
                iArr[com.mbridge.msdk.dycreator.a.c.b.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.c.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.r.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.l.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.q.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
        }
    }

    @Override
    public void setAnimator(Animator animator) {
        this.a = animator;
    }

    @Override
    public String getBindDataDes() {
        Map<String, String> map = this.b;
        return (map == null || !map.containsKey("mbridgeData")) ? "" : this.b.get("mbridgeData");
    }

    @Override
    public String getActionDes() {
        Map<String, String> map = this.b;
        return (map == null || !map.containsKey("mbridgeAction")) ? "" : this.b.get("mbridgeAction");
    }

    @Override
    public String getStrategyDes() {
        Map<String, String> map = this.b;
        return (map == null || !map.containsKey("mbridgeStrategy")) ? "" : this.b.get("mbridgeStrategy");
    }

    @Override
    public String getEffectDes() {
        Map<String, String> map = this.b;
        return (map == null || !map.containsKey("mbridgeEffect")) ? "" : this.b.get("mbridgeEffect");
    }

    @Override
    public String getReportDes() {
        Map<String, String> map = this.b;
        return (map == null || !map.containsKey("mbridgeReport")) ? "" : this.b.get("mbridgeReport");
    }

    @Override
    public void setDynamicReport(String str, CampaignEx campaignEx) {
        this.c = c.a(str);
        if (campaignEx != null) {
            this.d = campaignEx.getCampaignUnitId();
        }
    }
}
