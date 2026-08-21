package com.mbridge.msdk.dycreator.bridge;

public class MBSplashData implements com.mbridge.msdk.dycreator.f.a.a {
    private com.mbridge.msdk.dycreator.wrapper.DyOption a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private com.mbridge.msdk.foundation.entity.CampaignEx f;
    private int g;
    private int h;
    private float i;
    private float j;
    private int k;

    public MBSplashData(com.mbridge.msdk.dycreator.wrapper.DyOption r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.k = r0
            r1.a = r2
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.getCampaignEx()
            r1.f = r2
            return
    }

    public java.lang.String getAdClickText() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String getAppInfo() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.entity.CampaignEx getBindData() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.f
            return r0
    }

    public int getClickType() {
            r1 = this;
            int r0 = r1.k
            return r0
    }

    public java.lang.String getCountDownText() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public com.mbridge.msdk.dycreator.wrapper.DyOption getDyOption() {
            r1 = this;
            com.mbridge.msdk.dycreator.wrapper.DyOption r0 = r1.a
            return r0
    }

    @Override
    public com.mbridge.msdk.dycreator.wrapper.DyOption getEffectData() {
            r1 = this;
            com.mbridge.msdk.dycreator.wrapper.DyOption r0 = r1.a
            return r0
    }

    public int getLogoImage() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    public java.lang.String getLogoText() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public int getNoticeImage() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    public float getxInScreen() {
            r1 = this;
            float r0 = r1.i
            return r0
    }

    public float getyInScreen() {
            r1 = this;
            float r0 = r1.j
            return r0
    }

    public void setAdClickText(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setAppInfo(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setClickType(int r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void setCountDownText(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setLogoImage(int r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setLogoText(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setNoticeImage(int r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setxInScreen(float r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void setyInScreen(float r1) {
            r0 = this;
            r0.j = r1
            return
    }
}
