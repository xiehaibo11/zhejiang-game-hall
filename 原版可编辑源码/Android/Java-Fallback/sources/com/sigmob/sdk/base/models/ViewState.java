package com.sigmob.sdk.base.models;

public enum ViewState extends java.lang.Enum<com.sigmob.sdk.base.models.ViewState> {
    private static final com.sigmob.sdk.base.models.ViewState[] $VALUES = null;
    public static final com.sigmob.sdk.base.models.ViewState DEFAULT = null;
    public static final com.sigmob.sdk.base.models.ViewState EXPANDED = null;
    public static final com.sigmob.sdk.base.models.ViewState HIDDEN = null;
    public static final com.sigmob.sdk.base.models.ViewState LOADING = null;
    public static final com.sigmob.sdk.base.models.ViewState RESIZED = null;

    static {
            com.sigmob.sdk.base.models.ViewState r0 = new com.sigmob.sdk.base.models.ViewState
            r1 = 0
            java.lang.String r2 = "LOADING"
            r0.<init>(r2, r1)
            com.sigmob.sdk.base.models.ViewState.LOADING = r0
            com.sigmob.sdk.base.models.ViewState r0 = new com.sigmob.sdk.base.models.ViewState
            r2 = 1
            java.lang.String r3 = "DEFAULT"
            r0.<init>(r3, r2)
            com.sigmob.sdk.base.models.ViewState.DEFAULT = r0
            com.sigmob.sdk.base.models.ViewState r0 = new com.sigmob.sdk.base.models.ViewState
            r3 = 2
            java.lang.String r4 = "RESIZED"
            r0.<init>(r4, r3)
            com.sigmob.sdk.base.models.ViewState.RESIZED = r0
            com.sigmob.sdk.base.models.ViewState r0 = new com.sigmob.sdk.base.models.ViewState
            r4 = 3
            java.lang.String r5 = "EXPANDED"
            r0.<init>(r5, r4)
            com.sigmob.sdk.base.models.ViewState.EXPANDED = r0
            com.sigmob.sdk.base.models.ViewState r0 = new com.sigmob.sdk.base.models.ViewState
            r5 = 4
            java.lang.String r6 = "HIDDEN"
            r0.<init>(r6, r5)
            com.sigmob.sdk.base.models.ViewState.HIDDEN = r0
            r6 = 5
            com.sigmob.sdk.base.models.ViewState[] r6 = new com.sigmob.sdk.base.models.ViewState[r6]
            com.sigmob.sdk.base.models.ViewState r7 = com.sigmob.sdk.base.models.ViewState.LOADING
            r6[r1] = r7
            com.sigmob.sdk.base.models.ViewState r1 = com.sigmob.sdk.base.models.ViewState.DEFAULT
            r6[r2] = r1
            com.sigmob.sdk.base.models.ViewState r1 = com.sigmob.sdk.base.models.ViewState.RESIZED
            r6[r3] = r1
            com.sigmob.sdk.base.models.ViewState r1 = com.sigmob.sdk.base.models.ViewState.EXPANDED
            r6[r4] = r1
            r6[r5] = r0
            com.sigmob.sdk.base.models.ViewState.$VALUES = r6
            return
    }

    ViewState(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.sigmob.sdk.base.models.ViewState valueOf(java.lang.String r1) {
            java.lang.Class<com.sigmob.sdk.base.models.ViewState> r0 = com.sigmob.sdk.base.models.ViewState.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.sigmob.sdk.base.models.ViewState r1 = (com.sigmob.sdk.base.models.ViewState) r1
            return r1
    }

    public static com.sigmob.sdk.base.models.ViewState[] values() {
            com.sigmob.sdk.base.models.ViewState[] r0 = com.sigmob.sdk.base.models.ViewState.$VALUES
            java.lang.Object r0 = r0.clone()
            com.sigmob.sdk.base.models.ViewState[] r0 = (com.sigmob.sdk.base.models.ViewState[]) r0
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
