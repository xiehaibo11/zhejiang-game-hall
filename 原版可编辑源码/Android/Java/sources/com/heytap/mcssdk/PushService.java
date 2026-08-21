package com.heytap.mcssdk;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.os.Build;
import android.os.Bundle;
import android.os.IBinder;
import android.text.TextUtils;
import com.heytap.mcssdk.constant.MessageConstant;
import com.heytap.mcssdk.d.d;
import com.heytap.mcssdk.e.c;
import com.heytap.mcssdk.utils.StatUtil;
import com.heytap.mcssdk.utils.Utils;
import com.heytap.msp.push.callback.ICallBackResultService;
import com.heytap.msp.push.callback.IGetAppNotificationCallBackService;
import com.heytap.msp.push.callback.ISetAppNotificationCallBackService;
import com.heytap.msp.push.mode.MessageStat;
import com.mcs.aidl.IMcsSdkService;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONException;
import org.json.JSONObject;

public class PushService implements com.heytap.mcssdk.a {
    private static final String APP_PACKAGE = "appPackage";
    private static final String APP_VERSION_CODE = "versionCode";
    private static final String APP_VERSION_NAME = "versionName";
    private static final int DEFAULT_API_MAX_COUNT = 2;
    private static final String EVENT_ID = "eventID";
    private static final String EXTRA = "extra";
    private static final String GLOBAL_ID = "globalID";
    private static final int MAX_HOUR_IN_DAY = 23;
    private static final int MAX_MIN_IN_HOUR = 59;
    private static final int MCS_SUPPORT_VERSION = 1019;
    private static final String MESSAGE_ID = "messageID";
    private static final String MESSAGE_TYPE = "messageType";
    private static final String NEW_MCS_RECEIVE_SDK_ACTION_Base64 = "Y29tLm1jcy5hY3Rpb24uUkVDRUlWRV9TREtfTUVTU0FHRQ==";
    private static final String PUSH_SDK_VERSION = "pushSdkVersion";
    private static final int SDK_INT_24 = 24;
    private static final String SUPPORT_OPEN_PUSH = "supportOpenPush";
    private static final int SYSTEM_UID = 1000;
    private static final String TASK_ID = "taskID";
    private static final String TYPE = "type";
    private static boolean sIsNewMcsPkg;
    private static String sMcsPkgName;
    private ConcurrentHashMap<Integer, com.heytap.mcssdk.c.a> mAppLimitMap;
    private String mAuthCode;
    private Context mContext;
    private ICallBackResultService mICallBackResultService;
    private IGetAppNotificationCallBackService mIGetAppNotificationCallBackService;
    private ISetAppNotificationCallBackService mISetAppNotificationCallBackService;
    private List<d> mParsers;
    private List<c> mProcessors;
    private String mRegisterID;
    private String mVerifyCode;
    private static final int[] OLD_MCS_PACKAGE = {99, 111, 109, 46, 99, 111, 108, 111, 114, 111, 115, 46, 109, 99, 115};
    private static final int[] OLD_MCS_RECEIVE_SDK_ACTION = {99, 111, 109, 46, 99, 111, 108, 111, 114, 111, 115, 46, 109, 99, 115, 115, 100, 107, 46, 97, 99, 116, 105, 111, 110, 46, 82, 69, 67, 69, 73, 86, 69, 95, 83, 68, 75, 95, 77, 69, 83, 83, 65, 71, 69};
    private static String NEW_MCS_RECEIVE_SDK_ACTION = "";
    private static int sCount = 0;

    private static class a {
        private static final PushService a = new PushService();

        private a() {
        }
    }

    private PushService() {
        this.mProcessors = new ArrayList();
        this.mParsers = new ArrayList();
        this.mRegisterID = null;
        synchronized (PushService.class) {
            if (sCount > 0) {
                throw new RuntimeException("PushService can't create again!");
            }
            sCount++;
        }
        addParser(new com.heytap.mcssdk.d.b());
        addParser(new com.heytap.mcssdk.d.a());
        addProcessor(new com.heytap.mcssdk.e.b());
        addProcessor(new com.heytap.mcssdk.e.a());
        this.mAppLimitMap = new ConcurrentHashMap<>();
    }

    private com.heytap.mcssdk.c.a addCommandToMap(int i) {
        String str;
        if (!this.mAppLimitMap.containsKey(Integer.valueOf(i))) {
            com.heytap.mcssdk.c.a aVar = new com.heytap.mcssdk.c.a(System.currentTimeMillis(), 1);
            this.mAppLimitMap.put(Integer.valueOf(i), aVar);
            com.heytap.mcssdk.utils.d.b("addCommandToMap :appBean is null");
            return aVar;
        }
        com.heytap.mcssdk.c.a aVar2 = this.mAppLimitMap.get(Integer.valueOf(i));
        if (checkTimeNeedUpdate(aVar2)) {
            aVar2.a(1);
            aVar2.a(System.currentTimeMillis());
            str = "addCommandToMap : appLimitBean.setCount(1)";
        } else {
            aVar2.a(aVar2.b() + 1);
            str = "addCommandToMap :appLimitBean.getCount() + 1";
        }
        com.heytap.mcssdk.utils.d.b(str);
        return aVar2;
    }

    private synchronized void addParser(d dVar) {
        if (dVar != null) {
            this.mParsers.add(dVar);
        }
    }

    private synchronized void addProcessor(c cVar) {
        if (cVar != null) {
            this.mProcessors.add(cVar);
        }
    }

    private boolean checkAll() {
        return checkContext() && checkRegisterID();
    }

    private boolean checkContext() {
        return this.mContext != null;
    }

    private boolean checkRegisterID() {
        return this.mRegisterID != null;
    }

    private boolean checkTimeNeedUpdate(com.heytap.mcssdk.c.a aVar) {
        long jA = aVar.a();
        long jCurrentTimeMillis = System.currentTimeMillis();
        com.heytap.mcssdk.utils.d.b("checkTimeNeedUpdate : lastedTime " + jA + " currentTime:" + jCurrentTimeMillis);
        return jCurrentTimeMillis - jA > 1000;
    }

    public static PushService getInstance() {
        return a.a;
    }

    private Intent getIntent(int i, String str, JSONObject jSONObject) {
        Intent intent = new Intent();
        intent.setAction(getReceiveSdkAction(this.mContext));
        intent.setPackage(getMcsPackageName(this.mContext));
        intent.putExtra("type", i);
        JSONObject jSONObject2 = new JSONObject();
        try {
            jSONObject2.putOpt(APP_VERSION_NAME, Utils.getVersionName(this.mContext, this.mContext.getPackageName()));
            jSONObject2.putOpt(APP_VERSION_CODE, Integer.valueOf(Utils.getVersionCode(this.mContext, this.mContext.getPackageName())));
            if (jSONObject != null) {
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    jSONObject2.putOpt(next, jSONObject.get(next));
                }
            }
        } catch (Exception unused) {
        } catch (Throwable th) {
            intent.putExtra("extra", jSONObject2.toString());
            throw th;
        }
        intent.putExtra("extra", jSONObject2.toString());
        intent.putExtra("params", str);
        intent.putExtra("appPackage", this.mContext.getPackageName());
        intent.putExtra(com.heytap.mcssdk.constant.b.z, this.mAuthCode);
        intent.putExtra(com.heytap.mcssdk.constant.b.A, this.mVerifyCode);
        intent.putExtra(com.heytap.mcssdk.constant.b.B, this.mRegisterID);
        intent.putExtra(com.heytap.mcssdk.constant.b.C, getSDKVersionName());
        return intent;
    }

    private String getNewMcsPackageName(Context context) {
        boolean z;
        boolean z2;
        if (TextUtils.isEmpty(NEW_MCS_RECEIVE_SDK_ACTION)) {
            NEW_MCS_RECEIVE_SDK_ACTION = new String(com.heytap.mcssdk.a.a.b(NEW_MCS_RECEIVE_SDK_ACTION_Base64));
        }
        List<ResolveInfo> listQueryIntentServices = context.getPackageManager().queryIntentServices(new Intent(NEW_MCS_RECEIVE_SDK_ACTION), 8192);
        if (Build.VERSION.SDK_INT < 24) {
            return null;
        }
        Iterator<ResolveInfo> it = listQueryIntentServices.iterator();
        while (it.hasNext()) {
            String str = it.next().serviceInfo.packageName;
            try {
                z = (context.getPackageManager().getApplicationInfo(str, 0).flags & 1) == 1;
                z2 = context.getPackageManager().getPackageUid(str, 0) == context.getPackageManager().getPackageUid("android", 0);
            } catch (PackageManager.NameNotFoundException unused) {
            }
            if (z || z2) {
                return str;
            }
        }
        return null;
    }

    public static int getSDKVersionCode() {
        return 3000;
    }

    public static String getSDKVersionName() {
        return com.pushsdk.a.f;
    }

    private boolean isSupportPushInner(Context context) {
        if (this.mContext == null) {
            this.mContext = context.getApplicationContext();
        }
        String mcsPackageName = getMcsPackageName(this.mContext);
        return Utils.isExistPackage(this.mContext, mcsPackageName) && Utils.getVersionCode(this.mContext, mcsPackageName) >= 1019 && Utils.isSupportPush(this.mContext, mcsPackageName, SUPPORT_OPEN_PUSH);
    }

    @Deprecated
    private static void onAppStart(Context context) {
        StatUtil.statisticMessage(context, new MessageStat(context.getPackageName(), "app_start", null));
    }

    private void startMcsService(int i, String str, JSONObject jSONObject) {
        if (checkCommandLimit(i)) {
            ICallBackResultService iCallBackResultService = this.mICallBackResultService;
            if (iCallBackResultService != null) {
                iCallBackResultService.onError(getErrorCode(i), "api_call_too_frequently");
                return;
            }
            return;
        }
        try {
            this.mContext.startService(getIntent(i, str, jSONObject));
        } catch (Exception e) {
            com.heytap.mcssdk.utils.d.e("startMcsService--Exception" + e.getMessage());
        }
    }

    private void startMcsService(int i, JSONObject jSONObject) {
        startMcsService(i, "", jSONObject);
    }

    public void bindMcsService(int i) {
        if (!checkCommandLimit(i)) {
            final Intent intent = getIntent(i, "", null);
            this.mContext.bindService(intent, new ServiceConnection() {
                @Override
                public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
                    Bundle bundle = new Bundle();
                    bundle.putAll(intent.getExtras());
                    try {
                        IMcsSdkService.Stub.asInterface(iBinder).process(bundle);
                    } catch (Exception e) {
                        com.heytap.mcssdk.utils.d.b("bindMcsService exception:" + e);
                    }
                    PushService.this.mContext.unbindService(this);
                }

                @Override
                public void onServiceDisconnected(ComponentName componentName) {
                }
            }, 1);
        } else {
            ICallBackResultService iCallBackResultService = this.mICallBackResultService;
            if (iCallBackResultService != null) {
                iCallBackResultService.onError(getErrorCode(i), "api_call_too_frequently");
            }
        }
    }

    public boolean checkCommandLimit(int i) {
        return (i == 12291 || i == 12312 || addCommandToMap(i).b() <= 2) ? false : true;
    }

    @Override
    public void clearNotificationType() {
        clearNotificationType(null);
    }

    @Override
    public void clearNotificationType(JSONObject jSONObject) {
        if (checkAll()) {
            startMcsService(MessageConstant.CommandId.COMMAND_CLEAR_NOTIFICATION_TYPE, jSONObject);
        } else {
            com.heytap.mcssdk.utils.d.e(com.heytap.mcssdk.utils.d.a, "please call the register first!");
        }
    }

    @Override
    public void clearNotifications() {
        clearNotifications(null);
    }

    @Override
    public void clearNotifications(JSONObject jSONObject) {
        if (checkContext()) {
            startMcsService(MessageConstant.CommandId.COMMAND_CLEAR_PKG_NOTIFICATION, jSONObject);
        } else {
            com.heytap.mcssdk.utils.d.e(com.heytap.mcssdk.utils.d.a, "please call the register first!");
        }
    }

    @Override
    public void disableAppNotificationSwitch(ISetAppNotificationCallBackService iSetAppNotificationCallBackService) {
        if (checkContext()) {
            this.mISetAppNotificationCallBackService = iSetAppNotificationCallBackService;
            startMcsService(MessageConstant.CommandId.COMMAND_APP_NOTIFICATION_CLOSE, null);
        } else if (getPushCallback() != null) {
            this.mISetAppNotificationCallBackService.onSetAppNotificationSwitch(-2);
        }
    }

    @Override
    public void enableAppNotificationSwitch(ISetAppNotificationCallBackService iSetAppNotificationCallBackService) {
        if (checkContext()) {
            this.mISetAppNotificationCallBackService = iSetAppNotificationCallBackService;
            startMcsService(MessageConstant.CommandId.COMMAND_APP_NOTIFICATION_OPEN, null);
        } else {
            ISetAppNotificationCallBackService iSetAppNotificationCallBackService2 = this.mISetAppNotificationCallBackService;
            if (iSetAppNotificationCallBackService2 != null) {
                iSetAppNotificationCallBackService2.onSetAppNotificationSwitch(-2);
            }
        }
    }

    public Map<Integer, com.heytap.mcssdk.c.a> getAppLimitMap() {
        return this.mAppLimitMap;
    }

    @Override
    public void getAppNotificationSwitch(IGetAppNotificationCallBackService iGetAppNotificationCallBackService) {
        if (checkContext()) {
            this.mIGetAppNotificationCallBackService = iGetAppNotificationCallBackService;
            startMcsService(MessageConstant.CommandId.COMMAND_APP_NOTIFICATION_GET, null);
        } else {
            IGetAppNotificationCallBackService iGetAppNotificationCallBackService2 = this.mIGetAppNotificationCallBackService;
            if (iGetAppNotificationCallBackService2 != null) {
                iGetAppNotificationCallBackService2.onGetAppNotificationSwitch(-2, 0);
            }
        }
    }

    public Context getContext() {
        return this.mContext;
    }

    public int getErrorCode(int i) {
        switch (i) {
            case MessageConstant.CommandId.COMMAND_REGISTER:
                return -1;
            case MessageConstant.CommandId.COMMAND_UNREGISTER:
                return -2;
            case MessageConstant.CommandId.COMMAND_STATISTIC:
                return -14;
            default:
                switch (i) {
                    case MessageConstant.CommandId.COMMAND_SET_PUSH_TIME:
                        return -11;
                    case MessageConstant.CommandId.COMMAND_PAUSE_PUSH:
                        return -3;
                    case MessageConstant.CommandId.COMMAND_RESUME_PUSH:
                        return -4;
                    default:
                        switch (i) {
                            case MessageConstant.CommandId.COMMAND_GET_PUSH_STATUS:
                                return -10;
                            case MessageConstant.CommandId.COMMAND_SET_NOTIFICATION_TYPE:
                                return -6;
                            case MessageConstant.CommandId.COMMAND_CLEAR_NOTIFICATION_TYPE:
                                return -7;
                            case MessageConstant.CommandId.COMMAND_GET_NOTIFICATION_STATUS:
                                return -5;
                            case MessageConstant.CommandId.COMMAND_SET_NOTIFICATION_SETTINGS:
                                return -8;
                            case MessageConstant.CommandId.COMMAND_CLEAR_PKG_NOTIFICATION:
                                return -9;
                            case MessageConstant.CommandId.COMMAND_SEND_INSTANT_ACK:
                                return -13;
                            case MessageConstant.CommandId.COMMAND_NOTIFICATION_ALLOWANCE:
                                return -12;
                            default:
                                switch (i) {
                                    case MessageConstant.CommandId.COMMAND_APP_NOTIFICATION_OPEN:
                                        return -15;
                                    case MessageConstant.CommandId.COMMAND_APP_NOTIFICATION_CLOSE:
                                        return -16;
                                    case MessageConstant.CommandId.COMMAND_APP_NOTIFICATION_GET:
                                        return -17;
                                    default:
                                        return 0;
                                }
                        }
                }
        }
    }

    public String getMcsPackageName(Context context) {
        boolean z;
        if (sMcsPkgName == null) {
            String newMcsPackageName = getNewMcsPackageName(context);
            if (newMcsPackageName == null) {
                sMcsPkgName = Utils.getString(OLD_MCS_PACKAGE);
                z = false;
            } else {
                sMcsPkgName = newMcsPackageName;
                z = true;
            }
            sIsNewMcsPkg = z;
        }
        return sMcsPkgName;
    }

    @Override
    public void getNotificationStatus() {
        getNotificationStatus(null);
    }

    @Override
    public void getNotificationStatus(JSONObject jSONObject) {
        if (checkAll()) {
            startMcsService(MessageConstant.CommandId.COMMAND_GET_NOTIFICATION_STATUS, jSONObject);
        } else if (getPushCallback() != null) {
            getPushCallback().onGetNotificationStatus(-2, 0);
        }
    }

    public List<d> getParsers() {
        return this.mParsers;
    }

    public List<c> getProcessors() {
        return this.mProcessors;
    }

    public ICallBackResultService getPushCallback() {
        return this.mICallBackResultService;
    }

    public IGetAppNotificationCallBackService getPushGetAppNotificationCallBack() {
        return this.mIGetAppNotificationCallBackService;
    }

    public ISetAppNotificationCallBackService getPushSetAppNotificationCallBack() {
        return this.mISetAppNotificationCallBackService;
    }

    public void getPushStatus() {
        if (checkAll()) {
            startMcsService(MessageConstant.CommandId.COMMAND_GET_PUSH_STATUS, null);
        } else if (getPushCallback() != null) {
            getPushCallback().onGetPushStatus(-2, 0);
        }
    }

    public int getPushVersionCode() {
        if (!checkContext()) {
            return 0;
        }
        Context context = this.mContext;
        return Utils.getVersionCode(context, getMcsPackageName(context));
    }

    public String getPushVersionName() {
        if (!checkContext()) {
            return "";
        }
        Context context = this.mContext;
        return Utils.getVersionName(context, getMcsPackageName(context));
    }

    public String getReceiveSdkAction(Context context) {
        if (sMcsPkgName == null) {
            getNewMcsPackageName(context);
        }
        if (!sIsNewMcsPkg) {
            return Utils.getString(OLD_MCS_RECEIVE_SDK_ACTION);
        }
        if (TextUtils.isEmpty(NEW_MCS_RECEIVE_SDK_ACTION)) {
            NEW_MCS_RECEIVE_SDK_ACTION = new String(com.heytap.mcssdk.a.a.b(NEW_MCS_RECEIVE_SDK_ACTION_Base64));
        }
        return NEW_MCS_RECEIVE_SDK_ACTION;
    }

    @Override
    public void getRegister() {
        getRegister(null);
    }

    @Override
    public void getRegister(JSONObject jSONObject) {
        if (checkContext()) {
            startMcsService(MessageConstant.CommandId.COMMAND_REGISTER, jSONObject);
        } else if (getPushCallback() != null) {
            getPushCallback().onRegister(-2, null);
        }
    }

    @Override
    public String getRegisterID() {
        return this.mRegisterID;
    }

    public PushService init(Context context, boolean z) {
        if (context == null) {
            throw new IllegalArgumentException("context can't be null");
        }
        innerInit(context);
        new com.heytap.mcssdk.b.a().a(this.mContext);
        com.heytap.mcssdk.utils.d.f(z);
        return this;
    }

    public void innerInit(Context context) {
        boolean z;
        Context applicationContext = context.getApplicationContext();
        this.mContext = applicationContext;
        if (sMcsPkgName == null) {
            String newMcsPackageName = getNewMcsPackageName(applicationContext);
            if (newMcsPackageName == null) {
                sMcsPkgName = Utils.getString(OLD_MCS_PACKAGE);
                z = false;
            } else {
                sMcsPkgName = newMcsPackageName;
                z = true;
            }
            sIsNewMcsPkg = z;
        }
    }

    public boolean isSupportPushByClient(Context context) {
        return isSupportPushInner(context);
    }

    @Override
    public void openNotificationSettings() {
        openNotificationSettings(null);
    }

    @Override
    public void openNotificationSettings(JSONObject jSONObject) {
        if (checkAll()) {
            startMcsService(MessageConstant.CommandId.COMMAND_SET_NOTIFICATION_SETTINGS, jSONObject);
        } else {
            com.heytap.mcssdk.utils.d.e(com.heytap.mcssdk.utils.d.a, "please call the register first!");
        }
    }

    @Override
    public void pausePush() {
        pausePush(null);
    }

    @Override
    public void pausePush(JSONObject jSONObject) {
        if (checkAll()) {
            startMcsService(MessageConstant.CommandId.COMMAND_PAUSE_PUSH, jSONObject);
        } else {
            com.heytap.mcssdk.utils.d.e(com.heytap.mcssdk.utils.d.a, "please call the register first!");
        }
    }

    @Override
    public void register(Context context, String str, String str2, ICallBackResultService iCallBackResultService) {
        register(context, str, str2, null, iCallBackResultService);
    }

    @Override
    public void register(Context context, String str, String str2, JSONObject jSONObject, ICallBackResultService iCallBackResultService) {
        if (context == null) {
            if (iCallBackResultService != null) {
                iCallBackResultService.onRegister(-2, null);
                return;
            }
            return;
        }
        if (this.mContext == null) {
            this.mContext = context.getApplicationContext();
        }
        if (!Utils.isSupportPushByClient(this.mContext)) {
            if (iCallBackResultService != null) {
                iCallBackResultService.onRegister(-2, null);
                return;
            }
            return;
        }
        this.mAuthCode = str;
        this.mVerifyCode = str2;
        this.mICallBackResultService = iCallBackResultService;
        if (jSONObject == null) {
            jSONObject = new JSONObject();
        }
        try {
            jSONObject.putOpt(DBDefinition.APP_VERSION_CODE, Integer.valueOf(Utils.getVersionCode(context)));
            jSONObject.putOpt("appVersionName", Utils.getVersionName(context));
        } catch (JSONException e) {
            com.heytap.mcssdk.utils.d.e("register-Exception:" + e.getMessage());
        }
        startMcsService(MessageConstant.CommandId.COMMAND_REGISTER, jSONObject);
    }

    @Override
    public void requestNotificationPermission() {
        if (checkContext()) {
            bindMcsService(MessageConstant.CommandId.COMMAND_NOTIFICATION_ALLOWANCE);
        } else {
            com.heytap.mcssdk.utils.d.e(com.heytap.mcssdk.utils.d.a, "please call the register first!");
        }
    }

    @Override
    public void resumePush() {
        resumePush(null);
    }

    @Override
    public void resumePush(JSONObject jSONObject) {
        if (checkAll()) {
            startMcsService(MessageConstant.CommandId.COMMAND_RESUME_PUSH, jSONObject);
        } else {
            com.heytap.mcssdk.utils.d.e(com.heytap.mcssdk.utils.d.a, "please call the register first!");
        }
    }

    public void setAppKeySecret(String str, String str2) {
        this.mAuthCode = str;
        this.mVerifyCode = str2;
    }

    @Override
    public void setNotificationType(int i) {
        setNotificationType(i, null);
    }

    @Override
    public void setNotificationType(int i, JSONObject jSONObject) {
        if (!checkAll()) {
            com.heytap.mcssdk.utils.d.e(com.heytap.mcssdk.utils.d.a, "please call the register first!");
            return;
        }
        startMcsService(MessageConstant.CommandId.COMMAND_SET_NOTIFICATION_TYPE, i + "", jSONObject);
    }

    public void setPushCallback(ICallBackResultService iCallBackResultService) {
        this.mICallBackResultService = iCallBackResultService;
    }

    @Override
    public void setPushTime(List<Integer> list, int i, int i2, int i3, int i4) {
        setPushTime(list, i, i2, i3, i4, null);
    }

    @Override
    public void setPushTime(List<Integer> list, int i, int i2, int i3, int i4, JSONObject jSONObject) {
        if (!checkAll()) {
            if (getPushCallback() != null) {
                getPushCallback().onSetPushTime(-2, "please call the register first!");
                return;
            }
            return;
        }
        if (list == null || list.size() <= 0 || i < 0 || i2 < 0 || i3 < i || i3 > 23 || i4 < i2 || i4 > 59) {
            throw new IllegalArgumentException("params are not all right,please check params");
        }
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("weekDays", com.heytap.mcssdk.c.b.a(list));
            jSONObject2.put("startHour", i);
            jSONObject2.put("startMin", i2);
            jSONObject2.put("endHour", i3);
            jSONObject2.put("endMin", i4);
            startMcsService(MessageConstant.CommandId.COMMAND_SET_PUSH_TIME, jSONObject2.toString(), jSONObject);
        } catch (JSONException e) {
            com.heytap.mcssdk.utils.d.e(com.heytap.mcssdk.utils.d.a, e.getLocalizedMessage());
        }
    }

    @Override
    public void setRegisterID(String str) {
        this.mRegisterID = str;
    }

    @Override
    public void unRegister() {
        unRegister(null);
    }

    public void unRegister(Context context, String str, String str2, JSONObject jSONObject, ICallBackResultService iCallBackResultService) {
        this.mAuthCode = str;
        this.mVerifyCode = str2;
        this.mContext = context.getApplicationContext();
        this.mICallBackResultService = iCallBackResultService;
        unRegister(jSONObject);
    }

    @Override
    public void unRegister(JSONObject jSONObject) {
        if (checkContext()) {
            startMcsService(MessageConstant.CommandId.COMMAND_UNREGISTER, jSONObject);
        } else if (getPushCallback() != null) {
            getPushCallback().onUnRegister(-2);
        }
    }
}
