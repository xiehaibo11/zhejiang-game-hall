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

/* JADX INFO: loaded from: classes.dex */
final class rg implements TTVfManager {
    static final rg rg = new rg();
    private volatile TTVfManager df;

    private interface df<T> {
        void rg(InterfaceC0047rg<T> interfaceC0047rg);
    }

    private interface q<T> extends InterfaceC0047rg<T> {
        void rg();
    }

    /* JADX INFO: renamed from: com.bykv.vk.openvk.api.plugin.rg$rg, reason: collision with other inner class name */
    private interface InterfaceC0047rg<T> {
        void rg(T t);
    }

    @Override // com.bykv.vk.openvk.TTVfManager
    public String getSDKVersion() {
        return "5.1.1.4";
    }

    rg() {
    }

    public void rg(TTVfManager tTVfManager) {
        this.df = tTVfManager;
    }

    /* JADX INFO: renamed from: com.bykv.vk.openvk.api.plugin.rg$1, reason: invalid class name */
    class AnonymousClass1 implements df<TTVfNative> {
        final /* synthetic */ WeakReference df;
        TTVfNative rg;

        AnonymousClass1(WeakReference weakReference) {
            this.df = weakReference;
        }

        @Override // com.bykv.vk.openvk.api.plugin.rg.df
        public void rg(final InterfaceC0047rg<TTVfNative> interfaceC0047rg) {
            TTVfNative tTVfNative = this.rg;
            if (tTVfNative == null) {
                rg.this.call(new InterfaceC0047rg<TTVfManager>() { // from class: com.bykv.vk.openvk.api.plugin.rg.1.1
                    @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                    public void rg(TTVfManager tTVfManager) {
                        AnonymousClass1 anonymousClass1 = AnonymousClass1.this;
                        anonymousClass1.rg = tTVfManager.createVfNative((Context) anonymousClass1.df.get());
                        interfaceC0047rg.rg(AnonymousClass1.this.rg);
                    }
                });
            } else {
                interfaceC0047rg.rg(tTVfNative);
            }
        }
    }

    @Override // com.bykv.vk.openvk.TTVfManager
    public TTVfNative createVfNative(Context context) {
        return new pt(new AnonymousClass1(new WeakReference(context)));
    }

    @Override // com.bykv.vk.openvk.TTVfManager
    public void register(final Object obj) {
        final Object objRg;
        if (obj instanceof TTPluginListener) {
            TTPluginListener tTPluginListener = (TTPluginListener) obj;
            objRg = c.rg(TTAppContextHolder.getContext()).rg(tTPluginListener.packageName(), tTPluginListener.config());
        } else {
            objRg = obj;
        }
        call(new InterfaceC0047rg<TTVfManager>() { // from class: com.bykv.vk.openvk.api.plugin.rg.2
            @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
            public void rg(TTVfManager tTVfManager) {
                tTVfManager.register(objRg);
                if (obj instanceof TTPluginListener) {
                    c.rg(TTAppContextHolder.getContext()).rg((TTPluginListener) obj);
                }
            }
        });
    }

    @Override // com.bykv.vk.openvk.TTVfManager
    public void unregister(final Object obj) {
        call(new InterfaceC0047rg<TTVfManager>() { // from class: com.bykv.vk.openvk.api.plugin.rg.3
            @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
            public void rg(TTVfManager tTVfManager) {
                tTVfManager.unregister(obj);
            }
        });
    }

    @Override // com.bykv.vk.openvk.TTVfManager
    public <T> T getExtra(final Class<T> cls, final Bundle bundle) {
        if (this.df != null) {
            return (T) this.df.getExtra(cls, bundle);
        }
        if (cls == Bundle.class && bundle != null && bundle.getInt("action", 0) == 1) {
            call(new q<TTVfManager>() { // from class: com.bykv.vk.openvk.api.plugin.rg.4
                @Override // com.bykv.vk.openvk.api.plugin.rg.q
                public void rg() {
                    com.bykv.vk.openvk.api.plugin.pt.rg(bundle);
                }

                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfManager tTVfManager) {
                    tTVfManager.getExtra(cls, bundle);
                }
            });
            return null;
        }
        call(new InterfaceC0047rg<TTVfManager>() { // from class: com.bykv.vk.openvk.api.plugin.rg.5
            @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
            public void rg(TTVfManager tTVfManager) {
                tTVfManager.getExtra(cls, bundle);
            }
        });
        return null;
    }

    @Override // com.bykv.vk.openvk.TTVfManager
    public void requestPermissionIfNecessary(final Context context) {
        call(new InterfaceC0047rg<TTVfManager>() { // from class: com.bykv.vk.openvk.api.plugin.rg.6
            @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
            public void rg(TTVfManager tTVfManager) {
                tTVfManager.requestPermissionIfNecessary(context);
            }
        });
    }

    @Override // com.bykv.vk.openvk.TTVfManager
    public boolean tryShowInstallDialogWhenExit(Activity activity, ExitInstallListener exitInstallListener) {
        return this.df != null && this.df.tryShowInstallDialogWhenExit(activity, exitInstallListener);
    }

    @Override // com.bykv.vk.openvk.TTVfManager
    public String getPluginVersion() {
        return this.df != null ? this.df.getPluginVersion() : "";
    }

    @Override // com.bykv.vk.openvk.TTVfManager
    public String getBiddingToken(VfSlot vfSlot) {
        if (this.df != null) {
            return this.df.getBiddingToken(vfSlot);
        }
        return null;
    }

    @Override // com.bykv.vk.openvk.TTVfManager
    public String getBiddingToken(VfSlot vfSlot, boolean z, int i) {
        if (this.df != null) {
            return this.df.getBiddingToken(vfSlot, z, i);
        }
        return null;
    }

    @Override // com.bykv.vk.openvk.TTVfManager
    public void setThemeStatus(final int i) {
        call(new InterfaceC0047rg<TTVfManager>() { // from class: com.bykv.vk.openvk.api.plugin.rg.7
            @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
            public void rg(TTVfManager tTVfManager) {
                rg.this.df.setThemeStatus(i);
            }
        });
    }

    @Override // com.bykv.vk.openvk.TTVfManager
    public int getThemeStatus() {
        if (this.df != null) {
            return this.df.getThemeStatus();
        }
        return 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void call(final InterfaceC0047rg<TTVfManager> interfaceC0047rg) {
        if (this.df != null) {
            try {
                interfaceC0047rg.rg(this.df);
                return;
            } catch (Throwable th) {
                com.bykv.vk.openvk.api.rg.pt("PluginDefaultAdManager", "Unexpected manager call error: " + th.getMessage());
                c.rg(th);
                return;
            }
        }
        if (fw.rg != null) {
            fw.rg.submit(new Runnable() { // from class: com.bykv.vk.openvk.api.plugin.rg.8
                @Override // java.lang.Runnable
                public void run() {
                    try {
                        if (rg.this.df != null) {
                            interfaceC0047rg.rg(rg.this.df);
                            return;
                        }
                        if (interfaceC0047rg instanceof q) {
                            ((q) interfaceC0047rg).rg();
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

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadItExpressVi(VfSlot vfSlot, TTVfNative.NtExpressVfListener ntExpressVfListener) {
        }

        public pt(df<TTVfNative> dfVar) {
            this.rg = dfVar;
        }

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadVfList(final VfSlot vfSlot, final TTVfNative.VfListListener vfListListener) {
            rg(vfListListener, new InterfaceC0047rg<TTVfNative>() { // from class: com.bykv.vk.openvk.api.plugin.rg.pt.1
                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadVfList(vfSlot, vfListListener);
                }
            });
        }

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadStream(final VfSlot vfSlot, final TTVfNative.VfListListener vfListListener) {
            rg(vfListListener, new InterfaceC0047rg<TTVfNative>() { // from class: com.bykv.vk.openvk.api.plugin.rg.pt.5
                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadStream(vfSlot, vfListListener);
                }
            });
        }

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadDrawVfList(final VfSlot vfSlot, final TTVfNative.DrawVfListListener drawVfListListener) {
            rg(drawVfListListener, new InterfaceC0047rg<TTVfNative>() { // from class: com.bykv.vk.openvk.api.plugin.rg.pt.6
                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadDrawVfList(vfSlot, drawVfListListener);
                }
            });
        }

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadNativeVn(final VfSlot vfSlot, final TTVfNative.NtVfListener ntVfListener) {
            rg(ntVfListener, new InterfaceC0047rg<TTVfNative>() { // from class: com.bykv.vk.openvk.api.plugin.rg.pt.7
                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadNativeVn(vfSlot, ntVfListener);
                }
            });
        }

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadSphVs(final VfSlot vfSlot, final TTVfNative.SphVfListener sphVfListener, final int i) {
            rg(sphVfListener, new InterfaceC0047rg<TTVfNative>() { // from class: com.bykv.vk.openvk.api.plugin.rg.pt.8
                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadSphVs(vfSlot, sphVfListener, i);
                }
            });
        }

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadSphVs(final VfSlot vfSlot, final TTVfNative.CSJSplashAdListener cSJSplashAdListener, final int i) {
            rg(cSJSplashAdListener, new InterfaceC0047rg<TTVfNative>() { // from class: com.bykv.vk.openvk.api.plugin.rg.pt.9
                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadSphVs(vfSlot, cSJSplashAdListener, i);
                }
            });
        }

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadSphVs(final VfSlot vfSlot, final TTVfNative.SphVfListener sphVfListener) {
            rg(sphVfListener, new InterfaceC0047rg<TTVfNative>() { // from class: com.bykv.vk.openvk.api.plugin.rg.pt.10
                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadSphVs(vfSlot, sphVfListener);
                }
            });
        }

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadRdVideoVr(final VfSlot vfSlot, final TTVfNative.RdVideoVfListener rdVideoVfListener) {
            rg(rdVideoVfListener, new InterfaceC0047rg<TTVfNative>() { // from class: com.bykv.vk.openvk.api.plugin.rg.pt.11
                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadRdVideoVr(vfSlot, rdVideoVfListener);
                }
            });
        }

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadFullVideoVs(final VfSlot vfSlot, final TTVfNative.FullScreenVideoAdListener fullScreenVideoAdListener) {
            rg(fullScreenVideoAdListener, new InterfaceC0047rg<TTVfNative>() { // from class: com.bykv.vk.openvk.api.plugin.rg.pt.12
                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadFullVideoVs(vfSlot, fullScreenVideoAdListener);
                }
            });
        }

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadNtExpressVn(final VfSlot vfSlot, final TTVfNative.NtExpressVfListener ntExpressVfListener) {
            rg(ntExpressVfListener, new InterfaceC0047rg<TTVfNative>() { // from class: com.bykv.vk.openvk.api.plugin.rg.pt.2
                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadNtExpressVn(vfSlot, ntExpressVfListener);
                }
            });
        }

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadExpressDrawVf(final VfSlot vfSlot, final TTVfNative.NtExpressVfListener ntExpressVfListener) {
            rg(ntExpressVfListener, new InterfaceC0047rg<TTVfNative>() { // from class: com.bykv.vk.openvk.api.plugin.rg.pt.3
                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadExpressDrawVf(vfSlot, ntExpressVfListener);
                }
            });
        }

        @Override // com.bykv.vk.openvk.TTVfNative
        public void loadBnExpressVb(final VfSlot vfSlot, final TTVfNative.NtExpressVfListener ntExpressVfListener) {
            rg(ntExpressVfListener, new InterfaceC0047rg<TTVfNative>() { // from class: com.bykv.vk.openvk.api.plugin.rg.pt.4
                @Override // com.bykv.vk.openvk.api.plugin.rg.InterfaceC0047rg
                public void rg(TTVfNative tTVfNative) {
                    tTVfNative.loadBnExpressVb(vfSlot, ntExpressVfListener);
                }
            });
        }

        private final void rg(CommonListener commonListener, InterfaceC0047rg<TTVfNative> interfaceC0047rg) {
            try {
                this.rg.rg(interfaceC0047rg);
            } catch (Throwable th) {
                if (commonListener != null) {
                    commonListener.onError(4202, "Load ad failed: " + th.getMessage());
                }
            }
        }

        private final void rg(TTVfNative.CSJSplashAdListener cSJSplashAdListener, InterfaceC0047rg<TTVfNative> interfaceC0047rg) {
            try {
                this.rg.rg(interfaceC0047rg);
            } catch (Throwable th) {
                if (cSJSplashAdListener != null) {
                    cSJSplashAdListener.onSplashLoadFail(new CSJAdError(4202, "Load ad failed: " + th.getMessage()));
                }
            }
        }
    }
}
