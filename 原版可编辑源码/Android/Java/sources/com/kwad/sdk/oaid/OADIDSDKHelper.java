package com.kwad.sdk.oaid;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import com.bun.miitmdid.core.MdidSdkHelper;
import com.bun.miitmdid.e;
import com.bun.miitmdid.interfaces.IIdentifierListener;
import com.bun.miitmdid.interfaces.IdSupplier;

public class OADIDSDKHelper {
    private static final String SUB_TAG = "OADIDSDKHelper:";
    private static final String TAG = "KSAdSDK";
    private static boolean mIsRequestIng;
    private static boolean sGetOaidFail;

    static class IIdentifierListenerImpl implements IIdentifierListener {
        private final a mOaidListener;
        private final long mStartTime;

        public IIdentifierListenerImpl(long j, a aVar) {
            this.mStartTime = j;
            this.mOaidListener = aVar;
        }

        public void onSupport(IdSupplier idSupplier) {
            long jCurrentTimeMillis = System.currentTimeMillis() - this.mStartTime;
            if (idSupplier != null) {
                String oaid = idSupplier.getOAID();
                if (TextUtils.isEmpty(oaid)) {
                    boolean unused = OADIDSDKHelper.sGetOaidFail = true;
                } else {
                    Log.d(OADIDSDKHelper.TAG, "OADIDSDKHelper:oaid time=" + jCurrentTimeMillis + "--OAID:" + oaid);
                    this.mOaidListener.dr(oaid);
                }
            }
            boolean unused2 = OADIDSDKHelper.mIsRequestIng = false;
        }
    }

    public interface a {
        void dr(String str);
    }

    public static void getOAId(Context context, a aVar) {
        if (context == null || sGetOaidFail) {
            return;
        }
        if (!isSupport()) {
            sGetOaidFail = true;
            return;
        }
        if (mIsRequestIng) {
            return;
        }
        mIsRequestIng = true;
        try {
            long jCurrentTimeMillis = System.currentTimeMillis();
            int iInitSdk = MdidSdkHelper.InitSdk(context.getApplicationContext(), true, new IIdentifierListenerImpl(jCurrentTimeMillis, aVar));
            Log.d(TAG, "OADIDSDKHelper:sdk init time=" + (System.currentTimeMillis() - jCurrentTimeMillis) + "--result=" + iInitSdk);
        } catch (Throwable unused) {
            Log.d(TAG, "OADIDSDKHelper:oaid sdk not find ");
            mIsRequestIng = false;
            sGetOaidFail = true;
        }
    }

    public static boolean isSupport() {
        String str;
        if (Build.VERSION.SDK_INT < 16) {
            return false;
        }
        try {
            new IIdentifierListener() {
                public final void onSupport(IdSupplier idSupplier) {
                }
            }.onSupport((IdSupplier) null);
            try {
                Log.d(TAG, "OADIDSDKHelper:oaidVersion" + e.a());
                try {
                    Class.forName("com.bun.miitmdid.core.MdidSdkHelper", false, OADIDSDKHelper.class.getClassLoader());
                    return true;
                } catch (Throwable unused) {
                    str = "OADIDSDKHelper:com.bun.miitmdid.core.MdidSdkHelper oaid sdk not find ";
                    Log.d(TAG, str);
                    return false;
                }
            } catch (Throwable unused2) {
                str = "OADIDSDKHelper:oaidVersion fail";
            }
        } catch (Throwable unused3) {
            str = "OADIDSDKHelper:isSupport oaid sdk not find ";
        }
    }
}
