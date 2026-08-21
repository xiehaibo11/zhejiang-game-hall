package com.bykv.vk.openvk.rg;

import android.app.Application;
import android.os.Bundle;
import android.text.TextUtils;
import com.bykv.vk.openvk.TTAdBridge;
import com.bykv.vk.openvk.TTAdEvent;
import com.bykv.vk.openvk.TTAppContextHolder;
import com.bykv.vk.openvk.api.plugin.c;
import com.bykv.vk.openvk.api.proto.Bridge;
import com.bykv.vk.openvk.api.proto.EventListener;
import com.bykv.vk.openvk.api.proto.ValueSet;
import com.bykv.vk.openvk.rg.rg;
import com.bytedance.pangle.Zeus;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public final class df implements TTAdBridge, Bridge {
    private static volatile df rg;
    private rg df = new rg();

    @Override // com.bykv.vk.openvk.TTAdBridge
    public String call(int i, Bundle bundle) {
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
    public void unsubscribe(TTAdEvent tTAdEvent) {
    }

    @Override // com.bykv.vk.openvk.api.proto.Bridge
    public ValueSet values() {
        return null;
    }

    private df() {
    }

    public static final df rg() {
        if (rg == null) {
            synchronized (df.class) {
                if (rg == null) {
                    rg = new df();
                }
            }
        }
        return rg;
    }

    public Application.ActivityLifecycleCallbacks df() {
        return this.df;
    }

    /* JADX WARN: Type inference failed for: r1v13, types: [T, java.lang.CharSequence, java.lang.String] */
    @Override // com.bykv.vk.openvk.TTAdBridge
    public <T> T callMethod(Class<T> cls, int i, Map<String, Object> map) {
        switch (i) {
            case 2:
                return (T) this.df.rg();
            case 3:
                return (T) TTAppContextHolder.getContext();
            case 4:
                return (T) Zeus.getPlugin("com.byted.csj.ext").mClassLoader;
            case 5:
                return (T) Boolean.valueOf(Zeus.loadPlugin("com.byted.csj.ext"));
            case 6:
                return (T) Boolean.valueOf(Zeus.isPluginInstalled("com.byted.csj.ext"));
            case 7:
                return (T) Boolean.valueOf(Zeus.isPluginLoaded("com.byted.csj.ext"));
            case 8:
                ?? r1 = (T) c.rg("com.byted.csj.ext");
                return TextUtils.isEmpty(r1) ? "0.0.0.0" : r1;
            default:
                return null;
        }
    }

    @Override // com.bykv.vk.openvk.TTAdBridge
    public void subscribe(final TTAdEvent tTAdEvent) {
        this.df.rg(new rg.InterfaceC0050rg() { // from class: com.bykv.vk.openvk.rg.df.1
            @Override // com.bykv.vk.openvk.rg.rg.InterfaceC0050rg
            public void rg() {
                tTAdEvent.onEvent(0, null);
            }

            @Override // com.bykv.vk.openvk.rg.rg.InterfaceC0050rg
            public void df() {
                tTAdEvent.onEvent(1, null);
            }
        });
    }

    /* JADX WARN: Type inference failed for: r1v18, types: [T, java.lang.CharSequence, java.lang.String] */
    @Override // com.bykv.vk.openvk.api.proto.Caller
    public <T> T call(int i, ValueSet valueSet, Class<T> cls) {
        switch (i) {
            case 2:
                return (T) this.df.rg();
            case 3:
                return (T) TTAppContextHolder.getContext();
            case 4:
                return (T) Zeus.getPlugin(valueSet.stringValue(0)).mClassLoader;
            case 5:
                return (T) Boolean.valueOf(Zeus.loadPlugin(valueSet.stringValue(0)));
            case 6:
                return (T) Boolean.valueOf(Zeus.isPluginInstalled(valueSet.stringValue(0)));
            case 7:
                return (T) Boolean.valueOf(Zeus.isPluginLoaded(valueSet.stringValue(0)));
            case 8:
                ?? r1 = (T) c.rg(valueSet.stringValue(0));
                return TextUtils.isEmpty(r1) ? "0.0.0.0" : r1;
            case 9:
                Object objObjectValue = valueSet.objectValue(0, Object.class);
                if (objObjectValue instanceof TTAdEvent) {
                    subscribe((TTAdEvent) objObjectValue);
                    return null;
                }
                if (!(objObjectValue instanceof EventListener)) {
                    return null;
                }
                rg((EventListener) objObjectValue);
                return null;
            default:
                return null;
        }
    }

    private void rg(final EventListener eventListener) {
        this.df.rg(new rg.InterfaceC0050rg() { // from class: com.bykv.vk.openvk.rg.df.2
            @Override // com.bykv.vk.openvk.rg.rg.InterfaceC0050rg
            public void rg() {
                eventListener.onEvent(0, null);
            }

            @Override // com.bykv.vk.openvk.rg.rg.InterfaceC0050rg
            public void df() {
                eventListener.onEvent(1, null);
            }
        });
    }
}
