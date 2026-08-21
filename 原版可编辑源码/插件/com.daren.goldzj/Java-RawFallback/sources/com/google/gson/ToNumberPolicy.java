package com.google.gson;

public enum ToNumberPolicy extends java.lang.Enum<com.google.gson.ToNumberPolicy> implements com.google.gson.ToNumberStrategy {
    private static final com.google.gson.ToNumberPolicy[] $VALUES = null;
    public static final com.google.gson.ToNumberPolicy BIG_DECIMAL = null;
    public static final com.google.gson.ToNumberPolicy DOUBLE = null;
    public static final com.google.gson.ToNumberPolicy LAZILY_PARSED_NUMBER = null;
    public static final com.google.gson.ToNumberPolicy LONG_OR_DOUBLE = null;





    static {
            com.google.gson.ToNumberPolicy$1 r0 = new com.google.gson.ToNumberPolicy$1
            r1 = 0
            java.lang.String r2 = "DOUBLE"
            r0.<init>(r2, r1)
            com.google.gson.ToNumberPolicy.DOUBLE = r0
            com.google.gson.ToNumberPolicy$2 r0 = new com.google.gson.ToNumberPolicy$2
            r2 = 1
            java.lang.String r3 = "LAZILY_PARSED_NUMBER"
            r0.<init>(r3, r2)
            com.google.gson.ToNumberPolicy.LAZILY_PARSED_NUMBER = r0
            com.google.gson.ToNumberPolicy$3 r0 = new com.google.gson.ToNumberPolicy$3
            r3 = 2
            java.lang.String r4 = "LONG_OR_DOUBLE"
            r0.<init>(r4, r3)
            com.google.gson.ToNumberPolicy.LONG_OR_DOUBLE = r0
            com.google.gson.ToNumberPolicy$4 r0 = new com.google.gson.ToNumberPolicy$4
            r4 = 3
            java.lang.String r5 = "BIG_DECIMAL"
            r0.<init>(r5, r4)
            com.google.gson.ToNumberPolicy.BIG_DECIMAL = r0
            r0 = 4
            com.google.gson.ToNumberPolicy[] r0 = new com.google.gson.ToNumberPolicy[r0]
            com.google.gson.ToNumberPolicy r5 = com.google.gson.ToNumberPolicy.DOUBLE
            r0[r1] = r5
            com.google.gson.ToNumberPolicy r1 = com.google.gson.ToNumberPolicy.LAZILY_PARSED_NUMBER
            r0[r2] = r1
            com.google.gson.ToNumberPolicy r1 = com.google.gson.ToNumberPolicy.LONG_OR_DOUBLE
            r0[r3] = r1
            com.google.gson.ToNumberPolicy r1 = com.google.gson.ToNumberPolicy.BIG_DECIMAL
            r0[r4] = r1
            com.google.gson.ToNumberPolicy.$VALUES = r0
            return
    }

    ToNumberPolicy(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    ToNumberPolicy(java.lang.String r1, int r2, com.google.gson.ToNumberPolicy.1 r3) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.google.gson.ToNumberPolicy valueOf(java.lang.String r1) {
            java.lang.Class<com.google.gson.ToNumberPolicy> r0 = com.google.gson.ToNumberPolicy.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.google.gson.ToNumberPolicy r1 = (com.google.gson.ToNumberPolicy) r1
            return r1
    }

    public static com.google.gson.ToNumberPolicy[] values() {
            com.google.gson.ToNumberPolicy[] r0 = com.google.gson.ToNumberPolicy.$VALUES
            java.lang.Object r0 = r0.clone()
            com.google.gson.ToNumberPolicy[] r0 = (com.google.gson.ToNumberPolicy[]) r0
            return r0
    }
}
