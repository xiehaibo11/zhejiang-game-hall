package org.bouncycastle.i18n;

public class LocalizedMessage {
    public static final java.lang.String DEFAULT_ENCODING = "ISO-8859-1";
    protected org.bouncycastle.i18n.LocalizedMessage.FilteredArguments arguments;
    protected java.lang.String encoding;
    protected org.bouncycastle.i18n.LocalizedMessage.FilteredArguments extraArgs;
    protected org.bouncycastle.i18n.filter.Filter filter;
    protected final java.lang.String id;
    protected java.lang.ClassLoader loader;
    protected final java.lang.String resource;

    protected class FilteredArguments {
        protected static final int FILTER = 1;
        protected static final int FILTER_URL = 2;
        protected static final int NO_FILTER = 0;
        protected int[] argFilterType;
        protected java.lang.Object[] arguments;
        protected org.bouncycastle.i18n.filter.Filter filter;
        protected java.lang.Object[] filteredArgs;
        protected boolean[] isLocaleSpecific;
        final org.bouncycastle.i18n.LocalizedMessage this$0;
        protected java.lang.Object[] unpackedArgs;

        FilteredArguments(org.bouncycastle.i18n.LocalizedMessage r2) {
                r1 = this;
                r0 = 0
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1.<init>(r2, r0)
                return
        }

        FilteredArguments(org.bouncycastle.i18n.LocalizedMessage r5, java.lang.Object[] r6) {
                r4 = this;
                r4.this$0 = r5
                r4.<init>()
                r5 = 0
                r4.filter = r5
                r4.arguments = r6
                int r5 = r6.length
                java.lang.Object[] r5 = new java.lang.Object[r5]
                r4.unpackedArgs = r5
                int r5 = r6.length
                java.lang.Object[] r5 = new java.lang.Object[r5]
                r4.filteredArgs = r5
                int r5 = r6.length
                boolean[] r5 = new boolean[r5]
                r4.isLocaleSpecific = r5
                int r5 = r6.length
                int[] r5 = new int[r5]
                r4.argFilterType = r5
                r5 = 0
                r0 = 0
            L20:
                int r1 = r6.length
                if (r0 >= r1) goto L75
                r1 = r6[r0]
                boolean r1 = r1 instanceof org.bouncycastle.i18n.filter.TrustedInput
                if (r1 == 0) goto L3a
                java.lang.Object[] r1 = r4.unpackedArgs
                r2 = r6[r0]
                org.bouncycastle.i18n.filter.TrustedInput r2 = (org.bouncycastle.i18n.filter.TrustedInput) r2
                java.lang.Object r2 = r2.getInput()
                r1[r0] = r2
                int[] r1 = r4.argFilterType
                r1[r0] = r5
                goto L68
            L3a:
                r1 = r6[r0]
                boolean r1 = r1 instanceof org.bouncycastle.i18n.filter.UntrustedInput
                r2 = 1
                if (r1 == 0) goto L5e
                java.lang.Object[] r1 = r4.unpackedArgs
                r3 = r6[r0]
                org.bouncycastle.i18n.filter.UntrustedInput r3 = (org.bouncycastle.i18n.filter.UntrustedInput) r3
                java.lang.Object r3 = r3.getInput()
                r1[r0] = r3
                r1 = r6[r0]
                boolean r1 = r1 instanceof org.bouncycastle.i18n.filter.UntrustedUrlInput
                if (r1 == 0) goto L59
                int[] r1 = r4.argFilterType
                r2 = 2
                r1[r0] = r2
                goto L68
            L59:
                int[] r1 = r4.argFilterType
                r1[r0] = r2
                goto L68
            L5e:
                java.lang.Object[] r1 = r4.unpackedArgs
                r3 = r6[r0]
                r1[r0] = r3
                int[] r1 = r4.argFilterType
                r1[r0] = r2
            L68:
                boolean[] r1 = r4.isLocaleSpecific
                java.lang.Object[] r2 = r4.unpackedArgs
                r2 = r2[r0]
                boolean r2 = r2 instanceof org.bouncycastle.i18n.LocaleString
                r1[r0] = r2
                int r0 = r0 + 1
                goto L20
            L75:
                return
        }

        private java.lang.Object filter(int r2, java.lang.Object r3) {
                r1 = this;
                org.bouncycastle.i18n.filter.Filter r0 = r1.filter
                if (r0 == 0) goto L28
                if (r3 != 0) goto L8
                java.lang.String r3 = "null"
            L8:
                if (r2 == 0) goto L28
                r0 = 1
                if (r2 == r0) goto L1d
                r0 = 2
                if (r2 == r0) goto L12
                r2 = 0
                return r2
            L12:
                org.bouncycastle.i18n.filter.Filter r2 = r1.filter
                java.lang.String r3 = r3.toString()
                java.lang.String r2 = r2.doFilterUrl(r3)
                return r2
            L1d:
                org.bouncycastle.i18n.filter.Filter r2 = r1.filter
                java.lang.String r3 = r3.toString()
                java.lang.String r2 = r2.doFilter(r3)
                return r2
            L28:
                return r3
        }

        public java.lang.Object[] getArguments() {
                r1 = this;
                java.lang.Object[] r0 = r1.arguments
                return r0
        }

        public org.bouncycastle.i18n.filter.Filter getFilter() {
                r1 = this;
                org.bouncycastle.i18n.filter.Filter r0 = r1.filter
                return r0
        }

        public java.lang.Object[] getFilteredArgs(java.util.Locale r6) {
                r5 = this;
                java.lang.Object[] r0 = r5.unpackedArgs
                int r0 = r0.length
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
            L6:
                java.lang.Object[] r2 = r5.unpackedArgs
                int r3 = r2.length
                if (r1 >= r3) goto L3c
                java.lang.Object[] r3 = r5.filteredArgs
                r4 = r3[r1]
                if (r4 == 0) goto L14
                r2 = r3[r1]
                goto L37
            L14:
                r2 = r2[r1]
                boolean[] r3 = r5.isLocaleSpecific
                boolean r3 = r3[r1]
                if (r3 == 0) goto L2b
                org.bouncycastle.i18n.LocaleString r2 = (org.bouncycastle.i18n.LocaleString) r2
                java.lang.String r2 = r2.getLocaleString(r6)
                int[] r3 = r5.argFilterType
                r3 = r3[r1]
                java.lang.Object r2 = r5.filter(r3, r2)
                goto L37
            L2b:
                int[] r3 = r5.argFilterType
                r3 = r3[r1]
                java.lang.Object r2 = r5.filter(r3, r2)
                java.lang.Object[] r3 = r5.filteredArgs
                r3[r1] = r2
            L37:
                r0[r1] = r2
                int r1 = r1 + 1
                goto L6
            L3c:
                return r0
        }

        public boolean isEmpty() {
                r1 = this;
                java.lang.Object[] r0 = r1.unpackedArgs
                int r0 = r0.length
                if (r0 != 0) goto L7
                r0 = 1
                goto L8
            L7:
                r0 = 0
            L8:
                return r0
        }

        public void setFilter(org.bouncycastle.i18n.filter.Filter r4) {
                r3 = this;
                org.bouncycastle.i18n.filter.Filter r0 = r3.filter
                if (r4 == r0) goto L12
                r0 = 0
            L5:
                java.lang.Object[] r1 = r3.unpackedArgs
                int r1 = r1.length
                if (r0 >= r1) goto L12
                java.lang.Object[] r1 = r3.filteredArgs
                r2 = 0
                r1[r0] = r2
                int r0 = r0 + 1
                goto L5
            L12:
                r3.filter = r4
                return
        }
    }

    public LocalizedMessage(java.lang.String r2, java.lang.String r3) throws java.lang.NullPointerException {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "ISO-8859-1"
            r1.encoding = r0
            r0 = 0
            r1.extraArgs = r0
            r1.filter = r0
            r1.loader = r0
            if (r2 == 0) goto L1e
            if (r3 == 0) goto L1e
            r1.id = r3
            r1.resource = r2
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r2 = new org.bouncycastle.i18n.LocalizedMessage$FilteredArguments
            r2.<init>(r1)
            r1.arguments = r2
            return
        L1e:
            throw r0
    }

    public LocalizedMessage(java.lang.String r2, java.lang.String r3, java.lang.String r4) throws java.lang.NullPointerException, java.io.UnsupportedEncodingException {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "ISO-8859-1"
            r1.encoding = r0
            r0 = 0
            r1.extraArgs = r0
            r1.filter = r0
            r1.loader = r0
            if (r2 == 0) goto L42
            if (r3 == 0) goto L42
            r1.id = r3
            r1.resource = r2
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r2 = new org.bouncycastle.i18n.LocalizedMessage$FilteredArguments
            r2.<init>(r1)
            r1.arguments = r2
            boolean r2 = java.nio.charset.Charset.isSupported(r4)
            if (r2 == 0) goto L26
            r1.encoding = r4
            return
        L26:
            java.io.UnsupportedEncodingException r2 = new java.io.UnsupportedEncodingException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "The encoding \""
            r3.append(r0)
            r3.append(r4)
            java.lang.String r4 = "\" is not supported."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
        L42:
            throw r0
    }

    public LocalizedMessage(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.Object[] r5) throws java.lang.NullPointerException, java.io.UnsupportedEncodingException {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "ISO-8859-1"
            r1.encoding = r0
            r0 = 0
            r1.extraArgs = r0
            r1.filter = r0
            r1.loader = r0
            if (r2 == 0) goto L44
            if (r3 == 0) goto L44
            if (r5 == 0) goto L44
            r1.id = r3
            r1.resource = r2
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r2 = new org.bouncycastle.i18n.LocalizedMessage$FilteredArguments
            r2.<init>(r1, r5)
            r1.arguments = r2
            boolean r2 = java.nio.charset.Charset.isSupported(r4)
            if (r2 == 0) goto L28
            r1.encoding = r4
            return
        L28:
            java.io.UnsupportedEncodingException r2 = new java.io.UnsupportedEncodingException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "The encoding \""
            r3.append(r5)
            r3.append(r4)
            java.lang.String r4 = "\" is not supported."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
        L44:
            throw r0
    }

    public LocalizedMessage(java.lang.String r2, java.lang.String r3, java.lang.Object[] r4) throws java.lang.NullPointerException {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "ISO-8859-1"
            r1.encoding = r0
            r0 = 0
            r1.extraArgs = r0
            r1.filter = r0
            r1.loader = r0
            if (r2 == 0) goto L20
            if (r3 == 0) goto L20
            if (r4 == 0) goto L20
            r1.id = r3
            r1.resource = r2
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r2 = new org.bouncycastle.i18n.LocalizedMessage$FilteredArguments
            r2.<init>(r1, r4)
            r1.arguments = r2
            return
        L20:
            throw r0
    }

    protected java.lang.String addExtraArgs(java.lang.String r3, java.util.Locale r4) {
            r2 = this;
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r0 = r2.extraArgs
            if (r0 == 0) goto L1f
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>(r3)
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r3 = r2.extraArgs
            java.lang.Object[] r3 = r3.getFilteredArgs(r4)
            r4 = 0
        L10:
            int r1 = r3.length
            if (r4 >= r1) goto L1b
            r1 = r3[r4]
            r0.append(r1)
            int r4 = r4 + 1
            goto L10
        L1b:
            java.lang.String r3 = r0.toString()
        L1f:
            return r3
    }

    protected java.lang.String formatWithTimeZone(java.lang.String r3, java.lang.Object[] r4, java.util.Locale r5, java.util.TimeZone r6) {
            r2 = this;
            java.text.MessageFormat r0 = new java.text.MessageFormat
            java.lang.String r1 = " "
            r0.<init>(r1)
            r0.setLocale(r5)
            r0.applyPattern(r3)
            java.util.TimeZone r3 = java.util.TimeZone.getDefault()
            boolean r3 = r6.equals(r3)
            if (r3 != 0) goto L32
            java.text.Format[] r3 = r0.getFormats()
            r5 = 0
        L1c:
            int r1 = r3.length
            if (r5 >= r1) goto L32
            r1 = r3[r5]
            boolean r1 = r1 instanceof java.text.DateFormat
            if (r1 == 0) goto L2f
            r1 = r3[r5]
            java.text.DateFormat r1 = (java.text.DateFormat) r1
            r1.setTimeZone(r6)
            r0.setFormat(r5, r1)
        L2f:
            int r5 = r5 + 1
            goto L1c
        L32:
            java.lang.String r3 = r0.format(r4)
            return r3
    }

    public java.lang.Object[] getArguments() {
            r1 = this;
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r0 = r1.arguments
            java.lang.Object[] r0 = r0.getArguments()
            return r0
    }

    public java.lang.ClassLoader getClassLoader() {
            r1 = this;
            java.lang.ClassLoader r0 = r1.loader
            return r0
    }

    public java.lang.String getEntry(java.lang.String r10, java.util.Locale r11, java.util.TimeZone r12) throws org.bouncycastle.i18n.MissingEntryException {
            r9 = this;
            java.lang.String r0 = "ISO-8859-1"
            java.lang.String r1 = r9.id
            java.lang.String r2 = "."
            if (r10 == 0) goto L1a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            r3.append(r2)
            r3.append(r10)
            java.lang.String r1 = r3.toString()
        L1a:
            r6 = r1
            java.lang.ClassLoader r10 = r9.loader     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            if (r10 != 0) goto L26
            java.lang.String r10 = r9.resource     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            java.util.ResourceBundle r10 = java.util.ResourceBundle.getBundle(r10, r11)     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            goto L2e
        L26:
            java.lang.String r10 = r9.resource     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            java.lang.ClassLoader r1 = r9.loader     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            java.util.ResourceBundle r10 = java.util.ResourceBundle.getBundle(r10, r11, r1)     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
        L2e:
            java.lang.String r10 = r10.getString(r6)     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            java.lang.String r1 = r9.encoding     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            boolean r1 = r1.equals(r0)     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            if (r1 != 0) goto L46
            java.lang.String r1 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            byte[] r10 = r10.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            java.lang.String r0 = r9.encoding     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            r1.<init>(r10, r0)     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            r10 = r1
        L46:
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r0 = r9.arguments     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            boolean r0 = r0.isEmpty()     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            if (r0 != 0) goto L58
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r0 = r9.arguments     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            java.lang.Object[] r0 = r0.getFilteredArgs(r11)     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            java.lang.String r10 = r9.formatWithTimeZone(r10, r0, r11, r12)     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
        L58:
            java.lang.String r10 = r9.addExtraArgs(r10, r11)     // Catch: java.io.UnsupportedEncodingException -> L5d java.util.MissingResourceException -> L64
            return r10
        L5d:
            r10 = move-exception
            java.lang.RuntimeException r11 = new java.lang.RuntimeException
            r11.<init>(r10)
            throw r11
        L64:
            org.bouncycastle.i18n.MissingEntryException r10 = new org.bouncycastle.i18n.MissingEntryException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r0 = "Can't find entry "
            r12.append(r0)
            r12.append(r6)
            java.lang.String r0 = " in resource file "
            r12.append(r0)
            java.lang.String r0 = r9.resource
            r12.append(r0)
            r12.append(r2)
            java.lang.String r4 = r12.toString()
            java.lang.String r5 = r9.resource
            java.lang.ClassLoader r12 = r9.loader
            if (r12 == 0) goto L8c
            goto L90
        L8c:
            java.lang.ClassLoader r12 = r9.getClassLoader()
        L90:
            r8 = r12
            r3 = r10
            r7 = r11
            r3.<init>(r4, r5, r6, r7, r8)
            throw r10
    }

    public java.lang.Object[] getExtraArgs() {
            r1 = this;
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r0 = r1.extraArgs
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            java.lang.Object[] r0 = r0.getArguments()
        La:
            return r0
    }

    public org.bouncycastle.i18n.filter.Filter getFilter() {
            r1 = this;
            org.bouncycastle.i18n.filter.Filter r0 = r1.filter
            return r0
    }

    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.id
            return r0
    }

    public java.lang.String getResource() {
            r1 = this;
            java.lang.String r0 = r1.resource
            return r0
    }

    public void setClassLoader(java.lang.ClassLoader r1) {
            r0 = this;
            r0.loader = r1
            return
    }

    public void setExtraArgument(java.lang.Object r3) {
            r2 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            r2.setExtraArguments(r0)
            return
    }

    public void setExtraArguments(java.lang.Object[] r2) {
            r1 = this;
            if (r2 == 0) goto Lf
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r0 = new org.bouncycastle.i18n.LocalizedMessage$FilteredArguments
            r0.<init>(r1, r2)
            r1.extraArgs = r0
            org.bouncycastle.i18n.filter.Filter r2 = r1.filter
            r0.setFilter(r2)
            goto L12
        Lf:
            r2 = 0
            r1.extraArgs = r2
        L12:
            return
    }

    public void setFilter(org.bouncycastle.i18n.filter.Filter r2) {
            r1 = this;
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r0 = r1.arguments
            r0.setFilter(r2)
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r0 = r1.extraArgs
            if (r0 == 0) goto Lc
            r0.setFilter(r2)
        Lc:
            r1.filter = r2
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "Resource: \""
            r0.append(r1)
            java.lang.String r1 = r2.resource
            r0.append(r1)
            java.lang.String r1 = "\" Id: \""
            r0.append(r1)
            java.lang.String r1 = r2.id
            r0.append(r1)
            java.lang.String r1 = "\""
            r0.append(r1)
            java.lang.String r1 = " Arguments: "
            r0.append(r1)
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r1 = r2.arguments
            java.lang.Object[] r1 = r1.getArguments()
            int r1 = r1.length
            r0.append(r1)
            java.lang.String r1 = " normal"
            r0.append(r1)
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r1 = r2.extraArgs
            if (r1 == 0) goto L51
            java.lang.Object[] r1 = r1.getArguments()
            int r1 = r1.length
            if (r1 <= 0) goto L51
            java.lang.String r1 = ", "
            r0.append(r1)
            org.bouncycastle.i18n.LocalizedMessage$FilteredArguments r1 = r2.extraArgs
            java.lang.Object[] r1 = r1.getArguments()
            int r1 = r1.length
            r0.append(r1)
            java.lang.String r1 = " extra"
            r0.append(r1)
        L51:
            java.lang.String r1 = " Encoding: "
            r0.append(r1)
            java.lang.String r1 = r2.encoding
            r0.append(r1)
            java.lang.String r1 = " ClassLoader: "
            r0.append(r1)
            java.lang.ClassLoader r1 = r2.loader
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
