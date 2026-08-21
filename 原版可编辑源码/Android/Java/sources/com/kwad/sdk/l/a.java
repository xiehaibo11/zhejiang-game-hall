package com.kwad.sdk.l;

import android.app.Service;
import android.content.Intent;
import android.os.IBinder;
import com.kwad.sdk.api.proxy.BaseProxyService;
import com.kwad.sdk.api.proxy.IServiceProxy;

public abstract class a implements IServiceProxy {
    @Override
    public IBinder onBind(Service service, Intent intent) {
        return null;
    }

    @Override
    public void onCreate(Service service) {
    }

    @Override
    public void onDestroy(Service service) {
    }

    @Override
    public void onRebind(Service service, Intent intent) {
    }

    @Override
    public int onStartCommand(Service service, Intent intent, int i, int i2) {
        if (service instanceof BaseProxyService) {
            return ((BaseProxyService) service).superOnStartCommand(intent, i, i2);
        }
        throw new RuntimeException(service + " must be AbstractServiceProxy");
    }

    @Override
    public boolean onUnbind(Service service, Intent intent) {
        if (service instanceof BaseProxyService) {
            return ((BaseProxyService) service).superOnUnbind(intent);
        }
        throw new RuntimeException(service + " must be AbstractServiceProxy");
    }
}
