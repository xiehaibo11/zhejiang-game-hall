package com.qihoo360.replugin.ext.parser.parser;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class XmlNamespaces {
    private java.util.List<com.qihoo360.replugin.ext.parser.parser.XmlNamespaces.XmlNamespace> namespaces;
    private java.util.List<com.qihoo360.replugin.ext.parser.parser.XmlNamespaces.XmlNamespace> newNamespaces;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static class 1 {
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class XmlNamespace {
        private java.lang.String prefix;
        private java.lang.String uri;

        private XmlNamespace(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.prefix = r1
                r0.uri = r2
                return
        }

        XmlNamespace(java.lang.String r1, java.lang.String r2, com.qihoo360.replugin.ext.parser.parser.XmlNamespaces.1 r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        static java.lang.String access$100(com.qihoo360.replugin.ext.parser.parser.XmlNamespaces.XmlNamespace r0) {
                java.lang.String r0 = r0.uri
                return r0
        }

        static java.lang.String access$200(com.qihoo360.replugin.ext.parser.parser.XmlNamespaces.XmlNamespace r0) {
                java.lang.String r0 = r0.prefix
                return r0
        }

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L41
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L41
            L12:
                com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace r5 = (com.qihoo360.replugin.ext.parser.parser.XmlNamespaces.XmlNamespace) r5
                java.lang.String r2 = r4.prefix
                if (r2 != 0) goto L1d
                java.lang.String r2 = r5.prefix
                if (r2 == 0) goto L1d
                return r1
            L1d:
                java.lang.String r2 = r4.uri
                if (r2 != 0) goto L26
                java.lang.String r2 = r5.uri
                if (r2 == 0) goto L26
                return r1
            L26:
                java.lang.String r2 = r4.prefix
                if (r2 == 0) goto L33
                java.lang.String r3 = r5.prefix
                boolean r2 = r2.equals(r3)
                if (r2 != 0) goto L33
                return r1
            L33:
                java.lang.String r2 = r4.uri
                if (r2 == 0) goto L40
                java.lang.String r5 = r5.uri
                boolean r5 = r2.equals(r5)
                if (r5 != 0) goto L40
                return r1
            L40:
                return r0
            L41:
                return r1
        }

        public java.lang.String getPrefix() {
                r1 = this;
                java.lang.String r0 = r1.prefix
                return r0
        }

        public java.lang.String getUri() {
                r1 = this;
                java.lang.String r0 = r1.uri
                return r0
        }

        public int hashCode() {
                r2 = this;
                java.lang.String r0 = r2.prefix
                int r0 = r0.hashCode()
                int r0 = r0 * 31
                java.lang.String r1 = r2.uri
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                return r0
        }
    }

    public XmlNamespaces() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.namespaces = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.newNamespaces = r0
            return
    }

    public void addNamespace(com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceStartTag r4) {
            r3 = this;
            com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace r0 = new com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace
            java.lang.String r1 = r4.getPrefix()
            java.lang.String r4 = r4.getUri()
            r2 = 0
            r0.<init>(r1, r4, r2)
            java.util.List<com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace> r4 = r3.namespaces
            r4.add(r0)
            java.util.List<com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace> r4 = r3.newNamespaces
            r4.add(r0)
            return
    }

    public java.util.List<com.qihoo360.replugin.ext.parser.parser.XmlNamespaces.XmlNamespace> consumeNameSpaces() {
            r2 = this;
            java.util.List<com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace> r0 = r2.newNamespaces
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L18
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List<com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace> r1 = r2.newNamespaces
            r0.addAll(r1)
            java.util.List<com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace> r1 = r2.newNamespaces
            r1.clear()
            return r0
        L18:
            java.util.List r0 = java.util.Collections.emptyList()
            return r0
    }

    public java.lang.String getPrefixViaUri(java.lang.String r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.util.List<com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace> r1 = r4.namespaces
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L25
            java.lang.Object r2 = r1.next()
            com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace r2 = (com.qihoo360.replugin.ext.parser.parser.XmlNamespaces.XmlNamespace) r2
            java.lang.String r3 = com.qihoo360.replugin.ext.parser.parser.XmlNamespaces.XmlNamespace.access$100(r2)
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto La
            java.lang.String r5 = com.qihoo360.replugin.ext.parser.parser.XmlNamespaces.XmlNamespace.access$200(r2)
            return r5
        L25:
            return r0
    }

    public void removeNamespace(com.qihoo360.replugin.ext.parser.struct.xml.XmlNamespaceEndTag r4) {
            r3 = this;
            com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace r0 = new com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace
            java.lang.String r1 = r4.getPrefix()
            java.lang.String r4 = r4.getUri()
            r2 = 0
            r0.<init>(r1, r4, r2)
            java.util.List<com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace> r4 = r3.namespaces
            r4.remove(r0)
            java.util.List<com.qihoo360.replugin.ext.parser.parser.XmlNamespaces$XmlNamespace> r4 = r3.newNamespaces
            r4.remove(r0)
            return
    }
}
