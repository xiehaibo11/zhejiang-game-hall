package com.mbridge.msdk.out;

import com.mbridge.msdk.system.a;

/* JADX INFO: loaded from: classes2.dex */
public class MBridgeSDKFactory {
    private static volatile a instance;

    private MBridgeSDKFactory() {
    }

    public static a getMBridgeSDK() {
        if (instance == null) {
            synchronized (MBridgeSDKFactory.class) {
                if (instance == null) {
                    instance = new a();
                }
            }
        }
        return instance;
    }
}
