package com.ymnsdk.replugin;

import android.content.Context;
import android.content.Intent;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.ymnsdk.replugin.listener.AllowStartPluginListener;
import com.ymnsdk.replugin.listener.ClearDownloadCacheListener;
import com.ymnsdk.replugin.listener.GetPluginsStatusInfoListener;
import com.ymnsdk.replugin.listener.InstallPluginStatusListener;
import com.ymnsdk.replugin.listener.IsInstallPluginStatusListener;
import com.ymnsdk.replugin.listener.OpenListener;
import com.ymnsdk.replugin.listener.PluginExitListener;
import com.ymnsdk.replugin.listener.PreloadListener;
import com.ymnsdk.replugin.listener.QueryPluginStatusListener;
import com.ymnsdk.replugin.listener.RepluginListener;
import com.ymnsdk.replugin.listener.StartPluginStatusListener;
import com.ymnsdk.replugin.listener.UnInstallPluginStatusListener;
import com.ymnsdk.replugin.patch.download.DownloadCode;
import com.ymnsdk.replugin.util.DownloadUtils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RepluginSdkJavaBridging {
    private static int RePluginSdk_getPluginsInfo_failure = 51001;
    private static int RePluginSdk_getPluginsInfo_success = 51000;
    private static int RePluginSdk_installPlugin_downloading = 53002;
    private static int RePluginSdk_installPlugin_failure = 53001;
    private static int RePluginSdk_installPlugin_success = 53000;
    private static int RePluginSdk_isInstallPlugin_installed = 54000;
    private static int RePluginSdk_isInstallPlugin_notInstall = 54001;
    private static int RePluginSdk_plugin_clear_fail = 59001;
    private static int RePluginSdk_plugin_clear_success = 59000;
    private static int RePluginSdk_plugin_exit = 58001;
    private static int RePluginSdk_plugin_open_downloading = 510002;
    private static int RePluginSdk_plugin_open_fail = 510001;
    private static int RePluginSdk_plugin_open_success = 510000;
    private static int RePluginSdk_preloadPlugin_failure = 57001;
    private static int RePluginSdk_preloadPlugin_success = 57000;
    private static int RePluginSdk_queryPluginStatus_available = 52000;
    private static int RePluginSdk_queryPluginStatus_failure = 52002;
    private static int RePluginSdk_queryPluginStatus_unAvailable = 52001;
    private static int RePluginSdk_startApk_failure = 55001;
    private static int RePluginSdk_startApk_success = 55000;
    private static int RePluginSdk_unInstallPlugin_failure = 56001;
    private static int RePluginSdk_unInstallPlugin_success = 56000;
    private static long beforeProcess = -1;
    static volatile boolean isAllowing = false;
    static volatile boolean isInit = false;
    static volatile boolean isOpenComplete = true;
    static boolean isOpenSuc;
    private static RepluginListener repluginListener;

    public static void sendResult(int i, String str) {
        repluginListener.sendRepluginCodeAndMsg(i, str);
    }

    public static void onCreate(Context context) {
        RePluginSdk.onCreate(context);
        setPluginExitListener();
        isInit = false;
    }

    public static void onNewIntent(Intent intent) {
        RePluginSdk.onNewIntent(intent);
    }

    public static void onDestory() {
        RePluginSdk.onDestory();
    }

    public static void addRePluginLister(RepluginListener repluginListener2) {
        repluginListener = repluginListener2;
    }

    public static void getPluginsInfo(String str, String str2) {
        if (isInit) {
            return;
        }
        isInit = true;
        RePluginSdk.getPluginsInfo(str, str2, new GetPluginsStatusInfoListener() {
            @Override
            public void onSuccess() {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_getPluginsInfo_success, "");
            }

            @Override
            public void onFailure(int i, String str3) {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_getPluginsInfo_failure, i + "|" + str3);
            }
        });
    }

    public static void queryPluginStatus(String str) {
        RePluginSdk.queryPluginStatus(str, new QueryPluginStatusListener() {
            @Override
            public void onSuccessUnAvailable(String str2) {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_queryPluginStatus_unAvailable, str2);
            }

            @Override
            public void onSuccessAvailable(String str2) {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_queryPluginStatus_available, str2);
            }

            @Override
            public void onFailure(int i, String str2) {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_queryPluginStatus_failure, i + "|" + str2);
            }
        });
    }

    public static void installPlugin(String str) {
        RePluginSdk.installPlugin(str, new InstallPluginStatusListener() {
            @Override
            public void onSuccess() {
                Log.e(HostConstant.ymn, "客户端收到信息下载成功");
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_success, "");
            }

            @Override
            public void onFailure(String str2) {
                Log.e(HostConstant.ymn, "客户端收到信息" + str2);
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_failure, str2);
            }

            @Override
            public void onDownloading(long j) {
                if (j == 100) {
                    RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_downloading, String.valueOf(j));
                    long unused = RepluginSdkJavaBridging.beforeProcess = -1L;
                } else if (j != RepluginSdkJavaBridging.beforeProcess) {
                    RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_downloading, String.valueOf(j));
                    long unused2 = RepluginSdkJavaBridging.beforeProcess = j;
                }
            }

            @Override
            public void onDownloadFailure(DownloadCode.Code code) {
                Log.e(HostConstant.ymn, "客户端收到信息" + DownloadCode.translate(code));
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_failure, DownloadCode.translate(code));
            }
        });
    }

    public static void installPlugin(String str, String str2, String str3) {
        RePluginSdk.installPlugin(str, str2, str3, new InstallPluginStatusListener() {
            @Override
            public void onSuccess() {
                Log.e(HostConstant.ymn, "客户端收到信息下载成功");
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_success, "");
            }

            @Override
            public void onFailure(String str4) {
                Log.e(HostConstant.ymn, "客户端收到信息" + str4);
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_failure, str4);
            }

            @Override
            public void onDownloading(long j) {
                if (j == 100) {
                    RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_downloading, String.valueOf(j));
                    long unused = RepluginSdkJavaBridging.beforeProcess = -1L;
                } else if (j != RepluginSdkJavaBridging.beforeProcess) {
                    RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_downloading, String.valueOf(j));
                    long unused2 = RepluginSdkJavaBridging.beforeProcess = j;
                }
            }

            @Override
            public void onDownloadFailure(DownloadCode.Code code) {
                Log.e(HostConstant.ymn, "客户端收到信息" + DownloadCode.translate(code));
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_failure, DownloadCode.translate(code));
            }
        });
    }

    public static void isInstallPlugin(String str) {
        RePluginSdk.isInstallPlugin(str, new IsInstallPluginStatusListener() {
            @Override
            public void onInstalled() {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_isInstallPlugin_installed, "");
            }

            @Override
            public void onNotInstall() {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_isInstallPlugin_notInstall, "");
            }
        });
    }

    public static void startApk(String str, String str2) {
        RePluginSdk.startApk(str, str2, new StartPluginStatusListener() {
            @Override
            public void onSuccess() {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_startApk_success, "");
            }

            @Override
            public void onFailure(String str3) {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_startApk_failure, str3);
            }
        });
    }

    public static void unInstallPlugin(String str) {
        RePluginSdk.unInstallPlugin(str, new UnInstallPluginStatusListener() {
            @Override
            public void onSuccess() {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_unInstallPlugin_success, "");
            }

            @Override
            public void onFailure(String str2) {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_unInstallPlugin_failure, str2);
            }
        });
    }

    public static void preloadPlugin(String str) {
        Log.d(HostConstant.ymn, "到了preloadPlugin");
        RePluginSdk.preloadPlugin(str, new PreloadListener() {
            @Override
            public void preloadSuccess() {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_preloadPlugin_success, "");
            }

            @Override
            public void preloadFail(String str2) {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_preloadPlugin_failure, str2);
            }
        });
    }

    public static void clearDownloadCache(String str) {
        RePluginSdk.clearDownloadCache(str, new ClearDownloadCacheListener() {
            @Override
            public void clearSuccess() {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_plugin_clear_success, "");
            }

            @Override
            public void clearFail(String str2) {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_plugin_clear_fail, str2);
            }
        });
    }

    public static void openPlugin(String str, String str2) {
        DownloadUtils.isUserDownload = true;
        if (isOpenComplete && !isAllowing) {
            isOpenComplete = false;
            isOpenSuc = false;
            RePluginSdk.openPlugin(str, str2, new OpenListener() {
                @Override
                public void openSuccess() {
                    RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_plugin_open_success, "打开成功");
                    RepluginSdkJavaBridging.isOpenSuc = true;
                    RepluginSdkJavaBridging.isOpenComplete = true;
                }

                @Override
                public void openFail(String str3) {
                    RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_plugin_open_fail, str3);
                    RepluginSdkJavaBridging.isOpenSuc = false;
                    RepluginSdkJavaBridging.isOpenComplete = true;
                }

                @Override
                public void installSuccess() {
                    if (!RepluginSdkJavaBridging.isOpenSuc) {
                        RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_success, "安装成功");
                    }
                    RepluginSdkJavaBridging.isOpenComplete = true;
                }

                @Override
                public void installFail(String str3) {
                    if (!RepluginSdkJavaBridging.isOpenSuc) {
                        RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_failure, str3);
                    }
                    RepluginSdkJavaBridging.isOpenComplete = true;
                }

                @Override
                public void onDownloading(long j) {
                    if (j == 100) {
                        RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_downloading, String.valueOf(j));
                        long unused = RepluginSdkJavaBridging.beforeProcess = -1L;
                    } else if (j != RepluginSdkJavaBridging.beforeProcess) {
                        RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_downloading, String.valueOf(j));
                        long unused2 = RepluginSdkJavaBridging.beforeProcess = j;
                    }
                }

                @Override
                public void onDownloadingInStart(long j) {
                    if (j == 100) {
                        RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_plugin_open_downloading, String.valueOf(j));
                        long unused = RepluginSdkJavaBridging.beforeProcess = -1L;
                    } else if (j != RepluginSdkJavaBridging.beforeProcess) {
                        RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_plugin_open_downloading, String.valueOf(j));
                        long unused2 = RepluginSdkJavaBridging.beforeProcess = j;
                    }
                }

                @Override
                public void onDownloadFailure(DownloadCode.Code code) {
                    if (!RepluginSdkJavaBridging.isOpenSuc) {
                        RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_installPlugin_failure, DownloadCode.translate(code));
                    }
                    RepluginSdkJavaBridging.isOpenComplete = true;
                }
            });
        }
    }

    public static void allowStartPlugin(String str, String str2, String str3) {
        isAllowing = true;
        RePluginSdk.allowStartPlugin(str, str2, str3.equals("1"), new AllowStartPluginListener() {
            @Override
            public void openSuccess() {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_plugin_open_success, "打开成功");
                RepluginSdkJavaBridging.isAllowing = false;
            }

            @Override
            public void openFail(String str4) {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_plugin_open_fail, str4);
                RepluginSdkJavaBridging.isAllowing = false;
            }
        });
    }

    public static void postToSepperllita(String str) {
        RePluginSdk.postToSepperllita(str);
    }

    public static void allowUserPrivacy() {
        RePluginSdk.allowUserPrivacy();
    }

    public static void setPluginExitListener() {
        RePluginSdk.setPluginExitListener(new PluginExitListener() {
            @Override
            public void onPluginExit(String str) {
                RepluginSdkJavaBridging.sendResult(RepluginSdkJavaBridging.RePluginSdk_plugin_exit, str);
            }
        });
    }
}
