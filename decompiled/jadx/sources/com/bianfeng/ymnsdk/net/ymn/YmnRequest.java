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
import com.qq.e.ads.nativ.NativeUnifiedADAppInfoImpl;
import com.tencent.connect.common.Constants;
import java.util.Arrays;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public abstract class YmnRequest extends Request<String> {
    protected static final String PROTOCOL_CHARSET = "utf-8";
    private a listener;
    protected String pContent;

    public interface a {
        void onFail(String str);

        void onSuccess(String str);
    }

    public abstract JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnException;

    public void setListener(a listener) {
        this.listener = listener;
    }

    @Override // com.bianfeng.netlibsdk.Request
    public Map<String, String> addHeaders() {
        return null;
    }

    @Override // com.bianfeng.netlibsdk.Request
    public String getRequestBody() {
        if (!TextUtils.isEmpty(this.pContent)) {
            return this.pContent;
        }
        return "";
    }

    public void putReqData(IPlugin plugin, Object... datas) {
        try {
            JSONObject json = onPrepareData(plugin, datas);
            if (json != null) {
                putBasicData(json);
                this.pContent = json.toString();
                Logger.i("测试---" + this.pContent);
            }
        } catch (YmnException e) {
            e.printStackTrace();
        }
    }

    protected void putBasicData(JSONObject json) throws YmnException {
        try {
            YmnDataFunUtils dataFunUtils = YmnDataFunUtils.getInstance();
            json.put("appid", dataFunUtils.getAppContext().getAppId());
            json.put("channel", dataFunUtils.getChannelId());
            json.put(Constants.PACKAGE_ID, dataFunUtils.getAppContext().getIdentify_id());
            JSONObject base = new JSONObject();
            base.put("df_ver", dataFunUtils.getPlatformUtils().getDatafun_ver());
            base.put("app_key", dataFunUtils.getAppContext().getAppId());
            base.put("group_id", dataFunUtils.getGroupId());
            base.put("device_id", dataFunUtils.getDeviceInfo().getDeviceId());
            base.put("version_code", dataFunUtils.getAppContext().getVerCode());
            base.put(NativeUnifiedADAppInfoImpl.Keys.VERSION_NAME, dataFunUtils.getAppContext().getVerName());
            base.put("device_mobile", dataFunUtils.getDeviceInfo().getDeviceModel());
            base.put("device_network", dataFunUtils.getDeviceInfo().getNetChannelStr());
            base.put("device_os", dataFunUtils.getDeviceInfo().getDeviceOS());
            base.put("device_os_version", dataFunUtils.getDeviceInfo().getOsVersion());
            base.put("device_pixel", dataFunUtils.getDeviceInfo().getDevicePixel());
            base.put("device_type", dataFunUtils.getAppContext().getDeviceType());
            base.put("device_version_code", dataFunUtils.getDeviceInfo().getDeviceVersionCode());
            base.put(AnalyticsData.KEY_TRANSACTIONID, YmnDataFunUtils.getInstance().getInitTrace());
            json.put("base", base);
        } catch (Exception e) {
            throw new YmnException(e);
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.bianfeng.netlibsdk.Request
    public void deliverResponse(String response) {
        a aVar = this.listener;
        if (aVar == null) {
            return;
        }
        aVar.onSuccess(response);
    }

    @Override // com.bianfeng.netlibsdk.Request
    public void deliverError(NetException error) {
        a aVar = this.listener;
        if (aVar == null) {
            return;
        }
        NetworkResponse response = error.response;
        if (response != null) {
            aVar.onFail(response.statusCode + "|" + Arrays.toString(response.data) + "|" + response.allHeaders + "|" + response.notModified);
            return;
        }
        aVar.onFail(error.getMessage());
    }

    @Override // com.bianfeng.netlibsdk.Request
    protected Response<String> parseNetworkResponse(NetworkResponse response) throws NetException {
        try {
            String jsonString = new String(response.data, HttpHeaderParser.parseCharset(response.headers, "utf-8"));
            k responseBean = (k) YmnGsonUtil.fromJson(jsonString, k.class);
            if (responseBean.c()) {
                return Response.success(responseBean.b());
            }
            return Response.error(new NetException(response));
        } catch (Exception e) {
            throw new NetException(e);
        }
    }

    protected String formatUrl(String action) {
        String urlHost = YmnURLManagerV2.getHost(HostConstant.ymn);
        return String.format("%s/%s/%s", urlHost, "v1", action);
    }

    protected Object formatType(Object obj) {
        if (obj instanceof String) {
            try {
                return new JSONObject(String.valueOf(obj));
            } catch (Exception e) {
                return obj;
            }
        }
        return obj;
    }
}
