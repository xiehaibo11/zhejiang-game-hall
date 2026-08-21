package com.mbridge.msdk.a;

public final class b {





    public static com.iab.omid.library.mmadbridge.adsession.AdSession a(android.content.Context r7, android.webkit.WebView r8, java.lang.String r9, com.mbridge.msdk.foundation.entity.CampaignEx r10) {
            java.lang.String r9 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 == 0) goto Le
            java.lang.String r9 = a()
            com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT = r9
        Le:
            java.lang.String r9 = com.mbridge.msdk.MBridgeConstans.OMID_JS_H5_CONTENT
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 == 0) goto L1c
            java.lang.String r9 = b()
            com.mbridge.msdk.MBridgeConstans.OMID_JS_H5_CONTENT = r9
        L1c:
            java.lang.String r9 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            r0 = 0
            if (r9 != 0) goto L60
            java.lang.String r9 = r10.getOmid()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 == 0) goto L30
            goto L60
        L30:
            com.iab.omid.library.mmadbridge.adsession.CreativeType r9 = com.iab.omid.library.mmadbridge.adsession.CreativeType.DEFINED_BY_JAVASCRIPT
            c(r7)
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r7 = com.iab.omid.library.mmadbridge.adsession.ImpressionType.BEGIN_TO_RENDER
            com.iab.omid.library.mmadbridge.adsession.Owner r10 = com.iab.omid.library.mmadbridge.adsession.Owner.JAVASCRIPT
            com.iab.omid.library.mmadbridge.adsession.CreativeType r1 = com.iab.omid.library.mmadbridge.adsession.CreativeType.HTML_DISPLAY
            if (r9 == r1) goto L45
            com.iab.omid.library.mmadbridge.adsession.CreativeType r1 = com.iab.omid.library.mmadbridge.adsession.CreativeType.DEFINED_BY_JAVASCRIPT
            if (r9 != r1) goto L42
            goto L45
        L42:
            com.iab.omid.library.mmadbridge.adsession.Owner r1 = com.iab.omid.library.mmadbridge.adsession.Owner.NATIVE
            goto L47
        L45:
            com.iab.omid.library.mmadbridge.adsession.Owner r1 = com.iab.omid.library.mmadbridge.adsession.Owner.NONE
        L47:
            r2 = 0
            com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration r7 = com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration.createAdSessionConfiguration(r9, r7, r10, r1, r2)
            java.lang.String r9 = "Mintegral"
            java.lang.String r10 = "MAL_16.3.67"
            com.iab.omid.library.mmadbridge.adsession.Partner r9 = com.iab.omid.library.mmadbridge.adsession.Partner.createPartner(r9, r10)
            com.iab.omid.library.mmadbridge.adsession.AdSessionContext r9 = com.iab.omid.library.mmadbridge.adsession.AdSessionContext.createHtmlAdSessionContext(r9, r8, r0, r0)
            com.iab.omid.library.mmadbridge.adsession.AdSession r7 = com.iab.omid.library.mmadbridge.adsession.AdSession.createAdSession(r7, r9)
            r7.registerAdView(r8)
            return r7
        L60:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "createNativeAdSession: TextUtils.isEmpty(omid) = "
            r8.append(r9)
            java.lang.String r9 = r10.getOmid()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            r8.append(r9)
            java.lang.String r9 = " TextUtils.isEmpty(MIntegralConstans.OMID_JS_SERVICE_CONTENT) = "
            r8.append(r9)
            java.lang.String r9 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            java.lang.String r9 = "OMSDK"
            com.mbridge.msdk.foundation.tools.z.a(r9, r8)
            com.mbridge.msdk.foundation.same.report.d r1 = new com.mbridge.msdk.foundation.same.report.d
            r1.<init>(r7)
            java.lang.String r2 = r10.getRequestId()
            java.lang.String r3 = r10.getRequestIdNotice()
            java.lang.String r4 = r10.getId()
            java.lang.String r5 = r10.getCampaignUnitId()
            java.lang.String r6 = "failed, OMID_JS_SERVICE_CONTENT null or omid null"
            r1.a(r2, r3, r4, r5, r6)
            return r0
    }

    public static com.iab.omid.library.mmadbridge.adsession.AdSession a(android.content.Context r18, boolean r19, java.lang.String r20, java.lang.String r21, java.lang.String r22, java.lang.String r23, java.lang.String r24, java.lang.String r25) {
            r7 = r18
            java.lang.String r8 = "failed, exception "
            java.lang.String r0 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L12
            java.lang.String r0 = a()
            com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT = r0
        L12:
            java.lang.String r0 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r9 = 0
            java.lang.String r10 = "OMSDK"
            if (r0 != 0) goto Lc6
            boolean r0 = android.text.TextUtils.isEmpty(r20)
            if (r0 == 0) goto L25
            goto Lc6
        L25:
            c(r18)     // Catch: java.lang.Exception -> L6a java.lang.IllegalArgumentException -> L98
            java.lang.String r0 = "Mintegral"
            java.lang.String r1 = "MAL_16.3.67"
            com.iab.omid.library.mmadbridge.adsession.Partner r0 = com.iab.omid.library.mmadbridge.adsession.Partner.createPartner(r0, r1)     // Catch: java.lang.Exception -> L6a java.lang.IllegalArgumentException -> L98
            com.iab.omid.library.mmadbridge.adsession.CreativeType r1 = com.iab.omid.library.mmadbridge.adsession.CreativeType.NATIVE_DISPLAY     // Catch: java.lang.Exception -> L6a java.lang.IllegalArgumentException -> L98
            com.iab.omid.library.mmadbridge.adsession.ImpressionType r2 = com.iab.omid.library.mmadbridge.adsession.ImpressionType.LOADED     // Catch: java.lang.Exception -> L6a java.lang.IllegalArgumentException -> L98
            com.iab.omid.library.mmadbridge.adsession.Owner r3 = com.iab.omid.library.mmadbridge.adsession.Owner.NATIVE     // Catch: java.lang.Exception -> L6a java.lang.IllegalArgumentException -> L98
            if (r19 == 0) goto L3b
            com.iab.omid.library.mmadbridge.adsession.Owner r4 = com.iab.omid.library.mmadbridge.adsession.Owner.NONE     // Catch: java.lang.Exception -> L6a java.lang.IllegalArgumentException -> L98
            goto L3d
        L3b:
            com.iab.omid.library.mmadbridge.adsession.Owner r4 = com.iab.omid.library.mmadbridge.adsession.Owner.NATIVE     // Catch: java.lang.Exception -> L6a java.lang.IllegalArgumentException -> L98
        L3d:
            r5 = 0
            com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration r11 = com.iab.omid.library.mmadbridge.adsession.AdSessionConfiguration.createAdSessionConfiguration(r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L6a java.lang.IllegalArgumentException -> L98
            r1 = r20
            r2 = r18
            r3 = r21
            r4 = r22
            r5 = r23
            r6 = r25
            java.util.List r1 = a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L6a java.lang.IllegalArgumentException -> L98
            java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT     // Catch: java.lang.Exception -> L6a java.lang.IllegalArgumentException -> L98
            r3 = r21
            r4 = r24
            com.iab.omid.library.mmadbridge.adsession.AdSessionContext r0 = com.iab.omid.library.mmadbridge.adsession.AdSessionContext.createNativeAdSessionContext(r0, r2, r1, r4, r3)     // Catch: java.lang.Exception -> L66 java.lang.IllegalArgumentException -> L68
            com.iab.omid.library.mmadbridge.adsession.AdSession r9 = com.iab.omid.library.mmadbridge.adsession.AdSession.createAdSession(r11, r0)     // Catch: java.lang.Exception -> L66 java.lang.IllegalArgumentException -> L68
            java.lang.String r0 = "adSession create success"
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)     // Catch: java.lang.Exception -> L66 java.lang.IllegalArgumentException -> L68
            goto Lc5
        L66:
            r0 = move-exception
            goto L6d
        L68:
            r0 = move-exception
            goto L9b
        L6a:
            r0 = move-exception
            r3 = r21
        L6d:
            java.lang.String r1 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r10, r1)
            com.mbridge.msdk.foundation.same.report.d r12 = new com.mbridge.msdk.foundation.same.report.d
            r12.<init>(r7)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r8)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r17 = r1.toString()
            r13 = r21
            r14 = r25
            r15 = r22
            r16 = r23
            r12.a(r13, r14, r15, r16, r17)
            goto Lc5
        L98:
            r0 = move-exception
            r3 = r21
        L9b:
            java.lang.String r1 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r10, r1)
            com.mbridge.msdk.foundation.same.report.d r12 = new com.mbridge.msdk.foundation.same.report.d
            r12.<init>(r7)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r8)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r17 = r1.toString()
            r13 = r21
            r14 = r25
            r15 = r22
            r16 = r23
            r12.a(r13, r14, r15, r16, r17)
        Lc5:
            return r9
        Lc6:
            r3 = r21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "createNativeAdSession: TextUtils.isEmpty(omid) = "
            r0.append(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r20)
            r0.append(r1)
            java.lang.String r1 = " TextUtils.isEmpty(MIntegralConstans.OMID_JS_SERVICE_CONTENT) = "
            r0.append(r1)
            java.lang.String r1 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)
            com.mbridge.msdk.foundation.same.report.d r12 = new com.mbridge.msdk.foundation.same.report.d
            r12.<init>(r7)
            java.lang.String r17 = "failed, OMID_JS_SERVICE_CONTENT null or omid null"
            r13 = r21
            r14 = r25
            r15 = r22
            r16 = r23
            r12.a(r13, r14, r15, r16, r17)
            return r9
    }

    private static java.lang.String a() {
            com.mbridge.msdk.foundation.same.b.c r0 = com.mbridge.msdk.foundation.same.b.c.j     // Catch: java.lang.Exception -> L12
            java.lang.String r0 = com.mbridge.msdk.foundation.same.b.e.b(r0)     // Catch: java.lang.Exception -> L12
            java.lang.String r1 = "/omsdk/om_js_content.txt"
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L12
            r2.<init>(r0, r1)     // Catch: java.lang.Exception -> L12
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.x.a(r2)     // Catch: java.lang.Exception -> L12
            goto L1e
        L12:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "OMSDK"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
            java.lang.String r0 = ""
        L1e:
            return r0
    }

    public static java.lang.String a(java.lang.String r2) {
            java.lang.String r0 = com.mbridge.msdk.MBridgeConstans.OMID_JS_H5_CONTENT
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Le
            java.lang.String r0 = b()
            com.mbridge.msdk.MBridgeConstans.OMID_JS_H5_CONTENT = r0
        Le:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L15
            return r2
        L15:
            java.lang.String r0 = com.mbridge.msdk.MBridgeConstans.OMID_JS_H5_CONTENT
            java.lang.String r1 = "/*OMSDK_INSERT_HERE*/"
            java.lang.String r2 = r2.replace(r1, r0)
            java.lang.String r0 = "[INSERT RESOURCE URL]"
            java.lang.String r1 = "https://s3-us-west-2.amazonaws.com/omsdk-files/compliance-js/omid-validation-verification-script-v1.js"
            java.lang.String r2 = r2.replace(r0, r1)
            return r2
    }

    private static java.util.List<com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> a(java.lang.String r10, android.content.Context r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15) {
            java.lang.String r0 = ""
            java.lang.String r1 = "failed, exception "
            java.lang.String r2 = "OMSDK"
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            org.json.JSONArray r4 = new org.json.JSONArray     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            r4.<init>(r10)     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            if (r10 == 0) goto Lcb
            r10 = 0
        L13:
            int r5 = r4.length()     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            if (r10 >= r5) goto Lcb
            org.json.JSONObject r5 = r4.optJSONObject(r10)     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            java.lang.String r6 = "vkey"
            java.lang.String r6 = r5.optString(r6, r0)     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            java.net.URL r7 = new java.net.URL     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            java.lang.String r8 = "et_url"
            java.lang.String r8 = r5.optString(r8, r0)     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            r7.<init>(r8)     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            java.lang.String r8 = "verification_p"
            java.lang.String r5 = r5.optString(r8, r0)     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            boolean r8 = android.text.TextUtils.isEmpty(r5)     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            if (r8 == 0) goto L4a
            boolean r5 = android.text.TextUtils.isEmpty(r6)     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            if (r5 == 0) goto L45
            com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource r5 = com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource.createVerificationScriptResourceWithoutParameters(r7)     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            goto L4e
        L45:
            com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource r5 = com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource.createVerificationScriptResourceWithoutParameters(r7)     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            goto L4e
        L4a:
            com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource r5 = com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource.createVerificationScriptResourceWithParameters(r6, r7, r5)     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
        L4e:
            r3.add(r5)     // Catch: org.json.JSONException -> L54 java.net.MalformedURLException -> L7c java.lang.IllegalArgumentException -> La4
            int r10 = r10 + 1
            goto L13
        L54:
            r10 = move-exception
            java.lang.String r0 = r10.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
            com.mbridge.msdk.foundation.same.report.d r4 = new com.mbridge.msdk.foundation.same.report.d
            r4.<init>(r11)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r1)
            java.lang.String r10 = r10.getMessage()
            r11.append(r10)
            java.lang.String r9 = r11.toString()
            r5 = r12
            r6 = r15
            r7 = r13
            r8 = r14
            r4.a(r5, r6, r7, r8, r9)
            goto Lcb
        L7c:
            r10 = move-exception
            java.lang.String r0 = r10.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
            com.mbridge.msdk.foundation.same.report.d r4 = new com.mbridge.msdk.foundation.same.report.d
            r4.<init>(r11)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r1)
            java.lang.String r10 = r10.getMessage()
            r11.append(r10)
            java.lang.String r9 = r11.toString()
            r5 = r12
            r6 = r15
            r7 = r13
            r8 = r14
            r4.a(r5, r6, r7, r8, r9)
            goto Lcb
        La4:
            r10 = move-exception
            java.lang.String r0 = r10.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
            com.mbridge.msdk.foundation.same.report.d r4 = new com.mbridge.msdk.foundation.same.report.d
            r4.<init>(r11)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r1)
            java.lang.String r10 = r10.getMessage()
            r11.append(r10)
            java.lang.String r9 = r11.toString()
            r5 = r12
            r6 = r15
            r7 = r13
            r8 = r14
            r4.a(r5, r6, r7, r8, r9)
        Lcb:
            return r3
    }

    public static void a(android.content.Context r7) {
            java.lang.String r0 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_URL
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1f
            java.lang.String r0 = ""
            com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_CONTENT = r0
            com.mbridge.msdk.foundation.same.report.d r1 = new com.mbridge.msdk.foundation.same.report.d
            r1.<init>(r7)
            java.lang.String r2 = ""
            java.lang.String r3 = ""
            java.lang.String r4 = ""
            java.lang.String r5 = ""
            java.lang.String r6 = "fetch OM failed, OMID_JS_SERVICE_URL null"
            r1.a(r2, r3, r4, r5, r6)
            return
        L1f:
            if (r7 != 0) goto L22
            return
        L22:
            com.mbridge.msdk.a.a r0 = new com.mbridge.msdk.a.a     // Catch: java.lang.Exception -> L38
            android.content.Context r1 = r7.getApplicationContext()     // Catch: java.lang.Exception -> L38
            r0.<init>(r1)     // Catch: java.lang.Exception -> L38
            r1 = 0
            java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_URL     // Catch: java.lang.Exception -> L38
            r3 = 0
            com.mbridge.msdk.a.b$1 r4 = new com.mbridge.msdk.a.b$1     // Catch: java.lang.Exception -> L38
            r4.<init>(r7)     // Catch: java.lang.Exception -> L38
            r0.get(r1, r2, r3, r4)     // Catch: java.lang.Exception -> L38
            goto L42
        L38:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            java.lang.String r0 = "OMSDK"
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)
        L42:
            return
    }

    private static java.lang.String b() {
            java.lang.String r0 = ""
            com.mbridge.msdk.foundation.same.b.c r1 = com.mbridge.msdk.foundation.same.b.c.j     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = com.mbridge.msdk.foundation.same.b.e.b(r1)     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = "/omsdk/om_js_h5_content.txt"
            java.io.File r3 = new java.io.File     // Catch: java.lang.Exception -> L1a
            r3.<init>(r1, r2)     // Catch: java.lang.Exception -> L1a
            boolean r1 = r3.exists()     // Catch: java.lang.Exception -> L1a
            if (r1 == 0) goto L24
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.x.a(r3)     // Catch: java.lang.Exception -> L1a
            goto L24
        L1a:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "OMSDK"
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)
        L24:
            return r0
    }

    public static void b(android.content.Context r7) {
            java.lang.String r0 = com.mbridge.msdk.MBridgeConstans.OMID_JS_H5_URL
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1f
            java.lang.String r0 = ""
            com.mbridge.msdk.MBridgeConstans.OMID_JS_H5_CONTENT = r0
            com.mbridge.msdk.foundation.same.report.d r1 = new com.mbridge.msdk.foundation.same.report.d
            r1.<init>(r7)
            java.lang.String r2 = ""
            java.lang.String r3 = ""
            java.lang.String r4 = ""
            java.lang.String r5 = ""
            java.lang.String r6 = "fetch OM failed, OMID_JS_H5_URL null"
            r1.a(r2, r3, r4, r5, r6)
            return
        L1f:
            if (r7 != 0) goto L22
            return
        L22:
            com.mbridge.msdk.a.a r0 = new com.mbridge.msdk.a.a     // Catch: java.lang.Exception -> L38
            android.content.Context r1 = r7.getApplicationContext()     // Catch: java.lang.Exception -> L38
            r0.<init>(r1)     // Catch: java.lang.Exception -> L38
            r1 = 0
            java.lang.String r2 = com.mbridge.msdk.MBridgeConstans.OMID_JS_H5_URL     // Catch: java.lang.Exception -> L38
            r3 = 0
            com.mbridge.msdk.a.b$2 r4 = new com.mbridge.msdk.a.b$2     // Catch: java.lang.Exception -> L38
            r4.<init>(r7)     // Catch: java.lang.Exception -> L38
            r0.get(r1, r2, r3, r4)     // Catch: java.lang.Exception -> L38
            goto L42
        L38:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            java.lang.String r0 = "OMSDK"
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)
        L42:
            return
    }

    private static void c(android.content.Context r1) {
            boolean r0 = com.iab.omid.library.mmadbridge.Omid.isActive()
            if (r0 != 0) goto L9
            com.iab.omid.library.mmadbridge.Omid.activate(r1)
        L9:
            return
    }
}
