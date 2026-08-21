package cz.msebera.android.httpclient.entity.mime;

public enum HttpMultipartMode extends java.lang.Enum<cz.msebera.android.httpclient.entity.mime.HttpMultipartMode> {
    private static final cz.msebera.android.httpclient.entity.mime.HttpMultipartMode[] $VALUES = null;
    public static final cz.msebera.android.httpclient.entity.mime.HttpMultipartMode BROWSER_COMPATIBLE = null;
    public static final cz.msebera.android.httpclient.entity.mime.HttpMultipartMode RFC6532 = null;
    public static final cz.msebera.android.httpclient.entity.mime.HttpMultipartMode STRICT = null;

    static {
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r0 = new cz.msebera.android.httpclient.entity.mime.HttpMultipartMode
            r1 = 0
            java.lang.String r2 = "STRICT"
            r0.<init>(r2, r1)
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.STRICT = r0
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r0 = new cz.msebera.android.httpclient.entity.mime.HttpMultipartMode
            r2 = 1
            java.lang.String r3 = "BROWSER_COMPATIBLE"
            r0.<init>(r3, r2)
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.BROWSER_COMPATIBLE = r0
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r0 = new cz.msebera.android.httpclient.entity.mime.HttpMultipartMode
            r3 = 2
            java.lang.String r4 = "RFC6532"
            r0.<init>(r4, r3)
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.RFC6532 = r0
            r0 = 3
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode[] r0 = new cz.msebera.android.httpclient.entity.mime.HttpMultipartMode[r0]
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r4 = cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.STRICT
            r0[r1] = r4
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r1 = cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.BROWSER_COMPATIBLE
            r0[r2] = r1
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r1 = cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.RFC6532
            r0[r3] = r1
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.$VALUES = r0
            return
    }

    HttpMultipartMode(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static cz.msebera.android.httpclient.entity.mime.HttpMultipartMode valueOf(java.lang.String r1) {
            java.lang.Class<cz.msebera.android.httpclient.entity.mime.HttpMultipartMode> r0 = cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode r1 = (cz.msebera.android.httpclient.entity.mime.HttpMultipartMode) r1
            return r1
    }

    public static cz.msebera.android.httpclient.entity.mime.HttpMultipartMode[] values() {
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode[] r0 = cz.msebera.android.httpclient.entity.mime.HttpMultipartMode.$VALUES
            java.lang.Object r0 = r0.clone()
            cz.msebera.android.httpclient.entity.mime.HttpMultipartMode[] r0 = (cz.msebera.android.httpclient.entity.mime.HttpMultipartMode[]) r0
            return r0
    }
}
