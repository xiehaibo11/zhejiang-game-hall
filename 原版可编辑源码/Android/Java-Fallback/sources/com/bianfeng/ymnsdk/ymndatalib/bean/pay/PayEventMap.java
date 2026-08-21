package com.bianfeng.ymnsdk.ymndatalib.bean.pay;

public class PayEventMap {
    public static volatile com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap payEventMap;
    public java.lang.String customCallMsg;
    public java.lang.String orderNo;
    public java.lang.String requestCustomServerName;
    public java.lang.String requestOrderNotityServerName;
    public java.lang.String requestOrderServerName;
    public long startCallSdkOrderTime;
    public long startCallSdkTime;
    public long startCustomTime;
    public long startNotityTime;
    public long startRequestOrderListTime;
    public long startRequestOrderTime;

    public PayEventMap() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.startRequestOrderTime = r0
            r2.startCallSdkTime = r0
            r2.startNotityTime = r0
            r2.startCustomTime = r0
            r2.startCallSdkOrderTime = r0
            r2.startRequestOrderListTime = r0
            java.lang.String r0 = ""
            r2.requestOrderServerName = r0
            r2.requestOrderNotityServerName = r0
            r2.requestCustomServerName = r0
            r2.customCallMsg = r0
            r2.orderNo = r0
            return
    }

    private java.lang.String checkNull(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            java.lang.String r2 = ""
        L8:
            return r2
    }

    public static com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap getInstance() {
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap.payEventMap
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap> r0 = com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r1 = com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap.payEventMap     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r1 = new com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap.payEventMap = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.pay.PayEventMap.payEventMap
            return r0
    }

    private java.lang.String getOrderNo(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            java.lang.String r2 = r1.orderNo
            return r2
        L9:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L15
            r0.<init>(r2)     // Catch: java.lang.Exception -> L15
            java.lang.String r2 = "orderNo"
            java.lang.String r2 = r0.optString(r2)     // Catch: java.lang.Exception -> L15
            return r2
        L15:
            r2 = move-exception
            java.lang.String r2 = r1.orderNo
            return r2
    }

    private void onPayDataEvent(int r2, java.lang.String r3, java.lang.Long r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, int r8) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils r0 = new com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils
            r0.<init>(r2, r3, r4)
            java.lang.String r2 = r1.checkNull(r7)
            com.bianfeng.ymnsdk.ymndatalib.d r3 = new com.bianfeng.ymnsdk.ymndatalib.d
            r3.<init>(r0, r5, r6, r2)
            com.bianfeng.ymnsdk.ymndatalib.f r2 = com.bianfeng.ymnsdk.ymndatalib.f.a()
            com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent r4 = new com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent
            java.lang.String r5 = "pay"
            r4.<init>(r3, r8, r5)
            java.lang.String r3 = r4.toString()
            r2.a(r3)
            return
    }

    public void payCallSdkEvent() {
            r10 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r10.startCallSdkTime = r0
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            java.lang.String r7 = r10.requestOrderServerName
            java.lang.String r8 = r10.orderNo
            r3 = 0
            java.lang.String r4 = ""
            java.lang.String r6 = ""
            r9 = 20120(0x4e98, float:2.8194E-41)
            r2 = r10
            r2.onPayDataEvent(r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public void payCustomCallEvent(java.lang.Integer r11, java.lang.String r12, java.lang.String r13) {
            r10 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r10.startCustomTime = r0
            r10.requestCustomServerName = r12
            r10.customCallMsg = r13
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            java.lang.String r8 = r10.orderNo
            int r9 = r11.intValue()
            r3 = 0
            java.lang.String r4 = ""
            r2 = r10
            r6 = r13
            r7 = r12
            r2.onPayDataEvent(r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public void payCustomCallEvent(java.lang.Integer r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            r10 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r10.startCustomTime = r0
            r10.requestCustomServerName = r13
            r10.customCallMsg = r14
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            int r9 = r11.intValue()
            r3 = 0
            java.lang.String r4 = ""
            r2 = r10
            r6 = r14
            r7 = r13
            r8 = r12
            r2.onPayDataEvent(r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public void payCustomReturnEvent(java.lang.Integer r9, java.lang.Integer r10, java.lang.String r11) {
            r8 = this;
            int r1 = r10.intValue()
            long r2 = r8.startCustomTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r4 = r8.customCallMsg
            java.lang.String r5 = r8.requestCustomServerName
            java.lang.String r6 = r8.orderNo
            int r7 = r9.intValue()
            r0 = r8
            r2 = r11
            r0.onPayDataEvent(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public void payCustomReturnEvent(java.lang.Integer r9, java.lang.String r10, java.lang.Integer r11, java.lang.String r12) {
            r8 = this;
            int r1 = r11.intValue()
            long r2 = r8.startCustomTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r4 = r8.customCallMsg
            java.lang.String r5 = r8.requestCustomServerName
            int r7 = r9.intValue()
            r0 = r8
            r2 = r12
            r6 = r10
            r0.onPayDataEvent(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public void payCustomReturnEvent(java.lang.Integer r9, java.lang.String r10, java.lang.Integer r11, java.lang.String r12, java.lang.String r13) {
            r8 = this;
            int r1 = r11.intValue()
            long r2 = r8.startCustomTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r5 = r8.requestCustomServerName
            int r7 = r9.intValue()
            r0 = r8
            r2 = r12
            r4 = r13
            r6 = r10
            r0.onPayDataEvent(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public void payRequestNotityEvent(java.lang.String r11) {
            r10 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r10.startNotityTime = r0
            r10.requestOrderNotityServerName = r11
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            java.lang.String r7 = r10.requestOrderNotityServerName
            java.lang.String r8 = r10.orderNo
            r3 = 0
            java.lang.String r4 = ""
            java.lang.String r6 = ""
            r9 = 20140(0x4eac, float:2.8222E-41)
            r2 = r10
            r2.onPayDataEvent(r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public void payRequestNotityEvent(java.lang.String r11, java.lang.String r12) {
            r10 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r10.startNotityTime = r0
            r10.requestOrderNotityServerName = r11
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            java.lang.String r7 = r10.requestOrderNotityServerName
            r3 = 0
            java.lang.String r4 = ""
            java.lang.String r6 = ""
            r9 = 20140(0x4eac, float:2.8222E-41)
            r2 = r10
            r8 = r12
            r2.onPayDataEvent(r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public void payRequestOrderEvent(java.lang.String r11, java.lang.String r12) {
            r10 = this;
            r10.requestOrderServerName = r11
            long r0 = java.lang.System.currentTimeMillis()
            r10.startRequestOrderTime = r0
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            java.lang.String r7 = r10.requestOrderServerName
            r3 = 0
            java.lang.String r4 = ""
            java.lang.String r8 = ""
            r9 = 20001(0x4e21, float:2.8027E-41)
            r2 = r10
            r6 = r12
            r2.onPayDataEvent(r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public void payRequestOrderListSdkEvent() {
            r10 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r10.startRequestOrderListTime = r0
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            java.lang.String r7 = r10.requestOrderServerName
            java.lang.String r8 = r10.orderNo
            r3 = 0
            java.lang.String r4 = ""
            java.lang.String r6 = ""
            r9 = 20135(0x4ea7, float:2.8215E-41)
            r2 = r10
            r2.onPayDataEvent(r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public void payResponseNotityEvent(java.lang.Integer r9, java.lang.String r10) {
            r8 = this;
            int r1 = r9.intValue()
            long r2 = r8.startNotityTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r5 = r8.requestOrderNotityServerName
            java.lang.String r6 = r8.orderNo
            java.lang.String r4 = ""
            r7 = 20150(0x4eb6, float:2.8236E-41)
            r0 = r8
            r2 = r10
            r0.onPayDataEvent(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public void payResponseNotityEvent(java.lang.Integer r9, java.lang.String r10, java.lang.String r11) {
            r8 = this;
            int r1 = r9.intValue()
            long r2 = r8.startNotityTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r5 = r8.requestOrderNotityServerName
            java.lang.String r4 = ""
            r7 = 20150(0x4eb6, float:2.8236E-41)
            r0 = r8
            r2 = r11
            r6 = r10
            r0.onPayDataEvent(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public void payResponseOrderEvent(java.lang.Integer r9, java.lang.String r10, java.lang.String r11) {
            r8 = this;
            r8.orderNo = r11
            int r1 = r9.intValue()
            long r2 = r8.startRequestOrderTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r5 = r8.requestOrderServerName
            java.lang.String r6 = r8.orderNo
            java.lang.String r4 = ""
            r7 = 20110(0x4e8e, float:2.818E-41)
            r0 = r8
            r2 = r10
            r0.onPayDataEvent(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public void payResponseOrderListEvent(java.lang.Integer r9, java.lang.String r10) {
            r8 = this;
            int r1 = r9.intValue()
            long r2 = r8.startRequestOrderListTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r5 = r8.requestOrderServerName
            java.lang.String r6 = r8.orderNo
            java.lang.String r4 = ""
            r7 = 20136(0x4ea8, float:2.8217E-41)
            r0 = r8
            r2 = r10
            r0.onPayDataEvent(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public void paySdkOrderEvent(java.lang.String r11) {
            r10 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r10.startCallSdkOrderTime = r0
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            java.lang.String r7 = r10.requestOrderServerName
            java.lang.String r8 = r10.orderNo
            r3 = 0
            java.lang.String r4 = ""
            r9 = 20115(0x4e93, float:2.8187E-41)
            r2 = r10
            r6 = r11
            r2.onPayDataEvent(r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public void paySdkOrderReturnEvent(java.lang.Integer r9, java.lang.String r10) {
            r8 = this;
            int r1 = r9.intValue()
            long r2 = r8.startCallSdkOrderTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r5 = r8.requestOrderServerName
            java.lang.String r6 = r8.orderNo
            java.lang.String r4 = ""
            r7 = 20116(0x4e94, float:2.8189E-41)
            r0 = r8
            r2 = r10
            r0.onPayDataEvent(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public void paySdkReturnEvent(java.lang.Integer r9, java.lang.String r10) {
            r8 = this;
            java.lang.String r6 = r8.getOrderNo(r10)
            int r1 = r9.intValue()
            long r2 = r8.startCallSdkTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r5 = r8.requestOrderServerName
            java.lang.String r4 = ""
            r7 = 20130(0x4ea2, float:2.8208E-41)
            r0 = r8
            r2 = r10
            r0.onPayDataEvent(r1, r2, r3, r4, r5, r6, r7)
            return
    }
}
