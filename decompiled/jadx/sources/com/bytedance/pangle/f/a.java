package com.bytedance.pangle.f;

import com.bytedance.pangle.c;
import com.bytedance.pangle.plugin.PluginManager;
import java.io.File;

/* JADX INFO: loaded from: classes.dex */
public class a extends c.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile a f1525a;

    public static a b() {
        if (f1525a == null) {
            synchronized (a.class) {
                if (f1525a == null) {
                    f1525a = new a();
                }
            }
        }
        return f1525a;
    }

    @Override // com.bytedance.pangle.c
    public final boolean a(String str) {
        return PluginManager.getInstance().checkPluginInstalled(str);
    }

    @Override // com.bytedance.pangle.c
    public final int b(String str) {
        return PluginManager.getInstance().getPlugin(str).getVersion();
    }

    @Override // com.bytedance.pangle.c
    public final boolean a(String str, String str2) {
        return PluginManager.getInstance().syncInstall(str, new File(str2));
    }
}
