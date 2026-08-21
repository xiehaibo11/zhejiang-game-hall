package com.sigmob.sdk.base.common;

import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.tencent.connect.common.Constants;

class aa implements q {
    private boolean b;
    private int c;
    private int a = 0;
    private int d = 0;

    static class 2 {
        static final int[] a;

        static {
            int[] iArr = new int[a.values().length];
            a = iArr;
            try {
                iArr[a.a.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[a.s.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[a.d.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                a[a.e.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                a[a.f.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                a[a.g.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                a[a.h.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                a[a.c.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                a[a.u.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                a[a.v.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                a[a.L.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                a[a.r.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                a[a.M.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                a[a.b.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
            try {
                a[a.x.ordinal()] = 15;
            } catch (NoSuchFieldError unused15) {
            }
            try {
                a[a.B.ordinal()] = 16;
            } catch (NoSuchFieldError unused16) {
            }
            try {
                a[a.C.ordinal()] = 17;
            } catch (NoSuchFieldError unused17) {
            }
            try {
                a[a.D.ordinal()] = 18;
            } catch (NoSuchFieldError unused18) {
            }
            try {
                a[a.N.ordinal()] = 19;
            } catch (NoSuchFieldError unused19) {
            }
            try {
                a[a.n.ordinal()] = 20;
            } catch (NoSuchFieldError unused20) {
            }
            try {
                a[a.o.ordinal()] = 21;
            } catch (NoSuchFieldError unused21) {
            }
            try {
                a[a.p.ordinal()] = 22;
            } catch (NoSuchFieldError unused22) {
            }
            try {
                a[a.q.ordinal()] = 23;
            } catch (NoSuchFieldError unused23) {
            }
            try {
                a[a.t.ordinal()] = 24;
            } catch (NoSuchFieldError unused24) {
            }
        }
    }

    aa() {
    }

    private String a(int i) {
        return i == 0 ? "0" : String.valueOf(i / 1000);
    }

    private void a(BaseAdUnit baseAdUnit, String str, int i) {
        a(baseAdUnit, str, i, null);
    }

    private void a(final BaseAdUnit baseAdUnit, final String str, final int i, String str2) {
        z.a(str, str2, baseAdUnit, new z.a() {
            @Override
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                    aa aaVar = aa.this;
                    pointEntitySigmob.setVtime(aaVar.b(aaVar.a));
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

    private boolean a() {
        int i = this.d;
        return i > 0 && i * 1000 < this.a;
    }

    private int b() {
        int i = this.d;
        return (i <= 0 || i * 1000 >= this.a) ? this.a : i * 1000;
    }

    private String b(int i) {
        return i == 0 ? "0" : String.format("%.2f", Float.valueOf(i / 1000.0f));
    }

    @Override
    public boolean a(BaseAdUnit baseAdUnit) {
        return true;
    }

    @Override
    public boolean a(BaseAdUnit baseAdUnit, int i, int i2) {
        this.a = i;
        this.d = baseAdUnit.getEndTime();
        SigMacroCommon macroCommon = baseAdUnit.getMacroCommon();
        if (!(macroCommon instanceof SigMacroCommon)) {
            return true;
        }
        macroCommon.addMarcoKey(SigMacroCommon._VIDEOTIME_, a(this.a));
        return true;
    }

    @Override
    public boolean a(BaseAdUnit baseAdUnit, a aVar, int i) {
        a aVar2;
        String str;
        String rotation;
        int iB = i;
        try {
            String str2 = "1";
            switch (2.a[aVar.ordinal()]) {
                case 1:
                    a(baseAdUnit, "start", iB, null);
                    SigMacroCommon macroCommon = baseAdUnit.getMacroCommon();
                    if (macroCommon instanceof SigMacroCommon) {
                        macroCommon.addMarcoKey(SigMacroCommon._SETCLOSETIME_, String.valueOf(this.d));
                        macroCommon.addMarcoKey(SigMacroCommon._ENDTIME_, "0");
                        macroCommon.addMarcoKey(SigMacroCommon._VIDEOTIME_, a(this.a));
                        macroCommon.addMarcoKey(SigMacroCommon._COMPLETED_, "0");
                        macroCommon.addMarcoKey(SigMacroCommon._PLAYFIRSTFRAME_, "0");
                        SigMacroCommon sigMacroCommon = macroCommon;
                        if (!a()) {
                            str2 = "0";
                        }
                        sigMacroCommon.addMarcoKey(SigMacroCommon._IS_TRUNCATION_, str2);
                    }
                    aVar2 = a.a;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 2:
                    a(baseAdUnit, PointCategory.SKIP, iB);
                    SigMacroCommon macroCommon2 = baseAdUnit.getMacroCommon();
                    if (macroCommon2 instanceof SigMacroCommon) {
                        macroCommon2.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        if (this.a <= 0 || iB <= 0) {
                            macroCommon2.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon2.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                    }
                    aVar2 = a.s;
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
                    a(baseAdUnit, "endcard", iB, a.h.a());
                    SigMacroCommon macroCommon3 = baseAdUnit.getMacroCommon();
                    if (macroCommon3 instanceof SigMacroCommon) {
                        macroCommon3.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        if (this.a <= 0 || iB <= 0) {
                            macroCommon3.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon3.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                    }
                    aVar2 = a.h;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 8:
                    if (iB == 0) {
                        iB = b();
                    }
                    SigMacroCommon macroCommon4 = baseAdUnit.getMacroCommon();
                    if (macroCommon4 instanceof SigMacroCommon) {
                        macroCommon4.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        if (this.a <= 0 || iB <= 0) {
                            macroCommon4.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon4.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                    }
                    aVar2 = a.c;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 9:
                    if (iB == 0) {
                        iB = b();
                    }
                    SigMacroCommon macroCommon5 = baseAdUnit.getMacroCommon();
                    if (macroCommon5 instanceof SigMacroCommon) {
                        macroCommon5.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        if (this.a <= 0 || iB <= 0) {
                            macroCommon5.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon5.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                    }
                    aVar2 = a.u;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 10:
                    if (iB == 0) {
                        iB = b();
                    }
                    SigMacroCommon macroCommon6 = baseAdUnit.getMacroCommon();
                    if (macroCommon6 instanceof SigMacroCommon) {
                        macroCommon6.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        if (this.a <= 0 || iB <= 0) {
                            macroCommon6.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon6.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                    }
                    aVar2 = a.v;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 11:
                    SigMacroCommon macroCommon7 = baseAdUnit.getMacroCommon();
                    if (macroCommon7 instanceof SigMacroCommon) {
                        macroCommon7.addMarcoKey(SigMacroCommon._SHOWSKIPTIME_, a(iB));
                        if (this.a <= 0 || iB <= 0) {
                            macroCommon7.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon7.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                        macroCommon7.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        macroCommon7.addMarcoKey(SigMacroCommon._VIDEOTIME_, a(this.a));
                    }
                    aVar2 = a.L;
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
                    aVar2 = a.r;
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
                        if (this.a <= 0 || iB <= 0) {
                            macroCommon9.addMarcoKey(SigMacroCommon._PROGRESS_, "0");
                        } else {
                            macroCommon9.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((iB * 100) / b()));
                        }
                        macroCommon9.addMarcoKey(SigMacroCommon._COMPLETED_, "1");
                        macroCommon9.addMarcoKey(SigMacroCommon._PLAYLASTFRAME_, "1");
                        macroCommon9.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                    }
                    aVar2 = a.b;
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
                    aVar2 = a.n;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 21:
                    a(baseAdUnit, PointCategory.PLAY, iB, "0.50");
                    SigMacroCommon macroCommon11 = baseAdUnit.getMacroCommon();
                    if (macroCommon11 instanceof SigMacroCommon) {
                        macroCommon11.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        macroCommon11.addMarcoKey(SigMacroCommon._PROGRESS_, "50");
                    }
                    aVar2 = a.o;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 22:
                    a(baseAdUnit, PointCategory.PLAY, iB, "0.75");
                    SigMacroCommon macroCommon12 = baseAdUnit.getMacroCommon();
                    if (macroCommon12 instanceof SigMacroCommon) {
                        macroCommon12.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        macroCommon12.addMarcoKey(SigMacroCommon._PROGRESS_, "75");
                    }
                    aVar2 = a.p;
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, aVar2);
                    break;
                case 23:
                    a(baseAdUnit, PointCategory.PLAY, iB, "0.85");
                    SigMacroCommon macroCommon13 = baseAdUnit.getMacroCommon();
                    if (macroCommon13 instanceof SigMacroCommon) {
                        macroCommon13.addMarcoKey(SigMacroCommon._ENDTIME_, a(iB));
                        macroCommon13.addMarcoKey(SigMacroCommon._PROGRESS_, "85");
                    }
                    aVar2 = a.q;
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

    @Override
    public boolean a(BaseAdUnit baseAdUnit, boolean z, int i) {
        this.b = z;
        this.c = i;
        return true;
    }

    @Override
    public boolean b(BaseAdUnit baseAdUnit) {
        com.sigmob.sdk.base.network.f.a(baseAdUnit, a.w);
        a(baseAdUnit, "endcard", b(), "close");
        return true;
    }
}
