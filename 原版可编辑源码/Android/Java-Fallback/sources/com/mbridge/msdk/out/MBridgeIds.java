package com.mbridge.msdk.out;

public class MBridgeIds implements com.mbridge.msdk.system.NoProGuard, java.io.Serializable {
    private java.lang.String bidToken;
    private java.lang.String placementId;
    private java.lang.String unitId;

    public MBridgeIds() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.bidToken = r0
            return
    }

    public MBridgeIds(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.bidToken = r0
            r1.placementId = r2
            r1.unitId = r3
            return
    }

    public java.lang.String getBidToken() {
            r1 = this;
            java.lang.String r0 = r1.bidToken
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lc
            java.lang.String r0 = ""
            r1.bidToken = r0
        Lc:
            java.lang.String r0 = r1.bidToken
            return r0
    }

    public java.lang.String getPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.placementId
            return r0
    }

    public java.lang.String getUnitId() {
            r1 = this;
            java.lang.String r0 = r1.unitId
            return r0
    }

    public void setBidToken(java.lang.String r1) {
            r0 = this;
            r0.bidToken = r1
            return
    }

    public void setPlacementId(java.lang.String r1) {
            r0 = this;
            r0.placementId = r1
            return
    }

    public void setUnitId(java.lang.String r1) {
            r0 = this;
            r0.unitId = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "MBridgeIds{placementId='"
            r0.append(r1)
            java.lang.String r1 = r3.placementId
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", unitId='"
            r0.append(r2)
            java.lang.String r2 = r3.unitId
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", bidToken='"
            r0.append(r2)
            java.lang.String r2 = r3.bidToken
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
