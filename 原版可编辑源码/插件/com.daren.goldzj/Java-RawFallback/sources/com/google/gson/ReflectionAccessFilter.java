package com.google.gson;

public interface ReflectionAccessFilter {
    public static final com.google.gson.ReflectionAccessFilter BLOCK_ALL_ANDROID = null;
    public static final com.google.gson.ReflectionAccessFilter BLOCK_ALL_JAVA = null;
    public static final com.google.gson.ReflectionAccessFilter BLOCK_ALL_PLATFORM = null;
    public static final com.google.gson.ReflectionAccessFilter BLOCK_INACCESSIBLE_JAVA = null;





    public enum FilterResult extends java.lang.Enum<com.google.gson.ReflectionAccessFilter.FilterResult> {
        private static final com.google.gson.ReflectionAccessFilter.FilterResult[] $VALUES = null;
        public static final com.google.gson.ReflectionAccessFilter.FilterResult ALLOW = null;
        public static final com.google.gson.ReflectionAccessFilter.FilterResult BLOCK_ALL = null;
        public static final com.google.gson.ReflectionAccessFilter.FilterResult BLOCK_INACCESSIBLE = null;
        public static final com.google.gson.ReflectionAccessFilter.FilterResult INDECISIVE = null;

        static {
                com.google.gson.ReflectionAccessFilter$FilterResult r0 = new com.google.gson.ReflectionAccessFilter$FilterResult
                r1 = 0
                java.lang.String r2 = "ALLOW"
                r0.<init>(r2, r1)
                com.google.gson.ReflectionAccessFilter.FilterResult.ALLOW = r0
                com.google.gson.ReflectionAccessFilter$FilterResult r0 = new com.google.gson.ReflectionAccessFilter$FilterResult
                r2 = 1
                java.lang.String r3 = "INDECISIVE"
                r0.<init>(r3, r2)
                com.google.gson.ReflectionAccessFilter.FilterResult.INDECISIVE = r0
                com.google.gson.ReflectionAccessFilter$FilterResult r0 = new com.google.gson.ReflectionAccessFilter$FilterResult
                r3 = 2
                java.lang.String r4 = "BLOCK_INACCESSIBLE"
                r0.<init>(r4, r3)
                com.google.gson.ReflectionAccessFilter.FilterResult.BLOCK_INACCESSIBLE = r0
                com.google.gson.ReflectionAccessFilter$FilterResult r0 = new com.google.gson.ReflectionAccessFilter$FilterResult
                r4 = 3
                java.lang.String r5 = "BLOCK_ALL"
                r0.<init>(r5, r4)
                com.google.gson.ReflectionAccessFilter.FilterResult.BLOCK_ALL = r0
                r0 = 4
                com.google.gson.ReflectionAccessFilter$FilterResult[] r0 = new com.google.gson.ReflectionAccessFilter.FilterResult[r0]
                com.google.gson.ReflectionAccessFilter$FilterResult r5 = com.google.gson.ReflectionAccessFilter.FilterResult.ALLOW
                r0[r1] = r5
                com.google.gson.ReflectionAccessFilter$FilterResult r1 = com.google.gson.ReflectionAccessFilter.FilterResult.INDECISIVE
                r0[r2] = r1
                com.google.gson.ReflectionAccessFilter$FilterResult r1 = com.google.gson.ReflectionAccessFilter.FilterResult.BLOCK_INACCESSIBLE
                r0[r3] = r1
                com.google.gson.ReflectionAccessFilter$FilterResult r1 = com.google.gson.ReflectionAccessFilter.FilterResult.BLOCK_ALL
                r0[r4] = r1
                com.google.gson.ReflectionAccessFilter.FilterResult.$VALUES = r0
                return
        }

        FilterResult(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.google.gson.ReflectionAccessFilter.FilterResult valueOf(java.lang.String r1) {
                java.lang.Class<com.google.gson.ReflectionAccessFilter$FilterResult> r0 = com.google.gson.ReflectionAccessFilter.FilterResult.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.google.gson.ReflectionAccessFilter$FilterResult r1 = (com.google.gson.ReflectionAccessFilter.FilterResult) r1
                return r1
        }

        public static com.google.gson.ReflectionAccessFilter.FilterResult[] values() {
                com.google.gson.ReflectionAccessFilter$FilterResult[] r0 = com.google.gson.ReflectionAccessFilter.FilterResult.$VALUES
                java.lang.Object r0 = r0.clone()
                com.google.gson.ReflectionAccessFilter$FilterResult[] r0 = (com.google.gson.ReflectionAccessFilter.FilterResult[]) r0
                return r0
        }
    }

    static {
            com.google.gson.ReflectionAccessFilter$1 r0 = new com.google.gson.ReflectionAccessFilter$1
            r0.<init>()
            com.google.gson.ReflectionAccessFilter.BLOCK_INACCESSIBLE_JAVA = r0
            com.google.gson.ReflectionAccessFilter$2 r0 = new com.google.gson.ReflectionAccessFilter$2
            r0.<init>()
            com.google.gson.ReflectionAccessFilter.BLOCK_ALL_JAVA = r0
            com.google.gson.ReflectionAccessFilter$3 r0 = new com.google.gson.ReflectionAccessFilter$3
            r0.<init>()
            com.google.gson.ReflectionAccessFilter.BLOCK_ALL_ANDROID = r0
            com.google.gson.ReflectionAccessFilter$4 r0 = new com.google.gson.ReflectionAccessFilter$4
            r0.<init>()
            com.google.gson.ReflectionAccessFilter.BLOCK_ALL_PLATFORM = r0
            return
    }

    com.google.gson.ReflectionAccessFilter.FilterResult check(java.lang.Class<?> r1);
}
