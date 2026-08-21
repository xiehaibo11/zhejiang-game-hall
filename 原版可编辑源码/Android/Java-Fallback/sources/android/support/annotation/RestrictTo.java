package android.support.annotation;

@java.lang.annotation.Target({java.lang.annotation.ElementType.ANNOTATION_TYPE, java.lang.annotation.ElementType.TYPE, java.lang.annotation.ElementType.METHOD, java.lang.annotation.ElementType.CONSTRUCTOR, java.lang.annotation.ElementType.FIELD, java.lang.annotation.ElementType.PACKAGE})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.CLASS)
public @interface RestrictTo {

    public enum Scope extends java.lang.Enum<android.support.annotation.RestrictTo.Scope> {
        private static final android.support.annotation.RestrictTo.Scope[] $VALUES = null;

        @java.lang.Deprecated
        public static final android.support.annotation.RestrictTo.Scope GROUP_ID = null;
        public static final android.support.annotation.RestrictTo.Scope LIBRARY = null;
        public static final android.support.annotation.RestrictTo.Scope LIBRARY_GROUP = null;
        public static final android.support.annotation.RestrictTo.Scope SUBCLASSES = null;
        public static final android.support.annotation.RestrictTo.Scope TESTS = null;

        static {
                android.support.annotation.RestrictTo$Scope r0 = new android.support.annotation.RestrictTo$Scope
                r1 = 0
                java.lang.String r2 = "LIBRARY"
                r0.<init>(r2, r1)
                android.support.annotation.RestrictTo.Scope.LIBRARY = r0
                android.support.annotation.RestrictTo$Scope r0 = new android.support.annotation.RestrictTo$Scope
                r2 = 1
                java.lang.String r3 = "LIBRARY_GROUP"
                r0.<init>(r3, r2)
                android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP = r0
                android.support.annotation.RestrictTo$Scope r0 = new android.support.annotation.RestrictTo$Scope
                r3 = 2
                java.lang.String r4 = "GROUP_ID"
                r0.<init>(r4, r3)
                android.support.annotation.RestrictTo.Scope.GROUP_ID = r0
                android.support.annotation.RestrictTo$Scope r0 = new android.support.annotation.RestrictTo$Scope
                r4 = 3
                java.lang.String r5 = "TESTS"
                r0.<init>(r5, r4)
                android.support.annotation.RestrictTo.Scope.TESTS = r0
                android.support.annotation.RestrictTo$Scope r0 = new android.support.annotation.RestrictTo$Scope
                r5 = 4
                java.lang.String r6 = "SUBCLASSES"
                r0.<init>(r6, r5)
                android.support.annotation.RestrictTo.Scope.SUBCLASSES = r0
                r6 = 5
                android.support.annotation.RestrictTo$Scope[] r6 = new android.support.annotation.RestrictTo.Scope[r6]
                android.support.annotation.RestrictTo$Scope r7 = android.support.annotation.RestrictTo.Scope.LIBRARY
                r6[r1] = r7
                android.support.annotation.RestrictTo$Scope r1 = android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP
                r6[r2] = r1
                android.support.annotation.RestrictTo$Scope r1 = android.support.annotation.RestrictTo.Scope.GROUP_ID
                r6[r3] = r1
                android.support.annotation.RestrictTo$Scope r1 = android.support.annotation.RestrictTo.Scope.TESTS
                r6[r4] = r1
                r6[r5] = r0
                android.support.annotation.RestrictTo.Scope.$VALUES = r6
                return
        }

        Scope(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static android.support.annotation.RestrictTo.Scope valueOf(java.lang.String r1) {
                java.lang.Class<android.support.annotation.RestrictTo$Scope> r0 = android.support.annotation.RestrictTo.Scope.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                android.support.annotation.RestrictTo$Scope r1 = (android.support.annotation.RestrictTo.Scope) r1
                return r1
        }

        public static android.support.annotation.RestrictTo.Scope[] values() {
                android.support.annotation.RestrictTo$Scope[] r0 = android.support.annotation.RestrictTo.Scope.$VALUES
                java.lang.Object r0 = r0.clone()
                android.support.annotation.RestrictTo$Scope[] r0 = (android.support.annotation.RestrictTo.Scope[]) r0
                return r0
        }
    }

    android.support.annotation.RestrictTo.Scope[] value();
}
