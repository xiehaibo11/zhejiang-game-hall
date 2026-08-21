package org.bouncycastle.math.ec;

import org.bouncycastle.math.ec.ECPoint;

class WTauNafPreCompInfo implements PreCompInfo {
    private ECPoint.F2m[] preComp;

    WTauNafPreCompInfo(ECPoint.F2m[] f2mArr) {
        this.preComp = null;
        this.preComp = f2mArr;
    }

    protected ECPoint.F2m[] getPreComp() {
        return this.preComp;
    }
}
