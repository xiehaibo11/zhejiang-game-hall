package com.tkay.network.directly;

public class DirectlyTYInterstitialAdapter extends com.tkay.network.adx.AdxTYInterstitialAdapter {
    private int d;

    public DirectlyTYInterstitialAdapter() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            return
    }

    public void fixDirectlyInterstitial() {
            r3 = this;
            com.tkay.basead.d.d r0 = r3.b
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.basead.d.d r0 = r3.b
            com.tkay.core.common.f.h r0 = r0.e()
            if (r0 != 0) goto Le
            return
        Le:
            int r1 = r3.d
            if (r1 != 0) goto L14
            r1 = 2
            goto L15
        L14:
            r1 = 1
        L15:
            r0.d(r1)
            com.tkay.core.common.f.z r0 = (com.tkay.core.common.f.z) r0
            int r1 = r0.Y()
            r2 = 5
            if (r1 != r2) goto L29
            int r1 = r3.d
            if (r1 != 0) goto L29
            r1 = 3
            r0.j(r1)
        L29:
            return
    }

    @Override
    public java.lang.String getNetworkName() {
            r1 = this;
            java.lang.String r0 = "Directly"
            return r0
    }

    @Override
    public void loadCustomNetworkAd(android.content.Context r3, java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            java.lang.String r0 = "unit_type"
            boolean r1 = r4.containsKey(r0)
            if (r1 == 0) goto L18
            java.lang.Object r0 = r4.get(r0)
            if (r0 == 0) goto L18
            java.lang.String r0 = r0.toString()
            int r0 = java.lang.Integer.parseInt(r0)
            r2.d = r0
        L18:
            super.loadCustomNetworkAd(r3, r4, r5)
            return
    }

    @Override
    public void show(android.app.Activity r1) {
            r0 = this;
            r0.fixDirectlyInterstitial()
            super.show(r1)
            return
    }
}
