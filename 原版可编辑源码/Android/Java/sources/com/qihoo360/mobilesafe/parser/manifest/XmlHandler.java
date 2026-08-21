package com.qihoo360.mobilesafe.parser.manifest;

import android.content.IntentFilter;
import android.text.TextUtils;
import com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean;
import com.qihoo360.mobilesafe.parser.manifest.bean.DataBean;
import com.tencent.open.SocialConstants;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.xml.sax.Attributes;
import org.xml.sax.SAXException;
import org.xml.sax.helpers.DefaultHandler;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class XmlHandler extends DefaultHandler {
    private ArrayList<ComponentBean> activities;
    private List<String> curActions;
    private List<String> curCategories;
    private ComponentBean curComponent;
    private List<DataBean> curDataBeans;
    private IntentFilter curFilter;
    private List<IntentFilter> filters;
    private String pkg;
    private ArrayList<ComponentBean> receivers;
    private ArrayList<ComponentBean> services;

    XmlHandler() {
    }

    public List<ComponentBean> getActivities() {
        return this.activities;
    }

    public List<ComponentBean> getServices() {
        return this.services;
    }

    public List<ComponentBean> getReceivers() {
        return this.receivers;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:29:0x005b  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void startElement(String str, String str2, String str3, Attributes attributes) throws SAXException {
        super.startElement(str, str2, str3, attributes);
        switch (str3) {
            case "manifest":
                this.pkg = attributes.getValue("package");
                break;
            case "activity":
                if (this.activities == null) {
                    this.activities = new ArrayList<>();
                }
                this.curComponent = new ComponentBean();
                ArrayList arrayList = new ArrayList();
                this.filters = arrayList;
                this.curComponent.intentFilters = arrayList;
                this.curComponent.name = repairAttrName(attributes.getValue("android:name"));
                break;
            case "service":
                if (this.services == null) {
                    this.services = new ArrayList<>();
                }
                this.curComponent = new ComponentBean();
                ArrayList arrayList2 = new ArrayList();
                this.filters = arrayList2;
                this.curComponent.intentFilters = arrayList2;
                this.curComponent.name = repairAttrName(attributes.getValue("android:name"));
                break;
            case "receiver":
                if (this.receivers == null) {
                    this.receivers = new ArrayList<>();
                }
                this.curComponent = new ComponentBean();
                ArrayList arrayList3 = new ArrayList();
                this.filters = arrayList3;
                this.curComponent.intentFilters = arrayList3;
                this.curComponent.name = repairAttrName(attributes.getValue("android:name"));
                break;
            case "intent-filter":
                IntentFilter intentFilter = new IntentFilter();
                this.curFilter = intentFilter;
                this.filters.add(intentFilter);
                break;
            case "action":
                if (this.curActions == null) {
                    this.curActions = new ArrayList();
                }
                this.curActions.add(attributes.getValue("android:name"));
                break;
            case "category":
                if (this.curCategories == null) {
                    this.curCategories = new ArrayList();
                }
                this.curCategories.add(attributes.getValue("android:name"));
                break;
            case "data":
                if (this.curDataBeans == null) {
                    this.curDataBeans = new ArrayList();
                }
                DataBean dataBean = new DataBean();
                dataBean.scheme = attributes.getValue("android:scheme");
                dataBean.mimeType = attributes.getValue("android:mimeType");
                dataBean.host = attributes.getValue("android:host");
                dataBean.port = attributes.getValue("android:port");
                dataBean.path = attributes.getValue("android:path");
                dataBean.pathPattern = attributes.getValue("android:pathPattern");
                dataBean.pathPrefix = attributes.getValue("android:pathPrefix");
                this.curDataBeans.add(dataBean);
                break;
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0036  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void endElement(String str, String str2, String str3) throws SAXException {
        byte b;
        super.endElement(str, str2, str3);
        switch (str3.hashCode()) {
            case -1655966961:
                b = str3.equals("activity") ? (byte) 1 : (byte) -1;
                break;
            case -1029793847:
                if (str3.equals("intent-filter")) {
                    b = 0;
                    break;
                }
                break;
            case -808719889:
                if (str3.equals(SocialConstants.PARAM_RECEIVER)) {
                    b = 3;
                    break;
                }
                break;
            case 1984153269:
                if (str3.equals("service")) {
                    b = 2;
                    break;
                }
                break;
        }
        if (b != 0) {
            if (b == 1) {
                this.activities.add(this.curComponent);
                return;
            } else if (b == 2) {
                this.services.add(this.curComponent);
                return;
            } else {
                if (b != 3) {
                    return;
                }
                this.receivers.add(this.curComponent);
                return;
            }
        }
        List<String> list = this.curActions;
        if (list != null) {
            Iterator<String> it = list.iterator();
            while (it.hasNext()) {
                this.curFilter.addAction(it.next());
            }
        }
        List<String> list2 = this.curCategories;
        if (list2 != null) {
            Iterator<String> it2 = list2.iterator();
            while (it2.hasNext()) {
                this.curFilter.addCategory(it2.next());
            }
        }
        List<DataBean> list3 = this.curDataBeans;
        if (list3 != null) {
            for (DataBean dataBean : list3) {
                if (!TextUtils.isEmpty(dataBean.scheme)) {
                    this.curFilter.addDataScheme(dataBean.scheme);
                }
                if (!TextUtils.isEmpty(dataBean.host) && !TextUtils.isEmpty(dataBean.port)) {
                    this.curFilter.addDataAuthority(dataBean.host, dataBean.port);
                }
                if (!TextUtils.isEmpty(dataBean.path)) {
                    this.curFilter.addDataPath(dataBean.path, dataBean.getPatternMatcherType());
                }
                try {
                    if (!TextUtils.isEmpty(dataBean.mimeType)) {
                        this.curFilter.addDataType(dataBean.mimeType);
                    }
                } catch (IntentFilter.MalformedMimeTypeException e) {
                    e.printStackTrace();
                }
            }
        }
        this.curActions = null;
        this.curCategories = null;
        this.curDataBeans = null;
    }

    private String repairAttrName(String str) {
        if (!str.startsWith(".")) {
            return str;
        }
        return (this.pkg + str).intern();
    }
}
