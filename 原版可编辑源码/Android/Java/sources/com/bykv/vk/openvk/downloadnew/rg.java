package com.bykv.vk.openvk.downloadnew;

import android.os.Bundle;
import com.bykv.vk.openvk.TTAdBridge;
import com.bykv.vk.openvk.TTAdEvent;
import java.util.Map;

public abstract class rg implements TTAdBridge {
    @Override
    public String call(int i, Bundle bundle) {
        return null;
    }

    @Override
    public <T> T callMethod(Class<T> cls, int i, Map<String, Object> map) {
        return null;
    }

    @Override
    public <T> T getObj(Class<T> cls) {
        return null;
    }

    @Override
    public <T> T getObj(Class<T> cls, int i, Map<String, Object> map) {
        return null;
    }

    @Override
    public void init(Bundle bundle) {
    }

    @Override
    public void removeObj(Object obj) {
    }

    @Override
    public void setObj(Object obj) {
    }

    @Override
    public void subscribe(TTAdEvent tTAdEvent) {
    }

    @Override
    public void unsubscribe(TTAdEvent tTAdEvent) {
    }
}
