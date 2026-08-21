package com.sigmob.sdk.base.mta;

public class PointEntitySigmobCrash extends com.czhj.sdk.common.mta.PointEntityCrash {
    public PointEntitySigmobCrash() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.sigmob.sdk.base.mta.PointEntitySigmobCrash WindCrash(java.lang.String r2) {
            com.sigmob.sdk.base.mta.PointEntitySigmobCrash r0 = new com.sigmob.sdk.base.mta.PointEntitySigmobCrash
            r0.<init>()
            java.lang.String r1 = "402"
            r0.setAc_type(r1)
            java.lang.String r1 = "crash"
            r0.setCategory(r1)
            r0.setCrashMessage(r2)
            return r0
    }

    @Override
    public java.lang.String appId() {
            r1 = this;
            com.sigmob.windad.WindAds r0 = com.sigmob.windad.WindAds.sharedAds()
            java.lang.String r0 = r0.getAppId()
            return r0
    }

    @Override
    public java.lang.String getSdkversion() {
            r1 = this;
            java.lang.String r0 = "4.9.0"
            return r0
    }

    @Override
    public boolean isAcTypeBlock() {
            r4 = this;
            com.sigmob.sdk.base.c r0 = com.sigmob.sdk.base.c.a()
            boolean r0 = r0.i()
            r1 = 1
            if (r0 != 0) goto Lc
            return r1
        Lc:
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()
            java.util.List r0 = r0.D()
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L4b
            java.lang.Object r2 = r0.next()
            java.lang.Integer r2 = (java.lang.Integer) r2
            java.lang.String r3 = r4.getAc_type()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L18
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "black ac type "
            r0.append(r2)
            java.lang.String r2 = r4.getAc_type()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            return r1
        L4b:
            r0 = 0
            return r0
    }
}
