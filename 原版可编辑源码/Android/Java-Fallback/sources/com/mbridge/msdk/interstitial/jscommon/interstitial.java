package com.mbridge.msdk.interstitial.jscommon;

public class interstitial extends com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload {
    private static final java.lang.String a = null;
    private java.lang.Object b;



    static {
            java.lang.Class<com.mbridge.msdk.interstitial.jscommon.interstitial> r0 = com.mbridge.msdk.interstitial.jscommon.interstitial.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.interstitial.jscommon.interstitial.a = r0
            return
    }

    public interstitial() {
            r0 = this;
            r0.<init>()
            return
    }

    private int a(android.content.Context r1) {
            r0 = this;
            if (r1 == 0) goto L8
            boolean r1 = r1 instanceof com.mbridge.msdk.interstitial.view.MBInterstitialActivity
            if (r1 == 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = -1
        L9:
            return r1
    }

    static android.content.Context a(com.mbridge.msdk.interstitial.jscommon.interstitial r0) {
            android.content.Context r0 = r0.mContext
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.interstitial.jscommon.interstitial.a
            return r0
    }

    private java.lang.String a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r5) {
            r4 = this;
            java.lang.String r0 = ""
            if (r5 == 0) goto L47
            int r1 = r5.size()     // Catch: java.lang.Exception -> L43
            if (r1 <= 0) goto L47
            org.json.JSONArray r5 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCamplistToJson(r5)     // Catch: java.lang.Exception -> L43
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L43
            r1.<init>()     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = "campaignList"
            r1.put(r2, r5)     // Catch: java.lang.Exception -> L43
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L43
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L43
            r2.<init>()     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = "===========campListJson:"
            r2.append(r3)     // Catch: java.lang.Exception -> L43
            r2.append(r5)     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L43
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L43
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L43
            if (r1 != 0) goto L47
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L43
            r1 = 2
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r1)     // Catch: java.lang.Exception -> L43
            r0 = r5
            goto L47
        L43:
            r5 = move-exception
            r5.printStackTrace()
        L47:
            return r0
    }

    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r4) {
            r3 = this;
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L18
            if (r1 != 0) goto L1c
            com.mbridge.msdk.interstitial.b.a r1 = com.mbridge.msdk.interstitial.b.a.a()     // Catch: java.lang.Exception -> L18
            if (r1 == 0) goto L1c
            com.mbridge.msdk.interstitial.b.a r1 = com.mbridge.msdk.interstitial.b.a.a()     // Catch: java.lang.Exception -> L18
            r2 = 1
            java.util.List r4 = r1.a(r4, r2)     // Catch: java.lang.Exception -> L18
            r0 = r4
            goto L1c
        L18:
            r4 = move-exception
            r4.printStackTrace()
        L1c:
            return r0
    }

    private void a(java.lang.String r6, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L42
            if (r0 == 0) goto L7
            return
        L7:
            if (r7 == 0) goto L41
            int r0 = r7.size()     // Catch: java.lang.Exception -> L42
            if (r0 != 0) goto L10
            goto L41
        L10:
            r0 = 0
        L11:
            int r1 = r7.size()     // Catch: java.lang.Exception -> L42
            if (r0 >= r1) goto L46
            java.lang.Object r1 = r7.get(r0)     // Catch: java.lang.Exception -> L42
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Exception -> L42
            if (r1 == 0) goto L3e
            java.lang.String r2 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L42
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L42
            r3.<init>()     // Catch: java.lang.Exception -> L42
            java.lang.String r4 = "======更新displayid："
            r3.append(r4)     // Catch: java.lang.Exception -> L42
            java.lang.String r4 = r1.getId()     // Catch: java.lang.Exception -> L42
            r3.append(r4)     // Catch: java.lang.Exception -> L42
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L42
            com.mbridge.msdk.foundation.tools.z.b(r2, r3)     // Catch: java.lang.Exception -> L42
            java.lang.String r2 = "interstitial"
            com.mbridge.msdk.foundation.same.a.d.a(r6, r1, r2)     // Catch: java.lang.Exception -> L42
        L3e:
            int r0 = r0 + 1
            goto L11
        L41:
            return
        L42:
            r6 = move-exception
            r6.printStackTrace()
        L46:
            return
    }

    private void b() {
            r3 = this;
            java.lang.String r0 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L13
            java.lang.String r1 = "通知h5 没有数据"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L13
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L13
            java.lang.Object r1 = r3.b     // Catch: java.lang.Exception -> L13
            java.lang.String r2 = ""
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L13
            goto L17
        L13:
            r0 = move-exception
            r0.printStackTrace()
        L17:
            return
    }

    private java.lang.String c() {
            r3 = this;
            r0 = 0
            android.content.Context r1 = r3.mContext     // Catch: java.lang.Exception -> L27
            if (r1 != 0) goto L6
            return r0
        L6:
            android.content.Context r1 = r3.mContext     // Catch: java.lang.Exception -> L27
            int r1 = r3.a(r1)     // Catch: java.lang.Exception -> L27
            r2 = 1
            if (r1 != r2) goto L2b
            android.content.Context r1 = r3.mContext     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L2b
            android.content.Context r1 = r3.mContext     // Catch: java.lang.Exception -> L22
            boolean r1 = r1 instanceof com.mbridge.msdk.interstitial.view.MBInterstitialActivity     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L2b
            android.content.Context r1 = r3.mContext     // Catch: java.lang.Exception -> L22
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity r1 = (com.mbridge.msdk.interstitial.view.MBInterstitialActivity) r1     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L2b
            java.lang.String r0 = r1.mUnitid     // Catch: java.lang.Exception -> L22
            return r0
        L22:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Exception -> L27
            goto L2b
        L27:
            r1 = move-exception
            r1.printStackTrace()
        L2b:
            return r0
    }

    public java.util.List<java.lang.String> getExcludeIdList(java.lang.String r5) {
            r4 = this;
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L46
            if (r1 == 0) goto L8
            return r0
        L8:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L46
            r1.<init>(r5)     // Catch: java.lang.Exception -> L46
            java.lang.String r5 = com.mbridge.msdk.foundation.same.net.g.d.c     // Catch: java.lang.Exception -> L46
            java.lang.String r5 = r1.optString(r5)     // Catch: java.lang.Exception -> L46
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L46
            if (r1 != 0) goto L4e
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L46
            r1.<init>(r5)     // Catch: java.lang.Exception -> L46
            int r5 = r1.length()     // Catch: java.lang.Exception -> L46
            if (r5 <= 0) goto L4e
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Exception -> L46
            r5.<init>()     // Catch: java.lang.Exception -> L46
            r0 = 0
        L2a:
            int r2 = r1.length()     // Catch: java.lang.Exception -> L44
            if (r0 >= r2) goto L4d
            java.lang.String r2 = r1.optString(r0)     // Catch: java.lang.Exception -> L44
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L44
            if (r2 != 0) goto L41
            java.lang.String r2 = r1.optString(r0)     // Catch: java.lang.Exception -> L44
            r5.add(r2)     // Catch: java.lang.Exception -> L44
        L41:
            int r0 = r0 + 1
            goto L2a
        L44:
            r0 = move-exception
            goto L4a
        L46:
            r5 = move-exception
            r3 = r0
            r0 = r5
            r5 = r3
        L4a:
            r0.printStackTrace()
        L4d:
            r0 = r5
        L4e:
            return r0
    }

    public void getInfo(java.lang.Object r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L179
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L179
            r1.<init>()     // Catch: java.lang.Exception -> L179
            java.lang.String r2 = "======前端调用 getInfo() 获取campaign数据 params:"
            r1.append(r2)     // Catch: java.lang.Exception -> L179
            r1.append(r6)     // Catch: java.lang.Exception -> L179
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Exception -> L179
            com.mbridge.msdk.foundation.tools.z.b(r0, r6)     // Catch: java.lang.Exception -> L179
            r4.b = r5     // Catch: java.lang.Exception -> L179
            android.content.Context r6 = r4.mContext     // Catch: java.lang.Exception -> L179
            if (r6 != 0) goto L27
            java.lang.String r5 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L179
            java.lang.String r6 = "getInfo() context 为空 return"
            com.mbridge.msdk.foundation.tools.z.d(r5, r6)     // Catch: java.lang.Exception -> L179
            r4.b()     // Catch: java.lang.Exception -> L179
            return
        L27:
            android.content.Context r6 = r4.mContext     // Catch: java.lang.Exception -> L179
            int r6 = r4.a(r6)     // Catch: java.lang.Exception -> L179
            java.lang.String r0 = r4.c()     // Catch: java.lang.Exception -> L179
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L179
            if (r1 == 0) goto L42
            java.lang.String r5 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L179
            java.lang.String r6 = "getInfo() unitid is null"
            com.mbridge.msdk.foundation.tools.z.d(r5, r6)     // Catch: java.lang.Exception -> L179
            r4.b()     // Catch: java.lang.Exception -> L179
            return
        L42:
            java.lang.String r1 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L179
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L179
            r2.<init>()     // Catch: java.lang.Exception -> L179
            java.lang.String r3 = "getInfo() mCurrentCallState:"
            r2.append(r3)     // Catch: java.lang.Exception -> L179
            r2.append(r6)     // Catch: java.lang.Exception -> L179
            java.lang.String r3 = " unitid:"
            r2.append(r3)     // Catch: java.lang.Exception -> L179
            r2.append(r0)     // Catch: java.lang.Exception -> L179
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L179
            com.mbridge.msdk.foundation.tools.z.b(r1, r0)     // Catch: java.lang.Exception -> L179
            r0 = 1
            if (r6 != r0) goto L180
            java.lang.String r6 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L171
            java.lang.String r1 = "instersGetInfo hideLoading"
            com.mbridge.msdk.foundation.tools.z.b(r6, r1)     // Catch: java.lang.Exception -> L171
            android.content.Context r6 = r4.mContext     // Catch: java.lang.Exception -> L86
            if (r6 != 0) goto L6f
            goto L8a
        L6f:
            android.content.Context r6 = r4.mContext     // Catch: java.lang.Exception -> L86
            int r6 = r4.a(r6)     // Catch: java.lang.Exception -> L86
            if (r6 != r0) goto L8a
            android.content.Context r6 = r4.mContext     // Catch: java.lang.Exception -> L81
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity r6 = (com.mbridge.msdk.interstitial.view.MBInterstitialActivity) r6     // Catch: java.lang.Exception -> L81
            if (r6 == 0) goto L8a
            r6.hideLoading()     // Catch: java.lang.Exception -> L81
            goto L8a
        L81:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Exception -> L86
            goto L8a
        L86:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Exception -> L171
        L8a:
            android.content.Context r6 = r4.mContext     // Catch: java.lang.Exception -> La1
            if (r6 != 0) goto L8f
            goto La5
        L8f:
            android.content.Context r6 = r4.mContext     // Catch: java.lang.Exception -> La1
            int r6 = r4.a(r6)     // Catch: java.lang.Exception -> La1
            if (r6 != r0) goto La5
            android.content.Context r6 = r4.mContext     // Catch: java.lang.Exception -> La1
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity r6 = (com.mbridge.msdk.interstitial.view.MBInterstitialActivity) r6     // Catch: java.lang.Exception -> La1
            if (r6 == 0) goto La5
            r6.showWebView()     // Catch: java.lang.Exception -> La1
            goto La5
        La1:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Exception -> L171
        La5:
            android.content.Context r6 = r4.mContext     // Catch: java.lang.Exception -> L171
            if (r6 != 0) goto Lb5
            java.lang.String r5 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L171
            java.lang.String r6 = "instersGetInfo context 为空 通知前端没有数据"
            com.mbridge.msdk.foundation.tools.z.b(r5, r6)     // Catch: java.lang.Exception -> L171
            r4.b()     // Catch: java.lang.Exception -> L171
            goto L180
        Lb5:
            android.content.Context r6 = r4.mContext     // Catch: java.lang.Exception -> L171
            int r6 = r4.a(r6)     // Catch: java.lang.Exception -> L171
            if (r6 == r0) goto Lc9
            java.lang.String r5 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L171
            java.lang.String r6 = "instersGetInfo mCurrentCallState!=INTERSTITIAL_CALL"
            com.mbridge.msdk.foundation.tools.z.d(r5, r6)     // Catch: java.lang.Exception -> L171
            r4.b()     // Catch: java.lang.Exception -> L171
            goto L180
        Lc9:
            android.content.Context r6 = r4.mContext     // Catch: java.lang.Exception -> L171
            boolean r6 = r6 instanceof com.mbridge.msdk.interstitial.view.MBInterstitialActivity     // Catch: java.lang.Exception -> L171
            if (r6 == 0) goto Ldc
            android.content.Context r6 = r4.mContext     // Catch: java.lang.Exception -> L171
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity r6 = (com.mbridge.msdk.interstitial.view.MBInterstitialActivity) r6     // Catch: java.lang.Exception -> L171
            r6.mIsMBPage = r0     // Catch: java.lang.Exception -> L171
            java.lang.String r6 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L171
            java.lang.String r0 = "set mIsMBPage true"
            com.mbridge.msdk.foundation.tools.z.b(r6, r0)     // Catch: java.lang.Exception -> L171
        Ldc:
            java.lang.String r6 = r4.c()     // Catch: java.lang.Exception -> L171
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L171
            if (r0 == 0) goto Lf2
            java.lang.String r5 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L171
            java.lang.String r6 = "instersGetInfo unitid is null"
            com.mbridge.msdk.foundation.tools.z.d(r5, r6)     // Catch: java.lang.Exception -> L171
            r4.b()     // Catch: java.lang.Exception -> L171
            goto L180
        Lf2:
            java.util.List r0 = r4.a(r6)     // Catch: java.lang.Exception -> L171
            java.lang.String r1 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L171
            java.lang.String r2 = "instersGetInfo 开始从缓存里取数据"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L171
            if (r0 == 0) goto L16d
            java.lang.String r1 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L171
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L171
            r2.<init>()     // Catch: java.lang.Exception -> L171
            java.lang.String r3 = "instersGetInfo 从缓存里取到的数据 不为空 size："
            r2.append(r3)     // Catch: java.lang.Exception -> L171
            int r3 = r0.size()     // Catch: java.lang.Exception -> L171
            r2.append(r3)     // Catch: java.lang.Exception -> L171
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L171
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Exception -> L171
            java.lang.String r1 = r4.a(r0)     // Catch: java.lang.Exception -> L171
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L171
            if (r2 == 0) goto L12e
            java.lang.String r5 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L171
            java.lang.String r6 = "instersGetInfo campListJson is null return"
            com.mbridge.msdk.foundation.tools.z.d(r5, r6)     // Catch: java.lang.Exception -> L171
            r4.b()     // Catch: java.lang.Exception -> L171
            goto L180
        L12e:
            com.mbridge.msdk.mbjscommon.windvane.h r2 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L171
            r2.a(r5, r1)     // Catch: java.lang.Exception -> L171
            r4.a(r6, r0)     // Catch: java.lang.Exception -> L171
            boolean r5 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L156
            if (r5 == 0) goto L13f
            goto L15a
        L13f:
            if (r0 == 0) goto L15a
            int r5 = r0.size()     // Catch: java.lang.Exception -> L156
            if (r5 != 0) goto L148
            goto L15a
        L148:
            java.lang.Thread r5 = new java.lang.Thread     // Catch: java.lang.Exception -> L156
            com.mbridge.msdk.interstitial.jscommon.interstitial$2 r1 = new com.mbridge.msdk.interstitial.jscommon.interstitial$2     // Catch: java.lang.Exception -> L156
            r1.<init>(r4, r0, r6)     // Catch: java.lang.Exception -> L156
            r5.<init>(r1)     // Catch: java.lang.Exception -> L156
            r5.start()     // Catch: java.lang.Exception -> L156
            goto L15a
        L156:
            r5 = move-exception
            r5.printStackTrace()     // Catch: java.lang.Exception -> L171
        L15a:
            java.lang.Thread r5 = new java.lang.Thread     // Catch: java.lang.Exception -> L168
            com.mbridge.msdk.interstitial.jscommon.interstitial$1 r1 = new com.mbridge.msdk.interstitial.jscommon.interstitial$1     // Catch: java.lang.Exception -> L168
            r1.<init>(r4, r0, r6)     // Catch: java.lang.Exception -> L168
            r5.<init>(r1)     // Catch: java.lang.Exception -> L168
            r5.start()     // Catch: java.lang.Exception -> L168
            goto L180
        L168:
            r5 = move-exception
            r5.printStackTrace()     // Catch: java.lang.Exception -> L171
            goto L180
        L16d:
            r4.b()     // Catch: java.lang.Exception -> L171
            goto L180
        L171:
            r5 = move-exception
            r5.printStackTrace()     // Catch: java.lang.Exception -> L179
            r4.b()     // Catch: java.lang.Exception -> L179
            goto L180
        L179:
            r5 = move-exception
            r5.printStackTrace()
            r4.b()
        L180:
            return
    }

    public void install(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r3 = r2.addDownloaderListener(r3, r4)     // Catch: java.lang.Exception -> L3e
            java.lang.String r4 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L3e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3e
            r0.<init>()     // Catch: java.lang.Exception -> L3e
            java.lang.String r1 = "======前端调用 install()  params:"
            r0.append(r1)     // Catch: java.lang.Exception -> L3e
            r0.append(r3)     // Catch: java.lang.Exception -> L3e
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> L3e
            com.mbridge.msdk.foundation.tools.z.b(r4, r3)     // Catch: java.lang.Exception -> L3e
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Exception -> L3e
            if (r3 != 0) goto L26
            java.lang.String r3 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L3e
            java.lang.String r4 = "install() context 为空 return"
            com.mbridge.msdk.foundation.tools.z.d(r3, r4)     // Catch: java.lang.Exception -> L3e
            return
        L26:
            java.lang.String r3 = com.mbridge.msdk.interstitial.jscommon.interstitial.a     // Catch: java.lang.Exception -> L3e
            java.lang.String r4 = "install() 开始tracking跳转"
            com.mbridge.msdk.foundation.tools.z.b(r3, r4)     // Catch: java.lang.Exception -> L3e
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Exception -> L3e
            boolean r3 = r3 instanceof com.mbridge.msdk.interstitial.view.MBInterstitialActivity     // Catch: java.lang.Exception -> L3e
            if (r3 == 0) goto L42
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Exception -> L3e
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity r3 = (com.mbridge.msdk.interstitial.view.MBInterstitialActivity) r3     // Catch: java.lang.Exception -> L3e
            r4 = 0
            java.lang.String r0 = ""
            r3.clickTracking(r4, r0)     // Catch: java.lang.Exception -> L3e
            goto L42
        L3e:
            r3 = move-exception
            r3.printStackTrace()
        L42:
            return
    }

    public void openURL(java.lang.Object r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r3 = com.mbridge.msdk.interstitial.jscommon.interstitial.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "openURL:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.d(r3, r0)
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            if (r3 != 0) goto L54
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L4a
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L4a
            java.lang.String r4 = "url"
            java.lang.String r4 = r3.optString(r4)     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L4a
            java.lang.String r0 = "type"
            int r3 = r3.optInt(r0)     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L4a
            r0 = 1
            if (r3 != r0) goto L36
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L4a
            com.mbridge.msdk.click.c.a(r3, r4)     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L4a
            goto L54
        L36:
            r0 = 2
            if (r3 != r0) goto L54
            android.content.Context r3 = r2.mContext     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L4a
            com.mbridge.msdk.click.c.b(r3, r4)     // Catch: java.lang.Throwable -> L3f org.json.JSONException -> L4a
            goto L54
        L3f:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.interstitial.jscommon.interstitial.a
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
            goto L54
        L4a:
            r3 = move-exception
            java.lang.String r4 = com.mbridge.msdk.interstitial.jscommon.interstitial.a
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L54:
            return
    }

    @Override
    public void sendNoticeAndCallBackClick(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            r0.install(r1, r2)
            return
    }
}
