package com.kwai.adclient.kscommerciallogger.model;

public enum SubBusinessType extends java.lang.Enum<com.kwai.adclient.kscommerciallogger.model.SubBusinessType> {
    private static final com.kwai.adclient.kscommerciallogger.model.SubBusinessType[] $VALUES = null;
    public static final com.kwai.adclient.kscommerciallogger.model.SubBusinessType OTHER = null;
    public java.lang.String value;

    static {
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r0 = new com.kwai.adclient.kscommerciallogger.model.SubBusinessType
            r1 = 0
            java.lang.String r2 = "OTHER"
            r0.<init>(r2, r1, r2)
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType.OTHER = r0
            r2 = 1
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType[] r2 = new com.kwai.adclient.kscommerciallogger.model.SubBusinessType[r2]
            r2[r1] = r0
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType.$VALUES = r2
            return
    }

    SubBusinessType(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.value = r3
            return
    }

    public static com.kwai.adclient.kscommerciallogger.model.SubBusinessType valueOf(java.lang.String r1) {
            java.lang.Class<com.kwai.adclient.kscommerciallogger.model.SubBusinessType> r0 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType r1 = (com.kwai.adclient.kscommerciallogger.model.SubBusinessType) r1
            return r1
    }

    public static com.kwai.adclient.kscommerciallogger.model.SubBusinessType[] values() {
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType[] r0 = com.kwai.adclient.kscommerciallogger.model.SubBusinessType.$VALUES
            java.lang.Object r0 = r0.clone()
            com.kwai.adclient.kscommerciallogger.model.SubBusinessType[] r0 = (com.kwai.adclient.kscommerciallogger.model.SubBusinessType[]) r0
            return r0
    }
}
