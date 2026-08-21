package cz.msebera.android.httpclient.impl.conn;

@cz.msebera.android.httpclient.annotation.Immutable
public class Wire {
    private final java.lang.String id;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    public Wire(cz.msebera.android.httpclient.extras.HttpClientAndroidLog r2) {
            r1 = this;
            java.lang.String r0 = ""
            r1.<init>(r2, r0)
            return
    }

    public Wire(cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.log = r1
            r0.id = r2
            return
    }

    private void wire(java.lang.String r7, java.io.InputStream r8) throws java.io.IOException {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
        L5:
            int r1 = r8.read()
            r2 = -1
            java.lang.String r3 = " "
            r4 = 0
            if (r1 == r2) goto L6b
            r2 = 13
            if (r1 != r2) goto L19
            java.lang.String r1 = "[\\r]"
            r0.append(r1)
            goto L5
        L19:
            r2 = 10
            if (r1 != r2) goto L4b
            java.lang.String r1 = "[\\n]\""
            r0.append(r1)
            java.lang.String r1 = "\""
            r0.insert(r4, r1)
            r0.insert(r4, r7)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r1 = r6.log
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = r6.id
            r2.append(r5)
            r2.append(r3)
            java.lang.String r3 = r0.toString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.debug(r2)
            r0.setLength(r4)
            goto L5
        L4b:
            r2 = 32
            if (r1 < r2) goto L59
            r2 = 127(0x7f, float:1.78E-43)
            if (r1 <= r2) goto L54
            goto L59
        L54:
            char r1 = (char) r1
            r0.append(r1)
            goto L5
        L59:
            java.lang.String r2 = "[0x"
            r0.append(r2)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            goto L5
        L6b:
            int r8 = r0.length()
            if (r8 <= 0) goto L99
            r8 = 34
            r0.append(r8)
            r0.insert(r4, r8)
            r0.insert(r4, r7)
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r7 = r6.log
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = r6.id
            r8.append(r1)
            r8.append(r3)
            java.lang.String r0 = r0.toString()
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            r7.debug(r8)
        L99:
            return
    }

    public boolean enabled() {
            r1 = this;
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = r1.log
            boolean r0 = r0.isDebugEnabled()
            return r0
    }

    public void input(int r3) throws java.io.IOException {
            r2 = this;
            r0 = 1
            byte[] r0 = new byte[r0]
            byte r3 = (byte) r3
            r1 = 0
            r0[r1] = r3
            r2.input(r0)
            return
    }

    public void input(java.io.InputStream r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Input"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = "<< "
            r1.wire(r0, r2)
            return
    }

    public void input(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Input"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            byte[] r2 = r2.getBytes()
            r1.input(r2)
            return
    }

    public void input(byte[] r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Input"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r2)
            java.lang.String r2 = "<< "
            r1.wire(r2, r0)
            return
    }

    public void input(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Input"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r2, r3, r4)
            java.lang.String r2 = "<< "
            r1.wire(r2, r0)
            return
    }

    public void output(int r3) throws java.io.IOException {
            r2 = this;
            r0 = 1
            byte[] r0 = new byte[r0]
            byte r3 = (byte) r3
            r1 = 0
            r0[r1] = r3
            r2.output(r0)
            return
    }

    public void output(java.io.InputStream r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Output"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r0 = ">> "
            r1.wire(r0, r2)
            return
    }

    public void output(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Output"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            byte[] r2 = r2.getBytes()
            r1.output(r2)
            return
    }

    public void output(byte[] r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Output"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r2)
            java.lang.String r2 = ">> "
            r1.wire(r2, r0)
            return
    }

    public void output(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Output"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r2, r3, r4)
            java.lang.String r2 = ">> "
            r1.wire(r2, r0)
            return
    }
}
