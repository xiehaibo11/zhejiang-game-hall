package com.qihoo360.mobilesafe.parser.manifest;

import android.content.IntentFilter;
import com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean;
import com.qihoo360.mobilesafe.parser.manifest.bean.DataBean;
import java.util.ArrayList;
import java.util.List;
import org.xml.sax.helpers.DefaultHandler;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
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
    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void startElement(java.lang.String r1, java.lang.String r2, java.lang.String r3, org.xml.sax.Attributes r4) throws org.xml.sax.SAXException {
        /*
            Method dump skipped, instruction units count: 426
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.mobilesafe.parser.manifest.XmlHandler.startElement(java.lang.String, java.lang.String, java.lang.String, org.xml.sax.Attributes):void");
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0036  */
    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void endElement(java.lang.String r3, java.lang.String r4, java.lang.String r5) throws org.xml.sax.SAXException {
        /*
            Method dump skipped, instruction units count: 270
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.mobilesafe.parser.manifest.XmlHandler.endElement(java.lang.String, java.lang.String, java.lang.String):void");
    }

    private String repairAttrName(String str) {
        if (!str.startsWith(".")) {
            return str;
        }
        return (this.pkg + str).intern();
    }
}
