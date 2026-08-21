package org.apache.commons.codec1.language.bm;

public class Rule {
    public static final java.lang.String ALL = "ALL";
    public static final org.apache.commons.codec1.language.bm.Rule.RPattern ALL_STRINGS_RMATCHER = null;
    private static final java.lang.String DOUBLE_QUOTE = "\"";
    private static final java.lang.String HASH_INCLUDE = "#include";
    private static final java.util.Map<org.apache.commons.codec1.language.bm.NameType, java.util.Map<org.apache.commons.codec1.language.bm.RuleType, java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec1.language.bm.Rule>>>>> RULES = null;
    private final org.apache.commons.codec1.language.bm.Rule.RPattern lContext;
    private final java.lang.String pattern;
    private final org.apache.commons.codec1.language.bm.Rule.PhonemeExpr phoneme;
    private final org.apache.commons.codec1.language.bm.Rule.RPattern rContext;











    public static final class Phoneme implements org.apache.commons.codec1.language.bm.Rule.PhonemeExpr {
        public static final java.util.Comparator<org.apache.commons.codec1.language.bm.Rule.Phoneme> COMPARATOR = null;
        private final org.apache.commons.codec1.language.bm.Languages.LanguageSet languages;
        private final java.lang.StringBuilder phonemeText;


        static {
                org.apache.commons.codec1.language.bm.Rule$Phoneme$1 r0 = new org.apache.commons.codec1.language.bm.Rule$Phoneme$1
                r0.<init>()
                org.apache.commons.codec1.language.bm.Rule.Phoneme.COMPARATOR = r0
                return
        }

        public Phoneme(java.lang.CharSequence r2, org.apache.commons.codec1.language.bm.Languages.LanguageSet r3) {
                r1 = this;
                r1.<init>()
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>(r2)
                r1.phonemeText = r0
                r1.languages = r3
                return
        }

        public Phoneme(org.apache.commons.codec1.language.bm.Rule.Phoneme r2, org.apache.commons.codec1.language.bm.Rule.Phoneme r3) {
                r1 = this;
                java.lang.StringBuilder r0 = r2.phonemeText
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r2 = r2.languages
                r1.<init>(r0, r2)
                java.lang.StringBuilder r2 = r1.phonemeText
                java.lang.StringBuilder r3 = r3.phonemeText
                r2.append(r3)
                return
        }

        public Phoneme(org.apache.commons.codec1.language.bm.Rule.Phoneme r1, org.apache.commons.codec1.language.bm.Rule.Phoneme r2, org.apache.commons.codec1.language.bm.Languages.LanguageSet r3) {
                r0 = this;
                java.lang.StringBuilder r1 = r1.phonemeText
                r0.<init>(r1, r3)
                java.lang.StringBuilder r1 = r0.phonemeText
                java.lang.StringBuilder r2 = r2.phonemeText
                r1.append(r2)
                return
        }

        static java.lang.StringBuilder access$0(org.apache.commons.codec1.language.bm.Rule.Phoneme r0) {
                java.lang.StringBuilder r0 = r0.phonemeText
                return r0
        }

        public org.apache.commons.codec1.language.bm.Rule.Phoneme append(java.lang.CharSequence r2) {
                r1 = this;
                java.lang.StringBuilder r0 = r1.phonemeText
                r0.append(r2)
                return r1
        }

        public org.apache.commons.codec1.language.bm.Languages.LanguageSet getLanguages() {
                r1 = this;
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r0 = r1.languages
                return r0
        }

        public java.lang.CharSequence getPhonemeText() {
                r1 = this;
                java.lang.StringBuilder r0 = r1.phonemeText
                return r0
        }

        @Override
        public java.lang.Iterable<org.apache.commons.codec1.language.bm.Rule.Phoneme> getPhonemes() {
                r1 = this;
                java.util.Set r0 = java.util.Collections.singleton(r1)
                return r0
        }

        @java.lang.Deprecated
        public org.apache.commons.codec1.language.bm.Rule.Phoneme join(org.apache.commons.codec1.language.bm.Rule.Phoneme r4) {
                r3 = this;
                org.apache.commons.codec1.language.bm.Rule$Phoneme r0 = new org.apache.commons.codec1.language.bm.Rule$Phoneme
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.StringBuilder r2 = r3.phonemeText
                java.lang.String r2 = r2.toString()
                java.lang.String r2 = java.lang.String.valueOf(r2)
                r1.<init>(r2)
                java.lang.StringBuilder r2 = r4.phonemeText
                java.lang.String r2 = r2.toString()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r2 = r3.languages
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r4 = r4.languages
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r4 = r2.restrictTo(r4)
                r0.<init>(r1, r4)
                return r0
        }

        public org.apache.commons.codec1.language.bm.Rule.Phoneme mergeWithLanguage(org.apache.commons.codec1.language.bm.Languages.LanguageSet r4) {
                r3 = this;
                org.apache.commons.codec1.language.bm.Rule$Phoneme r0 = new org.apache.commons.codec1.language.bm.Rule$Phoneme
                java.lang.StringBuilder r1 = r3.phonemeText
                java.lang.String r1 = r1.toString()
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r2 = r3.languages
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r4 = r2.merge(r4)
                r0.<init>(r1, r4)
                return r0
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.StringBuilder r1 = r2.phonemeText
                java.lang.String r1 = r1.toString()
                java.lang.String r1 = java.lang.String.valueOf(r1)
                r0.<init>(r1)
                java.lang.String r1 = "["
                r0.append(r1)
                org.apache.commons.codec1.language.bm.Languages$LanguageSet r1 = r2.languages
                r0.append(r1)
                java.lang.String r1 = "]"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public interface PhonemeExpr {
        java.lang.Iterable<org.apache.commons.codec1.language.bm.Rule.Phoneme> getPhonemes();
    }

    public static final class PhonemeList implements org.apache.commons.codec1.language.bm.Rule.PhonemeExpr {
        private final java.util.List<org.apache.commons.codec1.language.bm.Rule.Phoneme> phonemes;

        public PhonemeList(java.util.List<org.apache.commons.codec1.language.bm.Rule.Phoneme> r1) {
                r0 = this;
                r0.<init>()
                r0.phonemes = r1
                return
        }

        @Override
        public java.lang.Iterable getPhonemes() {
                r1 = this;
                java.util.List r0 = r1.getPhonemes()
                return r0
        }

        @Override
        public java.util.List<org.apache.commons.codec1.language.bm.Rule.Phoneme> getPhonemes() {
                r1 = this;
                java.util.List<org.apache.commons.codec1.language.bm.Rule$Phoneme> r0 = r1.phonemes
                return r0
        }
    }

    public interface RPattern {
        boolean isMatch(java.lang.CharSequence r1);
    }

    static {
            org.apache.commons.codec1.language.bm.Rule$1 r0 = new org.apache.commons.codec1.language.bm.Rule$1
            r0.<init>()
            org.apache.commons.codec1.language.bm.Rule.ALL_STRINGS_RMATCHER = r0
            java.util.EnumMap r0 = new java.util.EnumMap
            java.lang.Class<org.apache.commons.codec1.language.bm.NameType> r1 = org.apache.commons.codec1.language.bm.NameType.class
            r0.<init>(r1)
            org.apache.commons.codec1.language.bm.Rule.RULES = r0
            org.apache.commons.codec1.language.bm.NameType[] r0 = org.apache.commons.codec1.language.bm.NameType.values()
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L17:
            if (r3 < r1) goto L1a
            return
        L1a:
            r4 = r0[r3]
            java.util.EnumMap r5 = new java.util.EnumMap
            java.lang.Class<org.apache.commons.codec1.language.bm.RuleType> r6 = org.apache.commons.codec1.language.bm.RuleType.class
            r5.<init>(r6)
            org.apache.commons.codec1.language.bm.RuleType[] r6 = org.apache.commons.codec1.language.bm.RuleType.values()
            int r7 = r6.length
            r8 = r2
        L29:
            if (r8 < r7) goto L37
            java.util.Map<org.apache.commons.codec1.language.bm.NameType, java.util.Map<org.apache.commons.codec1.language.bm.RuleType, java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec1.language.bm.Rule>>>>> r6 = org.apache.commons.codec1.language.bm.Rule.RULES
            java.util.Map r5 = java.util.Collections.unmodifiableMap(r5)
            r6.put(r4, r5)
            int r3 = r3 + 1
            goto L17
        L37:
            r9 = r6[r8]
            java.util.HashMap r10 = new java.util.HashMap
            r10.<init>()
            org.apache.commons.codec1.language.bm.Languages r11 = org.apache.commons.codec1.language.bm.Languages.getInstance(r4)
            java.util.Set r11 = r11.getLanguages()
            java.util.Iterator r11 = r11.iterator()
        L4a:
            boolean r12 = r11.hasNext()
            if (r12 != 0) goto L73
            org.apache.commons.codec1.language.bm.RuleType r11 = org.apache.commons.codec1.language.bm.RuleType.RULES
            boolean r11 = r9.equals(r11)
            if (r11 != 0) goto L69
            java.lang.String r11 = "common"
            java.util.Scanner r12 = createScanner(r4, r9, r11)
            java.lang.String r13 = createResourceName(r4, r9, r11)
            java.util.Map r12 = parseRules(r12, r13)
            r10.put(r11, r12)
        L69:
            java.util.Map r10 = java.util.Collections.unmodifiableMap(r10)
            r5.put(r9, r10)
            int r8 = r8 + 1
            goto L29
        L73:
            java.lang.Object r12 = r11.next()
            java.lang.String r12 = (java.lang.String) r12
            java.util.Scanner r13 = createScanner(r4, r9, r12)     // Catch: java.lang.IllegalStateException -> L89
            java.lang.String r14 = createResourceName(r4, r9, r12)     // Catch: java.lang.IllegalStateException -> L89
            java.util.Map r13 = parseRules(r13, r14)     // Catch: java.lang.IllegalStateException -> L89
            r10.put(r12, r13)     // Catch: java.lang.IllegalStateException -> L89
            goto L4a
        L89:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Problem processing "
            r2.<init>(r3)
            java.lang.String r3 = createResourceName(r4, r9, r12)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
    }

    public Rule(java.lang.String r1, java.lang.String r2, java.lang.String r3, org.apache.commons.codec1.language.bm.Rule.PhonemeExpr r4) {
            r0 = this;
            r0.<init>()
            r0.pattern = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r1.<init>(r2)
            java.lang.String r2 = "$"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            org.apache.commons.codec1.language.bm.Rule$RPattern r1 = pattern(r1)
            r0.lContext = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "^"
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            org.apache.commons.codec1.language.bm.Rule$RPattern r1 = pattern(r1)
            r0.rContext = r1
            r0.phoneme = r4
            return
    }

    static boolean access$0(java.lang.CharSequence r0, java.lang.CharSequence r1) {
            boolean r0 = startsWith(r0, r1)
            return r0
    }

    static boolean access$1(java.lang.CharSequence r0, java.lang.CharSequence r1) {
            boolean r0 = endsWith(r0, r1)
            return r0
    }

    static boolean access$2(java.lang.CharSequence r0, char r1) {
            boolean r0 = contains(r0, r1)
            return r0
    }

    private static boolean contains(java.lang.CharSequence r3, char r4) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r3.length()
            if (r1 < r2) goto L9
            return r0
        L9:
            char r2 = r3.charAt(r1)
            if (r2 != r4) goto L11
            r3 = 1
            return r3
        L11:
            int r1 = r1 + 1
            goto L2
    }

    private static java.lang.String createResourceName(org.apache.commons.codec1.language.bm.NameType r2, org.apache.commons.codec1.language.bm.RuleType r3, java.lang.String r4) {
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r2 = r2.getName()
            r1 = 0
            r0[r1] = r2
            java.lang.String r2 = r3.getName()
            r3 = 1
            r0[r3] = r2
            r2 = 2
            r0[r2] = r4
            java.lang.String r2 = "org/apache/commons/codec/language/bm/%s_%s_%s.txt"
            java.lang.String r2 = java.lang.String.format(r2, r0)
            return r2
    }

    private static java.util.Scanner createScanner(java.lang.String r3) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r3 = "org/apache/commons/codec/language/bm/%s.txt"
            java.lang.String r3 = java.lang.String.format(r3, r0)
            java.lang.Class<org.apache.commons.codec1.language.bm.Languages> r0 = org.apache.commons.codec1.language.bm.Languages.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            java.io.InputStream r0 = r0.getResourceAsStream(r3)
            if (r0 == 0) goto L20
            java.util.Scanner r3 = new java.util.Scanner
            java.lang.String r1 = "UTF-8"
            r3.<init>(r0, r1)
            return r3
        L20:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Unable to load resource: "
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    private static java.util.Scanner createScanner(org.apache.commons.codec1.language.bm.NameType r1, org.apache.commons.codec1.language.bm.RuleType r2, java.lang.String r3) {
            java.lang.String r1 = createResourceName(r1, r2, r3)
            java.lang.Class<org.apache.commons.codec1.language.bm.Languages> r2 = org.apache.commons.codec1.language.bm.Languages.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            java.io.InputStream r2 = r2.getResourceAsStream(r1)
            if (r2 == 0) goto L18
            java.util.Scanner r1 = new java.util.Scanner
            java.lang.String r3 = "UTF-8"
            r1.<init>(r2, r3)
            return r1
        L18:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "Unable to load resource: "
            r3.<init>(r0)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            throw r2
    }

    private static boolean endsWith(java.lang.CharSequence r6, java.lang.CharSequence r7) {
            int r0 = r7.length()
            int r1 = r6.length()
            r2 = 0
            if (r0 <= r1) goto Lc
            return r2
        Lc:
            int r0 = r6.length()
            r1 = 1
            int r0 = r0 - r1
            int r3 = r7.length()
            int r3 = r3 - r1
        L17:
            if (r3 >= 0) goto L1a
            return r1
        L1a:
            char r4 = r6.charAt(r0)
            char r5 = r7.charAt(r3)
            if (r4 == r5) goto L25
            return r2
        L25:
            int r0 = r0 + (-1)
            int r3 = r3 + (-1)
            goto L17
    }

    public static java.util.List<org.apache.commons.codec1.language.bm.Rule> getInstance(org.apache.commons.codec1.language.bm.NameType r3, org.apache.commons.codec1.language.bm.RuleType r4, java.lang.String r5) {
            java.util.HashSet r0 = new java.util.HashSet
            r1 = 1
            java.lang.String[] r1 = new java.lang.String[r1]
            r2 = 0
            r1[r2] = r5
            java.util.List r5 = java.util.Arrays.asList(r1)
            r0.<init>(r5)
            org.apache.commons.codec1.language.bm.Languages$LanguageSet r5 = org.apache.commons.codec1.language.bm.Languages.LanguageSet.from(r0)
            java.util.List r3 = getInstance(r3, r4, r5)
            return r3
    }

    public static java.util.List<org.apache.commons.codec1.language.bm.Rule> getInstance(org.apache.commons.codec1.language.bm.NameType r0, org.apache.commons.codec1.language.bm.RuleType r1, org.apache.commons.codec1.language.bm.Languages.LanguageSet r2) {
            java.util.Map r0 = getInstanceMap(r0, r1, r2)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r2 = r0.hasNext()
            if (r2 != 0) goto L18
            return r1
        L18:
            java.lang.Object r2 = r0.next()
            java.util.List r2 = (java.util.List) r2
            r1.addAll(r2)
            goto L11
    }

    public static java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec1.language.bm.Rule>> getInstanceMap(org.apache.commons.codec1.language.bm.NameType r3, org.apache.commons.codec1.language.bm.RuleType r4, java.lang.String r5) {
            java.util.Map<org.apache.commons.codec1.language.bm.NameType, java.util.Map<org.apache.commons.codec1.language.bm.RuleType, java.util.Map<java.lang.String, java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec1.language.bm.Rule>>>>> r0 = org.apache.commons.codec1.language.bm.Rule.RULES
            java.lang.Object r0 = r0.get(r3)
            java.util.Map r0 = (java.util.Map) r0
            java.lang.Object r0 = r0.get(r4)
            java.util.Map r0 = (java.util.Map) r0
            java.lang.Object r0 = r0.get(r5)
            java.util.Map r0 = (java.util.Map) r0
            if (r0 == 0) goto L17
            return r0
        L17:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r3 = r3.getName()
            r1[r2] = r3
            r3 = 1
            java.lang.String r4 = r4.getName()
            r1[r3] = r4
            r3 = 2
            r1[r3] = r5
            java.lang.String r3 = "No rules found for %s, %s, %s."
            java.lang.String r3 = java.lang.String.format(r3, r1)
            r0.<init>(r3)
            throw r0
    }

    public static java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec1.language.bm.Rule>> getInstanceMap(org.apache.commons.codec1.language.bm.NameType r1, org.apache.commons.codec1.language.bm.RuleType r2, org.apache.commons.codec1.language.bm.Languages.LanguageSet r3) {
            boolean r0 = r3.isSingleton()
            if (r0 == 0) goto Lf
            java.lang.String r3 = r3.getAny()
            java.util.Map r1 = getInstanceMap(r1, r2, r3)
            goto L15
        Lf:
            java.lang.String r3 = "any"
            java.util.Map r1 = getInstanceMap(r1, r2, r3)
        L15:
            return r1
    }

    private static org.apache.commons.codec1.language.bm.Rule.Phoneme parsePhoneme(java.lang.String r3) {
            java.lang.String r0 = "["
            int r0 = r3.indexOf(r0)
            if (r0 < 0) goto L42
            java.lang.String r1 = "]"
            boolean r1 = r3.endsWith(r1)
            if (r1 == 0) goto L3a
            r1 = 0
            java.lang.String r1 = r3.substring(r1, r0)
            int r0 = r0 + 1
            int r2 = r3.length()
            int r2 = r2 + (-1)
            java.lang.String r3 = r3.substring(r0, r2)
            java.util.HashSet r0 = new java.util.HashSet
            java.lang.String r2 = "[+]"
            java.lang.String[] r3 = r3.split(r2)
            java.util.List r3 = java.util.Arrays.asList(r3)
            r0.<init>(r3)
            org.apache.commons.codec1.language.bm.Rule$Phoneme r3 = new org.apache.commons.codec1.language.bm.Rule$Phoneme
            org.apache.commons.codec1.language.bm.Languages$LanguageSet r0 = org.apache.commons.codec1.language.bm.Languages.LanguageSet.from(r0)
            r3.<init>(r1, r0)
            return r3
        L3a:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Phoneme expression contains a '[' but does not end in ']'"
            r3.<init>(r0)
            throw r3
        L42:
            org.apache.commons.codec1.language.bm.Rule$Phoneme r0 = new org.apache.commons.codec1.language.bm.Rule$Phoneme
            org.apache.commons.codec1.language.bm.Languages$LanguageSet r1 = org.apache.commons.codec1.language.bm.Languages.ANY_LANGUAGE
            r0.<init>(r3, r1)
            return r0
    }

    private static org.apache.commons.codec1.language.bm.Rule.PhonemeExpr parsePhonemeExpr(java.lang.String r5) {
            java.lang.String r0 = "("
            boolean r0 = r5.startsWith(r0)
            if (r0 == 0) goto L5d
            java.lang.String r0 = ")"
            boolean r0 = r5.endsWith(r0)
            if (r0 == 0) goto L55
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = r5.length()
            r2 = 1
            int r1 = r1 - r2
            java.lang.String r5 = r5.substring(r2, r1)
            java.lang.String r1 = "[|]"
            java.lang.String[] r1 = r5.split(r1)
            int r2 = r1.length
            r3 = 0
        L27:
            if (r3 < r2) goto L49
            java.lang.String r1 = "|"
            boolean r2 = r5.startsWith(r1)
            if (r2 != 0) goto L37
            boolean r5 = r5.endsWith(r1)
            if (r5 == 0) goto L43
        L37:
            org.apache.commons.codec1.language.bm.Rule$Phoneme r5 = new org.apache.commons.codec1.language.bm.Rule$Phoneme
            org.apache.commons.codec1.language.bm.Languages$LanguageSet r1 = org.apache.commons.codec1.language.bm.Languages.ANY_LANGUAGE
            java.lang.String r2 = ""
            r5.<init>(r2, r1)
            r0.add(r5)
        L43:
            org.apache.commons.codec1.language.bm.Rule$PhonemeList r5 = new org.apache.commons.codec1.language.bm.Rule$PhonemeList
            r5.<init>(r0)
            return r5
        L49:
            r4 = r1[r3]
            org.apache.commons.codec1.language.bm.Rule$Phoneme r4 = parsePhoneme(r4)
            r0.add(r4)
            int r3 = r3 + 1
            goto L27
        L55:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Phoneme starts with '(' so must end with ')'"
            r5.<init>(r0)
            throw r5
        L5d:
            org.apache.commons.codec1.language.bm.Rule$Phoneme r5 = parsePhoneme(r5)
            return r5
    }

    private static java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec1.language.bm.Rule>> parseRules(java.util.Scanner r18, java.lang.String r19) {
            r11 = r19
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r12 = 1
            r13 = 0
            r1 = r13
            r14 = r1
        Lb:
            boolean r2 = r18.hasNextLine()
            if (r2 != 0) goto L12
            return r0
        L12:
            int r15 = r1 + 1
            java.lang.String r1 = r18.nextLine()
            if (r14 == 0) goto L28
            java.lang.String r2 = "*/"
            boolean r1 = r1.endsWith(r2)
            if (r1 == 0) goto L25
            r14 = r13
            goto Lf8
        L25:
            r2 = r12
            goto Lf7
        L28:
            java.lang.String r2 = "/*"
            boolean r2 = r1.startsWith(r2)
            if (r2 == 0) goto L33
            r14 = r12
            goto Lf8
        L33:
            java.lang.String r2 = "//"
            int r2 = r1.indexOf(r2)
            if (r2 < 0) goto L40
            java.lang.String r2 = r1.substring(r13, r2)
            goto L41
        L40:
            r2 = r1
        L41:
            java.lang.String r2 = r2.trim()
            int r3 = r2.length()
            if (r3 != 0) goto L4c
            goto L25
        L4c:
            java.lang.String r3 = "#include"
            boolean r3 = r2.startsWith(r3)
            java.lang.String r10 = "' in "
            if (r3 == 0) goto La3
            r3 = 8
            java.lang.String r2 = r2.substring(r3)
            java.lang.String r2 = r2.trim()
            java.lang.String r3 = " "
            boolean r3 = r2.contains(r3)
            if (r3 != 0) goto L89
            java.util.Scanner r1 = createScanner(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = java.lang.String.valueOf(r19)
            r3.<init>(r4)
            java.lang.String r4 = "->"
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.util.Map r1 = parseRules(r1, r2)
            r0.putAll(r1)
            goto L25
        L89:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Malformed import statement '"
            r2.<init>(r3)
            r2.append(r1)
            r2.append(r10)
            r2.append(r11)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            throw r0
        La3:
            java.lang.String r3 = "\\s+"
            java.lang.String[] r2 = r2.split(r3)
            int r3 = r2.length
            r4 = 4
            if (r3 != r4) goto L11c
            r1 = r2[r13]     // Catch: java.lang.IllegalArgumentException -> Lfd
            java.lang.String r8 = stripQuotes(r1)     // Catch: java.lang.IllegalArgumentException -> Lfd
            r1 = r2[r12]     // Catch: java.lang.IllegalArgumentException -> Lfd
            java.lang.String r9 = stripQuotes(r1)     // Catch: java.lang.IllegalArgumentException -> Lfd
            r1 = 2
            r1 = r2[r1]     // Catch: java.lang.IllegalArgumentException -> Lfd
            java.lang.String r16 = stripQuotes(r1)     // Catch: java.lang.IllegalArgumentException -> Lfd
            r1 = 3
            r1 = r2[r1]     // Catch: java.lang.IllegalArgumentException -> Lfd
            java.lang.String r1 = stripQuotes(r1)     // Catch: java.lang.IllegalArgumentException -> Lfd
            org.apache.commons.codec1.language.bm.Rule$PhonemeExpr r5 = parsePhonemeExpr(r1)     // Catch: java.lang.IllegalArgumentException -> Lfd
            org.apache.commons.codec1.language.bm.Rule$2 r7 = new org.apache.commons.codec1.language.bm.Rule$2     // Catch: java.lang.IllegalArgumentException -> Lfd
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r16
            r6 = r15
            r12 = r7
            r7 = r19
            r17 = r10
            r10 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.IllegalArgumentException -> Lfb
            java.lang.String r1 = r12.pattern     // Catch: java.lang.IllegalArgumentException -> Lfb
            r2 = 1
            java.lang.String r1 = r1.substring(r13, r2)     // Catch: java.lang.IllegalArgumentException -> Lfb
            java.lang.Object r3 = r0.get(r1)     // Catch: java.lang.IllegalArgumentException -> Lfb
            java.util.List r3 = (java.util.List) r3     // Catch: java.lang.IllegalArgumentException -> Lfb
            if (r3 != 0) goto Lf4
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.IllegalArgumentException -> Lfb
            r3.<init>()     // Catch: java.lang.IllegalArgumentException -> Lfb
            r0.put(r1, r3)     // Catch: java.lang.IllegalArgumentException -> Lfb
        Lf4:
            r3.add(r12)     // Catch: java.lang.IllegalArgumentException -> Lfb
        Lf7:
            r12 = r2
        Lf8:
            r1 = r15
            goto Lb
        Lfb:
            r0 = move-exception
            goto L100
        Lfd:
            r0 = move-exception
            r17 = r10
        L100:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Problem parsing line '"
            r2.<init>(r3)
            r2.append(r15)
            r3 = r17
            r2.append(r3)
            r2.append(r11)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
        L11c:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "Malformed rule statement split into "
            r3.<init>(r4)
            int r2 = r2.length
            r3.append(r2)
            java.lang.String r2 = " parts: "
            r3.append(r2)
            r3.append(r1)
            java.lang.String r1 = " in "
            r3.append(r1)
            r3.append(r11)
            java.lang.String r1 = r3.toString()
            r0.<init>(r1)
            throw r0
    }

    private static org.apache.commons.codec1.language.bm.Rule.RPattern pattern(java.lang.String r8) {
            java.lang.String r0 = "^"
            boolean r1 = r8.startsWith(r0)
            java.lang.String r2 = "$"
            boolean r2 = r8.endsWith(r2)
            r3 = 1
            int r4 = r8.length()
            if (r2 == 0) goto L14
            int r4 = r4 - r3
        L14:
            java.lang.String r4 = r8.substring(r1, r4)
            java.lang.String r5 = "["
            boolean r6 = r4.contains(r5)
            if (r6 != 0) goto L53
            if (r1 == 0) goto L36
            if (r2 == 0) goto L36
            int r8 = r4.length()
            if (r8 != 0) goto L30
            org.apache.commons.codec1.language.bm.Rule$3 r8 = new org.apache.commons.codec1.language.bm.Rule$3
            r8.<init>()
            return r8
        L30:
            org.apache.commons.codec1.language.bm.Rule$4 r8 = new org.apache.commons.codec1.language.bm.Rule$4
            r8.<init>(r4)
            return r8
        L36:
            if (r1 != 0) goto L3a
            if (r2 == 0) goto L43
        L3a:
            int r0 = r4.length()
            if (r0 != 0) goto L43
            org.apache.commons.codec1.language.bm.Rule$RPattern r8 = org.apache.commons.codec1.language.bm.Rule.ALL_STRINGS_RMATCHER
            return r8
        L43:
            if (r1 == 0) goto L4b
            org.apache.commons.codec1.language.bm.Rule$5 r8 = new org.apache.commons.codec1.language.bm.Rule$5
            r8.<init>(r4)
            return r8
        L4b:
            if (r2 == 0) goto L95
            org.apache.commons.codec1.language.bm.Rule$6 r8 = new org.apache.commons.codec1.language.bm.Rule$6
            r8.<init>(r4)
            return r8
        L53:
            boolean r6 = r4.startsWith(r5)
            java.lang.String r7 = "]"
            boolean r7 = r4.endsWith(r7)
            if (r6 == 0) goto L95
            if (r7 == 0) goto L95
            int r6 = r4.length()
            int r6 = r6 - r3
            java.lang.String r4 = r4.substring(r3, r6)
            boolean r5 = r4.contains(r5)
            if (r5 != 0) goto L95
            boolean r0 = r4.startsWith(r0)
            if (r0 == 0) goto L7a
            java.lang.String r4 = r4.substring(r3)
        L7a:
            r0 = r0 ^ r3
            if (r1 == 0) goto L85
            if (r2 == 0) goto L85
            org.apache.commons.codec1.language.bm.Rule$7 r8 = new org.apache.commons.codec1.language.bm.Rule$7
            r8.<init>(r4, r0)
            return r8
        L85:
            if (r1 == 0) goto L8d
            org.apache.commons.codec1.language.bm.Rule$8 r8 = new org.apache.commons.codec1.language.bm.Rule$8
            r8.<init>(r4, r0)
            return r8
        L8d:
            if (r2 == 0) goto L95
            org.apache.commons.codec1.language.bm.Rule$9 r8 = new org.apache.commons.codec1.language.bm.Rule$9
            r8.<init>(r4, r0)
            return r8
        L95:
            org.apache.commons.codec1.language.bm.Rule$10 r0 = new org.apache.commons.codec1.language.bm.Rule$10
            r0.<init>(r8)
            return r0
    }

    private static boolean startsWith(java.lang.CharSequence r4, java.lang.CharSequence r5) {
            int r0 = r5.length()
            int r1 = r4.length()
            r2 = 0
            if (r0 <= r1) goto Lc
            return r2
        Lc:
            r0 = r2
        Ld:
            int r1 = r5.length()
            if (r0 < r1) goto L15
            r4 = 1
            return r4
        L15:
            char r1 = r4.charAt(r0)
            char r3 = r5.charAt(r0)
            if (r1 == r3) goto L20
            return r2
        L20:
            int r0 = r0 + 1
            goto Ld
    }

    private static java.lang.String stripQuotes(java.lang.String r3) {
            java.lang.String r0 = "\""
            boolean r1 = r3.startsWith(r0)
            r2 = 1
            if (r1 == 0) goto Ld
            java.lang.String r3 = r3.substring(r2)
        Ld:
            boolean r0 = r3.endsWith(r0)
            if (r0 == 0) goto L1d
            r0 = 0
            int r1 = r3.length()
            int r1 = r1 - r2
            java.lang.String r3 = r3.substring(r0, r1)
        L1d:
            return r3
    }

    public org.apache.commons.codec1.language.bm.Rule.RPattern getLContext() {
            r1 = this;
            org.apache.commons.codec1.language.bm.Rule$RPattern r0 = r1.lContext
            return r0
    }

    public java.lang.String getPattern() {
            r1 = this;
            java.lang.String r0 = r1.pattern
            return r0
    }

    public org.apache.commons.codec1.language.bm.Rule.PhonemeExpr getPhoneme() {
            r1 = this;
            org.apache.commons.codec1.language.bm.Rule$PhonemeExpr r0 = r1.phoneme
            return r0
    }

    public org.apache.commons.codec1.language.bm.Rule.RPattern getRContext() {
            r1 = this;
            org.apache.commons.codec1.language.bm.Rule$RPattern r0 = r1.rContext
            return r0
    }

    public boolean patternAndContextMatches(java.lang.CharSequence r5, int r6) {
            r4 = this;
            if (r6 < 0) goto L3a
            java.lang.String r0 = r4.pattern
            int r0 = r0.length()
            int r0 = r0 + r6
            int r1 = r5.length()
            r2 = 0
            if (r0 <= r1) goto L11
            return r2
        L11:
            java.lang.CharSequence r1 = r5.subSequence(r6, r0)
            java.lang.String r3 = r4.pattern
            boolean r1 = r1.equals(r3)
            if (r1 != 0) goto L1e
            return r2
        L1e:
            org.apache.commons.codec1.language.bm.Rule$RPattern r1 = r4.rContext
            int r3 = r5.length()
            java.lang.CharSequence r0 = r5.subSequence(r0, r3)
            boolean r0 = r1.isMatch(r0)
            if (r0 != 0) goto L2f
            return r2
        L2f:
            org.apache.commons.codec1.language.bm.Rule$RPattern r0 = r4.lContext
            java.lang.CharSequence r5 = r5.subSequence(r2, r6)
            boolean r5 = r0.isMatch(r5)
            return r5
        L3a:
            java.lang.IndexOutOfBoundsException r5 = new java.lang.IndexOutOfBoundsException
            java.lang.String r6 = "Can not match pattern at negative indexes"
            r5.<init>(r6)
            throw r5
    }
}
