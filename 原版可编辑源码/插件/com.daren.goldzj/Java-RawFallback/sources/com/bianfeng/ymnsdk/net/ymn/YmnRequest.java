package com.bianfeng.ymnsdk.net.ymn;

public abstract class YmnRequest extends com.bianfeng.netlibsdk.Request<java.lang.String> {
    protected static final java.lang.String PROTOCOL_CHARSET = "utf-8";
    private com.bianfeng.ymnsdk.net.ymn.YmnRequest.a listener;
    protected java.lang.String pContent;

    public interface a {
        void a(java.lang.String r1);

        void b(java.lang.String r1);
    }

    public YmnRequest() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.util.Map<java.lang.String, java.lang.String> addHeaders() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void deliverError(com.bianfeng.netlibsdk.utils.NetException r5) {
            r4 = this;
            com.bianfeng.ymnsdk.net.ymn.YmnRequest$a r0 = r4.listener
            if (r0 != 0) goto L5
            return
        L5:
            com.bianfeng.netlibsdk.NetworkResponse r1 = r5.response
            if (r1 == 0) goto L35
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            int r2 = r1.statusCode
            r5.append(r2)
            java.lang.String r2 = "|"
            r5.append(r2)
            byte[] r3 = r1.data
            r5.append(r3)
            r5.append(r2)
            java.util.List r3 = r1.allHeaders
            r5.append(r3)
            r5.append(r2)
            boolean r1 = r1.notModified
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            r0.a(r5)
            goto L3c
        L35:
            java.lang.String r5 = r5.getMessage()
            r0.a(r5)
        L3c:
            return
    }

    protected void deliverResponse(java.lang.Object r1) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            r0.deliverResponse(r1)
            return
    }

    protected void deliverResponse(java.lang.String r2) {
            r1 = this;
            com.bianfeng.ymnsdk.net.ymn.YmnRequest$a r0 = r1.listener
            if (r0 != 0) goto L5
            return
        L5:
            r0.b(r2)
            return
    }

    protected java.lang.Object formatType(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto Le
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> Le
            r0.<init>(r1)     // Catch: java.lang.Exception -> Le
            return r0
        Le:
            return r3
    }

    protected java.lang.String formatUrl(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "ymn"
            java.lang.String r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.getHost(r0)
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            r0 = 1
            java.lang.String r2 = "v1"
            r1[r0] = r2
            r0 = 2
            r1[r0] = r4
            java.lang.String r4 = "%s/%s/%s"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            return r4
    }

    public java.lang.String getRequestBody() {
            r1 = this;
            java.lang.String r0 = r1.pContent
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.pContent
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public abstract org.json.JSONObject onPrepareData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r1, java.lang.Object... r2) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException;

    protected com.bianfeng.netlibsdk.Response<java.lang.String> parseNetworkResponse(com.bianfeng.netlibsdk.NetworkResponse r5) throws com.bianfeng.netlibsdk.utils.NetException {
            r4 = this;
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L30
            byte[] r1 = r5.data     // Catch: java.lang.Exception -> L30
            java.util.Map r2 = r5.headers     // Catch: java.lang.Exception -> L30
            java.lang.String r3 = "utf-8"
            java.lang.String r2 = com.bianfeng.netlibsdk.HttpHeaderParser.parseCharset(r2, r3)     // Catch: java.lang.Exception -> L30
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.Class<com.bianfeng.ymnsdk.gongxiang.k> r1 = com.bianfeng.ymnsdk.gongxiang.k.class
            java.lang.Object r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.fromJson(r0, r1)     // Catch: java.lang.Exception -> L30
            com.bianfeng.ymnsdk.gongxiang.k r0 = (com.bianfeng.ymnsdk.gongxiang.k) r0     // Catch: java.lang.Exception -> L30
            boolean r1 = r0.c()     // Catch: java.lang.Exception -> L30
            if (r1 == 0) goto L26
            java.lang.String r5 = r0.b()     // Catch: java.lang.Exception -> L30
            com.bianfeng.netlibsdk.Response r5 = com.bianfeng.netlibsdk.Response.success(r5)     // Catch: java.lang.Exception -> L30
            return r5
        L26:
            com.bianfeng.netlibsdk.utils.NetException r0 = new com.bianfeng.netlibsdk.utils.NetException     // Catch: java.lang.Exception -> L30
            r0.<init>(r5)     // Catch: java.lang.Exception -> L30
            com.bianfeng.netlibsdk.Response r5 = com.bianfeng.netlibsdk.Response.error(r0)     // Catch: java.lang.Exception -> L30
            return r5
        L30:
            r5 = move-exception
            com.bianfeng.netlibsdk.utils.NetException r0 = new com.bianfeng.netlibsdk.utils.NetException
            r0.<init>(r5)
            throw r0
    }

    protected void putBasicData(org.json.JSONObject r5) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r4 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> Le4
            java.lang.String r1 = "appid"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = r0.getAppContext()     // Catch: java.lang.Exception -> Le4
            int r2 = r2.getAppId()     // Catch: java.lang.Exception -> Le4
            r5.put(r1, r2)     // Catch: java.lang.Exception -> Le4
            java.lang.String r1 = "channel"
            java.lang.String r2 = r0.getChannelId()     // Catch: java.lang.Exception -> Le4
            r5.put(r1, r2)     // Catch: java.lang.Exception -> Le4
            java.lang.String r1 = "package_id"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = r0.getAppContext()     // Catch: java.lang.Exception -> Le4
            int r2 = r2.getIdentify_id()     // Catch: java.lang.Exception -> Le4
            r5.put(r1, r2)     // Catch: java.lang.Exception -> Le4
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Le4
            r1.<init>()     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "df_ver"
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r3 = r0.getPlatformUtils()     // Catch: java.lang.Exception -> Le4
            java.lang.String r3 = r3.getDatafun_ver()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "app_key"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r3 = r0.getAppContext()     // Catch: java.lang.Exception -> Le4
            int r3 = r3.getAppId()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "group_id"
            java.lang.String r3 = r0.getGroupId()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "device_id"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le4
            java.lang.String r3 = r3.getDeviceId()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "version_code"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r3 = r0.getAppContext()     // Catch: java.lang.Exception -> Le4
            java.lang.String r3 = r3.getVerCode()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "version_name"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r3 = r0.getAppContext()     // Catch: java.lang.Exception -> Le4
            java.lang.String r3 = r3.getVerName()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "device_mobile"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le4
            java.lang.String r3 = r3.getDeviceModel()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "device_network"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le4
            java.lang.String r3 = r3.getNetChannelStr()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "device_os"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le4
            java.lang.String r3 = r3.getDeviceOS()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "device_os_version"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le4
            java.lang.String r3 = r3.getOsVersion()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "device_pixel"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le4
            java.lang.String r3 = r3.getDevicePixel()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "device_type"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r3 = r0.getAppContext()     // Catch: java.lang.Exception -> Le4
            java.lang.String r3 = r3.getDeviceType()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = "device_version_code"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r0 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le4
            java.lang.String r0 = r0.getDeviceVersionCode()     // Catch: java.lang.Exception -> Le4
            r1.put(r2, r0)     // Catch: java.lang.Exception -> Le4
            java.lang.String r0 = "transactionId"
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r2 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> Le4
            java.lang.String r2 = r2.getInitTrace()     // Catch: java.lang.Exception -> Le4
            r1.put(r0, r2)     // Catch: java.lang.Exception -> Le4
            java.lang.String r0 = "base"
            r5.put(r0, r1)     // Catch: java.lang.Exception -> Le4
            return
        Le4:
            r5 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r0.<init>(r5)
            throw r0
    }

    public void putReqData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r1, java.lang.Object... r2) {
            r0 = this;
            org.json.JSONObject r1 = r0.onPrepareData(r1, r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            if (r1 == 0) goto L2a
            r0.putBasicData(r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            java.lang.String r1 = r1.toString()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            r0.pContent = r1     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            r1.<init>()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            java.lang.String r2 = "测试---"
            r1.append(r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            java.lang.String r2 = r0.pContent     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            r1.append(r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            java.lang.String r1 = r1.toString()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            com.bianfeng.ymnsdk.util.Logger.i(r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            goto L2a
        L26:
            r1 = move-exception
            r1.printStackTrace()
        L2a:
            return
    }

    public void setListener(com.bianfeng.ymnsdk.net.ymn.YmnRequest.a r1) {
            r0 = this;
            r0.listener = r1
            return
    }
}
