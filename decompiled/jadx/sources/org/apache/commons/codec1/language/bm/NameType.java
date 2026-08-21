package org.apache.commons.codec1.language.bm;

/* JADX INFO: loaded from: classes4.dex */
public enum NameType {
    ASHKENAZI("ash"),
    GENERIC("gen"),
    SEPHARDIC("sep");

    private final String name;

    /* JADX INFO: renamed from: values, reason: to resolve conflict with enum method */
    public static NameType[] valuesCustom() {
        NameType[] nameTypeArrValuesCustom = values();
        int length = nameTypeArrValuesCustom.length;
        NameType[] nameTypeArr = new NameType[length];
        System.arraycopy(nameTypeArrValuesCustom, 0, nameTypeArr, 0, length);
        return nameTypeArr;
    }

    NameType(String str) {
        this.name = str;
    }

    public String getName() {
        return this.name;
    }
}
