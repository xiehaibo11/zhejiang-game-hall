package com.kwad.sdk.collector;

public class AppStatusRules extends com.kwad.sdk.core.network.BaseResultData implements com.kwad.sdk.core.b {
    public static final long DEFAULT_GRANULARITY = 60000;
    public static final long DEFAULT_START_TIME = 86400000;
    public static java.lang.String SUFFIX_ALL_CHILDREN = "/*";
    public static java.lang.String SUFFIX_ALL_FILE = "*";
    private static final long serialVersionUID = 3026909056348431027L;
    private com.kwad.sdk.collector.AppStatusRules.AppStatusInfo data;

    static class 1 {
    }

    static class AppStatusInfo implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = -2403646317801179050L;
        private java.util.ArrayList<com.kwad.sdk.collector.AppStatusRules.Strategy> namedStrategy;
        private com.kwad.sdk.collector.AppStatusRules.Strategy strategy;
        private java.util.ArrayList<com.kwad.sdk.collector.model.d> target;
        private com.kwad.sdk.collector.AppStatusRules.UploadConfig uploadConfig;
        private java.util.ArrayList<com.kwad.sdk.collector.model.d> uploadTarget;

        private AppStatusInfo() {
                r1 = this;
                r1.<init>()
                com.kwad.sdk.collector.AppStatusRules$Strategy r0 = new com.kwad.sdk.collector.AppStatusRules$Strategy
                r0.<init>()
                r1.strategy = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.target = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.namedStrategy = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.uploadTarget = r0
                com.kwad.sdk.collector.AppStatusRules$UploadConfig r0 = new com.kwad.sdk.collector.AppStatusRules$UploadConfig
                r0.<init>()
                r1.uploadConfig = r0
                return
        }

        AppStatusInfo(com.kwad.sdk.collector.AppStatusRules.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        static com.kwad.sdk.collector.AppStatusRules.Strategy access$100(com.kwad.sdk.collector.AppStatusRules.AppStatusInfo r0) {
                com.kwad.sdk.collector.AppStatusRules$Strategy r0 = r0.strategy
                return r0
        }

        static java.util.ArrayList access$200(com.kwad.sdk.collector.AppStatusRules.AppStatusInfo r0) {
                java.util.ArrayList<com.kwad.sdk.collector.AppStatusRules$Strategy> r0 = r0.namedStrategy
                return r0
        }

        static java.util.ArrayList access$300(com.kwad.sdk.collector.AppStatusRules.AppStatusInfo r0) {
                java.util.ArrayList<com.kwad.sdk.collector.model.d> r0 = r0.target
                return r0
        }

        static java.util.ArrayList access$400(com.kwad.sdk.collector.AppStatusRules.AppStatusInfo r0) {
                java.util.ArrayList<com.kwad.sdk.collector.model.d> r0 = r0.uploadTarget
                return r0
        }

        static com.kwad.sdk.collector.AppStatusRules.UploadConfig access$500(com.kwad.sdk.collector.AppStatusRules.AppStatusInfo r0) {
                com.kwad.sdk.collector.AppStatusRules$UploadConfig r0 = r0.uploadConfig
                return r0
        }

        private void duplicateTarget() {
                r4 = this;
                com.kwad.sdk.collector.AppStatusRules$Strategy r0 = r4.strategy
                java.util.Set r0 = r0.getTargetPackages()
                java.util.HashSet r1 = new java.util.HashSet
                r1.<init>()
                java.util.ArrayList<com.kwad.sdk.collector.AppStatusRules$Strategy> r2 = r4.namedStrategy
                java.util.Iterator r2 = r2.iterator()
            L11:
                boolean r3 = r2.hasNext()
                if (r3 == 0) goto L25
                java.lang.Object r3 = r2.next()
                com.kwad.sdk.collector.AppStatusRules$Strategy r3 = (com.kwad.sdk.collector.AppStatusRules.Strategy) r3
                java.util.Set r3 = r3.getTargetPackages()
                r1.addAll(r3)
                goto L11
            L25:
                r0.retainAll(r1)
                com.kwad.sdk.collector.AppStatusRules$Strategy r1 = r4.strategy
                r1.removeTargetsByPackage(r0)
                return
        }

        public com.kwad.sdk.collector.AppStatusRules.Strategy getStrategy() {
                r1 = this;
                com.kwad.sdk.collector.AppStatusRules$Strategy r0 = r1.strategy
                return r0
        }

        @Override
        public void parseJson(org.json.JSONObject r5) {
                r4 = this;
                java.lang.String r0 = "uploadConfig"
                java.lang.String r1 = "uploadTarget"
                java.lang.String r2 = "namedStrategy"
                if (r5 != 0) goto L9
                return
            L9:
                boolean r3 = r5.has(r2)     // Catch: java.lang.Exception -> L58
                if (r3 == 0) goto L19
                org.json.JSONArray r2 = r5.getJSONArray(r2)     // Catch: java.lang.Exception -> L58
                java.util.ArrayList r2 = com.kwad.sdk.collector.AppStatusRules.Strategy.createFromJSONArray(r2)     // Catch: java.lang.Exception -> L58
                r4.namedStrategy = r2     // Catch: java.lang.Exception -> L58
            L19:
                boolean r2 = r5.has(r1)     // Catch: java.lang.Exception -> L58
                if (r2 == 0) goto L29
                org.json.JSONArray r1 = r5.optJSONArray(r1)     // Catch: java.lang.Exception -> L58
                java.util.ArrayList r1 = com.kwad.sdk.collector.model.c.d(r1)     // Catch: java.lang.Exception -> L58
                r4.uploadTarget = r1     // Catch: java.lang.Exception -> L58
            L29:
                boolean r1 = r5.has(r0)     // Catch: java.lang.Exception -> L58
                if (r1 == 0) goto L38
                org.json.JSONObject r0 = r5.optJSONObject(r0)     // Catch: java.lang.Exception -> L58
                com.kwad.sdk.collector.AppStatusRules$UploadConfig r1 = r4.uploadConfig     // Catch: java.lang.Exception -> L58
                r1.parseJson(r0)     // Catch: java.lang.Exception -> L58
            L38:
                java.lang.String r0 = "strategy"
                org.json.JSONObject r0 = r5.optJSONObject(r0)     // Catch: java.lang.Exception -> L58
                java.lang.String r1 = "target"
                org.json.JSONArray r5 = r5.optJSONArray(r1)     // Catch: java.lang.Exception -> L58
                com.kwad.sdk.collector.AppStatusRules$Strategy r1 = r4.strategy     // Catch: java.lang.Exception -> L58
                r1.parseJson(r0)     // Catch: java.lang.Exception -> L58
                java.util.ArrayList r5 = com.kwad.sdk.collector.model.c.d(r5)     // Catch: java.lang.Exception -> L58
                r4.target = r5     // Catch: java.lang.Exception -> L58
                com.kwad.sdk.collector.AppStatusRules$Strategy r0 = r4.strategy     // Catch: java.lang.Exception -> L58
                r0.setTarget(r5)     // Catch: java.lang.Exception -> L58
                r4.duplicateTarget()     // Catch: java.lang.Exception -> L58
                return
            L58:
                r5 = move-exception
                com.kwad.sdk.core.e.c.printStackTrace(r5)
                return
        }

        @Override
        public org.json.JSONObject toJson() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                com.kwad.sdk.collector.AppStatusRules$Strategy r1 = r3.strategy
                java.lang.String r2 = "strategy"
                com.kwad.sdk.utils.t.a(r0, r2, r1)
                java.util.ArrayList<com.kwad.sdk.collector.model.d> r1 = r3.target
                java.lang.String r2 = "target"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.util.ArrayList<com.kwad.sdk.collector.AppStatusRules$Strategy> r1 = r3.namedStrategy
                java.lang.String r2 = "namedStrategy"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.util.ArrayList<com.kwad.sdk.collector.model.d> r1 = r3.uploadTarget
                java.lang.String r2 = "uploadTarget"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                com.kwad.sdk.collector.AppStatusRules$UploadConfig r1 = r3.uploadConfig
                java.lang.String r2 = "uploadConfig"
                com.kwad.sdk.utils.t.a(r0, r2, r1)
                return r0
        }
    }

    public static class Strategy implements com.kwad.sdk.core.b, java.io.Serializable {
        public static com.kwad.sdk.collector.AppStatusRules.Strategy LOCAL_DEFAULT = null;
        private static final long serialVersionUID = -1387498537762043285L;
        private long historyGranularity;
        private long minLaunchInterval;
        private java.lang.String name;
        private boolean needLaunch;
        private long needSaveLaunchTime;
        private long scanInterval;
        private long startTime;
        private java.util.HashMap<java.lang.String, com.kwad.sdk.collector.model.d> targetMap;

        static {
                com.kwad.sdk.collector.AppStatusRules$Strategy r0 = new com.kwad.sdk.collector.AppStatusRules$Strategy
                r0.<init>()
                com.kwad.sdk.collector.AppStatusRules.Strategy.LOCAL_DEFAULT = r0
                r1 = 86400000(0x5265c00, double:4.2687272E-316)
                r0.setStartTime(r1)
                com.kwad.sdk.collector.AppStatusRules$Strategy r0 = com.kwad.sdk.collector.AppStatusRules.Strategy.LOCAL_DEFAULT
                r1 = 60000(0xea60, double:2.9644E-319)
                r0.setHistoryGranularity(r1)
                return
        }

        public Strategy() {
                r2 = this;
                r2.<init>()
                r0 = 86400000(0x5265c00, double:4.2687272E-316)
                r2.startTime = r0
                r0 = 60000(0xea60, double:2.9644E-319)
                r2.historyGranularity = r0
                r0 = 0
                r2.name = r0
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r2.targetMap = r0
                r0 = 1
                r2.needLaunch = r0
                r0 = -1
                r2.needSaveLaunchTime = r0
                return
        }

        public static java.util.ArrayList<com.kwad.sdk.collector.AppStatusRules.Strategy> createFromJSONArray(org.json.JSONArray r5) {
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                if (r5 == 0) goto L2a
                int r1 = r5.length()
                if (r1 != 0) goto Le
                goto L2a
            Le:
                int r1 = r5.length()
                r2 = 0
            L13:
                if (r2 >= r1) goto L2a
                r3 = 0
                org.json.JSONObject r3 = r5.getJSONObject(r2)     // Catch: org.json.JSONException -> L1a
            L1a:
                if (r3 == 0) goto L27
                com.kwad.sdk.collector.AppStatusRules$Strategy r4 = new com.kwad.sdk.collector.AppStatusRules$Strategy
                r4.<init>()
                r4.parseJson(r3)
                r0.add(r4)
            L27:
                int r2 = r2 + 1
                goto L13
            L2a:
                return r0
        }

        public long getHistoryGranularity() {
                r2 = this;
                long r0 = r2.historyGranularity
                return r0
        }

        public long getMinLaunchIntervalWithMS() {
                r4 = this;
                long r0 = r4.minLaunchInterval
                r2 = 1000(0x3e8, double:4.94E-321)
                long r0 = r0 * r2
                return r0
        }

        public java.lang.String getName() {
                r1 = this;
                java.lang.String r0 = r1.name
                return r0
        }

        public long getNeedSaveLaunchTime() {
                r2 = this;
                long r0 = r2.needSaveLaunchTime
                return r0
        }

        public long getScanInterval() {
                r2 = this;
                long r0 = r2.scanInterval
                return r0
        }

        public long getStartTimeWithMS() {
                r4 = this;
                long r0 = r4.startTime
                r2 = 1000(0x3e8, double:4.94E-321)
                long r0 = r0 * r2
                return r0
        }

        public java.util.ArrayList<com.kwad.sdk.collector.model.d> getTarget() {
                r2 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                java.util.HashMap<java.lang.String, com.kwad.sdk.collector.model.d> r1 = r2.targetMap
                java.util.Collection r1 = r1.values()
                r0.<init>(r1)
                return r0
        }

        public java.util.Set<java.lang.String> getTargetPackages() {
                r3 = this;
                java.util.HashMap<java.lang.String, com.kwad.sdk.collector.model.d> r0 = r3.targetMap
                java.util.Collection r0 = r0.values()
                java.util.HashSet r1 = new java.util.HashSet
                r1.<init>()
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r2 = r0.hasNext()
                if (r2 == 0) goto L23
                java.lang.Object r2 = r0.next()
                com.kwad.sdk.collector.model.d r2 = (com.kwad.sdk.collector.model.d) r2
                java.lang.String r2 = com.kwad.sdk.collector.model.c.a(r2)
                r1.add(r2)
                goto Lf
            L23:
                return r1
        }

        public boolean isNeedLaunch() {
                r1 = this;
                boolean r0 = r1.needLaunch
                return r0
        }

        @Override
        public void parseJson(org.json.JSONObject r3) {
                r2 = this;
                if (r3 != 0) goto L3
                return
            L3:
                java.lang.String r0 = "startTime"
                long r0 = r3.optLong(r0)     // Catch: java.lang.Exception -> L4e
                r2.startTime = r0     // Catch: java.lang.Exception -> L4e
                java.lang.String r0 = "scanInterval"
                long r0 = r3.optLong(r0)     // Catch: java.lang.Exception -> L4e
                r2.scanInterval = r0     // Catch: java.lang.Exception -> L4e
                java.lang.String r0 = "historyGranularity"
                int r0 = r3.optInt(r0)     // Catch: java.lang.Exception -> L4e
                if (r0 <= 0) goto L20
                int r0 = r0 * 1000
                long r0 = (long) r0     // Catch: java.lang.Exception -> L4e
                r2.historyGranularity = r0     // Catch: java.lang.Exception -> L4e
            L20:
                java.lang.String r0 = "name"
                java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> L4e
                r2.name = r0     // Catch: java.lang.Exception -> L4e
                java.lang.String r0 = "minLaunchInterval"
                long r0 = r3.optLong(r0)     // Catch: java.lang.Exception -> L4e
                r2.minLaunchInterval = r0     // Catch: java.lang.Exception -> L4e
                java.lang.String r0 = "needSaveLaunchTime"
                long r0 = r3.optLong(r0)     // Catch: java.lang.Exception -> L4e
                r2.needSaveLaunchTime = r0     // Catch: java.lang.Exception -> L4e
                java.lang.String r0 = "needLaunch"
                boolean r0 = r3.optBoolean(r0)     // Catch: java.lang.Exception -> L4e
                r2.needLaunch = r0     // Catch: java.lang.Exception -> L4e
                java.lang.String r0 = "target"
                org.json.JSONArray r3 = r3.optJSONArray(r0)     // Catch: java.lang.Exception -> L4e
                java.util.ArrayList r3 = com.kwad.sdk.collector.model.c.d(r3)     // Catch: java.lang.Exception -> L4e
                r2.setTarget(r3)     // Catch: java.lang.Exception -> L4e
                return
            L4e:
                r3 = move-exception
                com.kwad.sdk.core.e.c.printStackTrace(r3)
                return
        }

        public void removeTargetsByPackage(java.util.Collection<java.lang.String> r3) {
                r2 = this;
                java.util.Iterator r3 = r3.iterator()
            L4:
                boolean r0 = r3.hasNext()
                if (r0 == 0) goto L16
                java.lang.Object r0 = r3.next()
                java.lang.String r0 = (java.lang.String) r0
                java.util.HashMap<java.lang.String, com.kwad.sdk.collector.model.d> r1 = r2.targetMap
                r1.remove(r0)
                goto L4
            L16:
                return
        }

        public void setHistoryGranularity(long r1) {
                r0 = this;
                r0.historyGranularity = r1
                return
        }

        public void setNeedLaunch(boolean r1) {
                r0 = this;
                r0.needLaunch = r1
                return
        }

        public void setNeedSaveLaunchTime(long r1) {
                r0 = this;
                r0.needSaveLaunchTime = r1
                return
        }

        public void setScanInterval(long r1) {
                r0 = this;
                r0.scanInterval = r1
                return
        }

        public void setStartTime(long r1) {
                r0 = this;
                r0.startTime = r1
                return
        }

        public void setTarget(java.util.ArrayList<com.kwad.sdk.collector.model.d> r4) {
                r3 = this;
                if (r4 == 0) goto L1d
                java.util.Iterator r4 = r4.iterator()
            L6:
                boolean r0 = r4.hasNext()
                if (r0 == 0) goto L1c
                java.lang.Object r0 = r4.next()
                com.kwad.sdk.collector.model.d r0 = (com.kwad.sdk.collector.model.d) r0
                java.util.HashMap<java.lang.String, com.kwad.sdk.collector.model.d> r1 = r3.targetMap
                java.lang.String r2 = com.kwad.sdk.collector.model.c.a(r0)
                r1.put(r2, r0)
                goto L6
            L1c:
                return
            L1d:
                java.util.HashMap<java.lang.String, com.kwad.sdk.collector.model.d> r4 = r3.targetMap
                r4.clear()
                return
        }

        @Override
        public org.json.JSONObject toJson() {
                r5 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                long r1 = r5.startTime
                java.lang.String r3 = "startTime"
                com.kwad.sdk.utils.t.putValue(r0, r3, r1)
                long r1 = r5.scanInterval
                java.lang.String r3 = "scanInterval"
                com.kwad.sdk.utils.t.putValue(r0, r3, r1)
                long r1 = r5.historyGranularity
                r3 = 1000(0x3e8, double:4.94E-321)
                long r1 = r1 / r3
                java.lang.String r3 = "historyGranularity"
                com.kwad.sdk.utils.t.putValue(r0, r3, r1)
                java.lang.String r1 = r5.name
                java.lang.String r2 = "name"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.util.ArrayList r1 = r5.getTarget()
                java.lang.String r2 = "target"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                long r1 = r5.minLaunchInterval
                java.lang.String r3 = "minLaunchInterval"
                com.kwad.sdk.utils.t.putValue(r0, r3, r1)
                long r1 = r5.needSaveLaunchTime
                java.lang.String r3 = "needSaveLaunchTime"
                com.kwad.sdk.utils.t.putValue(r0, r3, r1)
                boolean r1 = r5.needLaunch
                java.lang.String r2 = "needLaunch"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public static class UploadConfig extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
        public static final int DEFAULT_FILE_MAX_SIZE = 102400;
        private static final long serialVersionUID = 8541150615721258815L;
        public long fileMaxSize;

        public UploadConfig() {
                r2 = this;
                r2.<init>()
                r0 = 102400(0x19000, double:5.05923E-319)
                r2.fileMaxSize = r0
                return
        }

        @Override
        public void afterParseJson(org.json.JSONObject r5) {
                r4 = this;
                super.afterParseJson(r5)
                long r0 = r4.fileMaxSize
                r2 = 0
                int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r5 >= 0) goto L10
                r0 = 102400(0x19000, double:5.05923E-319)
                r4.fileMaxSize = r0
            L10:
                return
        }

        @Override
        public void parseJson(org.json.JSONObject r3) {
                r2 = this;
                if (r3 == 0) goto La
                java.lang.String r0 = "fileMaxSize"
                long r0 = r3.optLong(r0)
                r2.fileMaxSize = r0
            La:
                super.afterParseJson(r3)
                return
        }

        @Override
        public org.json.JSONObject toJson() {
                r4 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                long r1 = r4.fileMaxSize
                java.lang.String r3 = "fileMaxSize"
                com.kwad.sdk.utils.t.putValue(r0, r3, r1)
                return r0
        }
    }

    static {
            return
    }

    public AppStatusRules() {
            r2 = this;
            r2.<init>()
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r0 = new com.kwad.sdk.collector.AppStatusRules$AppStatusInfo
            r1 = 0
            r0.<init>(r1)
            r2.data = r0
            return
    }

    public static com.kwad.sdk.collector.AppStatusRules createFromJson(java.lang.String r2) {
            com.kwad.sdk.collector.AppStatusRules r0 = new com.kwad.sdk.collector.AppStatusRules
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 == 0) goto Lc
            return r0
        Lc:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L15
            r1.<init>(r2)     // Catch: java.lang.Exception -> L15
            r0.parseJson(r1)     // Catch: java.lang.Exception -> L15
            goto L19
        L15:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
        L19:
            return r0
    }

    public static boolean isAppStatusTargetNotEmpty(com.kwad.sdk.collector.AppStatusRules r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3.targetNotEmpty()
            java.util.List r3 = r3.obtainNamedStrategyList()
            r2 = 1
            if (r3 == 0) goto L17
            int r3 = r3.size()
            if (r3 <= 0) goto L17
            r3 = r2
            goto L18
        L17:
            r3 = r0
        L18:
            if (r1 != 0) goto L1e
            if (r3 == 0) goto L1d
            goto L1e
        L1d:
            return r0
        L1e:
            return r2
    }

    public static boolean isUploadTargetNotEmpty(com.kwad.sdk.collector.AppStatusRules r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            java.util.List r1 = r1.getUploadTargets()
            if (r1 == 0) goto L12
            int r1 = r1.size()
            if (r1 <= 0) goto L12
            r1 = 1
            return r1
        L12:
            return r0
    }

    public java.util.ArrayList<com.kwad.sdk.collector.AppStatusRules.Strategy> getAllStrategy() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r1 = r2.data
            com.kwad.sdk.collector.AppStatusRules$Strategy r1 = com.kwad.sdk.collector.AppStatusRules.AppStatusInfo.access$100(r1)
            if (r1 == 0) goto L16
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r1 = r2.data
            com.kwad.sdk.collector.AppStatusRules$Strategy r1 = com.kwad.sdk.collector.AppStatusRules.AppStatusInfo.access$100(r1)
            r0.add(r1)
        L16:
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r1 = r2.data
            java.util.ArrayList r1 = com.kwad.sdk.collector.AppStatusRules.AppStatusInfo.access$200(r1)
            if (r1 == 0) goto L27
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r1 = r2.data
            java.util.ArrayList r1 = com.kwad.sdk.collector.AppStatusRules.AppStatusInfo.access$200(r1)
            r0.addAll(r1)
        L27:
            return r0
    }

    public java.util.List<com.kwad.sdk.collector.model.d> getUploadTargets() {
            r1 = this;
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r0 = r1.data
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.util.ArrayList r0 = com.kwad.sdk.collector.AppStatusRules.AppStatusInfo.access$400(r0)
            return r0
    }

    public void initStatus(android.content.Context r4) {
            r3 = this;
            java.util.ArrayList r0 = r3.getAllStrategy()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.collector.AppStatusRules$Strategy r1 = (com.kwad.sdk.collector.AppStatusRules.Strategy) r1
            boolean r2 = com.kwad.sdk.collector.i.a(r4, r1)
            r1.setNeedLaunch(r2)
            goto L8
        L1c:
            return
    }

    public long obtainDefaultScanInterval() {
            r5 = this;
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r0 = r5.data
            r1 = 0
            if (r0 == 0) goto L20
            com.kwad.sdk.collector.AppStatusRules$Strategy r0 = r0.getStrategy()
            if (r0 != 0) goto Ld
            goto L20
        Ld:
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r0 = r5.data
            com.kwad.sdk.collector.AppStatusRules$Strategy r0 = r0.getStrategy()
            long r3 = r0.getScanInterval()
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 >= 0) goto L1c
            goto L1d
        L1c:
            r1 = r3
        L1d:
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r3
        L20:
            return r1
    }

    public com.kwad.sdk.collector.AppStatusRules.Strategy obtainDefaultStrategy() {
            r1 = this;
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r0 = r1.data
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            com.kwad.sdk.collector.AppStatusRules$Strategy r0 = com.kwad.sdk.collector.AppStatusRules.AppStatusInfo.access$100(r0)
            return r0
    }

    public java.util.List<com.kwad.sdk.collector.AppStatusRules.Strategy> obtainNamedStrategyList() {
            r1 = this;
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r0 = r1.data
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.util.ArrayList r0 = com.kwad.sdk.collector.AppStatusRules.AppStatusInfo.access$200(r0)
            return r0
    }

    public long obtainUploadConfigFileMaxSize() {
            r2 = this;
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r0 = r2.data
            if (r0 == 0) goto L13
            com.kwad.sdk.collector.AppStatusRules$UploadConfig r0 = com.kwad.sdk.collector.AppStatusRules.AppStatusInfo.access$500(r0)
            if (r0 == 0) goto L13
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r0 = r2.data
            com.kwad.sdk.collector.AppStatusRules$UploadConfig r0 = com.kwad.sdk.collector.AppStatusRules.AppStatusInfo.access$500(r0)
            long r0 = r0.fileMaxSize
            goto L16
        L13:
            r0 = 102400(0x19000, double:5.05923E-319)
        L16:
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r2) {
            r1 = this;
            super.parseJson(r2)
            if (r2 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "data"
            java.lang.String r2 = r2.optString(r0)     // Catch: java.lang.Exception -> L1b
            java.lang.String r2 = com.kwad.sdk.core.a.d.getResponseData(r2)     // Catch: java.lang.Exception -> L1b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1b
            r0.<init>(r2)     // Catch: java.lang.Exception -> L1b
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r2 = r1.data     // Catch: java.lang.Exception -> L1b
            r2.parseJson(r0)     // Catch: java.lang.Exception -> L1b
            return
        L1b:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r2)
            return
    }

    public boolean targetNotEmpty() {
            r2 = this;
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r0 = r2.data
            r1 = 0
            if (r0 == 0) goto L1a
            java.util.ArrayList r0 = com.kwad.sdk.collector.AppStatusRules.AppStatusInfo.access$300(r0)
            if (r0 != 0) goto Lc
            goto L1a
        Lc:
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r0 = r2.data
            java.util.ArrayList r0 = com.kwad.sdk.collector.AppStatusRules.AppStatusInfo.access$300(r0)
            int r0 = r0.size()
            if (r0 <= 0) goto L1a
            r0 = 1
            return r0
        L1a:
            return r1
    }

    @Override
    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = super.toJson()
            com.kwad.sdk.collector.AppStatusRules$AppStatusInfo r1 = r3.data
            java.lang.String r2 = "data"
            com.kwad.sdk.utils.t.a(r0, r2, r1)
            return r0
    }
}
