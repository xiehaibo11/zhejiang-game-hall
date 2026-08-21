package com.kwad.sdk.core.response.model;

public class HttpDnsInfo extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
    private static final long serialVersionUID = -6943205584670122267L;
    public java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo> backUpList;
    public java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo> otherList;
    public java.util.List<com.kwad.sdk.core.response.model.HttpDnsInfo.IpInfo> recommendList;

    public static class IpInfo extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = -6943205584670122266L;
        public java.lang.String ip;
        public int weight;

        public IpInfo() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = ""
                r1.ip = r0
                return
        }

        @Override
        public java.lang.String toString() {
                r1 = this;
                org.json.JSONObject r0 = r1.toJson()     // Catch: java.lang.Exception -> L9
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L9
                return r0
            L9:
                java.lang.String r0 = ""
                return r0
        }
    }

    public HttpDnsInfo() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.recommendList = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.backUpList = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.otherList = r0
            return
    }

    @Override
    public java.lang.String toString() {
            r1 = this;
            org.json.JSONObject r0 = r1.toJson()     // Catch: java.lang.Exception -> L9
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }
}
