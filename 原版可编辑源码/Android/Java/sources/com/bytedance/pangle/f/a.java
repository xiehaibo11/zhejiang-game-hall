package com.bytedance.pangle.f;

import com.bytedance.pangle.c;
import com.bytedance.pangle.plugin.PluginManager;
import java.io.File;

public class a extends c.a {
    private static volatile a a;

    public static a b() {
        if (a == null) {
            synchronized (a.class) {
                if (a == null) {
                    a = new a();
                }
            }
        }
        return a;
    }

    @Override
    public final boolean a(String str) {
        return PluginManager.getInstance().checkPluginInstalled(str);
    }

    @Override
    public final int b(String str) {
        return PluginManager.getInstance().getPlugin(str).getVersion();
    }

    @Override
    public final boolean a(String str, String str2) {
        return PluginManager.getInstance().syncInstall(str, new File(str2));
    }
}
