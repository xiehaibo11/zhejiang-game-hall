package com.google.gson;

public interface ReflectionAccessFilter {
    public static final ReflectionAccessFilter BLOCK_ALL_ANDROID = null;
    public static final ReflectionAccessFilter BLOCK_ALL_JAVA = null;
    public static final ReflectionAccessFilter BLOCK_ALL_PLATFORM = null;
    public static final ReflectionAccessFilter BLOCK_INACCESSIBLE_JAVA = null;

    public enum FilterResult extends Enum<FilterResult> {
        private static final FilterResult[] $VALUES = null;
        public static final FilterResult ALLOW = null;
        public static final FilterResult BLOCK_ALL = null;
        public static final FilterResult BLOCK_INACCESSIBLE = null;
        public static final FilterResult INDECISIVE = null;

        FilterResult(String r1, int r2) {
        }

        public static FilterResult valueOf(String r1) {
            return (FilterResult) Enum.valueOf(FilterResult.class, r1);
        }

        public static FilterResult[] values() {
            return (FilterResult[]) $VALUES.clone();
        }

        static {
            ALLOW = new FilterResult("ALLOW", 0);
            INDECISIVE = new FilterResult("INDECISIVE", 1);
            BLOCK_INACCESSIBLE = new FilterResult("BLOCK_INACCESSIBLE", 2);
            BLOCK_ALL = new FilterResult("BLOCK_ALL", 3);
            $VALUES = new FilterResult[]{ALLOW, INDECISIVE, BLOCK_INACCESSIBLE, BLOCK_ALL};
        }
    }

    FilterResult check(Class<?> r1);

    static {
        BLOCK_INACCESSIBLE_JAVA = new 1();
        BLOCK_ALL_JAVA = new 2();
        BLOCK_ALL_ANDROID = new 3();
        BLOCK_ALL_PLATFORM = new 4();
    }
}
