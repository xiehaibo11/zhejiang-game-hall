package com.alipay.sdk.util;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.os.RemoteException;
import com.alipay.android.app.IRemoteServiceCallback;

/* JADX INFO: loaded from: classes.dex */
class h extends IRemoteServiceCallback.Stub {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ e f1319a;

    @Override // com.alipay.android.app.IRemoteServiceCallback
    public boolean isHideLoadingScreen() throws RemoteException {
        return false;
    }

    @Override // com.alipay.android.app.IRemoteServiceCallback
    public void payEnd(boolean z, String str) throws RemoteException {
    }

    h(e eVar) {
        this.f1319a = eVar;
    }

    @Override // com.alipay.android.app.IRemoteServiceCallback
    public void startActivity(String str, String str2, int i, Bundle bundle) throws RemoteException {
        Intent intent = new Intent("android.intent.action.MAIN", (Uri) null);
        if (bundle == null) {
            bundle = new Bundle();
        }
        try {
            bundle.putInt("CallingPid", i);
            intent.putExtras(bundle);
        } catch (Exception unused) {
        }
        intent.setClassName(str, str2);
        if (this.f1319a.c != null) {
            this.f1319a.c.startActivity(intent);
        }
        this.f1319a.g.b();
    }
}
