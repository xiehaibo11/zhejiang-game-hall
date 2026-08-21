package com.huawei.hms.api;

import android.app.Activity;
import android.app.PendingIntent;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.RemoteException;
import android.text.TextUtils;
import com.huawei.hms.api.Api;
import com.huawei.hms.api.HuaweiApiClient;
import com.huawei.hms.common.api.ConnectionPostProcessor;
import com.huawei.hms.common.internal.AutoLifecycleFragment;
import com.huawei.hms.core.aidl.IMessageEntity;
import com.huawei.hms.core.aidl.RequestHeader;
import com.huawei.hms.core.aidl.ResponseHeader;
import com.huawei.hms.core.aidl.c;
import com.huawei.hms.core.aidl.d;
import com.huawei.hms.support.api.PendingResultImpl;
import com.huawei.hms.support.api.ResolveResult;
import com.huawei.hms.support.api.client.ApiClient;
import com.huawei.hms.support.api.client.BundleResult;
import com.huawei.hms.support.api.client.InnerApiClient;
import com.huawei.hms.support.api.client.PendingResult;
import com.huawei.hms.support.api.client.ResultCallback;
import com.huawei.hms.support.api.client.Status;
import com.huawei.hms.support.api.client.SubAppInfo;
import com.huawei.hms.support.api.core.ConnectService;
import com.huawei.hms.support.api.entity.auth.PermissionInfo;
import com.huawei.hms.support.api.entity.auth.Scope;
import com.huawei.hms.support.api.entity.core.CheckConnectInfo;
import com.huawei.hms.support.api.entity.core.CommonCode;
import com.huawei.hms.support.api.entity.core.ConnectInfo;
import com.huawei.hms.support.api.entity.core.ConnectResp;
import com.huawei.hms.support.api.entity.core.DisconnectInfo;
import com.huawei.hms.support.api.entity.core.DisconnectResp;
import com.huawei.hms.support.api.entity.core.JosGetNoticeResp;
import com.huawei.hms.support.log.HMSLog;
import com.huawei.hms.utils.Checker;
import com.huawei.hms.utils.HMSPackageManager;
import com.huawei.hms.utils.PackageManagerHelper;
import com.huawei.hms.utils.UIUtil;
import com.huawei.hms.utils.Util;
import com.huawei.updatesdk.UpdateSdkAPI;
import com.huawei.updatesdk.service.appmgr.bean.ApkUpgradeInfo;
import com.huawei.updatesdk.service.otaupdate.CheckUpdateCallBack;
import com.huawei.updatesdk.service.otaupdate.UpdateKey;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.ReentrantLock;

public class HuaweiApiClientImpl extends HuaweiApiClient implements InnerApiClient, ServiceConnection {
    private static final Object B = new Object();
    private static final Object C = new Object();
    public static final String DEFAULT_ACCOUNT = "<<default account>>";
    public static final int SIGN_IN_MODE_OPTIONAL = 2;
    public static final int SIGN_IN_MODE_REQUIRED = 1;
    private CheckUpdateCallBack A;
    private final Context b;
    private final String c;
    private String d;
    private String e;
    private volatile com.huawei.hms.core.aidl.d f;
    private String g;
    private WeakReference<Activity> h;
    private WeakReference<Activity> i;
    private List<Scope> l;
    private List<PermissionInfo> m;
    private Map<Api<?>, Api.ApiOptions> n;
    private SubAppInfo o;
    private final ReentrantLock s;
    private final Condition t;
    private ConnectionResult u;
    private HuaweiApiClient.ConnectionCallbacks v;
    private HuaweiApiClient.OnConnectionFailedListener w;
    private Handler x;
    private Handler y;
    private CheckUpdatelistener z;
    private int a = -1;
    private boolean j = false;
    private AtomicInteger k = new AtomicInteger(1);
    private long p = 0;
    private int q = 0;
    private final Object r = new Object();

    class a implements CheckUpdateCallBack {
        a() {
        }

        @Override
        public void onMarketInstallInfo(Intent intent) {
            if (intent != null) {
                int intExtra = intent.getIntExtra(UpdateKey.MARKET_DLD_STATUS, -99);
                HMSLog.i("HuaweiApiClientImpl", "onMarketInstallInfo installState: " + intent.getIntExtra(UpdateKey.MARKET_INSTALL_STATE, -99) + ",installType: " + intent.getIntExtra(UpdateKey.MARKET_INSTALL_TYPE, -99) + ",downloadCode: " + intExtra);
            }
        }

        @Override
        public void onMarketStoreError(int i) {
            HMSLog.e("HuaweiApiClientImpl", "onMarketStoreError responseCode: " + i);
        }

        @Override
        public void onUpdateInfo(Intent intent) {
            if (intent == null || HuaweiApiClientImpl.this.z == null) {
                return;
            }
            try {
                int intExtra = intent.getIntExtra("status", -99);
                HMSLog.i("HuaweiApiClientImpl", "onUpdateInfo status: " + intExtra + ",failcause: " + intent.getIntExtra(UpdateKey.FAIL_CODE, -99) + ",isExit: " + intent.getBooleanExtra(UpdateKey.MUST_UPDATE, false));
                if (intExtra == 7) {
                    ApkUpgradeInfo apkUpgradeInfo = (ApkUpgradeInfo) intent.getSerializableExtra(UpdateKey.INFO);
                    if (apkUpgradeInfo != null) {
                        HMSLog.i("HuaweiApiClientImpl", "onUpdateInfo: " + apkUpgradeInfo.toString());
                    }
                    HuaweiApiClientImpl.this.z.onResult(1);
                } else if (intExtra == 3) {
                    HuaweiApiClientImpl.this.z.onResult(0);
                } else {
                    HuaweiApiClientImpl.this.z.onResult(-1);
                }
                HuaweiApiClientImpl.this.z = null;
            } catch (Exception e) {
                HMSLog.e("HuaweiApiClientImpl", "intent has some error" + e.getMessage());
                HuaweiApiClientImpl.this.z.onResult(-1);
            }
        }

        @Override
        public void onUpdateStoreError(int i) {
            HMSLog.e("HuaweiApiClientImpl", "onUpdateStoreError responseCode: " + i);
        }
    }

    class b implements Handler.Callback {
        b() {
        }

        @Override
        public boolean handleMessage(Message message) {
            if (message == null || message.what != 2) {
                return false;
            }
            HMSLog.e("HuaweiApiClientImpl", "In connect, bind core service time out");
            if (HuaweiApiClientImpl.this.k.get() == 5) {
                HuaweiApiClientImpl.this.c(1);
                HuaweiApiClientImpl.this.b();
            }
            return true;
        }
    }

    class c implements Handler.Callback {
        c() {
        }

        @Override
        public boolean handleMessage(Message message) {
            if (message == null || message.what != 3) {
                return false;
            }
            HMSLog.e("HuaweiApiClientImpl", "In connect, process time out");
            if (HuaweiApiClientImpl.this.k.get() == 2) {
                HuaweiApiClientImpl.this.c(1);
                HuaweiApiClientImpl.this.b();
            }
            return true;
        }
    }

    class d extends c.a {
        final ResultCallback a;

        d(HuaweiApiClientImpl huaweiApiClientImpl, ResultCallback resultCallback) {
            this.a = resultCallback;
        }

        @Override
        public void call(com.huawei.hms.core.aidl.b bVar) {
            if (bVar == null) {
                HMSLog.i("HuaweiApiClientImpl", "Exit asyncRequest onResult -1");
                this.a.onResult(new BundleResult(-1, null));
                return;
            }
            com.huawei.hms.core.aidl.e eVarA = com.huawei.hms.core.aidl.a.a(bVar.c());
            ResponseHeader responseHeader = new ResponseHeader();
            eVarA.a(bVar.b, responseHeader);
            BundleResult bundleResult = new BundleResult(responseHeader.getStatusCode(), bVar.a());
            HMSLog.i("HuaweiApiClientImpl", "Exit asyncRequest onResult");
            this.a.onResult(bundleResult);
        }
    }

    static class e extends PendingResultImpl<Status, IMessageEntity> {
        public e(ApiClient apiClient, String str, IMessageEntity iMessageEntity) {
            super(apiClient, str, iMessageEntity);
        }

        @Override
        public Status onComplete(IMessageEntity iMessageEntity) {
            return new Status(0);
        }
    }

    private class f implements ResultCallback<ResolveResult<ConnectResp>> {

        class a implements Runnable {
            final ResolveResult a;

            a(ResolveResult resolveResult) {
                this.a = resolveResult;
            }

            @Override
            public void run() {
                HuaweiApiClientImpl.this.a((ResolveResult<ConnectResp>) this.a);
            }
        }

        private f() {
        }

        @Override
        public void onResult(ResolveResult<ConnectResp> resolveResult) {
            new Handler(Looper.getMainLooper()).post(new a(resolveResult));
        }

        f(HuaweiApiClientImpl huaweiApiClientImpl, a aVar) {
            this();
        }
    }

    private class g implements ResultCallback<ResolveResult<DisconnectResp>> {

        class a implements Runnable {
            final ResolveResult a;

            a(ResolveResult resolveResult) {
                this.a = resolveResult;
            }

            @Override
            public void run() {
                HuaweiApiClientImpl.this.b((ResolveResult<DisconnectResp>) this.a);
            }
        }

        private g() {
        }

        @Override
        public void onResult(ResolveResult<DisconnectResp> resolveResult) {
            new Handler(Looper.getMainLooper()).post(new a(resolveResult));
        }

        g(HuaweiApiClientImpl huaweiApiClientImpl, a aVar) {
            this();
        }
    }

    private class h implements ResultCallback<ResolveResult<JosGetNoticeResp>> {
        private h() {
        }

        @Override
        public void onResult(ResolveResult<JosGetNoticeResp> resolveResult) {
            JosGetNoticeResp value;
            Intent noticeIntent;
            if (resolveResult == null || !resolveResult.getStatus().isSuccess() || (noticeIntent = (value = resolveResult.getValue()).getNoticeIntent()) == null || value.getStatusCode() != 0) {
                return;
            }
            HMSLog.i("HuaweiApiClientImpl", "get notice has intent.");
            Activity validActivity = Util.getValidActivity((Activity) HuaweiApiClientImpl.this.h.get(), HuaweiApiClientImpl.this.getTopActivity());
            if (validActivity == null) {
                HMSLog.e("HuaweiApiClientImpl", "showNotice no valid activity!");
            } else {
                HuaweiApiClientImpl.this.j = true;
                validActivity.startActivity(noticeIntent);
            }
        }

        h(HuaweiApiClientImpl huaweiApiClientImpl, a aVar) {
            this();
        }
    }

    public HuaweiApiClientImpl(Context context) {
        ReentrantLock reentrantLock = new ReentrantLock();
        this.s = reentrantLock;
        this.t = reentrantLock.newCondition();
        this.x = null;
        this.y = null;
        this.z = null;
        this.b = context;
        String appId = Util.getAppId(context);
        this.c = appId;
        this.d = appId;
        this.e = Util.getCpId(context);
    }

    private int e() {
        int hmsVersion = Util.getHmsVersion(this.b);
        if (hmsVersion != 0 && hmsVersion >= 20503000) {
            return hmsVersion;
        }
        int iF = f();
        if (h()) {
            if (iF < 20503000) {
                return 20503000;
            }
            return iF;
        }
        if (iF < 20600000) {
            return 20600000;
        }
        return iF;
    }

    private int f() {
        Integer num;
        int iIntValue;
        Map<Api<?>, Api.ApiOptions> apiMap = getApiMap();
        int i = 0;
        if (apiMap == null) {
            return 0;
        }
        Iterator<Api<?>> it = apiMap.keySet().iterator();
        while (it.hasNext()) {
            String apiName = it.next().getApiName();
            if (!TextUtils.isEmpty(apiName) && (num = HuaweiApiAvailability.getApiMap().get(apiName)) != null && (iIntValue = num.intValue()) > i) {
                i = iIntValue;
            }
        }
        return i;
    }

    private void g() {
        this.A = new a();
    }

    private boolean h() {
        Map<Api<?>, Api.ApiOptions> map = this.n;
        if (map == null) {
            return false;
        }
        Iterator<Api<?>> it = map.keySet().iterator();
        while (it.hasNext()) {
            if (HuaweiApiAvailability.HMS_API_NAME_GAME.equals(it.next().getApiName())) {
                return true;
            }
        }
        return false;
    }

    private void i() {
        Handler handler = this.x;
        if (handler != null) {
            handler.removeMessages(2);
        } else {
            this.x = new Handler(Looper.getMainLooper(), new b());
        }
        this.x.sendEmptyMessageDelayed(2, 5000L);
    }

    private void j() {
        synchronized (C) {
            if (this.y != null) {
                this.y.removeMessages(3);
            } else {
                this.y = new Handler(Looper.getMainLooper(), new c());
            }
            HMSLog.d("HuaweiApiClientImpl", "sendEmptyMessageDelayed for onConnectionResult 3 seconds. the result is : " + this.y.sendEmptyMessageDelayed(3, 3000L));
        }
    }

    private void k() {
        HMSLog.i("HuaweiApiClientImpl", "Enter sendConnectApiServceRequest.");
        ConnectService.connect(this, c()).setResultCallback(new f(this, null));
    }

    private void l() {
        ConnectService.disconnect(this, d()).setResultCallback(new g(this, null));
    }

    private void m() {
        HMSLog.i("HuaweiApiClientImpl", "Enter sendForceConnectApiServceRequest.");
        ConnectService.forceConnect(this, c()).setResultCallback(new f(this, null));
    }

    private void n() {
        if (this.j) {
            HMSLog.i("HuaweiApiClientImpl", "Connect notice has been shown.");
        } else if (HuaweiApiAvailability.getInstance().isHuaweiMobileNoticeAvailable(this.b) == 0) {
            ConnectService.getNotice(this, 0, "5.3.0.301").setResultCallback(new h(this, null));
        }
    }

    private void o() {
        Util.unBindServiceCatchException(this.b, this);
        this.f = null;
    }

    public int asyncRequest(Bundle bundle, String str, int i, ResultCallback<BundleResult> resultCallback) {
        HMSLog.i("HuaweiApiClientImpl", "Enter asyncRequest.");
        if (resultCallback == null || str == null || bundle == null) {
            HMSLog.e("HuaweiApiClientImpl", "arguments is invalid.");
            return CommonCode.ErrorCode.ARGUMENTS_INVALID;
        }
        if (!innerIsConnected()) {
            HMSLog.e("HuaweiApiClientImpl", "client is unConnect.");
            return CommonCode.ErrorCode.CLIENT_API_INVALID;
        }
        com.huawei.hms.core.aidl.b bVar = new com.huawei.hms.core.aidl.b(str, i);
        com.huawei.hms.core.aidl.e eVarA = com.huawei.hms.core.aidl.a.a(bVar.c());
        bVar.a(bundle);
        RequestHeader requestHeader = new RequestHeader(getAppID(), getPackageName(), 50300301, getSessionId());
        requestHeader.setApiNameList(getApiNameList());
        bVar.b = eVarA.a(requestHeader, new Bundle());
        try {
            getService().a(bVar, new d(this, resultCallback));
            return 0;
        } catch (RemoteException e2) {
            HMSLog.e("HuaweiApiClientImpl", "remote exception:" + e2.getMessage());
            return CommonCode.ErrorCode.INTERNAL_ERROR;
        }
    }

    @Override
    public void checkUpdate(Activity activity, CheckUpdatelistener checkUpdatelistener) {
        if (!Util.isAvailableLibExist(this.b)) {
            HMSLog.i("HuaweiApiClientImpl", "available lib does not exist.");
            return;
        }
        HMSLog.i("HuaweiApiClientImpl", "Enter checkUpdate");
        if (checkUpdatelistener == null) {
            HMSLog.e("HuaweiApiClientImpl", "listener is null!");
            return;
        }
        if (activity != null && !activity.isFinishing()) {
            this.z = checkUpdatelistener;
            if (this.A == null) {
                g();
            }
            UpdateSdkAPI.checkClientOTAUpdate(activity, this.A, true, 0, true);
            return;
        }
        HMSLog.e("HuaweiApiClientImpl", "checkUpdate, activity is illegal: " + activity);
        checkUpdatelistener.onResult(-1);
    }

    @Override
    public void connect(Activity activity) {
        HMSLog.i("HuaweiApiClientImpl", "====== HMSSDK version: 50300301 ======");
        int i = this.k.get();
        HMSLog.i("HuaweiApiClientImpl", "Enter connect, Connection Status: " + i);
        if (i == 3 || i == 5 || i == 2 || i == 4) {
            return;
        }
        if (activity != null) {
            this.h = new WeakReference<>(activity);
            this.i = new WeakReference<>(activity);
        }
        this.d = TextUtils.isEmpty(this.c) ? Util.getAppId(this.b) : this.c;
        int iE = e();
        HMSLog.i("HuaweiApiClientImpl", "connect minVersion:" + iE);
        HuaweiApiAvailability.setServicesVersionCode(iE);
        int iIsHuaweiMobileServicesAvailable = HuaweiMobileServicesUtil.isHuaweiMobileServicesAvailable(this.b, iE);
        HMSLog.i("HuaweiApiClientImpl", "In connect, isHuaweiMobileServicesAvailable result: " + iIsHuaweiMobileServicesAvailable);
        this.q = HMSPackageManager.getInstance(this.b).getHmsVersionCode();
        if (iIsHuaweiMobileServicesAvailable != 0) {
            if (this.w != null) {
                b(iIsHuaweiMobileServicesAvailable);
                return;
            }
            return;
        }
        c(5);
        if (this.f == null) {
            a();
            return;
        }
        c(2);
        k();
        j();
    }

    @Override
    public void connectForeground() {
        HMSLog.i("HuaweiApiClientImpl", "====== HMSSDK version: 50300301 ======");
        int i = this.k.get();
        HMSLog.i("HuaweiApiClientImpl", "Enter forceConnect, Connection Status: " + i);
        if (i == 3 || i == 5 || i == 2 || i == 4) {
            return;
        }
        this.d = TextUtils.isEmpty(this.c) ? Util.getAppId(this.b) : this.c;
        m();
    }

    @Override
    public void disableLifeCycleManagement(Activity activity) {
        if (this.a < 0) {
            throw new IllegalStateException("disableLifeCycleManagement failed");
        }
        AutoLifecycleFragment autoLifecycleFragment = AutoLifecycleFragment.getInstance(activity);
        if (autoLifecycleFragment == null) {
            return;
        }
        autoLifecycleFragment.stopAutoManage(this.a);
    }

    @Override
    public PendingResult<Status> discardAndReconnect() {
        return new e(this, null, null);
    }

    @Override
    public void disconnect() {
        int i = this.k.get();
        HMSLog.i("HuaweiApiClientImpl", "Enter disconnect, Connection Status: " + i);
        if (i == 2) {
            c(4);
            return;
        }
        if (i == 3) {
            c(4);
            l();
        } else {
            if (i != 5) {
                return;
            }
            a(2);
            c(4);
        }
    }

    @Override
    public Map<Api<?>, Api.ApiOptions> getApiMap() {
        return this.n;
    }

    @Override
    public List<String> getApiNameList() {
        ArrayList arrayList = new ArrayList();
        Map<Api<?>, Api.ApiOptions> map = this.n;
        if (map != null) {
            Iterator<Api<?>> it = map.keySet().iterator();
            while (it.hasNext()) {
                arrayList.add(it.next().getApiName());
            }
        }
        return arrayList;
    }

    @Override
    public String getAppID() {
        return this.d;
    }

    @Override
    public ConnectionResult getConnectionResult(Api<?> api) {
        if (isConnected()) {
            this.u = null;
            return new ConnectionResult(0, (PendingIntent) null);
        }
        ConnectionResult connectionResult = this.u;
        return connectionResult != null ? connectionResult : new ConnectionResult(13, (PendingIntent) null);
    }

    @Override
    public Context getContext() {
        return this.b;
    }

    @Override
    public String getCpID() {
        return this.e;
    }

    @Override
    public String getPackageName() {
        return this.b.getPackageName();
    }

    @Override
    public List<PermissionInfo> getPermissionInfos() {
        return this.m;
    }

    @Override
    public List<Scope> getScopes() {
        return this.l;
    }

    @Override
    public com.huawei.hms.core.aidl.d getService() {
        return this.f;
    }

    @Override
    public String getSessionId() {
        return this.g;
    }

    @Override
    public final SubAppInfo getSubAppInfo() {
        return this.o;
    }

    @Override
    public Activity getTopActivity() {
        WeakReference<Activity> weakReference = this.i;
        if (weakReference == null) {
            return null;
        }
        return weakReference.get();
    }

    @Override
    public String getTransportName() {
        return IPCTransport.class.getName();
    }

    @Override
    public boolean hasConnectedApi(Api<?> api) {
        return isConnected();
    }

    @Override
    public boolean hasConnectionFailureListener(HuaweiApiClient.OnConnectionFailedListener onConnectionFailedListener) {
        Checker.checkNonNull(onConnectionFailedListener, "onConnectionFailedListener should not be null");
        synchronized (this.r) {
            return this.w == onConnectionFailedListener;
        }
    }

    @Override
    public boolean hasConnectionSuccessListener(HuaweiApiClient.ConnectionCallbacks connectionCallbacks) {
        Checker.checkNonNull(connectionCallbacks, "connectionCallbacksListener should not be null");
        synchronized (this.r) {
            return this.v == connectionCallbacks;
        }
    }

    @Override
    public ConnectionResult holdUpConnect() {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            throw new IllegalStateException("blockingConnect must not be called on the UI thread");
        }
        this.s.lock();
        try {
            connect((Activity) null);
            while (isConnecting()) {
                this.t.await();
            }
            if (!isConnected()) {
                return this.u != null ? this.u : new ConnectionResult(13, (PendingIntent) null);
            }
            this.u = null;
            return new ConnectionResult(0, (PendingIntent) null);
        } catch (InterruptedException unused) {
            Thread.currentThread().interrupt();
            return new ConnectionResult(15, (PendingIntent) null);
        } finally {
            this.s.unlock();
        }
    }

    @Override
    public boolean innerIsConnected() {
        return this.k.get() == 3 || this.k.get() == 4;
    }

    @Override
    public boolean isConnected() {
        if (this.q == 0) {
            this.q = HMSPackageManager.getInstance(this.b).getHmsVersionCode();
        }
        if (this.q >= 20504000) {
            return innerIsConnected();
        }
        long jCurrentTimeMillis = System.currentTimeMillis() - this.p;
        if (jCurrentTimeMillis > 0 && jCurrentTimeMillis < 300000) {
            return innerIsConnected();
        }
        if (!innerIsConnected()) {
            return false;
        }
        Status status = ((ResolveResult) ConnectService.checkconnect(this, new CheckConnectInfo()).awaitOnAnyThread(2000L, TimeUnit.MILLISECONDS)).getStatus();
        if (status.isSuccess()) {
            this.p = System.currentTimeMillis();
            return true;
        }
        int statusCode = status.getStatusCode();
        HMSLog.i("HuaweiApiClientImpl", "isConnected is false, statuscode:" + statusCode);
        if (statusCode == 907135004) {
            return false;
        }
        o();
        c(1);
        this.p = System.currentTimeMillis();
        return false;
    }

    @Override
    public boolean isConnecting() {
        int i = this.k.get();
        return i == 2 || i == 5;
    }

    @Override
    public void onPause(Activity activity) {
        HMSLog.i("HuaweiApiClientImpl", "onPause");
    }

    @Override
    public void onResume(Activity activity) {
        if (activity != null) {
            HMSLog.i("HuaweiApiClientImpl", "onResume");
            this.i = new WeakReference<>(activity);
        }
    }

    @Override
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        HMSLog.i("HuaweiApiClientImpl", "Enter onServiceConnected.");
        a(2);
        this.f = d.a.a(iBinder);
        if (this.f != null) {
            if (this.k.get() == 5) {
                c(2);
                k();
                j();
                return;
            } else {
                if (this.k.get() != 3) {
                    o();
                    return;
                }
                return;
            }
        }
        HMSLog.e("HuaweiApiClientImpl", "In onServiceConnected, mCoreService must not be null.");
        o();
        c(1);
        if (this.w != null) {
            PendingIntent resolveErrorPendingIntent = null;
            WeakReference<Activity> weakReference = this.h;
            if (weakReference != null && weakReference.get() != null) {
                resolveErrorPendingIntent = HuaweiApiAvailability.getInstance().getResolveErrorPendingIntent(this.h.get(), 10);
            }
            ConnectionResult connectionResult = new ConnectionResult(10, resolveErrorPendingIntent);
            this.w.onConnectionFailed(connectionResult);
            this.u = connectionResult;
        }
    }

    @Override
    public void onServiceDisconnected(ComponentName componentName) {
        HMSLog.i("HuaweiApiClientImpl", "Enter onServiceDisconnected.");
        this.f = null;
        c(1);
        HuaweiApiClient.ConnectionCallbacks connectionCallbacks = this.v;
        if (connectionCallbacks != null) {
            connectionCallbacks.onConnectionSuspended(1);
        }
    }

    @Override
    public void print(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
    }

    @Override
    public void reconnect() {
        disconnect();
        connect((Activity) null);
    }

    @Override
    public void removeConnectionFailureListener(HuaweiApiClient.OnConnectionFailedListener onConnectionFailedListener) {
        Checker.checkNonNull(onConnectionFailedListener, "onConnectionFailedListener should not be null");
        synchronized (this.r) {
            if (this.w != onConnectionFailedListener) {
                HMSLog.w("HuaweiApiClientImpl", "unregisterConnectionFailedListener: this onConnectionFailedListener has not been registered");
            } else {
                this.w = null;
            }
        }
    }

    @Override
    public void removeConnectionSuccessListener(HuaweiApiClient.ConnectionCallbacks connectionCallbacks) {
        Checker.checkNonNull(connectionCallbacks, "connectionCallbacksListener should not be null");
        synchronized (this.r) {
            if (this.v != connectionCallbacks) {
                HMSLog.w("HuaweiApiClientImpl", "unregisterConnectionCallback: this connectionCallbacksListener has not been registered");
            } else {
                this.v = null;
            }
        }
    }

    public void setApiMap(Map<Api<?>, Api.ApiOptions> map) {
        this.n = map;
    }

    protected void setAutoLifecycleClientId(int i) {
        this.a = i;
    }

    @Override
    public void setConnectionCallbacks(HuaweiApiClient.ConnectionCallbacks connectionCallbacks) {
        this.v = connectionCallbacks;
    }

    @Override
    public void setConnectionFailedListener(HuaweiApiClient.OnConnectionFailedListener onConnectionFailedListener) {
        this.w = onConnectionFailedListener;
    }

    public void setHasShowNotice(boolean z) {
        this.j = z;
    }

    public void setPermissionInfos(List<PermissionInfo> list) {
        this.m = list;
    }

    public void setScopes(List<Scope> list) {
        this.l = list;
    }

    @Override
    public boolean setSubAppInfo(SubAppInfo subAppInfo) {
        HMSLog.i("HuaweiApiClientImpl", "Enter setSubAppInfo");
        if (subAppInfo == null) {
            HMSLog.e("HuaweiApiClientImpl", "subAppInfo is null");
            return false;
        }
        String subAppID = subAppInfo.getSubAppID();
        if (TextUtils.isEmpty(subAppID)) {
            HMSLog.e("HuaweiApiClientImpl", "subAppId is empty");
            return false;
        }
        if (subAppID.equals(TextUtils.isEmpty(this.c) ? Util.getAppId(this.b) : this.c)) {
            HMSLog.e("HuaweiApiClientImpl", "subAppId is host appid");
            return false;
        }
        this.o = new SubAppInfo(subAppInfo);
        return true;
    }

    private void c(int i) {
        this.k.set(i);
        if (i == 1 || i == 3 || i == 2) {
            this.s.lock();
            try {
                this.t.signalAll();
            } finally {
                this.s.unlock();
            }
        }
    }

    private DisconnectInfo d() {
        ArrayList arrayList = new ArrayList();
        Map<Api<?>, Api.ApiOptions> map = this.n;
        if (map != null) {
            Iterator<Api<?>> it = map.keySet().iterator();
            while (it.hasNext()) {
                arrayList.add(it.next().getApiName());
            }
        }
        return new DisconnectInfo(this.l, arrayList);
    }

    private void b(int i) {
        PendingIntent resolveErrorPendingIntent;
        WeakReference<Activity> weakReference = this.h;
        if (weakReference == null || weakReference.get() == null) {
            resolveErrorPendingIntent = null;
        } else {
            resolveErrorPendingIntent = HuaweiApiAvailability.getInstance().getResolveErrorPendingIntent(this.h.get(), i);
            HMSLog.i("HuaweiApiClientImpl", "connect 2.0 fail: " + i);
        }
        ConnectionResult connectionResult = new ConnectionResult(i, resolveErrorPendingIntent);
        this.w.onConnectionFailed(connectionResult);
        this.u = connectionResult;
    }

    private void a() {
        Intent intent = new Intent("com.huawei.hms.core.aidlservice");
        HMSPackageManager.getInstance(this.b).refresh();
        intent.setPackage(HMSPackageManager.getInstance(this.b).getHMSPackageName());
        synchronized (B) {
            if (this.b.bindService(intent, this, 1)) {
                i();
                return;
            }
            c(1);
            HMSLog.e("HuaweiApiClientImpl", "In connect, bind core service fail");
            b();
        }
    }

    private ConnectInfo c() {
        String packageSignature = new PackageManagerHelper(this.b).getPackageSignature(this.b.getPackageName());
        if (packageSignature == null) {
            packageSignature = "";
        }
        SubAppInfo subAppInfo = this.o;
        return new ConnectInfo(getApiNameList(), this.l, packageSignature, subAppInfo == null ? null : subAppInfo.getSubAppID());
    }

    private void b() {
        o();
        if (this.w != null) {
            int i = UIUtil.isBackground(this.b) ? 7 : 6;
            PendingIntent resolveErrorPendingIntent = null;
            WeakReference<Activity> weakReference = this.h;
            if (weakReference != null && weakReference.get() != null) {
                resolveErrorPendingIntent = HuaweiApiAvailability.getInstance().getResolveErrorPendingIntent(this.h.get(), i);
            }
            ConnectionResult connectionResult = new ConnectionResult(i, resolveErrorPendingIntent);
            this.w.onConnectionFailed(connectionResult);
            this.u = connectionResult;
        }
    }

    private void a(int i) {
        if (i == 2) {
            synchronized (B) {
                if (this.x != null) {
                    this.x.removeMessages(i);
                    this.x = null;
                }
            }
        }
        if (i == 3) {
            synchronized (C) {
                if (this.y != null) {
                    this.y.removeMessages(i);
                    this.y = null;
                }
            }
        }
        synchronized (B) {
            if (this.x != null) {
                this.x.removeMessages(2);
                this.x = null;
            }
        }
    }

    private void b(ResolveResult<DisconnectResp> resolveResult) {
        HMSLog.i("HuaweiApiClientImpl", "Enter onDisconnectionResult, disconnect from server result: " + resolveResult.getStatus().getStatusCode());
        o();
        c(1);
    }

    private void a(ResolveResult<ConnectResp> resolveResult) {
        HMSLog.i("HuaweiApiClientImpl", "Enter onConnectionResult");
        if (this.f != null && this.k.get() == 2) {
            a(3);
            ConnectResp value = resolveResult.getValue();
            if (value != null) {
                this.g = value.sessionId;
            }
            SubAppInfo subAppInfo = this.o;
            PendingIntent resolveErrorPendingIntent = null;
            String subAppID = subAppInfo == null ? null : subAppInfo.getSubAppID();
            if (!TextUtils.isEmpty(subAppID)) {
                this.d = subAppID;
            }
            int statusCode = resolveResult.getStatus().getStatusCode();
            HMSLog.i("HuaweiApiClientImpl", "Enter onConnectionResult, connect to server result: " + statusCode);
            if (Status.SUCCESS.equals(resolveResult.getStatus())) {
                if (resolveResult.getValue() != null) {
                    ProtocolNegotiate.getInstance().negotiate(resolveResult.getValue().protocolVersion);
                }
                c(3);
                this.u = null;
                HuaweiApiClient.ConnectionCallbacks connectionCallbacks = this.v;
                if (connectionCallbacks != null) {
                    connectionCallbacks.onConnected();
                }
                if (this.h != null) {
                    n();
                }
                for (Map.Entry<Api<?>, Api.ApiOptions> entry : getApiMap().entrySet()) {
                    if (entry.getKey().getmConnetctPostList() != null && !entry.getKey().getmConnetctPostList().isEmpty()) {
                        HMSLog.i("HuaweiApiClientImpl", "Enter onConnectionResult, get the ConnetctPostList ");
                        for (ConnectionPostProcessor connectionPostProcessor : entry.getKey().getmConnetctPostList()) {
                            HMSLog.i("HuaweiApiClientImpl", "Enter onConnectionResult, processor.run");
                            connectionPostProcessor.run(this, this.h);
                        }
                    }
                }
                return;
            }
            if (resolveResult.getStatus() != null && resolveResult.getStatus().getStatusCode() == 1001) {
                o();
                c(1);
                HuaweiApiClient.ConnectionCallbacks connectionCallbacks2 = this.v;
                if (connectionCallbacks2 != null) {
                    connectionCallbacks2.onConnectionSuspended(3);
                    return;
                }
                return;
            }
            o();
            c(1);
            if (this.w != null) {
                WeakReference<Activity> weakReference = this.h;
                if (weakReference != null && weakReference.get() != null) {
                    resolveErrorPendingIntent = HuaweiApiAvailability.getInstance().getResolveErrorPendingIntent(this.h.get(), statusCode);
                }
                ConnectionResult connectionResult = new ConnectionResult(statusCode, resolveErrorPendingIntent);
                this.w.onConnectionFailed(connectionResult);
                this.u = connectionResult;
                return;
            }
            return;
        }
        HMSLog.e("HuaweiApiClientImpl", "Invalid onConnectionResult");
    }

    @Override
    public void connect(int i) {
        connect((Activity) null);
    }

    @Override
    public ConnectionResult holdUpConnect(long j, TimeUnit timeUnit) {
        if (Looper.myLooper() != Looper.getMainLooper()) {
            this.s.lock();
            try {
                connect((Activity) null);
                long nanos = timeUnit.toNanos(j);
                while (isConnecting()) {
                    if (nanos <= 0) {
                        disconnect();
                        return new ConnectionResult(14, (PendingIntent) null);
                    }
                    nanos = this.t.awaitNanos(nanos);
                }
                if (isConnected()) {
                    this.u = null;
                    return new ConnectionResult(0, (PendingIntent) null);
                }
                if (this.u != null) {
                    return this.u;
                }
                return new ConnectionResult(13, (PendingIntent) null);
            } catch (InterruptedException unused) {
                Thread.currentThread().interrupt();
                return new ConnectionResult(15, (PendingIntent) null);
            } finally {
                this.s.unlock();
            }
        }
        throw new IllegalStateException("blockingConnect must not be called on the UI thread");
    }
}
