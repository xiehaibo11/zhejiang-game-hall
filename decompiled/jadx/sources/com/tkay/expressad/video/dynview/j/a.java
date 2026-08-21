package com.tkay.expressad.video.dynview.j;

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
import android.widget.TextView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.d;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.p;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.x;
import com.tkay.expressad.video.dynview.f.e;
import com.tkay.expressad.video.dynview.g.a;
import com.tkay.expressad.video.dynview.widget.TYLevelLayoutView;
import com.tkay.expressad.videocommon.view.RoundImageView;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f7237a = "DataEnergizeWrapper";
    private static boolean k;
    private com.tkay.expressad.video.dynview.i.c.b c;
    private Map<String, Bitmap> d;
    private volatile boolean e;
    private String f = "#FFFFFFFF";
    private String g = "#60000000";
    private String h = "#FF5F5F5F";
    private String i = "#90ECECEC";
    private volatile long j = 0;
    private com.tkay.expressad.video.dynview.i.c.a l = null;
    private boolean m = false;
    private int n = 0;
    public com.tkay.expressad.video.dynview.e.a b = new com.tkay.expressad.video.dynview.e.a() { // from class: com.tkay.expressad.video.dynview.j.a.1
        @Override // com.tkay.expressad.video.dynview.e.a
        public final void b() {
        }

        @Override // com.tkay.expressad.video.dynview.e.a
        public final void a() {
            if (!a.this.m || a.this.c == null) {
                return;
            }
            a.this.c.a(a.this.n * 1000, a.this.l);
            a.this.m = false;
        }

        @Override // com.tkay.expressad.video.dynview.e.a
        public final void c() {
            if (a.this.c != null) {
                a.this.c.c();
                a.this.m = true;
            }
        }
    };

    static /* synthetic */ boolean f(a aVar) {
        aVar.e = true;
        return true;
    }

    /* JADX WARN: Removed duplicated region for block: B:45:0x0196  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x01a4  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x01bd  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x01c7  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x024a  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x024f  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x025d  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x027a  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x027f  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x0284  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0335  */
    /* JADX WARN: Removed duplicated region for block: B:95:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(com.tkay.expressad.video.dynview.c r33, android.view.View r34, final java.util.Map r35, com.tkay.expressad.video.dynview.f.e r36) {
        /*
            Method dump skipped, instruction units count: 826
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.video.dynview.j.a.a(com.tkay.expressad.video.dynview.c, android.view.View, java.util.Map, com.tkay.expressad.video.dynview.f.e):void");
    }

    public final void b(com.tkay.expressad.video.dynview.c cVar, View view, Map map, e eVar) {
        if (eVar == null) {
            return;
        }
        if (cVar == null) {
            eVar.a(com.tkay.expressad.video.dynview.c.b.NOT_FOUND_VIEWOPTION);
            return;
        }
        if (map != null && map.containsKey("is_dy_success")) {
            k = ((Boolean) map.get("is_dy_success")).booleanValue();
        }
        k = false;
        ImageView imageView = (ImageView) view.findViewById(a("tkay_reward_icon_riv"));
        TextView textView = (TextView) view.findViewById(a("tkay_reward_title_tv"));
        LinearLayout linearLayout = (LinearLayout) view.findViewById(a("tkay_reward_stars_mllv"));
        TextView textView2 = (TextView) view.findViewById(a("tkay_reward_click_tv"));
        ImageView imageView2 = (ImageView) view.findViewById(a("tkay_videoview_bg"));
        TextView textView3 = (TextView) view.findViewById(a("tkay_reward_desc_tv"));
        List<View> arrayList = new ArrayList<>();
        List<com.tkay.expressad.foundation.d.c> listG = cVar.g();
        if (listG != null && listG.size() > 0) {
            com.tkay.expressad.foundation.d.c cVar2 = listG.get(0);
            if (cVar2 != null) {
                if (imageView != null) {
                    ((RoundImageView) imageView).setBorderRadius(10);
                    a(cVar2.bd(), imageView);
                }
                if (textView != null) {
                    textView.setText(cVar2.bb());
                }
                if (textView3 != null) {
                    textView3.setText(cVar2.bc());
                }
                if (linearLayout != null) {
                    double dAX = cVar2.aX();
                    if (dAX <= 0.0d) {
                        dAX = 5.0d;
                    }
                    ((TYLevelLayoutView) linearLayout).setRatingAndUser(dAX, cVar2.aY());
                }
                if (textView2 != null) {
                    textView2.setText(cVar2.cU);
                }
                int iH = cVar.h();
                if (iH == 102 || iH == 202 || iH == 302) {
                    if (textView2 != null) {
                        arrayList.add(textView2);
                    }
                } else if (iH != 802) {
                    if (iH == 904 && cVar.k()) {
                        arrayList.add(view);
                    }
                } else {
                    if (imageView != null) {
                        arrayList.add(imageView);
                    }
                    if (textView2 != null) {
                        arrayList.add(textView2);
                    }
                    a(imageView2, cVar2.be(), iH);
                }
                eVar.a(view, arrayList);
                return;
            }
            eVar.a(com.tkay.expressad.video.dynview.c.b.CAMPAIGNEX_IS_NULL);
            return;
        }
        eVar.a(com.tkay.expressad.video.dynview.c.b.CAMPAIGNEX_IS_NULL);
    }

    public final void a(com.tkay.expressad.video.dynview.c cVar, View view, e eVar) {
        if (eVar == null) {
            return;
        }
        if (cVar == null) {
            eVar.a(com.tkay.expressad.video.dynview.c.b.NOT_FOUND_VIEWOPTION);
            return;
        }
        try {
            ImageView imageView = (ImageView) view.findViewById(a("tkay_iv_adbanner_bg"));
            if (imageView != null) {
                imageView.setBackgroundColor(Color.parseColor(this.i));
            }
            ImageView imageView2 = (ImageView) view.findViewById(a("tkay_iv_adbanner"));
            if (imageView2 != null) {
                imageView2.setBackgroundColor(Color.parseColor(this.i));
            }
            eVar.a(view, new ArrayList());
        } catch (Exception e) {
            e.getMessage();
            eVar.a(com.tkay.expressad.video.dynview.c.b.NOT_FOUND_VIEWOPTION);
        }
    }

    private void a(String str, Context context, View view, int i, Map map) {
        FrameLayout.LayoutParams layoutParams;
        String strA = x.a(str, "cltp");
        long j = !TextUtils.isEmpty(strA) ? Long.parseLong(strA) : 0L;
        if (j != 0) {
            if (map != null && map.containsKey("is_dy_success")) {
                k = ((Boolean) map.get("is_dy_success")).booleanValue();
            }
            k = false;
            TextView textView = (TextView) view.findViewById(a("tkay_choice_one_countdown_tv"));
            textView.setTextSize(11.0f);
            textView.setTextColor(Color.parseColor(this.f));
            String str2 = this.g;
            if (textView != null) {
                GradientDrawable gradientDrawable = new GradientDrawable();
                gradientDrawable.setColor(Color.parseColor(str2));
                gradientDrawable.setCornerRadius(t.b(textView.getContext(), 12.0f));
                gradientDrawable.setStroke(t.b(textView.getContext(), 1.0f), Color.parseColor(str2));
                textView.setBackgroundDrawable(gradientDrawable);
            }
            if (i == 2 && (layoutParams = (FrameLayout.LayoutParams) textView.getLayoutParams()) != null) {
                int iD = t.d(context);
                int iB = t.b(context, 10.0f);
                layoutParams.setMargins(iB, iB, iD, iB);
            }
            if (textView != null) {
                textView.setVisibility(0);
                textView.setOnClickListener(new AnonymousClass5(map));
                this.l = new AnonymousClass6(textView, map);
                com.tkay.expressad.video.dynview.i.c.b bVarA = new com.tkay.expressad.video.dynview.i.c.b().a(j * 1000).a().a(this.l);
                this.c = bVarA;
                bVarA.b();
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.dynview.j.a$5, reason: invalid class name */
    final class AnonymousClass5 extends com.tkay.expressad.widget.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Map f7243a;

        AnonymousClass5(Map map) {
            this.f7243a = map;
        }

        @Override // com.tkay.expressad.widget.a
        protected final void a(View view) {
            if (a.this.e) {
                return;
            }
            a.f(a.this);
            a.a(a.this, this.f7243a);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.dynview.j.a$6, reason: invalid class name */
    final class AnonymousClass6 implements com.tkay.expressad.video.dynview.i.c.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ TextView f7244a;
        final /* synthetic */ Map b;

        AnonymousClass6(TextView textView, Map map) {
            this.f7244a = textView;
            this.b = map;
        }

        @Override // com.tkay.expressad.video.dynview.i.c.a
        public final void a(long j) {
            String str;
            a.this.n = (int) (j / 1000);
            long j2 = a.this.n;
            Context context = this.f7244a.getContext();
            String strF = d.f(context);
            if (strF.startsWith(com.tkay.expressad.video.dynview.a.a.Q) || strF.startsWith(com.tkay.expressad.video.dynview.a.a.R)) {
                str = j2 + " " + context.getString(i.a(context, "tkay_cm_video_auto_play_after", i.g));
            } else if (strF.startsWith("de")) {
                str = com.tkay.expressad.video.dynview.a.a.G + j2 + " Sekunden";
            } else if (strF.startsWith(com.tkay.expressad.video.dynview.a.a.T)) {
                str = j2 + com.tkay.expressad.video.dynview.a.a.H;
            } else if (strF.startsWith(com.tkay.expressad.video.dynview.a.a.U)) {
                str = com.tkay.expressad.video.dynview.a.a.I + j2 + " secondes";
            } else if (strF.startsWith("ar")) {
                str = " ثوان" + j2 + com.tkay.expressad.video.dynview.a.a.J;
            } else if (strF.startsWith(com.tkay.expressad.video.dynview.a.a.W)) {
                str = com.tkay.expressad.video.dynview.a.a.K + j2 + " секунд";
            } else {
                str = com.tkay.expressad.video.dynview.a.a.F + j2 + " s";
            }
            this.f7244a.setText(str);
            a.this.j++;
        }

        @Override // com.tkay.expressad.video.dynview.i.c.a
        public final void a() {
            a.a(a.this, this.b);
        }
    }

    public final void c(com.tkay.expressad.video.dynview.c cVar, View view, final Map map, e eVar) {
        try {
            if (this.d == null) {
                this.d = new HashMap();
            }
            final List<com.tkay.expressad.foundation.d.c> listG = cVar.g();
            if (view.getContext() == null) {
                eVar.a(com.tkay.expressad.video.dynview.c.b.NOT_FOUND_CONTEXT);
                return;
            }
            if (map != null && map.containsKey("is_dy_success")) {
                k = ((Boolean) map.get("is_dy_success")).booleanValue();
            }
            k = false;
            ListView listView = (ListView) view.findViewById(a("tkay_order_view_lv"));
            GridView gridView = (GridView) view.findViewById(a("tkay_order_view_h_lv"));
            ImageView imageView = (ImageView) view.findViewById(a("tkay_order_view_iv_close"));
            com.tkay.expressad.video.dynview.ordercamp.a.a aVar = new com.tkay.expressad.video.dynview.ordercamp.a.a(listG);
            if (cVar.e() == 1) {
                if (listView != null) {
                    listView.setAdapter((ListAdapter) aVar);
                    listView.setOnItemClickListener(new AdapterView.OnItemClickListener() { // from class: com.tkay.expressad.video.dynview.j.a.7
                        @Override // android.widget.AdapterView.OnItemClickListener
                        public final void onItemClick(AdapterView<?> adapterView, View view2, int i, long j) {
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
                gridView.setOnItemClickListener(new AdapterView.OnItemClickListener() { // from class: com.tkay.expressad.video.dynview.j.a.8
                    @Override // android.widget.AdapterView.OnItemClickListener
                    public final void onItemClick(AdapterView<?> adapterView, View view2, int i3, long j) {
                        a.a(a.this, map, listG, i3);
                    }
                });
            }
            if (imageView != null) {
                imageView.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.dynview.j.a.9
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
                eVar.a(com.tkay.expressad.video.dynview.c.b.NOT_FOUND_VIEWOPTION);
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
        com.tkay.expressad.foundation.g.d.b.a(imageView.getContext()).a(str, new com.tkay.expressad.foundation.g.d.c() { // from class: com.tkay.expressad.video.dynview.j.a.10
            @Override // com.tkay.expressad.foundation.g.d.c
            public final void a(Bitmap bitmap, String str2) {
                if (bitmap != null && !bitmap.isRecycled()) {
                    int i2 = i;
                    if (i2 == 501 || i2 == 802) {
                        ImageView imageView2 = imageView;
                        com.tkay.expressad.video.dynview.i.b.a();
                        imageView2.setImageBitmap(com.tkay.expressad.video.dynview.i.b.a(bitmap, 0));
                        return;
                    }
                    imageView.setImageBitmap(bitmap);
                    return;
                }
                int iA = i.a(imageView.getContext(), "tkay_icon_play_bg", i.c);
                imageView.setBackgroundColor(Color.parseColor(a.this.h));
                imageView.setImageResource(iA);
                imageView.setScaleType(ImageView.ScaleType.CENTER);
            }

            @Override // com.tkay.expressad.foundation.g.d.c
            public final void a(String str2, String str3) {
                try {
                    int iA = i.a(imageView.getContext(), "tkay_icon_play_bg", i.c);
                    imageView.setBackgroundColor(Color.parseColor(a.this.h));
                    imageView.setImageResource(iA);
                    imageView.setScaleType(ImageView.ScaleType.CENTER);
                } catch (Exception e) {
                    e.getMessage();
                }
            }
        });
    }

    private void a(final String str, final ImageView imageView, final com.tkay.expressad.video.dynview.c cVar, final View view) {
        com.tkay.expressad.foundation.g.d.b.a(imageView.getContext()).a(str, new com.tkay.expressad.foundation.g.d.c() { // from class: com.tkay.expressad.video.dynview.j.a.2
            @Override // com.tkay.expressad.foundation.g.d.c
            public final void a(String str2, String str3) {
            }

            @Override // com.tkay.expressad.foundation.g.d.c
            public final void a(Bitmap bitmap, String str2) {
                ImageView imageView2;
                if (bitmap == null || bitmap.isRecycled() || (imageView2 = imageView) == null) {
                    return;
                }
                imageView2.setImageBitmap(bitmap);
                if (a.this.d != null) {
                    a.this.d.put(p.a(str), bitmap);
                    a.a(a.this, cVar, view);
                }
            }
        });
        if (a() != null) {
            b(cVar, view);
        }
    }

    private void a(Map map) {
        if (map != null) {
            try {
                if (map.containsKey(com.tkay.expressad.video.dynview.a.a.D) && (map.get(com.tkay.expressad.video.dynview.a.a.D) instanceof com.tkay.expressad.video.dynview.f.d)) {
                    ((com.tkay.expressad.video.dynview.f.d) map.get(com.tkay.expressad.video.dynview.a.a.D)).a();
                    b();
                }
            } catch (Exception e) {
                e.getMessage();
            }
        }
    }

    private void a(Map map, List<com.tkay.expressad.foundation.d.c> list, int i) {
        if (map == null || list == null || list.size() <= 1) {
            return;
        }
        if (map.containsKey(com.tkay.expressad.video.dynview.a.a.D) && (map.get(com.tkay.expressad.video.dynview.a.a.D) instanceof com.tkay.expressad.video.dynview.f.d)) {
            com.tkay.expressad.video.dynview.f.d dVar = (com.tkay.expressad.video.dynview.f.d) map.get(com.tkay.expressad.video.dynview.a.a.D);
            if (dVar != null) {
                dVar.a(list.get(i));
            }
            b();
            return;
        }
        if (map.containsKey(com.tkay.expressad.video.dynview.a.a.E) && (map.get(com.tkay.expressad.video.dynview.a.a.E) instanceof com.tkay.expressad.video.dynview.f.c)) {
            com.tkay.expressad.video.dynview.f.c cVar = (com.tkay.expressad.video.dynview.f.c) map.get(com.tkay.expressad.video.dynview.a.a.E);
            if (cVar != null) {
                cVar.a(list.get(i), i);
            }
            b();
        }
    }

    private void b(Map map) {
        if (map != null) {
            try {
                if (map.containsKey(com.tkay.expressad.video.dynview.a.a.E) && (map.get(com.tkay.expressad.video.dynview.a.a.E) instanceof com.tkay.expressad.video.dynview.f.c)) {
                    ((com.tkay.expressad.video.dynview.f.c) map.get(com.tkay.expressad.video.dynview.a.a.E)).a();
                    b();
                }
            } catch (Exception e) {
                e.getMessage();
            }
        }
    }

    private void a(com.tkay.expressad.video.dynview.c cVar, View view) {
        Map<String, Bitmap> map = this.d;
        if (map == null || map.size() <= 1) {
            return;
        }
        new com.tkay.expressad.video.dynview.h.b();
        Map<String, Bitmap> map2 = this.d;
        if (view != null) {
            com.tkay.expressad.video.dynview.i.a.a.a().a(map2, cVar, view);
        }
    }

    private static int a(String str) {
        return i.a(m.a().f(), str, "id");
    }

    private static int b(String str) {
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        return str.hashCode();
    }

    private Bitmap a() {
        Bitmap bitmapCreateBitmap = null;
        try {
            bitmapCreateBitmap = Bitmap.createBitmap(1, 1, Bitmap.Config.ARGB_4444);
            bitmapCreateBitmap.eraseColor(Color.parseColor(this.i));
            return bitmapCreateBitmap;
        } catch (Exception e) {
            if (!com.tkay.expressad.b.f6449a) {
                return bitmapCreateBitmap;
            }
            e.printStackTrace();
            return bitmapCreateBitmap;
        }
    }

    private static void b(com.tkay.expressad.video.dynview.c cVar, View view) {
        a.C0479a c0479aA = com.tkay.expressad.video.dynview.g.a.a();
        c0479aA.a(cVar.e()).a();
        if (cVar.e() != 2 || cVar.d() > cVar.c()) {
            c0479aA.a(cVar.d()).b(cVar.c());
        } else {
            c0479aA.a(cVar.c()).b(cVar.d());
        }
        if (view.getBackground() == null) {
            view.setBackgroundDrawable(c0479aA.b());
        }
    }

    private void b() {
        com.tkay.expressad.video.dynview.i.a.a.a().b();
        com.tkay.expressad.video.dynview.i.c.b bVar = this.c;
        if (bVar != null) {
            bVar.c();
            this.c = null;
        }
        com.tkay.expressad.video.dynview.b.a.a().f7217a = null;
        if (this.b != null) {
            this.b = null;
        }
        Map<String, Bitmap> map = this.d;
        if (map != null) {
            if (map.entrySet() != null) {
                try {
                    Iterator<Map.Entry<String, Bitmap>> it = this.d.entrySet().iterator();
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
            this.d.clear();
        }
    }

    static /* synthetic */ void a(a aVar, Map map, List list, int i) {
        if (map == null || list == null || list.size() <= 1) {
            return;
        }
        if (map.containsKey(com.tkay.expressad.video.dynview.a.a.D) && (map.get(com.tkay.expressad.video.dynview.a.a.D) instanceof com.tkay.expressad.video.dynview.f.d)) {
            com.tkay.expressad.video.dynview.f.d dVar = (com.tkay.expressad.video.dynview.f.d) map.get(com.tkay.expressad.video.dynview.a.a.D);
            if (dVar != null) {
                dVar.a((com.tkay.expressad.foundation.d.c) list.get(i));
            }
            aVar.b();
            return;
        }
        if (map.containsKey(com.tkay.expressad.video.dynview.a.a.E) && (map.get(com.tkay.expressad.video.dynview.a.a.E) instanceof com.tkay.expressad.video.dynview.f.c)) {
            com.tkay.expressad.video.dynview.f.c cVar = (com.tkay.expressad.video.dynview.f.c) map.get(com.tkay.expressad.video.dynview.a.a.E);
            if (cVar != null) {
                cVar.a((com.tkay.expressad.foundation.d.c) list.get(i), i);
            }
            aVar.b();
        }
    }

    static /* synthetic */ void a(a aVar, Map map) {
        if (map != null) {
            try {
                if (map.containsKey(com.tkay.expressad.video.dynview.a.a.D) && (map.get(com.tkay.expressad.video.dynview.a.a.D) instanceof com.tkay.expressad.video.dynview.f.d)) {
                    ((com.tkay.expressad.video.dynview.f.d) map.get(com.tkay.expressad.video.dynview.a.a.D)).a();
                    aVar.b();
                }
            } catch (Exception e) {
                e.getMessage();
            }
        }
    }

    static /* synthetic */ void b(a aVar, Map map) {
        if (map != null) {
            try {
                if (map.containsKey(com.tkay.expressad.video.dynview.a.a.E) && (map.get(com.tkay.expressad.video.dynview.a.a.E) instanceof com.tkay.expressad.video.dynview.f.c)) {
                    ((com.tkay.expressad.video.dynview.f.c) map.get(com.tkay.expressad.video.dynview.a.a.E)).a();
                    aVar.b();
                }
            } catch (Exception e) {
                e.getMessage();
            }
        }
    }

    static /* synthetic */ void a(a aVar, com.tkay.expressad.video.dynview.c cVar, View view) {
        Map<String, Bitmap> map = aVar.d;
        if (map == null || map.size() <= 1) {
            return;
        }
        new com.tkay.expressad.video.dynview.h.b();
        Map<String, Bitmap> map2 = aVar.d;
        if (view != null) {
            com.tkay.expressad.video.dynview.i.a.a.a().a(map2, cVar, view);
        }
    }
}
