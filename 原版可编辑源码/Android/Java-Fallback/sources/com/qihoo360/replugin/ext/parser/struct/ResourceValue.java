package com.qihoo360.replugin.ext.parser.struct;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public abstract class ResourceValue {
    protected final int value;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static class 1 {
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class RawValue extends com.qihoo360.replugin.ext.parser.struct.ResourceValue {
        private final short dataType;

        private RawValue(int r1, short r2) {
                r0 = this;
                r0.<init>(r1)
                r0.dataType = r2
                return
        }

        RawValue(int r1, short r2, com.qihoo360.replugin.ext.parser.struct.ResourceValue.1 r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        @Override
        public java.lang.String toStringValue() {
                r5 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "{"
                r0.append(r1)
                short r1 = r5.dataType
                r0.append(r1)
                java.lang.String r1 = ":"
                r0.append(r1)
                int r1 = r5.value
                long r1 = (long) r1
                r3 = 4294967295(0xffffffff, double:2.1219957905E-314)
                long r1 = r1 & r3
                r0.append(r1)
                java.lang.String r1 = "}"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class StringResourceValue extends com.qihoo360.replugin.ext.parser.struct.ResourceValue {
        private final com.qihoo360.replugin.ext.parser.struct.StringPool stringPool;

        private StringResourceValue(int r1, com.qihoo360.replugin.ext.parser.struct.StringPool r2) {
                r0 = this;
                r0.<init>(r1)
                r0.stringPool = r2
                return
        }

        StringResourceValue(int r1, com.qihoo360.replugin.ext.parser.struct.StringPool r2, com.qihoo360.replugin.ext.parser.struct.ResourceValue.1 r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        @Override
        public java.lang.String toStringValue() {
                r2 = this;
                int r0 = r2.value
                if (r0 < 0) goto Ld
                com.qihoo360.replugin.ext.parser.struct.StringPool r0 = r2.stringPool
                int r1 = r2.value
                java.lang.String r0 = r0.get(r1)
                return r0
            Ld:
                r0 = 0
                return r0
        }
    }

    protected ResourceValue(int r1) {
            r0 = this;
            r0.<init>()
            r0.value = r1
            return
    }

    public static com.qihoo360.replugin.ext.parser.struct.ResourceValue raw(int r2, short r3) {
            com.qihoo360.replugin.ext.parser.struct.ResourceValue$RawValue r0 = new com.qihoo360.replugin.ext.parser.struct.ResourceValue$RawValue
            r1 = 0
            r0.<init>(r2, r3, r1)
            return r0
    }

    public static com.qihoo360.replugin.ext.parser.struct.ResourceValue string(int r2, com.qihoo360.replugin.ext.parser.struct.StringPool r3) {
            com.qihoo360.replugin.ext.parser.struct.ResourceValue$StringResourceValue r0 = new com.qihoo360.replugin.ext.parser.struct.ResourceValue$StringResourceValue
            r1 = 0
            r0.<init>(r2, r3, r1)
            return r0
    }

    public abstract java.lang.String toStringValue();
}
