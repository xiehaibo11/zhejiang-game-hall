package com.mbridge.msdk.foundation.entity;

public class InteractiveAdsCamPaignTag implements com.mbridge.msdk.system.NoProGuard, java.io.Serializable {
    private long campaignCreateTime;
    private java.lang.String id;
    private int isClick;
    private int resourceType;

    public InteractiveAdsCamPaignTag() {
            r0 = this;
            r0.<init>()
            return
    }

    public InteractiveAdsCamPaignTag(java.lang.String r1, int r2, long r3, int r5) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            r0.resourceType = r2
            r0.campaignCreateTime = r3
            r0.isClick = r5
            return
    }

    public long getCampaignCreateTime() {
            r2 = this;
            long r0 = r2.campaignCreateTime
            return r0
    }

    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.id
            return r0
    }

    public int getIsClick() {
            r1 = this;
            int r0 = r1.isClick
            return r0
    }

    public int getResourceType() {
            r1 = this;
            int r0 = r1.resourceType
            return r0
    }

    public void setCampaignCreateTime(long r1) {
            r0 = this;
            r0.campaignCreateTime = r1
            return
    }

    public void setId(java.lang.String r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public void setIsClick(int r1) {
            r0 = this;
            r0.isClick = r1
            return
    }

    public void setResourceType(int r1) {
            r0 = this;
            r0.resourceType = r1
            return
    }
}
