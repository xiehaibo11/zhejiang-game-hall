package cz.msebera.android.httpclient.message;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class BasicHeaderElement implements cz.msebera.android.httpclient.HeaderElement, java.lang.Cloneable {
    private final java.lang.String name;
    private final cz.msebera.android.httpclient.NameValuePair[] parameters;
    private final java.lang.String value;

    public BasicHeaderElement(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public BasicHeaderElement(java.lang.String r2, java.lang.String r3, cz.msebera.android.httpclient.NameValuePair[] r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "Name"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.lang.String r2 = (java.lang.String) r2
            r1.name = r2
            r1.value = r3
            if (r4 == 0) goto L14
            r1.parameters = r4
            goto L19
        L14:
            r2 = 0
            cz.msebera.android.httpclient.NameValuePair[] r2 = new cz.msebera.android.httpclient.NameValuePair[r2]
            r1.parameters = r2
        L19:
            return
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            return r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof cz.msebera.android.httpclient.HeaderElement
            r2 = 0
            if (r1 == 0) goto L2c
            cz.msebera.android.httpclient.message.BasicHeaderElement r5 = (cz.msebera.android.httpclient.message.BasicHeaderElement) r5
            java.lang.String r1 = r4.name
            java.lang.String r3 = r5.name
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L2a
            java.lang.String r1 = r4.value
            java.lang.String r3 = r5.value
            boolean r1 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r3)
            if (r1 == 0) goto L2a
            cz.msebera.android.httpclient.NameValuePair[] r1 = r4.parameters
            cz.msebera.android.httpclient.NameValuePair[] r5 = r5.parameters
            boolean r5 = cz.msebera.android.httpclient.util.LangUtils.equals(r1, r5)
            if (r5 == 0) goto L2a
            goto L2b
        L2a:
            r0 = 0
        L2b:
            return r0
        L2c:
            return r2
    }

    @Override
    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.NameValuePair getParameter(int r2) {
            r1 = this;
            cz.msebera.android.httpclient.NameValuePair[] r0 = r1.parameters
            r2 = r0[r2]
            return r2
    }

    @Override
    public cz.msebera.android.httpclient.NameValuePair getParameterByName(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = "Name"
            cz.msebera.android.httpclient.util.Args.notNull(r6, r0)
            cz.msebera.android.httpclient.NameValuePair[] r0 = r5.parameters
            int r1 = r0.length
            r2 = 0
        L9:
            if (r2 >= r1) goto L1b
            r3 = r0[r2]
            java.lang.String r4 = r3.getName()
            boolean r4 = r4.equalsIgnoreCase(r6)
            if (r4 == 0) goto L18
            goto L1c
        L18:
            int r2 = r2 + 1
            goto L9
        L1b:
            r3 = 0
        L1c:
            return r3
    }

    @Override
    public int getParameterCount() {
            r1 = this;
            cz.msebera.android.httpclient.NameValuePair[] r0 = r1.parameters
            int r0 = r0.length
            return r0
    }

    @Override
    public cz.msebera.android.httpclient.NameValuePair[] getParameters() {
            r1 = this;
            cz.msebera.android.httpclient.NameValuePair[] r0 = r1.parameters
            java.lang.Object r0 = r0.clone()
            cz.msebera.android.httpclient.NameValuePair[] r0 = (cz.msebera.android.httpclient.NameValuePair[]) r0
            return r0
    }

    @Override
    public java.lang.String getValue() {
            r1 = this;
            java.lang.String r0 = r1.value
            return r0
    }

    public int hashCode() {
            r5 = this;
            java.lang.String r0 = r5.name
            r1 = 17
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r1, r0)
            java.lang.String r1 = r5.value
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r1)
            cz.msebera.android.httpclient.NameValuePair[] r1 = r5.parameters
            int r2 = r1.length
            r3 = 0
        L12:
            if (r3 >= r2) goto L1d
            r4 = r1[r3]
            int r0 = cz.msebera.android.httpclient.util.LangUtils.hashCode(r0, r4)
            int r3 = r3 + 1
            goto L12
        L1d:
            return r0
    }

    public java.lang.String toString() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r6.name
            r0.append(r1)
            java.lang.String r1 = r6.value
            if (r1 == 0) goto L18
            java.lang.String r1 = "="
            r0.append(r1)
            java.lang.String r1 = r6.value
            r0.append(r1)
        L18:
            cz.msebera.android.httpclient.NameValuePair[] r1 = r6.parameters
            int r2 = r1.length
            r3 = 0
        L1c:
            if (r3 >= r2) goto L2b
            r4 = r1[r3]
            java.lang.String r5 = "; "
            r0.append(r5)
            r0.append(r4)
            int r3 = r3 + 1
            goto L1c
        L2b:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
