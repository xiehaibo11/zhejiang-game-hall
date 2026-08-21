package com.bykv.vk.openvk.downloadnew.core;

import android.content.Context;
import com.bykv.vk.openvk.TTAdBridge;
import com.bykv.vk.openvk.downloadnew.pp;

public class DownloadBridgeFactory {
    public static final TTAdBridge getDownloadBridge(Context context) {
        return pp.rg(context);
    }
}
