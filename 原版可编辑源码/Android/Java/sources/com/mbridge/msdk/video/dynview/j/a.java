package com.mbridge.msdk.video.dynview.j;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.text.TextUtils;
import android.view.View;
import android.widget.AdapterView;
import android.widget.FrameLayout;
import android.widget.GridView;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView;
import com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView;
import com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView;
import com.mbridge.msdk.dycreator.baseview.cusview.MBRotationView;
import com.mbridge.msdk.dycreator.baseview.cusview.MBridgeImageView;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.dynview.e.d;
import com.mbridge.msdk.video.dynview.e.e;
import com.mbridge.msdk.video.dynview.g.a;
import com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView;
import com.mbridge.msdk.videocommon.view.RoundImageView;
import com.tkay.expressad.foundation.h.i;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public final class a {
    private static boolean j;
    private com.mbridge.msdk.video.dynview.i.c.b b;
    private Map<String, Bitmap> c;
    private volatile boolean d;
    private String e = "#FFFFFFFF";
    private String f = "#60000000";
    private String g = "#FF5F5F5F";
    private String h = "#90ECECEC";
    private volatile long i = 0;
    private com.mbridge.msdk.video.dynview.i.c.a k = null;
    private boolean l = false;
    private int m = 0;
    public com.mbridge.msdk.video.dynview.d.a a = new com.mbridge.msdk.video.dynview.d.a() {
        @Override
        public final void b() {
        }

        @Override
        public final void a() {
            if (!a.this.l || a.this.b == null) {
                return;
            }
            a.this.b.a(a.this.m * 1000, a.this.k);
            a.this.l = false;
        }

        @Override
        public final void c() {
            if (a.this.b != null) {
                a.this.b.b();
                a.this.l = true;
            }
        }
    };

    /* JADX WARN: Removed duplicated region for block: B:100:0x03c8  */
    /* JADX WARN: Removed duplicated region for block: B:104:0x03d3  */
    /* JADX WARN: Removed duplicated region for block: B:105:0x03e7  */
    /* JADX WARN: Removed duplicated region for block: B:108:0x03ff  */
    /* JADX WARN: Removed duplicated region for block: B:110:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:53:0x0228  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0234  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x023d  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0256  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x0260  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x02e0  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x02e3  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x02f1  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x02fc  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x031a  */
    /* JADX WARN: Removed duplicated region for block: B:83:0x031f  */
    /* JADX WARN: Removed duplicated region for block: B:86:0x0324  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(com.mbridge.msdk.video.dynview.c cVar, View view, final Map map, e eVar) {
        CampaignEx campaignEx;
        CampaignEx campaignEx2;
        MBridgeImageView mBridgeImageView;
        TextView textView;
        RelativeLayout relativeLayout;
        MBRotationView mBRotationView;
        RoundImageView roundImageView;
        TextView textView2;
        ImageView imageView;
        ImageView imageView2;
        RoundImageView roundImageView2;
        MBRotationView mBRotationView2;
        RelativeLayout relativeLayout2;
        MBridgeImageView mBridgeImageView2;
        ImageView imageView3;
        com.mbridge.msdk.video.dynview.c cVar2;
        RoundImageView roundImageView3;
        ImageView imageView4;
        int i;
        int i2;
        long j2;
        ImageView imageView5;
        final TextView textView3;
        if (this.c == null) {
            this.c = new HashMap();
        }
        final List<CampaignEx> listG = cVar.g();
        if (view == null) {
            eVar.a(com.mbridge.msdk.video.dynview.c.a.f);
            return;
        }
        Context context = view.getContext();
        if (context == null) {
            eVar.a(com.mbridge.msdk.video.dynview.c.a.b);
            return;
        }
        if (listG == null || listG.size() <= 1) {
            campaignEx = null;
            campaignEx2 = null;
        } else {
            campaignEx = listG.get(0);
            campaignEx2 = listG.get(1);
        }
        if (campaignEx == null && eVar != null) {
            eVar.a(com.mbridge.msdk.video.dynview.c.a.d);
            return;
        }
        if (campaignEx2 == null && eVar != null) {
            eVar.a(com.mbridge.msdk.video.dynview.c.a.d);
            return;
        }
        if (map != null && map.containsKey("is_dy_success")) {
            j = ((Boolean) map.get("is_dy_success")).booleanValue();
        }
        CampaignEx campaignEx3 = campaignEx2;
        CampaignEx campaignEx4 = campaignEx;
        if (j) {
            RelativeLayout relativeLayout3 = (RelativeLayout) view.findViewById(b("mbridge_top_item_rl"));
            mBridgeImageView = (MBridgeImageView) view.findViewById(b("mbridge_top_iv"));
            MBRotationView mBRotationView3 = (MBRotationView) view.findViewById(b("mbridge_top_ration"));
            ImageView imageView6 = (MBCusRoundImageView) view.findViewById(b("mbridge_top_icon_iv"));
            textView = (TextView) view.findViewById(b("mbridge_top_title_tv"));
            relativeLayout = (RelativeLayout) view.findViewById(b("mbridge_bottom_item_rl"));
            mBRotationView = (MBRotationView) view.findViewById(b("mbridge_bottom_ration"));
            MBridgeImageView mBridgeImageView3 = (MBridgeImageView) view.findViewById(b("mbridge_bottom_iv"));
            ImageView imageView7 = (MBCusRoundImageView) view.findViewById(b("mbridge_bottom_icon_iv"));
            textView2 = (TextView) view.findViewById(b("mbridge_bottom_title_tv"));
            imageView = (ImageView) view.findViewById(b("mbridge_reward_choice_one_like_iv"));
            roundImageView2 = null;
            imageView2 = imageView6;
            mBRotationView2 = mBRotationView3;
            relativeLayout2 = relativeLayout3;
            mBridgeImageView2 = mBridgeImageView3;
            imageView3 = imageView7;
            roundImageView = null;
        } else {
            RelativeLayout relativeLayout4 = (RelativeLayout) view.findViewById(a("mbridge_top_item_rl"));
            mBridgeImageView = (MBridgeImageView) view.findViewById(a("mbridge_top_iv"));
            MBRotationView mBRotationView4 = (MBRotationView) view.findViewById(a("mbridge_top_ration"));
            RoundImageView roundImageView4 = (RoundImageView) view.findViewById(a("mbridge_top_icon_iv"));
            textView = (TextView) view.findViewById(a("mbridge_top_title_tv"));
            relativeLayout = (RelativeLayout) view.findViewById(a("mbridge_bottom_item_rl"));
            mBRotationView = (MBRotationView) view.findViewById(a("mbridge_bottom_ration"));
            MBridgeImageView mBridgeImageView4 = (MBridgeImageView) view.findViewById(a("mbridge_bottom_iv"));
            roundImageView = (RoundImageView) view.findViewById(a("mbridge_bottom_icon_iv"));
            textView2 = (TextView) view.findViewById(a("mbridge_bottom_title_tv"));
            imageView = (ImageView) view.findViewById(a("mbridge_reward_choice_one_like_iv"));
            imageView2 = null;
            roundImageView2 = roundImageView4;
            mBRotationView2 = mBRotationView4;
            relativeLayout2 = relativeLayout4;
            mBridgeImageView2 = mBridgeImageView4;
            imageView3 = null;
        }
        TextView textView4 = textView2;
        if (relativeLayout2 != null) {
            relativeLayout2.setOnClickListener(new com.mbridge.msdk.widget.a() {
                @Override
                protected final void a(View view2) {
                    if (a.this.d) {
                        return;
                    }
                    a.this.d = true;
                    a.a(a.this, map, listG, 0);
                }
            });
        }
        if (mBridgeImageView != null) {
            mBridgeImageView.setCustomBorder(20, 20, 0, 0, 10, -16777216);
            cVar2 = cVar;
            a(campaignEx4.getImageUrl(), mBridgeImageView, cVar2, view);
            if (mBRotationView2 != null) {
                if (campaignEx4.getCanStart2C1Anim()) {
                    if (!TextUtils.isEmpty(campaignEx4.getIconUrl())) {
                        ImageView imageView8 = new ImageView(cVar.a());
                        imageView4 = imageView3;
                        roundImageView3 = roundImageView;
                        imageView8.setLayoutParams(new FrameLayout.LayoutParams(-1, ae.b(cVar.a(), 200.0f)));
                        imageView8.setScaleType(ImageView.ScaleType.CENTER_CROP);
                        mBRotationView2.addView(imageView8);
                        a(campaignEx4.getIconUrl(), imageView8);
                        mBRotationView2.setWidthRatio(0.45f);
                        mBRotationView2.setHeightRatio(0.9f);
                        mBRotationView2.setAutoscroll(true);
                    } else {
                        roundImageView3 = roundImageView;
                        imageView4 = imageView3;
                        mBRotationView2.setWidthRatio(1.0f);
                        mBRotationView2.setHeightRatio(1.0f);
                        i = 0;
                        mBRotationView2.setAutoscroll(false);
                    }
                } else {
                    roundImageView3 = roundImageView;
                    imageView4 = imageView3;
                    i = 0;
                    mBRotationView2.setWidthRatio(1.0f);
                    mBRotationView2.setHeightRatio(1.0f);
                    mBRotationView2.setAutoscroll(false);
                }
                if (roundImageView2 != null) {
                    roundImageView2.setType(i);
                    a(campaignEx4.getIconUrl(), roundImageView2);
                }
                if (imageView2 != null) {
                    a(campaignEx4.getIconUrl(), imageView2);
                }
                if (textView != null) {
                    if (!TextUtils.isEmpty(campaignEx4.getAppName())) {
                        textView.setText(campaignEx4.getAppName());
                    } else {
                        textView.setVisibility(8);
                    }
                }
                if (relativeLayout != null) {
                    relativeLayout.setOnClickListener(new com.mbridge.msdk.widget.a() {
                        @Override
                        protected final void a(View view2) {
                            if (a.this.d) {
                                return;
                            }
                            a.this.d = true;
                            a.a(a.this, map, listG, 1);
                        }
                    });
                }
                if (mBridgeImageView2 != null) {
                    mBridgeImageView2.setCustomBorder(20, 20, 0, 0, 10, -16777216);
                    a(campaignEx3.getImageUrl(), mBridgeImageView2, cVar2, view);
                    if (mBRotationView == null) {
                        i2 = 0;
                    } else if (campaignEx3.getCanStart2C1Anim()) {
                        if (!TextUtils.isEmpty(campaignEx3.getIconUrl())) {
                            ImageView imageView9 = new ImageView(cVar.a());
                            imageView9.setLayoutParams(new FrameLayout.LayoutParams(-1, ae.b(cVar.a(), 200.0f)));
                            imageView9.setScaleType(ImageView.ScaleType.CENTER_CROP);
                            mBRotationView.addView(imageView9);
                            a(campaignEx3.getIconUrl(), imageView9);
                            mBRotationView.setWidthRatio(0.45f);
                            mBRotationView.setHeightRatio(0.9f);
                            mBRotationView.setAutoscroll(true);
                            i2 = 0;
                        } else {
                            mBRotationView.setWidthRatio(1.0f);
                            mBRotationView.setHeightRatio(1.0f);
                            i2 = 0;
                            mBRotationView.setAutoscroll(false);
                        }
                    } else {
                        i2 = 0;
                        mBRotationView.setWidthRatio(1.0f);
                        mBRotationView.setHeightRatio(1.0f);
                        mBRotationView.setAutoscroll(false);
                    }
                }
                if (roundImageView3 != null) {
                    RoundImageView roundImageView5 = roundImageView3;
                    roundImageView5.setType(i2);
                    a(campaignEx3.getIconUrl(), roundImageView5);
                }
                if (imageView4 != null) {
                    a(campaignEx3.getIconUrl(), imageView4);
                }
                if (textView4 != null) {
                    textView4.setText(campaignEx3.getAppName());
                }
                String cMPTEntryUrl = campaignEx4.getCMPTEntryUrl();
                cVar.e();
                String strA = ak.a(cMPTEntryUrl, "cltp");
                j2 = !TextUtils.isEmpty(strA) ? Long.parseLong(strA) : 0L;
                if (j2 != 0) {
                    if (map != null && map.containsKey("is_dy_success")) {
                        j = ((Boolean) map.get("is_dy_success")).booleanValue();
                    }
                    if (j) {
                        textView3 = (TextView) view.findViewById(b("mbridge_choice_one_countdown_tv"));
                    } else {
                        textView3 = (TextView) view.findViewById(a("mbridge_choice_one_countdown_tv"));
                    }
                    textView3.setTextSize(11.0f);
                    textView3.setTextColor(Color.parseColor(this.e));
                    String str = this.f;
                    if (textView3 != null) {
                        GradientDrawable gradientDrawable = new GradientDrawable();
                        gradientDrawable.setColor(Color.parseColor(str));
                        gradientDrawable.setCornerRadius(ae.b(textView3.getContext(), 12));
                        gradientDrawable.setStroke(ae.b(textView3.getContext(), 1), Color.parseColor(str));
                        textView3.setBackground(gradientDrawable);
                    }
                    if (textView3 != null) {
                        textView3.setVisibility(0);
                        textView3.setOnClickListener(new com.mbridge.msdk.widget.a() {
                            @Override
                            protected final void a(View view2) {
                                if (a.this.d) {
                                    return;
                                }
                                a.this.d = true;
                                a.a(a.this, map);
                            }
                        });
                        this.k = new com.mbridge.msdk.video.dynview.i.c.a() {
                            @Override
                            public final void a(long j3) {
                                String str2;
                                a.this.m = (int) (j3 / 1000);
                                long j4 = a.this.m;
                                String strS = v.s(textView3.getContext());
                                if (strS.startsWith(com.tkay.expressad.video.dynview.a.a.Q)) {
                                    if (strS.contains(com.tkay.expressad.video.dynview.a.a.Y) || strS.contains(com.tkay.expressad.video.dynview.a.a.Z)) {
                                        str2 = j4 + " 秒後自動播放";
                                    } else {
                                        str2 = j4 + " 秒后自动播放";
                                    }
                                } else if (strS.startsWith(com.tkay.expressad.video.dynview.a.a.R)) {
                                    str2 = j4 + " 秒後自動的に再生 ";
                                } else if (strS.startsWith("de")) {
                                    str2 = com.tkay.expressad.video.dynview.a.a.G + j4 + " Sekunden";
                                } else if (strS.startsWith(com.tkay.expressad.video.dynview.a.a.T)) {
                                    str2 = j4 + com.tkay.expressad.video.dynview.a.a.H;
                                } else if (strS.startsWith(com.tkay.expressad.video.dynview.a.a.U)) {
                                    str2 = com.tkay.expressad.video.dynview.a.a.I + j4 + " secondes";
                                } else if (strS.startsWith("ar")) {
                                    str2 = " ثوان" + j4 + com.tkay.expressad.video.dynview.a.a.J;
                                } else if (strS.startsWith(com.tkay.expressad.video.dynview.a.a.W)) {
                                    str2 = com.tkay.expressad.video.dynview.a.a.K + j4 + " секунд";
                                } else {
                                    str2 = com.tkay.expressad.video.dynview.a.a.F + j4 + " s";
                                }
                                textView3.setText(str2);
                                a.this.i++;
                            }

                            @Override
                            public final void a() {
                                a.a(a.this, map);
                            }
                        };
                        com.mbridge.msdk.video.dynview.i.c.b bVarA = new com.mbridge.msdk.video.dynview.i.c.b().b(j2 * 1000).a(1000L).a(this.k);
                        this.b = bVarA;
                        bVarA.a();
                    }
                }
                if (cVar2 != null && (imageView5 = imageView) != null) {
                    if (cVar.e() != 1) {
                        imageView5.setImageResource(s.a(context.getApplicationContext(), com.mbridge.msdk.video.dynview.i.b.a(context, 1), i.c));
                    } else {
                        imageView5.setImageResource(s.a(context.getApplicationContext(), com.mbridge.msdk.video.dynview.i.b.a(context, 2), i.c));
                    }
                }
                if (eVar != null) {
                    eVar.a(view, null);
                    return;
                }
                return;
            }
            i = 0;
            if (roundImageView2 != null) {
            }
            if (imageView2 != null) {
            }
            if (textView != null) {
            }
            if (relativeLayout != null) {
            }
            if (mBridgeImageView2 != null) {
            }
            if (roundImageView3 != null) {
            }
            if (imageView4 != null) {
            }
            if (textView4 != null) {
            }
            String cMPTEntryUrl2 = campaignEx4.getCMPTEntryUrl();
            cVar.e();
            String strA2 = ak.a(cMPTEntryUrl2, "cltp");
            if (!TextUtils.isEmpty(strA2)) {
            }
            if (j2 != 0) {
            }
            if (cVar2 != null) {
                if (cVar.e() != 1) {
                }
            }
            if (eVar != null) {
            }
        } else {
            cVar2 = cVar;
        }
        roundImageView3 = roundImageView;
        imageView4 = imageView3;
        i = 0;
        if (roundImageView2 != null) {
        }
        if (imageView2 != null) {
        }
        if (textView != null) {
        }
        if (relativeLayout != null) {
        }
        if (mBridgeImageView2 != null) {
        }
        if (roundImageView3 != null) {
        }
        if (imageView4 != null) {
        }
        if (textView4 != null) {
        }
        String cMPTEntryUrl22 = campaignEx4.getCMPTEntryUrl();
        cVar.e();
        String strA22 = ak.a(cMPTEntryUrl22, "cltp");
        if (!TextUtils.isEmpty(strA22)) {
        }
        if (j2 != 0) {
        }
        if (cVar2 != null) {
        }
        if (eVar != null) {
        }
    }

    public final void b(com.mbridge.msdk.video.dynview.c cVar, View view, Map map, e eVar) {
        LinearLayout linearLayout;
        TextView textView;
        ImageView imageView;
        TextView textView2;
        LinearLayout linearLayout2;
        ImageView imageView2;
        TextView textView3;
        if (eVar == null) {
            return;
        }
        if (cVar == null) {
            eVar.a(com.mbridge.msdk.video.dynview.c.a.a);
            return;
        }
        if (map != null && map.containsKey("is_dy_success")) {
            j = ((Boolean) map.get("is_dy_success")).booleanValue();
        }
        if (j) {
            imageView2 = (ImageView) view.findViewById(b("mbridge_reward_icon_riv"));
            textView3 = (TextView) view.findViewById(b("mbridge_reward_title_tv"));
            linearLayout = (LinearLayout) view.findViewById(b("mbridge_reward_stars_mllv"));
            linearLayout2 = (LinearLayout) view.findViewById(b("mbridge_reward_heat_mllv"));
            textView = (TextView) view.findViewById(b("mbridge_reward_click_tv"));
            imageView = (ImageView) view.findViewById(b("mbridge_videoview_bg"));
            textView2 = (TextView) view.findViewById(b("mbridge_reward_desc_tv"));
        } else {
            ImageView imageView3 = (ImageView) view.findViewById(a("mbridge_reward_icon_riv"));
            TextView textView4 = (TextView) view.findViewById(a("mbridge_reward_title_tv"));
            linearLayout = (LinearLayout) view.findViewById(a("mbridge_reward_stars_mllv"));
            textView = (TextView) view.findViewById(a("mbridge_reward_click_tv"));
            imageView = (ImageView) view.findViewById(a("mbridge_videoview_bg"));
            textView2 = (TextView) view.findViewById(a("mbridge_reward_desc_tv"));
            linearLayout2 = null;
            imageView2 = imageView3;
            textView3 = textView4;
        }
        List<View> arrayList = new ArrayList<>();
        List<CampaignEx> listG = cVar.g();
        if (listG != null && listG.size() > 0) {
            CampaignEx campaignEx = listG.get(0);
            if (campaignEx != null) {
                if (imageView2 != null) {
                    if (j) {
                        if (imageView2 instanceof MBCusRoundImageView) {
                            ((MBCusRoundImageView) imageView2).setCustomBorder(30, 30, 30, 30, 10, -1);
                        }
                    } else {
                        ((RoundImageView) imageView2).setBorderRadius(10);
                    }
                    a(campaignEx.getIconUrl(), imageView2);
                }
                if (textView3 != null) {
                    textView3.setText(campaignEx.getAppName());
                }
                if (textView2 != null) {
                    textView2.setText(campaignEx.getAppDesc());
                }
                if (linearLayout != null) {
                    double rating = campaignEx.getRating();
                    if (rating <= 0.0d) {
                        rating = 5.0d;
                    }
                    if (j) {
                        if (linearLayout != null && (linearLayout instanceof MBStarLevelLayoutView)) {
                            MBStarLevelLayoutView mBStarLevelLayoutView = (MBStarLevelLayoutView) linearLayout;
                            mBStarLevelLayoutView.setRating((int) rating);
                            mBStarLevelLayoutView.setOrientation(0);
                        }
                        if (linearLayout2 != null && (linearLayout2 instanceof MBHeatLevelLayoutView)) {
                            ((MBHeatLevelLayoutView) linearLayout2).setHeatCount(campaignEx.getNumberRating());
                        }
                    } else {
                        ((MBridgeLevelLayoutView) linearLayout).setRatingAndUser(rating, campaignEx.getNumberRating());
                    }
                }
                if (textView != null) {
                    textView.setText(campaignEx.getAdCall());
                }
                int iH = cVar.h();
                if (iH == 102 || iH == 202 || iH == 302) {
                    if (textView != null) {
                        arrayList.add(textView);
                    }
                } else if (iH != 802) {
                    if (iH == 904 && cVar.k()) {
                        arrayList.add(view);
                    }
                } else {
                    if (imageView2 != null) {
                        arrayList.add(imageView2);
                    }
                    if (textView != null) {
                        arrayList.add(textView);
                    }
                    a(imageView, campaignEx.getImageUrl(), iH);
                }
                eVar.a(view, arrayList);
                return;
            }
            eVar.a(com.mbridge.msdk.video.dynview.c.a.d);
            return;
        }
        eVar.a(com.mbridge.msdk.video.dynview.c.a.d);
    }

    public final void a(com.mbridge.msdk.video.dynview.c cVar, View view, e eVar) {
        if (eVar == null) {
            return;
        }
        if (cVar == null) {
            eVar.a(com.mbridge.msdk.video.dynview.c.a.a);
            return;
        }
        try {
            ImageView imageView = (ImageView) view.findViewById(a("mbridge_iv_adbanner_bg"));
            if (imageView != null) {
                imageView.setBackgroundColor(Color.parseColor(this.h));
            }
            ImageView imageView2 = (ImageView) view.findViewById(a("mbridge_iv_adbanner"));
            if (imageView2 != null) {
                imageView2.setBackgroundColor(Color.parseColor(this.h));
            }
            eVar.a(view, new ArrayList());
        } catch (Exception e) {
            z.a(com.tkay.expressad.video.dynview.j.a.a, e.getMessage());
            eVar.a(com.mbridge.msdk.video.dynview.c.a.a);
        }
    }

    public final void c(com.mbridge.msdk.video.dynview.c cVar, View view, final Map map, e eVar) {
        ListView listView;
        GridView gridView;
        ImageView imageView;
        try {
            if (this.c == null) {
                this.c = new HashMap();
            }
            final List<CampaignEx> listG = cVar.g();
            if (view.getContext() == null) {
                eVar.a(com.mbridge.msdk.video.dynview.c.a.b);
                return;
            }
            if (map != null && map.containsKey("is_dy_success")) {
                j = ((Boolean) map.get("is_dy_success")).booleanValue();
            }
            if (j) {
                listView = (ListView) view.findViewById(b("mbridge_order_view_lv"));
                gridView = (GridView) view.findViewById(b("mbridge_order_view_h_lv"));
                imageView = (ImageView) view.findViewById(b("mbridge_order_view_iv_close"));
            } else {
                listView = (ListView) view.findViewById(a("mbridge_order_view_lv"));
                gridView = (GridView) view.findViewById(a("mbridge_order_view_h_lv"));
                imageView = (ImageView) view.findViewById(a("mbridge_order_view_iv_close"));
            }
            com.mbridge.msdk.video.dynview.ordercamp.a.a aVar = new com.mbridge.msdk.video.dynview.ordercamp.a.a(listG);
            if (cVar.e() == 1) {
                if (listView != null) {
                    listView.setAdapter((ListAdapter) aVar);
                    listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
                        @Override
                        public final void onItemClick(AdapterView<?> adapterView, View view2, int i, long j2) {
                            a.a(a.this, map, listG, i);
                        }
                    });
                }
            } else if (gridView != null) {
                int iD = (int) cVar.d();
                int size = iD / listG.size();
                int i = size / 9;
                int i2 = i / 2;
                LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) gridView.getLayoutParams();
                layoutParams.width = iD - (i * 2);
                gridView.setLayoutParams(layoutParams);
                gridView.setColumnWidth((size - i) - (i2 / 2));
                gridView.setHorizontalSpacing(i2);
                gridView.setStretchMode(0);
                gridView.setNumColumns(listG.size());
                gridView.setAdapter((ListAdapter) aVar);
                gridView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
                    @Override
                    public final void onItemClick(AdapterView<?> adapterView, View view2, int i3, long j2) {
                        a.a(a.this, map, listG, i3);
                    }
                });
            }
            if (imageView != null) {
                imageView.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view2) {
                        a.b(a.this, map);
                    }
                });
            }
            if (eVar != null) {
                eVar.a(view, null);
            }
        } catch (Exception unused) {
            if (eVar != null) {
                eVar.a(com.mbridge.msdk.video.dynview.c.a.a);
            }
        }
    }

    private void a(String str, ImageView imageView) {
        if (TextUtils.isEmpty(str) || imageView == null) {
            return;
        }
        a(imageView, str, -1);
    }

    private void a(final ImageView imageView, String str, final int i) {
        if (TextUtils.isEmpty(str) || imageView == null) {
            return;
        }
        com.mbridge.msdk.foundation.same.c.b.a(imageView.getContext()).a(str, new com.mbridge.msdk.foundation.same.c.c() {
            @Override
            public final void onSuccessLoad(Bitmap bitmap, String str2) {
                if (bitmap != null && !bitmap.isRecycled()) {
                    int i2 = i;
                    if (i2 == 501 || i2 == 802) {
                        imageView.setImageBitmap(com.mbridge.msdk.video.dynview.i.a.a().a(bitmap, 0));
                        return;
                    } else {
                        imageView.setImageBitmap(bitmap);
                        return;
                    }
                }
                int iA = s.a(imageView.getContext(), "mbridge_icon_play_bg", i.c);
                imageView.setBackgroundColor(Color.parseColor(a.this.g));
                imageView.setImageResource(iA);
                imageView.setScaleType(ImageView.ScaleType.CENTER);
            }

            @Override
            public final void onFailedLoad(String str2, String str3) {
                try {
                    int iA = s.a(imageView.getContext(), "mbridge_icon_play_bg", i.c);
                    imageView.setBackgroundColor(Color.parseColor(a.this.g));
                    imageView.setImageResource(iA);
                    imageView.setScaleType(ImageView.ScaleType.CENTER);
                } catch (Exception e) {
                    z.a(com.tkay.expressad.video.dynview.j.a.a, e.getMessage());
                }
            }
        });
    }

    private void a(final String str, final ImageView imageView, final com.mbridge.msdk.video.dynview.c cVar, final View view) {
        com.mbridge.msdk.foundation.same.c.b.a(imageView.getContext()).a(str, new com.mbridge.msdk.foundation.same.c.c() {
            @Override
            public final void onFailedLoad(String str2, String str3) {
            }

            @Override
            public final void onSuccessLoad(Bitmap bitmap, String str2) {
                ImageView imageView2;
                if (bitmap == null || bitmap.isRecycled() || (imageView2 = imageView) == null) {
                    return;
                }
                imageView2.setImageBitmap(bitmap);
                if (a.this.c != null) {
                    a.this.c.put(SameMD5.getMD5(str), bitmap);
                    a.a(a.this, cVar, view);
                }
            }
        });
        try {
            Bitmap bitmapA = a();
            if (bitmapA == null || bitmapA.isRecycled()) {
                return;
            }
            a(cVar, view);
        } catch (Exception e) {
            z.d(com.tkay.expressad.video.dynview.j.a.a, e.getMessage());
        }
    }

    private int a(String str) {
        return s.a(com.mbridge.msdk.foundation.controller.a.f().j(), str, "id");
    }

    private int b(String str) {
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        return str.hashCode();
    }

    private Bitmap a() {
        Bitmap bitmapCreateBitmap = null;
        try {
            bitmapCreateBitmap = Bitmap.createBitmap(1, 1, Bitmap.Config.ARGB_4444);
            bitmapCreateBitmap.eraseColor(Color.parseColor(this.h));
            return bitmapCreateBitmap;
        } catch (Exception e) {
            if (!MBridgeConstans.DEBUG) {
                return bitmapCreateBitmap;
            }
            e.printStackTrace();
            return bitmapCreateBitmap;
        }
    }

    private void a(com.mbridge.msdk.video.dynview.c cVar, View view) {
        a.a aVarA = com.mbridge.msdk.video.dynview.g.a.a();
        aVarA.a(cVar.e()).a(true);
        if (cVar.e() != 2 || cVar.d() > cVar.c()) {
            aVarA.a(cVar.d()).b(cVar.c());
        } else {
            aVarA.a(cVar.c()).b(cVar.d());
        }
        if (view.getBackground() == null) {
            view.setBackground(aVarA.a());
        }
    }

    private void b() {
        com.mbridge.msdk.video.dynview.i.a.a.a().b();
        com.mbridge.msdk.video.dynview.i.c.b bVar = this.b;
        if (bVar != null) {
            bVar.b();
            this.b = null;
        }
        com.mbridge.msdk.video.dynview.b.a.a().a = null;
        if (this.a != null) {
            this.a = null;
        }
        Map<String, Bitmap> map = this.c;
        if (map != null) {
            if (map.entrySet() != null) {
                try {
                    Iterator<Map.Entry<String, Bitmap>> it = this.c.entrySet().iterator();
                    while (it.hasNext()) {
                        Map.Entry<String, Bitmap> next = it.next();
                        if (next != null && next.getValue() != null && !next.getValue().isRecycled()) {
                            next.getValue().recycle();
                        }
                        it.remove();
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            this.c.clear();
        }
    }

    private static final class a implements Runnable {
        private List<CampaignEx> a;
        private int b;
        private long c;
        private int d;

        public a(List<CampaignEx> list, int i, long j, int i2) {
            this.a = list;
            this.b = i;
            this.c = j;
            this.d = i2;
        }

        @Override
        public final void run() {
            List<CampaignEx> list = this.a;
            if (list != null) {
                try {
                    CampaignEx campaignEx = list.get(this.b);
                    if (campaignEx != null) {
                        com.mbridge.msdk.video.module.b.a.a(campaignEx.getCampaignUnitId(), campaignEx, this.d, String.valueOf(this.c));
                    }
                } catch (Exception unused) {
                }
            }
        }
    }

    static void a(a aVar, Map map, List list, int i) {
        if (map == null || list == null || list.size() <= 1) {
            return;
        }
        if (map.containsKey(com.tkay.expressad.video.dynview.a.a.D) && (map.get(com.tkay.expressad.video.dynview.a.a.D) instanceof d)) {
            d dVar = (d) map.get(com.tkay.expressad.video.dynview.a.a.D);
            if (dVar != null) {
                try {
                    com.mbridge.msdk.foundation.same.f.b.b().execute(new a(list, i, aVar.i, 0));
                } catch (Exception unused) {
                }
                dVar.a((CampaignEx) list.get(i));
            }
            aVar.b();
            return;
        }
        if (map.containsKey(com.tkay.expressad.video.dynview.a.a.E) && (map.get(com.tkay.expressad.video.dynview.a.a.E) instanceof com.mbridge.msdk.video.dynview.e.c)) {
            com.mbridge.msdk.video.dynview.e.c cVar = (com.mbridge.msdk.video.dynview.e.c) map.get(com.tkay.expressad.video.dynview.a.a.E);
            if (cVar != null) {
                try {
                    com.mbridge.msdk.foundation.same.f.b.b().execute(new a(list, i, aVar.i, 0));
                } catch (Exception unused2) {
                }
                cVar.a((CampaignEx) list.get(i), i);
            }
            aVar.b();
        }
    }

    static void a(a aVar, Map map) {
        if (map != null) {
            try {
                if (map.containsKey(com.tkay.expressad.video.dynview.a.a.D) && (map.get(com.tkay.expressad.video.dynview.a.a.D) instanceof d)) {
                    ((d) map.get(com.tkay.expressad.video.dynview.a.a.D)).a();
                    aVar.b();
                }
            } catch (Exception e) {
                z.d(com.tkay.expressad.video.dynview.j.a.a, e.getMessage());
            }
        }
    }

    static void b(a aVar, Map map) {
        if (map != null) {
            try {
                if (map.containsKey(com.tkay.expressad.video.dynview.a.a.E) && (map.get(com.tkay.expressad.video.dynview.a.a.E) instanceof com.mbridge.msdk.video.dynview.e.c)) {
                    ((com.mbridge.msdk.video.dynview.e.c) map.get(com.tkay.expressad.video.dynview.a.a.E)).a();
                    aVar.b();
                }
            } catch (Exception e) {
                z.d(com.tkay.expressad.video.dynview.j.a.a, e.getMessage());
            }
        }
    }

    static void a(a aVar, com.mbridge.msdk.video.dynview.c cVar, View view) {
        Map<String, Bitmap> map = aVar.c;
        if (map == null || map.size() <= 1) {
            return;
        }
        new com.mbridge.msdk.video.dynview.h.b();
        Map<String, Bitmap> map2 = aVar.c;
        if (view != null) {
            com.mbridge.msdk.video.dynview.i.a.a.a().a(map2, cVar, view);
        }
    }
}
