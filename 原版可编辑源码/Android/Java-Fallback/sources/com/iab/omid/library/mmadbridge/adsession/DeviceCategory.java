package com.iab.omid.library.mmadbridge.adsession;

public enum DeviceCategory extends java.lang.Enum<com.iab.omid.library.mmadbridge.adsession.DeviceCategory> {
    private static final com.iab.omid.library.mmadbridge.adsession.DeviceCategory[] $VALUES = null;
    public static final com.iab.omid.library.mmadbridge.adsession.DeviceCategory CTV = null;
    public static final com.iab.omid.library.mmadbridge.adsession.DeviceCategory MOBILE = null;
    public static final com.iab.omid.library.mmadbridge.adsession.DeviceCategory OTHER = null;
    private final java.lang.String deviceCategory;

    static {
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory r0 = new com.iab.omid.library.mmadbridge.adsession.DeviceCategory
            r1 = 0
            java.lang.String r2 = "CTV"
            java.lang.String r3 = "ctv"
            r0.<init>(r2, r1, r3)
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory.CTV = r0
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory r2 = new com.iab.omid.library.mmadbridge.adsession.DeviceCategory
            r3 = 1
            java.lang.String r4 = "MOBILE"
            java.lang.String r5 = "mobile"
            r2.<init>(r4, r3, r5)
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory.MOBILE = r2
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory r4 = new com.iab.omid.library.mmadbridge.adsession.DeviceCategory
            r5 = 2
            java.lang.String r6 = "OTHER"
            java.lang.String r7 = "other"
            r4.<init>(r6, r5, r7)
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory.OTHER = r4
            r6 = 3
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory[] r6 = new com.iab.omid.library.mmadbridge.adsession.DeviceCategory[r6]
            r6[r1] = r0
            r6[r3] = r2
            r6[r5] = r4
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory.$VALUES = r6
            return
    }

    DeviceCategory(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.deviceCategory = r3
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.DeviceCategory valueOf(java.lang.String r1) {
            java.lang.Class<com.iab.omid.library.mmadbridge.adsession.DeviceCategory> r0 = com.iab.omid.library.mmadbridge.adsession.DeviceCategory.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory r1 = (com.iab.omid.library.mmadbridge.adsession.DeviceCategory) r1
            return r1
    }

    public static com.iab.omid.library.mmadbridge.adsession.DeviceCategory[] values() {
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory[] r0 = com.iab.omid.library.mmadbridge.adsession.DeviceCategory.$VALUES
            java.lang.Object r0 = r0.clone()
            com.iab.omid.library.mmadbridge.adsession.DeviceCategory[] r0 = (com.iab.omid.library.mmadbridge.adsession.DeviceCategory[]) r0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.deviceCategory
            return r0
    }
}
