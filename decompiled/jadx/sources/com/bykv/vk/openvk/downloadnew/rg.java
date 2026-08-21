package com.bykv.vk.openvk.downloadnew;

import android.os.Bundle;
import com.bykv.vk.openvk.TTAdBridge;
import com.bykv.vk.openvk.TTAdEvent;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public abstract class rg implements TTAdBridge {
    @Override // com.bykv.vk.openvk.TTAdBridge
    public String call(int i, Bundle bundle) {
        return null;
    }

    @Override // com.bykv.vk.openvk.TTAdBridge
    public <T> T callMethod(Class<T> cls, int i, Map<String, Object> map) {
        return null;
    }

    @Override // com.bykv.vk.openvk.TTAdBridge
    public <T> T getObj(Class<T> cls) {
        return null;
    }

    @Override // com.bykv.vk.openvk.TTAdBridge
    public <T> T getObj(Class<T> cls, int i, Map<String, Object> map) {
        return null;
    }

    @Override // com.bykv.vk.openvk.TTAdBridge
    public void init(Bundle bundle) {
    }

    @Override // com.bykv.vk.openvk.TTAdBridge
    public void removeObj(Object obj) {
    }

    @Override // com.bykv.vk.openvk.TTAdBridge
    public void setObj(Object obj) {
    }

    @Override // com.bykv.vk.openvk.TTAdBridge
    public void subscribe(TTAdEvent tTAdEvent) {
    }

    @Override // com.bykv.vk.openvk.TTAdBridge
    public void unsubscribe(TTAdEvent tTAdEvent) {
    }
}
