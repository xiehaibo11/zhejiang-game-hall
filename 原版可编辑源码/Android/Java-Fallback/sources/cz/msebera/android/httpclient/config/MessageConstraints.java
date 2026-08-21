package cz.msebera.android.httpclient.config;

public class MessageConstraints implements java.lang.Cloneable {
    public static final cz.msebera.android.httpclient.config.MessageConstraints DEFAULT = null;
    private final int maxHeaderCount;
    private final int maxLineLength;

    public static class Builder {
        private int maxHeaderCount;
        private int maxLineLength;

        Builder() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.maxLineLength = r0
                r1.maxHeaderCount = r0
                return
        }

        public cz.msebera.android.httpclient.config.MessageConstraints build() {
                r3 = this;
                cz.msebera.android.httpclient.config.MessageConstraints r0 = new cz.msebera.android.httpclient.config.MessageConstraints
                int r1 = r3.maxLineLength
                int r2 = r3.maxHeaderCount
                r0.<init>(r1, r2)
                return r0
        }

        public cz.msebera.android.httpclient.config.MessageConstraints.Builder setMaxHeaderCount(int r1) {
                r0 = this;
                r0.maxHeaderCount = r1
                return r0
        }

        public cz.msebera.android.httpclient.config.MessageConstraints.Builder setMaxLineLength(int r1) {
                r0 = this;
                r0.maxLineLength = r1
                return r0
        }
    }

    static {
            cz.msebera.android.httpclient.config.MessageConstraints$Builder r0 = new cz.msebera.android.httpclient.config.MessageConstraints$Builder
            r0.<init>()
            cz.msebera.android.httpclient.config.MessageConstraints r0 = r0.build()
            cz.msebera.android.httpclient.config.MessageConstraints.DEFAULT = r0
            return
    }

    MessageConstraints(int r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.maxLineLength = r1
            r0.maxHeaderCount = r2
            return
    }

    public static cz.msebera.android.httpclient.config.MessageConstraints.Builder copy(cz.msebera.android.httpclient.config.MessageConstraints r2) {
            java.lang.String r0 = "Message constraints"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.config.MessageConstraints$Builder r0 = new cz.msebera.android.httpclient.config.MessageConstraints$Builder
            r0.<init>()
            int r1 = r2.getMaxHeaderCount()
            cz.msebera.android.httpclient.config.MessageConstraints$Builder r0 = r0.setMaxHeaderCount(r1)
            int r2 = r2.getMaxLineLength()
            cz.msebera.android.httpclient.config.MessageConstraints$Builder r2 = r0.setMaxLineLength(r2)
            return r2
    }

    public static cz.msebera.android.httpclient.config.MessageConstraints.Builder custom() {
            cz.msebera.android.httpclient.config.MessageConstraints$Builder r0 = new cz.msebera.android.httpclient.config.MessageConstraints$Builder
            r0.<init>()
            return r0
    }

    public static cz.msebera.android.httpclient.config.MessageConstraints lineLen(int r2) {
            cz.msebera.android.httpclient.config.MessageConstraints r0 = new cz.msebera.android.httpclient.config.MessageConstraints
            java.lang.String r1 = "Max line length"
            int r2 = cz.msebera.android.httpclient.util.Args.notNegative(r2, r1)
            r1 = -1
            r0.<init>(r2, r1)
            return r0
    }

    protected cz.msebera.android.httpclient.config.MessageConstraints clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            cz.msebera.android.httpclient.config.MessageConstraints r0 = (cz.msebera.android.httpclient.config.MessageConstraints) r0
            return r0
    }

    protected java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            cz.msebera.android.httpclient.config.MessageConstraints r0 = r1.clone()
            return r0
    }

    public int getMaxHeaderCount() {
            r1 = this;
            int r0 = r1.maxHeaderCount
            return r0
    }

    public int getMaxLineLength() {
            r1 = this;
            int r0 = r1.maxLineLength
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[maxLineLength="
            r0.append(r1)
            int r1 = r2.maxLineLength
            r0.append(r1)
            java.lang.String r1 = ", maxHeaderCount="
            r0.append(r1)
            int r1 = r2.maxHeaderCount
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
