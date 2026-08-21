package com.mbridge.msdk.video.dynview.j;

import android.graphics.Bitmap;
import android.graphics.Color;
import android.text.TextUtils;
import android.view.View;
import android.widget.AdapterView;
import android.widget.GridView;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.TextView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView;
import com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView;
import com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.mbridge.msdk.foundation.tools.s;
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

/* JADX INFO: compiled from: DataEnergizeWrapper.java */
/* JADX INFO: loaded from: classes3.dex */
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

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public com.mbridge.msdk.video.dynview.d.a f4155a = new com.mbridge.msdk.video.dynview.d.a() { // from class: com.mbridge.msdk.video.dynview.j.a.1
        @Override // com.mbridge.msdk.video.dynview.d.a
        public final void b() {
        }

        @Override // com.mbridge.msdk.video.dynview.d.a
        public final void a() {
            if (!a.this.l || a.this.b == null) {
                return;
            }
            a.this.b.a(a.this.m * 1000, a.this.k);
            a.this.l = false;
        }

        @Override // com.mbridge.msdk.video.dynview.d.a
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
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(com.mbridge.msdk.video.dynview.c r32, android.view.View r33, final java.util.Map r34, com.mbridge.msdk.video.dynview.e.e r35) {
        /*
            Method dump skipped, instruction units count: 1028
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.video.dynview.j.a.a(com.mbridge.msdk.video.dynview.c, android.view.View, java.util.Map, com.mbridge.msdk.video.dynview.e.e):void");
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
            eVar.a(com.mbridge.msdk.video.dynview.c.a.NOT_FOUND_VIEWOPTION);
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
            eVar.a(com.mbridge.msdk.video.dynview.c.a.CAMPAIGNEX_IS_NULL);
            return;
        }
        eVar.a(com.mbridge.msdk.video.dynview.c.a.CAMPAIGNEX_IS_NULL);
    }

    public final void a(com.mbridge.msdk.video.dynview.c cVar, View view, e eVar) {
        if (eVar == null) {
            return;
        }
        if (cVar == null) {
            eVar.a(com.mbridge.msdk.video.dynview.c.a.NOT_FOUND_VIEWOPTION);
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
            z.a(com.tkay.expressad.video.dynview.j.a.f7237a, e.getMessage());
            eVar.a(com.mbridge.msdk.video.dynview.c.a.NOT_FOUND_VIEWOPTION);
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
                eVar.a(com.mbridge.msdk.video.dynview.c.a.NOT_FOUND_CONTEXT);
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
                    listView.setOnItemClickListener(new AdapterView.OnItemClickListener() { // from class: com.mbridge.msdk.video.dynview.j.a.7
                        @Override // android.widget.AdapterView.OnItemClickListener
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
                gridView.setOnItemClickListener(new AdapterView.OnItemClickListener() { // from class: com.mbridge.msdk.video.dynview.j.a.8
                    @Override // android.widget.AdapterView.OnItemClickListener
                    public final void onItemClick(AdapterView<?> adapterView, View view2, int i3, long j2) {
                        a.a(a.this, map, listG, i3);
                    }
                });
            }
            if (imageView != null) {
                imageView.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.dynview.j.a.9
                    @Override // android.view.View.OnClickListener
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
                eVar.a(com.mbridge.msdk.video.dynview.c.a.NOT_FOUND_VIEWOPTION);
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
        com.mbridge.msdk.foundation.same.c.b.a(imageView.getContext()).a(str, new com.mbridge.msdk.foundation.same.c.c() { // from class: com.mbridge.msdk.video.dynview.j.a.10
            @Override // com.mbridge.msdk.foundation.same.c.c
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

            @Override // com.mbridge.msdk.foundation.same.c.c
            public final void onFailedLoad(String str2, String str3) {
                try {
                    int iA = s.a(imageView.getContext(), "mbridge_icon_play_bg", i.c);
                    imageView.setBackgroundColor(Color.parseColor(a.this.g));
                    imageView.setImageResource(iA);
                    imageView.setScaleType(ImageView.ScaleType.CENTER);
                } catch (Exception e) {
                    z.a(com.tkay.expressad.video.dynview.j.a.f7237a, e.getMessage());
                }
            }
        });
    }

    private void a(final String str, final ImageView imageView, final com.mbridge.msdk.video.dynview.c cVar, final View view) {
        com.mbridge.msdk.foundation.same.c.b.a(imageView.getContext()).a(str, new com.mbridge.msdk.foundation.same.c.c() { // from class: com.mbridge.msdk.video.dynview.j.a.2
            @Override // com.mbridge.msdk.foundation.same.c.c
            public final void onFailedLoad(String str2, String str3) {
            }

            @Override // com.mbridge.msdk.foundation.same.c.c
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
            z.d(com.tkay.expressad.video.dynview.j.a.f7237a, e.getMessage());
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
        a.C0304a c0304aA = com.mbridge.msdk.video.dynview.g.a.a();
        c0304aA.a(cVar.e()).a(true);
        if (cVar.e() != 2 || cVar.d() > cVar.c()) {
            c0304aA.a(cVar.d()).b(cVar.c());
        } else {
            c0304aA.a(cVar.c()).b(cVar.d());
        }
        if (view.getBackground() == null) {
            view.setBackground(c0304aA.a());
        }
    }

    private void b() {
        com.mbridge.msdk.video.dynview.i.a.a.a().b();
        com.mbridge.msdk.video.dynview.i.c.b bVar = this.b;
        if (bVar != null) {
            bVar.b();
            this.b = null;
        }
        com.mbridge.msdk.video.dynview.b.a.a().f4133a = null;
        if (this.f4155a != null) {
            this.f4155a = null;
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

    /* JADX INFO: renamed from: com.mbridge.msdk.video.dynview.j.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: DataEnergizeWrapper.java */
    private static final class RunnableC0305a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private List<CampaignEx> f4166a;
        private int b;
        private long c;
        private int d;

        public RunnableC0305a(List<CampaignEx> list, int i, long j, int i2) {
            this.f4166a = list;
            this.b = i;
            this.c = j;
            this.d = i2;
        }

        @Override // java.lang.Runnable
        public final void run() {
            List<CampaignEx> list = this.f4166a;
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

    static /* synthetic */ void a(a aVar, Map map, List list, int i) {
        if (map == null || list == null || list.size() <= 1) {
            return;
        }
        if (map.containsKey(com.tkay.expressad.video.dynview.a.a.D) && (map.get(com.tkay.expressad.video.dynview.a.a.D) instanceof d)) {
            d dVar = (d) map.get(com.tkay.expressad.video.dynview.a.a.D);
            if (dVar != null) {
                try {
                    com.mbridge.msdk.foundation.same.f.b.b().execute(new RunnableC0305a(list, i, aVar.i, 0));
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
                    com.mbridge.msdk.foundation.same.f.b.b().execute(new RunnableC0305a(list, i, aVar.i, 0));
                } catch (Exception unused2) {
                }
                cVar.a((CampaignEx) list.get(i), i);
            }
            aVar.b();
        }
    }

    static /* synthetic */ void a(a aVar, Map map) {
        if (map != null) {
            try {
                if (map.containsKey(com.tkay.expressad.video.dynview.a.a.D) && (map.get(com.tkay.expressad.video.dynview.a.a.D) instanceof d)) {
                    ((d) map.get(com.tkay.expressad.video.dynview.a.a.D)).a();
                    aVar.b();
                }
            } catch (Exception e) {
                z.d(com.tkay.expressad.video.dynview.j.a.f7237a, e.getMessage());
            }
        }
    }

    static /* synthetic */ void b(a aVar, Map map) {
        if (map != null) {
            try {
                if (map.containsKey(com.tkay.expressad.video.dynview.a.a.E) && (map.get(com.tkay.expressad.video.dynview.a.a.E) instanceof com.mbridge.msdk.video.dynview.e.c)) {
                    ((com.mbridge.msdk.video.dynview.e.c) map.get(com.tkay.expressad.video.dynview.a.a.E)).a();
                    aVar.b();
                }
            } catch (Exception e) {
                z.d(com.tkay.expressad.video.dynview.j.a.f7237a, e.getMessage());
            }
        }
    }

    static /* synthetic */ void a(a aVar, com.mbridge.msdk.video.dynview.c cVar, View view) {
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
