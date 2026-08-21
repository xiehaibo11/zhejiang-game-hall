package com.mbridge.msdk.rover;

public abstract class h extends com.mbridge.msdk.foundation.same.net.f<org.json.JSONObject> {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.mbridge.msdk.rover.h> r0 = com.mbridge.msdk.rover.h.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.rover.h.a = r0
            return
    }

    public h() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void a(com.mbridge.msdk.rover.RoverCampaignUnit r1);

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a r4) {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.rover.h.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "errorCode = "
            r1.append(r2)
            int r4 = r4.a
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
            return
    }

    @Override
    public void onSuccess(com.mbridge.msdk.foundation.same.net.k<org.json.JSONObject> r1) {
            r0 = this;
            if (r1 == 0) goto Ld
            T r1 = r1.a
            org.json.JSONObject r1 = (org.json.JSONObject) r1
            com.mbridge.msdk.rover.RoverCampaignUnit r1 = com.mbridge.msdk.rover.RoverCampaignUnit.parseCampaignUnit(r1)
            r0.a(r1)
        Ld:
            return
    }
}
