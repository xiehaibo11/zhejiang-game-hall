package com.mbridge.msdk.dycreator.baseview;

import android.content.Context;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import android.widget.RelativeLayout;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import com.mbridge.msdk.dycreator.e.a;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.g;
import com.mbridge.msdk.foundation.tools.z;
import java.util.HashMap;
import java.util.Map;

public class MBRelativeLayout extends RelativeLayout implements InterBase {
    private float a;
    private float b;
    private Map<String, String> c;
    private Map<String, Boolean> d;
    private String e;

    public MBRelativeLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.e = "";
    }

    public MBRelativeLayout(Context context, AttributeSet attributeSet) {
        super(context);
        this.e = "";
        try {
            this.c = c.a(context, attributeSet);
            a.a(this, attributeSet);
            setLayoutParams(generateLayoutParams(attributeSet));
            c.a(this.c, this);
        } catch (Exception e) {
            z.d("MBRelativeLayouts", e.getMessage());
        }
    }

    public MBRelativeLayout(Context context) {
        super(context);
        this.e = "";
    }

    @Override
    public RelativeLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(0, 0);
        HashMap mapB = b.a().b();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = (com.mbridge.msdk.dycreator.a.c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (1.a[cVar.ordinal()]) {
                    case 1:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("fill") || attributeValue.startsWith("match")) {
                            layoutParams.width = -1;
                        } else if (attributeValue.startsWith("w")) {
                            layoutParams.width = -2;
                        } else {
                            layoutParams.width = b.a().b(attributeValue);
                        }
                        break;
                    case 2:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (attributeValue2.startsWith("fill") || attributeValue2.startsWith("match")) {
                            layoutParams.height = -1;
                        } else if (attributeValue2.startsWith("wrap")) {
                            layoutParams.height = -2;
                        } else {
                            layoutParams.height = b.a().b(attributeValue2);
                        }
                        break;
                    case 3:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(14, -1);
                        }
                        break;
                    case 4:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(12, -1);
                        }
                        break;
                    case 5:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(10, -1);
                        }
                        break;
                    case 6:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(15, -1);
                        }
                        break;
                    case 7:
                        String attributeValue3 = attributeSet.getAttributeValue(i);
                        if (attributeValue3.startsWith("@+id")) {
                            layoutParams.addRule(3, attributeValue3.substring(5).hashCode());
                        }
                        break;
                    case 8:
                        String attributeValue4 = attributeSet.getAttributeValue(i);
                        if (attributeValue4.startsWith("@+id")) {
                            layoutParams.addRule(2, attributeValue4.substring(5).hashCode());
                        }
                        break;
                    case 9:
                        String attributeValue5 = attributeSet.getAttributeValue(i);
                        if (attributeValue5.startsWith("@+id")) {
                            layoutParams.addRule(0, attributeValue5.substring(5).hashCode());
                        }
                        break;
                    case 10:
                        String attributeValue6 = attributeSet.getAttributeValue(i);
                        if (attributeValue6.startsWith("@+id")) {
                            layoutParams.addRule(1, attributeValue6.substring(5).hashCode());
                        }
                        break;
                    case 11:
                        String attributeValue7 = attributeSet.getAttributeValue(i);
                        if (attributeValue7.startsWith("@+id")) {
                            layoutParams.addRule(17, attributeValue7.substring(5).hashCode());
                        }
                        break;
                    case 12:
                        int iB = b.a().b(attributeSet.getAttributeValue(i));
                        layoutParams.setMargins(iB, iB, iB, iB);
                        break;
                    case 13:
                        layoutParams.leftMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case 14:
                        layoutParams.rightMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case 15:
                        layoutParams.topMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case 16:
                        layoutParams.bottomMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case 17:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(11, -1);
                        }
                        break;
                    case 18:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(9, -1);
                        }
                        break;
                    case 19:
                        String attributeValue8 = attributeSet.getAttributeValue(i);
                        if (attributeValue8.startsWith("@+id")) {
                            layoutParams.addRule(6, attributeValue8.substring(5).hashCode());
                        }
                        break;
                    case 20:
                        String attributeValue9 = attributeSet.getAttributeValue(i);
                        if (attributeValue9.startsWith("@+id")) {
                            layoutParams.addRule(5, attributeValue9.substring(5).hashCode());
                        }
                        break;
                    case 21:
                        String attributeValue10 = attributeSet.getAttributeValue(i);
                        if (attributeValue10.startsWith("@+id")) {
                            layoutParams.addRule(7, attributeValue10.substring(5).hashCode());
                        }
                        break;
                    case 22:
                        String attributeValue11 = attributeSet.getAttributeValue(i);
                        if (attributeValue11.startsWith("@+id")) {
                            layoutParams.addRule(8, attributeValue11.substring(5).hashCode());
                        }
                        break;
                    case 23:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(13, -1);
                        }
                        break;
                    case 24:
                        if (attributeSet.getAttributeBooleanValue(i, false)) {
                            layoutParams.addRule(21, -1);
                        }
                        break;
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
                a[com.mbridge.msdk.dycreator.a.c.e.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.u.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.v.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.f.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.g.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.h.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.j.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.i.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.k.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.q.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.l.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.m.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.n.ordinal()] = 15;
            } catch (NoSuchFieldError unused15) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.o.ordinal()] = 16;
            } catch (NoSuchFieldError unused16) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.s.ordinal()] = 17;
            } catch (NoSuchFieldError unused17) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.t.ordinal()] = 18;
            } catch (NoSuchFieldError unused18) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.ad.ordinal()] = 19;
            } catch (NoSuchFieldError unused19) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.af.ordinal()] = 20;
            } catch (NoSuchFieldError unused20) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.ag.ordinal()] = 21;
            } catch (NoSuchFieldError unused21) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.ac.ordinal()] = 22;
            } catch (NoSuchFieldError unused22) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.ae.ordinal()] = 23;
            } catch (NoSuchFieldError unused23) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.y.ordinal()] = 24;
            } catch (NoSuchFieldError unused24) {
            }
        }
    }

    @Override
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            try {
                View childAt = getChildAt(i5);
                if (childAt instanceof MBLinearLayout) {
                    MBLinearLayout mBLinearLayout = (MBLinearLayout) childAt;
                    for (int i6 = 0; i6 < mBLinearLayout.getChildCount(); i6++) {
                    }
                }
            } catch (Exception e) {
                z.d("MBRelativeLayouts", e.getMessage());
            }
        }
        super.onLayout(z, i, i2, i3, i4);
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        this.a = motionEvent.getRawX();
        this.b = motionEvent.getRawY();
        return super.onInterceptTouchEvent(motionEvent);
    }

    public float getxInScreen() {
        return this.a;
    }

    public float getyInScreen() {
        return this.b;
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        Map<String, Boolean> map = this.d;
        if (map != null && map.containsKey("mbridgeAttached") && this.d.get("mbridgeAttached").booleanValue()) {
            new g.a("mbridgeAttached").a().a(this.e);
        }
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Map<String, Boolean> map = this.d;
        if (map != null && map.containsKey("mbridgeDetached") && this.d.get("mbridgeDetached").booleanValue()) {
            new g.a("mbridgeDetached").a().a(this.e);
        }
    }

    @Override
    public String getBindDataDes() {
        Map<String, String> map = this.c;
        return (map == null || !map.containsKey("mbridgeData")) ? "" : this.c.get("mbridgeData");
    }

    @Override
    public String getActionDes() {
        Map<String, String> map = this.c;
        return (map == null || !map.containsKey("mbridgeAction")) ? "" : this.c.get("mbridgeAction");
    }

    @Override
    public String getStrategyDes() {
        Map<String, String> map = this.c;
        return (map == null || !map.containsKey("mbridgeStrategy")) ? "" : this.c.get("mbridgeStrategy");
    }

    @Override
    public String getEffectDes() {
        Map<String, String> map = this.c;
        return (map == null || !map.containsKey("mbridgeEffect")) ? "" : this.c.get("mbridgeEffect");
    }

    @Override
    public String getReportDes() {
        Map<String, String> map = this.c;
        return (map == null || !map.containsKey("mbridgeReport")) ? "" : this.c.get("mbridgeReport");
    }

    @Override
    public void setDynamicReport(String str, CampaignEx campaignEx) {
        this.d = c.a(str);
        if (campaignEx != null) {
            this.e = campaignEx.getCampaignUnitId();
        }
    }
}
