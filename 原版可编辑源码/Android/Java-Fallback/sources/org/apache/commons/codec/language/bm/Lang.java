package org.apache.commons.codec.language.bm;

public class Lang {
    private static final java.lang.String LANGUAGE_RULES_RN = "org/apache/commons/codec/language/bm/lang.txt";
    private static final java.util.Map<org.apache.commons.codec.language.bm.NameType, org.apache.commons.codec.language.bm.Lang> Langs = null;
    private final org.apache.commons.codec.language.bm.Languages languages;
    private final java.util.List<org.apache.commons.codec.language.bm.Lang.LangRule> rules;

    static class 1 {
    }

    private static final class LangRule {
        private final boolean acceptOnMatch;
        private final java.util.Set<java.lang.String> languages;
        private final java.util.regex.Pattern pattern;

        private LangRule(java.util.regex.Pattern r1, java.util.Set<java.lang.String> r2, boolean r3) {
                r0 = this;
                r0.<init>()
                r0.pattern = r1
                r0.languages = r2
                r0.acceptOnMatch = r3
                return
        }

        LangRule(java.util.regex.Pattern r1, java.util.Set r2, boolean r3, org.apache.commons.codec.language.bm.Lang.1 r4) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        static boolean access$100(org.apache.commons.codec.language.bm.Lang.LangRule r0) {
                boolean r0 = r0.acceptOnMatch
                return r0
        }

        static java.util.Set access$200(org.apache.commons.codec.language.bm.Lang.LangRule r0) {
                java.util.Set<java.lang.String> r0 = r0.languages
                return r0
        }

        public boolean matches(java.lang.String r2) {
                r1 = this;
                java.util.regex.Pattern r0 = r1.pattern
                java.util.regex.Matcher r2 = r0.matcher(r2)
                boolean r2 = r2.find()
                return r2
        }
    }

    static {
            java.util.EnumMap r0 = new java.util.EnumMap
            java.lang.Class<org.apache.commons.codec.language.bm.NameType> r1 = org.apache.commons.codec.language.bm.NameType.class
            r0.<init>(r1)
            org.apache.commons.codec.language.bm.Lang.Langs = r0
            org.apache.commons.codec.language.bm.NameType[] r0 = org.apache.commons.codec.language.bm.NameType.values()
            int r1 = r0.length
            r2 = 0
        Lf:
            if (r2 >= r1) goto L25
            r3 = r0[r2]
            java.util.Map<org.apache.commons.codec.language.bm.NameType, org.apache.commons.codec.language.bm.Lang> r4 = org.apache.commons.codec.language.bm.Lang.Langs
            org.apache.commons.codec.language.bm.Languages r5 = org.apache.commons.codec.language.bm.Languages.getInstance(r3)
            java.lang.String r6 = "org/apache/commons/codec/language/bm/lang.txt"
            org.apache.commons.codec.language.bm.Lang r5 = loadFromResource(r6, r5)
            r4.put(r3, r5)
            int r2 = r2 + 1
            goto Lf
        L25:
            return
    }

    private Lang(java.util.List<org.apache.commons.codec.language.bm.Lang.LangRule> r1, org.apache.commons.codec.language.bm.Languages r2) {
            r0 = this;
            r0.<init>()
            java.util.List r1 = java.util.Collections.unmodifiableList(r1)
            r0.rules = r1
            r0.languages = r2
            return
    }

    public static org.apache.commons.codec.language.bm.Lang instance(org.apache.commons.codec.language.bm.NameType r1) {
            java.util.Map<org.apache.commons.codec.language.bm.NameType, org.apache.commons.codec.language.bm.Lang> r0 = org.apache.commons.codec.language.bm.Lang.Langs
            java.lang.Object r1 = r0.get(r1)
            org.apache.commons.codec.language.bm.Lang r1 = (org.apache.commons.codec.language.bm.Lang) r1
            return r1
    }

    public static org.apache.commons.codec.language.bm.Lang loadFromResource(java.lang.String r8, org.apache.commons.codec.language.bm.Languages r9) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.Class<org.apache.commons.codec.language.bm.Lang> r1 = org.apache.commons.codec.language.bm.Lang.class
            java.lang.ClassLoader r1 = r1.getClassLoader()
            java.io.InputStream r8 = r1.getResourceAsStream(r8)
            if (r8 == 0) goto Laa
            java.util.Scanner r1 = new java.util.Scanner
            java.lang.String r2 = "UTF-8"
            r1.<init>(r8, r2)
            r8 = 0
        L19:
            r2 = r8
        L1a:
            boolean r3 = r1.hasNextLine()
            if (r3 == 0) goto La4
            java.lang.String r3 = r1.nextLine()
            r4 = 1
            if (r2 == 0) goto L30
            java.lang.String r4 = "*/"
            boolean r3 = r3.endsWith(r4)
            if (r3 == 0) goto L1a
            goto L19
        L30:
            java.lang.String r5 = "/*"
            boolean r5 = r3.startsWith(r5)
            if (r5 == 0) goto L3a
            r2 = r4
            goto L1a
        L3a:
            java.lang.String r5 = "//"
            int r5 = r3.indexOf(r5)
            if (r5 < 0) goto L47
            java.lang.String r5 = r3.substring(r8, r5)
            goto L48
        L47:
            r5 = r3
        L48:
            java.lang.String r5 = r5.trim()
            int r6 = r5.length()
            if (r6 != 0) goto L53
            goto L1a
        L53:
            java.lang.String r6 = "\\s+"
            java.lang.String[] r5 = r5.split(r6)
            int r6 = r5.length
            r7 = 3
            if (r6 == r7) goto L79
            java.io.PrintStream r4 = java.lang.System.err
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Warning: malformed line '"
            r5.append(r6)
            r5.append(r3)
            java.lang.String r3 = "'"
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.println(r3)
            goto L1a
        L79:
            r3 = r5[r8]
            java.util.regex.Pattern r3 = java.util.regex.Pattern.compile(r3)
            r4 = r5[r4]
            java.lang.String r6 = "\\+"
            java.lang.String[] r4 = r4.split(r6)
            r6 = 2
            r5 = r5[r6]
            java.lang.String r6 = "true"
            boolean r5 = r5.equals(r6)
            org.apache.commons.codec.language.bm.Lang$LangRule r6 = new org.apache.commons.codec.language.bm.Lang$LangRule
            java.util.HashSet r7 = new java.util.HashSet
            java.util.List r4 = java.util.Arrays.asList(r4)
            r7.<init>(r4)
            r4 = 0
            r6.<init>(r3, r7, r5, r4)
            r0.add(r6)
            goto L1a
        La4:
            org.apache.commons.codec.language.bm.Lang r8 = new org.apache.commons.codec.language.bm.Lang
            r8.<init>(r0, r9)
            return r8
        Laa:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.String r9 = "Unable to resolve required resource:org/apache/commons/codec/language/bm/lang.txt"
            r8.<init>(r9)
            throw r8
    }

    public java.lang.String guessLanguage(java.lang.String r2) {
            r1 = this;
            org.apache.commons.codec.language.bm.Languages$LanguageSet r2 = r1.guessLanguages(r2)
            boolean r0 = r2.isSingleton()
            if (r0 == 0) goto Lf
            java.lang.String r2 = r2.getAny()
            goto L11
        Lf:
            java.lang.String r2 = "any"
        L11:
            return r2
    }

    public org.apache.commons.codec.language.bm.Languages.LanguageSet guessLanguages(java.lang.String r5) {
            r4 = this;
            java.util.Locale r0 = java.util.Locale.ENGLISH
            java.lang.String r5 = r5.toLowerCase(r0)
            java.util.HashSet r0 = new java.util.HashSet
            org.apache.commons.codec.language.bm.Languages r1 = r4.languages
            java.util.Set r1 = r1.getLanguages()
            r0.<init>(r1)
            java.util.List<org.apache.commons.codec.language.bm.Lang$LangRule> r1 = r4.rules
            java.util.Iterator r1 = r1.iterator()
        L17:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L3f
            java.lang.Object r2 = r1.next()
            org.apache.commons.codec.language.bm.Lang$LangRule r2 = (org.apache.commons.codec.language.bm.Lang.LangRule) r2
            boolean r3 = r2.matches(r5)
            if (r3 == 0) goto L17
            boolean r3 = org.apache.commons.codec.language.bm.Lang.LangRule.access$100(r2)
            if (r3 == 0) goto L37
            java.util.Set r2 = org.apache.commons.codec.language.bm.Lang.LangRule.access$200(r2)
            r0.retainAll(r2)
            goto L17
        L37:
            java.util.Set r2 = org.apache.commons.codec.language.bm.Lang.LangRule.access$200(r2)
            r0.removeAll(r2)
            goto L17
        L3f:
            org.apache.commons.codec.language.bm.Languages$LanguageSet r5 = org.apache.commons.codec.language.bm.Languages.LanguageSet.from(r0)
            org.apache.commons.codec.language.bm.Languages$LanguageSet r0 = org.apache.commons.codec.language.bm.Languages.NO_LANGUAGES
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L4d
            org.apache.commons.codec.language.bm.Languages$LanguageSet r5 = org.apache.commons.codec.language.bm.Languages.ANY_LANGUAGE
        L4d:
            return r5
    }
}
