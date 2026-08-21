package com.qihoo360.mobilesafe.parser.manifest;

import android.content.IntentFilter;
import android.os.PatternMatcher;
import com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import com.xiaomi.mipush.sdk.Constants;
import java.io.StringReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import javax.xml.parsers.SAXParserFactory;
import org.xml.sax.InputSource;
import org.xml.sax.XMLReader;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public enum ManifestParser {
    INS;

    public static final String TAG = "ms-parser";
    private Map<String, Map<String, List<IntentFilter>>> mPluginActivityInfoMap = new HashMap();
    private Map<String, Map<String, List<IntentFilter>>> mPluginServiceInfoMap = new HashMap();
    private Map<String, Map<String, List<IntentFilter>>> mPluginReceiverInfoMap = new HashMap();
    private Map<String, Set<String>> mActivityActionPluginsMap = new HashMap();
    private Map<String, Set<String>> mServiceActionPluginsMap = new HashMap();

    ManifestParser() {
    }

    public void parse(PluginInfo pluginInfo, String str) {
        XmlHandler manifest = parseManifest(str);
        HashMap map = new HashMap();
        putToMap(this.mPluginActivityInfoMap, map, pluginInfo);
        parseComponent(pluginInfo.getName(), map, manifest.getActivities(), this.mActivityActionPluginsMap);
        HashMap map2 = new HashMap();
        putToMap(this.mPluginServiceInfoMap, map2, pluginInfo);
        parseComponent(pluginInfo.getName(), map2, manifest.getServices(), this.mServiceActionPluginsMap);
        HashMap map3 = new HashMap();
        putToMap(this.mPluginReceiverInfoMap, map3, pluginInfo);
        parseComponent(pluginInfo.getName(), map3, manifest.getReceivers(), null);
        if (LogDebug.LOG) {
            printFilters(map, map2, map3);
        }
    }

    private void putToMap(Map<String, Map<String, List<IntentFilter>>> map, Map<String, List<IntentFilter>> map2, PluginInfo pluginInfo) {
        map.put(pluginInfo.getPackageName(), map2);
        map.put(pluginInfo.getAlias(), map2);
    }

    private void parseComponent(String str, Map<String, List<IntentFilter>> map, List<ComponentBean> list, Map<String, Set<String>> map2) {
        if (list != null) {
            for (ComponentBean componentBean : list) {
                doFillFilters(componentBean, map);
                doFillActionPlugins(str, componentBean, map2);
            }
        }
    }

    private void doFillFilters(ComponentBean componentBean, Map<String, List<IntentFilter>> map) {
        String str = componentBean.name;
        List<IntentFilter> arrayList = map.get(str);
        if (arrayList == null) {
            arrayList = new ArrayList<>();
            map.put(str, arrayList);
        }
        List<IntentFilter> list = componentBean.intentFilters;
        if (list != null) {
            arrayList.addAll(list);
        }
    }

    private void doFillActionPlugins(String str, ComponentBean componentBean, Map<String, Set<String>> map) {
        if (map == null || componentBean.intentFilters == null) {
            return;
        }
        Iterator<IntentFilter> it = componentBean.intentFilters.iterator();
        while (it.hasNext()) {
            Iterator<String> itActionsIterator = it.next().actionsIterator();
            while (itActionsIterator.hasNext()) {
                String next = itActionsIterator.next();
                Set<String> hashSet = map.get(next);
                if (hashSet == null) {
                    hashSet = new HashSet<>();
                    map.put(next, hashSet);
                }
                hashSet.add(str);
            }
        }
    }

    public Set<String> getPluginsByActionWhenStartActivity(String str) {
        return this.mActivityActionPluginsMap.get(str);
    }

    public Set<String> getPluginsByActionWhenStartService(String str) {
        return this.mServiceActionPluginsMap.get(str);
    }

    public Map<String, List<IntentFilter>> getActivityFilterMap(String str) {
        return this.mPluginActivityInfoMap.get(str);
    }

    public Map<String, List<IntentFilter>> getServiceFilterMap(String str) {
        return this.mPluginServiceInfoMap.get(str);
    }

    public Map<String, List<IntentFilter>> getReceiverFilterMap(String str) {
        return this.mPluginReceiverInfoMap.get(str);
    }

    private XmlHandler parseManifest(String str) {
        XMLReader xMLReader;
        XmlHandler xmlHandler = new XmlHandler();
        StringReader stringReader = null;
        try {
            xMLReader = SAXParserFactory.newInstance().newSAXParser().getXMLReader();
            try {
                xMLReader.setContentHandler(xmlHandler);
            } catch (Throwable th) {
                th = th;
                th.printStackTrace();
            }
        } catch (Throwable th2) {
            th = th2;
            xMLReader = null;
        }
        if (xMLReader != null) {
            try {
                StringReader stringReader2 = new StringReader(str);
                try {
                    xMLReader.parse(new InputSource(stringReader2));
                    stringReader2.close();
                } catch (Throwable th3) {
                    th = th3;
                    stringReader = stringReader2;
                    try {
                        th.printStackTrace();
                    } finally {
                        if (stringReader != null) {
                            stringReader.close();
                        }
                    }
                }
            } catch (Throwable th4) {
                th = th4;
            }
        }
        return xmlHandler;
    }

    private void printFilters(Map<String, List<IntentFilter>> map, Map<String, List<IntentFilter>> map2, Map<String, List<IntentFilter>> map3) {
        if (!map.entrySet().isEmpty()) {
            LogDebug.d(TAG, "\n打印 Activity - IntentFilter");
        }
        for (Map.Entry<String, List<IntentFilter>> entry : map.entrySet()) {
            LogDebug.d(TAG, "key:" + entry.getKey() + "; val:" + intentFilterStr(entry.getValue()));
        }
        if (!map2.entrySet().isEmpty()) {
            LogDebug.d(TAG, "\n打印 Service - IntentFilter");
        }
        for (Map.Entry<String, List<IntentFilter>> entry2 : map2.entrySet()) {
            LogDebug.d(TAG, "key:" + entry2.getKey() + "; val:" + intentFilterStr(entry2.getValue()));
        }
        if (!map3.entrySet().isEmpty()) {
            LogDebug.d(TAG, "\n打印 Receiver - IntentFilter");
        }
        for (Map.Entry<String, List<IntentFilter>> entry3 : map3.entrySet()) {
            LogDebug.d(TAG, "key:" + entry3.getKey() + "; val:" + intentFilterStr(entry3.getValue()));
        }
    }

    private String intentFilterStr(List<IntentFilter> list) {
        StringBuilder sb = new StringBuilder();
        sb.append("[");
        for (IntentFilter intentFilter : list) {
            sb.append("{");
            int iCountActions = intentFilter.countActions();
            if (iCountActions > 0) {
                sb.append("action:{");
            }
            while (iCountActions > 0) {
                sb.append(intentFilter.getAction(iCountActions - 1));
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                iCountActions--;
                if (iCountActions == 0) {
                    sb.append("}");
                }
            }
            int iCountCategories = intentFilter.countCategories();
            if (iCountCategories > 0) {
                sb.append(", category:{");
            }
            while (iCountCategories > 0) {
                sb.append(intentFilter.getCategory(iCountCategories - 1));
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                iCountCategories--;
                if (iCountCategories == 0) {
                    sb.append("}");
                }
            }
            int iCountDataSchemes = intentFilter.countDataSchemes();
            if (iCountDataSchemes > 0) {
                sb.append(", data-scheme:{");
            }
            while (iCountDataSchemes > 0) {
                sb.append(intentFilter.getDataScheme(iCountDataSchemes - 1));
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                iCountDataSchemes--;
                if (iCountDataSchemes == 0) {
                    sb.append("}");
                }
            }
            int iCountDataPaths = intentFilter.countDataPaths();
            if (iCountDataPaths > 0) {
                sb.append(", data-path:{");
            }
            while (iCountDataPaths > 0) {
                PatternMatcher dataPath = intentFilter.getDataPath(iCountDataPaths - 1);
                sb.append(dataPath.getPath());
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                sb.append(dataPath.getType());
                iCountDataPaths--;
                if (iCountDataPaths == 0) {
                    sb.append("}");
                }
            }
            int iCountDataTypes = intentFilter.countDataTypes();
            if (iCountDataTypes > 0) {
                sb.append(", data-type:{");
            }
            while (iCountDataTypes > 0) {
                sb.append(intentFilter.getDataType(iCountDataTypes - 1));
                sb.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                iCountDataTypes--;
                if (iCountDataTypes == 0) {
                    sb.append("}");
                }
            }
            sb.append("}, ");
        }
        sb.append("]");
        return sb.toString();
    }
}
