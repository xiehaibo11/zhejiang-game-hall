package com.tkay.expressad.atsignalcommon.webEnvCheck;

public class WebEnvCheckEntry {
    public WebEnvCheckEntry() {
            r0 = this;
            r0.<init>()
            return
    }

    public void check(android.content.Context r7) {
            r6 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> L2a
            r0.<init>(r7)     // Catch: java.lang.Throwable -> L2a
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = "<html><script>"
            r7.<init>(r1)     // Catch: java.lang.Throwable -> L2a
            com.tkay.expressad.d.b.b r1 = com.tkay.expressad.d.b.b.a()     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = r1.b()     // Catch: java.lang.Throwable -> L2a
            r7.append(r1)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = "</script></html>"
            r7.append(r1)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r2 = r7.toString()     // Catch: java.lang.Throwable -> L2a
            r1 = 0
            java.lang.String r3 = "text/html"
            java.lang.String r4 = "utf-8"
            r5 = 0
            r0.loadDataWithBaseURL(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L2a
            return
        L2a:
            r7 = move-exception
            r7.printStackTrace()
            return
    }
}
