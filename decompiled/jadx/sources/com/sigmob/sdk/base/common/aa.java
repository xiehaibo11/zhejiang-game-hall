package com.sigmob.sdk.base.common;

import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.tencent.connect.common.Constants;

/* JADX INFO: loaded from: classes3.dex */
class aa implements q {
    private boolean b;
    private int c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f4795a = 0;
    private int d = 0;

    /* JADX INFO: renamed from: com.sigmob.sdk.base.common.aa$2, reason: invalid class name */
    static /* synthetic */ class AnonymousClass2 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f4797a;

        static {
            int[] iArr = new int[a.values().length];
            f4797a = iArr;
            try {
                iArr[a.AD_START.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f4797a[a.AD_SKIP.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f4797a[a.AD_CLOSE_CARD_SHOW.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f4797a[a.AD_CLOSE_CARD_CLOSE.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f4797a[a.AD_FOUR_ELEMENTS_SHOW.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                f4797a[a.AD_FOUR_ELEMENTS_CLOSE.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                f4797a[a.AD_SHOW.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                f4797a[a.AD_CLICK.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                f4797a[a.AD_COMPANION_CLICK.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                f4797a[a.AD_VIDEO_CLICK.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                f4797a[a.AD_SHOW_SKIP.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                f4797a[a.AD_COMPLETE.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                f4797a[a.AD_REWARD.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                f4797a[a.AD_FINISH.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
            try {
                f4797a[a.AD_VCLOSE.ordinal()] = 15;
            } catch (NoSuchFieldError unused15) {
            }
            try {
                f4797a[a.AD_MUTE.ordinal()] = 16;
            } catch (NoSuchFieldError unused16) {
            }
            try {
                f4797a[a.AD_UNMUTE.ordinal()] = 17;
            } catch (NoSuchFieldError unused17) {
            }
            try {
                f4797a[a.AD_ROTATION.ordinal()] = 18;
            } catch (NoSuchFieldError unused18) {
            }
            try {
                f4797a[a.AD_VIDEO_START.ordinal()] = 19;
            } catch (NoSuchFieldError unused19) {
            }
            try {
                f4797a[a.AD_PLAY_QUARTER.ordinal()] = 20;
            } catch (NoSuchFieldError unused20) {
            }
            try {
                f4797a[a.AD_PLAY_TWO_QUARTERS.ordinal()] = 21;
            } catch (NoSuchFieldError unused21) {
            }
            try {
                f4797a[a.AD_PLAY_THREE_QUARTERS.ordinal()] = 22;
            } catch (NoSuchFieldError unused22) {
            }
            try {
                f4797a[a.AD_PLAY_COMPLETE.ordinal()] = 23;
            } catch (NoSuchFieldError unused23) {
            }
            try {
                f4797a[a.AD_CLICK_SKIP.ordinal()] = 24;
            } catch (NoSuchFieldError unused24) {
            }
        }
    }

    aa() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String a(int i) {
        return i == 0 ? "0" : String.valueOf(i / 1000);
    }

    private void a(BaseAdUnit baseAdUnit, String str, int i) {
        a(baseAdUnit, str, i, null);
    }

    private void a(final BaseAdUnit baseAdUnit, final String str, final int i, String str2) {
        z.a(str, str2, baseAdUnit, new z.a() { // from class: com.sigmob.sdk.base.common.aa.1
            @Override // com.sigmob.sdk.base.common.z.a
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                    aa aaVar = aa.this;
                    pointEntitySigmob.setVtime(aaVar.b(aaVar.f4795a));
                    aa aaVar2 = aa.this;
                    pointEntitySigmob.setSkip_show_time(aaVar2.b(aaVar2.c));
                    pointEntitySigmob.setCurrent_time(aa.this.b(i));
                    pointEntitySigmob.setPlay_process(String.valueOf((((double) i) * 1.0d) / ((double) aa.this.b())));
                    if (str.equals("start")) {
                        pointEntitySigmob.setScene_id(baseAdUnit.getAd_scene_id());
                        pointEntitySigmob.setScene_desc(baseAdUnit.getAd_scene_desc());
                        pointEntitySigmob.setBid_token(baseAdUnit.getBid_token());
                    }
                    pointEntitySigmob.setPlay_time(aa.this.a(i));
                    pointEntitySigmob.setSet_close_time(String.format("%d", Integer.valueOf(aa.this.d)));
                    pointEntitySigmob.setIs_truncation(aa.this.a() ? "1" : "0");
                    pointEntitySigmob.setIs_force(aa.this.b ? "1" : "0");
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean a() {
        int i = this.d;
        return i > 0 && i * 1000 < this.f4795a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int b() {
        int i = this.d;
        return (i <= 0 || i * 1000 >= this.f4795a) ? this.f4795a : i * 1000;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String b(int i) {
        return i == 0 ? "0" : String.format("%.2f", Float.valueOf(i / 1000.0f));
    }

    @Override // com.sigmob.sdk.base.common.q
    public boolean a(BaseAdUnit baseAdUnit) {
        return true;
    }

    @Override // com.sigmob.sdk.base.common.q
    public boolean a(BaseAdUnit baseAdUnit, int i, int i2) {
        this.f4795a = i;
        this.d = baseAdUnit.getEndTime();
        SigMacroCommon macroCommon = baseAdUnit.getMacroCommon();
        if (!(macroCommon instanceof SigMacroCommon)) {
            return true;
        }
        macroCommon.addMarcoKey(SigMacroCommon._VIDEOTIME_, a(this.f4795a));
        return true;
    }

    @Override // com.sigmob.sdk.base.common.q
    public boolean a(BaseAdUnit baseAdUnit, a aVar, int i) {
        a aVar2;
        String str;
        String rotation;
        int iB = i;
        try {
            String str2 = "1";
            switch (AnonymousClass2.f4797a[aVar.ordinal()]) {
                case 1:
                    a(baseAdUnit, "start", iB, null);
                    SigMacroCommon macroCommon = baseAdUnit.getMacroCommon();
                    if (macroCommon instanceof SigMacroCommon) {
                        macroCommon.addMarcoKey(SigMacroCommon._SETCLOSETIME_, String.valueOf(this.d));
                        macroCommon.addMarcoKey(SigMacroCommon._ENDTIME_, "0");
                        macroCommon.addMarcoKey(SigMacroCommon._VIDEOTIME_, a(this.f4795a));
                        macroCommon.addMarcoKey(SigMacroCommon._COMPLETED_, "0");
                        macroCommon.addMarcoKey(SigMacroCommon._PLAYFIRSTFRAME_, "0");
                        SigMacroCommon sigMacroCommon = macroCommon;
                        if (!a()) {
                            str2 = "0";
                        }
                        sigMacroCommon.addMarcoKey(SigMacroCommon._IS_TRUNCATION_, str2);
                    }
                    aVar2 = a.AD_START;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 2:
                    a(baseAdUnit, PointCategory.SKIP, iB);
                    SigMacroCommon macroCommon2 = baseAdUnit.getMacroCommon();
                    if (macroCommon2 instanceof SigMacroCommon) {
                        macroCommon2.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        if (this.f4795a <= 0 || iB <= 0) {
                            macroCommon2.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon2.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                    }
                    aVar2 = a.AD_SKIP;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 3:
                    if (iB == 0) {
                        iB = b();
                    }
                    a(baseAdUnit, PointCategory.CLOSECARD, iB, PointCategory.SHOW);
                    break;
                case 4:
                    if (iB == 0) {
                        iB = b();
                    }
                    a(baseAdUnit, PointCategory.CLOSECARD, iB, "close");
                    break;
                case 5:
                    if (iB == 0) {
                        iB = b();
                    }
                    a(baseAdUnit, PointCategory.FOURELEMENTS, iB, PointCategory.SHOW);
                    break;
                case 6:
                    if (iB == 0) {
                        iB = b();
                    }
                    a(baseAdUnit, PointCategory.FOURELEMENTS, iB, "close");
                    break;
                case 7:
                    if (iB == 0) {
                        iB = b();
                    }
                    a(baseAdUnit, "endcard", iB, a.AD_SHOW.a());
                    SigMacroCommon macroCommon3 = baseAdUnit.getMacroCommon();
                    if (macroCommon3 instanceof SigMacroCommon) {
                        macroCommon3.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        if (this.f4795a <= 0 || iB <= 0) {
                            macroCommon3.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon3.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                    }
                    aVar2 = a.AD_SHOW;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 8:
                    if (iB == 0) {
                        iB = b();
                    }
                    SigMacroCommon macroCommon4 = baseAdUnit.getMacroCommon();
                    if (macroCommon4 instanceof SigMacroCommon) {
                        macroCommon4.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        if (this.f4795a <= 0 || iB <= 0) {
                            macroCommon4.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon4.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                    }
                    aVar2 = a.AD_CLICK;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 9:
                    if (iB == 0) {
                        iB = b();
                    }
                    SigMacroCommon macroCommon5 = baseAdUnit.getMacroCommon();
                    if (macroCommon5 instanceof SigMacroCommon) {
                        macroCommon5.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        if (this.f4795a <= 0 || iB <= 0) {
                            macroCommon5.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon5.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                    }
                    aVar2 = a.AD_COMPANION_CLICK;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 10:
                    if (iB == 0) {
                        iB = b();
                    }
                    SigMacroCommon macroCommon6 = baseAdUnit.getMacroCommon();
                    if (macroCommon6 instanceof SigMacroCommon) {
                        macroCommon6.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        if (this.f4795a <= 0 || iB <= 0) {
                            macroCommon6.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon6.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                    }
                    aVar2 = a.AD_VIDEO_CLICK;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 11:
                    SigMacroCommon macroCommon7 = baseAdUnit.getMacroCommon();
                    if (macroCommon7 instanceof SigMacroCommon) {
                        macroCommon7.addMarcoKey(SigMacroCommon._SHOWSKIPTIME_, a(iB));
                        if (this.f4795a <= 0 || iB <= 0) {
                            macroCommon7.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon7.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                        macroCommon7.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        macroCommon7.addMarcoKey(SigMacroCommon._VIDEOTIME_, a(this.f4795a));
                    }
                    aVar2 = a.AD_SHOW_SKIP;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 12:
                    if (iB == 0) {
                        iB = b();
                    }
                    a(baseAdUnit, "complete", iB);
                    SigMacroCommon macroCommon8 = baseAdUnit.getMacroCommon();
                    if (macroCommon8 instanceof SigMacroCommon) {
                        macroCommon8.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        macroCommon8.addMarcoKey(SigMacroCommon._PROGRESS_, "100");
                    }
                    aVar2 = a.AD_COMPLETE;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 13:
                case 14:
                    if (iB == 0) {
                        iB = b();
                    }
                    a(baseAdUnit, PointCategory.FINISH, iB);
                    SigMacroCommon macroCommon9 = baseAdUnit.getMacroCommon();
                    if (macroCommon9 instanceof SigMacroCommon) {
                        if (this.f4795a <= 0 || iB <= 0) {
                            macroCommon9.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon9.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                        macroCommon9.addMarcoKey(SigMacroCommon._COMPLETED_, "1");
                        macroCommon9.addMarcoKey(SigMacroCommon._PLAYLASTFRAME_, "1");
                        macroCommon9.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                    }
                    aVar2 = a.AD_FINISH;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 15:
                    str = PointCategory.VCLOSE;
                    rotation = null;
                    a(baseAdUnit, str, iB, rotation);
                    break;
                case 16:
                    a(baseAdUnit, PointCategory.SILENT, iB, "1");
                    break;
                case 17:
                    a(baseAdUnit, PointCategory.SILENT, iB, "0");
                    break;
                case 18:
                    if (ClientMetadata.getInstance() != null) {
                        str = PointCategory.SCREENSWITCH;
                        rotation = ClientMetadata.getInstance().getRotation();
                        a(baseAdUnit, str, iB, rotation);
                    }
                    break;
                case 19:
                    a(baseAdUnit, PointCategory.PLAY, iB, "0");
                    break;
                case 20:
                    a(baseAdUnit, PointCategory.PLAY, iB, "0.25");
                    SigMacroCommon macroCommon10 = baseAdUnit.getMacroCommon();
                    if (macroCommon10 instanceof SigMacroCommon) {
                        macroCommon10.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        macroCommon10.addMarcoKey(SigMacroCommon._PROGRESS_, Constants.VIA_REPORT_TYPE_CHAT_AUDIO);
                    }
                    aVar2 = a.AD_PLAY_QUARTER;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 21:
                    a(baseAdUnit, PointCategory.PLAY, iB, "0.50");
                    SigMacroCommon macroCommon11 = baseAdUnit.getMacroCommon();
                    if (macroCommon11 instanceof SigMacroCommon) {
                        macroCommon11.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        macroCommon11.addMarcoKey(SigMacroCommon._PROGRESS_, "50");
                    }
                    aVar2 = a.AD_PLAY_TWO_QUARTERS;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 22:
                    a(baseAdUnit, PointCategory.PLAY, iB, "0.75");
                    SigMacroCommon macroCommon12 = baseAdUnit.getMacroCommon();
                    if (macroCommon12 instanceof SigMacroCommon) {
                        macroCommon12.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        macroCommon12.addMarcoKey(SigMacroCommon._PROGRESS_, "75");
                    }
                    aVar2 = a.AD_PLAY_THREE_QUARTERS;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 23:
                    a(baseAdUnit, PointCategory.PLAY, iB, "0.85");
                    SigMacroCommon macroCommon13 = baseAdUnit.getMacroCommon();
                    if (macroCommon13 instanceof SigMacroCommon) {
                        macroCommon13.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        macroCommon13.addMarcoKey(SigMacroCommon._PROGRESS_, "85");
                    }
                    aVar2 = a.AD_PLAY_COMPLETE;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 24:
                    a(baseAdUnit, aVar.a(), iB);
                    break;
                default:
                    a(baseAdUnit, aVar.a(), iB);
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar);
                    break;
            }
        } catch (Throwable th) {
            SigmobLog.e("recordDisplayEvent ", th);
            return true;
        }
        return true;
    }

    @Override // com.sigmob.sdk.base.common.q
    public boolean a(BaseAdUnit baseAdUnit, boolean z, int i) {
        this.b = z;
        this.c = i;
        return true;
    }

    @Override // com.sigmob.sdk.base.common.q
    public boolean b(BaseAdUnit baseAdUnit) {
        com.sigmob.sdk.base.network.f.a(baseAdUnit, a.AD_CLOSE);
        a(baseAdUnit, "endcard", b(), "close");
        return true;
    }
}
