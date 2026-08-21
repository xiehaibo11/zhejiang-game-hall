package com.oppo.oiface.engine;

import android.os.IBinder;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.util.Slog;
import com.oppo.oiface.engine.IOIfaceNotifier;
import com.oppo.oiface.engine.IOIfaceService;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes3.dex */
public class OifaceGameEngineManager {
    private static final String TAG = "OppoManager";
    private static OifaceGameEngineManager mOppoManager = null;
    private static IOIfaceService mService = null;
    private static final String oppoSdkVersion = "2.1";
    private WeakReference<CallBack> mCallbacks;
    private IBinder.DeathRecipient mDeathRecipient = new IBinder.DeathRecipient() { // from class: com.oppo.oiface.engine.OifaceGameEngineManager.2
        @Override // android.os.IBinder.DeathRecipient
        public void binderDied() {
            IOIfaceService unused = OifaceGameEngineManager.mService = null;
            Slog.d(OifaceGameEngineManager.TAG, "OIfaceService binderDied");
        }
    };
    private IBinder mRemote;

    private OifaceGameEngineManager() {
        connectOifaceService();
    }

    private boolean connectOifaceService() {
        this.mRemote = ServiceManager.checkService("oiface");
        mService = IOIfaceService.Stub.asInterface(this.mRemote);
        IOIfaceService iOIfaceService = mService;
        if (iOIfaceService != null) {
            try {
                iOIfaceService.registerEngineClient(new IOIfaceNotifier.Stub() { // from class: com.oppo.oiface.engine.OifaceGameEngineManager.1
                    @Override // com.oppo.oiface.engine.IOIfaceNotifier
                    public void onSystemNotify(String str) {
                        if (OifaceGameEngineManager.this.mCallbacks == null || OifaceGameEngineManager.this.mCallbacks.get() == null) {
                            return;
                        }
                        ((CallBack) OifaceGameEngineManager.this.mCallbacks.get()).systemCallBack(str);
                    }
                });
                this.mRemote.linkToDeath(this.mDeathRecipient, 0);
                return true;
            } catch (Exception e) {
                Slog.d(TAG, "IOIfaceService registerEngineClient error" + e);
                mService = null;
            }
        }
        return false;
    }

    public static OifaceGameEngineManager getInstance() {
        if (mService == null) {
            synchronized (OifaceGameEngineManager.class) {
                if (mService == null) {
                    mOppoManager = new OifaceGameEngineManager();
                }
            }
        }
        return mOppoManager;
    }

    public String getOifaceVersion() {
        if (mService == null && !connectOifaceService()) {
            return null;
        }
        try {
            return mService.getOifaceVersion() + Constants.COLON_SEPARATOR + oppoSdkVersion;
        } catch (Exception e) {
            mService = null;
            Slog.d(TAG, "getOifaceVersion error:" + e);
            return null;
        }
    }

    public int getMemoryUsage(int i) {
        if (mService == null && !connectOifaceService()) {
            return -1;
        }
        try {
            return mService.getMemoryUsage(i);
        } catch (RemoteException e) {
            e.printStackTrace();
            return -1;
        }
    }

    public void systemStatus(CallBack callBack) {
        if (mService == null) {
            return;
        }
        try {
            this.mCallbacks = new WeakReference<>(callBack);
            mService.onAppRegister();
        } catch (RemoteException e) {
            e.printStackTrace();
        }
    }

    public boolean updateGameEngineInfo(String str) {
        if (mService == null && !connectOifaceService()) {
            return false;
        }
        try {
            mService.updateGameEngineInfo(str);
            return true;
        } catch (Exception e) {
            mService = null;
            Slog.d(TAG, "updateGameInfo error:" + e);
            return false;
        }
    }
}
