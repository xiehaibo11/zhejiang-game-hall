package com.mbridge.msdk.dycreator.baseview;

import android.content.Context;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.widget.LinearLayout;
import com.mbridge.msdk.dycreator.a.b;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import com.mbridge.msdk.dycreator.e.a;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.g;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.playercommon.PlayerView;
import java.util.HashMap;
import java.util.Map;

public class MBPlayerView extends PlayerView implements InterBase {
    private float a;
    private float b;
    private Map<String, String> c;
    private Map<String, Boolean> d;
    private String e;

    public MBPlayerView(Context context) {
        super(context);
        this.e = "";
    }

    public MBPlayerView(Context context, AttributeSet attributeSet) {
        super(context);
        this.e = "";
        try {
            this.c = c.a(context, attributeSet);
            a.a(this, attributeSet);
            setLayoutParams(generateLayoutParams(attributeSet));
            c.a(this.c, this);
        } catch (Exception e) {
            z.d("MBLinearLayout", e.getMessage());
        }
    }

    @Override
    public LinearLayout.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(0, 0);
        HashMap mapB = b.a().b();
        int attributeCount = attributeSet.getAttributeCount();
        for (int i = 0; i < attributeCount; i++) {
            com.mbridge.msdk.dycreator.a.c cVar = (com.mbridge.msdk.dycreator.a.c) mapB.get(attributeSet.getAttributeName(i));
            if (cVar != null) {
                switch (1.a[cVar.ordinal()]) {
                    case 1:
                        String attributeValue = attributeSet.getAttributeValue(i);
                        if (attributeValue.startsWith("f") || attributeValue.startsWith("m")) {
                            layoutParams.width = -1;
                        } else if (attributeValue.startsWith("wrap")) {
                            layoutParams.width = -2;
                        } else {
                            layoutParams.width = b.a().b(attributeValue);
                        }
                        break;
                    case 2:
                        String attributeValue2 = attributeSet.getAttributeValue(i);
                        if (attributeValue2.startsWith("f") || attributeValue2.startsWith("m")) {
                            layoutParams.height = -1;
                        } else if (attributeValue2.startsWith("wrap")) {
                            layoutParams.height = -2;
                        } else {
                            layoutParams.height = b.a().b(attributeValue2);
                        }
                        break;
                    case 3:
                        layoutParams.gravity = 1;
                        break;
                    case 4:
                        layoutParams.gravity = 16;
                        break;
                    case 5:
                        layoutParams.weight = attributeSet.getAttributeFloatValue(i, 0.0f);
                        break;
                    case 6:
                        setGravity(b.a().c(attributeSet.getAttributeValue(i)));
                        break;
                    case 7:
                        int iB = b.a().b(attributeSet.getAttributeValue(i));
                        layoutParams.bottomMargin = iB;
                        layoutParams.leftMargin = iB;
                        layoutParams.rightMargin = iB;
                        layoutParams.topMargin = iB;
                        break;
                    case 8:
                        layoutParams.leftMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case 9:
                        layoutParams.rightMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case 10:
                        layoutParams.topMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case 11:
                        layoutParams.bottomMargin = b.a().b(attributeSet.getAttributeValue(i));
                        break;
                    case 12:
                        layoutParams.gravity = b.a().c(attributeSet.getAttributeValue(i));
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
                a[com.mbridge.msdk.dycreator.a.c.f.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.x.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.U.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.q.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.l.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.m.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.n.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.o.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                a[com.mbridge.msdk.dycreator.a.c.r.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
        }
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
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
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
