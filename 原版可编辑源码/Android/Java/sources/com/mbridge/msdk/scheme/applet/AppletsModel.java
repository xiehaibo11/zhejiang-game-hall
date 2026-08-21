package com.mbridge.msdk.scheme.applet;

import android.net.Uri;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.net.b;
import com.mbridge.msdk.foundation.same.net.f.d;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.scheme.report.AppletsReport;
import com.mbridge.msdk.scheme.request.AppletSchemeRequest;
import com.mbridge.msdk.scheme.response.AppletSchemeResponse;
import com.qq.e.comm.constants.ErrorCode;
import java.io.Serializable;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONObject;

public class AppletsModel implements Serializable {
    private static final String DYNAMIC_VIEW_WX_IS_REDIRECT_0 = "0";
    private static final String DYNAMIC_VIEW_WX_IS_REDIRECT_1 = "1";
    private static final String DYNAMIC_VIEW_WX_QUERY_PARAM_EVENT_CALLBACK = "event_callback";
    private static final String DYNAMIC_VIEW_WX_QUERY_PARAM_INSTALL_CALLBACK = "install_callback";
    public static final int REQUEST_TYPE_CLICK = 1;
    public static final int REQUEST_TYPE_SHOW = 0;
    private static String TAG = "AppletsModel";
    private static final String URL_ENCODE_UTF_8 = "UTF-8";
    private static final String WX_MINIPROGRAM = "wx_miniprogram";
    private static final int WX_SCHEME_REQUEST_ERROR_CODE_44993 = 44993;
    private volatile IAppletSchemeCallBack appletSchemeCallBack;
    private final CampaignEx campaignEx;
    private Map<String, String> params;
    private String reBuildClickUrl;
    private final String requestId;
    private final String unitID;
    private boolean isRequestTimesMaxPerDay = false;
    private volatile boolean isRequesting = false;
    private volatile boolean isRequestSuccess = false;
    private int lastRequestType = -1;
    private boolean isSupportWxScheme = false;
    private boolean isUserClick = false;
    private String deepLink = "";

    public AppletsModel(CampaignEx campaignEx, String str, String str2) {
        this.campaignEx = campaignEx;
        this.unitID = str;
        this.requestId = str2;
    }

    public void requestWxAppletsScheme(int i, IAppletSchemeCallBack iAppletSchemeCallBack) {
        if (this.campaignEx == null || TextUtils.isEmpty(this.unitID)) {
            return;
        }
        if (MBridgeConstans.DEBUG) {
            z.d(TAG, "start request wx scheme");
        }
        this.isRequesting = true;
        if (iAppletSchemeCallBack != null) {
            this.appletSchemeCallBack = iAppletSchemeCallBack;
        }
        handlerSchemeRequestStart();
        AppletSchemeRequest appletSchemeRequest = new AppletSchemeRequest(a.f().j());
        if (this.params == null) {
            this.params = getAppletsParamsAndBuildRequest(this.campaignEx);
        }
        if (this.params == null) {
            return;
        }
        if (isRequestTimesMaxPerDay()) {
            handlerSchemeRequestFailed(WX_SCHEME_REQUEST_ERROR_CODE_44993, "get wxscheme failed : request times is max");
            return;
        }
        this.lastRequestType = i;
        appletSchemeRequest.get(1, d.a().e, this.params, new b(5000, 5000, 5000, ErrorCode.UNKNOWN_ERROR, 0), new DefaultAppletSchemeResponse(this));
    }

    public void setAppletSchemeCallBack(IAppletSchemeCallBack iAppletSchemeCallBack) {
        this.appletSchemeCallBack = iAppletSchemeCallBack;
    }

    public boolean isRequesting() {
        return this.isRequesting;
    }

    public void setRequestingFinish() {
        this.isRequesting = false;
    }

    public boolean isRequestSuccess() {
        return this.isRequestSuccess;
    }

    public String getReBuildClickUrl() {
        return this.reBuildClickUrl;
    }

    private void handlerSchemeRequestStart() {
        if (this.appletSchemeCallBack == null) {
            return;
        }
        try {
            this.appletSchemeCallBack.onAppletSchemeRequestStart();
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                z.c(TAG, "handler wx scheme start exception ", e);
            }
        }
        AppletsReport.reportAppletsLoadState(a.f().j(), "start load wx scheme", this.unitID, this.requestId);
    }

    private void handlerSchemeRequestNetworkError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        String message;
        if (this.appletSchemeCallBack == null) {
            return;
        }
        int i = -1;
        if (aVar != null) {
            i = aVar.a;
            message = aVar.getMessage();
            if (i == 10) {
                message = "request timeout";
            }
        } else {
            message = "unKnown";
        }
        if (MBridgeConstans.DEBUG) {
            z.a(TAG, String.format("handlerSchemeRequestNetworkError network error by code %s and %s", String.valueOf(i), message));
        }
        try {
            this.appletSchemeCallBack.onNetworkError(i, "network error: " + message, this.reBuildClickUrl);
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                z.c(TAG, "handler wx scheme network error exception ", e);
            }
        }
        AppletsReport.reportAppletsLoadState(a.f().j(), String.format("network error by code %s and %s", String.valueOf(i), message), this.unitID, this.requestId);
    }

    private void handlerSchemeRequestResult(k<JSONObject> kVar) throws SchemeRequestException {
        JSONObject jSONObject = kVar.a;
        if (MBridgeConstans.DEBUG) {
            z.a("AppletsModel", "result: " + jSONObject.toString());
        }
        if (jSONObject.has("wx_scheme")) {
            String strOptString = jSONObject.optString("wx_scheme", "");
            if (TextUtils.isEmpty(strOptString)) {
                throw new SchemeRequestException("wx_scheme value is null");
            }
            this.isRequestSuccess = true;
            handlerSchemeRequestSuccess(strOptString);
            return;
        }
        int iOptInt = jSONObject.optInt("error_code", -1);
        String strOptString2 = jSONObject.optString("error_msg", "");
        if (iOptInt == WX_SCHEME_REQUEST_ERROR_CODE_44993) {
            this.isRequestTimesMaxPerDay = true;
        }
        handlerSchemeRequestFailed(iOptInt, strOptString2);
    }

    private void handlerSchemeRequestFailed(int i, String str) {
        if (this.appletSchemeCallBack == null) {
            return;
        }
        if (MBridgeConstans.DEBUG) {
            z.a(TAG, String.format("handlerSchemeRequestFailed network error by code %s and %s", String.valueOf(i), str));
        }
        try {
            this.appletSchemeCallBack.onAppletSchemeRequestFailed(i, str, this.reBuildClickUrl);
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                z.c(TAG, "handler wx scheme failed exception  ", e);
            }
        }
        AppletsReport.reportAppletsLoadState(a.f().j(), String.format("network error by code %s and %s", String.valueOf(i), str), this.unitID, this.requestId);
    }

    private void handlerSchemeRequestSuccess(String str) {
        if (this.appletSchemeCallBack == null) {
            return;
        }
        if (MBridgeConstans.DEBUG) {
            z.a(TAG, "handlerSchemeRequestSuccess: " + str);
        }
        try {
            this.deepLink = str;
            this.appletSchemeCallBack.onAppletSchemeRequestSuccess(str);
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                z.c(TAG, "handler wx scheme success exception ", e);
            }
        }
        AppletsReport.reportAppletsLoadState(a.f().j(), "request wx scheme success", this.unitID, this.requestId);
    }

    public String getDeepLink() {
        return this.deepLink;
    }

    private void handlerRequestNetworkError() {
        if (this.appletSchemeCallBack == null) {
            return;
        }
        if (MBridgeConstans.DEBUG) {
            z.a(TAG, "handlerRequestNetworkError response or result is null");
        }
        try {
            this.appletSchemeCallBack.onNetworkError(1, "response or result is null", this.reBuildClickUrl);
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                z.c(TAG, "handler request network error exception ", e);
            }
        }
        AppletsReport.reportAppletsLoadState(a.f().j(), "response or result is null", this.unitID, this.requestId);
    }

    /* JADX WARN: Can't wrap try/catch for region: R(27:10|(8:11|12|(4:104|14|(2:36|113)(5:110|19|20|21|(7:100|25|26|32|(1:34)|35|114)(5:26|32|(0)|35|114))|37)(1:112)|38|39|91|(1:93)|94)|40|102|41|(1:43)|44|51|106|52|(1:54)|55|62|96|63|(1:65)|66|73|108|74|(1:77)|82|(1:84)|85|86|87|94) */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x00db, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x00df, code lost:
    
        if (com.mbridge.msdk.MBridgeConstans.DEBUG != false) goto L49;
     */
    /* JADX WARN: Code restructure failed: missing block: B:49:0x00e1, code lost:
    
        com.mbridge.msdk.foundation.tools.z.c(com.mbridge.msdk.scheme.applet.AppletsModel.TAG, "create wechat app request param failed ", r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:50:0x00e6, code lost:
    
        r1 = "";
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:0x00f5, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:59:0x00f9, code lost:
    
        if (com.mbridge.msdk.MBridgeConstans.DEBUG != false) goto L60;
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x00fb, code lost:
    
        com.mbridge.msdk.foundation.tools.z.c(com.mbridge.msdk.scheme.applet.AppletsModel.TAG, "create wechat app request param failed ", r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x0100, code lost:
    
        r2 = "";
     */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x010f, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:70:0x0113, code lost:
    
        if (com.mbridge.msdk.MBridgeConstans.DEBUG != false) goto L71;
     */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x0115, code lost:
    
        com.mbridge.msdk.foundation.tools.z.c(com.mbridge.msdk.scheme.applet.AppletsModel.TAG, "create wechat app request param failed ", r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x011a, code lost:
    
        r3 = "";
     */
    /* JADX WARN: Code restructure failed: missing block: B:78:0x012d, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:80:0x0130, code lost:
    
        if (com.mbridge.msdk.MBridgeConstans.DEBUG != false) goto L81;
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x0132, code lost:
    
        com.mbridge.msdk.foundation.tools.z.c(com.mbridge.msdk.scheme.applet.AppletsModel.TAG, "create wechat app request param failed ", r0);
     */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00b4 A[Catch: Exception -> 0x00c8, TRY_LEAVE, TryCatch #4 {Exception -> 0x00c8, blocks: (B:14:0x0045, B:16:0x0054, B:21:0x0063, B:23:0x006b, B:32:0x00a1, B:34:0x00b4, B:29:0x007e, B:31:0x0082, B:51:0x00e8, B:62:0x0102, B:73:0x011c, B:74:0x011f, B:82:0x0137, B:84:0x0149, B:85:0x015f, B:79:0x012e, B:81:0x0132, B:69:0x0111, B:71:0x0115, B:58:0x00f7, B:60:0x00fb, B:47:0x00dd, B:49:0x00e1, B:63:0x0105, B:25:0x0073, B:41:0x00d1, B:52:0x00eb), top: B:104:0x0045, inners: #0, #2, #3, #5, #6 }] */
    /* JADX WARN: Removed duplicated region for block: B:93:0x01b2  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private Map<String, String> getAppletsParamsAndBuildRequest(CampaignEx campaignEx) {
        Uri uri;
        String queryParameter;
        String str;
        String str2;
        String str3 = MBridgeConstans.DYNAMIC_VIEW_WX_IS_REDIRECT;
        String str4 = "query";
        HashMap map = new HashMap();
        if (campaignEx == null) {
            return map;
        }
        try {
            uri = Uri.parse(campaignEx.getClickURL());
        } catch (Exception e) {
            e = e;
        }
        if (uri != null && uri.getQueryParameterNames() != null) {
            StringBuilder sb = new StringBuilder();
            Iterator<String> it = uri.getQueryParameterNames().iterator();
            int i = 0;
            while (true) {
                queryParameter = "";
                if (!it.hasNext()) {
                    break;
                }
                try {
                    Iterator<String> it2 = it;
                    String next = it.next();
                    if (TextUtils.isEmpty(next) || TextUtils.equals(next, "wx_miniprogram")) {
                        str = str3;
                        str2 = str4;
                    } else {
                        try {
                            queryParameter = uri.getQueryParameter(next);
                        } catch (Exception unused) {
                        }
                        String strEncode = queryParameter;
                        if (TextUtils.equals(next, DYNAMIC_VIEW_WX_QUERY_PARAM_EVENT_CALLBACK) || TextUtils.equals(next, DYNAMIC_VIEW_WX_QUERY_PARAM_INSTALL_CALLBACK)) {
                            try {
                                strEncode = URLEncoder.encode(strEncode, "UTF-8");
                            } catch (Exception e2) {
                                if (MBridgeConstans.DEBUG) {
                                    String str5 = TAG;
                                    str = str3;
                                    StringBuilder sb2 = new StringBuilder();
                                    str2 = str4;
                                    sb2.append("encode url for ");
                                    sb2.append(strEncode);
                                    sb2.append(" failed");
                                    z.c(str5, sb2.toString(), e2);
                                }
                                sb.append(next);
                                sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                                sb.append(strEncode);
                                if (i < uri.getQueryParameterNames().size()) {
                                }
                                i++;
                                it = it2;
                                str3 = str;
                                str4 = str2;
                            }
                            str = str3;
                            str2 = str4;
                            sb.append(next);
                            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                            sb.append(strEncode);
                            if (i < uri.getQueryParameterNames().size()) {
                                sb.append("&");
                            }
                            i++;
                        } else {
                            str = str3;
                            str2 = str4;
                            sb.append(next);
                            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                            sb.append(strEncode);
                            if (i < uri.getQueryParameterNames().size()) {
                            }
                            i++;
                        }
                    }
                    it = it2;
                    str3 = str;
                    str4 = str2;
                } catch (Exception e3) {
                    e = e3;
                    if (MBridgeConstans.DEBUG) {
                    }
                }
                e = e3;
                if (MBridgeConstans.DEBUG) {
                    z.c(TAG, "create wechat app request param failed ", e);
                }
                return map;
            }
            String str6 = str3;
            String str7 = str4;
            String queryParameter2 = uri.getQueryParameter("app");
            if (queryParameter2 == null) {
                queryParameter2 = "";
            }
            String str8 = queryParameter2;
            map.put("app", str8);
            String queryParameter3 = uri.getQueryParameter("path");
            if (queryParameter3 == null) {
                queryParameter3 = "";
            }
            String str9 = queryParameter3;
            map.put("path", str9);
            String queryParameter4 = uri.getQueryParameter(MBridgeConstans.DYNAMIC_VIEW_WX_CLICKID);
            if (queryParameter4 == null) {
                queryParameter4 = "";
            }
            String str10 = queryParameter4;
            map.put(MBridgeConstans.DYNAMIC_VIEW_WX_CLICKID, str10);
            String strEncode2 = URLEncoder.encode(sb.toString(), "UTF-8");
            if (strEncode2 != null) {
                queryParameter = strEncode2;
            }
            String str11 = queryParameter;
            map.put(str7, str11);
            map.put(str6, "0");
            if (MBridgeConstans.DEBUG) {
                z.a(TAG, "query: " + str11);
            }
            this.reBuildClickUrl = reCreateClickUrl("app" + ContainerUtils.KEY_VALUE_DELIMITER + str8 + "&path" + ContainerUtils.KEY_VALUE_DELIMITER + str9 + "&" + str7 + ContainerUtils.KEY_VALUE_DELIMITER + str11 + "&" + MBridgeConstans.DYNAMIC_VIEW_WX_CLICKID + ContainerUtils.KEY_VALUE_DELIMITER + str10 + "&" + str6 + ContainerUtils.KEY_VALUE_DELIMITER + "1");
            return map;
        }
        return map;
    }

    private String reCreateClickUrl(String str) {
        return d.a().e + "?" + str;
    }

    public boolean canRequestWxScheme(int i) {
        if (!isSupportWxScheme()) {
            return false;
        }
        if (i != 0) {
            return i == 1;
        }
        return isCanRequestByTemplateUrl("2");
    }

    private boolean isCanRequestByLinkType() {
        CampaignEx campaignEx = this.campaignEx;
        if (campaignEx == null) {
            return false;
        }
        int linkType = campaignEx.getLinkType();
        return linkType == 8 || linkType == 9;
    }

    private boolean isCanRequestByClickUrl(String str) {
        try {
            if (this.campaignEx == null) {
                return false;
            }
            String clickURL = this.campaignEx.getClickURL();
            if (TextUtils.isEmpty(clickURL)) {
                return false;
            }
            return TextUtils.equals(ak.a(clickURL, "wx_miniprogram"), str);
        } catch (Exception e) {
            if (!MBridgeConstans.DEBUG) {
                return false;
            }
            z.c(TAG, "query wx_miniprogram from click url exception ", e);
            return false;
        }
    }

    private boolean isCanRequestByTemplateUrl(String str) {
        CampaignEx.c rewardTemplateMode;
        try {
            if (this.campaignEx != null && (rewardTemplateMode = this.campaignEx.getRewardTemplateMode()) != null && !TextUtils.isEmpty(rewardTemplateMode.e())) {
                return TextUtils.equals(ak.a(rewardTemplateMode.e(), MBridgeConstans.DYNAMIC_VIEW_REQ_WX_URL), str);
            }
            return false;
        } catch (Exception e) {
            if (!MBridgeConstans.DEBUG) {
                return false;
            }
            z.c(TAG, "query reqwxurl from template url exception ", e);
            return false;
        }
    }

    public boolean isRequestTimesMaxPerDay() {
        return this.isRequestTimesMaxPerDay;
    }

    public boolean can(int i) {
        if (isRequesting() || !canRequestWxScheme(i)) {
            return false;
        }
        if (this.lastRequestType == -1) {
            return true;
        }
        if (isRequestSuccess()) {
            return false;
        }
        return (this.lastRequestType == 0 && i == 1) || (this.lastRequestType == 1 && i == 1 && this.isUserClick);
    }

    public void setUserClick(boolean z) {
        this.isUserClick = z;
    }

    public boolean isSupportWxScheme() {
        if (!this.isSupportWxScheme) {
            this.isSupportWxScheme = isCanRequestByClickUrl("1") && isCanRequestByLinkType();
        }
        return this.isSupportWxScheme;
    }

    public void clearRequestState() {
        this.isRequestSuccess = false;
        this.isRequesting = false;
        this.appletSchemeCallBack = null;
    }

    private void changeRequestingState(boolean z) {
        this.isRequesting = z;
    }

    private static final class DefaultAppletSchemeResponse extends AppletSchemeResponse {
        private AppletsModel appletsModel;

        public DefaultAppletSchemeResponse(AppletsModel appletsModel) {
            this.appletsModel = appletsModel;
        }

        @Override
        public final void onSuccess(k<JSONObject> kVar) {
            super.onSuccess(kVar);
            AppletsModel appletsModel = this.appletsModel;
            if (appletsModel == null) {
                return;
            }
            appletsModel.changeRequestingState(false);
            if (kVar == null || kVar.a == null) {
                this.appletsModel.handlerRequestNetworkError();
                return;
            }
            try {
                this.appletsModel.handlerSchemeRequestResult(kVar);
            } catch (SchemeRequestException e) {
                this.appletsModel.handlerSchemeRequestFailed(-2, e.getMessage());
            }
        }

        @Override
        public final void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
            super.onError(aVar);
            AppletsModel appletsModel = this.appletsModel;
            if (appletsModel == null) {
                return;
            }
            appletsModel.changeRequestingState(false);
            this.appletsModel.handlerSchemeRequestNetworkError(aVar);
        }
    }

    private static final class SchemeRequestException extends Exception {
        public SchemeRequestException(String str) {
            super(str);
        }
    }
}
