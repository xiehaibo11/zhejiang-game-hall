package org.apache.commons.codec1.language.bm;

public class Languages {
    public static final java.lang.String ANY = "any";
    public static final org.apache.commons.codec1.language.bm.Languages.LanguageSet ANY_LANGUAGE = null;
    private static final java.util.Map<org.apache.commons.codec1.language.bm.NameType, org.apache.commons.codec1.language.bm.Languages> LANGUAGES = null;
    public static final org.apache.commons.codec1.language.bm.Languages.LanguageSet NO_LANGUAGES = null;
    private final java.util.Set<java.lang.String> languages;



    public static abstract class LanguageSet {
        public LanguageSet() {
                r0 = this;
                r0.<init>()
                return
        }

        public static org.apache.commons.codec1.language.bm.Languages.LanguageSet from(java.util.Set<java.lang.String> r2) {
                boolean r0 = r2.isEmpty()
                if (r0 == 0) goto L9
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r2 = org.apache.commons.codec1.language.bm.Languages.NO_LANGUAGES
                goto L10
            L9:
                org.apache.commons.codec1.language.bm.Languages$SomeLanguages r0 = new org.apache.commons.codec1.language.bm.Languages$SomeLanguages
                r1 = 0
                r0.<init>(r2, r1)
                r2 = r0
            L10:
                return r2
        }

        public abstract boolean contains(java.lang.String r1);

        public abstract java.lang.String getAny();

        public abstract boolean isEmpty();

        public abstract boolean isSingleton();

        abstract org.apache.commons.codec1.language.bm.Languages.LanguageSet merge(org.apache.commons.codec1.language.bm.Languages.LanguageSet r1);

        public abstract org.apache.commons.codec1.language.bm.Languages.LanguageSet restrictTo(org.apache.commons.codec1.language.bm.Languages.LanguageSet r1);
    }

    public static final class SomeLanguages extends org.apache.commons.codec1.language.bm.Languages.LanguageSet {
        private final java.util.Set<java.lang.String> languages;

        private SomeLanguages(java.util.Set<java.lang.String> r1) {
                r0 = this;
                r0.<init>()
                java.util.Set r1 = java.util.Collections.unmodifiableSet(r1)
                r0.languages = r1
                return
        }

        SomeLanguages(java.util.Set r1, org.apache.commons.codec1.language.bm.Languages.SomeLanguages r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public boolean contains(java.lang.String r2) {
                r1 = this;
                java.util.Set<java.lang.String> r0 = r1.languages
                boolean r2 = r0.contains(r2)
                return r2
        }

        @Override
        public java.lang.String getAny() {
                r1 = this;
                java.util.Set<java.lang.String> r0 = r1.languages
                java.util.Iterator r0 = r0.iterator()
                java.lang.Object r0 = r0.next()
                java.lang.String r0 = (java.lang.String) r0
                return r0
        }

        public java.util.Set<java.lang.String> getLanguages() {
                r1 = this;
                java.util.Set<java.lang.String> r0 = r1.languages
                return r0
        }

        @Override
        public boolean isEmpty() {
                r1 = this;
                java.util.Set<java.lang.String> r0 = r1.languages
                boolean r0 = r0.isEmpty()
                return r0
        }

        @Override
        public boolean isSingleton() {
                r2 = this;
                java.util.Set<java.lang.String> r0 = r2.languages
                int r0 = r0.size()
                r1 = 1
                if (r0 != r1) goto La
                return r1
            La:
                r0 = 0
                return r0
        }

        @Override
        public org.apache.commons.codec1.language.bm.Languages.LanguageSet merge(org.apache.commons.codec1.language.bm.Languages.LanguageSet r3) {
                r2 = this;
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r0 = org.apache.commons.codec1.language.bm.Languages.NO_LANGUAGES
                if (r3 != r0) goto L5
                return r2
            L5:
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r0 = org.apache.commons.codec1.language.bm.Languages.ANY_LANGUAGE
                if (r3 != r0) goto La
                return r3
            La:
                org.apache.commons.codec1.language.bm.Languages$SomeLanguages r3 = (org.apache.commons.codec1.language.bm.Languages.SomeLanguages) r3
                java.util.HashSet r0 = new java.util.HashSet
                java.util.Set<java.lang.String> r1 = r2.languages
                r0.<init>(r1)
                java.util.Set<java.lang.String> r3 = r3.languages
                java.util.Iterator r3 = r3.iterator()
            L19:
                boolean r1 = r3.hasNext()
                if (r1 != 0) goto L24
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r3 = from(r0)
                return r3
            L24:
                java.lang.Object r1 = r3.next()
                java.lang.String r1 = (java.lang.String) r1
                r0.add(r1)
                goto L19
        }

        @Override
        public org.apache.commons.codec1.language.bm.Languages.LanguageSet restrictTo(org.apache.commons.codec1.language.bm.Languages.LanguageSet r5) {
                r4 = this;
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r0 = org.apache.commons.codec1.language.bm.Languages.NO_LANGUAGES
                if (r5 != r0) goto L5
                return r5
            L5:
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r0 = org.apache.commons.codec1.language.bm.Languages.ANY_LANGUAGE
                if (r5 != r0) goto La
                return r4
            La:
                org.apache.commons.codec1.language.bm.Languages$SomeLanguages r5 = (org.apache.commons.codec1.language.bm.Languages.SomeLanguages) r5
                java.util.HashSet r0 = new java.util.HashSet
                java.util.Set<java.lang.String> r1 = r4.languages
                int r1 = r1.size()
                java.util.Set<java.lang.String> r2 = r5.languages
                int r2 = r2.size()
                int r1 = java.lang.Math.min(r1, r2)
                r0.<init>(r1)
                java.util.Set<java.lang.String> r1 = r4.languages
                java.util.Iterator r1 = r1.iterator()
            L27:
                boolean r2 = r1.hasNext()
                if (r2 != 0) goto L32
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r5 = from(r0)
                return r5
            L32:
                java.lang.Object r2 = r1.next()
                java.lang.String r2 = (java.lang.String) r2
                java.util.Set<java.lang.String> r3 = r5.languages
                boolean r3 = r3.contains(r2)
                if (r3 == 0) goto L27
                r0.add(r2)
                goto L27
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Languages("
                r0.<init>(r1)
                java.util.Set<java.lang.String> r1 = r2.languages
                java.lang.String r1 = r1.toString()
                r0.append(r1)
                java.lang.String r1 = ")"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static {
            java.util.EnumMap r0 = new java.util.EnumMap
            java.lang.Class<org.apache.commons.codec1.language.bm.NameType> r1 = org.apache.commons.codec1.language.bm.NameType.class
            r0.<init>(r1)
            org.apache.commons.codec1.language.bm.Languages.LANGUAGES = r0
            org.apache.commons.codec1.language.bm.NameType[] r0 = org.apache.commons.codec1.language.bm.NameType.values()
            int r1 = r0.length
            r2 = 0
        Lf:
            if (r2 < r1) goto L20
            org.apache.commons.codec1.language.bm.Languages$1 r0 = new org.apache.commons.codec1.language.bm.Languages$1
            r0.<init>()
            org.apache.commons.codec1.language.bm.Languages.NO_LANGUAGES = r0
            org.apache.commons.codec1.language.bm.Languages$2 r0 = new org.apache.commons.codec1.language.bm.Languages$2
            r0.<init>()
            org.apache.commons.codec1.language.bm.Languages.ANY_LANGUAGE = r0
            return
        L20:
            r3 = r0[r2]
            java.util.Map<org.apache.commons.codec1.language.bm.NameType, org.apache.commons.codec1.language.bm.Languages> r4 = org.apache.commons.codec1.language.bm.Languages.LANGUAGES
            java.lang.String r5 = langResourceName(r3)
            org.apache.commons.codec1.language.bm.Languages r5 = getInstance(r5)
            r4.put(r3, r5)
            int r2 = r2 + 1
            goto Lf
    }

    private Languages(java.util.Set<java.lang.String> r1) {
            r0 = this;
            r0.<init>()
            r0.languages = r1
            return
    }

    public static org.apache.commons.codec1.language.bm.Languages getInstance(java.lang.String r5) {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.lang.Class<org.apache.commons.codec1.language.bm.Languages> r1 = org.apache.commons.codec1.language.bm.Languages.class
            java.lang.ClassLoader r1 = r1.getClassLoader()
            java.io.InputStream r1 = r1.getResourceAsStream(r5)
            if (r1 == 0) goto L59
            java.util.Scanner r5 = new java.util.Scanner
            java.lang.String r2 = "UTF-8"
            r5.<init>(r1, r2)
            r1 = 0
        L19:
            r2 = r1
        L1a:
            boolean r3 = r5.hasNextLine()     // Catch: java.lang.Throwable -> L54
            if (r3 != 0) goto L2d
            r5.close()
            org.apache.commons.codec1.language.bm.Languages r5 = new org.apache.commons.codec1.language.bm.Languages
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            r5.<init>(r0)
            return r5
        L2d:
            java.lang.String r3 = r5.nextLine()     // Catch: java.lang.Throwable -> L54
            java.lang.String r3 = r3.trim()     // Catch: java.lang.Throwable -> L54
            if (r2 == 0) goto L40
            java.lang.String r4 = "*/"
            boolean r3 = r3.endsWith(r4)     // Catch: java.lang.Throwable -> L54
            if (r3 == 0) goto L1a
            goto L19
        L40:
            java.lang.String r4 = "/*"
            boolean r4 = r3.startsWith(r4)     // Catch: java.lang.Throwable -> L54
            if (r4 == 0) goto L4a
            r2 = 1
            goto L1a
        L4a:
            int r4 = r3.length()     // Catch: java.lang.Throwable -> L54
            if (r4 <= 0) goto L1a
            r0.add(r3)     // Catch: java.lang.Throwable -> L54
            goto L1a
        L54:
            r0 = move-exception
            r5.close()
            throw r0
        L59:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Unable to resolve required resource: "
            r1.<init>(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    public static org.apache.commons.codec1.language.bm.Languages getInstance(org.apache.commons.codec1.language.bm.NameType r1) {
            java.util.Map<org.apache.commons.codec1.language.bm.NameType, org.apache.commons.codec1.language.bm.Languages> r0 = org.apache.commons.codec1.language.bm.Languages.LANGUAGES
            java.lang.Object r1 = r0.get(r1)
            org.apache.commons.codec1.language.bm.Languages r1 = (org.apache.commons.codec1.language.bm.Languages) r1
            return r1
    }

    private static java.lang.String langResourceName(org.apache.commons.codec1.language.bm.NameType r2) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r2 = r2.getName()
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = "org/apache/commons/codec/language/bm/%s_languages.txt"
            java.lang.String r2 = java.lang.String.format(r2, r0)
            return r2
    }

    public java.util.Set<java.lang.String> getLanguages() {
            r1 = this;
            java.util.Set<java.lang.String> r0 = r1.languages
            return r0
    }
}
