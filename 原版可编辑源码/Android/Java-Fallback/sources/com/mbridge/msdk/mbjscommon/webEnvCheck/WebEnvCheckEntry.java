package com.mbridge.msdk.mbjscommon.webEnvCheck;

public class WebEnvCheckEntry {
    public WebEnvCheckEntry() {
            r0 = this;
            r0.<init>()
            return
    }

    public void check(android.content.Context r7) {
            r6 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView
            r0.<init>(r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "<html><script>"
            r7.append(r1)
            com.mbridge.msdk.c.b.c r1 = com.mbridge.msdk.c.b.c.a()
            java.lang.String r1 = r1.b()
            r7.append(r1)
            java.lang.String r1 = "</script></html>"
            r7.append(r1)
            java.lang.String r2 = r7.toString()
            r1 = 0
            java.lang.String r3 = "text/html"
            java.lang.String r4 = "utf-8"
            r5 = 0
            r0.loadDataWithBaseURL(r1, r2, r3, r4, r5)
            return
    }
}
