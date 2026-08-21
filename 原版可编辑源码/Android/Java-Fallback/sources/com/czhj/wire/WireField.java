package com.czhj.wire;

@java.lang.annotation.Target({java.lang.annotation.ElementType.FIELD})
@java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.RUNTIME)
public @interface WireField {

    public enum Label extends java.lang.Enum<com.czhj.wire.WireField.Label> {
        private static final com.czhj.wire.WireField.Label[] $VALUES = null;
        public static final com.czhj.wire.WireField.Label ONE_OF = null;
        public static final com.czhj.wire.WireField.Label OPTIONAL = null;
        public static final com.czhj.wire.WireField.Label PACKED = null;
        public static final com.czhj.wire.WireField.Label REPEATED = null;
        public static final com.czhj.wire.WireField.Label REQUIRED = null;

        static {
                com.czhj.wire.WireField$Label r0 = new com.czhj.wire.WireField$Label
                r1 = 0
                java.lang.String r2 = "REQUIRED"
                r0.<init>(r2, r1)
                com.czhj.wire.WireField.Label.REQUIRED = r0
                com.czhj.wire.WireField$Label r0 = new com.czhj.wire.WireField$Label
                r2 = 1
                java.lang.String r3 = "OPTIONAL"
                r0.<init>(r3, r2)
                com.czhj.wire.WireField.Label.OPTIONAL = r0
                com.czhj.wire.WireField$Label r0 = new com.czhj.wire.WireField$Label
                r3 = 2
                java.lang.String r4 = "REPEATED"
                r0.<init>(r4, r3)
                com.czhj.wire.WireField.Label.REPEATED = r0
                com.czhj.wire.WireField$Label r0 = new com.czhj.wire.WireField$Label
                r4 = 3
                java.lang.String r5 = "ONE_OF"
                r0.<init>(r5, r4)
                com.czhj.wire.WireField.Label.ONE_OF = r0
                com.czhj.wire.WireField$Label r0 = new com.czhj.wire.WireField$Label
                r5 = 4
                java.lang.String r6 = "PACKED"
                r0.<init>(r6, r5)
                com.czhj.wire.WireField.Label.PACKED = r0
                r6 = 5
                com.czhj.wire.WireField$Label[] r6 = new com.czhj.wire.WireField.Label[r6]
                com.czhj.wire.WireField$Label r7 = com.czhj.wire.WireField.Label.REQUIRED
                r6[r1] = r7
                com.czhj.wire.WireField$Label r1 = com.czhj.wire.WireField.Label.OPTIONAL
                r6[r2] = r1
                com.czhj.wire.WireField$Label r1 = com.czhj.wire.WireField.Label.REPEATED
                r6[r3] = r1
                com.czhj.wire.WireField$Label r1 = com.czhj.wire.WireField.Label.ONE_OF
                r6[r4] = r1
                r6[r5] = r0
                com.czhj.wire.WireField.Label.$VALUES = r6
                return
        }

        Label(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.czhj.wire.WireField.Label valueOf(java.lang.String r1) {
                java.lang.Class<com.czhj.wire.WireField$Label> r0 = com.czhj.wire.WireField.Label.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.czhj.wire.WireField$Label r1 = (com.czhj.wire.WireField.Label) r1
                return r1
        }

        public static com.czhj.wire.WireField.Label[] values() {
                com.czhj.wire.WireField$Label[] r0 = com.czhj.wire.WireField.Label.$VALUES
                java.lang.Object r0 = r0.clone()
                com.czhj.wire.WireField$Label[] r0 = (com.czhj.wire.WireField.Label[]) r0
                return r0
        }

        boolean a() {
                r1 = this;
                com.czhj.wire.WireField$Label r0 = com.czhj.wire.WireField.Label.REPEATED
                if (r1 == r0) goto Lb
                com.czhj.wire.WireField$Label r0 = com.czhj.wire.WireField.Label.PACKED
                if (r1 != r0) goto L9
                goto Lb
            L9:
                r0 = 0
                goto Lc
            Lb:
                r0 = 1
            Lc:
                return r0
        }

        boolean b() {
                r1 = this;
                com.czhj.wire.WireField$Label r0 = com.czhj.wire.WireField.Label.PACKED
                if (r1 != r0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                return r0
        }

        boolean c() {
                r1 = this;
                com.czhj.wire.WireField$Label r0 = com.czhj.wire.WireField.Label.ONE_OF
                if (r1 != r0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                return r0
        }
    }

    java.lang.String adapter();

    java.lang.String keyAdapter() default "";

    com.czhj.wire.WireField.Label label() default com.czhj.wire.WireField.Label.OPTIONAL;

    boolean redacted() default false;

    int tag();
}
