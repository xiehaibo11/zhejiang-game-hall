package com.sigmob.windad.natives;

public class WindNativeAdRequest extends com.sigmob.windad.WindAdRequest {
    @java.lang.Deprecated
    public WindNativeAdRequest(java.lang.String r1, java.lang.String r2, int r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r0 = this;
            r0.<init>(r1, r2, r4)
            r0.b = r3
            r1 = 5
            r0.a = r1
            return
    }

    public WindNativeAdRequest(java.lang.String r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 5
            r0.a = r1
            return
    }

    public static com.sigmob.windad.natives.WindNativeAdRequest getWindVideoAdRequest(com.sigmob.windad.WindAdRequest r4) {
            if (r4 == 0) goto L15
            com.sigmob.windad.natives.WindNativeAdRequest r0 = new com.sigmob.windad.natives.WindNativeAdRequest
            java.lang.String r1 = r4.getPlacementId()
            java.lang.String r2 = r4.getUserId()
            r3 = 1
            java.util.Map r4 = r4.getOptions()
            r0.<init>(r1, r2, r3, r4)
            return r0
        L15:
            r4 = 0
            return r4
    }
}
