package org.apache.commons.codec1.language.bm;

public class Lang {
    private static final java.lang.String LANGUAGE_RULES_RN = "org/apache/commons/codec/language/bm/%s_lang.txt";
    private static final java.util.Map<org.apache.commons.codec1.language.bm.NameType, org.apache.commons.codec1.language.bm.Lang> Langs = null;
    private final org.apache.commons.codec1.language.bm.Languages languages;
    private final java.util.List<org.apache.commons.codec1.language.bm.Lang.LangRule> rules;

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

        LangRule(java.util.regex.Pattern r1, java.util.Set r2, boolean r3, org.apache.commons.codec1.language.bm.Lang.LangRule r4) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        static boolean access$1(org.apache.commons.codec1.language.bm.Lang.LangRule r0) {
                boolean r0 = r0.acceptOnMatch
                return r0
        }

        static java.util.Set access$2(org.apache.commons.codec1.language.bm.Lang.LangRule r0) {
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
            java.lang.Class<org.apache.commons.codec1.language.bm.NameType> r1 = org.apache.commons.codec1.language.bm.NameType.class
            r0.<init>(r1)
            org.apache.commons.codec1.language.bm.Lang.Langs = r0
            org.apache.commons.codec1.language.bm.NameType[] r0 = org.apache.commons.codec1.language.bm.NameType.values()
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L10:
            if (r3 < r1) goto L13
            return
        L13:
            r4 = r0[r3]
            java.util.Map<org.apache.commons.codec1.language.bm.NameType, org.apache.commons.codec1.language.bm.Lang> r5 = org.apache.commons.codec1.language.bm.Lang.Langs
            r6 = 1
            java.lang.Object[] r6 = new java.lang.Object[r6]
            java.lang.String r7 = r4.getName()
            r6[r2] = r7
            java.lang.String r7 = "org/apache/commons/codec/language/bm/%s_lang.txt"
            java.lang.String r6 = java.lang.String.format(r7, r6)
            org.apache.commons.codec1.language.bm.Languages r7 = org.apache.commons.codec1.language.bm.Languages.getInstance(r4)
            org.apache.commons.codec1.language.bm.Lang r6 = loadFromResource(r6, r7)
            r5.put(r4, r6)
            int r3 = r3 + 1
            goto L10
    }

    private Lang(java.util.List<org.apache.commons.codec1.language.bm.Lang.LangRule> r1, org.apache.commons.codec1.language.bm.Languages r2) {
            r0 = this;
            r0.<init>()
            java.util.List r1 = java.util.Collections.unmodifiableList(r1)
            r0.rules = r1
            r0.languages = r2
            return
    }

    public static org.apache.commons.codec1.language.bm.Lang instance(org.apache.commons.codec1.language.bm.NameType r1) {
            java.util.Map<org.apache.commons.codec1.language.bm.NameType, org.apache.commons.codec1.language.bm.Lang> r0 = org.apache.commons.codec1.language.bm.Lang.Langs
            java.lang.Object r1 = r0.get(r1)
            org.apache.commons.codec1.language.bm.Lang r1 = (org.apache.commons.codec1.language.bm.Lang) r1
            return r1
    }

    public static org.apache.commons.codec1.language.bm.Lang loadFromResource(java.lang.String r10, org.apache.commons.codec1.language.bm.Languages r11) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.Class<org.apache.commons.codec1.language.bm.Lang> r1 = org.apache.commons.codec1.language.bm.Lang.class
            java.lang.ClassLoader r1 = r1.getClassLoader()
            java.io.InputStream r1 = r1.getResourceAsStream(r10)
            if (r1 == 0) goto Lb6
            java.util.Scanner r2 = new java.util.Scanner
            java.lang.String r3 = "UTF-8"
            r2.<init>(r1, r3)
            r1 = 1
            r3 = 0
        L1a:
            r4 = r3
        L1b:
            boolean r5 = r2.hasNextLine()     // Catch: java.lang.Throwable -> Lb1
            if (r5 != 0) goto L2a
            r2.close()
            org.apache.commons.codec1.language.bm.Lang r10 = new org.apache.commons.codec1.language.bm.Lang
            r10.<init>(r0, r11)
            return r10
        L2a:
            java.lang.String r5 = r2.nextLine()     // Catch: java.lang.Throwable -> Lb1
            if (r4 == 0) goto L39
            java.lang.String r6 = "*/"
            boolean r5 = r5.endsWith(r6)     // Catch: java.lang.Throwable -> Lb1
            if (r5 == 0) goto L1b
            goto L1a
        L39:
            java.lang.String r6 = "/*"
            boolean r6 = r5.startsWith(r6)     // Catch: java.lang.Throwable -> Lb1
            if (r6 == 0) goto L43
            r4 = r1
            goto L1b
        L43:
            java.lang.String r6 = "//"
            int r6 = r5.indexOf(r6)     // Catch: java.lang.Throwable -> Lb1
            if (r6 < 0) goto L50
            java.lang.String r6 = r5.substring(r3, r6)     // Catch: java.lang.Throwable -> Lb1
            goto L51
        L50:
            r6 = r5
        L51:
            java.lang.String r6 = r6.trim()     // Catch: java.lang.Throwable -> Lb1
            int r7 = r6.length()     // Catch: java.lang.Throwable -> Lb1
            if (r7 != 0) goto L5c
            goto L1b
        L5c:
            java.lang.String r7 = "\\s+"
            java.lang.String[] r6 = r6.split(r7)     // Catch: java.lang.Throwable -> Lb1
            int r7 = r6.length     // Catch: java.lang.Throwable -> Lb1
            r8 = 3
            if (r7 != r8) goto L90
            r5 = r6[r3]     // Catch: java.lang.Throwable -> Lb1
            java.util.regex.Pattern r5 = java.util.regex.Pattern.compile(r5)     // Catch: java.lang.Throwable -> Lb1
            r7 = r6[r1]     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r8 = "\\+"
            java.lang.String[] r7 = r7.split(r8)     // Catch: java.lang.Throwable -> Lb1
            r8 = 2
            r6 = r6[r8]     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r8 = "true"
            boolean r6 = r6.equals(r8)     // Catch: java.lang.Throwable -> Lb1
            org.apache.commons.codec1.language.bm.Lang$LangRule r8 = new org.apache.commons.codec1.language.bm.Lang$LangRule     // Catch: java.lang.Throwable -> Lb1
            java.util.HashSet r9 = new java.util.HashSet     // Catch: java.lang.Throwable -> Lb1
            java.util.List r7 = java.util.Arrays.asList(r7)     // Catch: java.lang.Throwable -> Lb1
            r9.<init>(r7)     // Catch: java.lang.Throwable -> Lb1
            r7 = 0
            r8.<init>(r5, r9, r6, r7)     // Catch: java.lang.Throwable -> Lb1
            r0.add(r8)     // Catch: java.lang.Throwable -> Lb1
            goto L1b
        L90:
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> Lb1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r1 = "Malformed line '"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lb1
            r0.append(r5)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r1 = "' in language resource '"
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb1
            r0.append(r10)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r10 = "'"
            r0.append(r10)     // Catch: java.lang.Throwable -> Lb1
            java.lang.String r10 = r0.toString()     // Catch: java.lang.Throwable -> Lb1
            r11.<init>(r10)     // Catch: java.lang.Throwable -> Lb1
            throw r11     // Catch: java.lang.Throwable -> Lb1
        Lb1:
            r10 = move-exception
            r2.close()
            throw r10
        Lb6:
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException
            java.lang.String r11 = "Unable to resolve required resource:org/apache/commons/codec/language/bm/%s_lang.txt"
            r10.<init>(r11)
            throw r10
    }

    public java.lang.String guessLanguage(java.lang.String r2) {
            r1 = this;
            org.apache.commons.codec1.language.bm.Languages$LanguageSet r2 = r1.guessLanguages(r2)
            boolean r0 = r2.isSingleton()
            if (r0 == 0) goto Lf
            java.lang.String r2 = r2.getAny()
            goto L11
        Lf:
            java.lang.String r2 = "any"
        L11:
            return r2
    }

    public org.apache.commons.codec1.language.bm.Languages.LanguageSet guessLanguages(java.lang.String r5) {
            r4 = this;
            java.util.Locale r0 = java.util.Locale.ENGLISH
            java.lang.String r5 = r5.toLowerCase(r0)
            java.util.HashSet r0 = new java.util.HashSet
            org.apache.commons.codec1.language.bm.Languages r1 = r4.languages
            java.util.Set r1 = r1.getLanguages()
            r0.<init>(r1)
            java.util.List<org.apache.commons.codec1.language.bm.Lang$LangRule> r1 = r4.rules
            java.util.Iterator r1 = r1.iterator()
        L17:
            boolean r2 = r1.hasNext()
            if (r2 != 0) goto L2c
            org.apache.commons.codec1.language.bm.Languages$LanguageSet r5 = org.apache.commons.codec1.language.bm.Languages.LanguageSet.from(r0)
            org.apache.commons.codec1.language.bm.Languages$LanguageSet r0 = org.apache.commons.codec1.language.bm.Languages.NO_LANGUAGES
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L2b
            org.apache.commons.codec1.language.bm.Languages$LanguageSet r5 = org.apache.commons.codec1.language.bm.Languages.ANY_LANGUAGE
        L2b:
            return r5
        L2c:
            java.lang.Object r2 = r1.next()
            org.apache.commons.codec1.language.bm.Lang$LangRule r2 = (org.apache.commons.codec1.language.bm.Lang.LangRule) r2
            boolean r3 = r2.matches(r5)
            if (r3 == 0) goto L17
            boolean r3 = org.apache.commons.codec1.language.bm.Lang.LangRule.access$1(r2)
            if (r3 == 0) goto L46
            java.util.Set r2 = org.apache.commons.codec1.language.bm.Lang.LangRule.access$2(r2)
            r0.retainAll(r2)
            goto L17
        L46:
            java.util.Set r2 = org.apache.commons.codec1.language.bm.Lang.LangRule.access$2(r2)
            r0.removeAll(r2)
            goto L17
    }
}
