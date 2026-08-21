package com.sigmob.sdk.mraid;

import android.content.Context;
import android.view.View;
import android.widget.FrameLayout;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.loc.at;
import com.sigmob.sdk.mraid.i;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class n extends i implements i.a {
    public static final int c = 0;
    public static final int d = 1;
    public static final int e = 2;
    public static final int f = 3;
    public static final int g = 4;
    public static final int h = 0;
    public static final int i = 1;
    public static final int j = 2;
    public static final int k = 4;
    public static final int l = 8;
    private l m;
    private Context n;
    private a o;

    /* JADX INFO: renamed from: com.sigmob.sdk.mraid.n$2, reason: invalid class name */
    static /* synthetic */ class AnonymousClass2 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f5037a;

        static {
            int[] iArr = new int[com.sigmob.sdk.videoplayer.e.values().length];
            f5037a = iArr;
            try {
                iArr[com.sigmob.sdk.videoplayer.e.STATE_PREPARED.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f5037a[com.sigmob.sdk.videoplayer.e.STATE_ERROR.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f5037a[com.sigmob.sdk.videoplayer.e.STATE_PAUSE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f5037a[com.sigmob.sdk.videoplayer.e.STATE_PLAYING.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f5037a[com.sigmob.sdk.videoplayer.e.STATE_AUTO_COMPLETE.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                f5037a[com.sigmob.sdk.videoplayer.e.STATE_PREPARING.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                f5037a[com.sigmob.sdk.videoplayer.e.STATE_BUFFERING_START.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                f5037a[com.sigmob.sdk.videoplayer.e.STATE_BUFFERING_END.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                f5037a[com.sigmob.sdk.videoplayer.e.STATE_STOP.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
        }
    }

    public interface a {
        void a(String str, int i);

        void a(String str, int i, String str2);

        void a(String str, long j);

        void a(String str, long j, int i, int i2);

        void a(String str, long j, long j2);

        void b(String str, int i);
    }

    public n(String str) {
        super(str);
    }

    @Override // com.sigmob.sdk.mraid.i.a
    public void a(Context context, JSONObject jSONObject) {
        l lVar = new l(context);
        this.m = lVar;
        lVar.setVideoPlayerStatusListener(new com.sigmob.sdk.videoplayer.l() { // from class: com.sigmob.sdk.mraid.n.1
            @Override // com.sigmob.sdk.videoplayer.l
            public void a(long j2, long j3) {
                if (n.this.o != null) {
                    n.this.o.a(n.this.f5023a, j2, j3);
                }
            }

            @Override // com.sigmob.sdk.videoplayer.l
            public void a(com.sigmob.sdk.videoplayer.e eVar) {
                a aVar;
                String str;
                SigmobLog.d("VIDEO_PLAYER_STATE change: " + eVar);
                int i2 = 1;
                switch (AnonymousClass2.f5037a[eVar.ordinal()]) {
                    case 1:
                        if (n.this.o != null) {
                            n.this.o.a(n.this.f5023a, n.this.m.getDuration(), n.this.m.getVideoWidth(), n.this.m.getVideoHeight());
                        }
                        if (n.this.o != null) {
                            n.this.o.b(n.this.f5023a, 2);
                        }
                        if (n.this.o != null) {
                            n.this.o.b(n.this.f5023a, 4);
                            return;
                        }
                        return;
                    case 2:
                        if (n.this.o != null) {
                            n.this.o.a(n.this.f5023a, n.this.m.getErrorCode(), n.this.m.getErrorMessage());
                            return;
                        }
                        return;
                    case 3:
                        if (n.this.o != null) {
                            n.this.o.a(n.this.f5023a, 2);
                            return;
                        }
                        return;
                    case 4:
                        if (n.this.o != null) {
                            n.this.o.a(n.this.f5023a, 1);
                            return;
                        }
                        return;
                    case 5:
                        if (n.this.o != null) {
                            n.this.o.a(n.this.f5023a, n.this.m.getDuration(), n.this.m.getDuration());
                            n.this.o.a(n.this.f5023a, n.this.m.getDuration());
                            return;
                        }
                        return;
                    case 6:
                        if (n.this.o == null) {
                            return;
                        }
                        aVar = n.this.o;
                        str = n.this.f5023a;
                        break;
                    case 7:
                        if (n.this.o == null) {
                            return;
                        }
                        n.this.m.i();
                        aVar = n.this.o;
                        str = n.this.f5023a;
                        i2 = 8;
                        break;
                    case 8:
                        if (n.this.o != null) {
                            n.this.m.d();
                            n.this.o.b(n.this.f5023a, 2);
                            return;
                        }
                        return;
                    case 9:
                        if (n.this.o != null) {
                            n.this.o.a(n.this.f5023a, 4);
                            return;
                        }
                        return;
                    default:
                        return;
                }
                aVar.b(str, i2);
            }
        });
    }

    public void a(a aVar) {
        this.o = aVar;
    }

    @Override // com.sigmob.sdk.mraid.i.a
    public void a(JSONObject jSONObject) {
        if (this.m != null) {
            this.m.setUp(jSONObject.optString("URL"));
            this.m.m();
        }
    }

    @Override // com.sigmob.sdk.mraid.i
    public View b() {
        return this.m;
    }

    @Override // com.sigmob.sdk.mraid.i.a
    public void b(JSONObject jSONObject) {
        l lVar = this.m;
        if (lVar != null) {
            lVar.d();
        }
    }

    @Override // com.sigmob.sdk.mraid.i
    public void c() {
        l lVar = this.m;
        if (lVar != null) {
            ViewUtil.removeFromParent(lVar);
            this.m.removeAllViews();
            this.m.q();
            this.m = null;
        }
    }

    @Override // com.sigmob.sdk.mraid.i.a
    public void c(JSONObject jSONObject) {
        l lVar = this.m;
        if (lVar != null) {
            lVar.a(0);
            this.m.d();
        }
    }

    @Override // com.sigmob.sdk.mraid.i.a
    public void d(JSONObject jSONObject) {
        l lVar = this.m;
        if (lVar != null) {
            lVar.i();
        }
    }

    @Override // com.sigmob.sdk.mraid.i.a
    public void e(JSONObject jSONObject) {
        l lVar = this.m;
        if (lVar != null) {
            lVar.h();
        }
    }

    @Override // com.sigmob.sdk.mraid.i.a
    public void f(JSONObject jSONObject) {
        if (this.m != null) {
            this.m.setMute(jSONObject.optBoolean("muted", false));
        }
    }

    @Override // com.sigmob.sdk.mraid.i.a
    public void g(JSONObject jSONObject) {
        if (this.m != null) {
            this.m.a(((int) jSONObject.optDouble("seekTime", 0.0d)) * 1000);
        }
    }

    @Override // com.sigmob.sdk.mraid.i.a
    public void h(JSONObject jSONObject) {
        if (this.m != null) {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("frame");
            int iOptInt = jSONObjectOptJSONObject.optInt("x", 0);
            int iOptInt2 = jSONObjectOptJSONObject.optInt("y", 0);
            int iOptInt3 = jSONObjectOptJSONObject.optInt("w", -1);
            int iOptInt4 = jSONObjectOptJSONObject.optInt(at.g, -1);
            if (iOptInt3 > 0) {
                iOptInt3 = Dips.dipsToIntPixels(iOptInt3, com.sigmob.sdk.b.b());
            }
            if (iOptInt4 > 0) {
                iOptInt4 = Dips.dipsToIntPixels(iOptInt4, com.sigmob.sdk.b.b());
            }
            FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(iOptInt3, iOptInt4);
            this.m.setX(Dips.dipsToIntPixels(iOptInt, com.sigmob.sdk.b.b()));
            this.m.setY(Dips.dipsToIntPixels(iOptInt2, com.sigmob.sdk.b.b()));
            this.m.setLayoutParams(layoutParams);
            this.m.requestLayout();
        }
    }
}
