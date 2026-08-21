package org.apache.commons.codec1.language.bm;

public enum NameType extends java.lang.Enum<org.apache.commons.codec1.language.bm.NameType> {
    public static final org.apache.commons.codec1.language.bm.NameType ASHKENAZI = null;
    private static final org.apache.commons.codec1.language.bm.NameType[] ENUM$VALUES = null;
    public static final org.apache.commons.codec1.language.bm.NameType GENERIC = null;
    public static final org.apache.commons.codec1.language.bm.NameType SEPHARDIC = null;
    private final java.lang.String name;

    static {
            org.apache.commons.codec1.language.bm.NameType r0 = new org.apache.commons.codec1.language.bm.NameType
            r1 = 0
            java.lang.String r2 = "ASHKENAZI"
            java.lang.String r3 = "ash"
            r0.<init>(r2, r1, r3)
            org.apache.commons.codec1.language.bm.NameType.ASHKENAZI = r0
            org.apache.commons.codec1.language.bm.NameType r0 = new org.apache.commons.codec1.language.bm.NameType
            r2 = 1
            java.lang.String r3 = "GENERIC"
            java.lang.String r4 = "gen"
            r0.<init>(r3, r2, r4)
            org.apache.commons.codec1.language.bm.NameType.GENERIC = r0
            org.apache.commons.codec1.language.bm.NameType r0 = new org.apache.commons.codec1.language.bm.NameType
            r3 = 2
            java.lang.String r4 = "SEPHARDIC"
            java.lang.String r5 = "sep"
            r0.<init>(r4, r3, r5)
            org.apache.commons.codec1.language.bm.NameType.SEPHARDIC = r0
            r4 = 3
            org.apache.commons.codec1.language.bm.NameType[] r4 = new org.apache.commons.codec1.language.bm.NameType[r4]
            org.apache.commons.codec1.language.bm.NameType r5 = org.apache.commons.codec1.language.bm.NameType.ASHKENAZI
            r4[r1] = r5
            org.apache.commons.codec1.language.bm.NameType r1 = org.apache.commons.codec1.language.bm.NameType.GENERIC
            r4[r2] = r1
            r4[r3] = r0
            org.apache.commons.codec1.language.bm.NameType.ENUM$VALUES = r4
            return
    }

    NameType(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.name = r3
            return
    }

    public static org.apache.commons.codec1.language.bm.NameType valueOf(java.lang.String r1) {
            java.lang.Class<org.apache.commons.codec1.language.bm.NameType> r0 = org.apache.commons.codec1.language.bm.NameType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            org.apache.commons.codec1.language.bm.NameType r1 = (org.apache.commons.codec1.language.bm.NameType) r1
            return r1
    }

    public static org.apache.commons.codec1.language.bm.NameType[] values() {
            org.apache.commons.codec1.language.bm.NameType[] r0 = org.apache.commons.codec1.language.bm.NameType.ENUM$VALUES
            int r1 = r0.length
            org.apache.commons.codec1.language.bm.NameType[] r2 = new org.apache.commons.codec1.language.bm.NameType[r1]
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r2, r3, r1)
            return r2
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }
}
