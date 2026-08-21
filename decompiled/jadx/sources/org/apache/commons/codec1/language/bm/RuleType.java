package org.apache.commons.codec1.language.bm;

/* JADX INFO: loaded from: classes4.dex */
public enum RuleType {
    APPROX("approx"),
    EXACT("exact"),
    RULES("rules");

    private final String name;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static RuleType[] valuesCustom() {
        RuleType[] ruleTypeArrValuesCustom = values();
        int length = ruleTypeArrValuesCustom.length;
        RuleType[] ruleTypeArr = new RuleType[length];
        System.arraycopy(ruleTypeArrValuesCustom, 0, ruleTypeArr, 0, length);
        return ruleTypeArr;
    }

    RuleType(String str) {
        this.name = str;
    }

    public String getName() {
        return this.name;
    }
}
