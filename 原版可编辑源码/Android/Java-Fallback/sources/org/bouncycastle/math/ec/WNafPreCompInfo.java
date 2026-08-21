package org.bouncycastle.math.ec;

class WNafPreCompInfo implements org.bouncycastle.math.ec.PreCompInfo {
    private org.bouncycastle.math.ec.ECPoint[] preComp;
    private org.bouncycastle.math.ec.ECPoint twiceP;

    WNafPreCompInfo() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.preComp = r0
            r1.twiceP = r0
            return
    }

    protected org.bouncycastle.math.ec.ECPoint[] getPreComp() {
            r1 = this;
            org.bouncycastle.math.ec.ECPoint[] r0 = r1.preComp
            return r0
    }

    protected org.bouncycastle.math.ec.ECPoint getTwiceP() {
            r1 = this;
            org.bouncycastle.math.ec.ECPoint r0 = r1.twiceP
            return r0
    }

    protected void setPreComp(org.bouncycastle.math.ec.ECPoint[] r1) {
            r0 = this;
            r0.preComp = r1
            return
    }

    protected void setTwiceP(org.bouncycastle.math.ec.ECPoint r1) {
            r0 = this;
            r0.twiceP = r1
            return
    }
}
