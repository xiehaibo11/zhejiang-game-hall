package cz.msebera.android.httpclient.entity.mime;

public class MinimalField {
    private final java.lang.String name;
    private final java.lang.String value;

    public MinimalField(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.name = r1
            r0.value = r2
            return
    }

    public java.lang.String getBody() {
            r1 = this;
            java.lang.String r0 = r1.value
            return r0
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.name
            r0.append(r1)
            java.lang.String r1 = ": "
            r0.append(r1)
            java.lang.String r1 = r2.value
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
