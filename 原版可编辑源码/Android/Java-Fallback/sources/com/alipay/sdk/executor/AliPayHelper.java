package com.alipay.sdk.executor;

public class AliPayHelper implements android.os.Handler.Callback {
    public static final int MSG_PROCESS_ERROR = 1;
    public static final int MSG_PROCESS_PAY_RESULT = 0;
    private static final java.lang.String TAG = "AliPayHelper";
    public static boolean onPaying;
    private static java.util.Map<java.lang.String, java.lang.String> resultStatus;
    private android.app.Activity activity;
    private android.os.Handler handler;
    private com.alipay.sdk.OnPayListener listener;
    private java.lang.String orderInfo;



    static {
            com.alipay.sdk.executor.AliPayHelper$1 r0 = new com.alipay.sdk.executor.AliPayHelper$1
            r0.<init>()
            com.alipay.sdk.executor.AliPayHelper.resultStatus = r0
            return
    }

    public AliPayHelper(android.app.Activity r1) {
            r0 = this;
            r0.<init>()
            r0.activity = r1
            android.os.Handler r1 = new android.os.Handler
            r1.<init>(r0)
            r0.handler = r1
            return
    }

    static boolean access$000(com.alipay.sdk.executor.AliPayHelper r0, java.lang.String r1) {
            boolean r0 = r0.onPay(r1)
            return r0
    }

    private void closeProgress() {
            r0 = this;
            return
    }

    private boolean onPay(java.lang.String r5) {
            r4 = this;
            r0 = 0
            com.alipay.sdk.executor.AliPayHelper.onPaying = r0
            r1 = 1
            com.alipay.sdk.app.PayTask r2 = new com.alipay.sdk.app.PayTask     // Catch: java.lang.Exception -> L13
            android.app.Activity r3 = r4.activity     // Catch: java.lang.Exception -> L13
            r2.<init>(r3)     // Catch: java.lang.Exception -> L13
            java.lang.String r5 = r2.pay(r5, r1)     // Catch: java.lang.Exception -> L13
            r4.sendMsgOnFinishPay(r0, r5)     // Catch: java.lang.Exception -> L13
            return r1
        L13:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.String r2 = r5.getMessage()
            if (r2 == 0) goto L25
            java.lang.String r5 = r5.getMessage()
            r4.sendMsgOnFinishPay(r1, r5)
            goto L2a
        L25:
            java.lang.String r5 = "调用支付宝服务失败"
            r4.sendMsgOnFinishPay(r1, r5)
        L2a:
            return r0
    }

    private void sendMsgOnFinishPay(int r2, java.lang.String r3) {
            r1 = this;
            android.os.Handler r0 = r1.handler     // Catch: java.lang.Exception -> Lc
            android.os.Message r2 = r0.obtainMessage(r2)     // Catch: java.lang.Exception -> Lc
            r2.obj = r3     // Catch: java.lang.Exception -> Lc
            r2.sendToTarget()     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r2 = move-exception
            r2.printStackTrace()
        L10:
            return
    }

    private int toInt(java.lang.String r1) {
            r0 = this;
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L5
            return r1
        L5:
            r1 = move-exception
            r1.printStackTrace()
            r1 = -1
            return r1
    }

    @Override
    public boolean handleMessage(android.os.Message r4) {
            r3 = this;
            r3.closeProgress()
            java.lang.Object r0 = r4.obj
            java.lang.String r0 = (java.lang.String) r0
            int r4 = r4.what
            r1 = 1
            if (r4 == 0) goto L17
            if (r4 == r1) goto Lf
            goto L6f
        Lf:
            com.alipay.sdk.OnPayListener r4 = r3.listener
            r1 = 150(0x96, float:2.1E-43)
            r4.onFailure(r1, r0)
            goto L6f
        L17:
            com.alipay.sdk.executor.AlipayResult r4 = new com.alipay.sdk.executor.AlipayResult
            r4.<init>(r0)
            java.lang.String r4 = r4.getResultStatus()
            int r0 = com.alipay.sdk.executor.AlipayRsa.checkSign(r0)
            if (r0 != r1) goto L38
            com.alipay.sdk.OnPayListener r4 = r3.listener
            java.util.Map<java.lang.String, java.lang.String> r1 = com.alipay.sdk.executor.AliPayHelper.resultStatus
            java.lang.String r2 = java.lang.String.valueOf(r0)
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            r4.onFailure(r0, r1)
            goto L6f
        L38:
            java.lang.String r0 = "9000"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L48
            com.alipay.sdk.OnPayListener r4 = r3.listener
            java.lang.String r0 = r3.orderInfo
            r4.onSuccess(r0)
            goto L6f
        L48:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "pay fail, code is "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AliPayHelper"
            android.util.Log.w(r1, r0)
            com.alipay.sdk.OnPayListener r0 = r3.listener
            int r1 = r3.toInt(r4)
            java.util.Map<java.lang.String, java.lang.String> r2 = com.alipay.sdk.executor.AliPayHelper.resultStatus
            java.lang.Object r4 = r2.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            r0.onFailure(r1, r4)
        L6f:
            r4 = 0
            return r4
    }

    public void start(java.lang.String r2, com.alipay.sdk.OnPayListener r3) {
            r1 = this;
            boolean r0 = com.alipay.sdk.executor.AliPayHelper.onPaying
            if (r0 == 0) goto Lc
            java.lang.String r2 = "AliPayHelper"
            java.lang.String r3 = "ali pay is running"
            android.util.Log.w(r2, r3)
            return
        Lc:
            r0 = 1
            com.alipay.sdk.executor.AliPayHelper.onPaying = r0
            r1.orderInfo = r2
            r1.listener = r3
            java.lang.Thread r3 = new java.lang.Thread
            com.alipay.sdk.executor.AliPayHelper$2 r0 = new com.alipay.sdk.executor.AliPayHelper$2
            r0.<init>(r1, r2)
            r3.<init>(r0)
            r3.start()
            return
    }
}
