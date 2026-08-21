package com.sigmob.sdk.base.models;

public enum PlacementType extends java.lang.Enum<com.sigmob.sdk.base.models.PlacementType> {
    private static final com.sigmob.sdk.base.models.PlacementType[] $VALUES = null;
    public static final com.sigmob.sdk.base.models.PlacementType INLINE = null;
    public static final com.sigmob.sdk.base.models.PlacementType INTERSTITIAL = null;

    static {
            com.sigmob.sdk.base.models.PlacementType r0 = new com.sigmob.sdk.base.models.PlacementType
            r1 = 0
            java.lang.String r2 = "INLINE"
            r0.<init>(r2, r1)
            com.sigmob.sdk.base.models.PlacementType.INLINE = r0
            com.sigmob.sdk.base.models.PlacementType r0 = new com.sigmob.sdk.base.models.PlacementType
            r2 = 1
            java.lang.String r3 = "INTERSTITIAL"
            r0.<init>(r3, r2)
            com.sigmob.sdk.base.models.PlacementType.INTERSTITIAL = r0
            r3 = 2
            com.sigmob.sdk.base.models.PlacementType[] r3 = new com.sigmob.sdk.base.models.PlacementType[r3]
            com.sigmob.sdk.base.models.PlacementType r4 = com.sigmob.sdk.base.models.PlacementType.INLINE
            r3[r1] = r4
            r3[r2] = r0
            com.sigmob.sdk.base.models.PlacementType.$VALUES = r3
            return
    }

    PlacementType(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.sigmob.sdk.base.models.PlacementType valueOf(java.lang.String r1) {
            java.lang.Class<com.sigmob.sdk.base.models.PlacementType> r0 = com.sigmob.sdk.base.models.PlacementType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.sigmob.sdk.base.models.PlacementType r1 = (com.sigmob.sdk.base.models.PlacementType) r1
            return r1
    }

    public static com.sigmob.sdk.base.models.PlacementType[] values() {
            com.sigmob.sdk.base.models.PlacementType[] r0 = com.sigmob.sdk.base.models.PlacementType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.sigmob.sdk.base.models.PlacementType[] r0 = (com.sigmob.sdk.base.models.PlacementType[]) r0
            return r0
    }

    public java.lang.String toJavascriptString() {
            r2 = this;
            java.lang.String r0 = r2.toString()
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r0 = r0.toLowerCase(r1)
            return r0
    }
}
