package com.iab.omid.library.mmadbridge.adsession;

public enum OutputDeviceStatus extends java.lang.Enum<com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus> {
    private static final com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus[] $VALUES = null;
    public static final com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus NOT_DETECTED = null;
    public static final com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus UNKNOWN = null;

    static {
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r0 = new com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus
            r1 = 0
            java.lang.String r2 = "NOT_DETECTED"
            r0.<init>(r2, r1)
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus.NOT_DETECTED = r0
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r2 = new com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus
            r3 = 1
            java.lang.String r4 = "UNKNOWN"
            r2.<init>(r4, r3)
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus.UNKNOWN = r2
            r4 = 2
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus[] r4 = new com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus[r4]
            r4[r1] = r0
            r4[r3] = r2
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus.$VALUES = r4
            return
    }

    OutputDeviceStatus(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus valueOf(java.lang.String r1) {
            java.lang.Class<com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus> r0 = com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r1 = (com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus) r1
            return r1
    }

    public static com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus[] values() {
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus[] r0 = com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus.$VALUES
            java.lang.Object r0 = r0.clone()
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus[] r0 = (com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus[]) r0
            return r0
    }
}
