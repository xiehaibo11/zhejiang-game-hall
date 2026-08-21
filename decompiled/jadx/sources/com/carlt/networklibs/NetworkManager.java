package com.carlt.networklibs;

import android.app.Application;
import android.content.IntentFilter;

/* JADX INFO: loaded from: classes.dex */
public class NetworkManager {
    private static volatile NetworkManager manager;
    private Application application;
    private NetworkStateReceiver receiver = new NetworkStateReceiver();

    private NetworkManager() {
    }

    public static NetworkManager getInstance() {
        if (manager == null) {
            synchronized (NetworkManager.class) {
                if (manager == null) {
                    manager = new NetworkManager();
                }
            }
        }
        return manager;
    }

    public Application getApplication() {
        Application application = this.application;
        if (application != null) {
            return application;
        }
        throw new RuntimeException("please call init method in your app");
    }

    public void init(Application application) {
        this.application = application;
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
        this.application.registerReceiver(this.receiver, intentFilter);
    }

    public void registerObserver(Object obj) {
        this.receiver.registerObserver(obj);
    }

    public void unRegisterObserver(Object obj) {
        this.receiver.unRegisterObserver(obj);
    }

    public void unRegisterAllObserver() {
        this.receiver.unRegisterAllObserver();
    }
}
