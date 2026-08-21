package com.iab.omid.library.mmadbridge.adsession;

public final class AdSessionContext {
    private final com.iab.omid.library.mmadbridge.adsession.AdSessionContextType adSessionContextType;
    private final java.lang.String contentUrl;
    private final java.lang.String customReferenceData;
    private final java.util.Map<java.lang.String, com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> injectedResourcesMap;
    private final java.lang.String omidJsScriptContent;
    private final com.iab.omid.library.mmadbridge.adsession.Partner partner;
    private final java.util.List<com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> verificationScriptResources;
    private final android.webkit.WebView webView;

    private AdSessionContext(com.iab.omid.library.mmadbridge.adsession.Partner r3, android.webkit.WebView r4, java.lang.String r5, java.util.List<com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> r6, java.lang.String r7, java.lang.String r8, com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r9) {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.verificationScriptResources = r0
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r2.injectedResourcesMap = r1
            r2.partner = r3
            r2.webView = r4
            r2.omidJsScriptContent = r5
            r2.adSessionContextType = r9
            if (r6 == 0) goto L3c
            r0.addAll(r6)
            java.util.Iterator r3 = r6.iterator()
        L22:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L3c
            java.lang.Object r4 = r3.next()
            com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource r4 = (com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource) r4
            java.util.UUID r5 = java.util.UUID.randomUUID()
            java.lang.String r5 = r5.toString()
            java.util.Map<java.lang.String, com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> r6 = r2.injectedResourcesMap
            r6.put(r5, r4)
            goto L22
        L3c:
            r2.contentUrl = r7
            r2.customReferenceData = r8
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.AdSessionContext createHtmlAdSessionContext(com.iab.omid.library.mmadbridge.adsession.Partner r10, android.webkit.WebView r11, java.lang.String r12, java.lang.String r13) {
            java.lang.String r0 = "Partner is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r10, r0)
            java.lang.String r0 = "WebView is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r11, r0)
            if (r13 == 0) goto L13
            r0 = 256(0x100, float:3.59E-43)
            java.lang.String r1 = "CustomReferenceData is greater than 256 characters"
            com.iab.omid.library.mmadbridge.utils.g.a(r13, r0, r1)
        L13:
            com.iab.omid.library.mmadbridge.adsession.AdSessionContext r0 = new com.iab.omid.library.mmadbridge.adsession.AdSessionContext
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r9 = com.iab.omid.library.mmadbridge.adsession.AdSessionContextType.HTML
            r5 = 0
            r6 = 0
            r2 = r0
            r3 = r10
            r4 = r11
            r7 = r12
            r8 = r13
            r2.<init>(r3, r4, r5, r6, r7, r8, r9)
            return r0
    }

    public static com.iab.omid.library.mmadbridge.adsession.AdSessionContext createJavascriptAdSessionContext(com.iab.omid.library.mmadbridge.adsession.Partner r10, android.webkit.WebView r11, java.lang.String r12, java.lang.String r13) {
            java.lang.String r0 = "Partner is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r10, r0)
            java.lang.String r0 = "WebView is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r11, r0)
            if (r13 == 0) goto L13
            r0 = 256(0x100, float:3.59E-43)
            java.lang.String r1 = "CustomReferenceData is greater than 256 characters"
            com.iab.omid.library.mmadbridge.utils.g.a(r13, r0, r1)
        L13:
            com.iab.omid.library.mmadbridge.adsession.AdSessionContext r0 = new com.iab.omid.library.mmadbridge.adsession.AdSessionContext
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r9 = com.iab.omid.library.mmadbridge.adsession.AdSessionContextType.JAVASCRIPT
            r5 = 0
            r6 = 0
            r2 = r0
            r3 = r10
            r4 = r11
            r7 = r12
            r8 = r13
            r2.<init>(r3, r4, r5, r6, r7, r8, r9)
            return r0
    }

    public static com.iab.omid.library.mmadbridge.adsession.AdSessionContext createNativeAdSessionContext(com.iab.omid.library.mmadbridge.adsession.Partner r10, java.lang.String r11, java.util.List<com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> r12, java.lang.String r13, java.lang.String r14) {
            java.lang.String r0 = "Partner is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r10, r0)
            java.lang.String r0 = "OM SDK JS script content is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r11, r0)
            java.lang.String r0 = "VerificationScriptResources is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r12, r0)
            if (r14 == 0) goto L18
            r0 = 256(0x100, float:3.59E-43)
            java.lang.String r1 = "CustomReferenceData is greater than 256 characters"
            com.iab.omid.library.mmadbridge.utils.g.a(r14, r0, r1)
        L18:
            com.iab.omid.library.mmadbridge.adsession.AdSessionContext r0 = new com.iab.omid.library.mmadbridge.adsession.AdSessionContext
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r9 = com.iab.omid.library.mmadbridge.adsession.AdSessionContextType.NATIVE
            r4 = 0
            r2 = r0
            r3 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            r8 = r14
            r2.<init>(r3, r4, r5, r6, r7, r8, r9)
            return r0
    }

    public com.iab.omid.library.mmadbridge.adsession.AdSessionContextType getAdSessionContextType() {
            r1 = this;
            com.iab.omid.library.mmadbridge.adsession.AdSessionContextType r0 = r1.adSessionContextType
            return r0
    }

    public java.lang.String getContentUrl() {
            r1 = this;
            java.lang.String r0 = r1.contentUrl
            return r0
    }

    public java.lang.String getCustomReferenceData() {
            r1 = this;
            java.lang.String r0 = r1.customReferenceData
            return r0
    }

    public java.util.Map<java.lang.String, com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> getInjectedResourcesMap() {
            r1 = this;
            java.util.Map<java.lang.String, com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> r0 = r1.injectedResourcesMap
            java.util.Map r0 = java.util.Collections.unmodifiableMap(r0)
            return r0
    }

    public java.lang.String getOmidJsScriptContent() {
            r1 = this;
            java.lang.String r0 = r1.omidJsScriptContent
            return r0
    }

    public com.iab.omid.library.mmadbridge.adsession.Partner getPartner() {
            r1 = this;
            com.iab.omid.library.mmadbridge.adsession.Partner r0 = r1.partner
            return r0
    }

    public java.util.List<com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> getVerificationScriptResources() {
            r1 = this;
            java.util.List<com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource> r0 = r1.verificationScriptResources
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            return r0
    }

    public android.webkit.WebView getWebView() {
            r1 = this;
            android.webkit.WebView r0 = r1.webView
            return r0
    }
}
