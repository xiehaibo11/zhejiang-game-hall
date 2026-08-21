package org.apache.commons.codec.language.bm;

public class Rule {
    public static final java.lang.String ALL = "ALL";
    public static final org.apache.commons.codec.language.bm.Rule.RPattern ALL_STRINGS_RMATCHER = null;
    private static final java.lang.String DOUBLE_QUOTE = "\"";
    private static final java.lang.String HASH_INCLUDE = "#include";
    private static final java.util.Map<org.apache.commons.codec.language.bm.NameType, java.util.Map<org.apache.commons.codec.language.bm.RuleType, java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec.language.bm.Rule>>>> RULES = null;
    private final org.apache.commons.codec.language.bm.Rule.RPattern lContext;
    private final java.lang.String pattern;
    private final org.apache.commons.codec.language.bm.Rule.PhonemeExpr phoneme;
    private final org.apache.commons.codec.language.bm.Rule.RPattern rContext;











    public static final class Phoneme implements org.apache.commons.codec.language.bm.Rule.PhonemeExpr {
        public static final java.util.Comparator<org.apache.commons.codec.language.bm.Rule.Phoneme> COMPARATOR = null;
        private final org.apache.commons.codec.language.bm.Languages.LanguageSet languages;
        private final java.lang.CharSequence phonemeText;


        static {
                org.apache.commons.codec.language.bm.Rule$Phoneme$1 r0 = new org.apache.commons.codec.language.bm.Rule$Phoneme$1
                r0.<init>()
                org.apache.commons.codec.language.bm.Rule.Phoneme.COMPARATOR = r0
                return
        }

        public Phoneme(java.lang.CharSequence r1, org.apache.commons.codec.language.bm.Languages.LanguageSet r2) {
                r0 = this;
                r0.<init>()
                r0.phonemeText = r1
                r0.languages = r2
                return
        }

        static java.lang.CharSequence access$000(org.apache.commons.codec.language.bm.Rule.Phoneme r0) {
                java.lang.CharSequence r0 = r0.phonemeText
                return r0
        }

        public org.apache.commons.codec.language.bm.Rule.Phoneme append(java.lang.CharSequence r4) {
                r3 = this;
                org.apache.commons.codec.language.bm.Rule$Phoneme r0 = new org.apache.commons.codec.language.bm.Rule$Phoneme
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.CharSequence r2 = r3.phonemeText
                java.lang.String r2 = r2.toString()
                r1.append(r2)
                java.lang.String r4 = r4.toString()
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                org.apache.commons.codec.language.bm.Languages$LanguageSet r1 = r3.languages
                r0.<init>(r4, r1)
                return r0
        }

        public org.apache.commons.codec.language.bm.Languages.LanguageSet getLanguages() {
                r1 = this;
                org.apache.commons.codec.language.bm.Languages$LanguageSet r0 = r1.languages
                return r0
        }

        public java.lang.CharSequence getPhonemeText() {
                r1 = this;
                java.lang.CharSequence r0 = r1.phonemeText
                return r0
        }

        @Override
        public java.lang.Iterable<org.apache.commons.codec.language.bm.Rule.Phoneme> getPhonemes() {
                r1 = this;
                java.util.Set r0 = java.util.Collections.singleton(r1)
                return r0
        }

        public org.apache.commons.codec.language.bm.Rule.Phoneme join(org.apache.commons.codec.language.bm.Rule.Phoneme r4) {
                r3 = this;
                org.apache.commons.codec.language.bm.Rule$Phoneme r0 = new org.apache.commons.codec.language.bm.Rule$Phoneme
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.CharSequence r2 = r3.phonemeText
                java.lang.String r2 = r2.toString()
                r1.append(r2)
                java.lang.CharSequence r2 = r4.phonemeText
                java.lang.String r2 = r2.toString()
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                org.apache.commons.codec.language.bm.Languages$LanguageSet r2 = r3.languages
                org.apache.commons.codec.language.bm.Languages$LanguageSet r4 = r4.languages
                org.apache.commons.codec.language.bm.Languages$LanguageSet r4 = r2.restrictTo(r4)
                r0.<init>(r1, r4)
                return r0
        }
    }

    public interface PhonemeExpr {
        java.lang.Iterable<org.apache.commons.codec.language.bm.Rule.Phoneme> getPhonemes();
    }

    public static final class PhonemeList implements org.apache.commons.codec.language.bm.Rule.PhonemeExpr {
        private final java.util.List<org.apache.commons.codec.language.bm.Rule.Phoneme> phonemes;

        public PhonemeList(java.util.List<org.apache.commons.codec.language.bm.Rule.Phoneme> r1) {
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
        public java.util.List<org.apache.commons.codec.language.bm.Rule.Phoneme> getPhonemes() {
                r1 = this;
                java.util.List<org.apache.commons.codec.language.bm.Rule$Phoneme> r0 = r1.phonemes
                return r0
        }
    }

    public interface RPattern {
        boolean isMatch(java.lang.CharSequence r1);
    }

    static {
            org.apache.commons.codec.language.bm.Rule$1 r0 = new org.apache.commons.codec.language.bm.Rule$1
            r0.<init>()
            org.apache.commons.codec.language.bm.Rule.ALL_STRINGS_RMATCHER = r0
            java.util.EnumMap r0 = new java.util.EnumMap
            java.lang.Class<org.apache.commons.codec.language.bm.NameType> r1 = org.apache.commons.codec.language.bm.NameType.class
            r0.<init>(r1)
            org.apache.commons.codec.language.bm.Rule.RULES = r0
            org.apache.commons.codec.language.bm.NameType[] r0 = org.apache.commons.codec.language.bm.NameType.values()
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L17:
            if (r3 >= r1) goto La5
            r4 = r0[r3]
            java.util.EnumMap r5 = new java.util.EnumMap
            java.lang.Class<org.apache.commons.codec.language.bm.RuleType> r6 = org.apache.commons.codec.language.bm.RuleType.class
            r5.<init>(r6)
            org.apache.commons.codec.language.bm.RuleType[] r6 = org.apache.commons.codec.language.bm.RuleType.values()
            int r7 = r6.length
            r8 = r2
        L28:
            if (r8 >= r7) goto L98
            r9 = r6[r8]
            java.util.HashMap r10 = new java.util.HashMap
            r10.<init>()
            org.apache.commons.codec.language.bm.Languages r11 = org.apache.commons.codec.language.bm.Languages.getInstance(r4)
            java.util.Set r11 = r11.getLanguages()
            java.util.Iterator r11 = r11.iterator()
        L3d:
            boolean r12 = r11.hasNext()
            if (r12 == 0) goto L75
            java.lang.Object r12 = r11.next()
            java.lang.String r12 = (java.lang.String) r12
            java.util.Scanner r13 = createScanner(r4, r9, r12)     // Catch: java.lang.IllegalStateException -> L59
            java.lang.String r14 = createResourceName(r4, r9, r12)     // Catch: java.lang.IllegalStateException -> L59
            java.util.List r13 = parseRules(r13, r14)     // Catch: java.lang.IllegalStateException -> L59
            r10.put(r12, r13)     // Catch: java.lang.IllegalStateException -> L59
            goto L3d
        L59:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Problem processing "
            r2.append(r3)
            java.lang.String r3 = createResourceName(r4, r9, r12)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            throw r1
        L75:
            org.apache.commons.codec.language.bm.RuleType r11 = org.apache.commons.codec.language.bm.RuleType.RULES
            boolean r11 = r9.equals(r11)
            if (r11 != 0) goto L8e
            java.lang.String r11 = "common"
            java.util.Scanner r12 = createScanner(r4, r9, r11)
            java.lang.String r13 = createResourceName(r4, r9, r11)
            java.util.List r12 = parseRules(r12, r13)
            r10.put(r11, r12)
        L8e:
            java.util.Map r10 = java.util.Collections.unmodifiableMap(r10)
            r5.put(r9, r10)
            int r8 = r8 + 1
            goto L28
        L98:
            java.util.Map<org.apache.commons.codec.language.bm.NameType, java.util.Map<org.apache.commons.codec.language.bm.RuleType, java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec.language.bm.Rule>>>> r6 = org.apache.commons.codec.language.bm.Rule.RULES
            java.util.Map r5 = java.util.Collections.unmodifiableMap(r5)
            r6.put(r4, r5)
            int r3 = r3 + 1
            goto L17
        La5:
            return
    }

    public Rule(java.lang.String r1, java.lang.String r2, java.lang.String r3, org.apache.commons.codec.language.bm.Rule.PhonemeExpr r4) {
            r0 = this;
            r0.<init>()
            r0.pattern = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = "$"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            org.apache.commons.codec.language.bm.Rule$RPattern r1 = pattern(r1)
            r0.lContext = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "^"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            org.apache.commons.codec.language.bm.Rule$RPattern r1 = pattern(r1)
            r0.rContext = r1
            r0.phoneme = r4
            return
    }

    static boolean access$100(java.lang.CharSequence r0, java.lang.CharSequence r1) {
            boolean r0 = startsWith(r0, r1)
            return r0
    }

    static boolean access$200(java.lang.CharSequence r0, java.lang.CharSequence r1) {
            boolean r0 = endsWith(r0, r1)
            return r0
    }

    static boolean access$300(java.lang.CharSequence r0, char r1) {
            boolean r0 = contains(r0, r1)
            return r0
    }

    private static boolean contains(java.lang.CharSequence r3, char r4) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r3.length()
            if (r1 >= r2) goto L13
            char r2 = r3.charAt(r1)
            if (r2 != r4) goto L10
            r3 = 1
            return r3
        L10:
            int r1 = r1 + 1
            goto L2
        L13:
            return r0
    }

    private static java.lang.String createResourceName(org.apache.commons.codec.language.bm.NameType r2, org.apache.commons.codec.language.bm.RuleType r3, java.lang.String r4) {
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
            java.lang.Class<org.apache.commons.codec.language.bm.Languages> r0 = org.apache.commons.codec.language.bm.Languages.class
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
            r1.<init>()
            java.lang.String r2 = "Unable to load resource: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    private static java.util.Scanner createScanner(org.apache.commons.codec.language.bm.NameType r1, org.apache.commons.codec.language.bm.RuleType r2, java.lang.String r3) {
            java.lang.String r1 = createResourceName(r1, r2, r3)
            java.lang.Class<org.apache.commons.codec.language.bm.Languages> r2 = org.apache.commons.codec.language.bm.Languages.class
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
            r3.<init>()
            java.lang.String r0 = "Unable to load resource: "
            r3.append(r0)
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
            if (r3 < 0) goto L29
            char r4 = r6.charAt(r0)
            char r5 = r7.charAt(r3)
            if (r4 == r5) goto L24
            return r2
        L24:
            int r0 = r0 + (-1)
            int r3 = r3 + (-1)
            goto L17
        L29:
            return r1
    }

    public static java.util.List<org.apache.commons.codec.language.bm.Rule> getInstance(org.apache.commons.codec.language.bm.NameType r3, org.apache.commons.codec.language.bm.RuleType r4, java.lang.String r5) {
            java.util.Map<org.apache.commons.codec.language.bm.NameType, java.util.Map<org.apache.commons.codec.language.bm.RuleType, java.util.Map<java.lang.String, java.util.List<org.apache.commons.codec.language.bm.Rule>>>> r0 = org.apache.commons.codec.language.bm.Rule.RULES
            java.lang.Object r0 = r0.get(r3)
            java.util.Map r0 = (java.util.Map) r0
            java.lang.Object r0 = r0.get(r4)
            java.util.Map r0 = (java.util.Map) r0
            java.lang.Object r0 = r0.get(r5)
            java.util.List r0 = (java.util.List) r0
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

    public static java.util.List<org.apache.commons.codec.language.bm.Rule> getInstance(org.apache.commons.codec.language.bm.NameType r1, org.apache.commons.codec.language.bm.RuleType r2, org.apache.commons.codec.language.bm.Languages.LanguageSet r3) {
            boolean r0 = r3.isSingleton()
            if (r0 == 0) goto Lb
            java.lang.String r3 = r3.getAny()
            goto Ld
        Lb:
            java.lang.String r3 = "any"
        Ld:
            java.util.List r1 = getInstance(r1, r2, r3)
            return r1
    }

    private static org.apache.commons.codec.language.bm.Rule.Phoneme parsePhoneme(java.lang.String r3) {
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
            org.apache.commons.codec.language.bm.Rule$Phoneme r3 = new org.apache.commons.codec.language.bm.Rule$Phoneme
            org.apache.commons.codec.language.bm.Languages$LanguageSet r0 = org.apache.commons.codec.language.bm.Languages.LanguageSet.from(r0)
            r3.<init>(r1, r0)
            return r3
        L3a:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Phoneme expression contains a '[' but does not end in ']'"
            r3.<init>(r0)
            throw r3
        L42:
            org.apache.commons.codec.language.bm.Rule$Phoneme r0 = new org.apache.commons.codec.language.bm.Rule$Phoneme
            org.apache.commons.codec.language.bm.Languages$LanguageSet r1 = org.apache.commons.codec.language.bm.Languages.ANY_LANGUAGE
            r0.<init>(r3, r1)
            return r0
    }

    private static org.apache.commons.codec.language.bm.Rule.PhonemeExpr parsePhonemeExpr(java.lang.String r5) {
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
            if (r3 >= r2) goto L35
            r4 = r1[r3]
            org.apache.commons.codec.language.bm.Rule$Phoneme r4 = parsePhoneme(r4)
            r0.add(r4)
            int r3 = r3 + 1
            goto L27
        L35:
            java.lang.String r1 = "|"
            boolean r2 = r5.startsWith(r1)
            if (r2 != 0) goto L43
            boolean r5 = r5.endsWith(r1)
            if (r5 == 0) goto L4f
        L43:
            org.apache.commons.codec.language.bm.Rule$Phoneme r5 = new org.apache.commons.codec.language.bm.Rule$Phoneme
            org.apache.commons.codec.language.bm.Languages$LanguageSet r1 = org.apache.commons.codec.language.bm.Languages.ANY_LANGUAGE
            java.lang.String r2 = ""
            r5.<init>(r2, r1)
            r0.add(r5)
        L4f:
            org.apache.commons.codec.language.bm.Rule$PhonemeList r5 = new org.apache.commons.codec.language.bm.Rule$PhonemeList
            r5.<init>(r0)
            return r5
        L55:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Phoneme starts with '(' so must end with ')'"
            r5.<init>(r0)
            throw r5
        L5d:
            org.apache.commons.codec.language.bm.Rule$Phoneme r5 = parsePhoneme(r5)
            return r5
    }

    private static java.util.List<org.apache.commons.codec.language.bm.Rule> parseRules(java.util.Scanner r13, java.lang.String r14) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            r2 = r1
            r3 = r2
        L8:
            boolean r4 = r13.hasNextLine()
            if (r4 == 0) goto L105
            r4 = 1
            int r2 = r2 + r4
            java.lang.String r5 = r13.nextLine()
            if (r3 == 0) goto L20
            java.lang.String r4 = "*/"
            boolean r4 = r5.endsWith(r4)
            if (r4 == 0) goto L8
            r3 = r1
            goto L8
        L20:
            java.lang.String r6 = "/*"
            boolean r6 = r5.startsWith(r6)
            if (r6 == 0) goto L2a
            r3 = r4
            goto L8
        L2a:
            java.lang.String r6 = "//"
            int r6 = r5.indexOf(r6)
            if (r6 < 0) goto L37
            java.lang.String r6 = r5.substring(r1, r6)
            goto L38
        L37:
            r6 = r5
        L38:
            java.lang.String r6 = r6.trim()
            int r7 = r6.length()
            if (r7 != 0) goto L43
            goto L8
        L43:
            java.lang.String r7 = "#include"
            boolean r7 = r6.startsWith(r7)
            if (r7 == 0) goto L95
            r4 = 8
            java.lang.String r4 = r6.substring(r4)
            java.lang.String r4 = r4.trim()
            java.lang.String r6 = " "
            boolean r6 = r4.contains(r6)
            if (r6 == 0) goto L74
            java.io.PrintStream r4 = java.lang.System.err
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Warining: malformed import statement: "
            r6.append(r7)
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            r4.println(r5)
            goto L8
        L74:
            java.util.Scanner r5 = createScanner(r4)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r14)
            java.lang.String r7 = "->"
            r6.append(r7)
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            java.util.List r4 = parseRules(r5, r4)
            r0.addAll(r4)
            goto L8
        L95:
            java.lang.String r7 = "\\s+"
            java.lang.String[] r6 = r6.split(r7)
            int r7 = r6.length
            r8 = 4
            if (r7 == r8) goto Lc0
            java.io.PrintStream r4 = java.lang.System.err
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Warning: malformed rule statement split into "
            r7.append(r8)
            int r6 = r6.length
            r7.append(r6)
            java.lang.String r6 = " parts: "
            r7.append(r6)
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r4.println(r5)
            goto L8
        Lc0:
            r5 = r6[r1]     // Catch: java.lang.IllegalArgumentException -> Led
            java.lang.String r7 = stripQuotes(r5)     // Catch: java.lang.IllegalArgumentException -> Led
            r4 = r6[r4]     // Catch: java.lang.IllegalArgumentException -> Led
            java.lang.String r4 = stripQuotes(r4)     // Catch: java.lang.IllegalArgumentException -> Led
            r5 = 2
            r5 = r6[r5]     // Catch: java.lang.IllegalArgumentException -> Led
            java.lang.String r8 = stripQuotes(r5)     // Catch: java.lang.IllegalArgumentException -> Led
            r5 = 3
            r5 = r6[r5]     // Catch: java.lang.IllegalArgumentException -> Led
            java.lang.String r5 = stripQuotes(r5)     // Catch: java.lang.IllegalArgumentException -> Led
            org.apache.commons.codec.language.bm.Rule$PhonemeExpr r9 = parsePhonemeExpr(r5)     // Catch: java.lang.IllegalArgumentException -> Led
            org.apache.commons.codec.language.bm.Rule$2 r12 = new org.apache.commons.codec.language.bm.Rule$2     // Catch: java.lang.IllegalArgumentException -> Led
            r5 = r12
            r6 = r7
            r7 = r4
            r10 = r2
            r11 = r14
            r5.<init>(r6, r7, r8, r9, r10, r11)     // Catch: java.lang.IllegalArgumentException -> Led
            r0.add(r12)     // Catch: java.lang.IllegalArgumentException -> Led
            goto L8
        Led:
            r13 = move-exception
            java.lang.IllegalStateException r14 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Problem parsing line "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r14.<init>(r0, r13)
            throw r14
        L105:
            return r0
    }

    private static org.apache.commons.codec.language.bm.Rule.RPattern pattern(java.lang.String r8) {
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
            org.apache.commons.codec.language.bm.Rule$3 r8 = new org.apache.commons.codec.language.bm.Rule$3
            r8.<init>()
            return r8
        L30:
            org.apache.commons.codec.language.bm.Rule$4 r8 = new org.apache.commons.codec.language.bm.Rule$4
            r8.<init>(r4)
            return r8
        L36:
            if (r1 != 0) goto L3a
            if (r2 == 0) goto L43
        L3a:
            int r0 = r4.length()
            if (r0 != 0) goto L43
            org.apache.commons.codec.language.bm.Rule$RPattern r8 = org.apache.commons.codec.language.bm.Rule.ALL_STRINGS_RMATCHER
            return r8
        L43:
            if (r1 == 0) goto L4b
            org.apache.commons.codec.language.bm.Rule$5 r8 = new org.apache.commons.codec.language.bm.Rule$5
            r8.<init>(r4)
            return r8
        L4b:
            if (r2 == 0) goto L95
            org.apache.commons.codec.language.bm.Rule$6 r8 = new org.apache.commons.codec.language.bm.Rule$6
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
            org.apache.commons.codec.language.bm.Rule$7 r8 = new org.apache.commons.codec.language.bm.Rule$7
            r8.<init>(r4, r0)
            return r8
        L85:
            if (r1 == 0) goto L8d
            org.apache.commons.codec.language.bm.Rule$8 r8 = new org.apache.commons.codec.language.bm.Rule$8
            r8.<init>(r4, r0)
            return r8
        L8d:
            if (r2 == 0) goto L95
            org.apache.commons.codec.language.bm.Rule$9 r8 = new org.apache.commons.codec.language.bm.Rule$9
            r8.<init>(r4, r0)
            return r8
        L95:
            org.apache.commons.codec.language.bm.Rule$10 r0 = new org.apache.commons.codec.language.bm.Rule$10
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
            if (r0 >= r1) goto L21
            char r1 = r4.charAt(r0)
            char r3 = r5.charAt(r0)
            if (r1 == r3) goto L1e
            return r2
        L1e:
            int r0 = r0 + 1
            goto Ld
        L21:
            r4 = 1
            return r4
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

    public org.apache.commons.codec.language.bm.Rule.RPattern getLContext() {
            r1 = this;
            org.apache.commons.codec.language.bm.Rule$RPattern r0 = r1.lContext
            return r0
    }

    public java.lang.String getPattern() {
            r1 = this;
            java.lang.String r0 = r1.pattern
            return r0
    }

    public org.apache.commons.codec.language.bm.Rule.PhonemeExpr getPhoneme() {
            r1 = this;
            org.apache.commons.codec.language.bm.Rule$PhonemeExpr r0 = r1.phoneme
            return r0
    }

    public org.apache.commons.codec.language.bm.Rule.RPattern getRContext() {
            r1 = this;
            org.apache.commons.codec.language.bm.Rule$RPattern r0 = r1.rContext
            return r0
    }

    public boolean patternAndContextMatches(java.lang.CharSequence r6, int r7) {
            r5 = this;
            if (r7 < 0) goto L3b
            java.lang.String r0 = r5.pattern
            int r0 = r0.length()
            int r0 = r0 + r7
            int r1 = r6.length()
            r2 = 0
            if (r0 <= r1) goto L11
            return r2
        L11:
            java.lang.CharSequence r1 = r6.subSequence(r7, r0)
            java.lang.String r3 = r5.pattern
            boolean r1 = r1.equals(r3)
            org.apache.commons.codec.language.bm.Rule$RPattern r3 = r5.rContext
            int r4 = r6.length()
            java.lang.CharSequence r0 = r6.subSequence(r0, r4)
            boolean r0 = r3.isMatch(r0)
            org.apache.commons.codec.language.bm.Rule$RPattern r3 = r5.lContext
            java.lang.CharSequence r6 = r6.subSequence(r2, r7)
            boolean r6 = r3.isMatch(r6)
            if (r1 == 0) goto L3a
            if (r0 == 0) goto L3a
            if (r6 == 0) goto L3a
            r2 = 1
        L3a:
            return r2
        L3b:
            java.lang.IndexOutOfBoundsException r6 = new java.lang.IndexOutOfBoundsException
            java.lang.String r7 = "Can not match pattern at negative indexes"
            r6.<init>(r7)
            throw r6
    }
}
