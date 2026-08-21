package com.bykv.vk.openvk.live;

import android.app.Application;
import android.content.Context;
import android.content.res.Resources;
import android.os.Bundle;
import android.text.TextUtils;
import com.bianfeng.toponad.common.SplashConstants;
import com.bykv.vk.openvk.TTAdEvent;
import com.bykv.vk.openvk.TTAppContextHolder;
import com.bykv.vk.openvk.TTPluginListener;
import com.bykv.vk.openvk.TTVfManager;
import com.bykv.vk.openvk.TTVfSdk;
import com.bykv.vk.openvk.VfSlot;
import com.bykv.vk.openvk.api.plugin.c;
import com.bykv.vk.openvk.api.proto.Bridge;
import com.bykv.vk.openvk.api.proto.EventListener;
import com.bykv.vk.openvk.api.proto.ValueSet;
import com.bykv.vk.openvk.api.q;
import com.bykv.vk.openvk.live.core.ITTLiveConfig;
import com.bytedance.android.live.base.api.ILiveHostContextParam;
import com.bytedance.android.live.base.api.ILiveInitCallback;
import com.bytedance.android.live.base.api.IOuterLiveRoomService;
import com.bytedance.android.live.base.api.MethodChannelService;
import com.bytedance.android.live.base.api.callback.Callback;
import com.bytedance.android.openliveplugin.LivePluginHelper;
import com.bytedance.pangle.Zeus;
import com.bytedance.pangle.plugin.Plugin;
import java.io.Serializable;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONException;
import org.json.JSONObject;

public final class df extends com.bykv.vk.openvk.downloadnew.rg implements Bridge, Serializable {
    private ITTLiveTokenInjectionAuth rz;
    private static final df df = new df();
    private static final AtomicBoolean q = new AtomicBoolean(false);
    private static final AtomicBoolean pt = new AtomicBoolean(false);
    private static final AtomicBoolean pp = new AtomicBoolean(false);
    private static final AtomicBoolean c = new AtomicBoolean(false);
    public static rg rg = null;
    private ITTLiveConfig fw = null;
    private JSONObject ux = null;

    @Override
    public ValueSet values() {
        return null;
    }

    private df() {
    }

    private static final class rg implements TTAdEvent {
        private EventListener df;
        private TTAdEvent rg;

        private rg(TTAdEvent tTAdEvent) {
            this.rg = tTAdEvent;
        }

        private rg(EventListener eventListener) {
            this.df = eventListener;
        }

        @Override
        public void onEvent(int i, Bundle bundle) {
            TTAdEvent tTAdEvent = this.rg;
            if (tTAdEvent != null) {
                tTAdEvent.onEvent(i, bundle);
            }
            if (this.df != null) {
                this.df.onEvent(i, com.bykv.vk.openvk.api.df.rg().rg(0).rg(true).rg(q.rg().rg(0, bundle).df()).df());
            }
        }
    }

    public static df rg() {
        return df;
    }

    public void rg(ITTLiveTokenInjectionAuth iTTLiveTokenInjectionAuth) {
        this.rz = iTTLiveTokenInjectionAuth;
    }

    public void rg(c cVar, Bundle bundle) {
        if (q.get()) {
            com.bykv.vk.openvk.api.rg.df("TTLiveSDkBridge", "live PL is loading...just wait");
            return;
        }
        if (pt.get()) {
            com.bykv.vk.openvk.api.rg.df("TTLiveSDkBridge", "live PL already loaded, dont load again");
            return;
        }
        TTPluginListener tTPluginListener = new TTPluginListener() {
            @Override
            public Bundle config() {
                return null;
            }

            @Override
            public String packageName() {
                return null;
            }

            @Override
            public void onPluginListener(int i, ClassLoader classLoader, Resources resources, Bundle bundle2) {
                if (1000 == i) {
                    com.bykv.vk.openvk.api.rg.df("TTLiveSDkBridge", "live PL install success ， try to init live sdk");
                    df.pt.set(true);
                    df.q.set(false);
                    df.this.pp();
                } else if (1001 == i) {
                    StringBuilder sb = new StringBuilder();
                    sb.append("live PL install failed, errorCode: ");
                    sb.append(bundle2 == null ? null : bundle2.get("code"));
                    com.bykv.vk.openvk.api.rg.df("TTLiveSDkBridge", sb.toString());
                    df.pt.set(false);
                    df.q.set(false);
                }
                df.this.ux();
            }
        };
        q.set(true);
        pt.set(false);
        com.bykv.vk.openvk.live.rg.rg(cVar, bundle, tTPluginListener);
    }

    @Override
    public <T> T getObj(Class<T> cls, int i, Map<String, Object> map) {
        return (T) super.getObj(cls, i, map);
    }

    @Override
    public void subscribe(TTAdEvent tTAdEvent) {
        rg = new rg(tTAdEvent);
        ux();
    }

    @Override
    public void init(Bundle bundle) {
        super.init(bundle);
        ITTLiveConfig iTTLiveConfig = this.fw;
        if (iTTLiveConfig != null && iTTLiveConfig.isValid() && !TextUtils.isEmpty(this.fw.getGeneralAppId()) && !TextUtils.isEmpty(this.fw.getPartner()) && !TextUtils.isEmpty(this.fw.getPartnerSecret())) {
            com.bykv.vk.openvk.api.rg.df("TTLiveSDkBridge", "The configuration has been obtained. Do not repeat initialization");
            return;
        }
        Serializable serializable = bundle.getSerializable(TTLiveConstants.LIVE_INIT_CONFIG_KEY);
        if (serializable instanceof ITTLiveConfig) {
            this.fw = (ITTLiveConfig) serializable;
        }
        try {
            this.ux = new JSONObject(bundle.getString(TTLiveConstants.LIVE_INIT_EXTRA_KEY));
        } catch (JSONException e) {
            e.printStackTrace();
        }
        pp();
    }

    private void pp() {
        String str;
        ITTLiveConfig iTTLiveConfig;
        Plugin plugin;
        com.bykv.vk.openvk.api.rg.q("TTLiveSDkBridge", "hasLiveSDKInited：" + c.get() + ", hasLiveInstalled：" + pt.get());
        if (this.fw != null) {
            str = "GeneralAppId：" + this.fw.getGeneralAppId() + "，isValid：" + this.fw.isValid();
        } else {
            str = null;
        }
        com.bykv.vk.openvk.api.rg.q("TTLiveSDkBridge", str);
        if (c.get() || !pt.get() || (iTTLiveConfig = this.fw) == null || !iTTLiveConfig.isValid() || (plugin = Zeus.getPlugin("com.byted.live.lite")) == null || pp.get()) {
            return;
        }
        pp.set(true);
        if (!com.bykv.vk.openvk.live.rg.q(plugin.getVersion())) {
            com.bykv.vk.openvk.api.rg.df("TTLiveSDkBridge", "live sdk init crash more than consecutive 5 times , live plugin had uninstalled ! App cold start will request new live plugin ！");
            com.bykv.vk.openvk.live.rg.pt(plugin.getVersion());
            pp.set(false);
            return;
        }
        ILiveHostContextParam.Builder hostActionParam = new ILiveHostContextParam.Builder().setAppName(this.fw.getAppName()).setChannel(this.fw.getChannel()).setIsDebug(this.fw.isDebug()).setECHostAppId(this.fw.getECHostAppId()).setPartner(this.fw.getPartner()).provideMethodChannel(new MethodChannelService() {
            @Override
            public String identity() {
                return SplashConstants.TOPONAD_SPLASHAD_PANGLE;
            }

            @Override
            public Object invokeMethod(String str2, Object... objArr) {
                if (TextUtils.isEmpty(str2)) {
                    return null;
                }
                byte b = -1;
                if (str2.hashCode() == -955478604 && str2.equals("getBiddingToken")) {
                    b = 0;
                }
                if (b != 0) {
                    return null;
                }
                return df.this.rg(objArr);
            }
        }).setPartnerSecret(this.fw.getPartnerSecret()).setHostPermission(this.fw.getHostPermission()).setHostActionParam(new com.bykv.vk.openvk.live.core.rg(this.fw.getLiveHostAction()));
        ITTLiveTokenInjectionAuth iTTLiveTokenInjectionAuth = this.rz;
        if (iTTLiveTokenInjectionAuth != null) {
            hostActionParam.setInjectionAuth(new com.bykv.vk.openvk.live.core.df(iTTLiveTokenInjectionAuth));
        }
        ILiveInitCallback iLiveInitCallback = new ILiveInitCallback() {
            @Override
            public final void onLiveInitFinish() {
                com.bykv.vk.openvk.api.rg.df("TTLiveSDkBridge", "onLiveInitFinish - live sdk init succeed！");
                com.bykv.vk.openvk.api.rg.df("TTLiveSDkBridge", "execute commerce initLiveCommerce method start");
                com.bykv.vk.openvk.api.rg.df("TTLiveSDkBridge", "execute commerce initLiveCommerce end , result: " + com.bykv.vk.openvk.live.rg.rg());
                df.c.set(true);
                df.this.ux();
                if (df.rg != null) {
                    Bundle bundle = new Bundle();
                    bundle.putBoolean(TTLiveConstants.PARAMS_LIVE_SDK_INIT_STATUS, df.c.get());
                    df.rg.onEvent(2, bundle);
                }
            }
        };
        if (TTAppContextHolder.getContext() instanceof Application) {
            hostActionParam.setContext((Application) TTAppContextHolder.getContext());
        }
        com.bykv.vk.openvk.live.rg.rg(plugin.getVersion());
        StringBuilder sb = new StringBuilder();
        sb.append("execute live sdk initLive method start, GeneralAppId:");
        ITTLiveConfig iTTLiveConfig2 = this.fw;
        sb.append(iTTLiveConfig2 != null ? iTTLiveConfig2.getGeneralAppId() : null);
        com.bykv.vk.openvk.api.rg.df("TTLiveSDkBridge", sb.toString());
        Context context = TTAppContextHolder.getContext();
        ITTLiveConfig iTTLiveConfig3 = this.fw;
        com.bykv.vk.openvk.api.rg.df("TTLiveSDkBridge", "execute live sdk initLive method end, (方法顺利执行结果)result: " + com.bykv.vk.openvk.live.rg.rg(context, iTTLiveConfig3 != null ? iTTLiveConfig3.getGeneralAppId() : null, hostActionParam, iLiveInitCallback));
        pp.set(false);
        com.bykv.vk.openvk.live.rg.df((long) plugin.getVersion());
    }

    private Object rg(Object... objArr) {
        if (objArr != null && objArr.length != 0) {
            try {
                Integer num = (Integer) objArr[0];
                TTVfManager vfManager = TTVfSdk.getVfManager();
                if (vfManager != null) {
                    return vfManager.getBiddingToken(new VfSlot.Builder().setAdType(num.intValue()).build());
                }
            } catch (Throwable unused) {
            }
        }
        return null;
    }

    @Override
    public <T> T callMethod(Class<T> cls, int i, Map<String, Object> map) {
        if (i == 0) {
            if (!c.get()) {
                return (T) 1;
            }
            if (!com.bykv.vk.openvk.live.rg.rg(getContext(map.get(TTLiveConstants.CONTEXT_KEY)), rg(map.get(TTLiveConstants.BUNDLE_KEY)))) {
                return (T) 2;
            }
            return (T) 0;
        }
        if (i == 1) {
            return (T) c;
        }
        if (i == 2) {
            rg(map);
            return null;
        }
        if (i == 3) {
            fw();
            return null;
        }
        if (i == 4) {
            return (T) c();
        }
        return (T) super.callMethod(cls, i, map);
    }

    private Boolean c() {
        try {
            Object objCallExpandMethod = LivePluginHelper.getLiveRoomService().callExpandMethod("hasAuthenticated", new Object[0]);
            if (objCallExpandMethod != null && (objCallExpandMethod instanceof Boolean)) {
                return (Boolean) objCallExpandMethod;
            }
        } catch (Throwable th) {
            com.bykv.vk.openvk.api.rg.rg("TTLiveSDkBridge", th);
        }
        return false;
    }

    private void fw() {
        try {
            LivePluginHelper.getLiveRoomService().callExpandMethod("warmingUpBeforeEnter", new Object[0]);
        } catch (Throwable th) {
            com.bykv.vk.openvk.api.rg.rg("TTLiveSDkBridge", th);
        }
    }

    private void rg(Map<String, Object> map) {
        try {
            long jLongValue = ((Long) map.get(TTLiveConstants.ROOMID_KEY)).longValue();
            Object obj = map.get("event");
            final rg rgVar = obj instanceof TTAdEvent ? new rg((TTAdEvent) obj) : new rg((EventListener) obj);
            IOuterLiveRoomService liveRoomService = LivePluginHelper.getLiveRoomService();
            System.currentTimeMillis();
            Object objCallExpandMethod = liveRoomService.callExpandMethod("checkRoomAlive", new Callback<Boolean>() {
                @Override
                public void invoke(Boolean bool) {
                    if (rgVar != null) {
                        Bundle bundle = new Bundle();
                        bundle.putBoolean(TTLiveConstants.PARAMS_LIVE_ROOM_STATUS, bool.booleanValue());
                        rgVar.onEvent(0, bundle);
                    }
                }
            }, Long.valueOf(jLongValue), 300);
            if (objCallExpandMethod == null) {
                synchronized (rgVar) {
                    try {
                        rgVar.notifyAll();
                    } catch (Throwable unused) {
                    }
                }
            }
            com.bykv.vk.openvk.api.rg.df("TTLiveSDkBridge", "has checkRoomAlive :" + objCallExpandMethod);
        } catch (Throwable th) {
            com.bykv.vk.openvk.api.rg.rg("TTLiveSDkBridge", "getRoomState: exception:", th);
        }
    }

    private Context getContext(Object obj) {
        if (obj instanceof Context) {
            return (Context) obj;
        }
        return null;
    }

    private Bundle rg(Object obj) {
        if (obj instanceof Bundle) {
            return (Bundle) obj;
        }
        return null;
    }

    private void ux() {
        if (rg != null) {
            try {
                Bundle bundle = new Bundle();
                bundle.putBoolean("live_plugin_installed", pt.get());
                bundle.putBoolean("live_plugin_inited", c.get());
                rg.onEvent(3, bundle);
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    @Override
    public <T> T call(int i, ValueSet valueSet, Class<T> cls) {
        if (i == 5) {
            init((Bundle) valueSet.objectValue(0, Bundle.class));
            return null;
        }
        if (i == 6) {
            Object objObjectValue = valueSet.objectValue(0, Object.class);
            if (objObjectValue instanceof TTAdEvent) {
                subscribe((TTAdEvent) valueSet.objectValue(0, TTAdEvent.class));
            } else if (objObjectValue instanceof EventListener) {
                rg = new rg((EventListener) objObjectValue);
                ux();
            }
            return null;
        }
        return (T) callMethod(cls, i, (Map) valueSet.objectValue(0, Map.class));
    }
}
