package com.sigmob.sdk.nativead;

import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class d implements com.sigmob.sdk.base.common.q {

    /* JADX INFO: renamed from: com.sigmob.sdk.nativead.d$2, reason: invalid class name */
    static /* synthetic */ class AnonymousClass2 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f5102a;

        static {
            int[] iArr = new int[com.sigmob.sdk.base.common.a.values().length];
            f5102a = iArr;
            try {
                iArr[com.sigmob.sdk.base.common.a.AD_START.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_NATIVE_SHOW.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_HIDE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_VIDEO_LINK.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_NATIVE_VIDEO_RESTART.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_NATIVE_VIDEO_START.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_NATIVE_VIDEO_PAUSE.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_PLAY_QUARTER.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_PLAY_TWO_QUARTERS.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_PLAY_THREE_QUARTERS.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_COMPLETE.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_CLICK.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_FOUR_ELEMENTS_SHOW.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                f5102a[com.sigmob.sdk.base.common.a.AD_FOUR_ELEMENTS_CLOSE.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
        }
    }

    private void a(BaseAdUnit baseAdUnit, String str, String str2, final HashMap<String, String> map) {
        com.sigmob.sdk.base.common.z.a(str, str2, baseAdUnit, new z.a() { // from class: com.sigmob.sdk.nativead.d.1
            @Override // com.sigmob.sdk.base.common.z.a
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    ((PointEntitySigmob) obj).setOptions(map);
                }
            }
        });
    }

    @Override // com.sigmob.sdk.base.common.q
    public boolean a(BaseAdUnit baseAdUnit) {
        return true;
    }

    @Override // com.sigmob.sdk.base.common.q
    public boolean a(BaseAdUnit baseAdUnit, int i, int i2) {
        return false;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v2 */
    /* JADX WARN: Type inference failed for: r2v3 */
    /* JADX WARN: Type inference failed for: r2v4, types: [java.lang.String, java.util.HashMap] */
    /* JADX WARN: Type inference failed for: r2v5 */
    @Override // com.sigmob.sdk.base.common.q
    public boolean a(BaseAdUnit baseAdUnit, com.sigmob.sdk.base.common.a aVar, int i) {
        d dVar;
        String str;
        ?? r2;
        String str2;
        HashMap<String, String> map;
        String str3;
        String str4;
        d dVar2;
        String str5;
        String str6;
        String str7;
        String str8;
        String str9;
        HashMap<String, String> map2;
        String str10;
        try {
            try {
                switch (AnonymousClass2.f5102a[aVar.ordinal()]) {
                    case 1:
                        dVar = this;
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_START);
                        str = "start";
                        r2 = 0;
                        dVar.a(baseAdUnit, str, r2, r2);
                        break;
                    case 2:
                        dVar = this;
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_NATIVE_SHOW);
                        str = PointCategory.AD_SHOW;
                        r2 = 0;
                        dVar.a(baseAdUnit, str, r2, r2);
                        break;
                    case 3:
                        dVar = this;
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_HIDE);
                        str = PointCategory.AD_HIDE;
                        r2 = 0;
                        dVar.a(baseAdUnit, str, r2, r2);
                        break;
                    case 4:
                        SigMacroCommon macroCommon = baseAdUnit.getMacroCommon();
                        if (macroCommon instanceof SigMacroCommon) {
                            str2 = "is_first";
                            macroCommon.addMarcoKey(SigMacroCommon._VIDEOTIME_, String.valueOf(baseAdUnit.getVideoCommon().video_time));
                            macroCommon.addMarcoKey(SigMacroCommon._BEGINTIME_, String.valueOf(baseAdUnit.getVideoCommon().begin_time));
                            macroCommon.addMarcoKey(SigMacroCommon._ENDTIME_, String.valueOf(baseAdUnit.getVideoCommon().end_time));
                            macroCommon.addMarcoKey(SigMacroCommon._PLAYFIRSTFRAME_, String.valueOf(baseAdUnit.getVideoCommon().is_first));
                            macroCommon.addMarcoKey(SigMacroCommon._PLAYLASTFRAME_, String.valueOf(baseAdUnit.getVideoCommon().is_last));
                            macroCommon.addMarcoKey(SigMacroCommon._SCENE_, String.valueOf(baseAdUnit.getVideoCommon().scene));
                            macroCommon.addMarcoKey(SigMacroCommon._TYPE_, String.valueOf(baseAdUnit.getVideoCommon().type));
                            macroCommon.addMarcoKey(SigMacroCommon._BEHAVIOR_, String.valueOf(baseAdUnit.getVideoCommon().is_auto_play));
                            macroCommon.addMarcoKey(SigMacroCommon._STATUS_, String.valueOf(baseAdUnit.getVideoCommon().status));
                        } else {
                            str2 = "is_first";
                        }
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_VIDEO_LINK, true);
                        map = new HashMap<>();
                        map.put("video_time", String.valueOf(baseAdUnit.getVideoCommon().video_time));
                        map.put("begin_time", String.valueOf(baseAdUnit.getVideoCommon().begin_time));
                        map.put(com.tkay.core.common.b.d.b, String.valueOf(baseAdUnit.getVideoCommon().end_time));
                        map.put(str2, String.valueOf(baseAdUnit.getVideoCommon().is_first));
                        map.put("scene", String.valueOf(baseAdUnit.getVideoCommon().scene));
                        map.put("type", String.valueOf(baseAdUnit.getVideoCommon().type));
                        map.put("is_auto_play", String.valueOf(baseAdUnit.getVideoCommon().is_auto_play));
                        map.put("status", String.valueOf(baseAdUnit.getVideoCommon().status));
                        str3 = PointCategory.VIDEO_LINK;
                        str4 = null;
                        dVar2 = this;
                        dVar2.a(baseAdUnit, str3, str4, map);
                        break;
                    case 5:
                        SigMacroCommon macroCommon2 = baseAdUnit.getMacroCommon();
                        if (macroCommon2 instanceof SigMacroCommon) {
                            str5 = "is_first";
                            macroCommon2.addMarcoKey(SigMacroCommon._VIDEOTIME_, String.valueOf(baseAdUnit.getVideoCommon().video_time));
                            macroCommon2.addMarcoKey(SigMacroCommon._BEGINTIME_, String.valueOf(baseAdUnit.getVideoCommon().begin_time));
                            macroCommon2.addMarcoKey(SigMacroCommon._ENDTIME_, String.valueOf(baseAdUnit.getVideoCommon().end_time));
                            macroCommon2.addMarcoKey(SigMacroCommon._PLAYFIRSTFRAME_, String.valueOf(baseAdUnit.getVideoCommon().is_first));
                            macroCommon2.addMarcoKey(SigMacroCommon._PLAYLASTFRAME_, String.valueOf(baseAdUnit.getVideoCommon().is_last));
                            macroCommon2.addMarcoKey(SigMacroCommon._SCENE_, String.valueOf(baseAdUnit.getVideoCommon().scene));
                            macroCommon2.addMarcoKey(SigMacroCommon._TYPE_, String.valueOf(baseAdUnit.getVideoCommon().type));
                            macroCommon2.addMarcoKey(SigMacroCommon._BEHAVIOR_, String.valueOf(baseAdUnit.getVideoCommon().is_auto_play));
                            macroCommon2.addMarcoKey(SigMacroCommon._STATUS_, String.valueOf(baseAdUnit.getVideoCommon().status));
                        } else {
                            str5 = "is_first";
                        }
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_NATIVE_VIDEO_RESTART);
                        map = new HashMap<>();
                        map.put("video_time", String.valueOf(baseAdUnit.getVideoCommon().video_time));
                        map.put("begin_time", String.valueOf(baseAdUnit.getVideoCommon().begin_time));
                        map.put(com.tkay.core.common.b.d.b, String.valueOf(baseAdUnit.getVideoCommon().end_time));
                        map.put(str5, String.valueOf(baseAdUnit.getVideoCommon().is_first));
                        map.put("scene", String.valueOf(baseAdUnit.getVideoCommon().scene));
                        map.put("type", String.valueOf(baseAdUnit.getVideoCommon().type));
                        map.put("is_auto_play", String.valueOf(baseAdUnit.getVideoCommon().is_auto_play));
                        map.put("status", String.valueOf(baseAdUnit.getVideoCommon().status));
                        str3 = PointCategory.VIDEO_RESTART;
                        str4 = null;
                        dVar2 = this;
                        dVar2.a(baseAdUnit, str3, str4, map);
                        break;
                    case 6:
                        SigMacroCommon macroCommon3 = baseAdUnit.getMacroCommon();
                        if (macroCommon3 instanceof SigMacroCommon) {
                            str6 = "is_first";
                            macroCommon3.addMarcoKey(SigMacroCommon._VIDEOTIME_, String.valueOf(baseAdUnit.getVideoCommon().video_time));
                            macroCommon3.addMarcoKey(SigMacroCommon._BEGINTIME_, String.valueOf(baseAdUnit.getVideoCommon().begin_time));
                            macroCommon3.addMarcoKey(SigMacroCommon._ENDTIME_, String.valueOf(baseAdUnit.getVideoCommon().end_time));
                            macroCommon3.addMarcoKey(SigMacroCommon._PLAYFIRSTFRAME_, String.valueOf(baseAdUnit.getVideoCommon().is_first));
                            macroCommon3.addMarcoKey(SigMacroCommon._PLAYLASTFRAME_, String.valueOf(baseAdUnit.getVideoCommon().is_last));
                            macroCommon3.addMarcoKey(SigMacroCommon._SCENE_, String.valueOf(baseAdUnit.getVideoCommon().scene));
                            macroCommon3.addMarcoKey(SigMacroCommon._TYPE_, String.valueOf(baseAdUnit.getVideoCommon().type));
                            macroCommon3.addMarcoKey(SigMacroCommon._BEHAVIOR_, String.valueOf(baseAdUnit.getVideoCommon().is_auto_play));
                            macroCommon3.addMarcoKey(SigMacroCommon._STATUS_, String.valueOf(baseAdUnit.getVideoCommon().status));
                        } else {
                            str6 = "is_first";
                        }
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_NATIVE_VIDEO_START);
                        map = new HashMap<>();
                        map.put("video_time", String.valueOf(baseAdUnit.getVideoCommon().video_time));
                        map.put("begin_time", String.valueOf(baseAdUnit.getVideoCommon().begin_time));
                        map.put(com.tkay.core.common.b.d.b, String.valueOf(baseAdUnit.getVideoCommon().end_time));
                        map.put(str6, String.valueOf(baseAdUnit.getVideoCommon().is_first));
                        map.put("scene", String.valueOf(baseAdUnit.getVideoCommon().scene));
                        map.put("type", String.valueOf(baseAdUnit.getVideoCommon().type));
                        map.put("is_auto_play", String.valueOf(baseAdUnit.getVideoCommon().is_auto_play));
                        map.put("status", String.valueOf(baseAdUnit.getVideoCommon().status));
                        str3 = PointCategory.VIDEO_START;
                        str4 = null;
                        dVar2 = this;
                        dVar2.a(baseAdUnit, str3, str4, map);
                        break;
                    case 7:
                        SigMacroCommon macroCommon4 = baseAdUnit.getMacroCommon();
                        if (macroCommon4 instanceof SigMacroCommon) {
                            str7 = "is_first";
                            macroCommon4.addMarcoKey(SigMacroCommon._VIDEOTIME_, String.valueOf(baseAdUnit.getVideoCommon().video_time));
                            macroCommon4.addMarcoKey(SigMacroCommon._BEGINTIME_, String.valueOf(baseAdUnit.getVideoCommon().begin_time));
                            macroCommon4.addMarcoKey(SigMacroCommon._ENDTIME_, String.valueOf(baseAdUnit.getVideoCommon().end_time));
                            macroCommon4.addMarcoKey(SigMacroCommon._PLAYFIRSTFRAME_, String.valueOf(baseAdUnit.getVideoCommon().is_first));
                            macroCommon4.addMarcoKey(SigMacroCommon._PLAYLASTFRAME_, String.valueOf(baseAdUnit.getVideoCommon().is_last));
                            macroCommon4.addMarcoKey(SigMacroCommon._SCENE_, String.valueOf(baseAdUnit.getVideoCommon().scene));
                            macroCommon4.addMarcoKey(SigMacroCommon._TYPE_, String.valueOf(baseAdUnit.getVideoCommon().type));
                            macroCommon4.addMarcoKey(SigMacroCommon._BEHAVIOR_, String.valueOf(baseAdUnit.getVideoCommon().is_auto_play));
                            macroCommon4.addMarcoKey(SigMacroCommon._STATUS_, String.valueOf(baseAdUnit.getVideoCommon().status));
                        } else {
                            str7 = "is_first";
                        }
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_NATIVE_VIDEO_PAUSE, true);
                        map = new HashMap<>();
                        map.put("video_time", String.valueOf(baseAdUnit.getVideoCommon().video_time));
                        map.put("begin_time", String.valueOf(baseAdUnit.getVideoCommon().begin_time));
                        map.put(com.tkay.core.common.b.d.b, String.valueOf(baseAdUnit.getVideoCommon().end_time));
                        map.put(str7, String.valueOf(baseAdUnit.getVideoCommon().is_first));
                        map.put("scene", String.valueOf(baseAdUnit.getVideoCommon().scene));
                        map.put("type", String.valueOf(baseAdUnit.getVideoCommon().type));
                        map.put("is_auto_play", String.valueOf(baseAdUnit.getVideoCommon().is_auto_play));
                        map.put("status", String.valueOf(baseAdUnit.getVideoCommon().status));
                        str3 = PointCategory.VIDEO_PAUSE;
                        str4 = null;
                        dVar2 = this;
                        dVar2.a(baseAdUnit, str3, str4, map);
                        break;
                    case 8:
                        str8 = PointCategory.PLAY;
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_PLAY_QUARTER);
                        str9 = "0.25";
                        map2 = null;
                        a(baseAdUnit, str8, str9, map2);
                        break;
                    case 9:
                        str8 = PointCategory.PLAY;
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_PLAY_TWO_QUARTERS);
                        str9 = "0.50";
                        map2 = null;
                        a(baseAdUnit, str8, str9, map2);
                        break;
                    case 10:
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_PLAY_THREE_QUARTERS);
                        str9 = "0.75";
                        str8 = PointCategory.PLAY;
                        map2 = null;
                        a(baseAdUnit, str8, str9, map2);
                        break;
                    case 11:
                        SigMacroCommon macroCommon5 = baseAdUnit.getMacroCommon();
                        if (macroCommon5 instanceof SigMacroCommon) {
                            macroCommon5.addMarcoKey(SigMacroCommon._VIDEOTIME_, String.valueOf(baseAdUnit.getVideoCommon().video_time));
                            macroCommon5.addMarcoKey(SigMacroCommon._BEGINTIME_, String.valueOf(baseAdUnit.getVideoCommon().begin_time));
                            macroCommon5.addMarcoKey(SigMacroCommon._ENDTIME_, String.valueOf(baseAdUnit.getVideoCommon().end_time));
                            macroCommon5.addMarcoKey(SigMacroCommon._PLAYFIRSTFRAME_, String.valueOf(baseAdUnit.getVideoCommon().is_first));
                            macroCommon5.addMarcoKey(SigMacroCommon._PLAYLASTFRAME_, String.valueOf(baseAdUnit.getVideoCommon().is_last));
                            macroCommon5.addMarcoKey(SigMacroCommon._SCENE_, String.valueOf(baseAdUnit.getVideoCommon().scene));
                            macroCommon5.addMarcoKey(SigMacroCommon._TYPE_, String.valueOf(baseAdUnit.getVideoCommon().type));
                            macroCommon5.addMarcoKey(SigMacroCommon._BEHAVIOR_, String.valueOf(baseAdUnit.getVideoCommon().is_auto_play));
                            macroCommon5.addMarcoKey(SigMacroCommon._STATUS_, String.valueOf(baseAdUnit.getVideoCommon().status));
                        }
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_COMPLETE, true);
                        HashMap<String, String> map3 = new HashMap<>();
                        map3.put("video_time", String.valueOf(baseAdUnit.getVideoCommon().video_time));
                        map3.put("begin_time", String.valueOf(baseAdUnit.getVideoCommon().begin_time));
                        map3.put(com.tkay.core.common.b.d.b, String.valueOf(baseAdUnit.getVideoCommon().end_time));
                        map3.put("is_first", String.valueOf(baseAdUnit.getVideoCommon().is_first));
                        map3.put("scene", String.valueOf(baseAdUnit.getVideoCommon().scene));
                        map3.put("type", String.valueOf(baseAdUnit.getVideoCommon().type));
                        map3.put("is_auto_play", String.valueOf(baseAdUnit.getVideoCommon().is_auto_play));
                        map3.put("status", String.valueOf(baseAdUnit.getVideoCommon().status));
                        a(baseAdUnit, "complete", null, map3);
                        break;
                    case 12:
                        String str11 = baseAdUnit.getClickCommon().is_final_click ? "1" : "0";
                        SigMacroCommon macroCommon6 = baseAdUnit.getMacroCommon();
                        if (macroCommon6 instanceof SigMacroCommon) {
                            macroCommon6.addMarcoKey(SigMacroCommon._CLICKAREA_, String.valueOf(baseAdUnit.getClickCommon().click_area));
                            macroCommon6.addMarcoKey(SigMacroCommon._CLICKSCENE_, String.valueOf(baseAdUnit.getClickCommon().click_scene));
                            macroCommon6.addMarcoKey(SigMacroCommon._AUTOCLICK_, String.valueOf(baseAdUnit.getClickCommon().auto_click));
                            macroCommon6.addMarcoKey(SigMacroCommon._FINALCLICK_, str11);
                            macroCommon6.addMarcoKey(SigMacroCommon._DOWNX_, String.valueOf(baseAdUnit.getClickCommon().down.getX()));
                            macroCommon6.addMarcoKey(SigMacroCommon._DOWNY_, String.valueOf(baseAdUnit.getClickCommon().down.getY()));
                            macroCommon6.addMarcoKey(SigMacroCommon._UPX_, String.valueOf(baseAdUnit.getClickCommon().up.getY()));
                            macroCommon6.addMarcoKey(SigMacroCommon._UPY_, String.valueOf(baseAdUnit.getClickCommon().up.getY()));
                        }
                        com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_CLICK);
                        HashMap<String, String> map4 = new HashMap<>();
                        map4.put("click_area", baseAdUnit.getClickCommon().click_area);
                        map4.put("click_scene", baseAdUnit.getClickCommon().click_scene);
                        map4.put("is_final_click", str11);
                        map4.put("coordinate", baseAdUnit.getClickCommon().getClickCoordinate());
                        a(baseAdUnit, baseAdUnit.getClickCommon().click_scene, "click", map4);
                        break;
                    case 13:
                        str10 = PointCategory.SHOW;
                        a(baseAdUnit, PointCategory.FOURELEMENTS, str10, null);
                        break;
                    case 14:
                        str10 = "close";
                        a(baseAdUnit, PointCategory.FOURELEMENTS, str10, null);
                        break;
                }
                return true;
            } catch (Throwable unused) {
                return true;
            }
        } catch (Throwable unused2) {
            return true;
        }
    }

    @Override // com.sigmob.sdk.base.common.q
    public boolean a(BaseAdUnit baseAdUnit, boolean z, int i) {
        return false;
    }

    @Override // com.sigmob.sdk.base.common.q
    public boolean b(BaseAdUnit baseAdUnit) {
        return true;
    }
}
