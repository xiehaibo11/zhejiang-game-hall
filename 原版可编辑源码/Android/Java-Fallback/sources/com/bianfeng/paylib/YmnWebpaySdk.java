package com.bianfeng.paylib;

public class YmnWebpaySdk {
    private static com.bianfeng.paylib.YmnWebpaySdk ymnWebpaySdk;
    private boolean isPayWithSdk;
    private android.app.Activity mContext;
    private java.util.Map<java.lang.String, java.lang.String> map;
    private java.lang.String netIpSuccess;
    private com.bianfeng.paylib.action.RequestNetIpCallBack requestNetIpCallBack;
    private com.bianfeng.paylib.ui.WebpaysdkCallback webpaysdkCallback;




    static {
            com.bianfeng.paylib.YmnWebpaySdk r0 = new com.bianfeng.paylib.YmnWebpaySdk
            r0.<init>()
            com.bianfeng.paylib.YmnWebpaySdk.ymnWebpaySdk = r0
            return
    }

    private YmnWebpaySdk() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.netIpSuccess = r0
            com.bianfeng.paylib.YmnWebpaySdk$1 r0 = new com.bianfeng.paylib.YmnWebpaySdk$1
            r0.<init>(r2)
            r2.webpaysdkCallback = r0
            com.bianfeng.paylib.YmnWebpaySdk$2 r0 = new com.bianfeng.paylib.YmnWebpaySdk$2
            r0.<init>(r2)
            r2.requestNetIpCallBack = r0
            r0 = 1
            r2.isPayWithSdk = r0
            com.bianfeng.paylib.action.RequestNetIpAction r0 = com.bianfeng.paylib.action.RequestNetIpAction.getInstance()
            com.bianfeng.paylib.action.RequestNetIpCallBack r1 = r2.requestNetIpCallBack
            com.bianfeng.paylib.action.RequestNetIpAction r0 = r0.setCallBack(r1)
            r0.GetNetIp()
            return
    }

    static void access$000(com.bianfeng.paylib.YmnWebpaySdk r0, java.lang.String r1) {
            r0.onNext(r1)
            return
    }

    static android.app.Activity access$100(com.bianfeng.paylib.YmnWebpaySdk r0) {
            android.app.Activity r0 = r0.mContext
            return r0
    }

    static java.lang.String access$202(com.bianfeng.paylib.YmnWebpaySdk r0, java.lang.String r1) {
            r0.netIpSuccess = r1
            return r1
    }

    static void access$300(com.bianfeng.paylib.YmnWebpaySdk r0, java.util.Map r1) {
            r0.toPay(r1)
            return
    }

    public static com.bianfeng.paylib.YmnWebpaySdk getInstance() {
            com.bianfeng.paylib.YmnWebpaySdk r0 = com.bianfeng.paylib.YmnWebpaySdk.ymnWebpaySdk
            return r0
    }

    private java.lang.String joinUrl(java.util.Map<java.lang.String, java.lang.String> r5) {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        Ld:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L3d
            java.lang.Object r1 = r5.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            java.lang.String r2 = (java.lang.String) r2
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L26
            goto Ld
        L26:
            java.lang.String r3 = "&"
            r0.append(r3)
            java.lang.Object r1 = r1.getKey()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            java.lang.String r1 = "="
            r0.append(r1)
            r0.append(r2)
            goto Ld
        L3d:
            java.lang.String r5 = r0.toString()
            return r5
    }

    private void onNext(java.lang.String r4) {
            r3 = this;
            boolean r0 = r3.isPayWithSdk
            if (r0 != 0) goto L1a
            java.lang.String r0 = r3.netIpSuccess
            java.lang.String r1 = "true"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 != 0) goto L1a
            com.bianfeng.utilslib.ToastUtils r4 = com.bianfeng.utilslib.UtilsSdk.getToast()
            android.app.Activity r0 = r3.mContext
            java.lang.String r1 = "支付失败，网络异常"
            r4.show(r0, r1)
            return
        L1a:
            com.bianfeng.paylib.action.RequestOrderAction r0 = new com.bianfeng.paylib.action.RequestOrderAction
            android.app.Activity r1 = r3.mContext
            r0.<init>(r1)
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.map
            java.lang.String r2 = "plugin_id"
            r1.put(r2, r4)
            java.util.Map<java.lang.String, java.lang.String> r4 = r3.map
            r0.putReqData(r4)
            com.bianfeng.paylib.YmnWebpaySdk$3 r4 = new com.bianfeng.paylib.YmnWebpaySdk$3
            r4.<init>(r3)
            r0.addObserver(r4)
            r0.actionStart()
            return
    }

    private void toPay(java.util.Map<java.lang.String, java.lang.String> r9) {
            r8 = this;
            java.lang.String r0 = "支付异常，请联系客服 1"
            java.lang.String r1 = "client_type"
            java.lang.String r2 = "type_fail"
            java.lang.String r3 = "下单响应"
            java.lang.String r4 = "type_request_order"
            com.bianfeng.utilslib.Logger r5 = com.bianfeng.utilslib.Logger.getInstance()     // Catch: java.lang.Exception -> L98
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L98
            r6.<init>()     // Catch: java.lang.Exception -> L98
            java.lang.String r7 = "支付信息-->"
            r6.append(r7)     // Catch: java.lang.Exception -> L98
            com.bianfeng.thridlibrary.GsonUtils r7 = com.bianfeng.thridlibrary.GsonUtils.getInstance()     // Catch: java.lang.Exception -> L98
            java.lang.String r7 = r7.toJson(r9)     // Catch: java.lang.Exception -> L98
            r6.append(r7)     // Catch: java.lang.Exception -> L98
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L98
            r5.i(r6)     // Catch: java.lang.Exception -> L98
            java.lang.String r5 = "client_callback"
            java.lang.Object r9 = r9.get(r5)     // Catch: java.lang.Exception -> L98
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Exception -> L98
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L98
            r5.<init>(r9)     // Catch: java.lang.Exception -> L98
            r6 = -1
            boolean r7 = r5.has(r1)     // Catch: java.lang.Exception -> L98
            if (r7 == 0) goto L42
            int r6 = r5.getInt(r1)     // Catch: java.lang.Exception -> L98
        L42:
            if (r6 != 0) goto L4a
            android.app.Activity r0 = r8.mContext     // Catch: java.lang.Exception -> L98
            com.bianfeng.paylib.utils.WxPayUtils.pay(r0, r9)     // Catch: java.lang.Exception -> L98
            goto Lad
        L4a:
            r1 = 1
            if (r1 != r6) goto L63
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()     // Catch: java.lang.Exception -> L98
            java.lang.Class<com.bianfeng.paylib.entity.YmnWxWebpayEntity> r1 = com.bianfeng.paylib.entity.YmnWxWebpayEntity.class
            java.lang.Object r9 = r0.fromJson(r9, r1)     // Catch: java.lang.Exception -> L98
            com.bianfeng.paylib.entity.YmnWxWebpayEntity r9 = (com.bianfeng.paylib.entity.YmnWxWebpayEntity) r9     // Catch: java.lang.Exception -> L98
            com.bianfeng.paylib.ui.WebpaysdkApi r0 = com.bianfeng.paylib.ui.WebpaysdkApi.getInstance()     // Catch: java.lang.Exception -> L98
            android.app.Activity r1 = r8.mContext     // Catch: java.lang.Exception -> L98
            r0.startWxWebpay(r1, r9)     // Catch: java.lang.Exception -> L98
            goto Lad
        L63:
            r1 = 2
            if (r1 != r6) goto L6f
            r8.payCallback(r4, r3)     // Catch: java.lang.Exception -> L98
            android.app.Activity r0 = r8.mContext     // Catch: java.lang.Exception -> L98
            com.bianfeng.paylib.utils.AliPayUtils.pay(r0, r9)     // Catch: java.lang.Exception -> L98
            goto Lad
        L6f:
            r1 = 3
            if (r1 != r6) goto L88
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()     // Catch: java.lang.Exception -> L98
            java.lang.Class<com.bianfeng.paylib.entity.YmnAliWebpayEntity> r1 = com.bianfeng.paylib.entity.YmnAliWebpayEntity.class
            java.lang.Object r9 = r0.fromJson(r9, r1)     // Catch: java.lang.Exception -> L98
            com.bianfeng.paylib.entity.YmnAliWebpayEntity r9 = (com.bianfeng.paylib.entity.YmnAliWebpayEntity) r9     // Catch: java.lang.Exception -> L98
            com.bianfeng.paylib.ui.WebpaysdkApi r0 = com.bianfeng.paylib.ui.WebpaysdkApi.getInstance()     // Catch: java.lang.Exception -> L98
            android.app.Activity r1 = r8.mContext     // Catch: java.lang.Exception -> L98
            r0.startAliWebpay(r1, r9)     // Catch: java.lang.Exception -> L98
            goto Lad
        L88:
            com.bianfeng.utilslib.ToastUtils r9 = com.bianfeng.utilslib.UtilsSdk.getToast()     // Catch: java.lang.Exception -> L98
            android.app.Activity r1 = r8.mContext     // Catch: java.lang.Exception -> L98
            r9.show(r1, r0)     // Catch: java.lang.Exception -> L98
            r8.payCallback(r2, r0)     // Catch: java.lang.Exception -> L98
            r8.payCallback(r4, r3)     // Catch: java.lang.Exception -> L98
            goto Lad
        L98:
            r9 = move-exception
            r9.printStackTrace()
            java.lang.String r9 = "支付异常，请联系客服 2"
            r8.payCallback(r2, r9)
            r8.payCallback(r4, r3)
            com.bianfeng.utilslib.ToastUtils r0 = com.bianfeng.utilslib.UtilsSdk.getToast()
            android.app.Activity r1 = r8.mContext
            r0.show(r1, r9)
        Lad:
            return
    }

    public void init(android.app.Activity r1) {
            r0 = this;
            r0.mContext = r1
            return
    }

    @java.lang.Deprecated
    public void pay(java.util.Map<java.lang.String, java.lang.String> r4) {
            r3 = this;
            java.util.Map r0 = com.bianfeng.paylib.utils.PayExtMapUtils.updataOrder(r4)
            r3.map = r0
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "order:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.i(r4)
            com.bianfeng.paylib.ui.WebpaysdkApi r4 = com.bianfeng.paylib.ui.WebpaysdkApi.getInstance()
            com.bianfeng.paylib.ui.WebpaysdkCallback r0 = r3.webpaysdkCallback
            r4.setCallback(r0)
            com.bianfeng.paylib.ui.WebpaysdkApi r4 = com.bianfeng.paylib.ui.WebpaysdkApi.getInstance()
            android.app.Activity r0 = r3.mContext
            r4.startPayment(r0)
            return
    }

    public void payCallback(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "type"
            r0.put(r1, r3)
            java.lang.String r3 = "msg"
            r0.put(r3, r4)
            com.bianfeng.utilslib.reflex.ReflexCallbackUtils r3 = com.bianfeng.utilslib.UtilsSdk.getReflexCall()
            com.bianfeng.utilslib.reflex.ClassNameSetUtils r4 = com.bianfeng.utilslib.UtilsSdk.getClassNameSet()
            java.lang.String r4 = r4.gePayCallback()
            r3.onCallWithObject(r4, r0)
            return
    }

    public void payWeb(java.util.Map<java.lang.String, java.lang.String> r4) {
            r3 = this;
            java.util.Map r0 = com.bianfeng.paylib.utils.PayExtMapUtils.updataOrder(r4)
            r3.map = r0
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "payWeb order:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            com.bianfeng.paylib.ui.WebpaysdkApi r0 = com.bianfeng.paylib.ui.WebpaysdkApi.getInstance()
            com.bianfeng.paylib.ui.WebpaysdkCallback r1 = r3.webpaysdkCallback
            r0.setCallback(r1)
            java.lang.String r4 = r3.joinUrl(r4)
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "payWeb data:"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            com.bianfeng.paylib.ui.WebpaysdkApi r0 = com.bianfeng.paylib.ui.WebpaysdkApi.getInstance()
            android.app.Activity r1 = r3.mContext
            r0.startPaymentWeb(r1, r4)
            return
    }

    public com.bianfeng.paylib.YmnWebpaySdk setPayWithWeb() {
            r1 = this;
            r0 = 0
            r1.isPayWithSdk = r0
            return r1
    }
}
