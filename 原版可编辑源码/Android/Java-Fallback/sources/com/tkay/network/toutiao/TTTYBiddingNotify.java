package com.tkay.network.toutiao;

public class TTTYBiddingNotify implements com.tkay.core.api.TYBiddingNotice {
    com.bykv.vk.openvk.TTClientBidding a;

    protected TTTYBiddingNotify(com.bykv.vk.openvk.TTClientBidding r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public com.tkay.core.api.TYAdConst.CURRENCY getNoticePriceCurrency() {
            r1 = this;
            com.tkay.core.api.TYAdConst$CURRENCY r0 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
            return r0
    }

    @Override
    public void notifyBidDisplay(boolean r3, double r4) {
            r2 = this;
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "notifyBidDisplay :  price:"
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r1 = ",isWinner:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "TTTYBiddingNotify"
            android.util.Log.i(r0, r3)
        L21:
            com.bykv.vk.openvk.TTClientBidding r3 = r2.a     // Catch: java.lang.Throwable -> L2a
            java.lang.Double r4 = java.lang.Double.valueOf(r4)     // Catch: java.lang.Throwable -> L2a
            r3.setPrice(r4)     // Catch: java.lang.Throwable -> L2a
        L2a:
            r3 = 0
            r2.a = r3
            return
    }

    @Override
    public void notifyBidLoss(java.lang.String r8, double r9, java.util.Map<java.lang.String, java.lang.Object> r11) {
            r7 = this;
            boolean r11 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r11 == 0) goto L21
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r0 = "notifyBidLoss :  price:"
            r11.<init>(r0)
            r11.append(r9)
            java.lang.String r0 = ",lossCode:"
            r11.append(r0)
            r11.append(r8)
            java.lang.String r11 = r11.toString()
            java.lang.String r0 = "TTATBiddingNotify"
            android.util.Log.i(r0, r11)
        L21:
            r11 = -1
            int r0 = r8.hashCode()
            r1 = 50
            java.lang.String r2 = "102"
            java.lang.String r3 = "2"
            r4 = 3
            r5 = 2
            r6 = 1
            if (r0 == r1) goto L55
            r1 = 53
            if (r0 == r1) goto L4b
            switch(r0) {
                case 48627: goto L43;
                case 48628: goto L39;
                default: goto L38;
            }
        L38:
            goto L5c
        L39:
            java.lang.String r0 = "103"
            boolean r8 = r8.equals(r0)
            if (r8 == 0) goto L5c
            r11 = r5
            goto L5c
        L43:
            boolean r8 = r8.equals(r2)
            if (r8 == 0) goto L5c
            r11 = r6
            goto L5c
        L4b:
            java.lang.String r0 = "5"
            boolean r8 = r8.equals(r0)
            if (r8 == 0) goto L5c
            r11 = r4
            goto L5c
        L55:
            boolean r8 = r8.equals(r3)
            if (r8 == 0) goto L5c
            r11 = 0
        L5c:
            java.lang.String r8 = "201"
            if (r11 == 0) goto L66
            if (r11 == r6) goto L67
            if (r11 == r5) goto L67
            r2 = r8
            goto L67
        L66:
            r2 = r3
        L67:
            r8 = 0
            com.bykv.vk.openvk.TTClientBidding r11 = r7.a     // Catch: java.lang.Throwable -> L71
            java.lang.Double r9 = java.lang.Double.valueOf(r9)     // Catch: java.lang.Throwable -> L71
            r11.loss(r9, r2, r8)     // Catch: java.lang.Throwable -> L71
        L71:
            r7.a = r8
            return
    }

    @Override
    public void notifyBidWin(double r3) {
            r2 = this;
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto L15
            java.lang.String r0 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "notifyBidWin : second price:"
            java.lang.String r0 = r1.concat(r0)
            java.lang.String r1 = "TTTYBiddingNotify"
            android.util.Log.i(r1, r0)
        L15:
            com.bykv.vk.openvk.TTClientBidding r0 = r2.a     // Catch: java.lang.Throwable -> L1e
            java.lang.Double r3 = java.lang.Double.valueOf(r3)     // Catch: java.lang.Throwable -> L1e
            r0.win(r3)     // Catch: java.lang.Throwable -> L1e
        L1e:
            return
    }
}
