package com.mbridge.msdk.d;

import android.app.Activity;
import android.content.ContentValues;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.activity.MBCommonActivity;
import com.mbridge.msdk.foundation.db.f;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.same.c.c;
import com.mbridge.msdk.foundation.same.net.g.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.SameMD5;
import com.xiaomi.mipush.sdk.Constants;
import java.lang.ref.WeakReference;
import java.util.Iterator;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

public class b {
    private static volatile b b;
    private WeakReference<Context> a;
    private Handler c = new Handler(Looper.getMainLooper()) {
        @Override
        public final void handleMessage(Message message) {
            if (message.what != 10000) {
                return;
            }
            try {
                int i = message.arg1;
                Object obj = message.obj;
                b.a(b.this, i, obj instanceof String ? (String) obj : null);
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    e.printStackTrace();
                }
            }
        }
    };

    private String b(Context context) {
        return "";
    }

    private b(Context context) {
        this.a = new WeakReference<>(context);
    }

    public static b a(Context context) {
        if (b == null) {
            synchronized (b.class) {
                if (b == null) {
                    b = new b(context);
                }
            }
        }
        return b;
    }

    private boolean a(String str) {
        Context context = this.a.get();
        return context != null && context.getPackageManager().checkPermission(str, context.getPackageName()) == 0;
    }

    public final void a(final CampaignEx campaignEx, final Activity activity) throws Throwable {
        final Context context = this.a.get();
        if (context == null) {
            return;
        }
        boolean z = false;
        if (context != null) {
            f fVarA = f.a(i.a(context));
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB == null) {
                aVarB = com.mbridge.msdk.c.b.a().b();
            }
            List<CampaignEx> listA = fVarA.a(aVarB.D(), 0);
            if (listA != null && listA.size() > 0) {
                Iterator<CampaignEx> it = listA.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    CampaignEx next = it.next();
                    if (next.getId().equals(campaignEx.getId()) && next.getAppName().equals(campaignEx.getAppName())) {
                        z = true;
                        break;
                    }
                }
            }
        }
        if (z) {
            a(activity);
        } else if (!TextUtils.isEmpty(campaignEx.getIconUrl())) {
            com.mbridge.msdk.foundation.same.c.b.a(context).a(campaignEx.getIconUrl(), new c() {
                @Override
                public final void onFailedLoad(String str, String str2) {
                    b.this.a(activity);
                }

                @Override
                public final void onSuccessLoad(Bitmap bitmap, String str) {
                    f fVarA2 = f.a(i.a(context));
                    com.mbridge.msdk.c.a aVarB2 = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
                    if (aVarB2 == null) {
                        aVarB2 = com.mbridge.msdk.c.b.a().b();
                    }
                    b.this.a(context, aVarB2);
                    if (b.this.a("com.android.launcher.permission.INSTALL_SHORTCUT")) {
                        int iB = b.this.b(campaignEx.getAppName());
                        b.a(b.this, context, bitmap, campaignEx, activity);
                        b.a(b.this, campaignEx, aVarB2, fVarA2, iB);
                    }
                }
            });
        } else {
            a(activity);
        }
    }

    private void a(Context context, CampaignEx campaignEx, int i) {
        Intent intent = new Intent("com.android.launcher.action.UNINSTALL_SHORTCUT");
        intent.putExtra("android.intent.extra.shortcut.NAME", campaignEx.getAppName());
        Intent intent2 = new Intent(context, (Class<?>) MBCommonActivity.class);
        intent2.setAction("android.intent.action.VIEW");
        intent.putExtra("android.intent.extra.shortcut.INTENT", intent2);
        context.sendBroadcast(intent);
        f fVarA = f.a(i.a(context));
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB == null) {
            aVarB = com.mbridge.msdk.c.b.a().b();
        }
        String strD = aVarB.D();
        if (!a("com.android.launcher.permission.READ_SETTINGS") && !a("com.google.android.launcher.permission.READ_SETTINGS")) {
            a(campaignEx, 2, -1);
            ContentValues contentValues = new ContentValues();
            contentValues.put("is_deleted", (Integer) 1);
            fVarA.a(campaignEx.getId(), contentValues);
        } else {
            if (b(campaignEx.getAppName()) < i) {
                a(campaignEx, 2, 1);
                campaignEx.setIsDeleted(1);
                ContentValues contentValues2 = new ContentValues();
                contentValues2.put("is_deleted", (Integer) 1);
                fVarA.a(campaignEx.getId(), contentValues2);
            } else {
                a(campaignEx, 2, 0);
            }
        }
        fVarA.d(strD);
    }

    public final int a() throws Throwable {
        Context context = this.a.get();
        if (context == null) {
            return 0;
        }
        f fVarA = f.a(i.a(context));
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB == null) {
            aVarB = com.mbridge.msdk.c.b.a().b();
        }
        List<CampaignEx> listA = fVarA.a(aVarB.D(), 0);
        if (listA == null || listA.size() <= 0) {
            return 0;
        }
        return listA.size();
    }

    private boolean a(Context context, String str) {
        boolean z = false;
        if (context != null && !TextUtils.isEmpty(str)) {
            String strC = TextUtils.isEmpty(null) ? c(context) : null;
            if (!TextUtils.isEmpty(strC)) {
                try {
                    Cursor cursorA = a(strC, str, context);
                    if (cursorA != null && cursorA.getCount() > 0) {
                        z = true;
                    }
                    if (cursorA != null && !cursorA.isClosed()) {
                        cursorA.close();
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
        return z;
    }

    private Cursor a(String str, String str2, Context context) {
        return context.getContentResolver().query(Uri.parse(str), new String[]{"title"}, "title=?", new String[]{str2}, null);
    }

    private int b(String str) {
        Context context = this.a.get();
        if (context != null && (a("com.android.launcher.permission.READ_SETTINGS") || a("com.google.android.launcher.permission.READ_SETTINGS"))) {
            String strC = c(context);
            if (!TextUtils.isEmpty(strC)) {
                try {
                    Cursor cursorA = a(strC, str, context);
                    if (cursorA != null && cursorA.getCount() > 0) {
                        return cursorA.getCount();
                    }
                    if (cursorA != null && !cursorA.isClosed()) {
                        cursorA.close();
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
        return 0;
    }

    public final String b() {
        ResolveInfo resolveInfoResolveActivity;
        Intent intent = new Intent("android.intent.action.MAIN");
        intent.addCategory("android.intent.category.HOME");
        Context context = this.a.get();
        return (context == null || (resolveInfoResolveActivity = context.getPackageManager().resolveActivity(intent, 0)) == null || resolveInfoResolveActivity.activityInfo == null || resolveInfoResolveActivity.activityInfo.packageName.equals("android")) ? "" : resolveInfoResolveActivity.activityInfo.packageName;
    }

    private String c(Context context) {
        String strB = b(context);
        if (strB == null || strB.trim().equals("")) {
            b();
            strB = "";
        }
        if (TextUtils.isEmpty(strB)) {
            int i = Build.VERSION.SDK_INT;
            strB = i < 8 ? "com.android.launcher.settings" : i < 19 ? "com.android.launcher2.settings" : "com.android.launcher3.settings";
        }
        return "content://" + strB + "/favorites?notify=true";
    }

    public final String c() {
        String str = "1";
        String str2 = a("com.android.launcher.permission.INSTALL_SHORTCUT") ? "1" : "0";
        String str3 = a("com.android.launcher.permission.UNINSTALL_SHORTCUT") ? "1" : "0";
        if (!a("com.android.launcher.permission.READ_SETTINGS") && !a("com.google.android.launcher.permission.READ_SETTINGS")) {
            str = "0";
        }
        return "[" + str2 + Constants.ACCEPT_TIME_SEPARATOR_SP + str3 + Constants.ACCEPT_TIME_SEPARATOR_SP + str + "]";
    }

    private void a(CampaignEx campaignEx, int i, int i2) {
        if (this.a.get() == null || campaignEx.getIsDeleted() == 1) {
            return;
        }
        e.a(this.a.get(), campaignEx, i, i2);
    }

    public final void a(com.mbridge.msdk.c.a aVar) {
        f fVarA;
        List<CampaignEx> listA;
        try {
            Context context = this.a.get();
            if (context == null || (listA = (fVarA = f.a(i.a(context))).a(aVar.D(), 0)) == null || listA.size() <= 0) {
                return;
            }
            for (CampaignEx campaignEx : listA) {
                if (campaignEx.getIsAddSuccesful() == 0 && campaignEx.getIsDeleted() == 0) {
                    if (b(campaignEx.getAppName()) != 0) {
                        a(campaignEx, 1, 1);
                        com.mbridge.msdk.foundation.a.a.a.a().a(com.mbridge.msdk.a.SHORTCUTS_CTIME, String.valueOf(System.currentTimeMillis()));
                    } else {
                        a(campaignEx, 1, 0);
                    }
                    campaignEx.setIsAddSuccesful(-1);
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("is_add_sucesful", Integer.valueOf(campaignEx.getIsAddSuccesful()));
                    fVarA.a(campaignEx.getId(), contentValues);
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public final void a(final int i, final String str) {
        try {
            if (this.a.get() == null) {
                return;
            }
            new Thread(new Runnable() {
                @Override
                public final void run() {
                    com.mbridge.msdk.c.a aVarB = str != null ? com.mbridge.msdk.c.b.a().b(str) : null;
                    if (aVarB == null) {
                        aVarB = com.mbridge.msdk.c.b.a().b();
                    }
                    b.this.a(aVarB);
                    Message messageObtain = Message.obtain();
                    messageObtain.arg1 = i;
                    messageObtain.obj = str;
                    b.this.c.sendEmptyMessage(10000);
                }
            }).start();
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    private void a(Activity activity) {
        if (activity != null) {
            activity.finish();
        }
    }

    private void a(Context context, com.mbridge.msdk.c.a aVar) {
        List<CampaignEx> listA;
        if (TextUtils.isEmpty(aVar.D()) || (listA = f.a(i.a(context)).a(aVar.D(), 0)) == null || listA.size() <= 0 || !a("com.android.launcher.permission.UNINSTALL_SHORTCUT")) {
            return;
        }
        for (CampaignEx campaignEx : listA) {
            int iB = b(campaignEx.getAppName());
            Context context2 = this.a.get();
            if (context2 != null) {
                if (a("com.android.launcher.permission.READ_SETTINGS") || a("com.google.android.launcher.permission.READ_SETTINGS")) {
                    if (a(context2, campaignEx.getAppName())) {
                        a(context2, campaignEx, iB);
                    }
                } else if (a("com.android.launcher.permission.UNINSTALL_SHORTCUT")) {
                    a(context2, campaignEx, iB);
                }
            }
        }
    }

    static void a(b bVar, Context context, Bitmap bitmap, CampaignEx campaignEx, Activity activity) {
        if (!TextUtils.isEmpty(campaignEx.getAppName()) && bitmap != null) {
            try {
                Intent intent = new Intent("com.android.launcher.action.INSTALL_SHORTCUT");
                intent.putExtra("android.intent.extra.shortcut.NAME", campaignEx.getAppName());
                intent.putExtra("duplicate", false);
                intent.putExtra("android.intent.extra.shortcut.ICON", Bitmap.createScaledBitmap(bitmap, 140, 140, true));
                Intent intent2 = new Intent(context, (Class<?>) MBCommonActivity.class);
                intent2.putExtra("intent_flag", "shortcuts");
                JSONObject jSONObjectCampaignToJsonObject = null;
                try {
                    jSONObjectCampaignToJsonObject = CampaignEx.campaignToJsonObject(campaignEx);
                } catch (JSONException e) {
                    e.printStackTrace();
                }
                if (jSONObjectCampaignToJsonObject != null) {
                    intent2.putExtra("intent_jsonobject", jSONObjectCampaignToJsonObject.toString());
                }
                intent2.setFlags(32768);
                intent.putExtra("android.intent.extra.shortcut.INTENT", intent2);
                context.sendBroadcast(intent);
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
        bVar.a(activity);
    }

    static void a(b bVar, CampaignEx campaignEx, com.mbridge.msdk.c.a aVar, f fVar, int i) {
        campaignEx.setTimestamp(0L);
        if (!bVar.a("com.android.launcher.permission.READ_SETTINGS") && !bVar.a("com.google.android.launcher.permission.READ_SETTINGS")) {
            campaignEx.setIsAddSuccesful(1);
            bVar.a(campaignEx, 1, -1);
            campaignEx.setIsAddSuccesful(-1);
            fVar.a(campaignEx, aVar.D(), 0);
            com.mbridge.msdk.foundation.a.a.a.a().a(com.mbridge.msdk.a.SHORTCUTS_CTIME, String.valueOf(System.currentTimeMillis()));
            return;
        }
        if (bVar.b(campaignEx.getAppName()) > i) {
            campaignEx.setIsAddSuccesful(1);
            fVar.a(campaignEx, aVar.D(), 0);
            bVar.a(campaignEx, 1, 1);
            campaignEx.setIsAddSuccesful(-1);
            com.mbridge.msdk.foundation.a.a.a.a().a(com.mbridge.msdk.a.SHORTCUTS_CTIME, String.valueOf(System.currentTimeMillis()));
            return;
        }
        campaignEx.setIsAddSuccesful(0);
        fVar.a(campaignEx, aVar.D(), 0);
        com.mbridge.msdk.foundation.a.a.a.a().a(com.mbridge.msdk.a.SHORTCUTS_CTIME, String.valueOf(System.currentTimeMillis()));
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0059 A[Catch: Exception -> 0x0068, TRY_LEAVE, TryCatch #0 {Exception -> 0x0068, blocks: (B:3:0x0002, B:8:0x0010, B:10:0x001a, B:21:0x0059, B:13:0x0025, B:15:0x003f, B:16:0x004b), top: B:28:0x0002 }] */
    /* JADX WARN: Removed duplicated region for block: B:31:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    static void a(b bVar, int i, String str) {
        boolean z;
        try {
            final Context context = bVar.a.get();
            if (context == null) {
                return;
            }
            com.mbridge.msdk.c.a aVarB = str != null ? com.mbridge.msdk.c.b.a().b(str) : null;
            if (aVarB == null) {
                aVarB = com.mbridge.msdk.c.b.a().b();
            }
            if (aVarB != null) {
                z = (System.currentTimeMillis() - (com.mbridge.msdk.foundation.a.a.a.a().b(com.mbridge.msdk.a.SHORTCUTS_CTIME).equals("") ? 0L : Long.parseLong(com.mbridge.msdk.foundation.a.a.a.a().b(com.mbridge.msdk.a.SHORTCUTS_CTIME)))) / 1000 > ((long) aVarB.B());
                if (z) {
                    return;
                }
                new Handler().postDelayed(new Runnable() {
                    @Override
                    public final void run() {
                        final com.mbridge.msdk.c.a aVarB2 = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
                        if (aVarB2 == null) {
                            aVarB2 = com.mbridge.msdk.c.b.a().b();
                        }
                        if (aVarB2.C() == 1) {
                            final a aVarA = a.a();
                            final Context context2 = context;
                            final int i2 = a.c;
                            final com.mbridge.msdk.d.a.a aVar = new com.mbridge.msdk.d.a.a() {
                                @Override
                                public final void a(int i3, String str2) {
                                }

                                @Override
                                public final void a(List<CampaignEx> list) throws Throwable {
                                    if (list == null || list.size() <= 0) {
                                        return;
                                    }
                                    b.this.a(list.get(0), (Activity) null);
                                }

                                @Override
                                public final void a() {
                                    b.this.a(context, aVarB2);
                                }
                            };
                            new com.mbridge.msdk.foundation.same.e.b(context2).b(new com.mbridge.msdk.foundation.same.e.a() {
                                final Context a;
                                final com.mbridge.msdk.d.a.a b;
                                final int c;

                                @Override
                                public final void cancelTask() {
                                }

                                @Override
                                public final void pauseTask(boolean z2) {
                                }

                                1(final Context context22, final com.mbridge.msdk.d.a.a aVar2, final int i22) {
                                    context = context22;
                                    aVar = aVar2;
                                    i = i22;
                                }

                                @Override
                                public final void runTask() {
                                    com.mbridge.msdk.d.b.a aVar2 = new com.mbridge.msdk.d.b.a(context);
                                    d dVar = new d();
                                    com.mbridge.msdk.c.a aVarB3 = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
                                    if (aVarB3 == null) {
                                        aVarB3 = com.mbridge.msdk.c.b.a().b();
                                    }
                                    String strD = aVarB3.D();
                                    if (TextUtils.isEmpty(strD)) {
                                        aVar.a(1, "unit id is empty");
                                        return;
                                    }
                                    dVar.a("app_id", com.mbridge.msdk.foundation.controller.a.f().k());
                                    dVar.a("sign", SameMD5.getMD5(com.mbridge.msdk.foundation.controller.a.f().k() + com.mbridge.msdk.foundation.controller.a.f().l()));
                                    dVar.a(com.tkay.expressad.d.a.b.bS, b.a(context).c());
                                    dVar.a(com.tkay.expressad.d.a.b.bT, b.a(context).a() + "");
                                    dVar.a("jm_l", b.a(context).b());
                                    dVar.a("unit_id", strD);
                                    dVar.a("jm_dp_ads", f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).e(strD));
                                    dVar.a("req_type", i + "");
                                    dVar.a("ad_type", "289");
                                    Looper.prepare();
                                    1 r3 = new com.mbridge.msdk.d.b.b() {
                                        1() {
                                        }

                                        @Override
                                        public final void a(List<com.mbridge.msdk.foundation.same.net.c.b> list, CampaignUnit campaignUnit) {
                                            if (aVar == null) {
                                                return;
                                            }
                                            if (campaignUnit.getJmDo() == a.a) {
                                                aVar.a();
                                            } else {
                                                aVar.a(a.a(a.this, context, campaignUnit.getAds()));
                                            }
                                        }

                                        @Override
                                        public final void a(int i3, String str2, CampaignUnit campaignUnit) {
                                            if (aVar == null) {
                                                return;
                                            }
                                            if (campaignUnit != null && campaignUnit.getJmDo() == a.a) {
                                                aVar.a();
                                            } else {
                                                aVar.a(i3, str2);
                                            }
                                        }
                                    };
                                    r3.setUnitId(strD);
                                    aVar2.choiceV3OrV5BySetting(1, dVar, r3, "");
                                    Looper.loop();
                                }

                                final class 1 extends com.mbridge.msdk.d.b.b {
                                    1() {
                                    }

                                    @Override
                                    public final void a(List<com.mbridge.msdk.foundation.same.net.c.b> list, CampaignUnit campaignUnit) {
                                        if (aVar == null) {
                                            return;
                                        }
                                        if (campaignUnit.getJmDo() == a.a) {
                                            aVar.a();
                                        } else {
                                            aVar.a(a.a(a.this, context, campaignUnit.getAds()));
                                        }
                                    }

                                    @Override
                                    public final void a(int i3, String str2, CampaignUnit campaignUnit) {
                                        if (aVar == null) {
                                            return;
                                        }
                                        if (campaignUnit != null && campaignUnit.getJmDo() == a.a) {
                                            aVar.a();
                                        } else {
                                            aVar.a(i3, str2);
                                        }
                                    }
                                }
                            });
                        }
                    }
                }, i);
                return;
            }
            if (z) {
            }
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }
}
