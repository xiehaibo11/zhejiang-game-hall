package org.apache.commons.codec.language.bm;

public enum RuleType extends java.lang.Enum<org.apache.commons.codec.language.bm.RuleType> {
    private static final org.apache.commons.codec.language.bm.RuleType[] $VALUES = null;
    public static final org.apache.commons.codec.language.bm.RuleType APPROX = null;
    public static final org.apache.commons.codec.language.bm.RuleType EXACT = null;
    public static final org.apache.commons.codec.language.bm.RuleType RULES = null;
    private final java.lang.String name;

    static {
            org.apache.commons.codec.language.bm.RuleType r0 = new org.apache.commons.codec.language.bm.RuleType
            r1 = 0
            java.lang.String r2 = "APPROX"
            java.lang.String r3 = "approx"
            r0.<init>(r2, r1, r3)
            org.apache.commons.codec.language.bm.RuleType.APPROX = r0
            org.apache.commons.codec.language.bm.RuleType r0 = new org.apache.commons.codec.language.bm.RuleType
            r2 = 1
            java.lang.String r3 = "EXACT"
            java.lang.String r4 = "exact"
            r0.<init>(r3, r2, r4)
            org.apache.commons.codec.language.bm.RuleType.EXACT = r0
            org.apache.commons.codec.language.bm.RuleType r0 = new org.apache.commons.codec.language.bm.RuleType
            r3 = 2
            java.lang.String r4 = "RULES"
            java.lang.String r5 = "rules"
            r0.<init>(r4, r3, r5)
            org.apache.commons.codec.language.bm.RuleType.RULES = r0
            r4 = 3
            org.apache.commons.codec.language.bm.RuleType[] r4 = new org.apache.commons.codec.language.bm.RuleType[r4]
            org.apache.commons.codec.language.bm.RuleType r5 = org.apache.commons.codec.language.bm.RuleType.APPROX
            r4[r1] = r5
            org.apache.commons.codec.language.bm.RuleType r1 = org.apache.commons.codec.language.bm.RuleType.EXACT
            r4[r2] = r1
            r4[r3] = r0
            org.apache.commons.codec.language.bm.RuleType.$VALUES = r4
            return
    }

    RuleType(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.name = r3
            return
    }

    public static org.apache.commons.codec.language.bm.RuleType valueOf(java.lang.String r1) {
            java.lang.Class<org.apache.commons.codec.language.bm.RuleType> r0 = org.apache.commons.codec.language.bm.RuleType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            org.apache.commons.codec.language.bm.RuleType r1 = (org.apache.commons.codec.language.bm.RuleType) r1
            return r1
    }

    public static org.apache.commons.codec.language.bm.RuleType[] values() {
            org.apache.commons.codec.language.bm.RuleType[] r0 = org.apache.commons.codec.language.bm.RuleType.$VALUES
            java.lang.Object r0 = r0.clone()
            org.apache.commons.codec.language.bm.RuleType[] r0 = (org.apache.commons.codec.language.bm.RuleType[]) r0
            return r0
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }
}
