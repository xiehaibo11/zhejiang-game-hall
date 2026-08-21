package com.bianfeng.paylib.alipaysdk.executor;

public class AliPayHelper implements android.os.Handler.Callback {
    public static final int MSG_PROCESS_ERROR = 1;
    public static final int MSG_PROCESS_PAY_RESULT = 0;
    private static final java.lang.String TAG = "AliPayHelper";
    public static boolean onPaying;
    private static java.util.Map<java.lang.String, java.lang.String> resultStatus;
    private android.app.Activity activity;
    private android.os.Handler handler;
    private com.bianfeng.paylib.alipaysdk.OnPayListener listener;
    private java.lang.String orderInfo;



    static {
            com.bianfeng.paylib.alipaysdk.executor.AliPayHelper$1 r0 = new com.bianfeng.paylib.alipaysdk.executor.AliPayHelper$1
            r0.<init>()
            com.bianfeng.paylib.alipaysdk.executor.AliPayHelper.resultStatus = r0
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

    static boolean access$000(com.bianfeng.paylib.alipaysdk.executor.AliPayHelper r0, java.lang.String r1) {
            boolean r0 = r0.onPay(r1)
            return r0
    }

    private void closeProgress() {
            r0 = this;
            return
    }

    private boolean onPay(java.lang.String r1) {
            r0 = this;
            r1 = 0
            com.bianfeng.paylib.alipaysdk.executor.AliPayHelper.onPaying = r1
            r1 = 1
            return r1
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
            goto L71
        Lf:
            com.bianfeng.paylib.alipaysdk.OnPayListener r4 = r3.listener
            r1 = 150(0x96, float:2.1E-43)
            r4.onFailure(r1, r0)
            goto L71
        L17:
            com.bianfeng.paylib.alipaysdk.executor.AlipayResult r4 = new com.bianfeng.paylib.alipaysdk.executor.AlipayResult
            r4.<init>(r0)
            java.lang.String r4 = r4.getResultStatus()
            int r0 = com.bianfeng.paylib.alipaysdk.executor.AlipayRsa.checkSign(r0)
            if (r0 != r1) goto L38
            com.bianfeng.paylib.alipaysdk.OnPayListener r4 = r3.listener
            java.util.Map<java.lang.String, java.lang.String> r1 = com.bianfeng.paylib.alipaysdk.executor.AliPayHelper.resultStatus
            java.lang.String r2 = java.lang.String.valueOf(r0)
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            r4.onFailure(r0, r1)
            goto L71
        L38:
            java.lang.String r0 = "9000"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L48
            com.bianfeng.paylib.alipaysdk.OnPayListener r4 = r3.listener
            java.lang.String r0 = r3.orderInfo
            r4.onSuccess(r0)
            goto L71
        L48:
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "pay fail, code is "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.e(r1)
            com.bianfeng.paylib.alipaysdk.OnPayListener r0 = r3.listener
            int r1 = r3.toInt(r4)
            java.util.Map<java.lang.String, java.lang.String> r2 = com.bianfeng.paylib.alipaysdk.executor.AliPayHelper.resultStatus
            java.lang.Object r4 = r2.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            r0.onFailure(r1, r4)
        L71:
            r4 = 0
            return r4
    }

    public void start(java.lang.String r2, com.bianfeng.paylib.alipaysdk.OnPayListener r3) {
            r1 = this;
            boolean r0 = com.bianfeng.paylib.alipaysdk.executor.AliPayHelper.onPaying
            if (r0 == 0) goto Le
            com.bianfeng.utilslib.Logger r2 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r3 = "ali pay is running"
            r2.e(r3)
            return
        Le:
            r0 = 1
            com.bianfeng.paylib.alipaysdk.executor.AliPayHelper.onPaying = r0
            r1.orderInfo = r2
            r1.listener = r3
            java.lang.Thread r3 = new java.lang.Thread
            com.bianfeng.paylib.alipaysdk.executor.AliPayHelper$2 r0 = new com.bianfeng.paylib.alipaysdk.executor.AliPayHelper$2
            r0.<init>(r1, r2)
            r3.<init>(r0)
            r3.start()
            return
    }
}
