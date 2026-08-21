package com.huawei.hms.support.api;

import com.huawei.hms.core.aidl.IMessageEntity;
import com.huawei.hms.support.api.client.Result;

public abstract class PendingResultImpl<R extends com.huawei.hms.support.api.client.Result, T extends com.huawei.hms.core.aidl.IMessageEntity> extends com.huawei.hms.support.api.client.InnerPendingResult<R> {
    private static final java.lang.String TAG = "PendingResultImpl";
    private java.lang.ref.WeakReference<com.huawei.hms.support.api.client.ApiClient> api;
    private java.util.concurrent.CountDownLatch countLatch;
    private boolean isNeedReport;
    private R result;
    private java.lang.String transId;
    protected com.huawei.hms.support.api.transport.DatagramTransport transport;
    private java.lang.String url;

    class a implements com.huawei.hms.support.api.transport.DatagramTransport.a {
        final com.huawei.hms.support.api.PendingResultImpl a;

        a(com.huawei.hms.support.api.PendingResultImpl r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a(int r2, com.huawei.hms.core.aidl.IMessageEntity r3) {
                r1 = this;
                com.huawei.hms.support.api.PendingResultImpl r0 = r1.a
                com.huawei.hms.support.api.PendingResultImpl.access$000(r0, r2, r3)
                com.huawei.hms.support.api.PendingResultImpl r2 = r1.a
                java.util.concurrent.CountDownLatch r2 = com.huawei.hms.support.api.PendingResultImpl.access$100(r2)
                r2.countDown()
                return
        }
    }

    class b implements com.huawei.hms.support.api.transport.DatagramTransport.a {
        final java.util.concurrent.atomic.AtomicBoolean a;
        final com.huawei.hms.support.api.PendingResultImpl b;

        b(com.huawei.hms.support.api.PendingResultImpl r1, java.util.concurrent.atomic.AtomicBoolean r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void a(int r2, com.huawei.hms.core.aidl.IMessageEntity r3) {
                r1 = this;
                java.util.concurrent.atomic.AtomicBoolean r0 = r1.a
                boolean r0 = r0.get()
                if (r0 != 0) goto Ld
                com.huawei.hms.support.api.PendingResultImpl r0 = r1.b
                com.huawei.hms.support.api.PendingResultImpl.access$000(r0, r2, r3)
            Ld:
                com.huawei.hms.support.api.PendingResultImpl r2 = r1.b
                java.util.concurrent.CountDownLatch r2 = com.huawei.hms.support.api.PendingResultImpl.access$100(r2)
                r2.countDown()
                return
        }
    }

    class c implements com.huawei.hms.support.api.transport.DatagramTransport.a {
        final com.huawei.hms.support.api.PendingResultImpl.d a;
        final com.huawei.hms.support.api.client.ResultCallback b;
        final com.huawei.hms.support.api.PendingResultImpl c;

        c(com.huawei.hms.support.api.PendingResultImpl r1, com.huawei.hms.support.api.PendingResultImpl.d r2, com.huawei.hms.support.api.client.ResultCallback r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public void a(int r2, com.huawei.hms.core.aidl.IMessageEntity r3) {
                r1 = this;
                com.huawei.hms.support.api.PendingResultImpl r0 = r1.c
                com.huawei.hms.support.api.PendingResultImpl.access$000(r0, r2, r3)
                com.huawei.hms.support.api.PendingResultImpl$d r2 = r1.a
                com.huawei.hms.support.api.client.ResultCallback r3 = r1.b
                com.huawei.hms.support.api.PendingResultImpl r0 = r1.c
                com.huawei.hms.support.api.client.Result r0 = com.huawei.hms.support.api.PendingResultImpl.access$200(r0)
                r2.a(r3, r0)
                return
        }
    }

    protected static class d<R extends com.huawei.hms.support.api.client.Result> extends android.os.Handler {
        public d(android.os.Looper r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public void a(com.huawei.hms.support.api.client.ResultCallback<? super R> r2, R r3) {
                r1 = this;
                android.util.Pair r0 = new android.util.Pair
                r0.<init>(r2, r3)
                r2 = 1
                android.os.Message r2 = r1.obtainMessage(r2, r0)
                r1.sendMessage(r2)
                return
        }

        protected void b(com.huawei.hms.support.api.client.ResultCallback<? super R> r1, R r2) {
                r0 = this;
                r1.onResult(r2)
                return
        }

        @Override
        public void handleMessage(android.os.Message r3) {
                r2 = this;
                int r0 = r3.what
                r1 = 1
                if (r0 == r1) goto L6
                goto L15
            L6:
                java.lang.Object r3 = r3.obj
                android.util.Pair r3 = (android.util.Pair) r3
                java.lang.Object r0 = r3.first
                com.huawei.hms.support.api.client.ResultCallback r0 = (com.huawei.hms.support.api.client.ResultCallback) r0
                java.lang.Object r3 = r3.second
                com.huawei.hms.support.api.client.Result r3 = (com.huawei.hms.support.api.client.Result) r3
                r2.b(r0, r3)
            L15:
                return
        }
    }

    public PendingResultImpl(com.huawei.hms.support.api.client.ApiClient r8, java.lang.String r9, com.huawei.hms.core.aidl.IMessageEntity r10) {
            r7 = this;
            r7.<init>()
            r0 = 0
            r7.transport = r0
            r7.result = r0
            r7.url = r0
            r7.transId = r0
            r0 = 1
            r7.isNeedReport = r0
            java.lang.Class r5 = r7.getResponseType()
            r6 = 0
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r1.init(r2, r3, r4, r5, r6)
            return
    }

    public PendingResultImpl(com.huawei.hms.support.api.client.ApiClient r8, java.lang.String r9, com.huawei.hms.core.aidl.IMessageEntity r10, int r11) {
            r7 = this;
            r7.<init>()
            r0 = 0
            r7.transport = r0
            r7.result = r0
            r7.url = r0
            r7.transId = r0
            r0 = 1
            r7.isNeedReport = r0
            java.lang.Class r5 = r7.getResponseType()
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r6 = r11
            r1.init(r2, r3, r4, r5, r6)
            return
    }

    public PendingResultImpl(com.huawei.hms.support.api.client.ApiClient r8, java.lang.String r9, com.huawei.hms.core.aidl.IMessageEntity r10, java.lang.Class<T> r11) {
            r7 = this;
            r7.<init>()
            r0 = 0
            r7.transport = r0
            r7.result = r0
            r7.url = r0
            r7.transId = r0
            r0 = 1
            r7.isNeedReport = r0
            r6 = 0
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r1.init(r2, r3, r4, r5, r6)
            return
    }

    static void access$000(com.huawei.hms.support.api.PendingResultImpl r0, int r1, com.huawei.hms.core.aidl.IMessageEntity r2) {
            r0.setResult(r1, r2)
            return
    }

    static java.util.concurrent.CountDownLatch access$100(com.huawei.hms.support.api.PendingResultImpl r0) {
            java.util.concurrent.CountDownLatch r0 = r0.countLatch
            return r0
    }

    static com.huawei.hms.support.api.client.Result access$200(com.huawei.hms.support.api.PendingResultImpl r0) {
            R extends com.huawei.hms.support.api.client.Result r0 = r0.result
            return r0
    }

    private void biReportEvent(int r5, int r6) {
            r4 = this;
            java.lang.String r0 = "PendingResultImpl"
            java.lang.String r1 = "biReportEvent ====== "
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            java.lang.ref.WeakReference<com.huawei.hms.support.api.client.ApiClient> r0 = r4.api
            java.lang.Object r0 = r0.get()
            com.huawei.hms.support.api.client.ApiClient r0 = (com.huawei.hms.support.api.client.ApiClient) r0
            if (r0 == 0) goto Lf4
            java.lang.String r1 = r4.url
            if (r1 == 0) goto Lf4
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r1 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            android.content.Context r2 = r0.getContext()
            boolean r1 = r1.hasError(r2)
            if (r1 == 0) goto L25
            goto Lf4
        L25:
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.lang.String r2 = r0.getPackageName()
            java.lang.String r3 = "package"
            r1.put(r3, r2)
            java.lang.String r2 = "baseVersion"
            java.lang.String r3 = "5.3.0.301"
            r1.put(r2, r3)
            java.lang.String r2 = "direction"
            r3 = 1
            if (r6 != r3) goto L45
            java.lang.String r5 = "req"
            r1.put(r2, r5)
            goto L70
        L45:
            java.lang.String r6 = "rsp"
            r1.put(r2, r6)
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r6 = "result"
            r1.put(r6, r5)
            R extends com.huawei.hms.support.api.client.Result r5 = r4.result
            if (r5 == 0) goto L70
            com.huawei.hms.support.api.client.Status r5 = r5.getStatus()
            if (r5 == 0) goto L70
            R extends com.huawei.hms.support.api.client.Result r5 = r4.result
            com.huawei.hms.support.api.client.Status r5 = r5.getStatus()
            int r5 = r5.getStatusCode()
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r6 = "statusCode"
            r1.put(r6, r5)
        L70:
            java.lang.String r5 = "version"
            java.lang.String r6 = "0"
            r1.put(r5, r6)
            android.content.Context r5 = r0.getContext()
            java.lang.String r5 = com.huawei.hms.utils.Util.getAppId(r5)
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 == 0) goto L8f
            com.huawei.hms.support.api.client.SubAppInfo r6 = r0.getSubAppInfo()
            if (r6 == 0) goto L8f
            java.lang.String r5 = r6.getSubAppID()
        L8f:
            java.lang.String r6 = "appid"
            r1.put(r6, r5)
            java.lang.String r6 = r4.transId
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            java.lang.String r2 = "transId"
            if (r6 == 0) goto Laa
            java.lang.String r6 = r4.url
            java.lang.String r5 = com.huawei.hms.common.internal.TransactionIdCreater.getId(r5, r6)
            r4.transId = r5
            r1.put(r2, r5)
            goto Lb2
        Laa:
            java.lang.String r5 = r4.transId
            r1.put(r2, r5)
            r5 = 0
            r4.transId = r5
        Lb2:
            java.lang.String r5 = r4.url
            java.lang.String r6 = "\\."
            java.lang.String[] r5 = r5.split(r6)
            int r6 = r5.length
            r2 = 2
            if (r6 < r2) goto Lcd
            r6 = 0
            r6 = r5[r6]
            java.lang.String r2 = "service"
            r1.put(r2, r6)
            r5 = r5[r3]
            java.lang.String r6 = "apiName"
            r1.put(r6, r5)
        Lcd:
            long r5 = java.lang.System.currentTimeMillis()
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r6 = "callTime"
            r1.put(r6, r5)
            java.lang.String r5 = "ro.logsystem.usertype"
            java.lang.String r6 = ""
            java.lang.String r5 = com.huawei.hms.utils.Util.getSystemProperties(r5, r6)
            java.lang.String r6 = "phoneType"
            r1.put(r6, r5)
            com.huawei.hms.support.hianalytics.HiAnalyticsUtil r5 = com.huawei.hms.support.hianalytics.HiAnalyticsUtil.getInstance()
            android.content.Context r6 = r0.getContext()
            java.lang.String r0 = "HMS_SDK_BASE_CALL_AIDL"
            r5.onEvent(r6, r0, r1)
        Lf4:
            return
    }

    private void init(com.huawei.hms.support.api.client.ApiClient r9, java.lang.String r10, com.huawei.hms.core.aidl.IMessageEntity r11, java.lang.Class<T> r12, int r13) {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "init uri:"
            r0.append(r1)
            r0.append(r10)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PendingResultImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            r8.url = r10
            if (r9 != 0) goto L20
            java.lang.String r9 = "client is null"
            com.huawei.hms.support.log.HMSLog.e(r1, r9)
            return
        L20:
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r9)
            r8.api = r0
            java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch
            r2 = 1
            r0.<init>(r2)
            r8.countLatch = r0
            java.lang.String r9 = r9.getTransportName()     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            java.lang.Class r9 = java.lang.Class.forName(r9)     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            r0 = 4
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            java.lang.Class<com.huawei.hms.core.aidl.IMessageEntity> r4 = com.huawei.hms.core.aidl.IMessageEntity.class
            r3[r2] = r4     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            java.lang.Class<java.lang.Class> r4 = java.lang.Class.class
            r6 = 2
            r3[r6] = r4     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            r7 = 3
            r3[r7] = r4     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            java.lang.reflect.Constructor r9 = r9.getConstructor(r3)     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            r0[r5] = r10     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            r0[r2] = r11     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            r0[r6] = r12     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            java.lang.Integer r10 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            r0[r7] = r10     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            java.lang.Object r9 = r9.newInstance(r0)     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            com.huawei.hms.support.api.transport.DatagramTransport r9 = (com.huawei.hms.support.api.transport.DatagramTransport) r9     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            r8.transport = r9     // Catch: java.lang.ClassNotFoundException -> L68 java.lang.NoSuchMethodException -> L6a java.lang.reflect.InvocationTargetException -> L6c java.lang.IllegalArgumentException -> L6e java.lang.IllegalAccessException -> L70 java.lang.InstantiationException -> L72
            return
        L68:
            r9 = move-exception
            goto L73
        L6a:
            r9 = move-exception
            goto L73
        L6c:
            r9 = move-exception
            goto L73
        L6e:
            r9 = move-exception
            goto L73
        L70:
            r9 = move-exception
            goto L73
        L72:
            r9 = move-exception
        L73:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "gen transport error:"
            r10.append(r11)
            java.lang.String r11 = r9.getMessage()
            r10.append(r11)
            java.lang.String r10 = r10.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r10)
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "Instancing transport exception, "
            r11.append(r12)
            java.lang.String r12 = r9.getMessage()
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            r10.<init>(r11, r9)
            throw r10
    }

    private void setResult(int r9, com.huawei.hms.core.aidl.IMessageEntity r10) {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setResult:"
            r0.append(r1)
            r0.append(r9)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PendingResultImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            boolean r0 = r10 instanceof com.huawei.hms.core.aidl.AbstractMessageEntity
            if (r0 == 0) goto L22
            r0 = r10
            com.huawei.hms.core.aidl.AbstractMessageEntity r0 = (com.huawei.hms.core.aidl.AbstractMessageEntity) r0
            com.huawei.hms.support.api.client.Status r0 = r0.getCommonStatus()
            goto L23
        L22:
            r0 = 0
        L23:
            if (r9 != 0) goto L2c
            com.huawei.hms.support.api.client.Result r10 = r8.onComplete(r10)
            r8.result = r10
            goto L32
        L2c:
            com.huawei.hms.support.api.client.Result r10 = r8.onError(r9)
            r8.result = r10
        L32:
            boolean r10 = r8.isNeedReport
            if (r10 == 0) goto L3a
            r10 = 2
            r8.biReportEvent(r9, r10)
        L3a:
            R extends com.huawei.hms.support.api.client.Result r9 = r8.result
            if (r9 == 0) goto Lce
            com.huawei.hms.support.api.client.Status r9 = r9.getStatus()
            if (r9 == 0) goto Lce
            if (r0 == 0) goto Lce
            int r10 = r9.getStatusCode()
            java.lang.String r2 = r9.getStatusMessage()
            int r3 = r0.getStatusCode()
            java.lang.String r0 = r0.getStatusMessage()
            java.lang.String r4 = ") is not equal commonStatus msg ("
            java.lang.String r5 = "rstStatus msg ("
            java.lang.String r6 = ")"
            if (r10 == r3) goto L99
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r7 = "rstStatus code ("
            r9.append(r7)
            r9.append(r10)
            java.lang.String r10 = ") is not equal commonStatus code ("
            r9.append(r10)
            r9.append(r3)
            r9.append(r6)
            java.lang.String r9 = r9.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r9)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r5)
            r9.append(r2)
            r9.append(r4)
            r9.append(r0)
            r9.append(r6)
            java.lang.String r9 = r9.toString()
            com.huawei.hms.support.log.HMSLog.e(r1, r9)
            goto Lce
        L99:
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto Lce
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto Lce
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r5)
            r3.append(r2)
            r3.append(r4)
            r3.append(r0)
            r3.append(r6)
            java.lang.String r2 = r3.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r2)
            R extends com.huawei.hms.support.api.client.Result r1 = r8.result
            com.huawei.hms.support.api.client.Status r2 = new com.huawei.hms.support.api.client.Status
            android.app.PendingIntent r9 = r9.getResolution()
            r2.<init>(r10, r0, r9)
            r1.setStatus(r2)
        Lce:
            return
    }

    @Override
    public final R await() {
            r3 = this;
            java.lang.String r0 = "PendingResultImpl"
            java.lang.String r1 = "await"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            android.os.Looper r1 = android.os.Looper.myLooper()
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            if (r1 == r2) goto L16
            com.huawei.hms.support.api.client.Result r0 = r3.awaitOnAnyThread()
            return r0
        L16:
            java.lang.String r1 = "await in main thread"
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "await must not be called on the UI thread"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public R await(long r4, java.util.concurrent.TimeUnit r6) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "await timeout:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = " unit:"
            r0.append(r1)
            java.lang.String r1 = r6.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PendingResultImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            if (r0 == r2) goto L31
            com.huawei.hms.support.api.client.Result r4 = r3.awaitOnAnyThread(r4, r6)
            return r4
        L31:
            java.lang.String r4 = "await in main thread"
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "await must not be called on the UI thread"
            r4.<init>(r5)
            throw r4
    }

    @Override
    public final R awaitOnAnyThread() {
            r5 = this;
            java.lang.String r0 = "PendingResultImpl"
            java.lang.String r1 = "awaitOnAnyThread"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            java.lang.ref.WeakReference<com.huawei.hms.support.api.client.ApiClient> r1 = r5.api
            r2 = 907135003(0x3611c81b, float:2.172316E-6)
            r3 = 0
            if (r1 != 0) goto L1a
            java.lang.String r1 = "api is null"
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            r5.setResult(r2, r3)
            R extends com.huawei.hms.support.api.client.Result r0 = r5.result
            return r0
        L1a:
            java.lang.Object r1 = r1.get()
            com.huawei.hms.support.api.client.ApiClient r1 = (com.huawei.hms.support.api.client.ApiClient) r1
            boolean r4 = r5.checkApiClient(r1)
            if (r4 != 0) goto L31
            java.lang.String r1 = "client invalid"
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            r5.setResult(r2, r3)
            R extends com.huawei.hms.support.api.client.Result r0 = r5.result
            return r0
        L31:
            boolean r2 = r5.isNeedReport
            if (r2 == 0) goto L3a
            r2 = 0
            r4 = 1
            r5.biReportEvent(r2, r4)
        L3a:
            com.huawei.hms.support.api.transport.DatagramTransport r2 = r5.transport
            com.huawei.hms.support.api.PendingResultImpl$a r4 = new com.huawei.hms.support.api.PendingResultImpl$a
            r4.<init>(r5)
            r2.send(r1, r4)
            java.util.concurrent.CountDownLatch r1 = r5.countLatch     // Catch: java.lang.InterruptedException -> L4a
            r1.await()     // Catch: java.lang.InterruptedException -> L4a
            goto L55
        L4a:
            java.lang.String r1 = "await in anythread InterruptedException"
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
            r0 = 907135001(0x3611c819, float:2.1723156E-6)
            r5.setResult(r0, r3)
        L55:
            R extends com.huawei.hms.support.api.client.Result r0 = r5.result
            return r0
    }

    @Override
    public final R awaitOnAnyThread(long r8, java.util.concurrent.TimeUnit r10) {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "awaitOnAnyThread timeout:"
            r0.append(r1)
            r0.append(r8)
            java.lang.String r1 = " unit:"
            r0.append(r1)
            java.lang.String r1 = r10.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PendingResultImpl"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            java.lang.ref.WeakReference<com.huawei.hms.support.api.client.ApiClient> r0 = r7.api
            r2 = 907135003(0x3611c81b, float:2.172316E-6)
            r3 = 0
            if (r0 != 0) goto L35
            java.lang.String r8 = "api is null"
            com.huawei.hms.support.log.HMSLog.e(r1, r8)
            r7.setResult(r2, r3)
            R extends com.huawei.hms.support.api.client.Result r8 = r7.result
            return r8
        L35:
            java.lang.Object r0 = r0.get()
            com.huawei.hms.support.api.client.ApiClient r0 = (com.huawei.hms.support.api.client.ApiClient) r0
            boolean r4 = r7.checkApiClient(r0)
            if (r4 != 0) goto L4c
            java.lang.String r8 = "client invalid"
            com.huawei.hms.support.log.HMSLog.e(r1, r8)
            r7.setResult(r2, r3)
            R extends com.huawei.hms.support.api.client.Result r8 = r7.result
            return r8
        L4c:
            java.util.concurrent.atomic.AtomicBoolean r2 = new java.util.concurrent.atomic.AtomicBoolean
            r2.<init>()
            boolean r4 = r7.isNeedReport
            r5 = 1
            if (r4 == 0) goto L5a
            r4 = 0
            r7.biReportEvent(r4, r5)
        L5a:
            com.huawei.hms.support.api.transport.DatagramTransport r4 = r7.transport
            com.huawei.hms.support.api.PendingResultImpl$b r6 = new com.huawei.hms.support.api.PendingResultImpl$b
            r6.<init>(r7, r2)
            r4.post(r0, r6)
            java.util.concurrent.CountDownLatch r0 = r7.countLatch     // Catch: java.lang.InterruptedException -> L76
            boolean r8 = r0.await(r8, r10)     // Catch: java.lang.InterruptedException -> L76
            if (r8 != 0) goto L81
            r2.set(r5)     // Catch: java.lang.InterruptedException -> L76
            r8 = 907135004(0x3611c81c, float:2.1723163E-6)
            r7.setResult(r8, r3)     // Catch: java.lang.InterruptedException -> L76
            goto L81
        L76:
            java.lang.String r8 = "awaitOnAnyThread InterruptedException"
            com.huawei.hms.support.log.HMSLog.e(r1, r8)
            r8 = 907135001(0x3611c819, float:2.1723156E-6)
            r7.setResult(r8, r3)
        L81:
            R extends com.huawei.hms.support.api.client.Result r8 = r7.result
            return r8
    }

    @Override
    @java.lang.Deprecated
    public void cancel() {
            r0 = this;
            return
    }

    protected boolean checkApiClient(com.huawei.hms.support.api.client.ApiClient r1) {
            r0 = this;
            r1 = 1
            return r1
    }

    protected java.lang.Class<T> getResponseType() {
            r2 = this;
            java.lang.Class r0 = r2.getClass()
            java.lang.reflect.Type r0 = r0.getGenericSuperclass()
            if (r0 == 0) goto L18
            java.lang.reflect.ParameterizedType r0 = (java.lang.reflect.ParameterizedType) r0
            java.lang.reflect.Type[] r0 = r0.getActualTypeArguments()
            r1 = 1
            r0 = r0[r1]
            if (r0 == 0) goto L18
            java.lang.Class r0 = (java.lang.Class) r0
            return r0
        L18:
            r0 = 0
            return r0
    }

    @Override
    @java.lang.Deprecated
    public boolean isCanceled() {
            r1 = this;
            r0 = 0
            return r0
    }

    public abstract R onComplete(T r1);

    protected R onError(int r4) {
            r3 = this;
            java.lang.Class r0 = r3.getClass()
            java.lang.reflect.Type r0 = r0.getGenericSuperclass()
            r1 = 0
            if (r0 == 0) goto L15
            java.lang.reflect.ParameterizedType r0 = (java.lang.reflect.ParameterizedType) r0
            java.lang.reflect.Type[] r0 = r0.getActualTypeArguments()
            r2 = 0
            r0 = r0[r2]
            goto L16
        L15:
            r0 = r1
        L16:
            if (r0 == 0) goto L1d
            java.lang.Class r0 = com.huawei.hms.support.gentyref.GenericTypeReflector.getType(r0)
            goto L1e
        L1d:
            r0 = r1
        L1e:
            if (r0 == 0) goto L4d
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Exception -> L31
            com.huawei.hms.support.api.client.Result r0 = (com.huawei.hms.support.api.client.Result) r0     // Catch: java.lang.Exception -> L31
            r3.result = r0     // Catch: java.lang.Exception -> L31
            com.huawei.hms.support.api.client.Status r2 = new com.huawei.hms.support.api.client.Status     // Catch: java.lang.Exception -> L31
            r2.<init>(r4)     // Catch: java.lang.Exception -> L31
            r0.setStatus(r2)     // Catch: java.lang.Exception -> L31
            goto L4d
        L31:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "on Error:"
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "PendingResultImpl"
            com.huawei.hms.support.log.HMSLog.e(r0, r4)
            return r1
        L4d:
            R extends com.huawei.hms.support.api.client.Result r4 = r3.result
            return r4
    }

    @Override
    public final void setResultCallback(android.os.Looper r6, com.huawei.hms.support.api.client.ResultCallback<R> r7) {
            r5 = this;
            java.lang.String r0 = "PendingResultImpl"
            java.lang.String r1 = "setResultCallback"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            com.huawei.hms.support.api.PendingResultImpl$d r1 = new com.huawei.hms.support.api.PendingResultImpl$d
            if (r6 != 0) goto Lf
            android.os.Looper r6 = android.os.Looper.myLooper()
        Lf:
            r1.<init>(r6)
            java.lang.ref.WeakReference<com.huawei.hms.support.api.client.ApiClient> r6 = r5.api
            r2 = 0
            r3 = 907135003(0x3611c81b, float:2.172316E-6)
            if (r6 != 0) goto L23
            java.lang.String r6 = "api is null"
            com.huawei.hms.support.log.HMSLog.e(r0, r6)
            r5.setResult(r3, r2)
            return
        L23:
            java.lang.Object r6 = r6.get()
            com.huawei.hms.support.api.client.ApiClient r6 = (com.huawei.hms.support.api.client.ApiClient) r6
            boolean r4 = r5.checkApiClient(r6)
            if (r4 != 0) goto L3d
            java.lang.String r6 = "client is invalid"
            com.huawei.hms.support.log.HMSLog.e(r0, r6)
            r5.setResult(r3, r2)
            R extends com.huawei.hms.support.api.client.Result r6 = r5.result
            r1.a(r7, r6)
            return
        L3d:
            boolean r0 = r5.isNeedReport
            if (r0 == 0) goto L46
            r0 = 0
            r2 = 1
            r5.biReportEvent(r0, r2)
        L46:
            com.huawei.hms.support.api.transport.DatagramTransport r0 = r5.transport
            com.huawei.hms.support.api.PendingResultImpl$c r2 = new com.huawei.hms.support.api.PendingResultImpl$c
            r2.<init>(r5, r1, r7)
            r0.post(r6, r2)
            return
    }

    @Override
    public void setResultCallback(com.huawei.hms.support.api.client.ResultCallback<R> r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.huawei.hms.adapter.BaseAdapter.BaseRequestResultCallback
            r0 = r0 ^ 1
            r1.isNeedReport = r0
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r1.setResultCallback(r0, r2)
            return
    }

    @Override
    @java.lang.Deprecated
    public void setResultCallback(com.huawei.hms.support.api.client.ResultCallback<R> r1, long r2, java.util.concurrent.TimeUnit r4) {
            r0 = this;
            r0.setResultCallback(r1)
            return
    }
}
