package com.sigmob.sdk.base.common;

public class r implements com.sigmob.sdk.base.common.ab {
    private final java.util.Set<com.sigmob.sdk.base.common.q> a;
    private com.sigmob.sdk.base.models.BaseAdUnit b;

    public r() {
            r2 = this;
            r2.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.a = r0
            com.sigmob.sdk.base.common.aa r1 = new com.sigmob.sdk.base.common.aa
            r1.<init>()
            r0.add(r1)
            return
    }

    @Override
    public void a() {
            r3 = this;
            java.lang.String r0 = "endDisplaySession() called"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            java.util.Set<com.sigmob.sdk.base.common.q> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.base.common.q r1 = (com.sigmob.sdk.base.common.q) r1
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.b
            r1.b(r2)
            goto Lb
        L1d:
            return
    }

    public void a(int r4, int r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onVideoPrepared() called  mDuration = ["
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            java.util.Set<com.sigmob.sdk.base.common.q> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        L1f:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L31
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.base.common.q r1 = (com.sigmob.sdk.base.common.q) r1
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.b
            r1.a(r2, r4, r5)
            goto L1f
        L31:
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.common.a r4, int r5) {
            r3 = this;
            java.lang.String r0 = "startDeferredDisplaySession() called"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            java.util.Set<com.sigmob.sdk.base.common.q> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.base.common.q r1 = (com.sigmob.sdk.base.common.q) r1
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.b
            r1.a(r2, r4, r5)
            goto Lb
        L1d:
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r2 = this;
            r2.b = r3
            java.util.Set<com.sigmob.sdk.base.common.q> r0 = r2.a
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.base.common.q r1 = (com.sigmob.sdk.base.common.q) r1
            r1.a(r3)
            r3.setSessionManager(r2)
            goto L8
        L1b:
            return
    }

    public void a(boolean r4, int r5) {
            r3 = this;
            java.util.Set<com.sigmob.sdk.base.common.q> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r0.next()
            com.sigmob.sdk.base.common.q r1 = (com.sigmob.sdk.base.common.q) r1
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r3.b
            r1.a(r2, r4, r5)
            goto L6
        L18:
            return
    }
}
