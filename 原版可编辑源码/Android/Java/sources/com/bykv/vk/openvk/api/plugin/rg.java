package com.bykv.vk.openvk.api.plugin;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import com.bykv.vk.openvk.CSJAdError;
import com.bykv.vk.openvk.TTAppContextHolder;
import com.bykv.vk.openvk.TTPluginListener;
import com.bykv.vk.openvk.TTVfManager;
import com.bykv.vk.openvk.TTVfNative;
import com.bykv.vk.openvk.VfSlot;
import com.bykv.vk.openvk.common.CommonListener;
import com.bykv.vk.openvk.downloadnew.core.ExitInstallListener;
import java.lang.ref.WeakReference;

final class rg implements TTVfManager {
    static final rg rg = new rg();
    private volatile TTVfManager df;

    private interface df<T> {
        void rg(rg<T> rgVar);
    }

    private interface q<T> extends rg<T> {
        void rg();
    }

    private interface rg<T> {
        void rg(T t);
    }

    @Override
    public String getSDKVersion() {
        return "5.1.1.4";
    }

    rg() {
    }

    public void rg(TTVfManager tTVfManager) {
        this.df = tTVfManager;
    }

    class 1 implements df<TTVfNative> {
        final WeakReference df;
        TTVfNative rg;

        1(WeakReference weakReference) {
            this.df = weakReference;
        }

        @Override
        public void rg(final rg<TTVfNative> rgVar) {
            TTVfNative tTVfNative = this.rg;
            if (tTVfNative == null) {
                rg.this.call(new rg<TTVfManager>() {
                    @Override
                    public void rg(TTVfManager tTVfManager) {
                        1 r0 = 1.this;
                        r0.rg = tTVfManager.createVfNative((Context) r0.df.get());
                        rgVar.rg(1.this.rg);
                    }
                });
            } else {
                rgVar.rg(tTVfNative);
            }
        }
    }

    @Override
    public TTVfNative createVfNative(Context context) {
        return new pt(new 1(new WeakReference(context)));
    }

    @Override
    public void register(final Object obj) {
        final Object objRg;
        if (obj instanceof TTPluginListener) {
            TTPluginListener tTPluginListener = (TTPluginListener) obj;
            objRg = c.rg(TTAppContextHolder.getContext()).rg(tTPluginListener.packageName(), tTPluginListener.config());
        } else {
            objRg = obj;
        }
        call(new rg<TTVfManager>() {
            @Override
            public void rg(TTVfManager tTVfManager) {
                tTVfManager.register(objRg);
                if (obj instanceof TTPluginListener) {
                    c.rg(TTAppContextHolder.getContext()).rg((TTPluginListener) obj);
                }
            }
        });
    }

    @Override
    public void unregister(final Object obj) {
        call(new rg<TTVfManager>() {
            @Override
            public void rg(TTVfManager tTVfManager) {
                tTVfManager.unregister(obj);
            }
        });
    }

    @Override
    public <T> T getExtra(final Class<T> cls, final Bundle bundle) {
        if (this.df != null) {
            return (T) this.df.getExtra(cls, bundle);
        }
        if (cls == Bundle.class && bundle != null && bundle.getInt("action", 0) == 1) {
            call(new q<TTVfManager>() {
                @Override
                public void rg() {
                    com.bykv.vk.openvk.api.plugin.pt.rg(bundle);
                }

                @Override
                public void rg(TTVfManager tTVfManager) {
                    tTVfManager.getExtra(cls, bundle);
                }
            });
            return null;
        }
        call(new rg<TTVfManager>() {
            @Override
            public void rg(TTVfManager tTVfManager) {
                tTVfManager.getExtra(cls, bundle);
            }
        });
        return null;
    }

    @Override
    public void requestPermissionIfNecessary(final Context context) {
        call(new rg<TTVfManager>() {
            @Override
            public void rg(TTVfManager tTVfManager) {
                tTVfManager.requestPermissionIfNecessary(context);
            }
        });
    }

    @Override
    public boolean tryShowInstallDialogWhenExit(Activity activity, ExitInstallListener exitInstallListener) {
        return this.df != null && this.df.tryShowInstallDialogWhenExit(activity, exitInstallListener);
    }

    @Override
    public String getPluginVersion() {
        return this.df != null ? this.df.getPluginVersion() : "";
    }

    @Override
    public String getBiddingToken(VfSlot vfSlot) {
        if (this.df != null) {
            return this.df.getBiddingToken(vfSlot);
        }
        return null;
    }

    @Override
    public String getBiddingToken(VfSlot vfSlot, boolean z, int i) {
        if (this.df != null) {
            return this.df.getBiddingToken(vfSlot, z, i);
        }
        return null;
    }

    @Override
    public void setThemeStatus(final int i) {
        call(new rg<TTVfManager>() {
            @Override
            public void rg(TTVfManager tTVfManager) {
                rg.this.df.setThemeStatus(i);
            }
        });
    }

    @Override
    public int getThemeStatus() {
        if (this.df != null) {
            return this.df.getThemeStatus();
        }
        return 0;
    }

    private final void call(final rg<TTVfManager> rgVar) {
        if (this.df != null) {
            try {
                rgVar.rg(this.df);
                return;
            } catch (Throwable th) {
                com.bykv.vk.openvk.api.rg.pt("PluginDefaultAdManager", "Unexpected manager call error: " + th.getMessage());
                c.rg(th);
                return;
            }
        }
        if (fw.rg != null) {
            fw.rg.submit(new Runnable() {
                @Override
                public void run() {
                    try {
                        if (rg.this.df != null) {
                            rgVar.rg(rg.this.df);
                            return;
                        }
                        if (rgVar instanceof q) {
                            ((q) rgVar).rg();
                        }
                        com.bykv.vk.openvk.api.rg.pt("PluginDefaultAdManager", "Not ready, no manager");
                    } catch (Throwable th2) {
                        com.bykv.vk.openvk.api.rg.pt("PluginDefaultAdManager", "Unexpected manager call error: " + th2.getMessage());
                        c.rg(th2);
                    }
                }
            });
        } else {
            com.bykv.vk.openvk.api.rg.pt("PluginDefaultAdManager", "Not ready, no executor");
        }
    }

    private static final class pt implements TTVfNative {
        private df<TTVfNative> rg;

        @Override
        public void loadItExpressVi(VfSlot vfSlot, TTVfNative.NtExpressVfListener ntExpressVfListener) {
        }

        public pt(df<TTVfNative> dfVar) {
            this.rg = dfVar;
        }

        @Override
        public void loadVfList(final VfSlot vfSlot, final TTVfNative.VfListListener vfListListener) {
            rg(vfListListener, new rg<TTVfNative>() {
                @Override
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadVfList(vfSlot, vfListListener);
                }
            });
        }

        @Override
        public void loadStream(final VfSlot vfSlot, final TTVfNative.VfListListener vfListListener) {
            rg(vfListListener, new rg<TTVfNative>() {
                @Override
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadStream(vfSlot, vfListListener);
                }
            });
        }

        @Override
        public void loadDrawVfList(final VfSlot vfSlot, final TTVfNative.DrawVfListListener drawVfListListener) {
            rg(drawVfListListener, new rg<TTVfNative>() {
                @Override
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadDrawVfList(vfSlot, drawVfListListener);
                }
            });
        }

        @Override
        public void loadNativeVn(final VfSlot vfSlot, final TTVfNative.NtVfListener ntVfListener) {
            rg(ntVfListener, new rg<TTVfNative>() {
                @Override
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadNativeVn(vfSlot, ntVfListener);
                }
            });
        }

        @Override
        public void loadSphVs(final VfSlot vfSlot, final TTVfNative.SphVfListener sphVfListener, final int i) {
            rg(sphVfListener, new rg<TTVfNative>() {
                @Override
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadSphVs(vfSlot, sphVfListener, i);
                }
            });
        }

        @Override
        public void loadSphVs(final VfSlot vfSlot, final TTVfNative.CSJSplashAdListener cSJSplashAdListener, final int i) {
            rg(cSJSplashAdListener, new rg<TTVfNative>() {
                @Override
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadSphVs(vfSlot, cSJSplashAdListener, i);
                }
            });
        }

        @Override
        public void loadSphVs(final VfSlot vfSlot, final TTVfNative.SphVfListener sphVfListener) {
            rg(sphVfListener, new rg<TTVfNative>() {
                @Override
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadSphVs(vfSlot, sphVfListener);
                }
            });
        }

        @Override
        public void loadRdVideoVr(final VfSlot vfSlot, final TTVfNative.RdVideoVfListener rdVideoVfListener) {
            rg(rdVideoVfListener, new rg<TTVfNative>() {
                @Override
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadRdVideoVr(vfSlot, rdVideoVfListener);
                }
            });
        }

        @Override
        public void loadFullVideoVs(final VfSlot vfSlot, final TTVfNative.FullScreenVideoAdListener fullScreenVideoAdListener) {
            rg(fullScreenVideoAdListener, new rg<TTVfNative>() {
                @Override
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadFullVideoVs(vfSlot, fullScreenVideoAdListener);
                }
            });
        }

        @Override
        public void loadNtExpressVn(final VfSlot vfSlot, final TTVfNative.NtExpressVfListener ntExpressVfListener) {
            rg(ntExpressVfListener, new rg<TTVfNative>() {
                @Override
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadNtExpressVn(vfSlot, ntExpressVfListener);
                }
            });
        }

        @Override
        public void loadExpressDrawVf(final VfSlot vfSlot, final TTVfNative.NtExpressVfListener ntExpressVfListener) {
            rg(ntExpressVfListener, new rg<TTVfNative>() {
                @Override
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadExpressDrawVf(vfSlot, ntExpressVfListener);
                }
            });
        }

        @Override
        public void loadBnExpressVb(final VfSlot vfSlot, final TTVfNative.NtExpressVfListener ntExpressVfListener) {
            rg(ntExpressVfListener, new rg<TTVfNative>() {
                @Override
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadBnExpressVb(vfSlot, ntExpressVfListener);
                }
            });
        }

        private final void rg(CommonListener commonListener, rg<TTVfNative> rgVar) {
            try {
                this.rg.rg(rgVar);
            } catch (Throwable th) {
                if (commonListener != null) {
                    commonListener.onError(4202, "Load ad failed: " + th.getMessage());
                }
            }
        }

        private final void rg(TTVfNative.CSJSplashAdListener cSJSplashAdListener, rg<TTVfNative> rgVar) {
            try {
                this.rg.rg(rgVar);
            } catch (Throwable th) {
                if (cSJSplashAdListener != null) {
                    cSJSplashAdListener.onSplashLoadFail(new CSJAdError(4202, "Load ad failed: " + th.getMessage()));
                }
            }
        }
    }
}
