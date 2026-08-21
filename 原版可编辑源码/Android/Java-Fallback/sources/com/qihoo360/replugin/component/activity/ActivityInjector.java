package com.qihoo360.replugin.component.activity;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ActivityInjector {
    public static final java.lang.String TAG = "activity-injector";

    public ActivityInjector() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.graphics.Bitmap getIcon(android.app.Activity r1, android.content.pm.ActivityInfo r2) {
            android.content.res.Resources r1 = r1.getResources()
            int r0 = r2.icon
            android.graphics.drawable.Drawable r0 = getIconById(r1, r0)
            if (r0 != 0) goto L14
            android.content.pm.ApplicationInfo r2 = r2.applicationInfo
            int r2 = r2.icon
            android.graphics.drawable.Drawable r0 = getIconById(r1, r2)
        L14:
            if (r0 != 0) goto L28
            android.content.Context r1 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            android.content.res.Resources r2 = r1.getResources()
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()
            int r1 = r1.icon
            android.graphics.drawable.Drawable r0 = getIconById(r2, r1)
        L28:
            r1 = 0
            boolean r2 = r0 instanceof android.graphics.drawable.BitmapDrawable
            if (r2 == 0) goto L33
            android.graphics.drawable.BitmapDrawable r0 = (android.graphics.drawable.BitmapDrawable) r0
            android.graphics.Bitmap r1 = r0.getBitmap()
        L33:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L4d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "bitmap = "
            r2.append(r0)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "activity-injector"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r2)
        L4d:
            return r1
    }

    private static android.graphics.drawable.Drawable getIconById(android.content.res.Resources r1, int r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)     // Catch: android.content.res.Resources.NotFoundException -> L9
            return r1
        L9:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    private static java.lang.String getLabel(android.app.Activity r2, android.content.pm.ActivityInfo r3) {
            android.content.res.Resources r2 = r2.getResources()
            int r0 = r3.labelRes
            java.lang.String r0 = getLabelById(r2, r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L18
            android.content.pm.ApplicationInfo r3 = r3.applicationInfo
            int r3 = r3.labelRes
            java.lang.String r0 = getLabelById(r2, r3)
        L18:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L30
            android.content.Context r2 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            android.content.res.Resources r3 = r2.getResources()
            android.content.pm.ApplicationInfo r2 = r2.getApplicationInfo()
            int r2 = r2.labelRes
            java.lang.String r0 = getLabelById(r3, r2)
        L30:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L4a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "label = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "activity-injector"
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L4a:
            return r0
    }

    private static java.lang.String getLabelById(android.content.res.Resources r1, int r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r1.getString(r2)     // Catch: android.content.res.Resources.NotFoundException -> L9
            return r1
        L9:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    private static boolean inject(android.app.Activity r1, android.content.pm.ActivityInfo r2, int r3) {
            r0 = 4
            if (r3 < r0) goto L6
            injectTaskDescription(r1, r2)
        L6:
            r1 = 1
            return r1
    }

    public static boolean inject(android.app.Activity r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            com.qihoo360.replugin.model.PluginInfo r1 = com.qihoo360.loader2.MP.getPlugin(r3, r0)
            if (r1 != 0) goto L8
            return r0
        L8:
            com.qihoo360.replugin.component.ComponentList r3 = com.qihoo360.replugin.RePlugin.fetchComponentList(r3)
            if (r3 != 0) goto Lf
            return r0
        Lf:
            android.content.pm.ActivityInfo r3 = r3.getActivity(r4)
            if (r3 == 0) goto L20
            int r4 = r1.getFrameworkVersion()
            boolean r2 = inject(r2, r3, r4)
            if (r2 == 0) goto L20
            r0 = 1
        L20:
            return r0
    }

    private static void injectTaskDescription(android.app.Activity r3, android.content.pm.ActivityInfo r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L7
            return
        L7:
            if (r3 == 0) goto L71
            if (r4 != 0) goto Lc
            goto L71
        Lc:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "activity-injector"
            if (r0 == 0) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "activity = "
            r0.append(r2)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "ai = "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L3a:
            java.lang.String r0 = getLabel(r3, r4)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L45
            return
        L45:
            android.graphics.Bitmap r4 = getIcon(r3, r4)
            if (r4 == 0) goto L51
            android.app.ActivityManager$TaskDescription r2 = new android.app.ActivityManager$TaskDescription
            r2.<init>(r0, r4)
            goto L56
        L51:
            android.app.ActivityManager$TaskDescription r2 = new android.app.ActivityManager$TaskDescription
            r2.<init>(r0)
        L56:
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L6e
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "td = "
            r4.append(r0)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r4)
        L6e:
            r3.setTaskDescription(r2)
        L71:
            return
    }
}
