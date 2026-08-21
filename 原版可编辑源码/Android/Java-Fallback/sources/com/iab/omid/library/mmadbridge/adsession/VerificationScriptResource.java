package com.iab.omid.library.mmadbridge.adsession;

public final class VerificationScriptResource {
    private final java.net.URL resourceUrl;
    private final java.lang.String vendorKey;
    private final java.lang.String verificationParameters;

    private VerificationScriptResource(java.lang.String r1, java.net.URL r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.vendorKey = r1
            r0.resourceUrl = r2
            r0.verificationParameters = r3
            return
    }

    public static com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource createVerificationScriptResourceWithParameters(java.lang.String r1, java.net.URL r2, java.lang.String r3) {
            java.lang.String r0 = "VendorKey is null or empty"
            com.iab.omid.library.mmadbridge.utils.g.a(r1, r0)
            java.lang.String r0 = "ResourceURL is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r2, r0)
            java.lang.String r0 = "VerificationParameters is null or empty"
            com.iab.omid.library.mmadbridge.utils.g.a(r3, r0)
            com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource r0 = new com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource
            r0.<init>(r1, r2, r3)
            return r0
    }

    public static com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource createVerificationScriptResourceWithoutParameters(java.net.URL r2) {
            java.lang.String r0 = "ResourceURL is null"
            com.iab.omid.library.mmadbridge.utils.g.a(r2, r0)
            com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource r0 = new com.iab.omid.library.mmadbridge.adsession.VerificationScriptResource
            r1 = 0
            r0.<init>(r1, r2, r1)
            return r0
    }

    public java.net.URL getResourceUrl() {
            r1 = this;
            java.net.URL r0 = r1.resourceUrl
            return r0
    }

    public java.lang.String getVendorKey() {
            r1 = this;
            java.lang.String r0 = r1.vendorKey
            return r0
    }

    public java.lang.String getVerificationParameters() {
            r1 = this;
            java.lang.String r0 = r1.verificationParameters
            return r0
    }

    public org.json.JSONObject toJsonObject() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.vendorKey
            java.lang.String r2 = "vendorKey"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r2, r1)
            java.net.URL r1 = r3.resourceUrl
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "resourceUrl"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r2, r1)
            java.lang.String r1 = r3.verificationParameters
            java.lang.String r2 = "verificationParameters"
            com.iab.omid.library.mmadbridge.utils.c.a(r0, r2, r1)
            return r0
    }
}
