package com.mbridge.msdk.mbjscommon.windvane;

public class MvBridge extends com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload {
    public MvBridge() {
            r0 = this;
            r0.<init>()
            return
    }

    public void getDeviceInfo(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            r7 = r6
            com.mbridge.msdk.mbjscommon.windvane.a r7 = (com.mbridge.msdk.mbjscommon.windvane.a) r7
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = r7.a
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Exception -> L58
            r7.<init>()     // Catch: java.lang.Exception -> L58
            java.lang.String r0 = "a"
            java.lang.String r1 = "hello fail"
            r7.put(r0, r1)     // Catch: java.lang.Exception -> L58
            com.mbridge.msdk.mbjscommon.windvane.e.a()     // Catch: java.lang.Exception -> L58
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L58
            boolean r0 = r6 instanceof com.mbridge.msdk.mbjscommon.windvane.a     // Catch: java.lang.Exception -> L58
            if (r0 == 0) goto L58
            com.mbridge.msdk.mbjscommon.windvane.a r6 = (com.mbridge.msdk.mbjscommon.windvane.a) r6     // Catch: java.lang.Exception -> L58
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L58
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L32
            java.lang.String r0 = "javascript:window.MvBridge.onFailure(%s,'');"
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L58
            java.lang.String r4 = r6.g     // Catch: java.lang.Exception -> L58
            r3[r1] = r4     // Catch: java.lang.Exception -> L58
            java.lang.String.format(r0, r3)     // Catch: java.lang.Exception -> L58
            goto L36
        L32:
            java.lang.String r7 = com.mbridge.msdk.mbjscommon.windvane.k.c(r7)     // Catch: java.lang.Exception -> L58
        L36:
            java.lang.String r0 = "javascript:window.MvBridge.onFailure(%s,'%s');"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L58
            java.lang.String r4 = r6.g     // Catch: java.lang.Exception -> L58
            r3[r1] = r4     // Catch: java.lang.Exception -> L58
            r3[r2] = r7     // Catch: java.lang.Exception -> L58
            java.lang.String r7 = java.lang.String.format(r0, r3)     // Catch: java.lang.Exception -> L58
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r6.a     // Catch: java.lang.Exception -> L58
            if (r0 == 0) goto L58
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r6.a     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L54
            r6.loadUrl(r7)     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L54
            goto L58
        L4f:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Exception -> L58
            goto L58
        L54:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Exception -> L58
        L58:
            return
    }

    public void getTitle(java.lang.Object r6, java.lang.String r7) {
            r5 = this;
            r7 = r6
            com.mbridge.msdk.mbjscommon.windvane.a r7 = (com.mbridge.msdk.mbjscommon.windvane.a) r7
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r7.a
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L62
            r0.<init>()     // Catch: java.lang.Exception -> L62
            java.lang.String r1 = "a"
            java.lang.String r2 = "hello succ"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L62
            com.mbridge.msdk.mbjscommon.windvane.e r1 = com.mbridge.msdk.mbjscommon.windvane.e.a()     // Catch: java.lang.Exception -> L62
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L62
            r1.a(r6, r2)     // Catch: java.lang.Exception -> L62
            com.mbridge.msdk.mbjscommon.windvane.e.a()     // Catch: java.lang.Exception -> L62
            java.lang.String r6 = "receiveMessage"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L62
            boolean r1 = r7 instanceof com.mbridge.msdk.mbjscommon.windvane.a     // Catch: java.lang.Exception -> L62
            if (r1 == 0) goto L62
            com.mbridge.msdk.mbjscommon.windvane.a r7 = (com.mbridge.msdk.mbjscommon.windvane.a) r7     // Catch: java.lang.Exception -> L62
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L62
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L3e
            java.lang.String r0 = "javascript:window.MvBridge.fireEvent('%s', '');"
            java.lang.Object[] r1 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L62
            r1[r2] = r6     // Catch: java.lang.Exception -> L62
            java.lang.String r6 = java.lang.String.format(r0, r1)     // Catch: java.lang.Exception -> L62
            goto L4f
        L3e:
            java.lang.String r0 = com.mbridge.msdk.mbjscommon.windvane.k.c(r0)     // Catch: java.lang.Exception -> L62
            java.lang.String r1 = "javascript:window.MvBridge.fireEvent('%s','%s');"
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L62
            r4[r2] = r6     // Catch: java.lang.Exception -> L62
            r4[r3] = r0     // Catch: java.lang.Exception -> L62
            java.lang.String r6 = java.lang.String.format(r1, r4)     // Catch: java.lang.Exception -> L62
        L4f:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r7.a     // Catch: java.lang.Exception -> L62
            if (r0 == 0) goto L62
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = r7.a     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5e
            r7.loadUrl(r6)     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5e
            goto L62
        L59:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Exception -> L62
            goto L62
        L5e:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Exception -> L62
        L62:
            return
    }

    public void openWindow(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            r4 = r3
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1c
            r4.<init>()     // Catch: java.lang.Exception -> L1c
            java.lang.String r0 = "a"
            java.lang.String r1 = "hello succ"
            r4.put(r0, r1)     // Catch: java.lang.Exception -> L1c
            com.mbridge.msdk.mbjscommon.windvane.e r0 = com.mbridge.msdk.mbjscommon.windvane.e.a()     // Catch: java.lang.Exception -> L1c
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L1c
            r0.a(r3, r4)     // Catch: java.lang.Exception -> L1c
        L1c:
            return
    }

    @Override
    public void sendNoticeAndCallBackClick(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }
}
