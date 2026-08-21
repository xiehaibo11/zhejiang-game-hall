package com.mbridge.msdk.mbbanner.common.util;

public class BannerUtils {
    private static final java.lang.String TAG = null;

    static {
            java.lang.Class<com.mbridge.msdk.mbbanner.common.util.BannerUtils> r0 = com.mbridge.msdk.mbbanner.common.util.BannerUtils.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbbanner.common.util.BannerUtils.TAG = r0
            return
    }

    public BannerUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static synchronized java.util.List<com.mbridge.msdk.foundation.same.d.a> fillIdInList(java.util.List<com.mbridge.msdk.foundation.same.d.a> r6, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7) {
            java.lang.Class<com.mbridge.msdk.mbbanner.common.util.BannerUtils> r0 = com.mbridge.msdk.mbbanner.common.util.BannerUtils.class
            monitor-enter(r0)
            if (r7 == 0) goto L44
            int r1 = r7.size()     // Catch: java.lang.Throwable -> L41
            if (r1 <= 0) goto L44
            if (r6 != 0) goto L12
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L41
            r6.<init>()     // Catch: java.lang.Throwable -> L41
        L12:
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L41
        L16:
            boolean r1 = r7.hasNext()     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L44
            java.lang.Object r1 = r7.next()     // Catch: java.lang.Throwable -> L41
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L16
            com.mbridge.msdk.foundation.same.d.a r2 = new com.mbridge.msdk.foundation.same.d.a     // Catch: java.lang.Throwable -> L41
            java.lang.String r3 = r1.getId()     // Catch: java.lang.Throwable -> L41
            long r4 = r1.getCreativeId()     // Catch: java.lang.Throwable -> L41
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L41
            int r1 = r6.size()     // Catch: java.lang.Throwable -> L41
            r3 = 20
            if (r1 < r3) goto L3d
            r1 = 0
            r6.remove(r1)     // Catch: java.lang.Throwable -> L41
        L3d:
            r6.add(r2)     // Catch: java.lang.Throwable -> L41
            goto L16
        L41:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
        L44:
            monitor-exit(r0)
            return r6
    }

    public static java.lang.String getCloseIds(java.lang.String r8) {
            java.lang.String r0 = ""
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.d.a>> r1 = com.mbridge.msdk.foundation.same.a.d.b     // Catch: java.lang.Exception -> L56
            if (r1 == 0) goto L5a
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.d.a>> r1 = com.mbridge.msdk.foundation.same.a.d.b     // Catch: java.lang.Exception -> L56
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.b(r8)     // Catch: java.lang.Exception -> L56
            if (r2 == 0) goto L5a
            boolean r2 = r1.containsKey(r8)     // Catch: java.lang.Exception -> L56
            if (r2 == 0) goto L5a
            java.lang.Object r8 = r1.get(r8)     // Catch: java.lang.Exception -> L56
            java.util.List r8 = (java.util.List) r8     // Catch: java.lang.Exception -> L56
            if (r8 == 0) goto L5a
            int r1 = r8.size()     // Catch: java.lang.Exception -> L56
            if (r1 <= 0) goto L5a
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L56
            r1.<init>()     // Catch: java.lang.Exception -> L56
            r2 = 0
        L28:
            int r3 = r8.size()     // Catch: java.lang.Exception -> L56
            if (r2 >= r3) goto L51
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L56
            r3.<init>()     // Catch: java.lang.Exception -> L56
            java.lang.Object r4 = r8.get(r2)     // Catch: java.lang.Exception -> L56
            com.mbridge.msdk.foundation.same.d.a r4 = (com.mbridge.msdk.foundation.same.d.a) r4     // Catch: java.lang.Exception -> L56
            java.lang.String r5 = "cid"
            java.lang.String r6 = r4.a()     // Catch: java.lang.Exception -> L56
            r3.put(r5, r6)     // Catch: java.lang.Exception -> L56
            java.lang.String r5 = "crid"
            long r6 = r4.c()     // Catch: java.lang.Exception -> L56
            r3.put(r5, r6)     // Catch: java.lang.Exception -> L56
            r1.put(r3)     // Catch: java.lang.Exception -> L56
            int r2 = r2 + 1
            goto L28
        L51:
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L56
            goto L5a
        L56:
            r8 = move-exception
            r8.printStackTrace()
        L5a:
            return r0
    }

    public static java.lang.String getInstallIds() {
            java.lang.String r0 = ""
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L3a
            r1.<init>()     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3a
            java.util.List r2 = r2.i()     // Catch: java.lang.Exception -> L3a
            if (r2 == 0) goto L2f
            int r3 = r2.size()     // Catch: java.lang.Exception -> L3a
            if (r3 <= 0) goto L2f
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L3a
        L1b:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L3a
            if (r3 == 0) goto L2f
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L3a
            java.lang.Long r3 = (java.lang.Long) r3     // Catch: java.lang.Exception -> L3a
            long r3 = r3.longValue()     // Catch: java.lang.Exception -> L3a
            r1.put(r3)     // Catch: java.lang.Exception -> L3a
            goto L1b
        L2f:
            int r2 = r1.length()     // Catch: java.lang.Exception -> L3a
            if (r2 <= 0) goto L3e
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.ae.a(r1)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r1 = move-exception
            r1.printStackTrace()
        L3e:
            return r0
    }

    public static java.lang.String getTtcIds(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = ""
            if (r1 == 0) goto L1b
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)     // Catch: java.lang.Exception -> L17
            if (r1 == 0) goto L1b
            com.mbridge.msdk.foundation.db.c r1 = com.mbridge.msdk.foundation.db.c.a(r1)     // Catch: java.lang.Exception -> L17
            r1.a()     // Catch: java.lang.Exception -> L17
            java.lang.String r1 = r1.a(r2)     // Catch: java.lang.Exception -> L17
            r0 = r1
            goto L1b
        L17:
            r1 = move-exception
            r1.printStackTrace()
        L1b:
            return r0
    }

    public static void inserCloseId(java.lang.String r2, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3) {
            java.util.Map<java.lang.String, java.util.List<com.mbridge.msdk.foundation.same.d.a>> r0 = com.mbridge.msdk.foundation.same.a.d.b
            if (r0 == 0) goto L34
            if (r3 == 0) goto L34
            int r1 = r3.size()
            if (r1 <= 0) goto L34
            boolean r1 = com.mbridge.msdk.foundation.tools.ai.b(r2)
            if (r1 == 0) goto L32
            boolean r1 = r0.containsKey(r2)
            if (r1 == 0) goto L26
            java.lang.Object r1 = r0.get(r2)
            java.util.List r1 = (java.util.List) r1
            java.util.List r3 = fillIdInList(r1, r3)
            r0.put(r2, r3)
            goto L32
        L26:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.List r3 = fillIdInList(r1, r3)
            r0.put(r2, r3)
        L32:
            com.mbridge.msdk.foundation.same.a.d.b = r0
        L34:
            return
    }

    public static com.mbridge.msdk.foundation.entity.CampaignEx managerCampaignEX(java.lang.String r7, com.mbridge.msdk.foundation.entity.CampaignEx r8) {
            java.lang.String r0 = "deep_link"
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 == 0) goto L9
            return r8
        L9:
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 == 0) goto L15
            if (r8 == 0) goto L12
            goto L15
        L12:
            r8 = 0
            goto L147
        L15:
            java.lang.String r1 = "notice"
            boolean r1 = r7.contains(r1)
            java.lang.String r2 = "unitId"
            if (r1 != 0) goto L104
            org.json.JSONObject r0 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r8)     // Catch: java.lang.Throwable -> L147
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r0)     // Catch: java.lang.Throwable -> L147
            if (r1 != 0) goto L2a
            r1 = r8
        L2a:
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L147
            if (r3 != 0) goto L102
            java.lang.String r0 = r0.optString(r2)     // Catch: java.lang.Throwable -> L147
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L147
            if (r2 != 0) goto L3d
            r1.setCampaignUnitId(r0)     // Catch: java.lang.Throwable -> L147
        L3d:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L147
            r0.<init>(r7)     // Catch: java.lang.Throwable -> L147
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.p     // Catch: java.lang.Throwable -> L147
            org.json.JSONObject r7 = r0.optJSONObject(r7)     // Catch: java.lang.Throwable -> L147
            java.lang.String r0 = "-999"
            if (r7 == 0) goto L8b
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.n
            java.lang.String r2 = r7.getString(r2)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            int r2 = r2.intValue()
            float r2 = (float) r2
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r2)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.o
            java.lang.String r3 = r7.getString(r3)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            int r3 = r3.intValue()
            float r3 = (float) r3
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)
            java.lang.String r2 = java.lang.String.valueOf(r2)
            goto L8c
        L8b:
            r2 = r0
        L8c:
            java.lang.String r3 = r1.getClickURL()
            java.lang.String r0 = com.mbridge.msdk.click.c.a(r3, r0, r2)
            r1.setClickURL(r0)
            java.lang.String r0 = r1.getNoticeUrl()
            if (r7 == 0) goto L102
            java.util.Iterator r2 = r7.keys()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
        La6:
            boolean r4 = r2.hasNext()
            if (r4 == 0) goto Lf0
            java.lang.String r4 = "&"
            r3.append(r4)
            java.lang.Object r4 = r2.next()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r5 = r7.optString(r4)
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.n
            boolean r6 = r6.equals(r4)
            if (r6 != 0) goto Lcb
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.o
            boolean r6 = r6.equals(r4)
            if (r6 == 0) goto Le4
        Lcb:
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r6 = r6.j()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            int r5 = r5.intValue()
            float r5 = (float) r5
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r6, r5)
            java.lang.String r5 = java.lang.String.valueOf(r5)
        Le4:
            r3.append(r4)
            java.lang.String r4 = "="
            r3.append(r4)
            r3.append(r5)
            goto La6
        Lf0:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r0)
            r7.append(r3)
            java.lang.String r7 = r7.toString()
            r1.setNoticeUrl(r7)
        L102:
            r8 = r1
            goto L147
        L104:
            org.json.JSONObject r1 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r8)     // Catch: org.json.JSONException -> L143
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L143
            r3.<init>(r7)     // Catch: org.json.JSONException -> L143
            boolean r7 = r3.has(r0)     // Catch: java.lang.Exception -> L118 org.json.JSONException -> L143
            if (r7 != 0) goto L118
            java.lang.String r7 = ""
            r1.put(r0, r7)     // Catch: java.lang.Exception -> L118 org.json.JSONException -> L143
        L118:
            java.util.Iterator r7 = r3.keys()     // Catch: org.json.JSONException -> L143
        L11c:
            boolean r0 = r7.hasNext()     // Catch: org.json.JSONException -> L143
            if (r0 == 0) goto L130
            java.lang.Object r0 = r7.next()     // Catch: org.json.JSONException -> L143
            java.lang.String r0 = (java.lang.String) r0     // Catch: org.json.JSONException -> L143
            java.lang.String r4 = r3.getString(r0)     // Catch: org.json.JSONException -> L143
            r1.put(r0, r4)     // Catch: org.json.JSONException -> L143
            goto L11c
        L130:
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r1)     // Catch: org.json.JSONException -> L143
            java.lang.String r0 = r1.optString(r2)     // Catch: org.json.JSONException -> L143
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: org.json.JSONException -> L143
            if (r1 != 0) goto L141
            r7.setCampaignUnitId(r0)     // Catch: org.json.JSONException -> L143
        L141:
            r8 = r7
            goto L147
        L143:
            r7 = move-exception
            r7.printStackTrace()
        L147:
            return r8
    }

    public static void updateInstallList(android.content.Context r8, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r9) {
            java.lang.String r0 = com.mbridge.msdk.mbbanner.common.util.BannerUtils.TAG
            java.lang.String r1 = "updateInstallList 开始 更新本机已安装广告列表"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            if (r8 == 0) goto L9c
            if (r9 == 0) goto L9c
            int r0 = r9.size()
            if (r0 != 0) goto L13
            goto L9c
        L13:
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r8)
            com.mbridge.msdk.foundation.db.l r0 = com.mbridge.msdk.foundation.db.l.a(r0)
            r1 = 0
            r2 = r1
            r3 = r2
        L1e:
            int r4 = r9.size()
            if (r2 >= r4) goto L8b
            java.lang.Object r4 = r9.get(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = (com.mbridge.msdk.foundation.entity.CampaignEx) r4
            if (r4 == 0) goto L88
            java.lang.String r5 = r4.getPackageName()
            boolean r5 = com.mbridge.msdk.foundation.tools.ae.c(r8, r5)
            if (r5 == 0) goto L52
            java.util.Set r5 = com.mbridge.msdk.foundation.controller.a.e()
            if (r5 == 0) goto L88
            com.mbridge.msdk.foundation.entity.i r3 = new com.mbridge.msdk.foundation.entity.i
            java.lang.String r5 = r4.getId()
            java.lang.String r4 = r4.getPackageName()
            r3.<init>(r5, r4)
            java.util.Set r4 = com.mbridge.msdk.foundation.controller.a.e()
            r4.add(r3)
            r3 = 1
            goto L88
        L52:
            if (r0 == 0) goto L88
            java.lang.String r5 = r4.getId()
            boolean r5 = r0.a(r5)
            if (r5 != 0) goto L88
            com.mbridge.msdk.foundation.entity.h r5 = new com.mbridge.msdk.foundation.entity.h
            r5.<init>()
            java.lang.String r6 = r4.getId()
            r5.a(r6)
            int r6 = r4.getFca()
            r5.a(r6)
            int r4 = r4.getFcb()
            r5.b(r4)
            r5.d(r1)
            r5.c(r1)
            long r6 = java.lang.System.currentTimeMillis()
            r5.a(r6)
            r0.a(r5)
        L88:
            int r2 = r2 + 1
            goto L1e
        L8b:
            if (r3 == 0) goto L9b
            java.lang.String r8 = com.mbridge.msdk.mbbanner.common.util.BannerUtils.TAG
            java.lang.String r9 = "更新安装列表"
            com.mbridge.msdk.foundation.tools.z.b(r8, r9)
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()
            r8.h()
        L9b:
            return
        L9c:
            java.lang.String r8 = com.mbridge.msdk.mbbanner.common.util.BannerUtils.TAG
            java.lang.String r9 = "updateInstallList 列表为空 不做更新本机已安装广告列表"
            com.mbridge.msdk.foundation.tools.z.b(r8, r9)
            return
    }
}
