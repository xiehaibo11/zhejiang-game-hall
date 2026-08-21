package com.mbridge.msdk.dycreator.baseview;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.Button;
import com.mbridge.msdk.dycreator.baseview.inter.InterBase;
import com.mbridge.msdk.dycreator.e.a;
import com.mbridge.msdk.dycreator.e.c;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.g;
import java.util.Map;

public class MBButton extends Button implements InterBase {
    private Map<String, String> a;
    private Map<String, Boolean> b;
    private String c;

    public MBButton(Context context) {
        super(context);
        this.c = "";
    }

    public MBButton(Context context, AttributeSet attributeSet) {
        super(context);
        this.c = "";
        this.a = c.a(context, attributeSet);
        a.a(this, attributeSet);
        c.a(this.a, this);
    }

    public MBButton(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.c = "";
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
