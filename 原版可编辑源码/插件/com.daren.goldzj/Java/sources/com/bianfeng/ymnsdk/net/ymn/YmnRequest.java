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
        void a(String str);

        void b(String str);
    }

    public Map<String, String> addHeaders() {
        return null;
    }

    public void deliverError(NetException netException) {
        a aVar = this.listener;
        if (aVar == null) {
            return;
        }
        NetworkResponse networkResponse = netException.response;
        if (networkResponse == null) {
            aVar.a(netException.getMessage());
            return;
        }
        aVar.a(networkResponse.statusCode + "|" + networkResponse.data + "|" + networkResponse.allHeaders + "|" + networkResponse.notModified);
    }

    protected Object formatType(Object obj) {
        if (obj instanceof String) {
            try {
                return new JSONObject(String.valueOf(obj));
            } catch (Exception unused) {
            }
        }
        return obj;
    }

    protected String formatUrl(String str) {
        return String.format("%s/%s/%s", YmnURLManagerV2.getHost(HostConstant.ymn), "v1", str);
    }

    public String getRequestBody() {
        return !TextUtils.isEmpty(this.pContent) ? this.pContent : "";
    }

    public abstract JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnException;

    protected Response<String> parseNetworkResponse(NetworkResponse networkResponse) throws NetException {
        try {
            k kVar = (k) YmnGsonUtil.fromJson(new String(networkResponse.data, HttpHeaderParser.parseCharset(networkResponse.headers, PROTOCOL_CHARSET)), k.class);
            return kVar.c() ? Response.success(kVar.b()) : Response.error(new NetException(networkResponse));
        } catch (Exception e) {
            throw new NetException(e);
        }
    }

    protected void putBasicData(JSONObject jSONObject) throws YmnException {
        try {
            YmnDataFunUtils ymnDataFunUtils = YmnDataFunUtils.getInstance();
            jSONObject.put("appid", ymnDataFunUtils.getAppContext().getAppId());
            jSONObject.put("channel", ymnDataFunUtils.getChannelId());
            jSONObject.put("package_id", ymnDataFunUtils.getAppContext().getIdentify_id());
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("df_ver", ymnDataFunUtils.getPlatformUtils().getDatafun_ver());
            jSONObject2.put("app_key", ymnDataFunUtils.getAppContext().getAppId());
            jSONObject2.put("group_id", ymnDataFunUtils.getGroupId());
            jSONObject2.put("device_id", ymnDataFunUtils.getDeviceInfo().getDeviceId());
            jSONObject2.put("version_code", ymnDataFunUtils.getAppContext().getVerCode());
            jSONObject2.put("version_name", ymnDataFunUtils.getAppContext().getVerName());
            jSONObject2.put("device_mobile", ymnDataFunUtils.getDeviceInfo().getDeviceModel());
            jSONObject2.put("device_network", ymnDataFunUtils.getDeviceInfo().getNetChannelStr());
            jSONObject2.put("device_os", ymnDataFunUtils.getDeviceInfo().getDeviceOS());
            jSONObject2.put("device_os_version", ymnDataFunUtils.getDeviceInfo().getOsVersion());
            jSONObject2.put("device_pixel", ymnDataFunUtils.getDeviceInfo().getDevicePixel());
            jSONObject2.put("device_type", ymnDataFunUtils.getAppContext().getDeviceType());
            jSONObject2.put("device_version_code", ymnDataFunUtils.getDeviceInfo().getDeviceVersionCode());
            jSONObject2.put(AnalyticsData.KEY_TRANSACTIONID, YmnDataFunUtils.getInstance().getInitTrace());
            jSONObject.put("base", jSONObject2);
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    public void putReqData(IPlugin iPlugin, Object... objArr) {
        try {
            JSONObject jSONObjectOnPrepareData = onPrepareData(iPlugin, objArr);
            if (jSONObjectOnPrepareData != null) {
                putBasicData(jSONObjectOnPrepareData);
                this.pContent = jSONObjectOnPrepareData.toString();
                Logger.i("测试---" + this.pContent);
            }
        } catch (YmnException e) {
            e.printStackTrace();
        }
    }

    public void setListener(a aVar) {
        this.listener = aVar;
    }

    protected void deliverResponse(String str) {
        a aVar = this.listener;
        if (aVar == null) {
            return;
        }
        aVar.b(str);
    }
}
