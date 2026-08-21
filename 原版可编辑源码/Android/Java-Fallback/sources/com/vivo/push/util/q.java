package com.vivo.push.util;

public final class q {
    public static com.vivo.push.model.InsideNotificationItem a(java.lang.String r4) {
            java.lang.String r0 = "MessageConvertUtil"
            com.vivo.push.model.InsideNotificationItem r1 = new com.vivo.push.model.InsideNotificationItem
            r1.<init>()
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: org.json.JSONException -> L10b
            if (r2 == 0) goto L14
            java.lang.String r4 = "notify msg pack to obj is null"
            com.vivo.push.util.p.a(r0, r4)     // Catch: org.json.JSONException -> L10b
            r4 = 0
            return r4
        L14:
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: org.json.JSONException -> L10b
            r2.<init>(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 0
            int r4 = r2.getInt(r4)     // Catch: org.json.JSONException -> L10b
            r1.setTargetType(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 1
            java.lang.String r4 = r2.getString(r4)     // Catch: org.json.JSONException -> L10b
            r1.setTragetContext(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 2
            java.lang.String r4 = r2.getString(r4)     // Catch: org.json.JSONException -> L10b
            r1.setTitle(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 3
            java.lang.String r4 = r2.getString(r4)     // Catch: org.json.JSONException -> L10b
            r1.setContent(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 4
            int r4 = r2.getInt(r4)     // Catch: org.json.JSONException -> L10b
            r1.setNotifyType(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 5
            java.lang.String r4 = r2.getString(r4)     // Catch: org.json.JSONException -> L10b
            r1.setPurePicUrl(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 6
            java.lang.String r4 = r2.getString(r4)     // Catch: org.json.JSONException -> L10b
            r1.setIconUrl(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 7
            java.lang.String r4 = r2.getString(r4)     // Catch: org.json.JSONException -> L10b
            r1.setCoverUrl(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 8
            java.lang.String r4 = r2.getString(r4)     // Catch: org.json.JSONException -> L10b
            r1.setSkipContent(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 9
            int r4 = r2.getInt(r4)     // Catch: org.json.JSONException -> L10b
            r1.setSkipType(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 10
            boolean r4 = r2.getBoolean(r4)     // Catch: org.json.JSONException -> L10b
            r1.setShowTime(r4)     // Catch: org.json.JSONException -> L10b
            int r4 = r2.length()     // Catch: org.json.JSONException -> L10b
            r3 = 11
            if (r4 <= r3) goto L8c
            java.lang.String r4 = r2.getString(r3)     // Catch: org.json.JSONException -> L10b
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L10b
            r3.<init>(r4)     // Catch: org.json.JSONException -> L10b
            java.util.Map r4 = com.vivo.push.util.m.a(r3)     // Catch: org.json.JSONException -> L10b
            r1.setParams(r4)     // Catch: org.json.JSONException -> L10b
        L8c:
            int r4 = r2.length()     // Catch: org.json.JSONException -> L10b
            r3 = 15
            if (r4 <= r3) goto Lb6
            r4 = 12
            int r4 = r2.getInt(r4)     // Catch: org.json.JSONException -> L10b
            r1.setAppType(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 13
            java.lang.String r4 = r2.getString(r4)     // Catch: org.json.JSONException -> L10b
            r1.setReactPackage(r4)     // Catch: org.json.JSONException -> L10b
            r4 = 14
            boolean r4 = r2.getBoolean(r4)     // Catch: org.json.JSONException -> L10b
            r1.setIsShowBigPicOnMobileNet(r4)     // Catch: org.json.JSONException -> L10b
            java.lang.String r4 = r2.getString(r3)     // Catch: org.json.JSONException -> L10b
            r1.setSuitReactVersion(r4)     // Catch: org.json.JSONException -> L10b
        Lb6:
            int r4 = r2.length()     // Catch: org.json.JSONException -> L10b
            r3 = 16
            if (r4 <= r3) goto Lc5
            int r4 = r2.getInt(r3)     // Catch: org.json.JSONException -> L10b
            r1.setMessageType(r4)     // Catch: org.json.JSONException -> L10b
        Lc5:
            int r4 = r2.length()     // Catch: org.json.JSONException -> L10b
            r3 = 18
            if (r4 <= r3) goto Ldd
            r4 = 17
            int r4 = r2.getInt(r4)     // Catch: org.json.JSONException -> L10b
            r1.setIsMacroReplace(r4)     // Catch: org.json.JSONException -> L10b
            java.lang.String r4 = r2.getString(r3)     // Catch: org.json.JSONException -> L10b
            r1.setAdClickCheckUrl(r4)     // Catch: org.json.JSONException -> L10b
        Ldd:
            int r4 = r2.length()     // Catch: org.json.JSONException -> L10b
            r3 = 19
            if (r4 <= r3) goto Lec
            int r4 = r2.getInt(r3)     // Catch: org.json.JSONException -> L10b
            r1.setCompatibleType(r4)     // Catch: org.json.JSONException -> L10b
        Lec:
            int r4 = r2.length()     // Catch: org.json.JSONException -> L10b
            r3 = 20
            if (r4 <= r3) goto Lfb
            int r4 = r2.getInt(r3)     // Catch: org.json.JSONException -> L10b
            r1.setInnerPriority(r4)     // Catch: org.json.JSONException -> L10b
        Lfb:
            int r4 = r2.length()     // Catch: org.json.JSONException -> L10b
            r3 = 21
            if (r4 <= r3) goto L111
            int r4 = r2.getInt(r3)     // Catch: org.json.JSONException -> L10b
            r1.setDisplayStyle(r4)     // Catch: org.json.JSONException -> L10b
            goto L111
        L10b:
            r4 = move-exception
            java.lang.String r2 = "notify msg pack to obj error"
            com.vivo.push.util.p.a(r0, r2, r4)
        L111:
            return r1
    }

    public static com.vivo.push.model.UPSNotificationMessage a(com.vivo.push.model.InsideNotificationItem r3) {
            com.vivo.push.model.UPSNotificationMessage r0 = new com.vivo.push.model.UPSNotificationMessage
            r0.<init>()
            int r1 = r3.getTargetType()
            r0.setTargetType(r1)
            java.lang.String r1 = r3.getTragetContent()
            r0.setTragetContext(r1)
            java.lang.String r1 = r3.getTitle()
            r0.setTitle(r1)
            java.lang.String r1 = r3.getContent()
            r0.setContent(r1)
            int r1 = r3.getNotifyType()
            r0.setNotifyType(r1)
            java.lang.String r1 = r3.getPurePicUrl()
            r0.setPurePicUrl(r1)
            java.lang.String r1 = r3.getIconUrl()
            r0.setIconUrl(r1)
            java.lang.String r1 = r3.getCoverUrl()
            r0.setCoverUrl(r1)
            java.lang.String r1 = r3.getSkipContent()
            r0.setSkipContent(r1)
            int r1 = r3.getSkipType()
            r0.setSkipType(r1)
            boolean r1 = r3.isShowTime()
            r0.setShowTime(r1)
            long r1 = r3.getMsgId()
            r0.setMsgId(r1)
            java.util.Map r3 = r3.getParams()
            r0.setParams(r3)
            return r0
    }

    public static java.lang.String b(com.vivo.push.model.InsideNotificationItem r3) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            int r1 = r3.getTargetType()
            r0.put(r1)
            java.lang.String r1 = r3.getTragetContent()
            r0.put(r1)
            java.lang.String r1 = r3.getTitle()
            r0.put(r1)
            java.lang.String r1 = r3.getContent()
            r0.put(r1)
            int r1 = r3.getNotifyType()
            r0.put(r1)
            java.lang.String r1 = r3.getPurePicUrl()
            r0.put(r1)
            java.lang.String r1 = r3.getIconUrl()
            r0.put(r1)
            java.lang.String r1 = r3.getCoverUrl()
            r0.put(r1)
            java.lang.String r1 = r3.getSkipContent()
            r0.put(r1)
            int r1 = r3.getSkipType()
            r0.put(r1)
            boolean r1 = r3.isShowTime()
            r0.put(r1)
            java.util.Map r1 = r3.getParams()
            if (r1 == 0) goto L62
            org.json.JSONObject r1 = new org.json.JSONObject
            java.util.Map r2 = r3.getParams()
            r1.<init>(r2)
            goto L64
        L62:
            java.lang.String r1 = "{}"
        L64:
            r0.put(r1)
            int r1 = r3.getAppType()
            r0.put(r1)
            java.lang.String r1 = r3.getReactPackage()
            r0.put(r1)
            boolean r1 = r3.isShowBigPicOnMobileNet()
            r0.put(r1)
            java.lang.String r1 = r3.getSuitReactVersion()
            r0.put(r1)
            int r1 = r3.getMessageType()
            r0.put(r1)
            int r1 = r3.getIsMacroReplace()
            r0.put(r1)
            java.lang.String r1 = r3.getAdClickCheckUrl()
            r0.put(r1)
            int r1 = r3.getCompatibleType()
            r0.put(r1)
            int r1 = r3.getInnerPriority()
            r0.put(r1)
            int r3 = r3.getDisplayStyle()
            r0.put(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }
}
