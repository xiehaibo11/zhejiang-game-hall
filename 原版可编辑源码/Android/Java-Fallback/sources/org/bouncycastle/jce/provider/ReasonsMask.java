package org.bouncycastle.jce.provider;

class ReasonsMask {
    static final org.bouncycastle.jce.provider.ReasonsMask allReasons = null;
    private int _reasons;

    static {
            org.bouncycastle.jce.provider.ReasonsMask r0 = new org.bouncycastle.jce.provider.ReasonsMask
            r1 = 33023(0x80ff, float:4.6275E-41)
            r0.<init>(r1)
            org.bouncycastle.jce.provider.ReasonsMask.allReasons = r0
            return
    }

    ReasonsMask() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    ReasonsMask(int r1) {
            r0 = this;
            r0.<init>()
            r0._reasons = r1
            return
    }

    void addReasons(org.bouncycastle.jce.provider.ReasonsMask r2) {
            r1 = this;
            int r0 = r1._reasons
            int r2 = r2.getReasons()
            r2 = r2 | r0
            r1._reasons = r2
            return
    }

    int getReasons() {
            r1 = this;
            int r0 = r1._reasons
            return r0
    }

    boolean hasNewReasons(org.bouncycastle.jce.provider.ReasonsMask r3) {
            r2 = this;
            int r0 = r2._reasons
            int r3 = r3.getReasons()
            int r1 = r2._reasons
            r3 = r3 ^ r1
            r3 = r3 | r0
            if (r3 == 0) goto Le
            r3 = 1
            goto Lf
        Le:
            r3 = 0
        Lf:
            return r3
    }

    org.bouncycastle.jce.provider.ReasonsMask intersect(org.bouncycastle.jce.provider.ReasonsMask r4) {
            r3 = this;
            org.bouncycastle.jce.provider.ReasonsMask r0 = new org.bouncycastle.jce.provider.ReasonsMask
            r0.<init>()
            org.bouncycastle.jce.provider.ReasonsMask r1 = new org.bouncycastle.jce.provider.ReasonsMask
            int r2 = r3._reasons
            int r4 = r4.getReasons()
            r4 = r4 & r2
            r1.<init>(r4)
            r0.addReasons(r1)
            return r0
    }

    boolean isAllReasons() {
            r2 = this;
            int r0 = r2._reasons
            org.bouncycastle.jce.provider.ReasonsMask r1 = org.bouncycastle.jce.provider.ReasonsMask.allReasons
            int r1 = r1._reasons
            if (r0 != r1) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }
}
