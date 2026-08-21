package com.bytedance.android.openliveplugin;

import android.app.Application;
import android.util.Pair;
import com.bytedance.android.live.base.api.ILiveHostContextParam;
import com.bytedance.android.live.base.api.ILiveInitCallback;
import com.bytedance.android.live.base.api.IOuterLiveRoomService;
import com.bytedance.android.live.base.api.JavaCallsUtils;
import com.bytedance.android.openliveplugin.material.ConfigParams;
import com.bytedance.android.openliveplugin.material.ILiveMaterialGet;
import com.bytedance.android.openliveplugin.material.LiveInitMaterialManager;
import com.bytedance.android.openliveplugin.material.TTLogger;
import com.bytedance.pangle.GlobalParam;
import com.bytedance.pangle.PluginClassLoader;
import com.bytedance.pangle.Zeus;
import com.bytedance.pangle.ZeusPluginStateListener;
import com.bytedance.pangle.plugin.PluginManager;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.ArrayList;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;
import org.json.JSONObject;

public class LivePluginHelper {
    public static final String LIVE_PLUGIN_PACKAGE_NAME = "com.byted.live.lite";
    private static IOuterLiveRoomService liveRoomService;
    private static ArrayList<ILiveInitCallback> mLiveInitListeners;
    private static LiveInitMaterialManager materialManager;
    public static final ScheduledExecutorService sExecutor = Executors.newSingleThreadScheduledExecutor(new DefaultThreadFactory());
    private static boolean hasInitZeus = false;

    public static void addInitListener(ILiveInitCallback iLiveInitCallback) {
        if (mLiveInitListeners == null) {
            mLiveInitListeners = new ArrayList<>();
        }
        if (iLiveInitCallback == LiveInitCallbackWrapper.INSTANCE || mLiveInitListeners.contains(iLiveInitCallback) || iLiveInitCallback == null) {
            return;
        }
        mLiveInitListeners.add(iLiveInitCallback);
    }

    private static class LiveInitCallbackWrapper implements ILiveInitCallback {
        public static LiveInitCallbackWrapper INSTANCE = new LiveInitCallbackWrapper();

        private LiveInitCallbackWrapper() {
        }

        @Override
        public void onLiveInitFinish() {
            LivePluginHelper.initLiveCommerce();
            for (ILiveInitCallback iLiveInitCallback : LivePluginHelper.mLiveInitListeners) {
                if (iLiveInitCallback != null) {
                    iLiveInitCallback.onLiveInitFinish();
                }
            }
        }
    }

    private static class DefaultThreadFactory implements ThreadFactory {
        private final ThreadGroup group;
        private final String namePrefix;
        private final AtomicInteger threadNumber;

        DefaultThreadFactory() {
            this.threadNumber = new AtomicInteger(1);
            this.group = new ThreadGroup("tt_live_group_pl_init");
            this.namePrefix = "tt_live_thread_pl_init";
        }

        DefaultThreadFactory(String str) {
            this.threadNumber = new AtomicInteger(1);
            this.group = new ThreadGroup("tt_live_group_pl_init");
            this.namePrefix = str;
        }

        @Override
        public Thread newThread(Runnable runnable) {
            Thread thread = new Thread(this.group, runnable, this.namePrefix + this.threadNumber.getAndIncrement(), 0L);
            if (thread.isDaemon()) {
                thread.setDaemon(false);
            }
            if (thread.getPriority() != 10) {
                thread.setPriority(10);
            }
            return thread;
        }
    }

    public static void initLivePlugin(ILiveHostContextParam iLiveHostContextParam, ILiveInitCallback iLiveInitCallback) {
        PluginClassLoader pluginClassLoader = PluginManager.getInstance().getPlugin("com.byted.live.lite").mClassLoader;
        try {
            Pair pair = (Pair) JavaCallsUtils.callStaticMethodWithClassLoader("com.bytedance.android.openlive.auth.impl.auth.LiveAuthCallStub", "wrap", pluginClassLoader, iLiveHostContextParam, iLiveInitCallback);
            addInitListener((ILiveInitCallback) pair.second);
            Object objCallStaticMethodWithClassLoader = JavaCallsUtils.callStaticMethodWithClassLoader("com.bytedance.android.openlive.auth.impl.auth.LiveAuthCallStub", "getTransformer", pluginClassLoader, new Object[0]);
            TTLogger.d("live init : start call LiveInitWrapper init ...");
            JavaCallsUtils.callStaticMethodWithClassLoader("com.bytedance.android.openlive.LiveInitWrapper", "initWithTransform", pluginClassLoader, pair.first, LiveInitCallbackWrapper.INSTANCE, objCallStaticMethodWithClassLoader);
        } catch (Throwable th) {
            TTLogger.e("live init : LiveInitWrapper init error");
            th.printStackTrace();
        }
    }

    private static void realInitLivePlugin(final Application application, final String str, final ILiveHostContextParam.Builder builder, final ILiveInitCallback iLiveInitCallback) {
        if (materialManager == null) {
            materialManager = new LiveInitMaterialManager();
        }
        TTLogger.d("live init : material task execute");
        sExecutor.execute(new Runnable() {
            @Override
            public void run() throws Throwable {
                TTLogger.d("live init : material task run");
                LivePluginHelper.materialManager.run(str, application, new ILiveMaterialGet() {
                    @Override
                    public void onMaterialGet(ConfigParams configParams) {
                        TTLogger.d("live init : on material get success ~~~");
                        new LiveInitRunnable(application, builder, configParams, iLiveInitCallback).run();
                    }
                });
            }
        });
    }

    public static void init(Application application, String str, ILiveHostContextParam.Builder builder, ILiveInitCallback iLiveInitCallback) {
        if (!hasInitZeus) {
            initZeus(application);
            hasInitZeus = true;
        }
        initLive(application, str, builder, iLiveInitCallback);
    }

    public static void initLive(final Application application, final String str, final ILiveHostContextParam.Builder builder, final ILiveInitCallback iLiveInitCallback) {
        if (prepare(new Runnable() {
            @Override
            public void run() {
                LivePluginHelper.realInitLivePlugin(application, str, builder, iLiveInitCallback);
            }
        })) {
            realInitLivePlugin(application, str, builder, iLiveInitCallback);
        }
    }

    private static void initZeus(Application application) {
        if (application == null) {
            return;
        }
        GlobalParam.getInstance().init();
        Zeus.init(application, true);
        Zeus.installFromDownloadDir();
        Zeus.fetchPlugin("com.byted.live.lite");
    }

    private static boolean prepare(final Runnable runnable) {
        if (!Zeus.isPluginInstalled("com.byted.live.lite")) {
            Zeus.registerPluginStateListener(new ZeusPluginStateListener() {
                @Override
                public void onPluginStateChange(String str, int i, Object... objArr) {
                    if (runnable != null && "com.byted.live.lite".equals(str) && i == 6) {
                        if (Zeus.isPluginLoaded("com.byted.live.lite")) {
                            runnable.run();
                        } else if (Zeus.loadPlugin("com.byted.live.lite")) {
                            runnable.run();
                        }
                    }
                }
            });
            return false;
        }
        if (!Zeus.isPluginLoaded("com.byted.live.lite")) {
            return Zeus.loadPlugin("com.byted.live.lite");
        }
        return Zeus.isPluginLoaded("com.byted.live.lite");
    }

    private static class LiveInitRunnable implements Runnable {
        ILiveHostContextParam.Builder builder;
        Application context;
        ILiveInitCallback liveInitCallback;
        ConfigParams params;

        public LiveInitRunnable(Application application, ILiveHostContextParam.Builder builder, ConfigParams configParams, ILiveInitCallback iLiveInitCallback) {
            this.context = application;
            this.builder = builder;
            this.params = configParams;
            this.liveInitCallback = iLiveInitCallback;
        }

        @Override
        public void run() {
            ILiveHostContextParam.Builder builder = this.builder;
            if (builder == null || this.params == null) {
                return;
            }
            builder.setContext(this.context);
            this.builder.setAid((int) this.params.webcastAppID);
            this.builder.setGeneralAppId(String.valueOf(this.params.appID));
            this.builder.setTtSDKAppId(String.valueOf(this.params.ttsdkAppID));
            this.builder.setTtSDKCertAssetsPath("file://" + this.params.ttSDKLicensePath);
            this.builder.setClientKey(this.params.clientKey);
            this.builder.setNativeLibraryDir(Zeus.getPlugin("com.byted.live.lite").getNativeLibraryDir());
            this.builder.setCjAppId("");
            this.builder.setCjMerchantId("");
            LivePluginHelper.initLivePlugin(this.builder.build(), this.liveInitCallback);
        }
    }

    public static void initLiveCommerce() {
        try {
            adaptEventBus();
            JavaCallsUtils.callStaticMethodWithClassLoader("com.bytedance.android.ecom.live.adapter.ECLiveAdapter", PointCategory.INIT, PluginManager.getInstance().getPlugin("com.byted.live.lite").mClassLoader, new Object[0]);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static void adaptEventBus() {
        JavaCallsUtils.callStaticMethodWithClassLoader("com.bytedance.android.openlive.OpenLiveBackdoor", "tryAdaptEventBus", PluginManager.getInstance().getPlugin("com.byted.live.lite").mClassLoader, "com.bytedance.pangle.activity", "com.bytedance.pangle.wrapper");
    }

    public static void logEventV3(String str, JSONObject jSONObject) {
        JavaCallsUtils.callStaticMethodWithClassLoader("com.bytedance.android.openlive.OpenLiveBackdoor", "onEventV3", PluginManager.getInstance().getPlugin("com.byted.live.lite").mClassLoader, str, jSONObject);
    }

    public static String getLiveArgsJsonStr() {
        return (String) JavaCallsUtils.callStaticMethodWithClassLoader("com.bytedance.android.openlive.OpenLiveBackdoor", "getLiveArgsJsonStr", PluginManager.getInstance().getPlugin("com.byted.live.lite").mClassLoader, new Object[0]);
    }

    public static void setPpeValue(String str) {
        JavaCallsUtils.callStaticMethodWithClassLoader("com.bytedance.android.openlive.OpenLiveBackdoor", "setPpeValue", PluginManager.getInstance().getPlugin("com.byted.live.lite").mClassLoader, str);
    }

    public static void setBoeValue(String str) {
        JavaCallsUtils.callStaticMethodWithClassLoader("com.bytedance.android.openlive.OpenLiveBackdoor", "setBoeValue", PluginManager.getInstance().getPlugin("com.byted.live.lite").mClassLoader, str);
    }

    public static IOuterLiveRoomService getLiveRoomService() {
        if (liveRoomService == null) {
            liveRoomService = (IOuterLiveRoomService) JavaCallsUtils.callStaticMethodWithClassLoader("com.bytedance.android.openlive.OpenLiveBackdoor", "getOuterLiveRoomService", PluginManager.getInstance().getPlugin("com.byted.live.lite").mClassLoader, new Object[0]);
        }
        return liveRoomService;
    }
}
