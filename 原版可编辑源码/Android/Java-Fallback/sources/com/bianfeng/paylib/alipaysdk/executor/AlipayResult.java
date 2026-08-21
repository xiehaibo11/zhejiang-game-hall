package com.bianfeng.paylib.alipaysdk.executor;

public class AlipayResult {
    private java.lang.String memo;
    private java.lang.String rawResult;
    private java.lang.String result;
    private java.lang.String resultStatus;

    public AlipayResult(java.lang.String r6) {
            r5 = this;
            r5.<init>()
            r5.rawResult = r6
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto Lc
            return
        Lc:
            java.lang.String r0 = ";"
            java.lang.String[] r6 = r6.split(r0)
            int r0 = r6.length
            r1 = 0
        L14:
            if (r1 >= r0) goto L47
            r2 = r6[r1]
            java.lang.String r3 = "resultStatus"
            boolean r4 = r2.startsWith(r3)
            if (r4 == 0) goto L27
            java.lang.String r2 = r5.gatValue(r2, r3)
            r5.resultStatus = r2
            goto L44
        L27:
            java.lang.String r3 = "result"
            boolean r4 = r2.startsWith(r3)
            if (r4 == 0) goto L36
            java.lang.String r2 = r5.gatValue(r2, r3)
            r5.result = r2
            goto L44
        L36:
            java.lang.String r3 = "memo"
            boolean r4 = r2.startsWith(r3)
            if (r4 == 0) goto L44
            java.lang.String r2 = r5.gatValue(r2, r3)
            r5.memo = r2
        L44:
            int r1 = r1 + 1
            goto L14
        L47:
            return
    }

    private java.lang.String gatValue(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L25
            r0.<init>()     // Catch: java.lang.Exception -> L25
            r0.append(r3)     // Catch: java.lang.Exception -> L25
            java.lang.String r3 = "={"
            r0.append(r3)     // Catch: java.lang.Exception -> L25
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L25
            int r0 = r2.indexOf(r3)     // Catch: java.lang.Exception -> L25
            int r3 = r3.length()     // Catch: java.lang.Exception -> L25
            int r0 = r0 + r3
            java.lang.String r3 = "}"
            int r3 = r2.lastIndexOf(r3)     // Catch: java.lang.Exception -> L25
            java.lang.String r2 = r2.substring(r0, r3)     // Catch: java.lang.Exception -> L25
            return r2
        L25:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }

    public java.lang.String getMemo() {
            r1 = this;
            java.lang.String r0 = r1.memo
            return r0
    }

    public java.lang.String getResult() {
            r1 = this;
            java.lang.String r0 = r1.result
            return r0
    }

    public java.lang.String getResultStatus() {
            r1 = this;
            java.lang.String r0 = r1.resultStatus
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.rawResult
            return r0
    }
}
