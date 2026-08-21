package com.tkay.core.api;

public abstract class TYBidRequestInfo {
    public static final java.lang.String BIDDING_REQUEST_TIMEOUT_TYPE = "Request Timeout.";
    public static final java.lang.String BIDTOKEN_EMPTY_ERROR_TYPE = "Network BidToken or Custom bid info is Empty.";
    public static final java.lang.String BIDTOKEN_OBTAIN_TIMEOUT_TYPE = "Request Token or Custom bid info Timeout.";
    public static final java.lang.String INIT_ERROR_TYPE = "Network init error.";
    public static final java.lang.String NO_ADAPTER_ERROR_TYPE = "There is no Network Adapter.";
    public static final java.lang.String NO_SUPPORT_BIDDING_TYPE = "This network don't support header bidding in current TY's version.";
    public static final java.lang.String RETURN_PARAMS_ERROR_TYPE = "The parameter is abnormal.";

    public TYBidRequestInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void fillBaseCommonParams(org.json.JSONObject r1, java.lang.String r2, com.tkay.core.c.d r3, com.tkay.core.common.f.aj r4) {
            if (r1 == 0) goto L37
            java.lang.String r0 = "ad_format"
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = "ad_source_id"
            java.lang.String r0 = r4.t()     // Catch: java.lang.Throwable -> L33
            r1.put(r2, r0)     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = "nw_firm_id"
            int r0 = r4.c()     // Catch: java.lang.Throwable -> L33
            r1.put(r2, r0)     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = "bidfloor"
            double r3 = r4.a(r3)     // Catch: java.lang.Throwable -> L33
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L33
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L33
            boolean r2 = r2.t()     // Catch: java.lang.Throwable -> L33
            if (r2 == 0) goto L32
            java.lang.String r2 = "test"
            r3 = 1
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L33
        L32:
            return
        L33:
            r1 = move-exception
            r1.printStackTrace()
        L37:
            return
    }

    public java.lang.String getExtInfoForBuyerId(java.lang.String r2) {
            r1 = this;
            com.tkay.core.common.v r0 = com.tkay.core.common.v.a()
            java.lang.String r2 = r0.f(r2)
            return r2
    }

    public abstract org.json.JSONObject toRequestJSONObject();
}
