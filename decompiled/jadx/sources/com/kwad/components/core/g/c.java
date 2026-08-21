package com.kwad.components.core.g;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.components.core.g.a;
import com.kwad.components.core.video.h;
import com.kwad.sdk.core.imageloader.core.assist.FailReason;
import com.kwad.sdk.core.imageloader.core.decode.DecodedResult;
import com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener;
import java.io.InputStream;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes2.dex */
public final class c implements ImageLoadingListener {
    private b Ks;
    private a Kt;
    private long Kw;
    private long gz;
    private int Ku = 1;
    private int Kv = 16;
    private List<h> Kx = new CopyOnWriteArrayList();

    /* JADX INFO: renamed from: com.kwad.components.core.g.c$6, reason: invalid class name */
    static /* synthetic */ class AnonymousClass6 {
        static final /* synthetic */ int[] $SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType;

        static {
            int[] iArr = new int[FailReason.FailType.values().length];
            $SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType = iArr;
            try {
                iArr[FailReason.FailType.IO_ERROR.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType[FailReason.FailType.DECODING_ERROR.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType[FailReason.FailType.NETWORK_DENIED.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType[FailReason.FailType.OUT_OF_MEMORY.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                $SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType[FailReason.FailType.UNKNOWN.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
        }
    }

    public c() {
        a aVar = new a(new Handler(Looper.getMainLooper()));
        this.Kt = aVar;
        aVar.a(new a.InterfaceC0151a() { // from class: com.kwad.components.core.g.c.1
            private boolean Ky = false;
            private boolean Kz = false;

            private void kV() {
                if (this.Ky) {
                    return;
                }
                c.this.b(new com.kwad.sdk.g.a<h>() { // from class: com.kwad.components.core.g.c.1.2
                    private static void e(h hVar) {
                        hVar.onMediaPlayCompleted();
                    }

                    @Override // com.kwad.sdk.g.a
                    public final /* synthetic */ void accept(h hVar) {
                        e(hVar);
                    }
                });
                this.Ky = true;
            }

            private void nX() {
                if (this.Kz) {
                    return;
                }
                com.kwad.sdk.core.e.c.d("KSImagePlayer", "onFirstFrame: ");
                this.Kz = true;
                c.this.b(new com.kwad.sdk.g.a<h>() { // from class: com.kwad.components.core.g.c.1.3
                    private static void e(h hVar) {
                        hVar.onMediaPlayStart();
                    }

                    @Override // com.kwad.sdk.g.a
                    public final /* synthetic */ void accept(h hVar) {
                        e(hVar);
                    }
                });
            }

            @Override // com.kwad.components.core.g.a.InterfaceC0151a
            public final void u(final long j) {
                com.kwad.sdk.core.e.c.d("KSImagePlayer", "onTimerProgress: " + j);
                if (j == 0) {
                    nX();
                }
                c.this.gz = j;
                if (c.this.gz >= c.this.Kw && c.this.Kw > 0) {
                    kV();
                }
                c.this.b(new com.kwad.sdk.g.a<h>() { // from class: com.kwad.components.core.g.c.1.1
                    /* JADX INFO: Access modifiers changed from: private */
                    @Override // com.kwad.sdk.g.a
                    /* JADX INFO: renamed from: e, reason: merged with bridge method [inline-methods] */
                    public void accept(h hVar) {
                        hVar.onMediaPlayProgress(c.this.Kw, j);
                    }
                });
            }
        });
    }

    static /* synthetic */ int a(c cVar, FailReason.FailType failType) {
        return a(failType);
    }

    private static int a(FailReason.FailType failType) {
        int i = AnonymousClass6.$SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType[failType.ordinal()];
        if (i == 1) {
            return -2;
        }
        if (i == 2) {
            return -3;
        }
        if (i != 3) {
            return i != 4 ? -1 : -5;
        }
        return -4;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public <T> void b(com.kwad.sdk.g.a<h> aVar) {
        List<h> list;
        if (aVar == null || (list = this.Kx) == null) {
            return;
        }
        Iterator<h> it = list.iterator();
        while (it.hasNext()) {
            aVar.accept(it.next());
        }
    }

    private void nW() {
        b bVar = this.Ks;
        if (bVar != null) {
            bVar.setImageGravity(this.Ku | this.Kv);
        }
    }

    public final void c(h hVar) {
        if (hVar != null) {
            this.Kx.add(hVar);
        }
    }

    public final void d(h hVar) {
        if (hVar != null) {
            this.Kx.remove(hVar);
        }
    }

    public final void destroy() {
        this.Kx.clear();
        b bVar = this.Ks;
        if (bVar != null && bVar.getParent() != null) {
            ((ViewGroup) this.Ks.getParent()).removeView(this.Ks);
        }
        this.Ks = null;
        a aVar = this.Kt;
        if (aVar != null) {
            aVar.destroy();
            this.Kt = null;
        }
    }

    public final FrameLayout getImagePlayerView(Context context) {
        if (this.Ks == null) {
            this.Ks = new b(context);
        }
        return this.Ks;
    }

    public final long getPlayDuration() {
        return this.gz;
    }

    @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
    public final boolean onDecode(String str, InputStream inputStream, DecodedResult decodedResult) {
        return false;
    }

    @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
    public final void onLoadingCancelled(String str, View view) {
    }

    @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
    public final void onLoadingComplete(String str, View view, DecodedResult decodedResult) {
    }

    @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
    public final void onLoadingFailed(String str, View view, final FailReason failReason) {
        b(new com.kwad.sdk.g.a<h>() { // from class: com.kwad.components.core.g.c.5
            /* JADX INFO: Access modifiers changed from: private */
            @Override // com.kwad.sdk.g.a
            /* JADX INFO: renamed from: e, reason: merged with bridge method [inline-methods] */
            public void accept(h hVar) {
                hVar.onMediaPlayError(-1, c.a(c.this, failReason.getType()));
            }
        });
    }

    @Override // com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener
    public final void onLoadingStarted(String str, View view) {
    }

    public final void pause() {
        a aVar = this.Kt;
        if (aVar != null) {
            aVar.pause();
        }
        b(new com.kwad.sdk.g.a<h>() { // from class: com.kwad.components.core.g.c.2
            private static void e(h hVar) {
                hVar.onMediaPlayPaused();
            }

            @Override // com.kwad.sdk.g.a
            public final /* synthetic */ void accept(h hVar) {
                e(hVar);
            }
        });
    }

    public final void play() {
        a aVar = this.Kt;
        if (aVar != null) {
            aVar.start();
        }
    }

    public final void resume() {
        a aVar = this.Kt;
        if (aVar != null) {
            aVar.resume();
            b(new com.kwad.sdk.g.a<h>() { // from class: com.kwad.components.core.g.c.3
                private static void e(h hVar) {
                    hVar.onMediaPlaying();
                }

                @Override // com.kwad.sdk.g.a
                public final /* synthetic */ void accept(h hVar) {
                    e(hVar);
                }
            });
        }
    }

    public final void setHorizontalGravity(int i) {
        this.Kv = com.kwad.components.core.b.c.al(i);
        nW();
    }

    public final void setImageScaleType(ImageView.ScaleType scaleType) {
        b bVar = this.Ks;
        if (bVar != null) {
            bVar.setImageScaleType(scaleType);
        }
    }

    public final void setRadius(float f, float f2, float f3, float f4) {
        b bVar = this.Ks;
        if (bVar != null) {
            bVar.setRadius(f, f2, f3, f4);
        }
    }

    public final void setURLs(List<String> list) {
        if (list == null || list.size() == 0) {
            return;
        }
        String str = list.get(0);
        b bVar = this.Ks;
        if (bVar != null) {
            bVar.a(str, this);
        }
    }

    public final void setVerticalGravity(int i) {
        this.Kv = com.kwad.components.core.b.c.ak(i);
        nW();
    }

    public final void skipToEnd() {
        b(new com.kwad.sdk.g.a<h>() { // from class: com.kwad.components.core.g.c.4
            private static void e(h hVar) {
                hVar.onMediaPlayCompleted();
            }

            @Override // com.kwad.sdk.g.a
            public final /* synthetic */ void accept(h hVar) {
                e(hVar);
            }
        });
    }

    public final void stop() {
        a aVar = this.Kt;
        if (aVar != null) {
            aVar.stop();
        }
    }

    public final void v(long j) {
        this.Kw = j;
    }
}
