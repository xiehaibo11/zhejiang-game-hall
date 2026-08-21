package com.mbridge.msdk.video.bt.a;

public final class c {
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.LinkedHashMap<java.lang.String, android.view.View>> a;
    private static java.util.LinkedHashMap<java.lang.String, java.lang.String> b;
    private static java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.foundation.entity.CampaignEx> c;
    private static java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> d;
    private static java.util.LinkedHashMap<java.lang.String, java.lang.String> e;
    private static java.util.LinkedHashMap<java.lang.String, java.lang.Integer> f;
    private static java.util.LinkedHashMap<java.lang.String, android.app.Activity> g;
    private static volatile int h;
    private static int i;
    private static int j;
    private static java.lang.String k;
    private static int l;
    private static int m;
    private static int n;
    private static int o;
    private static int p;




    private static class a {
        private static com.mbridge.msdk.video.bt.a.c a;

        static {
                com.mbridge.msdk.video.bt.a.c r0 = new com.mbridge.msdk.video.bt.a.c
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.video.bt.a.c.a.a = r0
                return
        }

        static com.mbridge.msdk.video.bt.a.c a() {
                com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a.a
                return r0
        }
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.video.bt.a.c.a = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.mbridge.msdk.video.bt.a.c.b = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.mbridge.msdk.video.bt.a.c.c = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.mbridge.msdk.video.bt.a.c.d = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.mbridge.msdk.video.bt.a.c.e = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.mbridge.msdk.video.bt.a.c.f = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            com.mbridge.msdk.video.bt.a.c.g = r0
            r0 = 10000(0x2710, float:1.4013E-41)
            com.mbridge.msdk.video.bt.a.c.h = r0
            r0 = 0
            com.mbridge.msdk.video.bt.a.c.i = r0
            r0 = 1
            com.mbridge.msdk.video.bt.a.c.j = r0
            java.lang.String r0 = ""
            com.mbridge.msdk.video.bt.a.c.k = r0
            return
    }

    private c() {
            r0 = this;
            r0.<init>()
            return
    }

    c(com.mbridge.msdk.video.bt.a.c.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private android.view.ViewGroup.LayoutParams a(android.view.ViewGroup.LayoutParams r5, android.graphics.Rect r6, int r7, int r8) {
            r4 = this;
            r0 = -999(0xfffffffffffffc19, float:NaN)
            if (r6 != 0) goto L9
            android.graphics.Rect r6 = new android.graphics.Rect
            r6.<init>(r0, r0, r0, r0)
        L9:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            if (r1 != 0) goto L14
            return r5
        L14:
            boolean r2 = r5 instanceof android.widget.FrameLayout.LayoutParams
            r3 = -1
            if (r2 == 0) goto L65
            android.widget.FrameLayout$LayoutParams r5 = new android.widget.FrameLayout$LayoutParams
            r5.<init>(r3, r3)
            int r2 = r6.left
            if (r2 == r0) goto L2b
            int r2 = r6.left
            float r2 = (float) r2
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r5.leftMargin = r2
        L2b:
            int r2 = r6.top
            if (r2 == r0) goto L38
            int r2 = r6.top
            float r2 = (float) r2
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r5.topMargin = r2
        L38:
            int r2 = r6.right
            if (r2 == r0) goto L45
            int r2 = r6.right
            float r2 = (float) r2
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r5.rightMargin = r2
        L45:
            int r2 = r6.bottom
            if (r2 == r0) goto L52
            int r6 = r6.bottom
            float r6 = (float) r6
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r1, r6)
            r5.bottomMargin = r6
        L52:
            if (r7 <= 0) goto L5b
            float r6 = (float) r7
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r1, r6)
            r5.width = r6
        L5b:
            if (r8 <= 0) goto L64
            float r6 = (float) r8
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r1, r6)
            r5.height = r6
        L64:
            return r5
        L65:
            boolean r2 = r5 instanceof android.widget.RelativeLayout.LayoutParams
            if (r2 == 0) goto Lb5
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r5.<init>(r3, r3)
            int r2 = r6.left
            if (r2 == r0) goto L7b
            int r2 = r6.left
            float r2 = (float) r2
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r5.leftMargin = r2
        L7b:
            int r2 = r6.top
            if (r2 == r0) goto L88
            int r2 = r6.top
            float r2 = (float) r2
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r5.topMargin = r2
        L88:
            int r2 = r6.right
            if (r2 == r0) goto L95
            int r2 = r6.right
            float r2 = (float) r2
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r5.rightMargin = r2
        L95:
            int r2 = r6.bottom
            if (r2 == r0) goto La2
            int r6 = r6.bottom
            float r6 = (float) r6
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r1, r6)
            r5.bottomMargin = r6
        La2:
            if (r7 <= 0) goto Lab
            float r6 = (float) r7
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r1, r6)
            r5.width = r6
        Lab:
            if (r8 <= 0) goto Lb4
            float r6 = (float) r8
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r1, r6)
            r5.height = r6
        Lb4:
            return r5
        Lb5:
            boolean r2 = r5 instanceof android.widget.LinearLayout.LayoutParams
            if (r2 == 0) goto L104
            android.widget.LinearLayout$LayoutParams r5 = new android.widget.LinearLayout$LayoutParams
            r5.<init>(r3, r3)
            int r2 = r6.left
            if (r2 == r0) goto Lcb
            int r2 = r6.left
            float r2 = (float) r2
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r5.leftMargin = r2
        Lcb:
            int r2 = r6.top
            if (r2 == r0) goto Ld8
            int r2 = r6.top
            float r2 = (float) r2
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r5.topMargin = r2
        Ld8:
            int r2 = r6.right
            if (r2 == r0) goto Le5
            int r2 = r6.right
            float r2 = (float) r2
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r5.rightMargin = r2
        Le5:
            int r2 = r6.bottom
            if (r2 == r0) goto Lf2
            int r6 = r6.bottom
            float r6 = (float) r6
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r1, r6)
            r5.bottomMargin = r6
        Lf2:
            if (r7 <= 0) goto Lfb
            float r6 = (float) r7
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r1, r6)
            r5.width = r6
        Lfb:
            if (r8 <= 0) goto L104
            float r6 = (float) r8
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r1, r6)
            r5.height = r6
        L104:
            return r5
    }

    public static com.mbridge.msdk.video.bt.a.c a() {
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a.a()
            return r0
    }

    static void a(com.mbridge.msdk.video.bt.a.c r0, java.lang.String r1, com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.d.a>> r0 = com.mbridge.msdk.foundation.same.a.d.d
            if (r0 == 0) goto L13
            java.lang.String r0 = r2.getId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L13
            java.lang.String r0 = "reward"
            com.mbridge.msdk.foundation.same.a.d.a(r1, r2, r0)
        L13:
            return
    }

    private void a(java.lang.Object r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.video.bt.a.c.i     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = "id"
            r1.put(r2, r6)     // Catch: java.lang.Exception -> L30
            java.lang.String r6 = "data"
            r0.put(r6, r1)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.mbjscommon.windvane.h r6 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r6.a(r4, r5, r0)     // Catch: java.lang.Exception -> L30
            goto L41
        L30:
            r5 = move-exception
            java.lang.String r6 = r5.getMessage()
            r3.c(r4, r6)
            java.lang.String r4 = r5.getMessage()
            java.lang.String r5 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r5, r4)
        L41:
            return
    }

    static java.util.LinkedHashMap c() {
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.video.bt.a.c.b
            return r0
    }

    private void c(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.video.bt.a.c.j     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "message"
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L30
            java.lang.String r5 = "data"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            r0.put(r5, r1)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r5.a(r4, r0)     // Catch: java.lang.Exception -> L30
            goto L3a
        L30:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r5 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r5, r4)
        L3a:
            return
    }

    private java.lang.String i(java.lang.String r2) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.video.bt.a.c.b
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L11
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.video.bt.a.c.b
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
        L11:
            java.lang.String r2 = ""
            return r2
    }

    public final void A(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> L89
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> L89
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L89
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L89
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L89
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L89
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> L89
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L89
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> L89
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> L89
            if (r1 == 0) goto L6f
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> L89
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> L89
            boolean r1 = r8 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> L89
            if (r1 == 0) goto L55
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r8 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r8     // Catch: java.lang.Throwable -> L89
            r8.resume()     // Catch: java.lang.Throwable -> L89
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r8 = "playerResume success"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L89
            goto La9
        L55:
            java.lang.String r8 = "instanceId is not player"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L89
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L89
            r8.<init>()     // Catch: java.lang.Throwable -> L89
            java.lang.String r1 = "playerResume failed instanceId is not player instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L89
            r8.append(r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L89
            goto La9
        L6f:
            java.lang.String r8 = "instanceId not exit"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L89
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L89
            r8.<init>()     // Catch: java.lang.Throwable -> L89
            java.lang.String r1 = "playerResume failed instanceId not exit instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L89
            r8.append(r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L89
            goto La9
        L89:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "playerResume failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        La9:
            return
    }

    public final void B(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> L89
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> L89
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L89
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L89
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L89
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L89
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> L89
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L89
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> L89
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> L89
            if (r1 == 0) goto L6f
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> L89
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> L89
            boolean r1 = r8 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> L89
            if (r1 == 0) goto L55
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r8 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r8     // Catch: java.lang.Throwable -> L89
            r8.stop()     // Catch: java.lang.Throwable -> L89
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r8 = "playerStop success"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L89
            goto La9
        L55:
            java.lang.String r8 = "instanceId is not player"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L89
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L89
            r8.<init>()     // Catch: java.lang.Throwable -> L89
            java.lang.String r1 = "playerStop failed instanceId is not player instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L89
            r8.append(r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L89
            goto La9
        L6f:
            java.lang.String r8 = "instanceId not exit"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L89
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L89
            r8.<init>()     // Catch: java.lang.Throwable -> L89
            java.lang.String r1 = "playerStop failed instanceId not exit instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L89
            r8.append(r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L89
            goto La9
        L89:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "playerStop failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        La9:
            return
    }

    public final void C(java.lang.Object r2, org.json.JSONObject r3) {
            r1 = this;
            java.lang.String r0 = "unitId"
            r3.optString(r0)     // Catch: java.lang.Throwable -> L13
            java.lang.String r0 = "data"
            org.json.JSONObject r3 = r3.optJSONObject(r0)     // Catch: java.lang.Throwable -> L13
            if (r3 != 0) goto L1b
            java.lang.String r3 = "data is empty"
            r1.c(r2, r3)     // Catch: java.lang.Throwable -> L13
            return
        L13:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            r1.c(r2, r3)
        L1b:
            return
    }

    public final void D(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> L79
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> L79
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L79
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L79
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L79
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L79
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> L79
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L79
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> L79
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> L79
            if (r1 == 0) goto L6e
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> L79
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> L79
            boolean r1 = r8 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> L79
            if (r1 == 0) goto L63
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r8 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r8     // Catch: java.lang.Throwable -> L79
            boolean r8 = r8.playMute()     // Catch: java.lang.Throwable -> L79
            if (r8 == 0) goto L58
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r8 = "playerMute success"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L79
            goto L99
        L58:
            java.lang.String r8 = "set mute failed"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L79
            java.lang.String r8 = "playerMute failed set mute failed"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L79
            goto L99
        L63:
            java.lang.String r8 = "instanceId is not player"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L79
            java.lang.String r8 = "playerMute failed: instanceId is not player"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L79
            goto L99
        L6e:
            java.lang.String r8 = "instanceId not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L79
            java.lang.String r8 = "playerMute failed: instanceId is not exist"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L79
            goto L99
        L79:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "playerMute failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        L99:
            return
    }

    public final void E(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> L7e
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L7e
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L7e
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L7e
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L7e
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L7e
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> L7e
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L7e
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> L7e
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> L7e
            if (r1 == 0) goto L73
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> L7e
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> L7e
            boolean r1 = r8 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> L7e
            if (r1 == 0) goto L68
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r8 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r8     // Catch: java.lang.Throwable -> L7e
            boolean r8 = r8.playUnMute()     // Catch: java.lang.Throwable -> L7e
            if (r8 == 0) goto L5d
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = "onUnmute"
            r6.a(r7, r8, r2)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = "playerUnmute successed"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L7e
            goto L9e
        L5d:
            java.lang.String r8 = "set unmute failed"
            r6.a(r7, r8)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = "playerUnmute failed: set unmute failed"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L7e
            goto L9e
        L68:
            java.lang.String r8 = "instanceId is not player"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = "playerUnmute failed: instanceId is not player"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L7e
            goto L9e
        L73:
            java.lang.String r8 = "instanceId not exit"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = "playerUnmute failed: instanceId not exit"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L7e
            goto L9e
        L7e:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "playerUnmute failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        L9e:
            return
    }

    public final void F(java.lang.Object r9, org.json.JSONObject r10) {
            r8 = this;
            java.lang.String r0 = "data"
            java.lang.String r1 = "id"
            java.lang.String r2 = "OperateViews"
            java.lang.String r3 = "unitId"
            java.lang.String r3 = r10.optString(r3)     // Catch: java.lang.Throwable -> La8
            java.lang.String r4 = r10.optString(r1)     // Catch: java.lang.Throwable -> La8
            java.lang.String r5 = r8.i(r4)     // Catch: java.lang.Throwable -> La8
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> La8
            if (r6 == 0) goto L27
            r6 = r9
            com.mbridge.msdk.mbjscommon.windvane.a r6 = (com.mbridge.msdk.mbjscommon.windvane.a) r6     // Catch: java.lang.Throwable -> La8
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = r6.a     // Catch: java.lang.Throwable -> La8
            if (r7 == 0) goto L27
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r6.a     // Catch: java.lang.Throwable -> La8
            java.lang.String r5 = r5.getRid()     // Catch: java.lang.Throwable -> La8
        L27:
            org.json.JSONObject r10 = r10.optJSONObject(r0)     // Catch: java.lang.Throwable -> La8
            if (r10 != 0) goto L33
            java.lang.String r10 = "data is empty"
            r8.c(r9, r10)     // Catch: java.lang.Throwable -> La8
            return
        L33:
            java.util.LinkedHashMap r10 = r8.b(r3, r5)     // Catch: java.lang.Throwable -> La8
            boolean r3 = r10.containsKey(r4)     // Catch: java.lang.Throwable -> La8
            if (r3 == 0) goto L9d
            java.lang.Object r10 = r10.get(r4)     // Catch: java.lang.Throwable -> La8
            android.view.View r10 = (android.view.View) r10     // Catch: java.lang.Throwable -> La8
            boolean r3 = r10 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> La8
            if (r3 == 0) goto L92
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r10 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r10     // Catch: java.lang.Throwable -> La8
            int r10 = r10.getMute()     // Catch: java.lang.Throwable -> La8
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La8
            r3.<init>()     // Catch: java.lang.Throwable -> La8
            java.lang.String r5 = "code"
            int r6 = com.mbridge.msdk.video.bt.a.c.i     // Catch: java.lang.Throwable -> La8
            r3.put(r5, r6)     // Catch: java.lang.Throwable -> La8
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La8
            r5.<init>()     // Catch: java.lang.Throwable -> La8
            r5.put(r1, r4)     // Catch: java.lang.Throwable -> La8
            java.lang.String r1 = "mute"
            r5.put(r1, r10)     // Catch: java.lang.Throwable -> La8
            r3.put(r0, r5)     // Catch: java.lang.Throwable -> La8
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> La8
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> La8
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> La8
            r3 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)     // Catch: java.lang.Throwable -> La8
            r0.a(r9, r1)     // Catch: java.lang.Throwable -> La8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La8
            r0.<init>()     // Catch: java.lang.Throwable -> La8
            java.lang.String r1 = "playerGetMuteState successed mute = "
            r0.append(r1)     // Catch: java.lang.Throwable -> La8
            r0.append(r10)     // Catch: java.lang.Throwable -> La8
            java.lang.String r10 = r0.toString()     // Catch: java.lang.Throwable -> La8
            com.mbridge.msdk.foundation.tools.z.a(r2, r10)     // Catch: java.lang.Throwable -> La8
            goto Lc8
        L92:
            java.lang.String r10 = "instanceId is not player"
            r8.c(r9, r10)     // Catch: java.lang.Throwable -> La8
            java.lang.String r10 = "playerGetMuteState failed instanceId is not player"
            com.mbridge.msdk.foundation.tools.z.a(r2, r10)     // Catch: java.lang.Throwable -> La8
            goto Lc8
        L9d:
            java.lang.String r10 = "instanceId not exist"
            r8.c(r9, r10)     // Catch: java.lang.Throwable -> La8
            java.lang.String r10 = "playerGetMuteState failed instanceId not exist"
            com.mbridge.msdk.foundation.tools.z.a(r2, r10)     // Catch: java.lang.Throwable -> La8
            goto Lc8
        La8:
            r10 = move-exception
            java.lang.String r0 = r10.getMessage()
            r8.c(r9, r0)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "playerGetMuteState failed: "
            r9.append(r0)
            java.lang.String r10 = r10.getMessage()
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            com.mbridge.msdk.foundation.tools.z.a(r2, r9)
        Lc8:
            return
    }

    public final void G(java.lang.Object r2, org.json.JSONObject r3) {
            r1 = this;
            java.lang.String r0 = "unitId"
            r3.optString(r0)     // Catch: java.lang.Throwable -> L13
            java.lang.String r0 = "data"
            org.json.JSONObject r3 = r3.optJSONObject(r0)     // Catch: java.lang.Throwable -> L13
            if (r3 != 0) goto L1b
            java.lang.String r3 = "data is empty"
            r1.c(r2, r3)     // Catch: java.lang.Throwable -> L13
            return
        L13:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            r1.c(r2, r3)
        L1b:
            return
    }

    public final void H(java.lang.Object r2, org.json.JSONObject r3) {
            r1 = this;
            java.lang.String r0 = "unitId"
            r3.optString(r0)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r0 = "id"
            r3.optString(r0)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r0 = "data"
            org.json.JSONObject r3 = r3.optJSONObject(r0)     // Catch: java.lang.Throwable -> L1e
            if (r3 != 0) goto L18
            java.lang.String r3 = "data is empty"
            r1.c(r2, r3)     // Catch: java.lang.Throwable -> L1e
            return
        L18:
            java.lang.String r3 = "android mediaPlayer not support setScaleType"
            r1.c(r2, r3)     // Catch: java.lang.Throwable -> L1e
            goto L26
        L1e:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            r1.c(r2, r3)
        L26:
            return
    }

    public final void I(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r1 = "id"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = r5.i(r1)     // Catch: java.lang.Throwable -> L5a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L5a
            if (r3 == 0) goto L23
            r3 = r6
            com.mbridge.msdk.mbjscommon.windvane.a r3 = (com.mbridge.msdk.mbjscommon.windvane.a) r3     // Catch: java.lang.Throwable -> L5a
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r3.a     // Catch: java.lang.Throwable -> L5a
            if (r4 == 0) goto L23
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r3.a     // Catch: java.lang.Throwable -> L5a
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> L5a
        L23:
            java.lang.String r3 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r3)     // Catch: java.lang.Throwable -> L5a
            if (r7 != 0) goto L31
            java.lang.String r7 = "data is empty"
            r5.c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            return
        L31:
            java.util.LinkedHashMap r7 = r5.b(r0, r2)     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L54
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L5a
            android.view.View r7 = (android.view.View) r7     // Catch: java.lang.Throwable -> L5a
            boolean r0 = r7 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L4e
            com.mbridge.msdk.video.bt.module.MBTempContainer r7 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r7     // Catch: java.lang.Throwable -> L5a
            r7.preload()     // Catch: java.lang.Throwable -> L5a
            r5.a(r6, r1)     // Catch: java.lang.Throwable -> L5a
            goto L7c
        L4e:
            java.lang.String r7 = "view not exist"
            r5.c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            goto L7c
        L54:
            java.lang.String r7 = "instanceId not exist"
            r5.c(r6, r7)     // Catch: java.lang.Throwable -> L5a
            goto L7c
        L5a:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            r5.c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "preloadSubPlayTemplateView failed: "
            r6.append(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r7, r6)
        L7c:
            return
    }

    public final void J(java.lang.Object r10, org.json.JSONObject r11) {
            r9 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r11.optString(r1)     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r2 = "id"
            java.lang.String r2 = r11.optString(r2)     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r3 = r9.i(r2)     // Catch: java.lang.Throwable -> Ld5
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Ld5
            if (r4 == 0) goto L25
            r4 = r10
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> Ld5
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> Ld5
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> Ld5
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r11 = r11.optJSONObject(r4)     // Catch: java.lang.Throwable -> Ld5
            if (r11 != 0) goto L33
            java.lang.String r11 = "data is empty"
            r9.c(r10, r11)     // Catch: java.lang.Throwable -> Ld5
            return
        L33:
            java.util.LinkedHashMap r11 = r9.b(r1, r3)     // Catch: java.lang.Throwable -> Ld5
            r4 = 0
            int r5 = r11.size()     // Catch: java.lang.Throwable -> Ld5
            if (r5 <= 0) goto Lbb
            java.util.Collection r5 = r11.values()     // Catch: java.lang.Throwable -> Ld5
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> Ld5
        L46:
            boolean r6 = r5.hasNext()     // Catch: java.lang.Throwable -> Ld5
            if (r6 == 0) goto L86
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Throwable -> Ld5
            android.view.View r6 = (android.view.View) r6     // Catch: java.lang.Throwable -> Ld5
            boolean r7 = r6 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTContainer     // Catch: java.lang.Throwable -> Ld5
            if (r7 == 0) goto L5a
            r4 = r6
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r4 = (com.mbridge.msdk.video.bt.module.MBridgeBTContainer) r4     // Catch: java.lang.Throwable -> Ld5
            goto L46
        L5a:
            boolean r7 = r6 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTWebView     // Catch: java.lang.Throwable -> Ld5
            if (r7 == 0) goto L64
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r6 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r6     // Catch: java.lang.Throwable -> Ld5
            r6.onDestory()     // Catch: java.lang.Throwable -> Ld5
            goto L46
        L64:
            boolean r7 = r6 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> Ld5
            if (r7 == 0) goto L7c
            r7 = r6
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r7 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r7     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r7 = r7.getInstanceId()     // Catch: java.lang.Throwable -> Ld5
            com.mbridge.msdk.video.bt.a.a r8 = com.mbridge.msdk.video.bt.a.a.a()     // Catch: java.lang.Throwable -> Ld5
            r8.a(r7)     // Catch: java.lang.Throwable -> Ld5
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r6 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r6     // Catch: java.lang.Throwable -> Ld5
            r6.onDestory()     // Catch: java.lang.Throwable -> Ld5
            goto L46
        L7c:
            boolean r7 = r6 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> Ld5
            if (r7 == 0) goto L46
            com.mbridge.msdk.video.bt.module.MBTempContainer r6 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r6     // Catch: java.lang.Throwable -> Ld5
            r6.onDestroy()     // Catch: java.lang.Throwable -> Ld5
            goto L46
        L86:
            if (r4 == 0) goto Lb0
            r4.onAdClose()     // Catch: java.lang.Throwable -> Ld5
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.LinkedHashMap<java.lang.String, android.view.View>> r4 = com.mbridge.msdk.video.bt.a.c.a     // Catch: java.lang.Throwable -> Ld5
            r4.remove(r11)     // Catch: java.lang.Throwable -> Ld5
            r11.clear()     // Catch: java.lang.Throwable -> Ld5
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.LinkedHashMap<java.lang.String, android.view.View>> r11 = com.mbridge.msdk.video.bt.a.c.a     // Catch: java.lang.Throwable -> Ld5
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld5
            r4.<init>()     // Catch: java.lang.Throwable -> Ld5
            r4.append(r1)     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r1 = "_"
            r4.append(r1)     // Catch: java.lang.Throwable -> Ld5
            r4.append(r3)     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> Ld5
            r11.remove(r1)     // Catch: java.lang.Throwable -> Ld5
            r9.a(r10, r2)     // Catch: java.lang.Throwable -> Ld5
            return
        Lb0:
            java.lang.String r11 = "not found MBridgeBTContainer"
            r9.c(r10, r11)     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r11 = "closeAd successed"
            com.mbridge.msdk.foundation.tools.z.a(r0, r11)     // Catch: java.lang.Throwable -> Ld5
            goto Lf5
        Lbb:
            java.lang.String r11 = "unitId or instanceId not exist"
            r9.c(r10, r11)     // Catch: java.lang.Throwable -> Ld5
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld5
            r11.<init>()     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r2 = "closeAd failed: unitId or instanceId not exist unitId = "
            r11.append(r2)     // Catch: java.lang.Throwable -> Ld5
            r11.append(r1)     // Catch: java.lang.Throwable -> Ld5
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Ld5
            com.mbridge.msdk.foundation.tools.z.a(r0, r11)     // Catch: java.lang.Throwable -> Ld5
            goto Lf5
        Ld5:
            r11 = move-exception
            java.lang.String r1 = r11.getMessage()
            r9.c(r10, r1)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = "closeAd failed: "
            r10.append(r1)
            java.lang.String r11 = r11.getMessage()
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r10)
        Lf5:
            return
    }

    public final void K(java.lang.Object r6, org.json.JSONObject r7) {
            r5 = this;
            r0 = r6
            com.mbridge.msdk.mbjscommon.windvane.a r0 = (com.mbridge.msdk.mbjscommon.windvane.a) r0     // Catch: java.lang.Throwable -> L61
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r0.a     // Catch: java.lang.Throwable -> L61
            java.lang.String r2 = ""
            if (r1 == 0) goto L10
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.a     // Catch: java.lang.Throwable -> L61
            java.lang.String r0 = r0.getRid()     // Catch: java.lang.Throwable -> L61
            goto L11
        L10:
            r0 = r2
        L11:
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r7.optString(r1)     // Catch: java.lang.Throwable -> L61
            java.lang.String r3 = "eventName"
            java.lang.String r3 = r7.optString(r3)     // Catch: java.lang.Throwable -> L61
            java.lang.String r4 = "data"
            org.json.JSONObject r7 = r7.optJSONObject(r4)     // Catch: java.lang.Throwable -> L61
            java.util.LinkedHashMap r0 = r5.b(r1, r0)     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto L5b
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L61
            if (r1 <= 0) goto L5b
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Throwable -> L61
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L61
        L37:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L61
            if (r1 == 0) goto L57
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L61
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L61
            boolean r4 = r1 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTWebView     // Catch: java.lang.Throwable -> L61
            if (r4 == 0) goto L4d
            r4 = r1
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r4 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r4     // Catch: java.lang.Throwable -> L61
            r4.broadcast(r3, r7)     // Catch: java.lang.Throwable -> L61
        L4d:
            boolean r4 = r1 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTLayout     // Catch: java.lang.Throwable -> L61
            if (r4 == 0) goto L37
            com.mbridge.msdk.video.bt.module.MBridgeBTLayout r1 = (com.mbridge.msdk.video.bt.module.MBridgeBTLayout) r1     // Catch: java.lang.Throwable -> L61
            r1.broadcast(r3, r7)     // Catch: java.lang.Throwable -> L61
            goto L37
        L57:
            r5.a(r6, r2)     // Catch: java.lang.Throwable -> L61
            goto L83
        L5b:
            java.lang.String r7 = "unitId not exist"
            r5.c(r6, r7)     // Catch: java.lang.Throwable -> L61
            goto L83
        L61:
            r7 = move-exception
            java.lang.String r0 = r7.getMessage()
            r5.c(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "broadcast failed: "
            r6.append(r0)
            java.lang.String r7 = r7.getMessage()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r7, r6)
        L83:
            return
    }

    public final void L(java.lang.Object r12, org.json.JSONObject r13) {
            r11 = this;
            java.lang.String r0 = "id"
            java.lang.String r1 = "OperateViews"
            r2 = r12
            com.mbridge.msdk.mbjscommon.windvane.a r2 = (com.mbridge.msdk.mbjscommon.windvane.a) r2     // Catch: java.lang.Throwable -> Ld4
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r2.a     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r4 = ""
            if (r3 == 0) goto L14
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r2.a     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r2 = r2.getRid()     // Catch: java.lang.Throwable -> Ld4
            goto L15
        L14:
            r2 = r4
        L15:
            java.lang.String r3 = "unitId"
            java.lang.String r3 = r13.optString(r3)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r5 = r13.optString(r0)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r6 = "data"
            org.json.JSONObject r13 = r13.optJSONObject(r6)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r6 = "userId"
            java.lang.String r6 = r13.optString(r6)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r7 = "expired"
            boolean r7 = r13.optBoolean(r7)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r8 = "reward"
            org.json.JSONObject r8 = r13.optJSONObject(r8)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r9 = "extra"
            java.lang.String r13 = r13.optString(r9)     // Catch: java.lang.Throwable -> Ld4
            r9 = 0
            if (r8 == 0) goto L55
            com.mbridge.msdk.videocommon.b.d r9 = new com.mbridge.msdk.videocommon.b.d     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r4 = "name"
            java.lang.String r4 = r8.optString(r4)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r10 = "amount"
            int r10 = r8.optInt(r10)     // Catch: java.lang.Throwable -> Ld4
            r9.<init>(r4, r10)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r4 = r8.optString(r0)     // Catch: java.lang.Throwable -> Ld4
        L55:
            java.util.LinkedHashMap r0 = r11.b(r3, r2)     // Catch: java.lang.Throwable -> Ld4
            int r2 = r0.size()     // Catch: java.lang.Throwable -> Ld4
            if (r2 <= 0) goto Lba
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r2 = com.mbridge.msdk.video.bt.a.c.e     // Catch: java.lang.Throwable -> Ld4
            boolean r2 = r2.containsKey(r5)     // Catch: java.lang.Throwable -> Ld4
            if (r2 == 0) goto Lba
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> Ld4
            android.view.View r0 = (android.view.View) r0     // Catch: java.lang.Throwable -> Ld4
            boolean r2 = r0 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> Ld4
            if (r2 == 0) goto La0
            com.mbridge.msdk.video.bt.module.MBTempContainer r0 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r0     // Catch: java.lang.Throwable -> Ld4
            r0.setReward(r9)     // Catch: java.lang.Throwable -> Ld4
            r0.setUserId(r6)     // Catch: java.lang.Throwable -> Ld4
            r0.setRewardId(r4)     // Catch: java.lang.Throwable -> Ld4
            r0.setCampaignExpired(r7)     // Catch: java.lang.Throwable -> Ld4
            boolean r2 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> Ld4
            if (r2 != 0) goto L88
            r0.setDeveloperExtraData(r13)     // Catch: java.lang.Throwable -> Ld4
        L88:
            r11.a(r12, r5)     // Catch: java.lang.Throwable -> Ld4
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld4
            r13.<init>()     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r0 = "setSubPlayTemplateInfo success instanceId = "
            r13.append(r0)     // Catch: java.lang.Throwable -> Ld4
            r13.append(r5)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> Ld4
            com.mbridge.msdk.foundation.tools.z.a(r1, r13)     // Catch: java.lang.Throwable -> Ld4
            goto Lf4
        La0:
            java.lang.String r13 = "instanceId not exist"
            r11.c(r12, r13)     // Catch: java.lang.Throwable -> Ld4
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld4
            r13.<init>()     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r0 = "setSubPlayTemplateInfo failed: instanceId not exist instanceId = "
            r13.append(r0)     // Catch: java.lang.Throwable -> Ld4
            r13.append(r5)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> Ld4
            com.mbridge.msdk.foundation.tools.z.a(r1, r13)     // Catch: java.lang.Throwable -> Ld4
            goto Lf4
        Lba:
            java.lang.String r13 = "unitId not exist"
            r11.c(r12, r13)     // Catch: java.lang.Throwable -> Ld4
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld4
            r13.<init>()     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r0 = "setSubPlayTemplateInfo failed: unitId not exist instanceId = "
            r13.append(r0)     // Catch: java.lang.Throwable -> Ld4
            r13.append(r5)     // Catch: java.lang.Throwable -> Ld4
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> Ld4
            com.mbridge.msdk.foundation.tools.z.a(r1, r13)     // Catch: java.lang.Throwable -> Ld4
            goto Lf4
        Ld4:
            r13 = move-exception
            java.lang.String r0 = r13.getMessage()
            r11.c(r12, r0)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r0 = "setSubPlayTemplateInfo failed: "
            r12.append(r0)
            java.lang.String r13 = r13.getMessage()
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            com.mbridge.msdk.foundation.tools.z.a(r1, r12)
        Lf4:
            return
    }

    public final void M(java.lang.Object r9, org.json.JSONObject r10) {
            r8 = this;
            java.lang.String r0 = "OperateViews"
            r1 = r9
            com.mbridge.msdk.mbjscommon.windvane.a r1 = (com.mbridge.msdk.mbjscommon.windvane.a) r1     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r2 = ""
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r1.a     // Catch: java.lang.Throwable -> Lb1
            if (r3 == 0) goto L11
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r1.a     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r2 = r1.getRid()     // Catch: java.lang.Throwable -> Lb1
        L11:
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r10.optString(r1)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r3 = "id"
            java.lang.String r3 = r10.optString(r3)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r4 = "data"
            org.json.JSONObject r10 = r10.optJSONObject(r4)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r4 = "eventName"
            java.lang.String r4 = r10.optString(r4)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r5 = "eventData"
            org.json.JSONObject r10 = r10.optJSONObject(r5)     // Catch: java.lang.Throwable -> Lb1
            if (r10 != 0) goto L36
            org.json.JSONObject r10 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lb1
            r10.<init>()     // Catch: java.lang.Throwable -> Lb1
        L36:
            java.util.LinkedHashMap r1 = r8.b(r1, r2)     // Catch: java.lang.Throwable -> Lb1
            int r2 = r1.size()     // Catch: java.lang.Throwable -> Lb1
            if (r2 <= 0) goto La6
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> Lb1
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> Lb1
            boolean r2 = r1 instanceof android.view.ViewGroup     // Catch: java.lang.Throwable -> Lb1
            if (r2 == 0) goto L8c
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Throwable -> Lb1
            int r2 = r1.getChildCount()     // Catch: java.lang.Throwable -> Lb1
            r5 = 0
        L51:
            if (r5 >= r2) goto L8c
            android.view.View r6 = r1.getChildAt(r5)     // Catch: java.lang.Throwable -> Lb1
            boolean r7 = r6 instanceof com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView     // Catch: java.lang.Throwable -> Lb1
            if (r7 == 0) goto L89
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = (com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView) r6     // Catch: java.lang.Throwable -> Lb1
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Lb1
            byte[] r10 = r10.getBytes()     // Catch: java.lang.Throwable -> Lb1
            r2 = 2
            java.lang.String r10 = android.util.Base64.encodeToString(r10, r2)     // Catch: java.lang.Throwable -> Lb1
            r1.a(r6, r4, r10)     // Catch: java.lang.Throwable -> Lb1
            r8.a(r9, r3)     // Catch: java.lang.Throwable -> Lb1
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb1
            r10.<init>()     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r1 = "webviewFireEvent instanceId = "
            r10.append(r1)     // Catch: java.lang.Throwable -> Lb1
            r10.append(r3)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Lb1
            com.mbridge.msdk.foundation.tools.z.a(r0, r10)     // Catch: java.lang.Throwable -> Lb1
            return
        L89:
            int r5 = r5 + 1
            goto L51
        L8c:
            java.lang.String r10 = "instanceId not exist"
            r8.c(r9, r10)     // Catch: java.lang.Throwable -> Lb1
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb1
            r10.<init>()     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r1 = "webviewFireEvent failed: instanceId not exist instanceId = "
            r10.append(r1)     // Catch: java.lang.Throwable -> Lb1
            r10.append(r3)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Lb1
            com.mbridge.msdk.foundation.tools.z.a(r0, r10)     // Catch: java.lang.Throwable -> Lb1
            goto Ld1
        La6:
            java.lang.String r10 = "unitId not exist"
            r8.c(r9, r10)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r10 = "webviewFireEvent failed: unitId not exist"
            com.mbridge.msdk.foundation.tools.z.a(r0, r10)     // Catch: java.lang.Throwable -> Lb1
            goto Ld1
        Lb1:
            r10 = move-exception
            java.lang.String r1 = r10.getMessage()
            r8.c(r9, r1)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r1 = "webviewFireEvent failed: "
            r9.append(r1)
            java.lang.String r10 = r10.getMessage()
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r9)
        Ld1:
            return
    }

    public final void N(java.lang.Object r3, org.json.JSONObject r4) {
            r2 = this;
            java.lang.String r0 = "data"
            org.json.JSONObject r4 = r4.optJSONObject(r0)     // Catch: java.lang.Throwable -> L2d
            if (r4 != 0) goto Le
            java.lang.String r4 = "data is empty"
            r2.c(r3, r4)     // Catch: java.lang.Throwable -> L2d
            return
        Le:
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r4)     // Catch: java.lang.Throwable -> L2d
            if (r4 != 0) goto L1a
            java.lang.String r4 = "data camapign is empty"
            r2.c(r3, r4)     // Catch: java.lang.Throwable -> L2d
            return
        L1a:
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Throwable -> L2d
            com.mbridge.msdk.video.bt.a.c$3 r1 = new com.mbridge.msdk.video.bt.a.c$3     // Catch: java.lang.Throwable -> L2d
            r1.<init>(r2, r4)     // Catch: java.lang.Throwable -> L2d
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L2d
            r0.start()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r4 = ""
            r2.a(r3, r4)     // Catch: java.lang.Throwable -> L2d
            goto L35
        L2d:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            r2.c(r3, r4)
        L35:
            return
    }

    public final void O(java.lang.Object r20, org.json.JSONObject r21) {
            r19 = this;
            r1 = r20
            r0 = r21
            java.lang.String r2 = "resource"
            java.lang.String r3 = "type"
            java.lang.String r4 = ""
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.lang.String r6 = "message"
            java.lang.String r7 = "code"
            r8 = 2
            r9 = 1
            java.lang.String r10 = "OperateViews"
            if (r0 != 0) goto L3e
            r5.put(r7, r9)     // Catch: org.json.JSONException -> L35
            java.lang.String r0 = "params is null"
            r5.put(r6, r0)     // Catch: org.json.JSONException -> L35
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: org.json.JSONException -> L35
            java.lang.String r2 = r5.toString()     // Catch: org.json.JSONException -> L35
            byte[] r2 = r2.getBytes()     // Catch: org.json.JSONException -> L35
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r8)     // Catch: org.json.JSONException -> L35
            r0.a(r1, r2)     // Catch: org.json.JSONException -> L35
            goto L3d
        L35:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)
        L3d:
            return
        L3e:
            r11 = 0
            r5.put(r7, r11)     // Catch: java.lang.Throwable -> L228
            r5.put(r6, r4)     // Catch: java.lang.Throwable -> L228
            org.json.JSONArray r12 = r0.getJSONArray(r2)     // Catch: java.lang.Throwable -> L228
            if (r12 == 0) goto L1ef
            int r0 = r12.length()     // Catch: java.lang.Throwable -> L228
            if (r0 <= 0) goto L1ef
            org.json.JSONArray r13 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L228
            r13.<init>()     // Catch: java.lang.Throwable -> L228
            int r14 = r12.length()     // Catch: java.lang.Throwable -> L228
            r15 = r11
        L5b:
            if (r15 >= r14) goto L1cc
            org.json.JSONObject r0 = r12.getJSONObject(r15)     // Catch: java.lang.Throwable -> L228
            java.lang.String r8 = "ref"
            java.lang.String r8 = r0.optString(r8, r4)     // Catch: java.lang.Throwable -> L228
            int r0 = r0.getInt(r3)     // Catch: java.lang.Throwable -> L228
            org.json.JSONObject r11 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L228
            r11.<init>()     // Catch: java.lang.Throwable -> L228
            r21 = r12
            java.lang.String r12 = "path"
            if (r0 != r9) goto Lff
            boolean r16 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L228
            if (r16 != 0) goto Lff
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L228
            r0.<init>()     // Catch: java.lang.Throwable -> L228
            com.mbridge.msdk.foundation.controller.a r16 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L228
            android.content.Context r16 = r16.j()     // Catch: java.lang.Throwable -> L228
            com.mbridge.msdk.foundation.db.i r16 = com.mbridge.msdk.foundation.db.i.a(r16)     // Catch: java.lang.Throwable -> L228
            com.mbridge.msdk.foundation.db.s r9 = com.mbridge.msdk.foundation.db.s.a(r16)     // Catch: java.lang.Throwable -> L228
            com.mbridge.msdk.foundation.entity.o r9 = r9.a(r8)     // Catch: java.lang.Throwable -> L228
            if (r9 == 0) goto Lf1
            r16 = r14
            java.lang.String r14 = "VideoBean not null"
            com.mbridge.msdk.foundation.tools.z.a(r10, r14)     // Catch: java.lang.Throwable -> L228
            r14 = 1
            r0.put(r3, r14)     // Catch: java.lang.Throwable -> L228
            java.lang.String r14 = "videoDataLength"
            r17 = r6
            int r6 = r9.c()     // Catch: java.lang.Throwable -> Led
            r0.put(r14, r6)     // Catch: java.lang.Throwable -> Led
            java.lang.String r6 = r9.e()     // Catch: java.lang.Throwable -> Led
            boolean r14 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Led
            r18 = r7
            java.lang.String r7 = "path4Web"
            if (r14 == 0) goto Lc7
            java.lang.String r6 = "VideoPath null"
            com.mbridge.msdk.foundation.tools.z.a(r10, r6)     // Catch: java.lang.Throwable -> L1e9
            r0.put(r12, r4)     // Catch: java.lang.Throwable -> L1e9
            r0.put(r7, r4)     // Catch: java.lang.Throwable -> L1e9
            goto Ld2
        Lc7:
            java.lang.String r14 = "VideoPath not null"
            com.mbridge.msdk.foundation.tools.z.a(r10, r14)     // Catch: java.lang.Throwable -> L1e9
            r0.put(r12, r6)     // Catch: java.lang.Throwable -> L1e9
            r0.put(r7, r6)     // Catch: java.lang.Throwable -> L1e9
        Ld2:
            int r6 = r9.d()     // Catch: java.lang.Throwable -> L1e9
            r7 = 5
            java.lang.String r9 = "downloaded"
            if (r6 != r7) goto Le1
            r6 = 1
            r0.put(r9, r6)     // Catch: java.lang.Throwable -> L1e9
            r6 = 0
            goto Le5
        Le1:
            r6 = 0
            r0.put(r9, r6)     // Catch: java.lang.Throwable -> L1e9
        Le5:
            r11.put(r8, r0)     // Catch: java.lang.Throwable -> L1e9
            r13.put(r11)     // Catch: java.lang.Throwable -> L1e9
            goto L1bd
        Led:
            r0 = move-exception
            r2 = r7
            goto L218
        Lf1:
            r17 = r6
            r18 = r7
            r16 = r14
            r6 = 0
            java.lang.String r0 = "VideoBean null"
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)     // Catch: java.lang.Throwable -> L1e9
            goto L1bd
        Lff:
            r17 = r6
            r18 = r7
            r16 = r14
            r6 = 0
            r7 = 2
            if (r0 != r7) goto L136
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L1e9
            if (r9 != 0) goto L136
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e9
            r0.<init>()     // Catch: java.lang.Throwable -> L1e9
            r0.put(r3, r7)     // Catch: java.lang.Throwable -> L1e9
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r7 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r7 = r7.getH5ResAddress(r8)     // Catch: java.lang.Throwable -> L1e9
            if (r7 != 0) goto L123
            r7 = r4
            goto L12b
        L123:
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r7 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r7 = r7.getH5ResAddress(r8)     // Catch: java.lang.Throwable -> L1e9
        L12b:
            r0.put(r12, r7)     // Catch: java.lang.Throwable -> L1e9
            r11.put(r8, r0)     // Catch: java.lang.Throwable -> L1e9
            r13.put(r11)     // Catch: java.lang.Throwable -> L1e9
            goto L1bd
        L136:
            r7 = 3
            if (r0 != r7) goto L197
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L1e9
            if (r9 != 0) goto L197
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L17c
            r0.<init>(r8)     // Catch: java.lang.Throwable -> L17c
            boolean r9 = r0.exists()     // Catch: java.lang.Throwable -> L17c
            if (r9 == 0) goto L184
            boolean r9 = r0.isFile()     // Catch: java.lang.Throwable -> L17c
            if (r9 == 0) goto L184
            boolean r0 = r0.canRead()     // Catch: java.lang.Throwable -> L17c
            if (r0 == 0) goto L184
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            r0.<init>()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r9 = "getFileInfo Mraid file "
            r0.append(r9)     // Catch: java.lang.Throwable -> L17c
            r0.append(r8)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L17c
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)     // Catch: java.lang.Throwable -> L17c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L17c
            r0.<init>()     // Catch: java.lang.Throwable -> L17c
            java.lang.String r9 = "file:////"
            r0.append(r9)     // Catch: java.lang.Throwable -> L17c
            r0.append(r8)     // Catch: java.lang.Throwable -> L17c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L17c
            goto L185
        L17c:
            r0 = move-exception
            boolean r9 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Throwable -> L1e9
            if (r9 == 0) goto L184
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L1e9
        L184:
            r0 = r4
        L185:
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e9
            r9.<init>()     // Catch: java.lang.Throwable -> L1e9
            r9.put(r3, r7)     // Catch: java.lang.Throwable -> L1e9
            r9.put(r12, r0)     // Catch: java.lang.Throwable -> L1e9
            r11.put(r8, r9)     // Catch: java.lang.Throwable -> L1e9
            r13.put(r11)     // Catch: java.lang.Throwable -> L1e9
            goto L1bd
        L197:
            r7 = 4
            if (r0 != r7) goto L1bd
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L1e9
            if (r0 != 0) goto L1bd
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1e9
            r0.<init>()     // Catch: java.lang.Throwable -> L1e9
            r0.put(r3, r7)     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.ad.a(r8)     // Catch: java.lang.Throwable -> L1e9
            if (r7 != 0) goto L1b0
            r7 = r4
            goto L1b4
        L1b0:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.ad.a(r8)     // Catch: java.lang.Throwable -> L1e9
        L1b4:
            r0.put(r12, r7)     // Catch: java.lang.Throwable -> L1e9
            r11.put(r8, r0)     // Catch: java.lang.Throwable -> L1e9
            r13.put(r11)     // Catch: java.lang.Throwable -> L1e9
        L1bd:
            int r15 = r15 + 1
            r12 = r21
            r11 = r6
            r14 = r16
            r6 = r17
            r7 = r18
            r8 = 2
            r9 = 1
            goto L5b
        L1cc:
            r17 = r6
            r18 = r7
            r5.put(r2, r13)     // Catch: java.lang.Throwable -> L1e9
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L1e9
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Throwable -> L1e9
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Throwable -> L1e9
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: java.lang.Throwable -> L1e9
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L1e9
            goto L253
        L1e9:
            r0 = move-exception
            r3 = r17
            r2 = r18
            goto L22b
        L1ef:
            r17 = r6
            r18 = r7
            r2 = r18
            r3 = 1
            r5.put(r2, r3)     // Catch: java.lang.Throwable -> L217 org.json.JSONException -> L21b
            java.lang.String r0 = "resource is null"
            r3 = r17
            r5.put(r3, r0)     // Catch: org.json.JSONException -> L215 java.lang.Throwable -> L226
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: org.json.JSONException -> L215 java.lang.Throwable -> L226
            java.lang.String r4 = r5.toString()     // Catch: org.json.JSONException -> L215 java.lang.Throwable -> L226
            byte[] r4 = r4.getBytes()     // Catch: org.json.JSONException -> L215 java.lang.Throwable -> L226
            r6 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r6)     // Catch: org.json.JSONException -> L215 java.lang.Throwable -> L226
            r0.a(r1, r4)     // Catch: org.json.JSONException -> L215 java.lang.Throwable -> L226
            goto L253
        L215:
            r0 = move-exception
            goto L21e
        L217:
            r0 = move-exception
        L218:
            r3 = r17
            goto L22b
        L21b:
            r0 = move-exception
            r3 = r17
        L21e:
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L226
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)     // Catch: java.lang.Throwable -> L226
            goto L253
        L226:
            r0 = move-exception
            goto L22b
        L228:
            r0 = move-exception
            r3 = r6
            r2 = r7
        L22b:
            r4 = 1
            r5.put(r2, r4)     // Catch: org.json.JSONException -> L24b
            java.lang.String r0 = r0.getLocalizedMessage()     // Catch: org.json.JSONException -> L24b
            r5.put(r3, r0)     // Catch: org.json.JSONException -> L24b
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: org.json.JSONException -> L24b
            java.lang.String r2 = r5.toString()     // Catch: org.json.JSONException -> L24b
            byte[] r2 = r2.getBytes()     // Catch: org.json.JSONException -> L24b
            r3 = 2
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)     // Catch: org.json.JSONException -> L24b
            r0.a(r1, r2)     // Catch: org.json.JSONException -> L24b
            goto L253
        L24b:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)
        L253:
            return
    }

    public final void P(java.lang.Object r8, org.json.JSONObject r9) {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "createNativeEC:"
            r0.append(r1)
            r0.append(r9)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            java.lang.String r0 = "unitId"
            java.lang.String r0 = r9.optString(r0)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r2 = "data"
            org.json.JSONObject r9 = r9.optJSONObject(r2)     // Catch: java.lang.Throwable -> Lc9
            if (r9 == 0) goto Lc3
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lc9
            if (r2 == 0) goto L2c
            goto Lc3
        L2c:
            java.lang.String r2 = ""
            java.lang.String r3 = "campaign"
            org.json.JSONObject r3 = r9.optJSONObject(r3)     // Catch: java.lang.Throwable -> Lc9
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r3)     // Catch: java.lang.Throwable -> Lc9
            if (r3 == 0) goto L47
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lc9
            if (r4 != 0) goto L47
            r3.setCampaignUnitId(r0)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r2 = r3.getRequestId()     // Catch: java.lang.Throwable -> Lc9
        L47:
            java.lang.String r4 = "unitSetting"
            org.json.JSONObject r9 = r9.optJSONObject(r4)     // Catch: java.lang.Throwable -> Lc9
            com.mbridge.msdk.videocommon.d.c r9 = com.mbridge.msdk.videocommon.d.c.a(r9)     // Catch: java.lang.Throwable -> Lc9
            if (r9 == 0) goto L56
            r9.a(r0)     // Catch: java.lang.Throwable -> Lc9
        L56:
            com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC r4 = new com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC     // Catch: java.lang.Throwable -> Lc9
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lc9
            android.content.Context r5 = r5.j()     // Catch: java.lang.Throwable -> Lc9
            r4.<init>(r5)     // Catch: java.lang.Throwable -> Lc9
            r4.setCampaign(r3)     // Catch: java.lang.Throwable -> Lc9
            com.mbridge.msdk.video.js.a.j r5 = new com.mbridge.msdk.video.js.a.j     // Catch: java.lang.Throwable -> Lc9
            r6 = 0
            r5.<init>(r6, r3)     // Catch: java.lang.Throwable -> Lc9
            r5.a(r0)     // Catch: java.lang.Throwable -> Lc9
            r4.setJSCommon(r5)     // Catch: java.lang.Throwable -> Lc9
            r4.setUnitId(r0)     // Catch: java.lang.Throwable -> Lc9
            r4.setRewardUnitSetting(r9)     // Catch: java.lang.Throwable -> Lc9
            r9 = r8
            com.mbridge.msdk.mbjscommon.windvane.a r9 = (com.mbridge.msdk.mbjscommon.windvane.a) r9     // Catch: java.lang.Throwable -> Lc9
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r9.a     // Catch: java.lang.Throwable -> Lc9
            if (r5 == 0) goto L88
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r9 = r9.a     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r2 = r9.getRid()     // Catch: java.lang.Throwable -> Lc9
            r4.setCreateWebView(r9)     // Catch: java.lang.Throwable -> Lc9
        L88:
            java.util.LinkedHashMap r9 = r7.b(r0, r2)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r0 = r7.b()     // Catch: java.lang.Throwable -> Lc9
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r5 = com.mbridge.msdk.video.bt.a.c.b     // Catch: java.lang.Throwable -> Lc9
            r5.put(r0, r2)     // Catch: java.lang.Throwable -> Lc9
            r4.setInstanceId(r0)     // Catch: java.lang.Throwable -> Lc9
            r9.put(r0, r4)     // Catch: java.lang.Throwable -> Lc9
            r4.preLoadData()     // Catch: java.lang.Throwable -> Lc9
            if (r3 != 0) goto Lab
            java.lang.String r9 = "campaign is null"
            r7.c(r8, r9)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r9 = "createNativeEC failed"
            com.mbridge.msdk.foundation.tools.z.a(r1, r9)     // Catch: java.lang.Throwable -> Lc9
            goto Le9
        Lab:
            r7.a(r8, r0)     // Catch: java.lang.Throwable -> Lc9
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc9
            r9.<init>()     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r2 = "createNativeEC instanceId = "
            r9.append(r2)     // Catch: java.lang.Throwable -> Lc9
            r9.append(r0)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> Lc9
            com.mbridge.msdk.foundation.tools.z.a(r1, r9)     // Catch: java.lang.Throwable -> Lc9
            goto Le9
        Lc3:
            java.lang.String r9 = "unitId or data is empty"
            r7.c(r8, r9)     // Catch: java.lang.Throwable -> Lc9
            return
        Lc9:
            r9 = move-exception
            java.lang.String r0 = r9.getMessage()
            r7.c(r8, r0)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "createNativeEC failed："
            r8.append(r0)
            java.lang.String r9 = r9.getMessage()
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.mbridge.msdk.foundation.tools.z.a(r1, r8)
        Le9:
            return
    }

    public final com.mbridge.msdk.foundation.entity.CampaignEx a(java.lang.String r2) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.foundation.entity.CampaignEx> r0 = com.mbridge.msdk.video.bt.a.c.c
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L11
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.foundation.entity.CampaignEx> r0 = com.mbridge.msdk.video.bt.a.c.c
            java.lang.Object r2 = r0.get(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            return r2
        L11:
            r2 = 0
            return r2
    }

    public final void a(int r5, int r6, int r7, int r8, int r9) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "OperateViews setNotchString = "
            r0.append(r1)
            r1 = 5
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r5)
            r3 = 0
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r6)
            r3 = 1
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r7)
            r3 = 2
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r8)
            r3 = 3
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r9)
            r3 = 4
            r1[r3] = r2
            java.lang.String r2 = "%1$s-%2$s-%3$s-%4$s-%5$s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.m.a(r5, r6, r7, r8, r9)
            com.mbridge.msdk.video.bt.a.c.k = r0
            com.mbridge.msdk.video.bt.a.c.l = r5
            com.mbridge.msdk.video.bt.a.c.m = r6
            com.mbridge.msdk.video.bt.a.c.n = r7
            com.mbridge.msdk.video.bt.a.c.o = r8
            com.mbridge.msdk.video.bt.a.c.p = r9
            return
    }

    public final void a(android.webkit.WebView r4, java.lang.String r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.video.bt.a.c.j     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "message"
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L30
            java.lang.String r5 = "data"
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            r0.put(r5, r1)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r5.a(r4, r0)     // Catch: java.lang.Exception -> L30
            goto L3a
        L30:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r5 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r5, r4)
        L3a:
            return
    }

    public final void a(android.webkit.WebView r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.video.bt.a.c.i     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = "id"
            r1.put(r2, r6)     // Catch: java.lang.Exception -> L30
            java.lang.String r6 = "data"
            r0.put(r6, r1)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.mbjscommon.windvane.h r6 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r6.a(r4, r5, r0)     // Catch: java.lang.Exception -> L30
            goto L41
        L30:
            r5 = move-exception
            java.lang.String r6 = r5.getMessage()
            r3.a(r4, r6)
            java.lang.String r4 = r5.getMessage()
            java.lang.String r5 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r5, r4)
        L41:
            return
    }

    public final void a(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.video.bt.a.c.i     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = "id"
            r1.put(r2, r5)     // Catch: java.lang.Exception -> L30
            java.lang.String r5 = "data"
            r0.put(r5, r1)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r5.a(r4, r0)     // Catch: java.lang.Exception -> L30
            goto L41
        L30:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            r3.c(r4, r0)
            java.lang.String r4 = r5.getMessage()
            java.lang.String r5 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r5, r4)
        L41:
            return
    }

    public final void a(java.lang.Object r9, org.json.JSONObject r10) {
            r8 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r4 = r10.optString(r0)     // Catch: java.lang.Throwable -> L74
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L74
            if (r0 == 0) goto L12
            java.lang.String r10 = "unitId is empty"
            r8.c(r9, r10)     // Catch: java.lang.Throwable -> L74
            return
        L12:
            java.lang.String r0 = "data"
            org.json.JSONObject r10 = r10.optJSONObject(r0)     // Catch: java.lang.Throwable -> L74
            java.lang.String r0 = "delay"
            r1 = 0
            int r0 = r10.optInt(r0, r1)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "rect"
            org.json.JSONObject r10 = r10.optJSONObject(r2)     // Catch: java.lang.Throwable -> L74
            android.graphics.Rect r2 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L74
            r3 = -999(0xfffffffffffffc19, float:NaN)
            r2.<init>(r3, r3, r3, r3)     // Catch: java.lang.Throwable -> L74
            if (r10 == 0) goto L5b
            android.graphics.Rect r1 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "left"
            int r2 = r10.optInt(r2, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r5 = "top"
            int r5 = r10.optInt(r5, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r6 = "right"
            int r6 = r10.optInt(r6, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r7 = "bottom"
            int r3 = r10.optInt(r7, r3)     // Catch: java.lang.Throwable -> L74
            r1.<init>(r2, r5, r6, r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = "width"
            int r2 = r10.optInt(r2)     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = "height"
            int r10 = r10.optInt(r3)     // Catch: java.lang.Throwable -> L74
            r7 = r10
            r5 = r1
            r6 = r2
            goto L5e
        L5b:
            r6 = r1
            r7 = r6
            r5 = r2
        L5e:
            com.mbridge.msdk.video.bt.a.c$1 r10 = new com.mbridge.msdk.video.bt.a.c$1     // Catch: java.lang.Throwable -> L74
            r1 = r10
            r2 = r8
            r3 = r9
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L74
            android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Throwable -> L74
            android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L74
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L74
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L74
            r1.postDelayed(r10, r2)     // Catch: java.lang.Throwable -> L74
            goto L96
        L74:
            r10 = move-exception
            java.lang.String r0 = r10.getMessage()
            r8.c(r9, r0)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "create view failed："
            r9.append(r0)
            java.lang.String r10 = r10.getMessage()
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            java.lang.String r10 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r10, r9)
        L96:
            return
    }

    public final void a(java.lang.Object r12, org.json.JSONObject r13, boolean r14) {
            r11 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r13.optString(r1)     // Catch: java.lang.Throwable -> L143
            java.lang.String r2 = "id"
            java.lang.String r2 = r13.optString(r2)     // Catch: java.lang.Throwable -> L143
            java.lang.String r3 = r11.i(r2)     // Catch: java.lang.Throwable -> L143
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L143
            if (r4 == 0) goto L25
            r4 = r12
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L143
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L143
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L143
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L143
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r13 = r13.optJSONObject(r4)     // Catch: java.lang.Throwable -> L143
            if (r13 != 0) goto L33
            java.lang.String r13 = "data is empty"
            r11.c(r12, r13)     // Catch: java.lang.Throwable -> L143
            return
        L33:
            java.lang.String r4 = "targetComponentId"
            java.lang.String r4 = r13.optString(r4)     // Catch: java.lang.Throwable -> L143
            java.lang.String r5 = "rect"
            org.json.JSONObject r13 = r13.optJSONObject(r5)     // Catch: java.lang.Throwable -> L143
            java.util.LinkedHashMap r1 = r11.b(r1, r3)     // Catch: java.lang.Throwable -> L143
            boolean r3 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L143
            if (r3 == 0) goto L129
            boolean r3 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> L143
            if (r3 == 0) goto L129
            java.lang.Object r3 = r1.get(r2)     // Catch: java.lang.Throwable -> L143
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L143
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L143
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L143
            if (r1 == 0) goto L10f
            android.view.ViewParent r5 = r1.getParent()     // Catch: java.lang.Throwable -> L143
            if (r5 == 0) goto L10f
            android.view.ViewParent r5 = r1.getParent()     // Catch: java.lang.Throwable -> L143
            android.view.ViewGroup r5 = (android.view.ViewGroup) r5     // Catch: java.lang.Throwable -> L143
            int r1 = r5.indexOfChild(r1)     // Catch: java.lang.Throwable -> L143
            r6 = 0
            r7 = 0
            if (r13 != 0) goto L8d
            boolean r13 = r3 instanceof com.mbridge.msdk.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L143
            if (r13 == 0) goto L8b
            r13 = r3
            com.mbridge.msdk.video.bt.module.BTBaseView r13 = (com.mbridge.msdk.video.bt.module.BTBaseView) r13     // Catch: java.lang.Throwable -> L143
            android.graphics.Rect r6 = r13.getRect()     // Catch: java.lang.Throwable -> L143
            r13 = r3
            com.mbridge.msdk.video.bt.module.BTBaseView r13 = (com.mbridge.msdk.video.bt.module.BTBaseView) r13     // Catch: java.lang.Throwable -> L143
            int r7 = r13.getViewWidth()     // Catch: java.lang.Throwable -> L143
            r13 = r3
            com.mbridge.msdk.video.bt.module.BTBaseView r13 = (com.mbridge.msdk.video.bt.module.BTBaseView) r13     // Catch: java.lang.Throwable -> L143
            int r13 = r13.getViewHeight()     // Catch: java.lang.Throwable -> L143
            goto Lb9
        L8b:
            r13 = r7
            goto Lb9
        L8d:
            java.lang.String r6 = "left"
            r7 = -999(0xfffffffffffffc19, float:NaN)
            int r6 = r13.optInt(r6, r7)     // Catch: java.lang.Throwable -> L143
            java.lang.String r8 = "top"
            int r8 = r13.optInt(r8, r7)     // Catch: java.lang.Throwable -> L143
            java.lang.String r9 = "right"
            int r9 = r13.optInt(r9, r7)     // Catch: java.lang.Throwable -> L143
            java.lang.String r10 = "bottom"
            int r7 = r13.optInt(r10, r7)     // Catch: java.lang.Throwable -> L143
            android.graphics.Rect r10 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L143
            r10.<init>(r6, r8, r9, r7)     // Catch: java.lang.Throwable -> L143
            java.lang.String r6 = "width"
            int r7 = r13.optInt(r6)     // Catch: java.lang.Throwable -> L143
            java.lang.String r6 = "height"
            int r13 = r13.optInt(r6)     // Catch: java.lang.Throwable -> L143
            r6 = r10
        Lb9:
            android.view.ViewGroup$LayoutParams r8 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L143
            r9 = -1
            r8.<init>(r9, r9)     // Catch: java.lang.Throwable -> L143
            boolean r10 = r5 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L143
            if (r10 == 0) goto Lc9
            android.widget.FrameLayout$LayoutParams r8 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L143
            r8.<init>(r9, r9)     // Catch: java.lang.Throwable -> L143
            goto Ldc
        Lc9:
            boolean r10 = r5 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L143
            if (r10 == 0) goto Ld3
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L143
            r8.<init>(r9, r9)     // Catch: java.lang.Throwable -> L143
            goto Ldc
        Ld3:
            boolean r10 = r5 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L143
            if (r10 == 0) goto Ldc
            android.widget.LinearLayout$LayoutParams r8 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L143
            r8.<init>(r9, r9)     // Catch: java.lang.Throwable -> L143
        Ldc:
            android.view.ViewGroup$LayoutParams r13 = r11.a(r8, r6, r7, r13)     // Catch: java.lang.Throwable -> L143
            if (r14 == 0) goto Le5
            com.mbridge.msdk.foundation.tools.an.a(r3)     // Catch: java.lang.Throwable -> L143
        Le5:
            int r1 = r1 + 1
            r5.addView(r3, r1, r13)     // Catch: java.lang.Throwable -> L143
            r11.a(r12, r2)     // Catch: java.lang.Throwable -> L143
            java.lang.String r13 = "onInsertViewAbove"
            r11.a(r12, r13, r2)     // Catch: java.lang.Throwable -> L143
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L143
            r13.<init>()     // Catch: java.lang.Throwable -> L143
            java.lang.String r14 = "insertViewAbove instanceId = "
            r13.append(r14)     // Catch: java.lang.Throwable -> L143
            r13.append(r2)     // Catch: java.lang.Throwable -> L143
            java.lang.String r14 = " brotherId = "
            r13.append(r14)     // Catch: java.lang.Throwable -> L143
            r13.append(r4)     // Catch: java.lang.Throwable -> L143
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L143
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)     // Catch: java.lang.Throwable -> L143
            goto L163
        L10f:
            java.lang.String r13 = "view not exist"
            r11.c(r12, r13)     // Catch: java.lang.Throwable -> L143
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L143
            r13.<init>()     // Catch: java.lang.Throwable -> L143
            java.lang.String r14 = "insertViewAbove failed: view not exist instanceId = "
            r13.append(r14)     // Catch: java.lang.Throwable -> L143
            r13.append(r2)     // Catch: java.lang.Throwable -> L143
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L143
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)     // Catch: java.lang.Throwable -> L143
            goto L163
        L129:
            java.lang.String r13 = "instanceId not exist"
            r11.c(r12, r13)     // Catch: java.lang.Throwable -> L143
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L143
            r13.<init>()     // Catch: java.lang.Throwable -> L143
            java.lang.String r14 = "insertViewAbove failed: instanceId not exist instanceId = "
            r13.append(r14)     // Catch: java.lang.Throwable -> L143
            r13.append(r2)     // Catch: java.lang.Throwable -> L143
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L143
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)     // Catch: java.lang.Throwable -> L143
            goto L163
        L143:
            r13 = move-exception
            java.lang.String r14 = r13.getMessage()
            r11.c(r12, r14)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r14 = "insertViewAbove failed: "
            r12.append(r14)
            java.lang.String r13 = r13.getMessage()
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r12)
        L163:
            return
    }

    public final void a(java.lang.String r2, int r3) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.video.bt.a.c.f
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0.put(r2, r3)
            return
    }

    public final void a(java.lang.String r2, android.app.Activity r3) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, android.app.Activity> r0 = com.mbridge.msdk.video.bt.a.c.g
            r0.put(r2, r3)
            return
    }

    public final void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.video.bt.a.c.b
            r0.put(r2, r3)
            return
    }

    public final void a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a.a()     // Catch: java.lang.Throwable -> L42
            java.util.LinkedHashMap r2 = r0.b(r2, r3)     // Catch: java.lang.Throwable -> L42
            if (r2 == 0) goto L4c
            int r3 = r2.size()     // Catch: java.lang.Throwable -> L42
            if (r3 <= 0) goto L4c
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L42
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L42
        L18:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L42
            if (r3 == 0) goto L4c
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L42
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L42
            boolean r0 = r3 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> L42
            if (r0 == 0) goto L2e
            com.mbridge.msdk.video.bt.module.MBTempContainer r3 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r3     // Catch: java.lang.Throwable -> L42
            r3.notifyEvent(r4)     // Catch: java.lang.Throwable -> L42
            goto L18
        L2e:
            boolean r0 = r3 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTWebView     // Catch: java.lang.Throwable -> L42
            if (r0 == 0) goto L38
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r3 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r3     // Catch: java.lang.Throwable -> L42
            r3.notifyEvent(r4)     // Catch: java.lang.Throwable -> L42
            goto L18
        L38:
            boolean r0 = r3 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTLayout     // Catch: java.lang.Throwable -> L42
            if (r0 == 0) goto L18
            com.mbridge.msdk.video.bt.module.MBridgeBTLayout r3 = (com.mbridge.msdk.video.bt.module.MBridgeBTLayout) r3     // Catch: java.lang.Throwable -> L42
            r3.notifyEvent(r4)     // Catch: java.lang.Throwable -> L42
            goto L18
        L42:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)
        L4c:
            return
    }

    public final com.mbridge.msdk.videocommon.d.c b(java.lang.String r2) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r0 = com.mbridge.msdk.video.bt.a.c.d
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L11
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r0 = com.mbridge.msdk.video.bt.a.c.d
            java.lang.Object r2 = r0.get(r2)
            com.mbridge.msdk.videocommon.d.c r2 = (com.mbridge.msdk.videocommon.d.c) r2
            return r2
        L11:
            r2 = 0
            return r2
    }

    public final java.lang.String b() {
            r1 = this;
            int r0 = com.mbridge.msdk.video.bt.a.c.h
            int r0 = r0 + 1
            com.mbridge.msdk.video.bt.a.c.h = r0
            int r0 = com.mbridge.msdk.video.bt.a.c.h
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    public final synchronized java.util.LinkedHashMap<java.lang.String, android.view.View> b(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            monitor-enter(r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.LinkedHashMap<java.lang.String, android.view.View>> r0 = com.mbridge.msdk.video.bt.a.c.a     // Catch: java.lang.Throwable -> L5b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5b
            r1.<init>()     // Catch: java.lang.Throwable -> L5b
            r1.append(r4)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r2 = "_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L5b
            r1.append(r5)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L5b
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> L5b
            if (r0 == 0) goto L3b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.LinkedHashMap<java.lang.String, android.view.View>> r0 = com.mbridge.msdk.video.bt.a.c.a     // Catch: java.lang.Throwable -> L5b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5b
            r1.<init>()     // Catch: java.lang.Throwable -> L5b
            r1.append(r4)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = "_"
            r1.append(r4)     // Catch: java.lang.Throwable -> L5b
            r1.append(r5)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L5b
            java.lang.Object r4 = r0.get(r4)     // Catch: java.lang.Throwable -> L5b
            java.util.LinkedHashMap r4 = (java.util.LinkedHashMap) r4     // Catch: java.lang.Throwable -> L5b
            monitor-exit(r3)
            return r4
        L3b:
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap     // Catch: java.lang.Throwable -> L5b
            r0.<init>()     // Catch: java.lang.Throwable -> L5b
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.LinkedHashMap<java.lang.String, android.view.View>> r1 = com.mbridge.msdk.video.bt.a.c.a     // Catch: java.lang.Throwable -> L5b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5b
            r2.<init>()     // Catch: java.lang.Throwable -> L5b
            r2.append(r4)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = "_"
            r2.append(r4)     // Catch: java.lang.Throwable -> L5b
            r2.append(r5)     // Catch: java.lang.Throwable -> L5b
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L5b
            r1.put(r4, r0)     // Catch: java.lang.Throwable -> L5b
            monitor-exit(r3)
            return r0
        L5b:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final void b(java.lang.Object r16, java.lang.String r17) {
            r15 = this;
            r0 = r17
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "reportUrls:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r17)
            if (r1 != 0) goto L9b
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L93
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L93
            r0 = 0
            r3 = r0
        L25:
            int r4 = r1.length()     // Catch: java.lang.Throwable -> L93
            java.lang.String r5 = ""
            if (r3 >= r4) goto L8a
            org.json.JSONObject r4 = r1.getJSONObject(r3)     // Catch: java.lang.Throwable -> L93
            java.lang.String r6 = "type"
            int r6 = r4.optInt(r6)     // Catch: java.lang.Throwable -> L93
            java.lang.String r7 = "url"
            java.lang.String r11 = r4.optString(r7)     // Catch: java.lang.Throwable -> L93
            java.lang.String r7 = "&tun="
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93
            r8.<init>()     // Catch: java.lang.Throwable -> L93
            int r9 = com.mbridge.msdk.foundation.tools.v.P()     // Catch: java.lang.Throwable -> L93
            r8.append(r9)     // Catch: java.lang.Throwable -> L93
            r8.append(r5)     // Catch: java.lang.Throwable -> L93
            java.lang.String r5 = r8.toString()     // Catch: java.lang.Throwable -> L93
            com.mbridge.msdk.foundation.tools.ae.a(r11, r7, r5)     // Catch: java.lang.Throwable -> L93
            java.lang.String r5 = "report"
            int r14 = r4.optInt(r5)     // Catch: java.lang.Throwable -> L93
            r4 = 1
            if (r14 != 0) goto L73
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L93
            android.content.Context r8 = r5.j()     // Catch: java.lang.Throwable -> L93
            r9 = 0
            java.lang.String r10 = ""
            r12 = 0
            if (r6 == 0) goto L6e
            r13 = r4
            goto L6f
        L6e:
            r13 = r0
        L6f:
            com.mbridge.msdk.click.b.a(r8, r9, r10, r11, r12, r13)     // Catch: java.lang.Throwable -> L93
            goto L87
        L73:
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L93
            android.content.Context r8 = r5.j()     // Catch: java.lang.Throwable -> L93
            r9 = 0
            java.lang.String r10 = ""
            r12 = 0
            if (r6 == 0) goto L83
            r13 = r4
            goto L84
        L83:
            r13 = r0
        L84:
            com.mbridge.msdk.click.b.a(r8, r9, r10, r11, r12, r13, r14)     // Catch: java.lang.Throwable -> L93
        L87:
            int r3 = r3 + 1
            goto L25
        L8a:
            r1 = r15
            r0 = r16
            r15.a(r0, r5)     // Catch: java.lang.Throwable -> L91
            goto L9c
        L91:
            r0 = move-exception
            goto L95
        L93:
            r0 = move-exception
            r1 = r15
        L95:
            java.lang.String r3 = "reportUrls"
            com.mbridge.msdk.foundation.tools.z.c(r2, r3, r0)
            goto L9c
        L9b:
            r1 = r15
        L9c:
            return
    }

    public final void b(java.lang.Object r12, org.json.JSONObject r13) {
            r11 = this;
            java.lang.String r0 = "unitId"
            java.lang.String r4 = r13.optString(r0)     // Catch: java.lang.Throwable -> L86
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L86
            if (r0 == 0) goto L12
            java.lang.String r13 = "unitId is empty"
            r11.c(r12, r13)     // Catch: java.lang.Throwable -> L86
            return
        L12:
            java.lang.String r0 = "data"
            org.json.JSONObject r13 = r13.optJSONObject(r0)     // Catch: java.lang.Throwable -> L86
            java.lang.String r0 = "delay"
            r1 = 0
            int r0 = r13.optInt(r0, r1)     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "fileURL"
            java.lang.String r5 = r13.optString(r2)     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "filePath"
            java.lang.String r6 = r13.optString(r2)     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "html"
            java.lang.String r7 = r13.optString(r2)     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "rect"
            org.json.JSONObject r13 = r13.optJSONObject(r2)     // Catch: java.lang.Throwable -> L86
            android.graphics.Rect r2 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L86
            r3 = -999(0xfffffffffffffc19, float:NaN)
            r2.<init>(r3, r3, r3, r3)     // Catch: java.lang.Throwable -> L86
            if (r13 == 0) goto L6d
            android.graphics.Rect r1 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "left"
            int r2 = r13.optInt(r2, r3)     // Catch: java.lang.Throwable -> L86
            java.lang.String r8 = "top"
            int r8 = r13.optInt(r8, r3)     // Catch: java.lang.Throwable -> L86
            java.lang.String r9 = "right"
            int r9 = r13.optInt(r9, r3)     // Catch: java.lang.Throwable -> L86
            java.lang.String r10 = "bottom"
            int r3 = r13.optInt(r10, r3)     // Catch: java.lang.Throwable -> L86
            r1.<init>(r2, r8, r9, r3)     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = "width"
            int r2 = r13.optInt(r2)     // Catch: java.lang.Throwable -> L86
            java.lang.String r3 = "height"
            int r13 = r13.optInt(r3)     // Catch: java.lang.Throwable -> L86
            r10 = r13
            r8 = r1
            r9 = r2
            goto L70
        L6d:
            r9 = r1
            r10 = r9
            r8 = r2
        L70:
            com.mbridge.msdk.video.bt.a.c$2 r13 = new com.mbridge.msdk.video.bt.a.c$2     // Catch: java.lang.Throwable -> L86
            r1 = r13
            r2 = r11
            r3 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L86
            android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Throwable -> L86
            android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L86
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L86
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L86
            r1.postDelayed(r13, r2)     // Catch: java.lang.Throwable -> L86
            goto La8
        L86:
            r13 = move-exception
            java.lang.String r0 = r13.getMessage()
            r11.c(r12, r0)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r0 = "createWebview failed："
            r12.append(r0)
            java.lang.String r13 = r13.getMessage()
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            java.lang.String r13 = "OperateViews"
            com.mbridge.msdk.foundation.tools.z.a(r13, r12)
        La8:
            return
    }

    public final void b(java.lang.Object r12, org.json.JSONObject r13, boolean r14) {
            r11 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r13.optString(r1)     // Catch: java.lang.Throwable -> L140
            java.lang.String r2 = "id"
            java.lang.String r2 = r13.optString(r2)     // Catch: java.lang.Throwable -> L140
            java.lang.String r3 = r11.i(r2)     // Catch: java.lang.Throwable -> L140
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L140
            if (r4 == 0) goto L25
            r4 = r12
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L140
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L140
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L140
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L140
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r13 = r13.optJSONObject(r4)     // Catch: java.lang.Throwable -> L140
            if (r13 != 0) goto L33
            java.lang.String r13 = "data is empty"
            r11.c(r12, r13)     // Catch: java.lang.Throwable -> L140
            return
        L33:
            java.lang.String r4 = "targetComponentId"
            java.lang.String r4 = r13.optString(r4)     // Catch: java.lang.Throwable -> L140
            java.lang.String r5 = "rect"
            org.json.JSONObject r13 = r13.optJSONObject(r5)     // Catch: java.lang.Throwable -> L140
            java.util.LinkedHashMap r1 = r11.b(r1, r3)     // Catch: java.lang.Throwable -> L140
            boolean r3 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L140
            if (r3 == 0) goto L126
            boolean r3 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> L140
            if (r3 == 0) goto L126
            java.lang.Object r3 = r1.get(r2)     // Catch: java.lang.Throwable -> L140
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L140
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L140
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L140
            if (r1 == 0) goto L10c
            android.view.ViewParent r4 = r1.getParent()     // Catch: java.lang.Throwable -> L140
            if (r4 == 0) goto L10c
            android.view.ViewParent r4 = r1.getParent()     // Catch: java.lang.Throwable -> L140
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L140
            int r1 = r4.indexOfChild(r1)     // Catch: java.lang.Throwable -> L140
            r5 = 0
            r6 = 0
            if (r13 != 0) goto L8e
            boolean r13 = r3 instanceof com.mbridge.msdk.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L140
            if (r13 == 0) goto L8b
            r13 = r3
            com.mbridge.msdk.video.bt.module.BTBaseView r13 = (com.mbridge.msdk.video.bt.module.BTBaseView) r13     // Catch: java.lang.Throwable -> L140
            android.graphics.Rect r5 = r13.getRect()     // Catch: java.lang.Throwable -> L140
            r13 = r3
            com.mbridge.msdk.video.bt.module.BTBaseView r13 = (com.mbridge.msdk.video.bt.module.BTBaseView) r13     // Catch: java.lang.Throwable -> L140
            int r13 = r13.getViewWidth()     // Catch: java.lang.Throwable -> L140
            r7 = r3
            com.mbridge.msdk.video.bt.module.BTBaseView r7 = (com.mbridge.msdk.video.bt.module.BTBaseView) r7     // Catch: java.lang.Throwable -> L140
            int r7 = r7.getViewHeight()     // Catch: java.lang.Throwable -> L140
            goto Lbb
        L8b:
            r13 = r6
            r7 = r13
            goto Lbb
        L8e:
            java.lang.String r5 = "left"
            r7 = -999(0xfffffffffffffc19, float:NaN)
            int r5 = r13.optInt(r5, r7)     // Catch: java.lang.Throwable -> L140
            java.lang.String r8 = "top"
            int r8 = r13.optInt(r8, r7)     // Catch: java.lang.Throwable -> L140
            java.lang.String r9 = "right"
            int r9 = r13.optInt(r9, r7)     // Catch: java.lang.Throwable -> L140
            java.lang.String r10 = "bottom"
            int r7 = r13.optInt(r10, r7)     // Catch: java.lang.Throwable -> L140
            android.graphics.Rect r10 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L140
            r10.<init>(r5, r8, r9, r7)     // Catch: java.lang.Throwable -> L140
            java.lang.String r5 = "width"
            int r5 = r13.optInt(r5)     // Catch: java.lang.Throwable -> L140
            java.lang.String r7 = "height"
            int r7 = r13.optInt(r7)     // Catch: java.lang.Throwable -> L140
            r13 = r5
            r5 = r10
        Lbb:
            android.view.ViewGroup$LayoutParams r8 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L140
            r9 = -1
            r8.<init>(r9, r9)     // Catch: java.lang.Throwable -> L140
            boolean r10 = r4 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L140
            if (r10 == 0) goto Lcb
            android.widget.FrameLayout$LayoutParams r8 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L140
            r8.<init>(r9, r9)     // Catch: java.lang.Throwable -> L140
            goto Lde
        Lcb:
            boolean r10 = r4 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L140
            if (r10 == 0) goto Ld5
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L140
            r8.<init>(r9, r9)     // Catch: java.lang.Throwable -> L140
            goto Lde
        Ld5:
            boolean r10 = r4 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L140
            if (r10 == 0) goto Lde
            android.widget.LinearLayout$LayoutParams r8 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L140
            r8.<init>(r9, r9)     // Catch: java.lang.Throwable -> L140
        Lde:
            android.view.ViewGroup$LayoutParams r13 = r11.a(r8, r5, r13, r7)     // Catch: java.lang.Throwable -> L140
            if (r14 == 0) goto Le7
            com.mbridge.msdk.foundation.tools.an.a(r3)     // Catch: java.lang.Throwable -> L140
        Le7:
            int r1 = r1 + (-1)
            if (r1 <= r9) goto Lec
            r6 = r1
        Lec:
            r4.addView(r3, r6, r13)     // Catch: java.lang.Throwable -> L140
            r11.a(r12, r2)     // Catch: java.lang.Throwable -> L140
            java.lang.String r13 = "onInsertViewBelow"
            r11.a(r12, r13, r2)     // Catch: java.lang.Throwable -> L140
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140
            r13.<init>()     // Catch: java.lang.Throwable -> L140
            java.lang.String r14 = "insertViewBelow instanceId = "
            r13.append(r14)     // Catch: java.lang.Throwable -> L140
            r13.append(r2)     // Catch: java.lang.Throwable -> L140
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L140
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)     // Catch: java.lang.Throwable -> L140
            goto L160
        L10c:
            java.lang.String r13 = "view not exist"
            r11.c(r12, r13)     // Catch: java.lang.Throwable -> L140
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140
            r13.<init>()     // Catch: java.lang.Throwable -> L140
            java.lang.String r14 = "insertViewBelow failed: view not exist instanceId = "
            r13.append(r14)     // Catch: java.lang.Throwable -> L140
            r13.append(r2)     // Catch: java.lang.Throwable -> L140
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L140
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)     // Catch: java.lang.Throwable -> L140
            goto L160
        L126:
            java.lang.String r13 = "instanceId not exist"
            r11.c(r12, r13)     // Catch: java.lang.Throwable -> L140
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140
            r13.<init>()     // Catch: java.lang.Throwable -> L140
            java.lang.String r14 = "insertViewBelow failed: instanceId not exist instanceId = "
            r13.append(r14)     // Catch: java.lang.Throwable -> L140
            r13.append(r2)     // Catch: java.lang.Throwable -> L140
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L140
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)     // Catch: java.lang.Throwable -> L140
            goto L160
        L140:
            r13 = move-exception
            java.lang.String r14 = r13.getMessage()
            r11.c(r12, r14)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r14 = "insertViewBelow failed: "
            r12.append(r14)
            java.lang.String r13 = r13.getMessage()
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r12)
        L160:
            return
    }

    public final java.lang.String c(java.lang.String r2) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.video.bt.a.c.e
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L11
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.video.bt.a.c.e
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
        L11:
            java.lang.String r2 = ""
            return r2
    }

    public final void c(java.lang.Object r11, org.json.JSONObject r12) {
            r10 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r12.optString(r1)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r2 = "data"
            org.json.JSONObject r12 = r12.optJSONObject(r2)     // Catch: java.lang.Throwable -> Lcd
            if (r12 == 0) goto Lc7
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lcd
            if (r2 == 0) goto L18
            goto Lc7
        L18:
            java.lang.String r2 = ""
            java.lang.String r3 = "campaign"
            org.json.JSONObject r3 = r12.optJSONObject(r3)     // Catch: java.lang.Throwable -> Lcd
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r3)     // Catch: java.lang.Throwable -> Lcd
            if (r3 == 0) goto L33
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lcd
            if (r4 != 0) goto L33
            r3.setCampaignUnitId(r1)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r2 = r3.getRequestId()     // Catch: java.lang.Throwable -> Lcd
        L33:
            java.lang.String r4 = "show_time"
            r5 = 0
            int r4 = r12.optInt(r4, r5)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r6 = "show_mute"
            int r6 = r12.optInt(r6, r5)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r7 = "show_close"
            int r7 = r12.optInt(r7, r5)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r8 = "orientation"
            r9 = 1
            int r8 = r12.optInt(r8, r9)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r9 = "show_pgb"
            int r12 = r12.optInt(r9, r5)     // Catch: java.lang.Throwable -> Lcd
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r5 = new com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> Lcd
            com.mbridge.msdk.foundation.controller.a r9 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lcd
            android.content.Context r9 = r9.j()     // Catch: java.lang.Throwable -> Lcd
            r5.<init>(r9)     // Catch: java.lang.Throwable -> Lcd
            r5.setCampaign(r3)     // Catch: java.lang.Throwable -> Lcd
            r5.setUnitId(r1)     // Catch: java.lang.Throwable -> Lcd
            r5.setShowMute(r6)     // Catch: java.lang.Throwable -> Lcd
            r5.setShowTime(r4)     // Catch: java.lang.Throwable -> Lcd
            r5.setShowClose(r7)     // Catch: java.lang.Throwable -> Lcd
            r5.setOrientation(r8)     // Catch: java.lang.Throwable -> Lcd
            r5.setProgressBarState(r12)     // Catch: java.lang.Throwable -> Lcd
            r12 = r11
            com.mbridge.msdk.mbjscommon.windvane.a r12 = (com.mbridge.msdk.mbjscommon.windvane.a) r12     // Catch: java.lang.Throwable -> Lcd
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r12.a     // Catch: java.lang.Throwable -> Lcd
            if (r4 == 0) goto L85
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r12 = r12.a     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r2 = r12.getRid()     // Catch: java.lang.Throwable -> Lcd
            r5.setCreateWebView(r12)     // Catch: java.lang.Throwable -> Lcd
        L85:
            java.util.LinkedHashMap r12 = r10.b(r1, r2)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r1 = r10.b()     // Catch: java.lang.Throwable -> Lcd
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r4 = com.mbridge.msdk.video.bt.a.c.b     // Catch: java.lang.Throwable -> Lcd
            r4.put(r1, r2)     // Catch: java.lang.Throwable -> Lcd
            r5.setInstanceId(r1)     // Catch: java.lang.Throwable -> Lcd
            r12.put(r1, r5)     // Catch: java.lang.Throwable -> Lcd
            r5.preLoadData()     // Catch: java.lang.Throwable -> Lcd
            if (r3 != 0) goto La8
            java.lang.String r12 = "campaign is null"
            r10.c(r11, r12)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r12 = "createPlayerView failed"
            com.mbridge.msdk.foundation.tools.z.a(r0, r12)     // Catch: java.lang.Throwable -> Lcd
            goto Lbf
        La8:
            r10.a(r11, r1)     // Catch: java.lang.Throwable -> Lcd
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lcd
            r12.<init>()     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r2 = "createPlayerView instanceId = "
            r12.append(r2)     // Catch: java.lang.Throwable -> Lcd
            r12.append(r1)     // Catch: java.lang.Throwable -> Lcd
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> Lcd
            com.mbridge.msdk.foundation.tools.z.a(r0, r12)     // Catch: java.lang.Throwable -> Lcd
        Lbf:
            com.mbridge.msdk.video.bt.a.a r12 = com.mbridge.msdk.video.bt.a.a.a()     // Catch: java.lang.Throwable -> Lcd
            r12.a(r1, r5)     // Catch: java.lang.Throwable -> Lcd
            goto Led
        Lc7:
            java.lang.String r12 = "unitId or data is empty"
            r10.c(r11, r12)     // Catch: java.lang.Throwable -> Lcd
            return
        Lcd:
            r12 = move-exception
            java.lang.String r1 = r12.getMessage()
            r10.c(r11, r1)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r1 = "createPlayerView failed："
            r11.append(r1)
            java.lang.String r12 = r12.getMessage()
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r11)
        Led:
            return
    }

    public final android.app.Activity d(java.lang.String r2) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, android.app.Activity> r0 = com.mbridge.msdk.video.bt.a.c.g
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L11
            java.util.LinkedHashMap<java.lang.String, android.app.Activity> r0 = com.mbridge.msdk.video.bt.a.c.g
            java.lang.Object r2 = r0.get(r2)
            android.app.Activity r2 = (android.app.Activity) r2
            return r2
        L11:
            r2 = 0
            return r2
    }

    public final void d(java.lang.Object r14, org.json.JSONObject r15) {
            r13 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r15.optString(r1)     // Catch: java.lang.Throwable -> L10b
            java.lang.String r2 = "data"
            org.json.JSONObject r15 = r15.optJSONObject(r2)     // Catch: java.lang.Throwable -> L10b
            if (r15 == 0) goto L105
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L10b
            if (r2 == 0) goto L18
            goto L105
        L18:
            java.lang.String r2 = "mute"
            int r2 = r15.optInt(r2)     // Catch: java.lang.Throwable -> L10b
            java.lang.String r3 = ""
            java.lang.String r4 = "campaign"
            org.json.JSONObject r4 = r15.optJSONObject(r4)     // Catch: java.lang.Throwable -> L10b
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r4)     // Catch: java.lang.Throwable -> L10b
            if (r4 == 0) goto L39
            boolean r5 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L10b
            if (r5 != 0) goto L39
            r4.setCampaignUnitId(r1)     // Catch: java.lang.Throwable -> L10b
            java.lang.String r3 = r4.getRequestId()     // Catch: java.lang.Throwable -> L10b
        L39:
            java.lang.String r5 = "unitSetting"
            org.json.JSONObject r5 = r15.optJSONObject(r5)     // Catch: java.lang.Throwable -> L10b
            com.mbridge.msdk.videocommon.d.c r5 = com.mbridge.msdk.videocommon.d.c.a(r5)     // Catch: java.lang.Throwable -> L10b
            if (r5 == 0) goto L48
            r5.a(r1)     // Catch: java.lang.Throwable -> L10b
        L48:
            java.lang.String r6 = "userId"
            java.lang.String r6 = r15.optString(r6)     // Catch: java.lang.Throwable -> L10b
            boolean r7 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L10b
            if (r7 == 0) goto L61
            r7 = r14
            com.mbridge.msdk.mbjscommon.windvane.a r7 = (com.mbridge.msdk.mbjscommon.windvane.a) r7     // Catch: java.lang.Throwable -> L10b
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8 = r7.a     // Catch: java.lang.Throwable -> L10b
            if (r8 == 0) goto L61
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r7.a     // Catch: java.lang.Throwable -> L10b
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L10b
        L61:
            java.util.LinkedHashMap r7 = r13.b(r1, r3)     // Catch: java.lang.Throwable -> L10b
            java.lang.String r8 = r13.b()     // Catch: java.lang.Throwable -> L10b
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r9 = com.mbridge.msdk.video.bt.a.c.b     // Catch: java.lang.Throwable -> L10b
            r9.put(r8, r3)     // Catch: java.lang.Throwable -> L10b
            com.mbridge.msdk.video.bt.module.MBTempContainer r3 = new com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> L10b
            com.mbridge.msdk.foundation.controller.a r9 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L10b
            android.content.Context r9 = r9.j()     // Catch: java.lang.Throwable -> L10b
            r3.<init>(r9)     // Catch: java.lang.Throwable -> L10b
            r3.setInstanceId(r8)     // Catch: java.lang.Throwable -> L10b
            r3.setUnitId(r1)     // Catch: java.lang.Throwable -> L10b
            r3.setCampaign(r4)     // Catch: java.lang.Throwable -> L10b
            r3.setRewardUnitSetting(r5)     // Catch: java.lang.Throwable -> L10b
            r9 = 1
            r3.setBigOffer(r9)     // Catch: java.lang.Throwable -> L10b
            boolean r9 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L10b
            if (r9 != 0) goto L94
            r3.setUserId(r6)     // Catch: java.lang.Throwable -> L10b
        L94:
            java.lang.String r6 = "reward"
            org.json.JSONObject r6 = r15.optJSONObject(r6)     // Catch: java.lang.Throwable -> L10b
            if (r6 == 0) goto Lc9
            java.lang.String r9 = "id"
            java.lang.String r9 = r6.optString(r9)     // Catch: java.lang.Throwable -> L10b
            com.mbridge.msdk.videocommon.b.d r10 = new com.mbridge.msdk.videocommon.b.d     // Catch: java.lang.Throwable -> L10b
            java.lang.String r11 = "name"
            java.lang.String r11 = r6.optString(r11)     // Catch: java.lang.Throwable -> L10b
            java.lang.String r12 = "amount"
            int r6 = r6.optInt(r12)     // Catch: java.lang.Throwable -> L10b
            r10.<init>(r11, r6)     // Catch: java.lang.Throwable -> L10b
            boolean r6 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L10b
            if (r6 != 0) goto Lbc
            r3.setRewardId(r9)     // Catch: java.lang.Throwable -> L10b
        Lbc:
            java.lang.String r6 = r10.a()     // Catch: java.lang.Throwable -> L10b
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L10b
            if (r6 != 0) goto Lc9
            r3.setReward(r10)     // Catch: java.lang.Throwable -> L10b
        Lc9:
            java.lang.String r6 = "extra"
            java.lang.String r15 = r15.optString(r6)     // Catch: java.lang.Throwable -> L10b
            boolean r6 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L10b
            if (r6 != 0) goto Ld8
            r3.setDeveloperExtraData(r15)     // Catch: java.lang.Throwable -> L10b
        Ld8:
            r3.setMute(r2)     // Catch: java.lang.Throwable -> L10b
            r7.put(r8, r3)     // Catch: java.lang.Throwable -> L10b
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r15 = com.mbridge.msdk.video.bt.a.c.e     // Catch: java.lang.Throwable -> L10b
            r15.put(r8, r1)     // Catch: java.lang.Throwable -> L10b
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.foundation.entity.CampaignEx> r15 = com.mbridge.msdk.video.bt.a.c.c     // Catch: java.lang.Throwable -> L10b
            r15.put(r8, r4)     // Catch: java.lang.Throwable -> L10b
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r15 = com.mbridge.msdk.video.bt.a.c.d     // Catch: java.lang.Throwable -> L10b
            r15.put(r8, r5)     // Catch: java.lang.Throwable -> L10b
            r13.a(r14, r8)     // Catch: java.lang.Throwable -> L10b
            java.lang.StringBuilder r15 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10b
            r15.<init>()     // Catch: java.lang.Throwable -> L10b
            java.lang.String r1 = "createSubPlayTemplateView instanceId = "
            r15.append(r1)     // Catch: java.lang.Throwable -> L10b
            r15.append(r8)     // Catch: java.lang.Throwable -> L10b
            java.lang.String r15 = r15.toString()     // Catch: java.lang.Throwable -> L10b
            com.mbridge.msdk.foundation.tools.z.a(r0, r15)     // Catch: java.lang.Throwable -> L10b
            goto L12b
        L105:
            java.lang.String r15 = "unitId or data is empty"
            r13.c(r14, r15)     // Catch: java.lang.Throwable -> L10b
            return
        L10b:
            r15 = move-exception
            java.lang.String r1 = r15.getMessage()
            r13.c(r14, r1)
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r1 = "createSubPlayTemplateView failed："
            r14.append(r1)
            java.lang.String r15 = r15.getMessage()
            r14.append(r15)
            java.lang.String r14 = r14.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r14)
        L12b:
            return
    }

    public final void e(java.lang.Object r10, org.json.JSONObject r11) {
            r9 = this;
            java.lang.String r0 = "destroyComponent failed"
            java.lang.String r1 = "OperateViews"
            java.lang.String r2 = "unitId"
            java.lang.String r2 = r11.optString(r2)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r3 = "id"
            java.lang.String r3 = r11.optString(r3)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r4 = "data"
            org.json.JSONObject r11 = r11.optJSONObject(r4)     // Catch: java.lang.Throwable -> Lfe
            if (r11 == 0) goto Lf8
            boolean r11 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lfe
            if (r11 == 0) goto L20
            goto Lf8
        L20:
            java.lang.String r11 = r9.i(r3)     // Catch: java.lang.Throwable -> Lfe
            boolean r4 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> Lfe
            if (r4 == 0) goto L37
            r4 = r10
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> Lfe
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> Lfe
            if (r5 == 0) goto L37
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r11 = r4.a     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r11 = r11.getRid()     // Catch: java.lang.Throwable -> Lfe
        L37:
            java.util.LinkedHashMap r11 = r9.b(r2, r11)     // Catch: java.lang.Throwable -> Lfe
            if (r11 == 0) goto Lef
            boolean r2 = r11.containsKey(r3)     // Catch: java.lang.Throwable -> Lfe
            if (r2 == 0) goto Lef
            java.lang.Object r2 = r11.get(r3)     // Catch: java.lang.Throwable -> Lfe
            android.view.View r2 = (android.view.View) r2     // Catch: java.lang.Throwable -> Lfe
            r11.remove(r3)     // Catch: java.lang.Throwable -> Lfe
            if (r2 == 0) goto Lb5
            android.view.ViewParent r4 = r2.getParent()     // Catch: java.lang.Throwable -> Lfe
            if (r4 == 0) goto Lb5
            android.view.ViewParent r4 = r2.getParent()     // Catch: java.lang.Throwable -> Lfe
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> Lfe
            if (r4 == 0) goto L5f
            r4.removeView(r2)     // Catch: java.lang.Throwable -> Lfe
        L5f:
            boolean r4 = r2 instanceof android.view.ViewGroup     // Catch: java.lang.Throwable -> Lfe
            if (r4 == 0) goto Lb5
            r4 = r2
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> Lfe
            int r5 = r4.getChildCount()     // Catch: java.lang.Throwable -> Lfe
            if (r5 <= 0) goto Lb5
            int r5 = r4.getChildCount()     // Catch: java.lang.Throwable -> Lfe
            r6 = 0
        L71:
            if (r6 >= r5) goto Lb5
            android.view.View r7 = r4.getChildAt(r6)     // Catch: java.lang.Throwable -> Lfe
            boolean r8 = r7 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTWebView     // Catch: java.lang.Throwable -> Lfe
            if (r8 == 0) goto L8b
            r8 = r7
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r8 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r8     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r8 = r8.getInstanceId()     // Catch: java.lang.Throwable -> Lfe
            r11.remove(r8)     // Catch: java.lang.Throwable -> Lfe
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r7 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r7     // Catch: java.lang.Throwable -> Lfe
            r7.onDestory()     // Catch: java.lang.Throwable -> Lfe
            goto Lb2
        L8b:
            boolean r8 = r7 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> Lfe
            if (r8 == 0) goto L9f
            r8 = r7
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r8 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r8     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r8 = r8.getInstanceId()     // Catch: java.lang.Throwable -> Lfe
            r11.remove(r8)     // Catch: java.lang.Throwable -> Lfe
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r7 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r7     // Catch: java.lang.Throwable -> Lfe
            r7.onDestory()     // Catch: java.lang.Throwable -> Lfe
            goto Lb2
        L9f:
            boolean r8 = r7 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> Lfe
            if (r8 == 0) goto Lb2
            r8 = r7
            com.mbridge.msdk.video.bt.module.MBTempContainer r8 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r8     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r8 = r8.getInstanceId()     // Catch: java.lang.Throwable -> Lfe
            r11.remove(r8)     // Catch: java.lang.Throwable -> Lfe
            com.mbridge.msdk.video.bt.module.MBTempContainer r7 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r7     // Catch: java.lang.Throwable -> Lfe
            r7.onDestroy()     // Catch: java.lang.Throwable -> Lfe
        Lb2:
            int r6 = r6 + 1
            goto L71
        Lb5:
            boolean r11 = r2 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> Lfe
            if (r11 == 0) goto Lbf
            r11 = r2
            com.mbridge.msdk.video.bt.module.MBTempContainer r11 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r11     // Catch: java.lang.Throwable -> Lfe
            r11.onDestroy()     // Catch: java.lang.Throwable -> Lfe
        Lbf:
            boolean r11 = r2 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTWebView     // Catch: java.lang.Throwable -> Lfe
            if (r11 == 0) goto Lc9
            r11 = r2
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r11 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r11     // Catch: java.lang.Throwable -> Lfe
            r11.onDestory()     // Catch: java.lang.Throwable -> Lfe
        Lc9:
            boolean r11 = r2 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> Lfe
            if (r11 == 0) goto Ld2
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r2 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r2     // Catch: java.lang.Throwable -> Lfe
            r2.onDestory()     // Catch: java.lang.Throwable -> Lfe
        Ld2:
            r9.a(r10, r3)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r11 = "onComponentDestroy"
            r9.a(r10, r11, r3)     // Catch: java.lang.Throwable -> Lfe
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfe
            r11.<init>()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r2 = "destroyComponent instanceId = "
            r11.append(r2)     // Catch: java.lang.Throwable -> Lfe
            r11.append(r3)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Lfe
            com.mbridge.msdk.foundation.tools.z.a(r1, r11)     // Catch: java.lang.Throwable -> Lfe
            goto L109
        Lef:
            java.lang.String r11 = "unitId or instanceId not exist"
            r9.c(r10, r11)     // Catch: java.lang.Throwable -> Lfe
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)     // Catch: java.lang.Throwable -> Lfe
            goto L109
        Lf8:
            java.lang.String r11 = "unidId or data is empty"
            r9.c(r10, r11)     // Catch: java.lang.Throwable -> Lfe
            return
        Lfe:
            r11 = move-exception
            java.lang.String r11 = r11.getMessage()
            r9.c(r10, r11)
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L109:
            return
    }

    public final void e(java.lang.String r2) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, android.app.Activity> r0 = com.mbridge.msdk.video.bt.a.c.g
            r0.remove(r2)
            return
    }

    public final int f(java.lang.String r2) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.video.bt.a.c.f
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L15
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.video.bt.a.c.f
            java.lang.Object r2 = r0.get(r2)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            return r2
        L15:
            r2 = 2
            return r2
    }

    public final void f(java.lang.Object r3, org.json.JSONObject r4) {
            r2 = this;
            java.lang.String r0 = "unitId"
            r4.optString(r0)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r0 = "id"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = "data"
            org.json.JSONObject r4 = r4.optJSONObject(r1)     // Catch: java.lang.Throwable -> L1d
            if (r4 != 0) goto L19
            java.lang.String r4 = "data is empty"
            r2.c(r3, r4)     // Catch: java.lang.Throwable -> L1d
            return
        L19:
            r2.a(r3, r0)     // Catch: java.lang.Throwable -> L1d
            goto L25
        L1d:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            r2.c(r3, r4)
        L25:
            return
    }

    public final void g(java.lang.Object r9, org.json.JSONObject r10) {
            r8 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r10.optString(r1)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r2 = "id"
            java.lang.String r2 = r10.optString(r2)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r3 = r8.i(r2)     // Catch: java.lang.Throwable -> Le5
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Le5
            if (r4 == 0) goto L25
            r4 = r9
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> Le5
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> Le5
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> Le5
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> Le5
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r10 = r10.optJSONObject(r4)     // Catch: java.lang.Throwable -> Le5
            if (r10 != 0) goto L33
            java.lang.String r10 = "data is empty"
            r8.c(r9, r10)     // Catch: java.lang.Throwable -> Le5
            return
        L33:
            java.lang.String r4 = "rect"
            org.json.JSONObject r10 = r10.optJSONObject(r4)     // Catch: java.lang.Throwable -> Le5
            if (r10 != 0) goto L41
            java.lang.String r10 = "rect not exist"
            r8.c(r9, r10)     // Catch: java.lang.Throwable -> Le5
            return
        L41:
            java.util.LinkedHashMap r1 = r8.b(r1, r3)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r3 = "left"
            r4 = -999(0xfffffffffffffc19, float:NaN)
            int r3 = r10.optInt(r3, r4)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r5 = "top"
            int r5 = r10.optInt(r5, r4)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r6 = "right"
            int r6 = r10.optInt(r6, r4)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r7 = "bottom"
            int r4 = r10.optInt(r7, r4)     // Catch: java.lang.Throwable -> Le5
            android.graphics.Rect r7 = new android.graphics.Rect     // Catch: java.lang.Throwable -> Le5
            r7.<init>(r3, r5, r6, r4)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r3 = "width"
            int r3 = r10.optInt(r3)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r4 = "height"
            int r10 = r10.optInt(r4)     // Catch: java.lang.Throwable -> Le5
            boolean r4 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> Le5
            if (r4 == 0) goto Lda
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> Le5
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> Le5
            if (r1 == 0) goto Lcf
            android.view.ViewParent r4 = r1.getParent()     // Catch: java.lang.Throwable -> Le5
            if (r4 == 0) goto L93
            android.view.ViewGroup$LayoutParams r4 = r1.getLayoutParams()     // Catch: java.lang.Throwable -> Le5
            android.view.ViewGroup$LayoutParams r10 = r8.a(r4, r7, r3, r10)     // Catch: java.lang.Throwable -> Le5
            r1.setLayoutParams(r10)     // Catch: java.lang.Throwable -> Le5
            r1.requestLayout()     // Catch: java.lang.Throwable -> Le5
            goto Lb2
        L93:
            boolean r4 = r1 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTWebView     // Catch: java.lang.Throwable -> Le5
            if (r4 == 0) goto La3
            r4 = r1
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r4 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r4     // Catch: java.lang.Throwable -> Le5
            r4.setRect(r7)     // Catch: java.lang.Throwable -> Le5
            r4 = r1
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r4 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r4     // Catch: java.lang.Throwable -> Le5
            r4.setLayout(r3, r10)     // Catch: java.lang.Throwable -> Le5
        La3:
            boolean r4 = r1 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> Le5
            if (r4 == 0) goto Lb2
            r4 = r1
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r4 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r4     // Catch: java.lang.Throwable -> Le5
            r4.setRect(r7)     // Catch: java.lang.Throwable -> Le5
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r1 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r1     // Catch: java.lang.Throwable -> Le5
            r1.setLayout(r3, r10)     // Catch: java.lang.Throwable -> Le5
        Lb2:
            r8.a(r9, r2)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r10 = "onViewRectChanged"
            r8.a(r9, r10, r2)     // Catch: java.lang.Throwable -> Le5
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le5
            r10.<init>()     // Catch: java.lang.Throwable -> Le5
            java.lang.String r1 = "setViewRect instanceId = "
            r10.append(r1)     // Catch: java.lang.Throwable -> Le5
            r10.append(r2)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Le5
            com.mbridge.msdk.foundation.tools.z.a(r0, r10)     // Catch: java.lang.Throwable -> Le5
            goto L105
        Lcf:
            java.lang.String r10 = "view is null"
            r8.c(r9, r10)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r10 = "setViewRect failed: view is null"
            com.mbridge.msdk.foundation.tools.z.a(r0, r10)     // Catch: java.lang.Throwable -> Le5
            goto L105
        Lda:
            java.lang.String r10 = "instanceId not exist"
            r8.c(r9, r10)     // Catch: java.lang.Throwable -> Le5
            java.lang.String r10 = "setViewRect failed: instanceId not exist"
            com.mbridge.msdk.foundation.tools.z.a(r0, r10)     // Catch: java.lang.Throwable -> Le5
            goto L105
        Le5:
            r10 = move-exception
            java.lang.String r1 = r10.getMessage()
            r8.c(r9, r1)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r1 = "setViewRect failed: "
            r9.append(r1)
            java.lang.String r10 = r10.getMessage()
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r9)
        L105:
            return
    }

    public final void g(java.lang.String r2) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.video.bt.a.c.e
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto Ld
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.video.bt.a.c.e
            r0.remove(r2)
        Ld:
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r0 = com.mbridge.msdk.video.bt.a.c.d
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L1a
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.videocommon.d.c> r0 = com.mbridge.msdk.video.bt.a.c.d
            r0.remove(r2)
        L1a:
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.foundation.entity.CampaignEx> r0 = com.mbridge.msdk.video.bt.a.c.c
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L27
            java.util.LinkedHashMap<java.lang.String, com.mbridge.msdk.foundation.entity.CampaignEx> r0 = com.mbridge.msdk.video.bt.a.c.c
            r0.remove(r2)
        L27:
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.video.bt.a.c.b
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L34
            java.util.LinkedHashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.video.bt.a.c.b
            r0.remove(r2)
        L34:
            return
    }

    public final void h(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> Lc1
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lc1
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> Lc1
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> Lc1
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> Lc1
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> Lc1
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lc1
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> Lc1
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> Lc1
            if (r1 == 0) goto La7
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> Lc1
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> Lc1
            if (r8 == 0) goto L8d
            android.view.ViewParent r1 = r8.getParent()     // Catch: java.lang.Throwable -> Lc1
            if (r1 == 0) goto L8d
            android.view.ViewParent r1 = r8.getParent()     // Catch: java.lang.Throwable -> Lc1
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Throwable -> Lc1
            if (r1 == 0) goto L73
            r1.removeView(r8)     // Catch: java.lang.Throwable -> Lc1
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r8 = "onRemoveFromView"
            r6.a(r7, r8, r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r8.<init>()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "removeFromSuperView instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lc1
            r8.append(r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lc1
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lc1
            goto Le1
        L73:
            java.lang.String r8 = "parent is null"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lc1
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r8.<init>()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "removeFromSuperView failed: parent is null instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lc1
            r8.append(r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lc1
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lc1
            goto Le1
        L8d:
            java.lang.String r8 = "view is null"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lc1
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r8.<init>()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "removeFromSuperView failed: view is null instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lc1
            r8.append(r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lc1
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lc1
            goto Le1
        La7:
            java.lang.String r8 = "params not enough"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lc1
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r8.<init>()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r1 = "removeFromSuperView failed: params not enough instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lc1
            r8.append(r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lc1
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lc1
            goto Le1
        Lc1:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "removeFromSuperView failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        Le1:
            return
    }

    public final void h(java.lang.String r2) {
            r1 = this;
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.video.bt.a.c.f
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto Ld
            java.util.LinkedHashMap<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.video.bt.a.c.f
            r0.remove(r2)
        Ld:
            return
    }

    public final void i(java.lang.Object r13, org.json.JSONObject r14) {
            r12 = this;
            java.lang.String r0 = "id"
            java.lang.String r1 = "OperateViews"
            java.lang.String r2 = "unitId"
            java.lang.String r2 = r14.optString(r2)     // Catch: java.lang.Throwable -> L195
            java.lang.String r3 = r14.optString(r0)     // Catch: java.lang.Throwable -> L195
            java.lang.String r4 = r12.i(r3)     // Catch: java.lang.Throwable -> L195
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L195
            if (r5 == 0) goto L25
            r5 = r13
            com.mbridge.msdk.mbjscommon.windvane.a r5 = (com.mbridge.msdk.mbjscommon.windvane.a) r5     // Catch: java.lang.Throwable -> L195
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r5.a     // Catch: java.lang.Throwable -> L195
            if (r6 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r5.a     // Catch: java.lang.Throwable -> L195
            java.lang.String r4 = r4.getRid()     // Catch: java.lang.Throwable -> L195
        L25:
            java.lang.String r5 = "data"
            org.json.JSONObject r14 = r14.optJSONObject(r5)     // Catch: java.lang.Throwable -> L195
            if (r14 != 0) goto L33
            java.lang.String r14 = "data is empty"
            r12.c(r13, r14)     // Catch: java.lang.Throwable -> L195
            return
        L33:
            java.lang.String r0 = r14.optString(r0)     // Catch: java.lang.Throwable -> L195
            java.util.LinkedHashMap r2 = r12.b(r2, r4)     // Catch: java.lang.Throwable -> L195
            boolean r4 = r2.containsKey(r0)     // Catch: java.lang.Throwable -> L195
            if (r4 == 0) goto L18a
            boolean r4 = r2.containsKey(r3)     // Catch: java.lang.Throwable -> L195
            if (r4 == 0) goto L18a
            java.lang.Object r4 = r2.get(r3)     // Catch: java.lang.Throwable -> L195
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L195
            java.lang.Object r5 = r2.get(r0)     // Catch: java.lang.Throwable -> L195
            android.view.View r5 = (android.view.View) r5     // Catch: java.lang.Throwable -> L195
            com.mbridge.msdk.foundation.tools.an.a(r5)     // Catch: java.lang.Throwable -> L195
            if (r4 == 0) goto L184
            if (r5 != 0) goto L5c
            goto L184
        L5c:
            java.lang.String r6 = "rect"
            org.json.JSONObject r14 = r14.optJSONObject(r6)     // Catch: java.lang.Throwable -> L195
            boolean r6 = r5 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> L195
            r7 = 0
            if (r6 == 0) goto Le7
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L195
            r4.<init>()     // Catch: java.lang.Throwable -> L195
            java.lang.String r6 = "OperateViews setNotchString = "
            r4.append(r6)     // Catch: java.lang.Throwable -> L195
            java.lang.String r6 = "%1$s-%2$s-%3$s-%4$s-%5$s"
            r8 = 5
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L195
            int r9 = com.mbridge.msdk.video.bt.a.c.l     // Catch: java.lang.Throwable -> L195
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L195
            r8[r7] = r9     // Catch: java.lang.Throwable -> L195
            r7 = 1
            int r9 = com.mbridge.msdk.video.bt.a.c.m     // Catch: java.lang.Throwable -> L195
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L195
            r8[r7] = r9     // Catch: java.lang.Throwable -> L195
            r7 = 2
            int r9 = com.mbridge.msdk.video.bt.a.c.n     // Catch: java.lang.Throwable -> L195
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L195
            r8[r7] = r9     // Catch: java.lang.Throwable -> L195
            r7 = 3
            int r9 = com.mbridge.msdk.video.bt.a.c.o     // Catch: java.lang.Throwable -> L195
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L195
            r8[r7] = r9     // Catch: java.lang.Throwable -> L195
            r7 = 4
            int r9 = com.mbridge.msdk.video.bt.a.c.p     // Catch: java.lang.Throwable -> L195
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L195
            r8[r7] = r9     // Catch: java.lang.Throwable -> L195
            java.lang.String r6 = java.lang.String.format(r6, r8)     // Catch: java.lang.Throwable -> L195
            r4.append(r6)     // Catch: java.lang.Throwable -> L195
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L195
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)     // Catch: java.lang.Throwable -> L195
            r6 = r5
            com.mbridge.msdk.video.bt.module.MBTempContainer r6 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r6     // Catch: java.lang.Throwable -> L195
            int r7 = com.mbridge.msdk.video.bt.a.c.l     // Catch: java.lang.Throwable -> L195
            int r8 = com.mbridge.msdk.video.bt.a.c.m     // Catch: java.lang.Throwable -> L195
            int r9 = com.mbridge.msdk.video.bt.a.c.n     // Catch: java.lang.Throwable -> L195
            int r10 = com.mbridge.msdk.video.bt.a.c.o     // Catch: java.lang.Throwable -> L195
            int r11 = com.mbridge.msdk.video.bt.a.c.p     // Catch: java.lang.Throwable -> L195
            r6.setNotchPadding(r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L195
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L195
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L195
        Lc8:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> L195
            if (r4 == 0) goto L15f
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> L195
            android.view.View r4 = (android.view.View) r4     // Catch: java.lang.Throwable -> L195
            boolean r6 = r4 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTContainer     // Catch: java.lang.Throwable -> L195
            if (r6 == 0) goto Lc8
            com.mbridge.msdk.foundation.tools.an.a(r5)     // Catch: java.lang.Throwable -> L195
            r2 = r4
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r2 = (com.mbridge.msdk.video.bt.module.MBridgeBTContainer) r2     // Catch: java.lang.Throwable -> L195
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r4 = (com.mbridge.msdk.video.bt.module.MBridgeBTContainer) r4     // Catch: java.lang.Throwable -> L195
            com.mbridge.msdk.video.bt.module.MBTempContainer r5 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r5     // Catch: java.lang.Throwable -> L195
            r2.appendSubView(r4, r5, r14)     // Catch: java.lang.Throwable -> L195
            goto L15f
        Le7:
            r2 = 0
            if (r14 != 0) goto L106
            boolean r14 = r5 instanceof com.mbridge.msdk.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L195
            if (r14 == 0) goto L104
            r14 = r5
            com.mbridge.msdk.video.bt.module.BTBaseView r14 = (com.mbridge.msdk.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L195
            android.graphics.Rect r2 = r14.getRect()     // Catch: java.lang.Throwable -> L195
            r14 = r5
            com.mbridge.msdk.video.bt.module.BTBaseView r14 = (com.mbridge.msdk.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L195
            int r7 = r14.getViewWidth()     // Catch: java.lang.Throwable -> L195
            r14 = r5
            com.mbridge.msdk.video.bt.module.BTBaseView r14 = (com.mbridge.msdk.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L195
            int r14 = r14.getViewHeight()     // Catch: java.lang.Throwable -> L195
            goto L132
        L104:
            r14 = r7
            goto L132
        L106:
            java.lang.String r2 = "left"
            r6 = -999(0xfffffffffffffc19, float:NaN)
            int r2 = r14.optInt(r2, r6)     // Catch: java.lang.Throwable -> L195
            java.lang.String r7 = "top"
            int r7 = r14.optInt(r7, r6)     // Catch: java.lang.Throwable -> L195
            java.lang.String r8 = "right"
            int r8 = r14.optInt(r8, r6)     // Catch: java.lang.Throwable -> L195
            java.lang.String r9 = "bottom"
            int r6 = r14.optInt(r9, r6)     // Catch: java.lang.Throwable -> L195
            android.graphics.Rect r9 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L195
            r9.<init>(r2, r7, r8, r6)     // Catch: java.lang.Throwable -> L195
            java.lang.String r2 = "width"
            int r7 = r14.optInt(r2)     // Catch: java.lang.Throwable -> L195
            java.lang.String r2 = "height"
            int r14 = r14.optInt(r2)     // Catch: java.lang.Throwable -> L195
            r2 = r9
        L132:
            android.view.ViewGroup$LayoutParams r6 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L195
            r8 = -1
            r6.<init>(r8, r8)     // Catch: java.lang.Throwable -> L195
            boolean r9 = r4 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L195
            if (r9 == 0) goto L142
            android.widget.FrameLayout$LayoutParams r6 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L195
            r6.<init>(r8, r8)     // Catch: java.lang.Throwable -> L195
            goto L155
        L142:
            boolean r9 = r4 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L195
            if (r9 == 0) goto L14c
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L195
            r6.<init>(r8, r8)     // Catch: java.lang.Throwable -> L195
            goto L155
        L14c:
            boolean r9 = r4 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L195
            if (r9 == 0) goto L155
            android.widget.LinearLayout$LayoutParams r6 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L195
            r6.<init>(r8, r8)     // Catch: java.lang.Throwable -> L195
        L155:
            android.view.ViewGroup$LayoutParams r14 = r12.a(r6, r2, r7, r14)     // Catch: java.lang.Throwable -> L195
            com.mbridge.msdk.foundation.tools.an.a(r5)     // Catch: java.lang.Throwable -> L195
            r4.addView(r5, r14)     // Catch: java.lang.Throwable -> L195
        L15f:
            r12.a(r13, r3)     // Catch: java.lang.Throwable -> L195
            java.lang.String r14 = "onAppendView"
            r12.a(r13, r14, r3)     // Catch: java.lang.Throwable -> L195
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L195
            r14.<init>()     // Catch: java.lang.Throwable -> L195
            java.lang.String r2 = "appendSubView parentId = "
            r14.append(r2)     // Catch: java.lang.Throwable -> L195
            r14.append(r3)     // Catch: java.lang.Throwable -> L195
            java.lang.String r2 = " childId = "
            r14.append(r2)     // Catch: java.lang.Throwable -> L195
            r14.append(r0)     // Catch: java.lang.Throwable -> L195
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L195
            com.mbridge.msdk.foundation.tools.z.a(r1, r14)     // Catch: java.lang.Throwable -> L195
            goto L1b5
        L184:
            java.lang.String r14 = "view is not exist"
            r12.c(r13, r14)     // Catch: java.lang.Throwable -> L195
            return
        L18a:
            java.lang.String r14 = "instanceId is not exist"
            r12.c(r13, r14)     // Catch: java.lang.Throwable -> L195
            java.lang.String r14 = "appendSubView failed: instanceId is not exist"
            com.mbridge.msdk.foundation.tools.z.a(r1, r14)     // Catch: java.lang.Throwable -> L195
            goto L1b5
        L195:
            r14 = move-exception
            java.lang.String r0 = r14.getMessage()
            r12.c(r13, r0)
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r0 = "appendSubView failed: "
            r13.append(r0)
            java.lang.String r14 = r14.getMessage()
            r13.append(r14)
            java.lang.String r13 = r13.toString()
            com.mbridge.msdk.foundation.tools.z.a(r1, r13)
        L1b5:
            return
    }

    public final void j(java.lang.Object r11, org.json.JSONObject r12) {
            r10 = this;
            java.lang.String r0 = "id"
            java.lang.String r1 = "OperateViews"
            java.lang.String r2 = "unitId"
            java.lang.String r2 = r12.optString(r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r3 = r12.optString(r0)     // Catch: java.lang.Throwable -> L144
            java.lang.String r4 = r10.i(r3)     // Catch: java.lang.Throwable -> L144
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L144
            if (r5 == 0) goto L25
            r5 = r11
            com.mbridge.msdk.mbjscommon.windvane.a r5 = (com.mbridge.msdk.mbjscommon.windvane.a) r5     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r5.a     // Catch: java.lang.Throwable -> L144
            if (r6 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r5.a     // Catch: java.lang.Throwable -> L144
            java.lang.String r4 = r4.getRid()     // Catch: java.lang.Throwable -> L144
        L25:
            java.lang.String r5 = "data"
            org.json.JSONObject r12 = r12.optJSONObject(r5)     // Catch: java.lang.Throwable -> L144
            if (r12 == 0) goto L13e
            boolean r5 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L144
            if (r5 == 0) goto L35
            goto L13e
        L35:
            java.lang.String r0 = r12.optString(r0)     // Catch: java.lang.Throwable -> L144
            java.util.LinkedHashMap r2 = r10.b(r2, r4)     // Catch: java.lang.Throwable -> L144
            boolean r4 = r2.containsKey(r3)     // Catch: java.lang.Throwable -> L144
            if (r4 == 0) goto L133
            boolean r4 = r2.containsKey(r0)     // Catch: java.lang.Throwable -> L144
            if (r4 == 0) goto L133
            java.lang.Object r4 = r2.get(r0)     // Catch: java.lang.Throwable -> L144
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L144
            java.lang.Object r5 = r2.get(r3)     // Catch: java.lang.Throwable -> L144
            android.view.View r5 = (android.view.View) r5     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.tools.an.a(r5)     // Catch: java.lang.Throwable -> L144
            if (r4 == 0) goto L12d
            if (r5 != 0) goto L5e
            goto L12d
        L5e:
            java.lang.String r6 = "rect"
            org.json.JSONObject r12 = r12.optJSONObject(r6)     // Catch: java.lang.Throwable -> L144
            boolean r6 = r5 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> L144
            if (r6 == 0) goto L8f
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L144
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L144
        L70:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> L144
            if (r4 == 0) goto L108
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> L144
            android.view.View r4 = (android.view.View) r4     // Catch: java.lang.Throwable -> L144
            boolean r6 = r4 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTContainer     // Catch: java.lang.Throwable -> L144
            if (r6 == 0) goto L70
            com.mbridge.msdk.foundation.tools.an.a(r5)     // Catch: java.lang.Throwable -> L144
            r2 = r4
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r2 = (com.mbridge.msdk.video.bt.module.MBridgeBTContainer) r2     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r4 = (com.mbridge.msdk.video.bt.module.MBridgeBTContainer) r4     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.video.bt.module.MBTempContainer r5 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r5     // Catch: java.lang.Throwable -> L144
            r2.appendSubView(r4, r5, r12)     // Catch: java.lang.Throwable -> L144
            goto L108
        L8f:
            r2 = 0
            r6 = 0
            if (r12 != 0) goto Laf
            boolean r12 = r5 instanceof com.mbridge.msdk.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L144
            if (r12 == 0) goto Lad
            r12 = r5
            com.mbridge.msdk.video.bt.module.BTBaseView r12 = (com.mbridge.msdk.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L144
            android.graphics.Rect r2 = r12.getRect()     // Catch: java.lang.Throwable -> L144
            r12 = r5
            com.mbridge.msdk.video.bt.module.BTBaseView r12 = (com.mbridge.msdk.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L144
            int r6 = r12.getViewWidth()     // Catch: java.lang.Throwable -> L144
            r12 = r5
            com.mbridge.msdk.video.bt.module.BTBaseView r12 = (com.mbridge.msdk.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L144
            int r12 = r12.getViewHeight()     // Catch: java.lang.Throwable -> L144
            goto Ldb
        Lad:
            r12 = r6
            goto Ldb
        Laf:
            java.lang.String r2 = "left"
            r6 = -999(0xfffffffffffffc19, float:NaN)
            int r2 = r12.optInt(r2, r6)     // Catch: java.lang.Throwable -> L144
            java.lang.String r7 = "top"
            int r7 = r12.optInt(r7, r6)     // Catch: java.lang.Throwable -> L144
            java.lang.String r8 = "right"
            int r8 = r12.optInt(r8, r6)     // Catch: java.lang.Throwable -> L144
            java.lang.String r9 = "bottom"
            int r6 = r12.optInt(r9, r6)     // Catch: java.lang.Throwable -> L144
            android.graphics.Rect r9 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L144
            r9.<init>(r2, r7, r8, r6)     // Catch: java.lang.Throwable -> L144
            java.lang.String r2 = "width"
            int r6 = r12.optInt(r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r2 = "height"
            int r12 = r12.optInt(r2)     // Catch: java.lang.Throwable -> L144
            r2 = r9
        Ldb:
            android.view.ViewGroup$LayoutParams r7 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L144
            r8 = -1
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L144
            boolean r9 = r4 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L144
            if (r9 == 0) goto Leb
            android.widget.FrameLayout$LayoutParams r7 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L144
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L144
            goto Lfe
        Leb:
            boolean r9 = r4 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L144
            if (r9 == 0) goto Lf5
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L144
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L144
            goto Lfe
        Lf5:
            boolean r9 = r4 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L144
            if (r9 == 0) goto Lfe
            android.widget.LinearLayout$LayoutParams r7 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L144
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L144
        Lfe:
            android.view.ViewGroup$LayoutParams r12 = r10.a(r7, r2, r6, r12)     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.tools.an.a(r5)     // Catch: java.lang.Throwable -> L144
            r4.addView(r5, r12)     // Catch: java.lang.Throwable -> L144
        L108:
            r10.a(r11, r3)     // Catch: java.lang.Throwable -> L144
            java.lang.String r12 = "onAppendViewTo"
            r10.a(r11, r12, r3)     // Catch: java.lang.Throwable -> L144
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L144
            r12.<init>()     // Catch: java.lang.Throwable -> L144
            java.lang.String r2 = "appendViewTo parentId = "
            r12.append(r2)     // Catch: java.lang.Throwable -> L144
            r12.append(r0)     // Catch: java.lang.Throwable -> L144
            java.lang.String r0 = " childId = "
            r12.append(r0)     // Catch: java.lang.Throwable -> L144
            r12.append(r3)     // Catch: java.lang.Throwable -> L144
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L144
            com.mbridge.msdk.foundation.tools.z.a(r1, r12)     // Catch: java.lang.Throwable -> L144
            goto L164
        L12d:
            java.lang.String r12 = "view is not exist"
            r10.c(r11, r12)     // Catch: java.lang.Throwable -> L144
            return
        L133:
            java.lang.String r12 = "instanceId is not exist"
            r10.c(r11, r12)     // Catch: java.lang.Throwable -> L144
            java.lang.String r12 = "appendViewTo failed: instanceId is not exist"
            com.mbridge.msdk.foundation.tools.z.a(r1, r12)     // Catch: java.lang.Throwable -> L144
            goto L164
        L13e:
            java.lang.String r12 = "unitId or data is empty"
            r10.c(r11, r12)     // Catch: java.lang.Throwable -> L144
            return
        L144:
            r12 = move-exception
            java.lang.String r0 = r12.getMessage()
            r10.c(r11, r0)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = "appendViewTo failed: "
            r11.append(r0)
            java.lang.String r12 = r12.getMessage()
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            com.mbridge.msdk.foundation.tools.z.a(r1, r11)
        L164:
            return
    }

    public final void k(java.lang.Object r13, org.json.JSONObject r14) {
            r12 = this;
            java.lang.String r0 = "id"
            java.lang.String r1 = "OperateViews"
            java.lang.String r2 = "unitId"
            java.lang.String r2 = r14.optString(r2)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r3 = r14.optString(r0)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r4 = r12.i(r3)     // Catch: java.lang.Throwable -> L18f
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L18f
            if (r5 == 0) goto L25
            r5 = r13
            com.mbridge.msdk.mbjscommon.windvane.a r5 = (com.mbridge.msdk.mbjscommon.windvane.a) r5     // Catch: java.lang.Throwable -> L18f
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r5.a     // Catch: java.lang.Throwable -> L18f
            if (r6 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r5.a     // Catch: java.lang.Throwable -> L18f
            java.lang.String r4 = r4.getRid()     // Catch: java.lang.Throwable -> L18f
        L25:
            java.lang.String r5 = "data"
            org.json.JSONObject r14 = r14.optJSONObject(r5)     // Catch: java.lang.Throwable -> L18f
            if (r14 != 0) goto L33
            java.lang.String r14 = "data is empty"
            r12.c(r13, r14)     // Catch: java.lang.Throwable -> L18f
            return
        L33:
            java.lang.String r0 = r14.optString(r0)     // Catch: java.lang.Throwable -> L18f
            java.util.LinkedHashMap r2 = r12.b(r2, r4)     // Catch: java.lang.Throwable -> L18f
            boolean r4 = r2.containsKey(r0)     // Catch: java.lang.Throwable -> L18f
            if (r4 == 0) goto L184
            boolean r4 = r2.containsKey(r3)     // Catch: java.lang.Throwable -> L18f
            if (r4 == 0) goto L184
            java.lang.Object r4 = r2.get(r3)     // Catch: java.lang.Throwable -> L18f
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L18f
            java.lang.Object r5 = r2.get(r0)     // Catch: java.lang.Throwable -> L18f
            android.view.View r5 = (android.view.View) r5     // Catch: java.lang.Throwable -> L18f
            if (r4 == 0) goto L17e
            if (r5 != 0) goto L59
            goto L17e
        L59:
            java.lang.String r6 = "rect"
            org.json.JSONObject r14 = r14.optJSONObject(r6)     // Catch: java.lang.Throwable -> L18f
            boolean r6 = r5 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> L18f
            r7 = 0
            if (r6 == 0) goto Le4
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18f
            r4.<init>()     // Catch: java.lang.Throwable -> L18f
            java.lang.String r6 = "OperateViews setNotchString = "
            r4.append(r6)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r6 = "%1$s-%2$s-%3$s-%4$s-%5$s"
            r8 = 5
            java.lang.Object[] r8 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L18f
            int r9 = com.mbridge.msdk.video.bt.a.c.l     // Catch: java.lang.Throwable -> L18f
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L18f
            r8[r7] = r9     // Catch: java.lang.Throwable -> L18f
            r7 = 1
            int r9 = com.mbridge.msdk.video.bt.a.c.m     // Catch: java.lang.Throwable -> L18f
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L18f
            r8[r7] = r9     // Catch: java.lang.Throwable -> L18f
            r7 = 2
            int r9 = com.mbridge.msdk.video.bt.a.c.n     // Catch: java.lang.Throwable -> L18f
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L18f
            r8[r7] = r9     // Catch: java.lang.Throwable -> L18f
            r7 = 3
            int r9 = com.mbridge.msdk.video.bt.a.c.o     // Catch: java.lang.Throwable -> L18f
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L18f
            r8[r7] = r9     // Catch: java.lang.Throwable -> L18f
            r7 = 4
            int r9 = com.mbridge.msdk.video.bt.a.c.p     // Catch: java.lang.Throwable -> L18f
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L18f
            r8[r7] = r9     // Catch: java.lang.Throwable -> L18f
            java.lang.String r6 = java.lang.String.format(r6, r8)     // Catch: java.lang.Throwable -> L18f
            r4.append(r6)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L18f
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)     // Catch: java.lang.Throwable -> L18f
            r6 = r5
            com.mbridge.msdk.video.bt.module.MBTempContainer r6 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r6     // Catch: java.lang.Throwable -> L18f
            int r7 = com.mbridge.msdk.video.bt.a.c.l     // Catch: java.lang.Throwable -> L18f
            int r8 = com.mbridge.msdk.video.bt.a.c.m     // Catch: java.lang.Throwable -> L18f
            int r9 = com.mbridge.msdk.video.bt.a.c.n     // Catch: java.lang.Throwable -> L18f
            int r10 = com.mbridge.msdk.video.bt.a.c.o     // Catch: java.lang.Throwable -> L18f
            int r11 = com.mbridge.msdk.video.bt.a.c.p     // Catch: java.lang.Throwable -> L18f
            r6.setNotchPadding(r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L18f
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L18f
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L18f
        Lc5:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> L18f
            if (r4 == 0) goto L159
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> L18f
            android.view.View r4 = (android.view.View) r4     // Catch: java.lang.Throwable -> L18f
            boolean r6 = r4 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTContainer     // Catch: java.lang.Throwable -> L18f
            if (r6 == 0) goto Lc5
            com.mbridge.msdk.foundation.tools.an.a(r5)     // Catch: java.lang.Throwable -> L18f
            r2 = r4
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r2 = (com.mbridge.msdk.video.bt.module.MBridgeBTContainer) r2     // Catch: java.lang.Throwable -> L18f
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r4 = (com.mbridge.msdk.video.bt.module.MBridgeBTContainer) r4     // Catch: java.lang.Throwable -> L18f
            com.mbridge.msdk.video.bt.module.MBTempContainer r5 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r5     // Catch: java.lang.Throwable -> L18f
            r2.appendSubView(r4, r5, r14)     // Catch: java.lang.Throwable -> L18f
            goto L159
        Le4:
            r2 = 0
            if (r14 != 0) goto L103
            boolean r14 = r5 instanceof com.mbridge.msdk.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L18f
            if (r14 == 0) goto L101
            r14 = r5
            com.mbridge.msdk.video.bt.module.BTBaseView r14 = (com.mbridge.msdk.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L18f
            android.graphics.Rect r2 = r14.getRect()     // Catch: java.lang.Throwable -> L18f
            r14 = r5
            com.mbridge.msdk.video.bt.module.BTBaseView r14 = (com.mbridge.msdk.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L18f
            int r7 = r14.getViewWidth()     // Catch: java.lang.Throwable -> L18f
            r14 = r5
            com.mbridge.msdk.video.bt.module.BTBaseView r14 = (com.mbridge.msdk.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L18f
            int r14 = r14.getViewHeight()     // Catch: java.lang.Throwable -> L18f
            goto L12f
        L101:
            r14 = r7
            goto L12f
        L103:
            java.lang.String r2 = "left"
            r6 = -999(0xfffffffffffffc19, float:NaN)
            int r2 = r14.optInt(r2, r6)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r7 = "top"
            int r7 = r14.optInt(r7, r6)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r8 = "right"
            int r8 = r14.optInt(r8, r6)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r9 = "bottom"
            int r6 = r14.optInt(r9, r6)     // Catch: java.lang.Throwable -> L18f
            android.graphics.Rect r9 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L18f
            r9.<init>(r2, r7, r8, r6)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r2 = "width"
            int r7 = r14.optInt(r2)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r2 = "height"
            int r14 = r14.optInt(r2)     // Catch: java.lang.Throwable -> L18f
            r2 = r9
        L12f:
            android.view.ViewGroup$LayoutParams r6 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L18f
            r8 = -1
            r6.<init>(r8, r8)     // Catch: java.lang.Throwable -> L18f
            boolean r9 = r4 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L18f
            if (r9 == 0) goto L13f
            android.widget.FrameLayout$LayoutParams r6 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L18f
            r6.<init>(r8, r8)     // Catch: java.lang.Throwable -> L18f
            goto L152
        L13f:
            boolean r9 = r4 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L18f
            if (r9 == 0) goto L149
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L18f
            r6.<init>(r8, r8)     // Catch: java.lang.Throwable -> L18f
            goto L152
        L149:
            boolean r9 = r4 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L18f
            if (r9 == 0) goto L152
            android.widget.LinearLayout$LayoutParams r6 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L18f
            r6.<init>(r8, r8)     // Catch: java.lang.Throwable -> L18f
        L152:
            android.view.ViewGroup$LayoutParams r14 = r12.a(r6, r2, r7, r14)     // Catch: java.lang.Throwable -> L18f
            r4.addView(r5, r14)     // Catch: java.lang.Throwable -> L18f
        L159:
            r12.a(r13, r3)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r14 = "onAppendView"
            r12.a(r13, r14, r3)     // Catch: java.lang.Throwable -> L18f
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18f
            r14.<init>()     // Catch: java.lang.Throwable -> L18f
            java.lang.String r2 = "appendSubView parentId = "
            r14.append(r2)     // Catch: java.lang.Throwable -> L18f
            r14.append(r3)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r2 = " childId = "
            r14.append(r2)     // Catch: java.lang.Throwable -> L18f
            r14.append(r0)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L18f
            com.mbridge.msdk.foundation.tools.z.a(r1, r14)     // Catch: java.lang.Throwable -> L18f
            goto L1af
        L17e:
            java.lang.String r14 = "view is not exist"
            r12.c(r13, r14)     // Catch: java.lang.Throwable -> L18f
            return
        L184:
            java.lang.String r14 = "instanceId is not exist"
            r12.c(r13, r14)     // Catch: java.lang.Throwable -> L18f
            java.lang.String r14 = "appendSubView failed: instanceId is not exist"
            com.mbridge.msdk.foundation.tools.z.a(r1, r14)     // Catch: java.lang.Throwable -> L18f
            goto L1af
        L18f:
            r14 = move-exception
            java.lang.String r0 = r14.getMessage()
            r12.c(r13, r0)
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r0 = "appendSubView failed: "
            r13.append(r0)
            java.lang.String r14 = r14.getMessage()
            r13.append(r14)
            java.lang.String r13 = r13.toString()
            com.mbridge.msdk.foundation.tools.z.a(r1, r13)
        L1af:
            return
    }

    public final void l(java.lang.Object r11, org.json.JSONObject r12) {
            r10 = this;
            java.lang.String r0 = "id"
            java.lang.String r1 = "OperateViews"
            java.lang.String r2 = "unitId"
            java.lang.String r2 = r12.optString(r2)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r3 = r12.optString(r0)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r4 = r10.i(r3)     // Catch: java.lang.Throwable -> L13e
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L13e
            if (r5 == 0) goto L25
            r5 = r11
            com.mbridge.msdk.mbjscommon.windvane.a r5 = (com.mbridge.msdk.mbjscommon.windvane.a) r5     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r5.a     // Catch: java.lang.Throwable -> L13e
            if (r6 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r5.a     // Catch: java.lang.Throwable -> L13e
            java.lang.String r4 = r4.getRid()     // Catch: java.lang.Throwable -> L13e
        L25:
            java.lang.String r5 = "data"
            org.json.JSONObject r12 = r12.optJSONObject(r5)     // Catch: java.lang.Throwable -> L13e
            if (r12 == 0) goto L138
            boolean r5 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L13e
            if (r5 == 0) goto L35
            goto L138
        L35:
            java.lang.String r0 = r12.optString(r0)     // Catch: java.lang.Throwable -> L13e
            java.util.LinkedHashMap r2 = r10.b(r2, r4)     // Catch: java.lang.Throwable -> L13e
            boolean r4 = r2.containsKey(r3)     // Catch: java.lang.Throwable -> L13e
            if (r4 == 0) goto L12d
            boolean r4 = r2.containsKey(r0)     // Catch: java.lang.Throwable -> L13e
            if (r4 == 0) goto L12d
            java.lang.Object r4 = r2.get(r0)     // Catch: java.lang.Throwable -> L13e
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L13e
            java.lang.Object r5 = r2.get(r3)     // Catch: java.lang.Throwable -> L13e
            android.view.View r5 = (android.view.View) r5     // Catch: java.lang.Throwable -> L13e
            if (r4 == 0) goto L127
            if (r5 != 0) goto L5b
            goto L127
        L5b:
            java.lang.String r6 = "rect"
            org.json.JSONObject r12 = r12.optJSONObject(r6)     // Catch: java.lang.Throwable -> L13e
            boolean r6 = r5 instanceof com.mbridge.msdk.video.bt.module.MBTempContainer     // Catch: java.lang.Throwable -> L13e
            if (r6 == 0) goto L8c
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L13e
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L13e
        L6d:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> L13e
            if (r4 == 0) goto L102
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> L13e
            android.view.View r4 = (android.view.View) r4     // Catch: java.lang.Throwable -> L13e
            boolean r6 = r4 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTContainer     // Catch: java.lang.Throwable -> L13e
            if (r6 == 0) goto L6d
            com.mbridge.msdk.foundation.tools.an.a(r5)     // Catch: java.lang.Throwable -> L13e
            r2 = r4
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r2 = (com.mbridge.msdk.video.bt.module.MBridgeBTContainer) r2     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.bt.module.MBridgeBTContainer r4 = (com.mbridge.msdk.video.bt.module.MBridgeBTContainer) r4     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.video.bt.module.MBTempContainer r5 = (com.mbridge.msdk.video.bt.module.MBTempContainer) r5     // Catch: java.lang.Throwable -> L13e
            r2.appendSubView(r4, r5, r12)     // Catch: java.lang.Throwable -> L13e
            goto L102
        L8c:
            r2 = 0
            r6 = 0
            if (r12 != 0) goto Lac
            boolean r12 = r5 instanceof com.mbridge.msdk.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L13e
            if (r12 == 0) goto Laa
            r12 = r5
            com.mbridge.msdk.video.bt.module.BTBaseView r12 = (com.mbridge.msdk.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L13e
            android.graphics.Rect r2 = r12.getRect()     // Catch: java.lang.Throwable -> L13e
            r12 = r5
            com.mbridge.msdk.video.bt.module.BTBaseView r12 = (com.mbridge.msdk.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L13e
            int r6 = r12.getViewWidth()     // Catch: java.lang.Throwable -> L13e
            r12 = r5
            com.mbridge.msdk.video.bt.module.BTBaseView r12 = (com.mbridge.msdk.video.bt.module.BTBaseView) r12     // Catch: java.lang.Throwable -> L13e
            int r12 = r12.getViewHeight()     // Catch: java.lang.Throwable -> L13e
            goto Ld8
        Laa:
            r12 = r6
            goto Ld8
        Lac:
            java.lang.String r2 = "left"
            r6 = -999(0xfffffffffffffc19, float:NaN)
            int r2 = r12.optInt(r2, r6)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r7 = "top"
            int r7 = r12.optInt(r7, r6)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r8 = "right"
            int r8 = r12.optInt(r8, r6)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r9 = "bottom"
            int r6 = r12.optInt(r9, r6)     // Catch: java.lang.Throwable -> L13e
            android.graphics.Rect r9 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L13e
            r9.<init>(r2, r7, r8, r6)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r2 = "width"
            int r6 = r12.optInt(r2)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r2 = "height"
            int r12 = r12.optInt(r2)     // Catch: java.lang.Throwable -> L13e
            r2 = r9
        Ld8:
            android.view.ViewGroup$LayoutParams r7 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L13e
            r8 = -1
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L13e
            boolean r9 = r4 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L13e
            if (r9 == 0) goto Le8
            android.widget.FrameLayout$LayoutParams r7 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L13e
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L13e
            goto Lfb
        Le8:
            boolean r9 = r4 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L13e
            if (r9 == 0) goto Lf2
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L13e
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L13e
            goto Lfb
        Lf2:
            boolean r9 = r4 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L13e
            if (r9 == 0) goto Lfb
            android.widget.LinearLayout$LayoutParams r7 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L13e
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L13e
        Lfb:
            android.view.ViewGroup$LayoutParams r12 = r10.a(r7, r2, r6, r12)     // Catch: java.lang.Throwable -> L13e
            r4.addView(r5, r12)     // Catch: java.lang.Throwable -> L13e
        L102:
            r10.a(r11, r3)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r12 = "onAppendViewTo"
            r10.a(r11, r12, r3)     // Catch: java.lang.Throwable -> L13e
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13e
            r12.<init>()     // Catch: java.lang.Throwable -> L13e
            java.lang.String r2 = "appendViewTo parentId = "
            r12.append(r2)     // Catch: java.lang.Throwable -> L13e
            r12.append(r0)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r0 = " childId = "
            r12.append(r0)     // Catch: java.lang.Throwable -> L13e
            r12.append(r3)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L13e
            com.mbridge.msdk.foundation.tools.z.a(r1, r12)     // Catch: java.lang.Throwable -> L13e
            goto L15e
        L127:
            java.lang.String r12 = "view is not exist"
            r10.c(r11, r12)     // Catch: java.lang.Throwable -> L13e
            return
        L12d:
            java.lang.String r12 = "instanceId is not exist"
            r10.c(r11, r12)     // Catch: java.lang.Throwable -> L13e
            java.lang.String r12 = "appendViewTo failed: instanceId is not exist"
            com.mbridge.msdk.foundation.tools.z.a(r1, r12)     // Catch: java.lang.Throwable -> L13e
            goto L15e
        L138:
            java.lang.String r12 = "unitId or data is empty"
            r10.c(r11, r12)     // Catch: java.lang.Throwable -> L13e
            return
        L13e:
            r12 = move-exception
            java.lang.String r0 = r12.getMessage()
            r10.c(r11, r0)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = "appendViewTo failed: "
            r11.append(r0)
            java.lang.String r12 = r12.getMessage()
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            com.mbridge.msdk.foundation.tools.z.a(r1, r11)
        L15e:
            return
    }

    public final void m(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> L94
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> L94
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> L94
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L94
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L94
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L94
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L94
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L94
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> L94
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L94
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> L94
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> L94
            if (r1 == 0) goto L89
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> L94
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> L94
            if (r8 == 0) goto L7e
            android.view.ViewParent r1 = r8.getParent()     // Catch: java.lang.Throwable -> L94
            if (r1 == 0) goto L7e
            android.view.ViewParent r1 = r8.getParent()     // Catch: java.lang.Throwable -> L94
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Throwable -> L94
            if (r1 == 0) goto L73
            r1.bringChildToFront(r8)     // Catch: java.lang.Throwable -> L94
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> L94
            java.lang.String r8 = "onBringViewToFront"
            r6.a(r7, r8, r2)     // Catch: java.lang.Throwable -> L94
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L94
            r8.<init>()     // Catch: java.lang.Throwable -> L94
            java.lang.String r1 = "bringViewToFront instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L94
            r8.append(r2)     // Catch: java.lang.Throwable -> L94
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L94
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L94
            goto Lb4
        L73:
            java.lang.String r8 = "parent is null"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L94
            java.lang.String r8 = "bringViewToFront failed: parent is null"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L94
            goto Lb4
        L7e:
            java.lang.String r8 = "view is null"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L94
            java.lang.String r8 = "bringViewToFront failed: view is null"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L94
            goto Lb4
        L89:
            java.lang.String r8 = "instanceId is not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L94
            java.lang.String r8 = "bringViewToFront failed: instanceId is not exist"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L94
            goto Lb4
        L94:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "bringViewToFront failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        Lb4:
            return
    }

    public final void n(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> L7d
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L7d
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L7d
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L7d
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L7d
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L7d
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> L7d
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L7d
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> L7d
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> L7d
            if (r1 == 0) goto L72
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> L7d
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> L7d
            if (r8 == 0) goto L67
            r1 = 8
            r8.setVisibility(r1)     // Catch: java.lang.Throwable -> L7d
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r8 = "onHideView"
            r6.a(r7, r8, r2)     // Catch: java.lang.Throwable -> L7d
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7d
            r8.<init>()     // Catch: java.lang.Throwable -> L7d
            java.lang.String r1 = "hideView instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L7d
            r8.append(r2)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L7d
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L7d
            goto L9d
        L67:
            java.lang.String r8 = "view not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r8 = "hideView failed: view not exist"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L7d
            goto L9d
        L72:
            java.lang.String r8 = "instanceId not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r8 = "hideView failed: instanceId not exist"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L7d
            goto L9d
        L7d:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "hideView failed: + "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        L9d:
            return
    }

    public final void o(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> L9a
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> L9a
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> L9a
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L9a
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L9a
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L9a
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L9a
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L9a
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> L9a
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L9a
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> L9a
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> L9a
            if (r1 == 0) goto L80
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> L9a
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> L9a
            if (r8 == 0) goto L66
            r1 = 0
            r8.setVisibility(r1)     // Catch: java.lang.Throwable -> L9a
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> L9a
            java.lang.String r8 = "onShowView"
            r6.a(r7, r8, r2)     // Catch: java.lang.Throwable -> L9a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9a
            r8.<init>()     // Catch: java.lang.Throwable -> L9a
            java.lang.String r1 = "showView instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L9a
            r8.append(r2)     // Catch: java.lang.Throwable -> L9a
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L9a
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L9a
            goto Lba
        L66:
            java.lang.String r8 = "view not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L9a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9a
            r8.<init>()     // Catch: java.lang.Throwable -> L9a
            java.lang.String r1 = "showView failed: view not exist instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L9a
            r8.append(r2)     // Catch: java.lang.Throwable -> L9a
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L9a
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L9a
            goto Lba
        L80:
            java.lang.String r8 = "instanceId not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L9a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9a
            r8.<init>()     // Catch: java.lang.Throwable -> L9a
            java.lang.String r1 = "showView failed: instanceId not exist instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L9a
            r8.append(r2)     // Catch: java.lang.Throwable -> L9a
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L9a
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L9a
            goto Lba
        L9a:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "showView failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        Lba:
            return
    }

    public final void p(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> Laf
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Laf
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> Laf
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> Laf
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> Laf
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> Laf
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> Laf
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Laf
            return
        L33:
            java.lang.String r4 = "color"
            java.lang.String r8 = r8.optString(r4)     // Catch: java.lang.Throwable -> Laf
            boolean r4 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Laf
            if (r4 == 0) goto L45
            java.lang.String r8 = "color is not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Laf
            return
        L45:
            java.util.LinkedHashMap r1 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> Laf
            boolean r3 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> Laf
            if (r3 == 0) goto L95
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> Laf
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> Laf
            if (r1 == 0) goto L7b
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> Laf
            int r8 = android.graphics.Color.parseColor(r8)     // Catch: java.lang.Throwable -> Laf
            r1.setBackgroundColor(r8)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r8 = "onViewBgColorChanged"
            r6.a(r7, r8, r2)     // Catch: java.lang.Throwable -> Laf
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laf
            r8.<init>()     // Catch: java.lang.Throwable -> Laf
            java.lang.String r1 = "setViewBgColor instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Laf
            r8.append(r2)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Laf
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Laf
            goto Lcf
        L7b:
            java.lang.String r8 = "view not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Laf
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laf
            r8.<init>()     // Catch: java.lang.Throwable -> Laf
            java.lang.String r1 = "setViewBgColor failed: view not exist instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Laf
            r8.append(r2)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Laf
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Laf
            goto Lcf
        L95:
            java.lang.String r8 = "instanceId not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Laf
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laf
            r8.<init>()     // Catch: java.lang.Throwable -> Laf
            java.lang.String r1 = "setViewBgColor failed: instanceId not exist instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Laf
            r8.append(r2)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Laf
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Laf
            goto Lcf
        Laf:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "setViewBgColor failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        Lcf:
            return
    }

    public final void q(java.lang.Object r8, org.json.JSONObject r9) {
            r7 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r9.optString(r1)     // Catch: java.lang.Throwable -> La2
            java.lang.String r2 = "id"
            java.lang.String r2 = r9.optString(r2)     // Catch: java.lang.Throwable -> La2
            java.lang.String r3 = r7.i(r2)     // Catch: java.lang.Throwable -> La2
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> La2
            if (r4 == 0) goto L25
            r4 = r8
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> La2
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> La2
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> La2
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r9 = r9.optJSONObject(r4)     // Catch: java.lang.Throwable -> La2
            if (r9 != 0) goto L33
            java.lang.String r9 = "data is empty"
            r7.c(r8, r9)     // Catch: java.lang.Throwable -> La2
            return
        L33:
            java.lang.String r4 = "alpha"
            r5 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r4 = r9.optDouble(r4, r5)     // Catch: java.lang.Throwable -> La2
            java.util.LinkedHashMap r9 = r7.b(r1, r3)     // Catch: java.lang.Throwable -> La2
            boolean r1 = r9.containsKey(r2)     // Catch: java.lang.Throwable -> La2
            if (r1 == 0) goto L88
            java.lang.Object r9 = r9.get(r2)     // Catch: java.lang.Throwable -> La2
            android.view.View r9 = (android.view.View) r9     // Catch: java.lang.Throwable -> La2
            if (r9 == 0) goto L6e
            float r1 = (float) r4     // Catch: java.lang.Throwable -> La2
            r9.setAlpha(r1)     // Catch: java.lang.Throwable -> La2
            r7.a(r8, r2)     // Catch: java.lang.Throwable -> La2
            java.lang.String r9 = "onViewAlphaChanged"
            r7.a(r8, r9, r2)     // Catch: java.lang.Throwable -> La2
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La2
            r9.<init>()     // Catch: java.lang.Throwable -> La2
            java.lang.String r1 = "setViewAlpha instanceId = "
            r9.append(r1)     // Catch: java.lang.Throwable -> La2
            r9.append(r2)     // Catch: java.lang.Throwable -> La2
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.foundation.tools.z.a(r0, r9)     // Catch: java.lang.Throwable -> La2
            goto Lc2
        L6e:
            java.lang.String r9 = "view not exist"
            r7.c(r8, r9)     // Catch: java.lang.Throwable -> La2
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La2
            r9.<init>()     // Catch: java.lang.Throwable -> La2
            java.lang.String r1 = "setViewAlpha failed: view not exist instanceId = "
            r9.append(r1)     // Catch: java.lang.Throwable -> La2
            r9.append(r2)     // Catch: java.lang.Throwable -> La2
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.foundation.tools.z.a(r0, r9)     // Catch: java.lang.Throwable -> La2
            goto Lc2
        L88:
            java.lang.String r9 = "instanceId not exist"
            r7.c(r8, r9)     // Catch: java.lang.Throwable -> La2
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La2
            r9.<init>()     // Catch: java.lang.Throwable -> La2
            java.lang.String r1 = "setViewAlpha failed: instanceId not exist instanceId = "
            r9.append(r1)     // Catch: java.lang.Throwable -> La2
            r9.append(r2)     // Catch: java.lang.Throwable -> La2
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.foundation.tools.z.a(r0, r9)     // Catch: java.lang.Throwable -> La2
            goto Lc2
        La2:
            r9 = move-exception
            java.lang.String r1 = r9.getMessage()
            r7.c(r8, r1)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "setViewAlpha failed: "
            r8.append(r1)
            java.lang.String r9 = r9.getMessage()
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
        Lc2:
            return
    }

    public final void r(java.lang.Object r10, org.json.JSONObject r11) {
            r9 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r11.optString(r1)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = "id"
            java.lang.String r2 = r11.optString(r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r3 = r9.i(r2)     // Catch: java.lang.Throwable -> Lac
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lac
            if (r4 == 0) goto L25
            r4 = r10
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> Lac
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> Lac
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> Lac
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> Lac
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r11 = r11.optJSONObject(r4)     // Catch: java.lang.Throwable -> Lac
            if (r11 != 0) goto L33
            java.lang.String r11 = "data is empty"
            r9.c(r10, r11)     // Catch: java.lang.Throwable -> Lac
            return
        L33:
            java.lang.String r4 = "vertical"
            r5 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r7 = r11.optDouble(r4, r5)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r4 = "horizon"
            double r4 = r11.optDouble(r4, r5)     // Catch: java.lang.Throwable -> Lac
            java.util.LinkedHashMap r11 = r9.b(r1, r3)     // Catch: java.lang.Throwable -> Lac
            boolean r1 = r11.containsKey(r2)     // Catch: java.lang.Throwable -> Lac
            if (r1 == 0) goto L92
            java.lang.Object r11 = r11.get(r2)     // Catch: java.lang.Throwable -> Lac
            android.view.View r11 = (android.view.View) r11     // Catch: java.lang.Throwable -> Lac
            if (r11 == 0) goto L78
            float r1 = (float) r4     // Catch: java.lang.Throwable -> Lac
            r11.setScaleX(r1)     // Catch: java.lang.Throwable -> Lac
            float r1 = (float) r7     // Catch: java.lang.Throwable -> Lac
            r11.setScaleY(r1)     // Catch: java.lang.Throwable -> Lac
            r9.a(r10, r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r11 = "onViewScaleChanged"
            r9.a(r10, r11, r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r11.<init>()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r1 = "setViewScale instanceId = "
            r11.append(r1)     // Catch: java.lang.Throwable -> Lac
            r11.append(r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Lac
            com.mbridge.msdk.foundation.tools.z.a(r0, r11)     // Catch: java.lang.Throwable -> Lac
            goto Lcc
        L78:
            java.lang.String r11 = "view not exist"
            r9.c(r10, r11)     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r11.<init>()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r1 = "setViewScale failed: view not exist instanceId = "
            r11.append(r1)     // Catch: java.lang.Throwable -> Lac
            r11.append(r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Lac
            com.mbridge.msdk.foundation.tools.z.a(r0, r11)     // Catch: java.lang.Throwable -> Lac
            goto Lcc
        L92:
            java.lang.String r11 = "instanceId not exist"
            r9.c(r10, r11)     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r11.<init>()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r1 = "setViewScale failed: instanceId not exist instanceId = "
            r11.append(r1)     // Catch: java.lang.Throwable -> Lac
            r11.append(r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Lac
            com.mbridge.msdk.foundation.tools.z.a(r0, r11)     // Catch: java.lang.Throwable -> Lac
            goto Lcc
        Lac:
            r11 = move-exception
            java.lang.String r1 = r11.getMessage()
            r9.c(r10, r1)
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r1 = "setViewScale failed: "
            r10.append(r1)
            java.lang.String r11 = r11.getMessage()
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r10)
        Lcc:
            return
    }

    public final void s(java.lang.Object r13, org.json.JSONObject r14) {
            r12 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r14.optString(r1)     // Catch: java.lang.Throwable -> L142
            java.lang.String r2 = "id"
            java.lang.String r2 = r14.optString(r2)     // Catch: java.lang.Throwable -> L142
            java.lang.String r3 = r12.i(r2)     // Catch: java.lang.Throwable -> L142
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L142
            if (r4 == 0) goto L25
            r4 = r13
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L142
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L142
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L142
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L142
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r14 = r14.optJSONObject(r4)     // Catch: java.lang.Throwable -> L142
            if (r14 != 0) goto L33
            java.lang.String r14 = "data is empty"
            r12.c(r13, r14)     // Catch: java.lang.Throwable -> L142
            return
        L33:
            java.lang.String r4 = "targetComponentId"
            java.lang.String r4 = r14.optString(r4)     // Catch: java.lang.Throwable -> L142
            java.lang.String r5 = "rect"
            org.json.JSONObject r14 = r14.optJSONObject(r5)     // Catch: java.lang.Throwable -> L142
            java.util.LinkedHashMap r1 = r12.b(r1, r3)     // Catch: java.lang.Throwable -> L142
            boolean r3 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L142
            if (r3 == 0) goto L128
            boolean r3 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> L142
            if (r3 == 0) goto L128
            java.lang.Object r3 = r1.get(r2)     // Catch: java.lang.Throwable -> L142
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L142
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L142
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L142
            if (r1 == 0) goto L10e
            android.view.ViewParent r5 = r1.getParent()     // Catch: java.lang.Throwable -> L142
            if (r5 == 0) goto L10e
            android.view.ViewParent r5 = r1.getParent()     // Catch: java.lang.Throwable -> L142
            android.view.ViewGroup r5 = (android.view.ViewGroup) r5     // Catch: java.lang.Throwable -> L142
            int r1 = r5.indexOfChild(r1)     // Catch: java.lang.Throwable -> L142
            r6 = 0
            r7 = 0
            if (r14 != 0) goto L90
            boolean r14 = r3 instanceof com.mbridge.msdk.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L142
            if (r14 == 0) goto L8e
            r14 = r3
            com.mbridge.msdk.video.bt.module.BTBaseView r14 = (com.mbridge.msdk.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L142
            android.graphics.Rect r6 = r14.getRect()     // Catch: java.lang.Throwable -> L142
            r14 = r3
            com.mbridge.msdk.video.bt.module.BTBaseView r14 = (com.mbridge.msdk.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L142
            int r7 = r14.getViewWidth()     // Catch: java.lang.Throwable -> L142
            r14 = r3
            com.mbridge.msdk.video.bt.module.BTBaseView r14 = (com.mbridge.msdk.video.bt.module.BTBaseView) r14     // Catch: java.lang.Throwable -> L142
            int r14 = r14.getViewHeight()     // Catch: java.lang.Throwable -> L142
        L8a:
            r11 = r7
            r7 = r14
            r14 = r11
            goto Lbd
        L8e:
            r14 = r7
            goto Lbd
        L90:
            java.lang.String r6 = "left"
            r7 = -999(0xfffffffffffffc19, float:NaN)
            int r6 = r14.optInt(r6, r7)     // Catch: java.lang.Throwable -> L142
            java.lang.String r8 = "top"
            int r8 = r14.optInt(r8, r7)     // Catch: java.lang.Throwable -> L142
            java.lang.String r9 = "right"
            int r9 = r14.optInt(r9, r7)     // Catch: java.lang.Throwable -> L142
            java.lang.String r10 = "bottom"
            int r7 = r14.optInt(r10, r7)     // Catch: java.lang.Throwable -> L142
            android.graphics.Rect r10 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L142
            r10.<init>(r6, r8, r9, r7)     // Catch: java.lang.Throwable -> L142
            java.lang.String r6 = "width"
            int r7 = r14.optInt(r6)     // Catch: java.lang.Throwable -> L142
            java.lang.String r6 = "height"
            int r14 = r14.optInt(r6)     // Catch: java.lang.Throwable -> L142
            r6 = r10
            goto L8a
        Lbd:
            android.view.ViewGroup$LayoutParams r8 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L142
            r9 = -1
            r8.<init>(r9, r9)     // Catch: java.lang.Throwable -> L142
            boolean r10 = r5 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L142
            if (r10 == 0) goto Lcd
            android.widget.FrameLayout$LayoutParams r8 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L142
            r8.<init>(r9, r9)     // Catch: java.lang.Throwable -> L142
            goto Le0
        Lcd:
            boolean r10 = r5 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L142
            if (r10 == 0) goto Ld7
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L142
            r8.<init>(r9, r9)     // Catch: java.lang.Throwable -> L142
            goto Le0
        Ld7:
            boolean r10 = r5 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L142
            if (r10 == 0) goto Le0
            android.widget.LinearLayout$LayoutParams r8 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L142
            r8.<init>(r9, r9)     // Catch: java.lang.Throwable -> L142
        Le0:
            android.view.ViewGroup$LayoutParams r14 = r12.a(r8, r6, r14, r7)     // Catch: java.lang.Throwable -> L142
            int r1 = r1 + 1
            r5.addView(r3, r1, r14)     // Catch: java.lang.Throwable -> L142
            r12.a(r13, r2)     // Catch: java.lang.Throwable -> L142
            java.lang.String r14 = "onInsertViewAbove"
            r12.a(r13, r14, r2)     // Catch: java.lang.Throwable -> L142
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L142
            r14.<init>()     // Catch: java.lang.Throwable -> L142
            java.lang.String r1 = "insertViewAbove instanceId = "
            r14.append(r1)     // Catch: java.lang.Throwable -> L142
            r14.append(r2)     // Catch: java.lang.Throwable -> L142
            java.lang.String r1 = " brotherId = "
            r14.append(r1)     // Catch: java.lang.Throwable -> L142
            r14.append(r4)     // Catch: java.lang.Throwable -> L142
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L142
            com.mbridge.msdk.foundation.tools.z.a(r0, r14)     // Catch: java.lang.Throwable -> L142
            goto L162
        L10e:
            java.lang.String r14 = "view not exist"
            r12.c(r13, r14)     // Catch: java.lang.Throwable -> L142
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L142
            r14.<init>()     // Catch: java.lang.Throwable -> L142
            java.lang.String r1 = "insertViewAbove failed: view not exist instanceId = "
            r14.append(r1)     // Catch: java.lang.Throwable -> L142
            r14.append(r2)     // Catch: java.lang.Throwable -> L142
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L142
            com.mbridge.msdk.foundation.tools.z.a(r0, r14)     // Catch: java.lang.Throwable -> L142
            goto L162
        L128:
            java.lang.String r14 = "instanceId not exist"
            r12.c(r13, r14)     // Catch: java.lang.Throwable -> L142
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L142
            r14.<init>()     // Catch: java.lang.Throwable -> L142
            java.lang.String r1 = "insertViewAbove failed: instanceId not exist instanceId = "
            r14.append(r1)     // Catch: java.lang.Throwable -> L142
            r14.append(r2)     // Catch: java.lang.Throwable -> L142
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L142
            com.mbridge.msdk.foundation.tools.z.a(r0, r14)     // Catch: java.lang.Throwable -> L142
            goto L162
        L142:
            r14 = move-exception
            java.lang.String r1 = r14.getMessage()
            r12.c(r13, r1)
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r1 = "insertViewAbove failed: "
            r13.append(r1)
            java.lang.String r14 = r14.getMessage()
            r13.append(r14)
            java.lang.String r13 = r13.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)
        L162:
            return
    }

    public final void t(java.lang.Object r12, org.json.JSONObject r13) {
            r11 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r13.optString(r1)     // Catch: java.lang.Throwable -> L138
            java.lang.String r2 = "id"
            java.lang.String r2 = r13.optString(r2)     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = r11.i(r2)     // Catch: java.lang.Throwable -> L138
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L138
            if (r4 == 0) goto L25
            r4 = r12
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L138
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L138
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L138
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r13 = r13.optJSONObject(r4)     // Catch: java.lang.Throwable -> L138
            if (r13 != 0) goto L33
            java.lang.String r13 = "data is empty"
            r11.c(r12, r13)     // Catch: java.lang.Throwable -> L138
            return
        L33:
            java.lang.String r4 = "targetComponentId"
            java.lang.String r4 = r13.optString(r4)     // Catch: java.lang.Throwable -> L138
            java.lang.String r5 = "rect"
            org.json.JSONObject r13 = r13.optJSONObject(r5)     // Catch: java.lang.Throwable -> L138
            java.util.LinkedHashMap r1 = r11.b(r1, r3)     // Catch: java.lang.Throwable -> L138
            boolean r3 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L138
            if (r3 == 0) goto L11e
            boolean r3 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> L138
            if (r3 == 0) goto L11e
            java.lang.Object r3 = r1.get(r2)     // Catch: java.lang.Throwable -> L138
            android.view.View r3 = (android.view.View) r3     // Catch: java.lang.Throwable -> L138
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L138
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L138
            if (r1 == 0) goto L104
            android.view.ViewParent r4 = r1.getParent()     // Catch: java.lang.Throwable -> L138
            if (r4 == 0) goto L104
            android.view.ViewParent r4 = r1.getParent()     // Catch: java.lang.Throwable -> L138
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L138
            int r1 = r4.indexOfChild(r1)     // Catch: java.lang.Throwable -> L138
            r5 = 0
            r6 = 0
            if (r13 != 0) goto L90
            boolean r13 = r3 instanceof com.mbridge.msdk.video.bt.module.BTBaseView     // Catch: java.lang.Throwable -> L138
            if (r13 == 0) goto L8e
            r13 = r3
            com.mbridge.msdk.video.bt.module.BTBaseView r13 = (com.mbridge.msdk.video.bt.module.BTBaseView) r13     // Catch: java.lang.Throwable -> L138
            android.graphics.Rect r5 = r13.getRect()     // Catch: java.lang.Throwable -> L138
            r13 = r3
            com.mbridge.msdk.video.bt.module.BTBaseView r13 = (com.mbridge.msdk.video.bt.module.BTBaseView) r13     // Catch: java.lang.Throwable -> L138
            int r6 = r13.getViewWidth()     // Catch: java.lang.Throwable -> L138
            r13 = r3
            com.mbridge.msdk.video.bt.module.BTBaseView r13 = (com.mbridge.msdk.video.bt.module.BTBaseView) r13     // Catch: java.lang.Throwable -> L138
            int r13 = r13.getViewHeight()     // Catch: java.lang.Throwable -> L138
        L8a:
            r10 = r6
            r6 = r13
            r13 = r10
            goto Lbd
        L8e:
            r13 = r6
            goto Lbd
        L90:
            java.lang.String r5 = "left"
            r6 = -999(0xfffffffffffffc19, float:NaN)
            int r5 = r13.optInt(r5, r6)     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = "top"
            int r7 = r13.optInt(r7, r6)     // Catch: java.lang.Throwable -> L138
            java.lang.String r8 = "right"
            int r8 = r13.optInt(r8, r6)     // Catch: java.lang.Throwable -> L138
            java.lang.String r9 = "bottom"
            int r6 = r13.optInt(r9, r6)     // Catch: java.lang.Throwable -> L138
            android.graphics.Rect r9 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L138
            r9.<init>(r5, r7, r8, r6)     // Catch: java.lang.Throwable -> L138
            java.lang.String r5 = "width"
            int r6 = r13.optInt(r5)     // Catch: java.lang.Throwable -> L138
            java.lang.String r5 = "height"
            int r13 = r13.optInt(r5)     // Catch: java.lang.Throwable -> L138
            r5 = r9
            goto L8a
        Lbd:
            android.view.ViewGroup$LayoutParams r7 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Throwable -> L138
            r8 = -1
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L138
            boolean r9 = r4 instanceof android.widget.FrameLayout     // Catch: java.lang.Throwable -> L138
            if (r9 == 0) goto Lcd
            android.widget.FrameLayout$LayoutParams r7 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> L138
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L138
            goto Le0
        Lcd:
            boolean r9 = r4 instanceof android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L138
            if (r9 == 0) goto Ld7
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L138
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L138
            goto Le0
        Ld7:
            boolean r9 = r4 instanceof android.widget.LinearLayout     // Catch: java.lang.Throwable -> L138
            if (r9 == 0) goto Le0
            android.widget.LinearLayout$LayoutParams r7 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L138
            r7.<init>(r8, r8)     // Catch: java.lang.Throwable -> L138
        Le0:
            android.view.ViewGroup$LayoutParams r13 = r11.a(r7, r5, r13, r6)     // Catch: java.lang.Throwable -> L138
            r4.addView(r3, r1, r13)     // Catch: java.lang.Throwable -> L138
            r11.a(r12, r2)     // Catch: java.lang.Throwable -> L138
            java.lang.String r13 = "onInsertViewBelow"
            r11.a(r12, r13, r2)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r13.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r1 = "insertViewBelow instanceId = "
            r13.append(r1)     // Catch: java.lang.Throwable -> L138
            r13.append(r2)     // Catch: java.lang.Throwable -> L138
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L138
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)     // Catch: java.lang.Throwable -> L138
            goto L158
        L104:
            java.lang.String r13 = "view not exist"
            r11.c(r12, r13)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r13.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r1 = "insertViewBelow failed: view not exist instanceId = "
            r13.append(r1)     // Catch: java.lang.Throwable -> L138
            r13.append(r2)     // Catch: java.lang.Throwable -> L138
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L138
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)     // Catch: java.lang.Throwable -> L138
            goto L158
        L11e:
            java.lang.String r13 = "instanceId not exist"
            r11.c(r12, r13)     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            r13.<init>()     // Catch: java.lang.Throwable -> L138
            java.lang.String r1 = "insertViewBelow failed: instanceId not exist instanceId = "
            r13.append(r1)     // Catch: java.lang.Throwable -> L138
            r13.append(r2)     // Catch: java.lang.Throwable -> L138
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L138
            com.mbridge.msdk.foundation.tools.z.a(r0, r13)     // Catch: java.lang.Throwable -> L138
            goto L158
        L138:
            r13 = move-exception
            java.lang.String r1 = r13.getMessage()
            r11.c(r12, r1)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r1 = "insertViewBelow failed: "
            r12.append(r1)
            java.lang.String r13 = r13.getMessage()
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r12)
        L158:
            return
    }

    public final void u(java.lang.Object r19, org.json.JSONObject r20) {
            r18 = this;
            r1 = r18
            r2 = r19
            r0 = r20
            java.lang.String r3 = "unitId"
            java.lang.String r4 = "OperateViews"
            java.lang.String r5 = r0.optString(r3)     // Catch: java.lang.Throwable -> L191
            java.lang.String r6 = "id"
            java.lang.String r6 = r0.optString(r6)     // Catch: java.lang.Throwable -> L191
            java.lang.String r7 = r1.i(r6)     // Catch: java.lang.Throwable -> L191
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L191
            if (r8 == 0) goto L2b
            r8 = r2
            com.mbridge.msdk.mbjscommon.windvane.a r8 = (com.mbridge.msdk.mbjscommon.windvane.a) r8     // Catch: java.lang.Throwable -> L191
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r9 = r8.a     // Catch: java.lang.Throwable -> L191
            if (r9 == 0) goto L2b
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = r8.a     // Catch: java.lang.Throwable -> L191
            java.lang.String r7 = r7.getRid()     // Catch: java.lang.Throwable -> L191
        L2b:
            java.lang.String r8 = "data"
            org.json.JSONObject r8 = r0.optJSONObject(r8)     // Catch: java.lang.Throwable -> L191
            if (r8 != 0) goto L39
            java.lang.String r0 = "data is empty"
            r1.c(r2, r0)     // Catch: java.lang.Throwable -> L191
            return
        L39:
            java.lang.String r9 = "content"
            org.json.JSONObject r8 = r8.optJSONObject(r9)     // Catch: java.lang.Throwable -> L191
            if (r8 != 0) goto L47
            java.lang.String r0 = "content is empty"
            r1.c(r2, r0)     // Catch: java.lang.Throwable -> L191
            return
        L47:
            java.lang.String r9 = "fileURL"
            java.lang.String r9 = r8.optString(r9)     // Catch: java.lang.Throwable -> L191
            java.lang.String r10 = "filePath"
            java.lang.String r10 = r8.optString(r10)     // Catch: java.lang.Throwable -> L191
            java.lang.String r11 = "html"
            java.lang.String r11 = r8.optString(r11)     // Catch: java.lang.Throwable -> L191
            boolean r12 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L191
            if (r12 == 0) goto L71
            boolean r12 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L191
            if (r12 == 0) goto L71
            boolean r12 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L191
            if (r12 == 0) goto L71
            java.lang.String r0 = "url is empty"
            r1.c(r2, r0)     // Catch: java.lang.Throwable -> L191
            return
        L71:
            java.lang.String r12 = "campaigns"
            org.json.JSONArray r12 = r8.optJSONArray(r12)     // Catch: java.lang.Throwable -> L191
            java.util.ArrayList r13 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L191
            r13.<init>()     // Catch: java.lang.Throwable -> L191
            if (r12 == 0) goto La2
            int r15 = r12.length()     // Catch: java.lang.Throwable -> L191
            if (r15 <= 0) goto La2
            int r15 = r12.length()     // Catch: java.lang.Throwable -> L191
            r14 = 0
        L89:
            if (r14 >= r15) goto La2
            org.json.JSONObject r16 = r12.getJSONObject(r14)     // Catch: java.lang.Throwable -> L191
            r17 = r12
            com.mbridge.msdk.foundation.entity.CampaignEx r12 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r16)     // Catch: java.lang.Throwable -> L191
            if (r12 == 0) goto L9d
            r12.setCampaignUnitId(r5)     // Catch: java.lang.Throwable -> L191
            r13.add(r12)     // Catch: java.lang.Throwable -> L191
        L9d:
            int r14 = r14 + 1
            r12 = r17
            goto L89
        La2:
            java.lang.String r3 = r8.optString(r3)     // Catch: java.lang.Throwable -> L191
            java.lang.String r12 = "unitSetting"
            org.json.JSONObject r12 = r8.optJSONObject(r12)     // Catch: java.lang.Throwable -> L191
            com.mbridge.msdk.videocommon.d.c r12 = com.mbridge.msdk.videocommon.d.c.a(r12)     // Catch: java.lang.Throwable -> L191
            if (r12 == 0) goto Lb5
            r12.a(r3)     // Catch: java.lang.Throwable -> L191
        Lb5:
            java.lang.String r3 = "rect"
            org.json.JSONObject r0 = r0.optJSONObject(r3)     // Catch: java.lang.Throwable -> L191
            android.graphics.Rect r3 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L191
            r14 = -999(0xfffffffffffffc19, float:NaN)
            r3.<init>(r14, r14, r14, r14)     // Catch: java.lang.Throwable -> L191
            if (r0 == 0) goto Lf6
            java.lang.String r3 = "left"
            int r3 = r0.optInt(r3, r14)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r15 = "top"
            int r15 = r0.optInt(r15, r14)     // Catch: java.lang.Throwable -> Lf1
            r16 = r4
            java.lang.String r4 = "right"
            int r4 = r0.optInt(r4, r14)     // Catch: java.lang.Throwable -> L18b
            java.lang.String r2 = "bottom"
            int r2 = r0.optInt(r2, r14)     // Catch: java.lang.Throwable -> L18b
            android.graphics.Rect r14 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L18b
            r14.<init>(r3, r15, r4, r2)     // Catch: java.lang.Throwable -> L18b
            java.lang.String r2 = "width"
            int r2 = r0.optInt(r2)     // Catch: java.lang.Throwable -> L18b
            java.lang.String r3 = "height"
            int r0 = r0.optInt(r3)     // Catch: java.lang.Throwable -> L18b
            r3 = r14
            goto Lfa
        Lf1:
            r0 = move-exception
            r2 = r19
            goto L192
        Lf6:
            r16 = r4
            r0 = 0
            r2 = 0
        Lfa:
            java.lang.String r4 = "refreshCache"
            r14 = 0
            int r4 = r8.optInt(r4, r14)     // Catch: java.lang.Throwable -> L18b
            java.util.LinkedHashMap r5 = r1.b(r5, r7)     // Catch: java.lang.Throwable -> L18b
            boolean r7 = r5.containsKey(r6)     // Catch: java.lang.Throwable -> L18b
            if (r7 == 0) goto L16b
            java.lang.Object r5 = r5.get(r6)     // Catch: java.lang.Throwable -> L18b
            android.view.View r5 = (android.view.View) r5     // Catch: java.lang.Throwable -> L18b
            boolean r7 = r5 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTWebView     // Catch: java.lang.Throwable -> L18b
            if (r7 == 0) goto L14d
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r5 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r5     // Catch: java.lang.Throwable -> L18b
            r5.setHtml(r11)     // Catch: java.lang.Throwable -> L18b
            r5.setFilePath(r10)     // Catch: java.lang.Throwable -> L18b
            r5.setFileURL(r9)     // Catch: java.lang.Throwable -> L18b
            r5.setRect(r3)     // Catch: java.lang.Throwable -> L18b
            r5.setLayout(r2, r0)     // Catch: java.lang.Throwable -> L18b
            r5.setCampaigns(r13)     // Catch: java.lang.Throwable -> L18b
            r5.setRewardUnitSetting(r12)     // Catch: java.lang.Throwable -> L18b
            r5.webviewLoad(r4)     // Catch: java.lang.Throwable -> L18b
            r2 = r19
            r1.a(r2, r6)     // Catch: java.lang.Throwable -> L14b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L14b
            r0.<init>()     // Catch: java.lang.Throwable -> L14b
            java.lang.String r3 = "webviewLoad instanceId = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L14b
            r0.append(r6)     // Catch: java.lang.Throwable -> L14b
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L14b
            r3 = r16
            com.mbridge.msdk.foundation.tools.z.a(r3, r0)     // Catch: java.lang.Throwable -> L189
            goto L1b2
        L14b:
            r0 = move-exception
            goto L18e
        L14d:
            r2 = r19
            r3 = r16
            java.lang.String r0 = "view not exist"
            r1.c(r2, r0)     // Catch: java.lang.Throwable -> L189
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L189
            r0.<init>()     // Catch: java.lang.Throwable -> L189
            java.lang.String r4 = "webviewLoad failed: view not exist instanceId = "
            r0.append(r4)     // Catch: java.lang.Throwable -> L189
            r0.append(r6)     // Catch: java.lang.Throwable -> L189
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L189
            com.mbridge.msdk.foundation.tools.z.a(r3, r0)     // Catch: java.lang.Throwable -> L189
            goto L1b2
        L16b:
            r2 = r19
            r3 = r16
            java.lang.String r0 = "instanceId not exist"
            r1.c(r2, r0)     // Catch: java.lang.Throwable -> L189
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L189
            r0.<init>()     // Catch: java.lang.Throwable -> L189
            java.lang.String r4 = "webviewLoad failed: instanceId not exist instanceId = "
            r0.append(r4)     // Catch: java.lang.Throwable -> L189
            r0.append(r6)     // Catch: java.lang.Throwable -> L189
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L189
            com.mbridge.msdk.foundation.tools.z.a(r3, r0)     // Catch: java.lang.Throwable -> L189
            goto L1b2
        L189:
            r0 = move-exception
            goto L193
        L18b:
            r0 = move-exception
            r2 = r19
        L18e:
            r3 = r16
            goto L193
        L191:
            r0 = move-exception
        L192:
            r3 = r4
        L193:
            java.lang.String r4 = r0.getMessage()
            r1.c(r2, r4)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "webviewLoad failed: "
            r2.append(r4)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.a(r3, r0)
        L1b2:
            return
    }

    public final void v(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> Lb5
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lb5
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> Lb5
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> Lb5
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> Lb5
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> Lb5
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> Lb5
            if (r1 == 0) goto L9b
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> Lb5
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> Lb5
            boolean r1 = r8 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTWebView     // Catch: java.lang.Throwable -> Lb5
            if (r1 == 0) goto L81
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r8 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r8     // Catch: java.lang.Throwable -> Lb5
            boolean r8 = r8.webviewReload()     // Catch: java.lang.Throwable -> Lb5
            if (r8 == 0) goto L67
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r8.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "webviewReload instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lb5
            r8.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lb5
            goto Ld5
        L67:
            java.lang.String r8 = "reload failed"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r8.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "webviewReload failed reload failed instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lb5
            r8.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lb5
            goto Ld5
        L81:
            java.lang.String r8 = "view not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r8.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "webviewReload failed view not exist instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lb5
            r8.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lb5
            goto Ld5
        L9b:
            java.lang.String r8 = "instanceId not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r8.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "webviewReload failed instanceId not exist instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lb5
            r8.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lb5
            goto Ld5
        Lb5:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "webviewReload failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        Ld5:
            return
    }

    public final void w(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> Lb5
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lb5
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> Lb5
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> Lb5
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> Lb5
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> Lb5
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> Lb5
            if (r1 == 0) goto L9b
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> Lb5
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> Lb5
            boolean r1 = r8 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTWebView     // Catch: java.lang.Throwable -> Lb5
            if (r1 == 0) goto L81
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r8 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r8     // Catch: java.lang.Throwable -> Lb5
            boolean r8 = r8.webviewGoBack()     // Catch: java.lang.Throwable -> Lb5
            if (r8 == 0) goto L67
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r8.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "webviewGoBack instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lb5
            r8.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lb5
            goto Ld5
        L67:
            java.lang.String r8 = "webviewGoBack failed"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r8.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "webviewGoBack failed instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lb5
            r8.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lb5
            goto Ld5
        L81:
            java.lang.String r8 = "view not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r8.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "webviewGoBack failed view not exist instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lb5
            r8.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lb5
            goto Ld5
        L9b:
            java.lang.String r8 = "instanceId not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r8.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "webviewGoBack failed instanceId not exist instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lb5
            r8.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lb5
            goto Ld5
        Lb5:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "webviewGoBack failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        Ld5:
            return
    }

    public final void x(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> Lb5
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lb5
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> Lb5
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> Lb5
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> Lb5
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> Lb5
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> Lb5
            if (r1 == 0) goto L9b
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> Lb5
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> Lb5
            boolean r1 = r8 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTWebView     // Catch: java.lang.Throwable -> Lb5
            if (r1 == 0) goto L81
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView r8 = (com.mbridge.msdk.video.bt.module.MBridgeBTWebView) r8     // Catch: java.lang.Throwable -> Lb5
            boolean r8 = r8.webviewGoForward()     // Catch: java.lang.Throwable -> Lb5
            if (r8 == 0) goto L67
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r8.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "webviewGoForward instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lb5
            r8.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lb5
            goto Ld5
        L67:
            java.lang.String r8 = "webviewGoForward failed"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r8.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "webviewGoForward failed instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lb5
            r8.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lb5
            goto Ld5
        L81:
            java.lang.String r8 = "view not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r8.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "webviewGoForward failed view not exist instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lb5
            r8.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lb5
            goto Ld5
        L9b:
            java.lang.String r8 = "instanceId not exist"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> Lb5
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb5
            r8.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r1 = "webviewGoForward failed instanceId not exist instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> Lb5
            r8.append(r2)     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb5
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> Lb5
            goto Ld5
        Lb5:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "webviewGoForward failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        Ld5:
            return
    }

    public final void y(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> L89
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> L89
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L89
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L89
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L89
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L89
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> L89
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L89
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> L89
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> L89
            if (r1 == 0) goto L6f
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> L89
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> L89
            boolean r1 = r8 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> L89
            if (r1 == 0) goto L55
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r8 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r8     // Catch: java.lang.Throwable -> L89
            r8.play()     // Catch: java.lang.Throwable -> L89
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r8 = "playerPlay success"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L89
            goto La9
        L55:
            java.lang.String r8 = "instanceId is not player"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L89
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L89
            r8.<init>()     // Catch: java.lang.Throwable -> L89
            java.lang.String r1 = "playerPlay failed instanceId is not player instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L89
            r8.append(r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L89
            goto La9
        L6f:
            java.lang.String r8 = "instanceId not exit"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L89
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L89
            r8.<init>()     // Catch: java.lang.Throwable -> L89
            java.lang.String r1 = "playerPlay failed instanceId not exit instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L89
            r8.append(r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L89
            goto La9
        L89:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "playerPlay failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        La9:
            return
    }

    public final void z(java.lang.Object r7, org.json.JSONObject r8) {
            r6 = this;
            java.lang.String r0 = "OperateViews"
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r8.optString(r1)     // Catch: java.lang.Throwable -> L89
            java.lang.String r2 = "id"
            java.lang.String r2 = r8.optString(r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r3 = r6.i(r2)     // Catch: java.lang.Throwable -> L89
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L89
            if (r4 == 0) goto L25
            r4 = r7
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.a     // Catch: java.lang.Throwable -> L89
            if (r5 == 0) goto L25
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r4.a     // Catch: java.lang.Throwable -> L89
            java.lang.String r3 = r3.getRid()     // Catch: java.lang.Throwable -> L89
        L25:
            java.lang.String r4 = "data"
            org.json.JSONObject r8 = r8.optJSONObject(r4)     // Catch: java.lang.Throwable -> L89
            if (r8 != 0) goto L33
            java.lang.String r8 = "data is empty"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L89
            return
        L33:
            java.util.LinkedHashMap r8 = r6.b(r1, r3)     // Catch: java.lang.Throwable -> L89
            boolean r1 = r8.containsKey(r2)     // Catch: java.lang.Throwable -> L89
            if (r1 == 0) goto L6f
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> L89
            android.view.View r8 = (android.view.View) r8     // Catch: java.lang.Throwable -> L89
            boolean r1 = r8 instanceof com.mbridge.msdk.video.bt.module.MBridgeBTVideoView     // Catch: java.lang.Throwable -> L89
            if (r1 == 0) goto L55
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r8 = (com.mbridge.msdk.video.bt.module.MBridgeBTVideoView) r8     // Catch: java.lang.Throwable -> L89
            r8.pause()     // Catch: java.lang.Throwable -> L89
            r6.a(r7, r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r8 = "playerPause success"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L89
            goto La9
        L55:
            java.lang.String r8 = "instanceId is not player"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L89
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L89
            r8.<init>()     // Catch: java.lang.Throwable -> L89
            java.lang.String r1 = "playerPause failed instanceId is not player instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L89
            r8.append(r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L89
            goto La9
        L6f:
            java.lang.String r8 = "instanceId not exit"
            r6.c(r7, r8)     // Catch: java.lang.Throwable -> L89
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L89
            r8.<init>()     // Catch: java.lang.Throwable -> L89
            java.lang.String r1 = "playerPause failed instanceId not exit instanceId = "
            r8.append(r1)     // Catch: java.lang.Throwable -> L89
            r8.append(r2)     // Catch: java.lang.Throwable -> L89
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)     // Catch: java.lang.Throwable -> L89
            goto La9
        L89:
            r8 = move-exception
            java.lang.String r1 = r8.getMessage()
            r6.c(r7, r1)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "playerPause failed: "
            r7.append(r1)
            java.lang.String r8 = r8.getMessage()
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        La9:
            return
    }
}
