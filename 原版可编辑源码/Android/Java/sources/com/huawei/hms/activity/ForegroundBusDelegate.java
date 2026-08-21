package com.huawei.hms.activity;

import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.Intent;
import android.text.TextUtils;
import android.view.KeyEvent;
import com.huawei.hms.activity.internal.BusResponseCallback;
import com.huawei.hms.activity.internal.BusResponseResult;
import com.huawei.hms.activity.internal.ForegroundBusResponseMgr;
import com.huawei.hms.activity.internal.ForegroundInnerHeader;
import com.huawei.hms.adapter.AvailableAdapter;
import com.huawei.hms.api.HuaweiApiAvailability;
import com.huawei.hms.common.internal.RequestHeader;
import com.huawei.hms.common.internal.ResponseHeader;
import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import com.huawei.hms.support.hianalytics.HiAnalyticsUtil;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.utils.HMSPackageManager;
import com.huawei.hms.utils.JsonUtil;
import com.huawei.hms.utils.UIUtil;
import com.huawei.hms.utils.Util;
import java.lang.ref.WeakReference;
import java.util.Map;

public class ForegroundBusDelegate implements IBridgeActivityDelegate {
    private static final String EXTRA_DELEGATE_NAME = "intent.extra.hms.core.DELEGATE_NAME";
    private static final String EXTRA_DELEGATE_VALUE = "com.huawei.hms.core.activity.ForegroundBus";
    public static final String HMS_FOREGROUND_REQ_BODY = "HMS_FOREGROUND_REQ_BODY";
    public static final String HMS_FOREGROUND_REQ_HEADER = "HMS_FOREGROUND_REQ_HEADER";
    public static final String HMS_FOREGROUND_REQ_INNER = "HMS_FOREGROUND_REQ_INNER";
    public static final String HMS_FOREGROUND_RESP_HEADER = "HMS_FOREGROUND_RESP_HEADER";
    private static final int REQUEST_CODE_BUS = 431057;
    private static final String TAG = "ForegroundBusDelegate";
    private static final String UI_JUMP_ACTIVITY_NAME = "com.huawei.hms.core.activity.UiJumpActivity";
    private String foregroundBody;
    private RequestHeader foregroundHeader;
    private ForegroundInnerHeader innerHeader = new ForegroundInnerHeader();
    private WeakReference<Activity> mThisWeakRef;
    private ResponseHeader responseHeader;

    private class MyAvailableCallBack implements AvailableAdapter.AvailableCallBack {
        private MyAvailableCallBack() {
        }

        @Override
        public void onComplete(int i) {
            if (i == 0) {
                ForegroundBusDelegate.this.startApkHubActivity();
            } else {
                HMSLog.i(ForegroundBusDelegate.TAG, "version check failed");
                ForegroundBusDelegate.this.errorReturn(0, "apk version is invalid");
            }
        }
    }

    private void biReportRequestEntryForegroundBus() {
        Map<String, String> mapFromForegroundRequestHeader = HiAnalyticsUtil.getInstance().getMapFromForegroundRequestHeader(this.foregroundHeader);
        mapFromForegroundRequestHeader.put(HiAnalyticsConstant.HaKey.BI_KEY_DIRECTION, HiAnalyticsConstant.Direction.REQUEST);
        mapFromForegroundRequestHeader.put("version", HiAnalyticsUtil.versionCodeToName(String.valueOf(this.foregroundHeader.getKitSdkVersion())));
        if (getActivity() != null) {
            HiAnalyticsUtil.getInstance().onNewEvent(getActivity().getApplicationContext(), HiAnalyticsConstant.HMS_SDK_BASE_ACTIVITY_STARTED, mapFromForegroundRequestHeader);
        }
    }

    private void biReportRequestEntryStartCore() {
        Map<String, String> mapFromForegroundRequestHeader = HiAnalyticsUtil.getInstance().getMapFromForegroundRequestHeader(this.foregroundHeader);
        mapFromForegroundRequestHeader.put(HiAnalyticsConstant.HaKey.BI_KEY_DIRECTION, HiAnalyticsConstant.Direction.REQUEST);
        mapFromForegroundRequestHeader.put("version", HiAnalyticsUtil.versionCodeToName(String.valueOf(this.foregroundHeader.getKitSdkVersion())));
        if (getActivity() != null) {
            HiAnalyticsUtil.getInstance().onNewEvent(getActivity().getApplicationContext(), HiAnalyticsConstant.HMS_SDK_BASE_START_CORE_ACTIVITY, mapFromForegroundRequestHeader);
        }
    }

    private void biReportRequestReturnForegroundBus() {
        if (this.foregroundHeader != null) {
            Map<String, String> mapFromForegroundRequestHeader = HiAnalyticsUtil.getInstance().getMapFromForegroundRequestHeader(this.foregroundHeader);
            mapFromForegroundRequestHeader.put(HiAnalyticsConstant.HaKey.BI_KEY_DIRECTION, HiAnalyticsConstant.Direction.RESPONSE);
            mapFromForegroundRequestHeader.put("version", HiAnalyticsUtil.versionCodeToName(String.valueOf(this.foregroundHeader.getKitSdkVersion())));
            ResponseHeader responseHeader = this.responseHeader;
            if (responseHeader != null) {
                mapFromForegroundRequestHeader.put(HiAnalyticsConstant.HaKey.BI_KEY_RESULT, String.valueOf(responseHeader.getStatusCode()));
                mapFromForegroundRequestHeader.put("result", String.valueOf(this.responseHeader.getErrorCode()));
            }
            if (getActivity() != null) {
                HiAnalyticsUtil.getInstance().onNewEvent(getActivity().getApplicationContext(), HiAnalyticsConstant.HMS_SDK_BASE_ACTIVITY_STARTED, mapFromForegroundRequestHeader);
            }
        }
    }

    private void biReportRequestReturnStartCore() {
        Map<String, String> mapFromForegroundRequestHeader = HiAnalyticsUtil.getInstance().getMapFromForegroundRequestHeader(this.foregroundHeader);
        mapFromForegroundRequestHeader.put(HiAnalyticsConstant.HaKey.BI_KEY_DIRECTION, HiAnalyticsConstant.Direction.RESPONSE);
        mapFromForegroundRequestHeader.put("version", HiAnalyticsUtil.versionCodeToName(String.valueOf(this.foregroundHeader.getKitSdkVersion())));
        ResponseHeader responseHeader = this.responseHeader;
        if (responseHeader != null) {
            mapFromForegroundRequestHeader.put(HiAnalyticsConstant.HaKey.BI_KEY_RESULT, String.valueOf(responseHeader.getStatusCode()));
            mapFromForegroundRequestHeader.put("result", String.valueOf(this.responseHeader.getErrorCode()));
        }
        if (getActivity() != null) {
            HiAnalyticsUtil.getInstance().onNewEvent(getActivity().getApplicationContext(), HiAnalyticsConstant.HMS_SDK_BASE_START_CORE_ACTIVITY, mapFromForegroundRequestHeader);
        }
    }

    private void checkMinVersion() {
        if (getActivity() == null) {
            HMSLog.e(TAG, "checkMinVersion failed, activity must not be null.");
            return;
        }
        if (!Util.isAvailableLibExist(getActivity().getApplicationContext())) {
            if (HuaweiApiAvailability.getInstance().isHuaweiMobileServicesAvailable(getActivity().getApplicationContext(), this.innerHeader.getApkVersion()) != 0) {
                HMSLog.e(TAG, "checkMinVersion failed, and no available lib exists.");
                return;
            } else {
                startApkHubActivity();
                return;
            }
        }
        MyAvailableCallBack myAvailableCallBack = new MyAvailableCallBack();
        AvailableAdapter availableAdapter = new AvailableAdapter(this.innerHeader.getApkVersion());
        int iIsHuaweiMobileServicesAvailable = availableAdapter.isHuaweiMobileServicesAvailable(getActivity());
        if (iIsHuaweiMobileServicesAvailable == 0) {
            myAvailableCallBack.onComplete(iIsHuaweiMobileServicesAvailable);
        } else if (availableAdapter.isUserResolvableError(iIsHuaweiMobileServicesAvailable)) {
            resolution(getActivity(), availableAdapter, myAvailableCallBack);
        } else {
            myAvailableCallBack.onComplete(iIsHuaweiMobileServicesAvailable);
        }
    }

    private void errorReturn(int i, String str) {
        BusResponseResult busResponseResultInnerError;
        HMSLog.e(TAG, str);
        Activity activity = getActivity();
        if (activity == null) {
            return;
        }
        BusResponseCallback responseCallback = getResponseCallback(this.innerHeader.getResponseCallbackKey());
        if (responseCallback == null || (busResponseResultInnerError = responseCallback.innerError(this.mThisWeakRef.get(), i, str)) == null) {
            activity.setResult(0);
        } else {
            activity.setResult(busResponseResultInnerError.getCode(), busResponseResultInnerError.getIntent());
        }
        finishBridgeActivity();
    }

    private void finishBridgeActivity() {
        Activity activity = getActivity();
        if (activity == null || activity.isFinishing()) {
            return;
        }
        activity.finish();
    }

    private Activity getActivity() {
        WeakReference<Activity> weakReference = this.mThisWeakRef;
        if (weakReference == null) {
            return null;
        }
        return weakReference.get();
    }

    private BusResponseCallback getResponseCallback(String str) {
        return ForegroundBusResponseMgr.getInstance().get(str);
    }

    private static void resolution(Activity activity, AvailableAdapter availableAdapter, AvailableAdapter.AvailableCallBack availableCallBack) {
        if (activity == null) {
            HMSLog.i(TAG, "null activity, could not start resolution intent");
        }
        availableAdapter.startResolution(activity, availableCallBack);
    }

    private void startApkHubActivity() {
        HMSLog.i(TAG, "startApkHubActivity");
        Activity activity = getActivity();
        if (activity == null) {
            HMSLog.e(TAG, "startApkHubActivity but activity is null");
            return;
        }
        String hMSPackageName = HMSPackageManager.getInstance(activity.getApplicationContext()).getHMSPackageName();
        Intent intent = new Intent(this.innerHeader.getAction());
        intent.putExtra(HMS_FOREGROUND_REQ_BODY, this.foregroundBody);
        intent.setPackage(hMSPackageName);
        intent.putExtra(BridgeActivity.EXTRA_IS_FULLSCREEN, UIUtil.isActivityFullscreen(activity));
        intent.setClassName(hMSPackageName, UI_JUMP_ACTIVITY_NAME);
        intent.putExtra(HMS_FOREGROUND_REQ_HEADER, this.foregroundHeader.toJson());
        intent.putExtra(EXTRA_DELEGATE_NAME, EXTRA_DELEGATE_VALUE);
        try {
            biReportRequestEntryStartCore();
            activity.startActivityForResult(intent, REQUEST_CODE_BUS);
        } catch (ActivityNotFoundException e) {
            HMSLog.e(TAG, "Launch sign in Intent failed. hms is probably being updated：", e);
            errorReturn(0, "launch bus intent failed");
        }
    }

    private void succeedReturn(int i, Intent intent) {
        HMSLog.i(TAG, "succeedReturn");
        Activity activity = getActivity();
        if (activity == null) {
            return;
        }
        activity.setResult(i, intent);
        finishBridgeActivity();
    }

    @Override
    public int getRequestCode() {
        return REQUEST_CODE_BUS;
    }

    @Override
    public void onBridgeActivityCreate(Activity activity) {
        this.mThisWeakRef = new WeakReference<>(activity);
        Intent intent = activity.getIntent();
        String stringExtra = intent.getStringExtra(HMS_FOREGROUND_REQ_HEADER);
        RequestHeader requestHeader = new RequestHeader();
        this.foregroundHeader = requestHeader;
        if (!requestHeader.fromJson(stringExtra)) {
            errorReturn(0, "header is invalid");
            return;
        }
        this.foregroundBody = intent.getStringExtra(HMS_FOREGROUND_REQ_BODY);
        this.innerHeader.fromJson(intent.getStringExtra(HMS_FOREGROUND_REQ_INNER));
        if (this.innerHeader == null) {
            errorReturn(0, "inner header is invalid");
        } else if (TextUtils.isEmpty(this.foregroundHeader.getApiName())) {
            errorReturn(0, "action is invalid");
        } else {
            biReportRequestEntryForegroundBus();
            checkMinVersion();
        }
    }

    @Override
    public void onBridgeActivityDestroy() {
        biReportRequestReturnForegroundBus();
        this.mThisWeakRef = null;
    }

    @Override
    public boolean onBridgeActivityResult(int i, int i2, Intent intent) {
        if (i != REQUEST_CODE_BUS) {
            return false;
        }
        if (intent != null && intent.hasExtra(HMS_FOREGROUND_RESP_HEADER)) {
            String stringExtra = intent.getStringExtra(HMS_FOREGROUND_RESP_HEADER);
            ResponseHeader responseHeader = new ResponseHeader();
            this.responseHeader = responseHeader;
            JsonUtil.jsonToEntity(stringExtra, responseHeader);
        }
        biReportRequestReturnStartCore();
        BusResponseCallback responseCallback = getResponseCallback(this.innerHeader.getResponseCallbackKey());
        if (responseCallback == null) {
            succeedReturn(i2, intent);
            return true;
        }
        BusResponseResult busResponseResultSucceedReturn = responseCallback.succeedReturn(this.mThisWeakRef.get(), i2, intent);
        if (busResponseResultSucceedReturn == null) {
            succeedReturn(i2, intent);
            return true;
        }
        succeedReturn(busResponseResultSucceedReturn.getCode(), busResponseResultSucceedReturn.getIntent());
        return true;
    }

    @Override
    public void onBridgeConfigurationChanged() {
    }

    @Override
    public void onKeyUp(int i, KeyEvent keyEvent) {
    }
}
