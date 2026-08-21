package com.tencent.mm.opensdk.diffdev.a;

import android.os.AsyncTask;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import com.tencent.mm.opensdk.diffdev.IDiffDevOAuth;
import com.tencent.mm.opensdk.diffdev.OAuthErrCode;
import com.tencent.mm.opensdk.diffdev.OAuthListener;
import com.tencent.mm.opensdk.utils.Log;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class a implements IDiffDevOAuth {
    private b c;
    private Handler a = null;
    private List<OAuthListener> b = new ArrayList();
    private OAuthListener d = new a();

    class a implements OAuthListener {

        class a implements Runnable {
            a() {
            }

            @Override
            public void run() {
                ArrayList arrayList = new ArrayList();
                arrayList.addAll(a.this.b);
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    ((OAuthListener) it.next()).onQrcodeScanned();
                }
            }
        }

        a() {
        }

        @Override
        public void onAuthFinish(OAuthErrCode oAuthErrCode, String str) {
            Log.d("MicroMsg.SDK.ListenerWrapper", String.format("onAuthFinish, errCode = %s, authCode = %s", oAuthErrCode.toString(), str));
            a.this.c = null;
            ArrayList arrayList = new ArrayList();
            arrayList.addAll(a.this.b);
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                ((OAuthListener) it.next()).onAuthFinish(oAuthErrCode, str);
            }
        }

        @Override
        public void onAuthGotQrcode(String str, byte[] bArr) {
            Log.d("MicroMsg.SDK.ListenerWrapper", "onAuthGotQrcode, qrcodeImgPath = " + str);
            ArrayList arrayList = new ArrayList();
            arrayList.addAll(a.this.b);
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                ((OAuthListener) it.next()).onAuthGotQrcode(str, bArr);
            }
        }

        @Override
        public void onQrcodeScanned() {
            Log.d("MicroMsg.SDK.ListenerWrapper", "onQrcodeScanned");
            if (a.this.a != null) {
                a.this.a.post(new a());
            }
        }
    }

    @Override
    public void addListener(OAuthListener oAuthListener) {
        if (this.b.contains(oAuthListener)) {
            return;
        }
        this.b.add(oAuthListener);
    }

    @Override
    public boolean auth(String str, String str2, String str3, String str4, String str5, OAuthListener oAuthListener) {
        Log.i("MicroMsg.SDK.DiffDevOAuth", "start auth, appId = " + str);
        if (str == null || str.length() <= 0 || str2 == null || str2.length() <= 0) {
            Log.d("MicroMsg.SDK.DiffDevOAuth", String.format("auth fail, invalid argument, appId = %s, scope = %s", str, str2));
            return false;
        }
        if (this.a == null) {
            this.a = new Handler(Looper.getMainLooper());
        }
        if (!this.b.contains(oAuthListener)) {
            this.b.add(oAuthListener);
        }
        if (this.c != null) {
            Log.d("MicroMsg.SDK.DiffDevOAuth", "auth, already running, no need to start auth again");
            return true;
        }
        b bVar = new b(str, str2, str3, str4, str5, this.d);
        this.c = bVar;
        if (Build.VERSION.SDK_INT >= 11) {
            bVar.executeOnExecutor(AsyncTask.THREAD_POOL_EXECUTOR, new Void[0]);
        } else {
            bVar.execute(new Void[0]);
        }
        return true;
    }

    @Override
    public void detach() {
        Log.i("MicroMsg.SDK.DiffDevOAuth", "detach");
        this.b.clear();
        stopAuth();
    }

    @Override
    public void removeAllListeners() {
        this.b.clear();
    }

    @Override
    public void removeListener(OAuthListener oAuthListener) {
        this.b.remove(oAuthListener);
    }

    @Override
    public boolean stopAuth() {
        boolean zA;
        Log.i("MicroMsg.SDK.DiffDevOAuth", "stopAuth");
        try {
            zA = this.c == null ? true : this.c.a();
        } catch (Exception e) {
            Log.w("MicroMsg.SDK.DiffDevOAuth", "stopAuth fail, ex = " + e.getMessage());
            zA = false;
        }
        this.c = null;
        return zA;
    }
}
