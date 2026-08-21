package com.qihoo360.mobilesafe.parser.manifest;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public enum ManifestParser extends java.lang.Enum<com.qihoo360.mobilesafe.parser.manifest.ManifestParser> {
    private static final com.qihoo360.mobilesafe.parser.manifest.ManifestParser[] $VALUES = null;
    public static final com.qihoo360.mobilesafe.parser.manifest.ManifestParser INS = null;
    public static final java.lang.String TAG = "ms-parser";
    private java.util.Map<java.lang.String, java.util.Set<java.lang.String>> mActivityActionPluginsMap;
    private java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>>> mPluginActivityInfoMap;
    private java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>>> mPluginReceiverInfoMap;
    private java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>>> mPluginServiceInfoMap;
    private java.util.Map<java.lang.String, java.util.Set<java.lang.String>> mServiceActionPluginsMap;

    static {
            com.qihoo360.mobilesafe.parser.manifest.ManifestParser r0 = new com.qihoo360.mobilesafe.parser.manifest.ManifestParser
            r1 = 0
            java.lang.String r2 = "INS"
            r0.<init>(r2, r1)
            com.qihoo360.mobilesafe.parser.manifest.ManifestParser.INS = r0
            r2 = 1
            com.qihoo360.mobilesafe.parser.manifest.ManifestParser[] r2 = new com.qihoo360.mobilesafe.parser.manifest.ManifestParser[r2]
            r2[r1] = r0
            com.qihoo360.mobilesafe.parser.manifest.ManifestParser.$VALUES = r2
            return
    }

    ManifestParser(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.mPluginActivityInfoMap = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.mPluginServiceInfoMap = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.mPluginReceiverInfoMap = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.mActivityActionPluginsMap = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.mServiceActionPluginsMap = r1
            return
    }

    private void doFillActionPlugins(java.lang.String r4, com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r5, java.util.Map<java.lang.String, java.util.Set<java.lang.String>> r6) {
            r3 = this;
            if (r6 == 0) goto L3d
            java.util.List<android.content.IntentFilter> r0 = r5.intentFilters
            if (r0 != 0) goto L7
            goto L3d
        L7:
            java.util.List<android.content.IntentFilter> r5 = r5.intentFilters
            java.util.Iterator r5 = r5.iterator()
        Ld:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L3d
            java.lang.Object r0 = r5.next()
            android.content.IntentFilter r0 = (android.content.IntentFilter) r0
            java.util.Iterator r0 = r0.actionsIterator()
        L1d:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Ld
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r2 = r6.get(r1)
            java.util.Set r2 = (java.util.Set) r2
            if (r2 != 0) goto L39
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            r6.put(r1, r2)
        L39:
            r2.add(r4)
            goto L1d
        L3d:
            return
    }

    private void doFillFilters(com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r3, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>> r4) {
            r2 = this;
            java.lang.String r0 = r3.name
            java.lang.Object r1 = r4.get(r0)
            java.util.List r1 = (java.util.List) r1
            if (r1 != 0) goto L12
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r4.put(r0, r1)
        L12:
            java.util.List<android.content.IntentFilter> r3 = r3.intentFilters
            if (r3 == 0) goto L19
            r1.addAll(r3)
        L19:
            return
    }

    private java.lang.String intentFilterStr(java.util.List<android.content.IntentFilter> r8) {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "["
            r0.append(r1)
            java.util.Iterator r8 = r8.iterator()
        Le:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto Lda
            java.lang.Object r1 = r8.next()
            android.content.IntentFilter r1 = (android.content.IntentFilter) r1
            java.lang.String r2 = "{"
            r0.append(r2)
            int r2 = r1.countActions()
            if (r2 <= 0) goto L2a
            java.lang.String r3 = "action:{"
            r0.append(r3)
        L2a:
            java.lang.String r3 = "}"
            java.lang.String r4 = ","
            if (r2 <= 0) goto L44
            int r5 = r2 + (-1)
            java.lang.String r5 = r1.getAction(r5)
            r0.append(r5)
            r0.append(r4)
            int r2 = r2 + (-1)
            if (r2 != 0) goto L2a
            r0.append(r3)
            goto L2a
        L44:
            int r2 = r1.countCategories()
            if (r2 <= 0) goto L4f
            java.lang.String r5 = ", category:{"
            r0.append(r5)
        L4f:
            if (r2 <= 0) goto L65
            int r5 = r2 + (-1)
            java.lang.String r5 = r1.getCategory(r5)
            r0.append(r5)
            r0.append(r4)
            int r2 = r2 + (-1)
            if (r2 != 0) goto L4f
            r0.append(r3)
            goto L4f
        L65:
            int r2 = r1.countDataSchemes()
            if (r2 <= 0) goto L70
            java.lang.String r5 = ", data-scheme:{"
            r0.append(r5)
        L70:
            if (r2 <= 0) goto L86
            int r5 = r2 + (-1)
            java.lang.String r5 = r1.getDataScheme(r5)
            r0.append(r5)
            r0.append(r4)
            int r2 = r2 + (-1)
            if (r2 != 0) goto L70
            r0.append(r3)
            goto L70
        L86:
            int r2 = r1.countDataPaths()
            if (r2 <= 0) goto L91
            java.lang.String r5 = ", data-path:{"
            r0.append(r5)
        L91:
            if (r2 <= 0) goto Lb2
            int r5 = r2 + (-1)
            android.os.PatternMatcher r5 = r1.getDataPath(r5)
            java.lang.String r6 = r5.getPath()
            r0.append(r6)
            r0.append(r4)
            int r5 = r5.getType()
            r0.append(r5)
            int r2 = r2 + (-1)
            if (r2 != 0) goto L91
            r0.append(r3)
            goto L91
        Lb2:
            int r2 = r1.countDataTypes()
            if (r2 <= 0) goto Lbd
            java.lang.String r5 = ", data-type:{"
            r0.append(r5)
        Lbd:
            if (r2 <= 0) goto Ld3
            int r5 = r2 + (-1)
            java.lang.String r5 = r1.getDataType(r5)
            r0.append(r5)
            r0.append(r4)
            int r2 = r2 + (-1)
            if (r2 != 0) goto Lbd
            r0.append(r3)
            goto Lbd
        Ld3:
            java.lang.String r1 = "}, "
            r0.append(r1)
            goto Le
        Lda:
            java.lang.String r8 = "]"
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            return r8
    }

    private void parseComponent(java.lang.String r2, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>> r3, java.util.List<com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean> r4, java.util.Map<java.lang.String, java.util.Set<java.lang.String>> r5) {
            r1 = this;
            if (r4 == 0) goto L19
            java.util.Iterator r4 = r4.iterator()
        L6:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L19
            java.lang.Object r0 = r4.next()
            com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean r0 = (com.qihoo360.mobilesafe.parser.manifest.bean.ComponentBean) r0
            r1.doFillFilters(r0, r3)
            r1.doFillActionPlugins(r2, r0, r5)
            goto L6
        L19:
            return
    }

    private com.qihoo360.mobilesafe.parser.manifest.XmlHandler parseManifest(java.lang.String r5) {
            r4 = this;
            com.qihoo360.mobilesafe.parser.manifest.XmlHandler r0 = new com.qihoo360.mobilesafe.parser.manifest.XmlHandler
            r0.<init>()
            r1 = 0
            javax.xml.parsers.SAXParserFactory r2 = javax.xml.parsers.SAXParserFactory.newInstance()     // Catch: java.lang.Throwable -> L18
            javax.xml.parsers.SAXParser r2 = r2.newSAXParser()     // Catch: java.lang.Throwable -> L18
            org.xml.sax.XMLReader r2 = r2.getXMLReader()     // Catch: java.lang.Throwable -> L18
            r2.setContentHandler(r0)     // Catch: java.lang.Throwable -> L16
            goto L1d
        L16:
            r3 = move-exception
            goto L1a
        L18:
            r3 = move-exception
            r2 = r1
        L1a:
            r3.printStackTrace()
        L1d:
            if (r2 == 0) goto L44
            java.io.StringReader r3 = new java.io.StringReader     // Catch: java.lang.Throwable -> L33
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L33
            org.xml.sax.InputSource r5 = new org.xml.sax.InputSource     // Catch: java.lang.Throwable -> L30
            r5.<init>(r3)     // Catch: java.lang.Throwable -> L30
            r2.parse(r5)     // Catch: java.lang.Throwable -> L30
            r3.close()
            goto L44
        L30:
            r5 = move-exception
            r1 = r3
            goto L34
        L33:
            r5 = move-exception
        L34:
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L44
            r1.close()
            goto L44
        L3d:
            r5 = move-exception
            if (r1 == 0) goto L43
            r1.close()
        L43:
            throw r5
        L44:
            return r0
    }

    private void printFilters(java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>> r7, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>> r8, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>> r9) {
            r6 = this;
            java.util.Set r0 = r7.entrySet()
            boolean r0 = r0.isEmpty()
            java.lang.String r1 = "ms-parser"
            if (r0 != 0) goto L11
            java.lang.String r0 = "\n打印 Activity - IntentFilter"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L11:
            java.util.Set r7 = r7.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L19:
            boolean r0 = r7.hasNext()
            java.lang.String r2 = "; val:"
            java.lang.String r3 = "key:"
            if (r0 == 0) goto L52
            java.lang.Object r0 = r7.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r4 = r0.getValue()
            java.util.List r4 = (java.util.List) r4
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r3)
            java.lang.Object r0 = r0.getKey()
            java.lang.String r0 = (java.lang.String) r0
            r5.append(r0)
            r5.append(r2)
            java.lang.String r0 = r6.intentFilterStr(r4)
            r5.append(r0)
            java.lang.String r0 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
            goto L19
        L52:
            java.util.Set r7 = r8.entrySet()
            boolean r7 = r7.isEmpty()
            if (r7 != 0) goto L61
            java.lang.String r7 = "\n打印 Service - IntentFilter"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r7)
        L61:
            java.util.Set r7 = r8.entrySet()
            java.util.Iterator r7 = r7.iterator()
        L69:
            boolean r8 = r7.hasNext()
            if (r8 == 0) goto L9e
            java.lang.Object r8 = r7.next()
            java.util.Map$Entry r8 = (java.util.Map.Entry) r8
            java.lang.Object r0 = r8.getValue()
            java.util.List r0 = (java.util.List) r0
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.Object r8 = r8.getKey()
            java.lang.String r8 = (java.lang.String) r8
            r4.append(r8)
            r4.append(r2)
            java.lang.String r8 = r6.intentFilterStr(r0)
            r4.append(r8)
            java.lang.String r8 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r8)
            goto L69
        L9e:
            java.util.Set r7 = r9.entrySet()
            boolean r7 = r7.isEmpty()
            if (r7 != 0) goto Lad
            java.lang.String r7 = "\n打印 Receiver - IntentFilter"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r7)
        Lad:
            java.util.Set r7 = r9.entrySet()
            java.util.Iterator r7 = r7.iterator()
        Lb5:
            boolean r8 = r7.hasNext()
            if (r8 == 0) goto Lea
            java.lang.Object r8 = r7.next()
            java.util.Map$Entry r8 = (java.util.Map.Entry) r8
            java.lang.Object r9 = r8.getValue()
            java.util.List r9 = (java.util.List) r9
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.Object r8 = r8.getKey()
            java.lang.String r8 = (java.lang.String) r8
            r0.append(r8)
            r0.append(r2)
            java.lang.String r8 = r6.intentFilterStr(r9)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r8)
            goto Lb5
        Lea:
            return
    }

    private void putToMap(java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>>> r2, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>> r3, com.qihoo360.replugin.model.PluginInfo r4) {
            r1 = this;
            java.lang.String r0 = r4.getPackageName()
            r2.put(r0, r3)
            java.lang.String r4 = r4.getAlias()
            r2.put(r4, r3)
            return
    }

    public static com.qihoo360.mobilesafe.parser.manifest.ManifestParser valueOf(java.lang.String r1) {
            java.lang.Class<com.qihoo360.mobilesafe.parser.manifest.ManifestParser> r0 = com.qihoo360.mobilesafe.parser.manifest.ManifestParser.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.qihoo360.mobilesafe.parser.manifest.ManifestParser r1 = (com.qihoo360.mobilesafe.parser.manifest.ManifestParser) r1
            return r1
    }

    public static com.qihoo360.mobilesafe.parser.manifest.ManifestParser[] values() {
            com.qihoo360.mobilesafe.parser.manifest.ManifestParser[] r0 = com.qihoo360.mobilesafe.parser.manifest.ManifestParser.$VALUES
            java.lang.Object r0 = r0.clone()
            com.qihoo360.mobilesafe.parser.manifest.ManifestParser[] r0 = (com.qihoo360.mobilesafe.parser.manifest.ManifestParser[]) r0
            return r0
    }

    public java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>> getActivityFilterMap(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>>> r0 = r1.mPluginActivityInfoMap
            java.lang.Object r2 = r0.get(r2)
            java.util.Map r2 = (java.util.Map) r2
            return r2
    }

    public java.util.Set<java.lang.String> getPluginsByActionWhenStartActivity(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.Set<java.lang.String>> r0 = r1.mActivityActionPluginsMap
            java.lang.Object r2 = r0.get(r2)
            java.util.Set r2 = (java.util.Set) r2
            return r2
    }

    public java.util.Set<java.lang.String> getPluginsByActionWhenStartService(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.Set<java.lang.String>> r0 = r1.mServiceActionPluginsMap
            java.lang.Object r2 = r0.get(r2)
            java.util.Set r2 = (java.util.Set) r2
            return r2
    }

    public java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>> getReceiverFilterMap(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>>> r0 = r1.mPluginReceiverInfoMap
            java.lang.Object r2 = r0.get(r2)
            java.util.Map r2 = (java.util.Map) r2
            return r2
    }

    public java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>> getServiceFilterMap(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>>> r0 = r1.mPluginServiceInfoMap
            java.lang.Object r2 = r0.get(r2)
            java.util.Map r2 = (java.util.Map) r2
            return r2
    }

    public void parse(com.qihoo360.replugin.model.PluginInfo r6, java.lang.String r7) {
            r5 = this;
            com.qihoo360.mobilesafe.parser.manifest.XmlHandler r7 = r5.parseManifest(r7)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>>> r1 = r5.mPluginActivityInfoMap
            r5.putToMap(r1, r0, r6)
            java.lang.String r1 = r6.getName()
            java.util.List r2 = r7.getActivities()
            java.util.Map<java.lang.String, java.util.Set<java.lang.String>> r3 = r5.mActivityActionPluginsMap
            r5.parseComponent(r1, r0, r2, r3)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>>> r2 = r5.mPluginServiceInfoMap
            r5.putToMap(r2, r1, r6)
            java.lang.String r2 = r6.getName()
            java.util.List r3 = r7.getServices()
            java.util.Map<java.lang.String, java.util.Set<java.lang.String>> r4 = r5.mServiceActionPluginsMap
            r5.parseComponent(r2, r1, r3, r4)
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<android.content.IntentFilter>>> r3 = r5.mPluginReceiverInfoMap
            r5.putToMap(r3, r2, r6)
            java.lang.String r6 = r6.getName()
            java.util.List r7 = r7.getReceivers()
            r3 = 0
            r5.parseComponent(r6, r2, r7, r3)
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L4f
            r5.printFilters(r0, r1, r2)
        L4f:
            return
    }
}
