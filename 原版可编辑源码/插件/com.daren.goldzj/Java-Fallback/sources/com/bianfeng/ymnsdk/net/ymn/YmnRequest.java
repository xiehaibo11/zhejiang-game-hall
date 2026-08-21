package com.bianfeng.ymnsdk.net.ymn;

import android.text.TextUtils;
import com.bianfeng.netlibsdk.HttpHeaderParser;
import com.bianfeng.netlibsdk.NetworkResponse;
import com.bianfeng.netlibsdk.Request;
import com.bianfeng.netlibsdk.Response;
import com.bianfeng.netlibsdk.utils.NetException;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.gongxiang.k;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2;
import com.bianfeng.ymnsdk.util.AnalyticsData;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import java.util.Map;
import org.json.JSONObject;

public abstract class YmnRequest extends Request<String> {
    protected static final String PROTOCOL_CHARSET = "utf-8";
    private a listener;
    protected String pContent;

    public interface a {
        void a(String r1);

        void b(String r1);
    }

    public YmnRequest() {
    }

    public Map<String, String> addHeaders() {
        return null;
    }

    public void deliverError(NetException r5) {
        a r0 = this.listener;
        if (r0 != null) goto L5;
        return;
    L5:
        NetworkResponse r1 = r5.response;
        if (r1 == null) goto L8;
        r0.a(r1.statusCode + "|" + r1.data + "|" + r1.allHeaders + "|" + r1.notModified);
        return;
    L8:
        r0.a(r5.getMessage());
    }

    protected void deliverResponse(Object r1) {
        deliverResponse((String) r1);
    }

    protected Object formatType(Object r3) {
        if ((r3 instanceof String) == true) goto L8;
    L6:
        return r3;
    L8:
        return new JSONObject(String.valueOf(r3));
    }

    protected String formatUrl(String r4) {
        return String.format("%s/%s/%s", new Object[]{YmnURLManagerV2.getHost(HostConstant.ymn), "v1", r4});
    }

    public String getRequestBody() {
        if (TextUtils.isEmpty(this.pContent) == false) goto L5;
        return "";
    L5:
        return this.pContent;
    }

    public abstract JSONObject onPrepareData(IPlugin r1, Object... r2) throws YmnException;

    protected Response<String> parseNetworkResponse(NetworkResponse r5) throws NetException {
        k r0 = (k) YmnGsonUtil.fromJson(new String(r5.data, HttpHeaderParser.parseCharset(r5.headers, PROTOCOL_CHARSET)), k.class);     // Catch: Exception -> L8
        if (r0.c() == false) goto L7;
        return Response.success(r0.b());
    L7:
        return Response.error(new NetException(r5));
    L8:
        e = move-exception;
        throw new NetException(e);
    }

    protected void putBasicData(JSONObject r5) throws YmnException {
        YmnDataFunUtils r0 = YmnDataFunUtils.getInstance();     // Catch: Exception -> L38
        r5.put("appid", r0.getAppContext().getAppId());     // Catch: Exception -> L38
        r5.put("channel", r0.getChannelId());     // Catch: Exception -> L38
        r5.put("package_id", r0.getAppContext().getIdentify_id());     // Catch: Exception -> L38
        JSONObject r1 = new JSONObject();     // Catch: Exception -> L38
        r1.put("df_ver", r0.getPlatformUtils().getDatafun_ver());     // Catch: Exception -> L38
        r1.put("app_key", r0.getAppContext().getAppId());     // Catch: Exception -> L38
        r1.put("group_id", r0.getGroupId());     // Catch: Exception -> L38
        r1.put("device_id", r0.getDeviceInfo().getDeviceId());     // Catch: Exception -> L38
        r1.put("version_code", r0.getAppContext().getVerCode());     // Catch: Exception -> L38
        r1.put("version_name", r0.getAppContext().getVerName());     // Catch: Exception -> L38
        r1.put("device_mobile", r0.getDeviceInfo().getDeviceModel());     // Catch: Exception -> L38
        r1.put("device_network", r0.getDeviceInfo().getNetChannelStr());     // Catch: Exception -> L38
        r1.put("device_os", r0.getDeviceInfo().getDeviceOS());     // Catch: Exception -> L38
        r1.put("device_os_version", r0.getDeviceInfo().getOsVersion());     // Catch: Exception -> L38
        r1.put("device_pixel", r0.getDeviceInfo().getDevicePixel());     // Catch: Exception -> L38
        r1.put("device_type", r0.getAppContext().getDeviceType());     // Catch: Exception -> L38
        r1.put("device_version_code", r0.getDeviceInfo().getDeviceVersionCode());     // Catch: Exception -> L38
        r1.put(AnalyticsData.KEY_TRANSACTIONID, YmnDataFunUtils.getInstance().getInitTrace());     // Catch: Exception -> L38
        r5.put("base", r1);     // Catch: Exception -> L38
        return;
    L38:
        e = move-exception;
        throw new YmnException(e);
    }

    public void putReqData(IPlugin r1, Object... r2) {
        JSONObject r12 = onPrepareData(r1, r2);     // Catch: YmnException -> L6
        if (r12 == null) goto L11;
        putBasicData(r12);     // Catch: YmnException -> L6
        this.pContent = r12.toString();     // Catch: YmnException -> L6
        Logger.i("测试---" + this.pContent);     // Catch: YmnException -> L6
        return;
    L11:
        return;
    L6:
        e = move-exception;
        e.printStackTrace();
    }

    public void setListener(a r1) {
        this.listener = r1;
    }

    protected void deliverResponse(String r2) {
        a r0 = this.listener;
        if (r0 != null) goto L5;
        return;
    L5:
        r0.b(r2);
    }
}
