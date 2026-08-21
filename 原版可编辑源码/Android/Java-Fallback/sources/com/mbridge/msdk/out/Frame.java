package com.mbridge.msdk.out;

public class Frame {
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> campaigns;
    private java.lang.String parentSessionId;
    private java.lang.String sessionId;
    private int template;

    public Frame() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> getCampaigns() {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.campaigns
            return r0
    }

    public java.lang.String getParentSessionId() {
            r1 = this;
            java.lang.String r0 = r1.parentSessionId
            return r0
    }

    public java.lang.String getSessionId() {
            r1 = this;
            java.lang.String r0 = r1.sessionId
            return r0
    }

    public int getTemplate() {
            r1 = this;
            int r0 = r1.template
            return r0
    }

    public void setCampaigns(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.campaigns = r1
            return
    }

    public void setParentSessionId(java.lang.String r1) {
            r0 = this;
            r0.parentSessionId = r1
            return
    }

    public void setSessionId(java.lang.String r1) {
            r0 = this;
            r0.sessionId = r1
            return
    }

    public void setTemplate(int r1) {
            r0 = this;
            r0.template = r1
            return
    }
}
