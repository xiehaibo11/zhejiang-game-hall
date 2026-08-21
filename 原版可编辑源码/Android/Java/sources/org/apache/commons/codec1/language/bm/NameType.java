package org.apache.commons.codec1.language.bm;

public enum NameType {
    ASHKENAZI("ash"),
    GENERIC("gen"),
    SEPHARDIC("sep");

    private final String name;

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
