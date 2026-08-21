package cz.msebera.android.httpclient.config;

@cz.msebera.android.httpclient.annotation.Immutable
public class ConnectionConfig implements java.lang.Cloneable {
    public static final cz.msebera.android.httpclient.config.ConnectionConfig DEFAULT = null;
    private final int bufferSize;
    private final java.nio.charset.Charset charset;
    private final int fragmentSizeHint;
    private final java.nio.charset.CodingErrorAction malformedInputAction;
    private final cz.msebera.android.httpclient.config.MessageConstraints messageConstraints;
    private final java.nio.charset.CodingErrorAction unmappableInputAction;

    public static class Builder {
        private int bufferSize;
        private java.nio.charset.Charset charset;
        private int fragmentSizeHint;
        private java.nio.charset.CodingErrorAction malformedInputAction;
        private cz.msebera.android.httpclient.config.MessageConstraints messageConstraints;
        private java.nio.charset.CodingErrorAction unmappableInputAction;

        Builder() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.fragmentSizeHint = r0
                return
        }

        public cz.msebera.android.httpclient.config.ConnectionConfig build() {
                r8 = this;
                java.nio.charset.Charset r0 = r8.charset
                if (r0 != 0) goto Le
                java.nio.charset.CodingErrorAction r1 = r8.malformedInputAction
                if (r1 != 0) goto Lc
                java.nio.charset.CodingErrorAction r1 = r8.unmappableInputAction
                if (r1 == 0) goto Le
            Lc:
                java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ASCII
            Le:
                r4 = r0
                int r0 = r8.bufferSize
                if (r0 <= 0) goto L15
                r2 = r0
                goto L19
            L15:
                r0 = 8192(0x2000, float:1.148E-41)
                r2 = 8192(0x2000, float:1.148E-41)
            L19:
                int r0 = r8.fragmentSizeHint
                if (r0 < 0) goto L1f
                r3 = r0
                goto L20
            L1f:
                r3 = r2
            L20:
                cz.msebera.android.httpclient.config.ConnectionConfig r0 = new cz.msebera.android.httpclient.config.ConnectionConfig
                java.nio.charset.CodingErrorAction r5 = r8.malformedInputAction
                java.nio.charset.CodingErrorAction r6 = r8.unmappableInputAction
                cz.msebera.android.httpclient.config.MessageConstraints r7 = r8.messageConstraints
                r1 = r0
                r1.<init>(r2, r3, r4, r5, r6, r7)
                return r0
        }

        public cz.msebera.android.httpclient.config.ConnectionConfig.Builder setBufferSize(int r1) {
                r0 = this;
                r0.bufferSize = r1
                return r0
        }

        public cz.msebera.android.httpclient.config.ConnectionConfig.Builder setCharset(java.nio.charset.Charset r1) {
                r0 = this;
                r0.charset = r1
                return r0
        }

        public cz.msebera.android.httpclient.config.ConnectionConfig.Builder setFragmentSizeHint(int r1) {
                r0 = this;
                r0.fragmentSizeHint = r1
                return r0
        }

        public cz.msebera.android.httpclient.config.ConnectionConfig.Builder setMalformedInputAction(java.nio.charset.CodingErrorAction r1) {
                r0 = this;
                r0.malformedInputAction = r1
                if (r1 == 0) goto Lc
                java.nio.charset.Charset r1 = r0.charset
                if (r1 != 0) goto Lc
                java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ASCII
                r0.charset = r1
            Lc:
                return r0
        }

        public cz.msebera.android.httpclient.config.ConnectionConfig.Builder setMessageConstraints(cz.msebera.android.httpclient.config.MessageConstraints r1) {
                r0 = this;
                r0.messageConstraints = r1
                return r0
        }

        public cz.msebera.android.httpclient.config.ConnectionConfig.Builder setUnmappableInputAction(java.nio.charset.CodingErrorAction r1) {
                r0 = this;
                r0.unmappableInputAction = r1
                if (r1 == 0) goto Lc
                java.nio.charset.Charset r1 = r0.charset
                if (r1 != 0) goto Lc
                java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.ASCII
                r0.charset = r1
            Lc:
                return r0
        }
    }

    static {
            cz.msebera.android.httpclient.config.ConnectionConfig$Builder r0 = new cz.msebera.android.httpclient.config.ConnectionConfig$Builder
            r0.<init>()
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = r0.build()
            cz.msebera.android.httpclient.config.ConnectionConfig.DEFAULT = r0
            return
    }

    ConnectionConfig(int r1, int r2, java.nio.charset.Charset r3, java.nio.charset.CodingErrorAction r4, java.nio.charset.CodingErrorAction r5, cz.msebera.android.httpclient.config.MessageConstraints r6) {
            r0 = this;
            r0.<init>()
            r0.bufferSize = r1
            r0.fragmentSizeHint = r2
            r0.charset = r3
            r0.malformedInputAction = r4
            r0.unmappableInputAction = r5
            r0.messageConstraints = r6
            return
    }

    public static cz.msebera.android.httpclient.config.ConnectionConfig.Builder copy(cz.msebera.android.httpclient.config.ConnectionConfig r2) {
            java.lang.String r0 = "Connection config"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.config.ConnectionConfig$Builder r0 = new cz.msebera.android.httpclient.config.ConnectionConfig$Builder
            r0.<init>()
            java.nio.charset.Charset r1 = r2.getCharset()
            cz.msebera.android.httpclient.config.ConnectionConfig$Builder r0 = r0.setCharset(r1)
            java.nio.charset.CodingErrorAction r1 = r2.getMalformedInputAction()
            cz.msebera.android.httpclient.config.ConnectionConfig$Builder r0 = r0.setMalformedInputAction(r1)
            java.nio.charset.CodingErrorAction r1 = r2.getUnmappableInputAction()
            cz.msebera.android.httpclient.config.ConnectionConfig$Builder r0 = r0.setUnmappableInputAction(r1)
            cz.msebera.android.httpclient.config.MessageConstraints r2 = r2.getMessageConstraints()
            cz.msebera.android.httpclient.config.ConnectionConfig$Builder r2 = r0.setMessageConstraints(r2)
            return r2
    }

    public static cz.msebera.android.httpclient.config.ConnectionConfig.Builder custom() {
            cz.msebera.android.httpclient.config.ConnectionConfig$Builder r0 = new cz.msebera.android.httpclient.config.ConnectionConfig$Builder
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.config.ConnectionConfig clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = (cz.msebera.android.httpclient.config.ConnectionConfig) r0
            return r0
    }

    protected java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            cz.msebera.android.httpclient.config.ConnectionConfig r0 = r1.clone()
            return r0
    }

    public int getBufferSize() {
            r1 = this;
            int r0 = r1.bufferSize
            return r0
    }

    public java.nio.charset.Charset getCharset() {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            return r0
    }

    public int getFragmentSizeHint() {
            r1 = this;
            int r0 = r1.fragmentSizeHint
            return r0
    }

    public java.nio.charset.CodingErrorAction getMalformedInputAction() {
            r1 = this;
            java.nio.charset.CodingErrorAction r0 = r1.malformedInputAction
            return r0
    }

    public cz.msebera.android.httpclient.config.MessageConstraints getMessageConstraints() {
            r1 = this;
            cz.msebera.android.httpclient.config.MessageConstraints r0 = r1.messageConstraints
            return r0
    }

    public java.nio.charset.CodingErrorAction getUnmappableInputAction() {
            r1 = this;
            java.nio.charset.CodingErrorAction r0 = r1.unmappableInputAction
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[bufferSize="
            r0.append(r1)
            int r1 = r2.bufferSize
            r0.append(r1)
            java.lang.String r1 = ", fragmentSizeHint="
            r0.append(r1)
            int r1 = r2.fragmentSizeHint
            r0.append(r1)
            java.lang.String r1 = ", charset="
            r0.append(r1)
            java.nio.charset.Charset r1 = r2.charset
            r0.append(r1)
            java.lang.String r1 = ", malformedInputAction="
            r0.append(r1)
            java.nio.charset.CodingErrorAction r1 = r2.malformedInputAction
            r0.append(r1)
            java.lang.String r1 = ", unmappableInputAction="
            r0.append(r1)
            java.nio.charset.CodingErrorAction r1 = r2.unmappableInputAction
            r0.append(r1)
            java.lang.String r1 = ", messageConstraints="
            r0.append(r1)
            cz.msebera.android.httpclient.config.MessageConstraints r1 = r2.messageConstraints
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
