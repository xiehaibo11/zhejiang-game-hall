package com.kwad.sdk.crash.report;

public class ReportEvent implements com.kwad.sdk.core.b, java.io.Serializable {
    private static final long serialVersionUID = 8652448382850235426L;
    public long clientIncrementId;
    public long clientTimeStamp;
    public java.lang.String sessionId;
    public com.kwad.sdk.crash.report.ReportEvent.StatPackage statPackage;
    public java.lang.String timeZone;

    public static class CustomStatEvent implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = 5177557263564436342L;
        public java.lang.String key;
        public java.lang.String value;

        public CustomStatEvent() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void parseJson(org.json.JSONObject r2) {
                r1 = this;
                if (r2 != 0) goto L3
                return
            L3:
                java.lang.String r0 = "key"
                java.lang.String r0 = r2.optString(r0)
                r1.key = r0
                java.lang.String r0 = "value"
                java.lang.String r2 = r2.optString(r0)
                r1.value = r2
                return
        }

        @Override
        public org.json.JSONObject toJson() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                java.lang.String r1 = r3.key
                java.lang.String r2 = "key"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.lang.String r1 = r3.value
                java.lang.String r2 = "value"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public static class ExceptionEvent implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = 5177557263564436344L;
        public java.lang.String flag;
        public java.lang.String message;
        public int type;
        public com.kwad.sdk.crash.report.ReportEvent.UrlPackage urlPackage;

        public ExceptionEvent() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void parseJson(org.json.JSONObject r3) {
                r2 = this;
                if (r3 != 0) goto L3
                return
            L3:
                java.lang.String r0 = "type"
                int r0 = r3.optInt(r0)
                r2.type = r0
                java.lang.String r0 = "message"
                java.lang.String r0 = r3.optString(r0)
                r2.message = r0
                com.kwad.sdk.crash.report.ReportEvent$UrlPackage r0 = r2.urlPackage
                java.lang.String r1 = "urlPackage"
                org.json.JSONObject r1 = r3.optJSONObject(r1)
                r0.parseJson(r1)
                java.lang.String r0 = "flag"
                java.lang.String r3 = r3.optString(r0)
                r2.flag = r3
                return
        }

        @Override
        public org.json.JSONObject toJson() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                int r1 = r3.type
                java.lang.String r2 = "type"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.lang.String r1 = r3.message
                java.lang.String r2 = "message"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                com.kwad.sdk.crash.report.ReportEvent$UrlPackage r1 = r3.urlPackage
                java.lang.String r2 = "urlPackage"
                com.kwad.sdk.utils.t.a(r0, r2, r1)
                java.lang.String r1 = r3.flag
                java.lang.String r2 = "flag"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public static class StatPackage implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = -6225392281821567840L;
        public com.kwad.sdk.crash.report.ReportEvent.CustomStatEvent customStatEvent;
        public com.kwad.sdk.crash.report.ReportEvent.ExceptionEvent exceptionEvent;

        public StatPackage() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void parseJson(org.json.JSONObject r3) {
                r2 = this;
                if (r3 != 0) goto L3
                return
            L3:
                com.kwad.sdk.crash.report.ReportEvent$ExceptionEvent r0 = r2.exceptionEvent
                java.lang.String r1 = "exceptionEvent"
                org.json.JSONObject r1 = r3.optJSONObject(r1)
                r0.parseJson(r1)
                com.kwad.sdk.crash.report.ReportEvent$CustomStatEvent r0 = r2.customStatEvent
                java.lang.String r1 = "customStatEvent"
                org.json.JSONObject r3 = r3.optJSONObject(r1)
                r0.parseJson(r3)
                return
        }

        @Override
        public org.json.JSONObject toJson() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                com.kwad.sdk.crash.report.ReportEvent$ExceptionEvent r1 = r3.exceptionEvent
                java.lang.String r2 = "exceptionEvent"
                com.kwad.sdk.utils.t.a(r0, r2, r1)
                com.kwad.sdk.crash.report.ReportEvent$CustomStatEvent r1 = r3.customStatEvent
                java.lang.String r2 = "customStatEvent"
                com.kwad.sdk.utils.t.a(r0, r2, r1)
                return r0
        }
    }

    public static class UrlPackage implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = 2535768638193007414L;
        public java.lang.String identity;
        public java.lang.String page;
        public int pageType;
        public java.lang.String params;

        public UrlPackage() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void parseJson(org.json.JSONObject r2) {
                r1 = this;
                if (r2 != 0) goto L3
                return
            L3:
                java.lang.String r0 = "page"
                java.lang.String r0 = r2.optString(r0)
                r1.page = r0
                java.lang.String r0 = "params"
                java.lang.String r0 = r2.optString(r0)
                r1.params = r0
                java.lang.String r0 = "identity"
                java.lang.String r0 = r2.optString(r0)
                r1.identity = r0
                java.lang.String r0 = "pageType"
                int r2 = r2.optInt(r0)
                r1.pageType = r2
                return
        }

        @Override
        public org.json.JSONObject toJson() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                java.lang.String r1 = r3.page
                java.lang.String r2 = "page"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.lang.String r1 = r3.params
                java.lang.String r2 = "params"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.lang.String r1 = r3.identity
                java.lang.String r2 = "identity"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                int r1 = r3.pageType
                java.lang.String r2 = "pageType"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public ReportEvent() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void parseJson(org.json.JSONObject r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "clientTimeStamp"
            long r0 = r3.optLong(r0)
            r2.clientTimeStamp = r0
            java.lang.String r0 = "clientIncrementId"
            long r0 = r3.optLong(r0)
            r2.clientIncrementId = r0
            java.lang.String r0 = "sessionId"
            java.lang.String r0 = r3.optString(r0)
            r2.sessionId = r0
            com.kwad.sdk.crash.report.ReportEvent$StatPackage r0 = r2.statPackage
            java.lang.String r1 = "statPackage"
            org.json.JSONObject r1 = r3.optJSONObject(r1)
            r0.parseJson(r1)
            java.lang.String r0 = "timeZone"
            java.lang.String r3 = r3.optString(r0)
            r2.timeZone = r3
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            long r1 = r4.clientTimeStamp
            java.lang.String r3 = "clientTimeStamp"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            long r1 = r4.clientIncrementId
            java.lang.String r3 = "clientIncrementId"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            java.lang.String r1 = r4.sessionId
            java.lang.String r2 = "sessionId"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            com.kwad.sdk.crash.report.ReportEvent$StatPackage r1 = r4.statPackage
            java.lang.String r2 = "statPackage"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
            java.lang.String r1 = r4.timeZone
            java.lang.String r2 = "timeZone"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}
