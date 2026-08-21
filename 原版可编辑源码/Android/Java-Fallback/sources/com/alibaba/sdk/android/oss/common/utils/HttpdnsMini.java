package com.alibaba.sdk.android.oss.common.utils;

public class HttpdnsMini {
    private static final java.lang.String ACCOUNT_ID = "181345";
    private static final int EMPTY_RESULT_HOST_TTL = 30;
    private static final int MAX_HOLD_HOST_NUM = 100;
    private static final int MAX_THREAD_NUM = 5;
    private static final int RESOLVE_TIMEOUT_IN_SEC = 10;
    private static final java.lang.String SERVER_IP = "203.107.1.1";
    private static final java.lang.String TAG = "HttpDnsMini";
    private static com.alibaba.sdk.android.oss.common.utils.HttpdnsMini instance;
    private java.util.concurrent.ConcurrentMap<java.lang.String, com.alibaba.sdk.android.oss.common.utils.HttpdnsMini.HostObject> hostManager;
    private java.util.concurrent.ExecutorService pool;

    class HostObject {
        private java.lang.String hostName;
        private java.lang.String ip;
        private long queryTime;
        final com.alibaba.sdk.android.oss.common.utils.HttpdnsMini this$0;
        private long ttl;

        HostObject(com.alibaba.sdk.android.oss.common.utils.HttpdnsMini r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        public java.lang.String getHostName() {
                r1 = this;
                java.lang.String r0 = r1.hostName
                return r0
        }

        public java.lang.String getIp() {
                r1 = this;
                java.lang.String r0 = r1.ip
                return r0
        }

        public long getQueryTime() {
                r2 = this;
                long r0 = r2.queryTime
                return r0
        }

        public long getTtl() {
                r2 = this;
                long r0 = r2.ttl
                return r0
        }

        public boolean isExpired() {
                r6 = this;
                long r0 = r6.getQueryTime()
                long r2 = r6.ttl
                long r0 = r0 + r2
                long r2 = java.lang.System.currentTimeMillis()
                r4 = 1000(0x3e8, double:4.94E-321)
                long r2 = r2 / r4
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 >= 0) goto L14
                r0 = 1
                goto L15
            L14:
                r0 = 0
            L15:
                return r0
        }

        public boolean isStillAvailable() {
                r6 = this;
                long r0 = r6.getQueryTime()
                long r2 = r6.ttl
                long r0 = r0 + r2
                r2 = 600(0x258, double:2.964E-321)
                long r0 = r0 + r2
                long r2 = java.lang.System.currentTimeMillis()
                r4 = 1000(0x3e8, double:4.94E-321)
                long r2 = r2 / r4
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 <= 0) goto L17
                r0 = 1
                goto L18
            L17:
                r0 = 0
            L18:
                return r0
        }

        public void setHostName(java.lang.String r1) {
                r0 = this;
                r0.hostName = r1
                return
        }

        public void setIp(java.lang.String r1) {
                r0 = this;
                r0.ip = r1
                return
        }

        public void setQueryTime(long r1) {
                r0 = this;
                r0.queryTime = r1
                return
        }

        public void setTtl(long r1) {
                r0 = this;
                r0.ttl = r1
                return
        }

        public java.lang.String toString() {
                r3 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "[hostName="
                r0.append(r1)
                java.lang.String r1 = r3.getHostName()
                r0.append(r1)
                java.lang.String r1 = ", ip="
                r0.append(r1)
                java.lang.String r1 = r3.ip
                r0.append(r1)
                java.lang.String r1 = ", ttl="
                r0.append(r1)
                long r1 = r3.getTtl()
                r0.append(r1)
                java.lang.String r1 = ", queryTime="
                r0.append(r1)
                long r1 = r3.queryTime
                r0.append(r1)
                java.lang.String r1 = "]"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    class QueryHostTask implements java.util.concurrent.Callable<java.lang.String> {
        private boolean hasRetryed;
        private java.lang.String hostName;
        final com.alibaba.sdk.android.oss.common.utils.HttpdnsMini this$0;

        public QueryHostTask(com.alibaba.sdk.android.oss.common.utils.HttpdnsMini r1, java.lang.String r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r1 = 0
                r0.hasRetryed = r1
                r0.hostName = r2
                return
        }

        @Override
        public java.lang.String call() throws java.lang.Exception {
                r1 = this;
                java.lang.String r0 = r1.call()
                return r0
        }

        @Override
        public java.lang.String call() {
                r10 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "https://"
                r0.append(r1)
                java.lang.String r1 = "203.107.1.1"
                r0.append(r1)
                java.lang.String r1 = "/"
                r0.append(r1)
                java.lang.String r1 = "181345"
                r0.append(r1)
                java.lang.String r1 = "/d?host="
                r0.append(r1)
                java.lang.String r1 = r10.hostName
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "[httpdnsmini] - buildUrl: "
                r1.append(r2)
                r1.append(r0)
                java.lang.String r1 = r1.toString()
                com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1)
                r1 = 0
                java.net.URL r2 = new java.net.URL     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                r2.<init>(r0)     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                java.net.URLConnection r0 = r2.openConnection()     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                java.net.HttpURLConnection r0 = (java.net.HttpURLConnection) r0     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                r2 = 10000(0x2710, float:1.4013E-41)
                r0.setConnectTimeout(r2)     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                r0.setReadTimeout(r2)     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                int r2 = r0.getResponseCode()     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                r3 = 200(0xc8, float:2.8E-43)
                if (r2 == r3) goto L72
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                r2.<init>()     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                java.lang.String r3 = "[httpdnsmini] - responseCodeNot 200, but: "
                r2.append(r3)     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                int r0 = r0.getResponseCode()     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                r2.append(r0)     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                com.alibaba.sdk.android.oss.common.OSSLog.logError(r0)     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                r0 = r1
                goto L135
            L72:
                java.io.InputStream r0 = r0.getInputStream()     // Catch: java.lang.Throwable -> L145 java.lang.Exception -> L147
                java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.String r4 = "UTF-8"
                r3.<init>(r0, r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r3.<init>()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
            L87:
                java.lang.String r4 = r2.readLine()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                if (r4 == 0) goto L91
                r3.append(r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                goto L87
            L91:
                org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.String r3 = "host"
                java.lang.String r3 = r2.getString(r3)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.String r4 = "ttl"
                long r4 = r2.getLong(r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.String r6 = "ips"
                org.json.JSONArray r2 = r2.getJSONArray(r6)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r6.<init>()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.String r7 = "[httpdnsmini] - ips:"
                r6.append(r7)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r6.append(r7)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r6)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                if (r3 == 0) goto L135
                if (r2 == 0) goto L135
                int r6 = r2.length()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                if (r6 <= 0) goto L135
                r6 = 0
                int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
                if (r8 != 0) goto Ld6
                r4 = 30
            Ld6:
                com.alibaba.sdk.android.oss.common.utils.HttpdnsMini$HostObject r6 = new com.alibaba.sdk.android.oss.common.utils.HttpdnsMini$HostObject     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                com.alibaba.sdk.android.oss.common.utils.HttpdnsMini r7 = r10.this$0     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r6.<init>(r7)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                if (r2 != 0) goto Le1
                r2 = r1
                goto Le6
            Le1:
                r7 = 0
                java.lang.String r2 = r2.getString(r7)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
            Le6:
                r6.setHostName(r3)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r6.setTtl(r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r6.setIp(r2)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r7 = 1000(0x3e8, double:4.94E-321)
                long r3 = r3 / r7
                r6.setQueryTime(r3)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r3.<init>()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.String r4 = "[httpdnsmini] - resolve result:"
                r3.append(r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r3.append(r4)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r3)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                com.alibaba.sdk.android.oss.common.utils.HttpdnsMini r3 = r10.this$0     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.util.concurrent.ConcurrentMap r3 = com.alibaba.sdk.android.oss.common.utils.HttpdnsMini.access$000(r3)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                int r3 = r3.size()     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r4 = 100
                if (r3 >= r4) goto L12a
                com.alibaba.sdk.android.oss.common.utils.HttpdnsMini r3 = r10.this$0     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.util.concurrent.ConcurrentMap r3 = com.alibaba.sdk.android.oss.common.utils.HttpdnsMini.access$000(r3)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                java.lang.String r4 = r10.hostName     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
                r3.put(r4, r6)     // Catch: java.lang.Throwable -> L13b java.lang.Exception -> L140
            L12a:
                if (r0 == 0) goto L134
                r0.close()     // Catch: java.io.IOException -> L130
                goto L134
            L130:
                r0 = move-exception
                r0.printStackTrace()
            L134:
                return r2
            L135:
                if (r0 == 0) goto L15f
                r0.close()     // Catch: java.io.IOException -> L15b
                goto L15f
            L13b:
                r1 = move-exception
                r9 = r1
                r1 = r0
                r0 = r9
                goto L16e
            L140:
                r2 = move-exception
                r9 = r2
                r2 = r0
                r0 = r9
                goto L149
            L145:
                r0 = move-exception
                goto L16e
            L147:
                r0 = move-exception
                r2 = r1
            L149:
                boolean r3 = com.alibaba.sdk.android.oss.common.OSSLog.isEnableLog()     // Catch: java.lang.Throwable -> L16c
                if (r3 == 0) goto L155
                r0.printStackTrace()     // Catch: java.lang.Throwable -> L16c
                com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r0)     // Catch: java.lang.Throwable -> L16c
            L155:
                if (r2 == 0) goto L15f
                r2.close()     // Catch: java.io.IOException -> L15b
                goto L15f
            L15b:
                r0 = move-exception
                r0.printStackTrace()
            L15f:
                boolean r0 = r10.hasRetryed
                if (r0 != 0) goto L16b
                r0 = 1
                r10.hasRetryed = r0
                java.lang.String r0 = r10.call()
                return r0
            L16b:
                return r1
            L16c:
                r0 = move-exception
                r1 = r2
            L16e:
                if (r1 == 0) goto L178
                r1.close()     // Catch: java.io.IOException -> L174
                goto L178
            L174:
                r1 = move-exception
                r1.printStackTrace()
            L178:
                goto L17a
            L179:
                throw r0
            L17a:
                goto L179
        }
    }

    private HttpdnsMini() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.hostManager = r0
            r0 = 5
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newFixedThreadPool(r0)
            r1.pool = r0
            return
    }

    static java.util.concurrent.ConcurrentMap access$000(com.alibaba.sdk.android.oss.common.utils.HttpdnsMini r0) {
            java.util.concurrent.ConcurrentMap<java.lang.String, com.alibaba.sdk.android.oss.common.utils.HttpdnsMini$HostObject> r0 = r0.hostManager
            return r0
    }

    public static com.alibaba.sdk.android.oss.common.utils.HttpdnsMini getInstance() {
            com.alibaba.sdk.android.oss.common.utils.HttpdnsMini r0 = com.alibaba.sdk.android.oss.common.utils.HttpdnsMini.instance
            if (r0 != 0) goto L17
            java.lang.Class<com.alibaba.sdk.android.oss.common.utils.HttpdnsMini> r0 = com.alibaba.sdk.android.oss.common.utils.HttpdnsMini.class
            monitor-enter(r0)
            com.alibaba.sdk.android.oss.common.utils.HttpdnsMini r1 = com.alibaba.sdk.android.oss.common.utils.HttpdnsMini.instance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.alibaba.sdk.android.oss.common.utils.HttpdnsMini r1 = new com.alibaba.sdk.android.oss.common.utils.HttpdnsMini     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.alibaba.sdk.android.oss.common.utils.HttpdnsMini.instance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.alibaba.sdk.android.oss.common.utils.HttpdnsMini r0 = com.alibaba.sdk.android.oss.common.utils.HttpdnsMini.instance
            return r0
    }

    public java.lang.String getIpByHostAsync(java.lang.String r4) {
            r3 = this;
            java.util.concurrent.ConcurrentMap<java.lang.String, com.alibaba.sdk.android.oss.common.utils.HttpdnsMini$HostObject> r0 = r3.hostManager
            java.lang.Object r0 = r0.get(r4)
            com.alibaba.sdk.android.oss.common.utils.HttpdnsMini$HostObject r0 = (com.alibaba.sdk.android.oss.common.utils.HttpdnsMini.HostObject) r0
            if (r0 == 0) goto L10
            boolean r1 = r0.isExpired()
            if (r1 == 0) goto L2e
        L10:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[httpdnsmini] - refresh host: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            com.alibaba.sdk.android.oss.common.OSSLog.logDebug(r1)
            java.util.concurrent.ExecutorService r1 = r3.pool
            com.alibaba.sdk.android.oss.common.utils.HttpdnsMini$QueryHostTask r2 = new com.alibaba.sdk.android.oss.common.utils.HttpdnsMini$QueryHostTask
            r2.<init>(r3, r4)
            r1.submit(r2)
        L2e:
            r4 = 0
            if (r0 == 0) goto L3b
            boolean r1 = r0.isStillAvailable()
            if (r1 == 0) goto L3b
            java.lang.String r4 = r0.getIp()
        L3b:
            return r4
    }
}
