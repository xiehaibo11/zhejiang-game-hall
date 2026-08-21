package com.qihoo360.mobilesafe.parser.manifest;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class XmlHandler extends org.xml.sax.helpers.DefaultHandler {
    private java.util.ArrayList<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> activities;
    private java.util.List<java.lang.String> curActions;
    private java.util.List<java.lang.String> curCategories;
    private com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean curComponent;
    private java.util.List<com.qihoo360.mobilesafe.parser.manifest.bean.DataBean> curDataBeans;
    private android.content.IntentFilter curFilter;
    private java.util.List<android.content.IntentFilter> filters;
    private java.lang.String pkg;
    private java.util.ArrayList<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> receivers;
    private java.util.ArrayList<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> services;

    XmlHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String repairAttrName(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "."
            boolean r0 = r3.startsWith(r0)
            if (r0 != 0) goto L9
            return r3
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.pkg
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r3 = r3.intern()
            return r3
    }

    @Override
    public void endElement(java.lang.String r3, java.lang.String r4, java.lang.String r5) throws org.xml.sax.SAXException {
            r2 = this;
            super.endElement(r3, r4, r5)
            int r3 = r5.hashCode()
            r4 = 3
            r0 = 2
            r1 = 1
            switch(r3) {
                case -1655966961: goto L2c;
                case -1029793847: goto L22;
                case -808719889: goto L18;
                case 1984153269: goto Le;
                default: goto Ld;
            }
        Ld:
            goto L36
        Le:
            java.lang.String r3 = "service"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L36
            r3 = r0
            goto L37
        L18:
            java.lang.String r3 = "receiver"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L36
            r3 = r4
            goto L37
        L22:
            java.lang.String r3 = "intent-filter"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L36
            r3 = 0
            goto L37
        L2c:
            java.lang.String r3 = "activity"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L36
            r3 = r1
            goto L37
        L36:
            r3 = -1
        L37:
            if (r3 == 0) goto L5c
            if (r3 == r1) goto L53
            if (r3 == r0) goto L4a
            if (r3 == r4) goto L41
            goto Lfb
        L41:
            java.util.ArrayList<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> r3 = r2.receivers
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r4 = r2.curComponent
            r3.add(r4)
            goto Lfb
        L4a:
            java.util.ArrayList<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> r3 = r2.services
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r4 = r2.curComponent
            r3.add(r4)
            goto Lfb
        L53:
            java.util.ArrayList<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> r3 = r2.activities
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r4 = r2.curComponent
            r3.add(r4)
            goto Lfb
        L5c:
            java.util.List<java.lang.String> r3 = r2.curActions
            if (r3 == 0) goto L76
            java.util.Iterator r3 = r3.iterator()
        L64:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L76
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            android.content.IntentFilter r5 = r2.curFilter
            r5.addAction(r4)
            goto L64
        L76:
            java.util.List<java.lang.String> r3 = r2.curCategories
            if (r3 == 0) goto L90
            java.util.Iterator r3 = r3.iterator()
        L7e:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L90
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            android.content.IntentFilter r5 = r2.curFilter
            r5.addCategory(r4)
            goto L7e
        L90:
            java.util.List<com.qihoo360.mobilesafe.parser.manifest.bean.DataBean> r3 = r2.curDataBeans
            if (r3 == 0) goto Lf4
            java.util.Iterator r3 = r3.iterator()
        L98:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto Lf4
            java.lang.Object r4 = r3.next()
            com.qihoo360.mobilesafe.parser.manifest.bean.DataBean r4 = (com.qihoo360.mobilesafe.parser.manifest.bean.DataBean) r4
            java.lang.String r5 = r4.scheme
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto Lb3
            android.content.IntentFilter r5 = r2.curFilter
            java.lang.String r0 = r4.scheme
            r5.addDataScheme(r0)
        Lb3:
            java.lang.String r5 = r4.host
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto Lcc
            java.lang.String r5 = r4.port
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto Lcc
            android.content.IntentFilter r5 = r2.curFilter
            java.lang.String r0 = r4.host
            java.lang.String r1 = r4.port
            r5.addDataAuthority(r0, r1)
        Lcc:
            java.lang.String r5 = r4.path
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto Ldf
            android.content.IntentFilter r5 = r2.curFilter
            java.lang.String r0 = r4.path
            int r1 = r4.getPatternMatcherType()
            r5.addDataPath(r0, r1)
        Ldf:
            java.lang.String r5 = r4.mimeType     // Catch: android.content.IntentFilter.MalformedMimeTypeException -> Lef
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: android.content.IntentFilter.MalformedMimeTypeException -> Lef
            if (r5 != 0) goto L98
            android.content.IntentFilter r5 = r2.curFilter     // Catch: android.content.IntentFilter.MalformedMimeTypeException -> Lef
            java.lang.String r4 = r4.mimeType     // Catch: android.content.IntentFilter.MalformedMimeTypeException -> Lef
            r5.addDataType(r4)     // Catch: android.content.IntentFilter.MalformedMimeTypeException -> Lef
            goto L98
        Lef:
            r4 = move-exception
            r4.printStackTrace()
            goto L98
        Lf4:
            r3 = 0
            r2.curActions = r3
            r2.curCategories = r3
            r2.curDataBeans = r3
        Lfb:
            return
    }

    public java.util.List<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> getActivities() {
            r1 = this;
            java.util.ArrayList<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> r0 = r1.activities
            return r0
    }

    public java.util.List<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> getReceivers() {
            r1 = this;
            java.util.ArrayList<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> r0 = r1.receivers
            return r0
    }

    public java.util.List<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> getServices() {
            r1 = this;
            java.util.ArrayList<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> r0 = r1.services
            return r0
    }

    @Override
    public void startElement(java.lang.String r1, java.lang.String r2, java.lang.String r3, org.xml.sax.Attributes r4) throws org.xml.sax.SAXException {
            r0 = this;
            super.startElement(r1, r2, r3, r4)
            int r1 = r3.hashCode()
            switch(r1) {
                case -1655966961: goto L51;
                case -1422950858: goto L47;
                case -1029793847: goto L3d;
                case -808719889: goto L33;
                case 3076010: goto L29;
                case 50511102: goto L1f;
                case 130625071: goto L15;
                case 1984153269: goto Lb;
                default: goto La;
            }
        La:
            goto L5b
        Lb:
            java.lang.String r1 = "service"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L5b
            r1 = 2
            goto L5c
        L15:
            java.lang.String r1 = "manifest"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L5b
            r1 = 0
            goto L5c
        L1f:
            java.lang.String r1 = "category"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L5b
            r1 = 6
            goto L5c
        L29:
            java.lang.String r1 = "data"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L5b
            r1 = 7
            goto L5c
        L33:
            java.lang.String r1 = "receiver"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L5b
            r1 = 3
            goto L5c
        L3d:
            java.lang.String r1 = "intent-filter"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L5b
            r1 = 4
            goto L5c
        L47:
            java.lang.String r1 = "action"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L5b
            r1 = 5
            goto L5c
        L51:
            java.lang.String r1 = "activity"
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L5b
            r1 = 1
            goto L5c
        L5b:
            r1 = -1
        L5c:
            java.lang.String r2 = "android:name"
            switch(r1) {
                case 0: goto L16a;
                case 1: goto L140;
                case 2: goto L116;
                case 3: goto Lec;
                case 4: goto Lde;
                case 5: goto Lc8;
                case 6: goto Lb2;
                case 7: goto L63;
                default: goto L61;
            }
        L61:
            goto L172
        L63:
            java.util.List<com.qihoo360.mobilesafe.parser.manifest.bean.DataBean> r1 = r0.curDataBeans
            if (r1 != 0) goto L6e
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.curDataBeans = r1
        L6e:
            com.qihoo360.mobilesafe.parser.manifest.bean.DataBean r1 = new com.qihoo360.mobilesafe.parser.manifest.bean.DataBean
            r1.<init>()
            java.lang.String r2 = "android:scheme"
            java.lang.String r2 = r4.getValue(r2)
            r1.scheme = r2
            java.lang.String r2 = "android:mimeType"
            java.lang.String r2 = r4.getValue(r2)
            r1.mimeType = r2
            java.lang.String r2 = "android:host"
            java.lang.String r2 = r4.getValue(r2)
            r1.host = r2
            java.lang.String r2 = "android:port"
            java.lang.String r2 = r4.getValue(r2)
            r1.port = r2
            java.lang.String r2 = "android:path"
            java.lang.String r2 = r4.getValue(r2)
            r1.path = r2
            java.lang.String r2 = "android:pathPattern"
            java.lang.String r2 = r4.getValue(r2)
            r1.pathPattern = r2
            java.lang.String r2 = "android:pathPrefix"
            java.lang.String r2 = r4.getValue(r2)
            r1.pathPrefix = r2
            java.util.List<com.qihoo360.mobilesafe.parser.manifest.bean.DataBean> r2 = r0.curDataBeans
            r2.add(r1)
            goto L172
        Lb2:
            java.util.List<java.lang.String> r1 = r0.curCategories
            if (r1 != 0) goto Lbd
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.curCategories = r1
        Lbd:
            java.util.List<java.lang.String> r1 = r0.curCategories
            java.lang.String r2 = r4.getValue(r2)
            r1.add(r2)
            goto L172
        Lc8:
            java.util.List<java.lang.String> r1 = r0.curActions
            if (r1 != 0) goto Ld3
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.curActions = r1
        Ld3:
            java.util.List<java.lang.String> r1 = r0.curActions
            java.lang.String r2 = r4.getValue(r2)
            r1.add(r2)
            goto L172
        Lde:
            android.content.IntentFilter r1 = new android.content.IntentFilter
            r1.<init>()
            r0.curFilter = r1
            java.util.List<android.content.IntentFilter> r2 = r0.filters
            r2.add(r1)
            goto L172
        Lec:
            java.util.ArrayList<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> r1 = r0.receivers
            if (r1 != 0) goto Lf7
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.receivers = r1
        Lf7:
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r1 = new com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean
            r1.<init>()
            r0.curComponent = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.filters = r1
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r3 = r0.curComponent
            r3.intentFilters = r1
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r1 = r0.curComponent
            java.lang.String r2 = r4.getValue(r2)
            java.lang.String r2 = r0.repairAttrName(r2)
            r1.name = r2
            goto L172
        L116:
            java.util.ArrayList<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> r1 = r0.services
            if (r1 != 0) goto L121
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.services = r1
        L121:
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r1 = new com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean
            r1.<init>()
            r0.curComponent = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.filters = r1
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r3 = r0.curComponent
            r3.intentFilters = r1
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r1 = r0.curComponent
            java.lang.String r2 = r4.getValue(r2)
            java.lang.String r2 = r0.repairAttrName(r2)
            r1.name = r2
            goto L172
        L140:
            java.util.ArrayList<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> r1 = r0.activities
            if (r1 != 0) goto L14b
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.activities = r1
        L14b:
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r1 = new com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean
            r1.<init>()
            r0.curComponent = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.filters = r1
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r3 = r0.curComponent
            r3.intentFilters = r1
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r1 = r0.curComponent
            java.lang.String r2 = r4.getValue(r2)
            java.lang.String r2 = r0.repairAttrName(r2)
            r1.name = r2
            goto L172
        L16a:
            java.lang.String r1 = "package"
            java.lang.String r1 = r4.getValue(r1)
            r0.pkg = r1
        L172:
            return
    }
}
