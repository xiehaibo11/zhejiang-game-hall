package com.mbridge.msdk.mbbid.out;

public class BidResponsed implements com.mbridge.msdk.system.NoProGuard {
    public static final java.lang.String KEY_BID_ID = "bid";
    public static final java.lang.String KEY_CUR = "cur";
    public static final java.lang.String KEY_LN = "ln";
    public static final java.lang.String KEY_PRICE = "price";
    public static final java.lang.String KEY_TOKEN = "token";
    public static final java.lang.String KEY_WN = "wn";
    private java.lang.String bidId;
    private java.lang.String bidToken;
    private java.lang.String cur;
    protected java.lang.String ln;
    private java.lang.String price;
    protected java.lang.String wn;

    public BidResponsed() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getBidId() {
            r1 = this;
            java.lang.String r0 = r1.bidId
            return r0
    }

    public java.lang.String getBidToken() {
            r1 = this;
            java.lang.String r0 = r1.bidToken
            return r0
    }

    public java.lang.String getCur() {
            r1 = this;
            java.lang.String r0 = r1.cur
            return r0
    }

    public java.lang.String getLn() {
            r1 = this;
            java.lang.String r0 = r1.ln
            return r0
    }

    public java.lang.String getPrice() {
            r1 = this;
            java.lang.String r0 = r1.price
            return r0
    }

    public java.lang.String getWn() {
            r1 = this;
            java.lang.String r0 = r1.wn
            return r0
    }

    public void sendLossNotice(android.content.Context r8, com.mbridge.msdk.mbbid.out.BidLossCode r9) {
            r7 = this;
            java.lang.String r0 = r7.ln
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3f
            if (r8 == 0) goto L3f
            if (r9 == 0) goto L3f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = r7.ln
            r0.<init>(r1)
            java.lang.String r1 = r7.ln
            java.lang.String r2 = "?"
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L23
            java.lang.String r1 = "&"
            r0.append(r1)
            goto L26
        L23:
            r0.append(r2)
        L26:
            java.lang.String r1 = "reason="
            r0.append(r1)
            int r9 = r9.getCurrentCode()
            r0.append(r9)
            r2 = 0
            java.lang.String r4 = r0.toString()
            r5 = 0
            r6 = 0
            java.lang.String r3 = ""
            r1 = r8
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L3f:
            return
    }

    public void sendWinNotice(android.content.Context r8) {
            r7 = this;
            java.lang.String r0 = r7.wn
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L15
            if (r8 == 0) goto L15
            r2 = 0
            java.lang.String r4 = r7.wn
            r5 = 0
            r6 = 0
            java.lang.String r3 = ""
            r1 = r8
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L15:
            return
    }

    protected void setBidId(java.lang.String r1) {
            r0 = this;
            r0.bidId = r1
            return
    }

    protected void setBidToken(java.lang.String r1) {
            r0 = this;
            r0.bidToken = r1
            return
    }

    protected void setCur(java.lang.String r1) {
            r0 = this;
            r0.cur = r1
            return
    }

    protected void setPrice(java.lang.String r1) {
            r0 = this;
            r0.price = r1
            return
    }
}
