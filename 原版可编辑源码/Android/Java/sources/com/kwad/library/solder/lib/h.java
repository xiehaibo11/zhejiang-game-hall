package com.kwad.library.solder.lib;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.library.solder.lib.ext.PluginError;
import com.kwad.sdk.utils.ad;
import com.kwad.sdk.utils.q;
import java.io.File;
import java.io.IOException;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class h extends g {
    public h(String str) {
        super(str);
    }

    private Set<File> a(Context context, File file, File file2) throws IOException {
        String[] list;
        new StringBuilder("Install plugin so libs, destDir = ").append(file2);
        HashSet hashSet = new HashSet();
        if (file2.exists() && (list = file2.list()) != null && list.length > 0) {
            for (String str : list) {
                hashSet.add(new File(file2.getAbsolutePath() + File.separator + str));
            }
            return hashSet;
        }
        File file3 = new File(file2.getParentFile(), this.afy.wI());
        q.X(file3);
        for (String str2 : com.kwad.library.solder.lib.d.c.b(file, file3)) {
            new StringBuilder("extractSoLib, soName = ").append(str2);
            File fileA = com.kwad.library.solder.lib.d.c.a(file3, str2, file2);
            if (fileA != null) {
                hashSet.add(fileA);
            }
        }
        q.R(file3);
        return hashSet;
    }

    private void c(Set<File> set) throws Throwable {
        if (this.afV == null || this.afV.agE.size() <= 0 || set == null) {
            return;
        }
        HashMap<String, String> map = this.afV.agE;
        for (File file : set) {
            String strAb = ad.ab(file);
            String str = map.get(file.getName());
            if (str != null && !TextUtils.equals(strAb, str)) {
                d(set);
                throw new PluginError.LoadError(new Exception(file.getName() + " Md5 check error,find " + strAb + ",except " + str), 4008);
            }
        }
    }

    private static void d(Set<File> set) {
        Iterator<File> it = set.iterator();
        while (it.hasNext()) {
            q.R(it.next());
        }
    }

    private File f(File file) throws IOException {
        File file2 = new File(file.getParentFile(), this.afy.wH());
        q.X(file2);
        return file2;
    }

    @Override
    public void f(Context context, String str) {
        super.f(context, str);
        File file = new File(str);
        try {
            this.afP = f(file);
            try {
                try {
                    c(a(context, file, this.afP));
                    ClassLoader classLoader = (this.afV == null || this.afV.agH == null) ? getClass().getClassLoader() : this.afV.agH;
                    synchronized (Runtime.getRuntime()) {
                        try {
                            com.kwad.library.solder.lib.ext.d.c(classLoader, this.afP);
                        } finally {
                            PluginError.LoadError loadError = new PluginError.LoadError(th, 4004);
                        }
                    }
                } catch (PluginError.LoadError e) {
                    q.R(file);
                    throw e;
                }
            } catch (IOException th) {
                throw new PluginError.LoadError(th, i);
            }
        } catch (IOException e2) {
            throw new PluginError.LoadError(e2, 4003);
        }
    }
}
