package com.qihoo360.replugin.component.provider;

import android.content.ContentProvider;
import android.content.Context;
import android.content.pm.ProviderInfo;
import android.net.Uri;
import android.text.TextUtils;
import android.util.Log;
import com.qihoo360.i.Factory;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.component.ComponentList;
import com.qihoo360.replugin.helper.LogDebug;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginProviderHelper {
    private static final String SCHEME_AND_SSP = "content://";
    private static final String TAG = "PluginProviderHelper";
    private final String mAuthority;
    Map<String, ContentProvider> mProviderAuthorityMap = new HashMap();

    PluginProviderHelper(String str) {
        this.mAuthority = str;
    }

    public PluginUri toPluginUri(Uri uri) {
        if (LogDebug.LOG) {
            Log.i(TAG, "toPluginUri(): Start... Uri=" + uri);
        }
        if (!TextUtils.equals(uri.getAuthority(), this.mAuthority)) {
            if (LogDebug.LOG) {
                Log.e(TAG, "toPluginUri(): Authority error! auth=" + uri.getAuthority());
            }
            return null;
        }
        List<String> pathSegments = uri.getPathSegments();
        if (pathSegments.size() < 2) {
            if (LogDebug.LOG) {
                Log.e(TAG, "toPluginUri(): Less than 2 fragments, size=" + pathSegments.size());
            }
            return null;
        }
        String str = pathSegments.get(0);
        if (!RePlugin.isPluginInstalled(str)) {
            if (LogDebug.LOG) {
                Log.e(TAG, "toPluginUri(): Plugin not exists! pn=" + str);
            }
            return null;
        }
        String strRemoveHostAuthorityAndInfo = removeHostAuthorityAndInfo(uri.toString(), str);
        PluginUri pluginUri = new PluginUri();
        pluginUri.plugin = str;
        pluginUri.transferredUri = Uri.parse(strRemoveHostAuthorityAndInfo);
        if (LogDebug.LOG) {
            Log.i(TAG, "toPluginUri(): End! t-uri=" + pluginUri);
        }
        return pluginUri;
    }

    public ContentProvider getProvider(PluginUri pluginUri) {
        if (LogDebug.LOG) {
            Log.i(TAG, "getProvider(): Start... pu=" + pluginUri);
        }
        String authority = pluginUri.transferredUri.getAuthority();
        ContentProvider contentProvider = this.mProviderAuthorityMap.get(authority);
        if (contentProvider != null) {
            if (LogDebug.LOG) {
                Log.i(TAG, "getProvider(): Exists! Return now. cp=" + contentProvider);
            }
            return contentProvider;
        }
        ContentProvider contentProviderInstallProvider = installProvider(pluginUri, authority);
        if (contentProviderInstallProvider == null) {
            if (!LogDebug.LOG) {
                return null;
            }
            Log.e(TAG, "getProvider(): Install fail!");
            return null;
        }
        this.mProviderAuthorityMap.put(authority, contentProviderInstallProvider);
        if (LogDebug.LOG) {
            Log.i(TAG, "getProvider(): Okay! pu=" + pluginUri + "; cp=" + contentProviderInstallProvider);
        }
        return contentProviderInstallProvider;
    }

    private String removeHostAuthorityAndInfo(String str, String str2) {
        return SCHEME_AND_SSP + str.substring(10 + this.mAuthority.length() + 1 + str2.length() + 1, str.length());
    }

    private ContentProvider installProvider(PluginUri pluginUri, String str) {
        ComponentList componentListQueryPluginComponentList = Factory.queryPluginComponentList(pluginUri.plugin);
        if (componentListQueryPluginComponentList == null) {
            if (LogDebug.LOG) {
                Log.e(TAG, "installProvider(): Fetch Component List Error! auth=" + str);
            }
            return null;
        }
        ProviderInfo providerByAuthority = componentListQueryPluginComponentList.getProviderByAuthority(str);
        if (providerByAuthority == null) {
            if (LogDebug.LOG) {
                Log.e(TAG, "installProvider(): Not register! auth=" + str);
            }
            return null;
        }
        Context contextQueryPluginContext = Factory.queryPluginContext(pluginUri.plugin);
        if (contextQueryPluginContext == null) {
            if (LogDebug.LOG) {
                Log.e(TAG, "installProvider(): Fetch Context Error! auth=" + str);
            }
            return null;
        }
        ClassLoader classLoader = contextQueryPluginContext.getClassLoader();
        if (classLoader == null) {
            if (LogDebug.LOG) {
                Log.e(TAG, "installProvider(): ClassLoader is Null!");
            }
            return null;
        }
        try {
            ContentProvider contentProvider = (ContentProvider) classLoader.loadClass(providerByAuthority.name).newInstance();
            try {
                contentProvider.attachInfo(contextQueryPluginContext, providerByAuthority);
                return contentProvider;
            } catch (Throwable th) {
                if (LogDebug.LOG) {
                    Log.e(TAG, "installProvider(): Attach info fail!", th);
                }
                return null;
            }
        } catch (Throwable th2) {
            if (LogDebug.LOG) {
                Log.e(TAG, "installProvider(): New instance fail!", th2);
            }
            return null;
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static class PluginUri {
        String plugin;
        Uri transferredUri;

        PluginUri() {
        }

        public String toString() {
            return this.transferredUri + " [" + this.plugin + "]";
        }
    }
}
