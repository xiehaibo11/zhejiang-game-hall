package com.bianfeng.ymnsdk.net.ymn;

public abstract class YmnRequest extends com.bianfeng.netlibsdk.Request<java.lang.String> {
    protected static final java.lang.String PROTOCOL_CHARSET = "utf-8";
    private com.bianfeng.ymnsdk.net.ymn.YmnRequest.a listener;
    protected java.lang.String pContent;

    public interface a {
        void onFail(java.lang.String r1);

        void onSuccess(java.lang.String r1);
    }

    public YmnRequest() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> addHeaders() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void deliverError(com.bianfeng.netlibsdk.utils.NetException r6) {
            r5 = this;
            com.bianfeng.ymnsdk.net.ymn.YmnRequest$a r0 = r5.listener
            if (r0 != 0) goto L5
            return
        L5:
            com.bianfeng.netlibsdk.NetworkResponse r1 = r6.response
            if (r1 == 0) goto L39
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r3 = r1.statusCode
            r2.append(r3)
            java.lang.String r3 = "|"
            r2.append(r3)
            byte[] r4 = r1.data
            java.lang.String r4 = java.util.Arrays.toString(r4)
            r2.append(r4)
            r2.append(r3)
            java.util.List<com.bianfeng.netlibsdk.Header> r4 = r1.allHeaders
            r2.append(r4)
            r2.append(r3)
            boolean r3 = r1.notModified
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.onFail(r2)
            goto L40
        L39:
            java.lang.String r2 = r6.getMessage()
            r0.onFail(r2)
        L40:
            return
    }

    @Override
    protected void deliverResponse(java.lang.String r1) {
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
            r0.onSuccess(r2)
            return
    }

    protected java.lang.Object formatType(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L10
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> Le
            java.lang.String r1 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> Le
            r0.<init>(r1)     // Catch: java.lang.Exception -> Le
            return r0
        Le:
            r0 = move-exception
            return r3
        L10:
            return r3
    }

    protected java.lang.String formatUrl(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = "ymn"
            java.lang.String r0 = com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.getHost(r0)
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            r2 = 1
            java.lang.String r3 = "v1"
            r1[r2] = r3
            r2 = 2
            r1[r2] = r5
            java.lang.String r2 = "%s/%s/%s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            return r1
    }

    @Override
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

    @Override
    protected com.bianfeng.netlibsdk.Response<java.lang.String> parseNetworkResponse(com.bianfeng.netlibsdk.NetworkResponse r5) throws com.bianfeng.netlibsdk.utils.NetException {
            r4 = this;
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L30
            byte[] r1 = r5.data     // Catch: java.lang.Exception -> L30
            java.util.Map<java.lang.String, java.lang.String> r2 = r5.headers     // Catch: java.lang.Exception -> L30
            java.lang.String r3 = "utf-8"
            java.lang.String r2 = com.bianfeng.netlibsdk.HttpHeaderParser.parseCharset(r2, r3)     // Catch: java.lang.Exception -> L30
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.Class<com.bianfeng.ymnsdk.gongxiang.k> r1 = com.bianfeng.ymnsdk.gongxiang.k.class
            java.lang.Object r1 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.fromJson(r0, r1)     // Catch: java.lang.Exception -> L30
            com.bianfeng.ymnsdk.gongxiang.k r1 = (com.bianfeng.ymnsdk.gongxiang.k) r1     // Catch: java.lang.Exception -> L30
            boolean r2 = r1.c()     // Catch: java.lang.Exception -> L30
            if (r2 == 0) goto L26
            java.lang.String r2 = r1.b()     // Catch: java.lang.Exception -> L30
            com.bianfeng.netlibsdk.Response r2 = com.bianfeng.netlibsdk.Response.success(r2)     // Catch: java.lang.Exception -> L30
            return r2
        L26:
            com.bianfeng.netlibsdk.utils.NetException r2 = new com.bianfeng.netlibsdk.utils.NetException     // Catch: java.lang.Exception -> L30
            r2.<init>(r5)     // Catch: java.lang.Exception -> L30
            com.bianfeng.netlibsdk.Response r2 = com.bianfeng.netlibsdk.Response.error(r2)     // Catch: java.lang.Exception -> L30
            return r2
        L30:
            r0 = move-exception
            com.bianfeng.netlibsdk.utils.NetException r1 = new com.bianfeng.netlibsdk.utils.NetException
            r1.<init>(r0)
            throw r1
    }

    protected void putBasicData(org.json.JSONObject r5) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            r4 = this;
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> Le5
            java.lang.String r1 = "appid"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = r0.getAppContext()     // Catch: java.lang.Exception -> Le5
            int r2 = r2.getAppId()     // Catch: java.lang.Exception -> Le5
            r5.put(r1, r2)     // Catch: java.lang.Exception -> Le5
            java.lang.String r1 = "channel"
            java.lang.String r2 = r0.getChannelId()     // Catch: java.lang.Exception -> Le5
            r5.put(r1, r2)     // Catch: java.lang.Exception -> Le5
            java.lang.String r1 = "package_id"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r2 = r0.getAppContext()     // Catch: java.lang.Exception -> Le5
            int r2 = r2.getIdentify_id()     // Catch: java.lang.Exception -> Le5
            r5.put(r1, r2)     // Catch: java.lang.Exception -> Le5
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Le5
            r1.<init>()     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "df_ver"
            com.bianfeng.ymnsdk.ymndatalib.utils.PlatformUtils r3 = r0.getPlatformUtils()     // Catch: java.lang.Exception -> Le5
            java.lang.String r3 = r3.getDatafun_ver()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "app_key"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r3 = r0.getAppContext()     // Catch: java.lang.Exception -> Le5
            int r3 = r3.getAppId()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "group_id"
            java.lang.String r3 = r0.getGroupId()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "device_id"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le5
            java.lang.String r3 = r3.getDeviceId()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "version_code"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r3 = r0.getAppContext()     // Catch: java.lang.Exception -> Le5
            java.lang.String r3 = r3.getVerCode()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "version_name"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r3 = r0.getAppContext()     // Catch: java.lang.Exception -> Le5
            java.lang.String r3 = r3.getVerName()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "device_mobile"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le5
            java.lang.String r3 = r3.getDeviceModel()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "device_network"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le5
            java.lang.String r3 = r3.getNetChannelStr()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "device_os"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le5
            java.lang.String r3 = r3.getDeviceOS()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "device_os_version"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le5
            java.lang.String r3 = r3.getOsVersion()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "device_pixel"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le5
            java.lang.String r3 = r3.getDevicePixel()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "device_type"
            com.bianfeng.ymnsdk.utilslib.appinfo.AppContext r3 = r0.getAppContext()     // Catch: java.lang.Exception -> Le5
            java.lang.String r3 = r3.getDeviceType()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "device_version_code"
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r3 = r0.getDeviceInfo()     // Catch: java.lang.Exception -> Le5
            java.lang.String r3 = r3.getDeviceVersionCode()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "transactionId"
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r3 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()     // Catch: java.lang.Exception -> Le5
            java.lang.String r3 = r3.getInitTrace()     // Catch: java.lang.Exception -> Le5
            r1.put(r2, r3)     // Catch: java.lang.Exception -> Le5
            java.lang.String r2 = "base"
            r5.put(r2, r1)     // Catch: java.lang.Exception -> Le5
            return
        Le5:
            r0 = move-exception
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r1.<init>(r0)
            throw r1
    }

    public void putReqData(com.bianfeng.ymnsdk.feature.protocol.IPlugin r4, java.lang.Object... r5) {
            r3 = this;
            org.json.JSONObject r0 = r3.onPrepareData(r4, r5)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            if (r0 == 0) goto L25
            r3.putBasicData(r0)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            java.lang.String r1 = r0.toString()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            r3.pContent = r1     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            r1.<init>()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            java.lang.String r2 = "测试---"
            r1.append(r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            java.lang.String r2 = r3.pContent     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            r1.append(r2)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            java.lang.String r1 = r1.toString()     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
            com.bianfeng.ymnsdk.util.Logger.i(r1)     // Catch: com.bianfeng.ymnsdk.utilslib.exception.YmnException -> L26
        L25:
            goto L2a
        L26:
            r0 = move-exception
            r0.printStackTrace()
        L2a:
            return
    }

    public void setListener(com.bianfeng.ymnsdk.net.ymn.YmnRequest.a r1) {
            r0 = this;
            r0.listener = r1
            return
    }
}
