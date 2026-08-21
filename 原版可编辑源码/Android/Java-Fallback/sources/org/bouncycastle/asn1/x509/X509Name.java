package org.bouncycastle.asn1.x509;

public class X509Name extends org.bouncycastle.asn1.ASN1Encodable {
    public static final org.bouncycastle.asn1.DERObjectIdentifier BUSINESS_CATEGORY = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier C = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier CN = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier COUNTRY_OF_CITIZENSHIP = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier COUNTRY_OF_RESIDENCE = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier DATE_OF_BIRTH = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier DC = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier DN_QUALIFIER = null;
    public static final java.util.Hashtable DefaultLookUp = null;
    public static boolean DefaultReverse;
    public static final java.util.Hashtable DefaultSymbols = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier E = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier EmailAddress = null;
    private static final java.lang.Boolean FALSE = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier GENDER = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier GENERATION = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier GIVENNAME = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier INITIALS = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier L = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier NAME_AT_BIRTH = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier O = null;
    public static final java.util.Hashtable OIDLookUp = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier OU = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier PLACE_OF_BIRTH = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier POSTAL_ADDRESS = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier POSTAL_CODE = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier PSEUDONYM = null;
    public static final java.util.Hashtable RFC1779Symbols = null;
    public static final java.util.Hashtable RFC2253Symbols = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier SERIALNUMBER = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier SN = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier ST = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier STREET = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier SURNAME = null;
    public static final java.util.Hashtable SymbolLookUp = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier T = null;
    private static final java.lang.Boolean TRUE = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier UID = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier UNIQUE_IDENTIFIER = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier UnstructuredAddress = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier UnstructuredName = null;
    private java.util.Vector added;
    private org.bouncycastle.asn1.x509.X509NameEntryConverter converter;
    private java.util.Vector ordering;
    private org.bouncycastle.asn1.ASN1Sequence seq;
    private java.util.Vector values;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.6"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.C = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.10"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.O = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.11"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.OU = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.12"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.T = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.3"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.CN = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.5"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.SN = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.9"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.STREET = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Name.SN
            org.bouncycastle.asn1.x509.X509Name.SERIALNUMBER = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.7"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.L = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.8"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.ST = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.4"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.SURNAME = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.42"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.GIVENNAME = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.43"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.INITIALS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.44"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.GENERATION = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.45"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.UNIQUE_IDENTIFIER = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.15"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.BUSINESS_CATEGORY = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.17"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.POSTAL_CODE = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.46"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.DN_QUALIFIER = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.65"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.PSEUDONYM = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.6.1.5.5.7.9.1"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.DATE_OF_BIRTH = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.6.1.5.5.7.9.2"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.PLACE_OF_BIRTH = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.6.1.5.5.7.9.3"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.GENDER = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.6.1.5.5.7.9.4"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.COUNTRY_OF_CITIZENSHIP = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.6.1.5.5.7.9.5"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.COUNTRY_OF_RESIDENCE = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.36.8.3.14"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.NAME_AT_BIRTH = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.4.16"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.POSTAL_ADDRESS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_emailAddress
            org.bouncycastle.asn1.x509.X509Name.EmailAddress = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_unstructuredName
            org.bouncycastle.asn1.x509.X509Name.UnstructuredName = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_unstructuredAddress
            org.bouncycastle.asn1.x509.X509Name.UnstructuredAddress = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Name.EmailAddress
            org.bouncycastle.asn1.x509.X509Name.E = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "0.9.2342.19200300.100.1.25"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.DC = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "0.9.2342.19200300.100.1.1"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.X509Name.UID = r0
            r0 = 0
            org.bouncycastle.asn1.x509.X509Name.DefaultReverse = r0
            java.util.Hashtable r1 = new java.util.Hashtable
            r1.<init>()
            org.bouncycastle.asn1.x509.X509Name.DefaultSymbols = r1
            java.util.Hashtable r1 = new java.util.Hashtable
            r1.<init>()
            org.bouncycastle.asn1.x509.X509Name.RFC2253Symbols = r1
            java.util.Hashtable r1 = new java.util.Hashtable
            r1.<init>()
            org.bouncycastle.asn1.x509.X509Name.RFC1779Symbols = r1
            java.util.Hashtable r1 = new java.util.Hashtable
            r1.<init>()
            org.bouncycastle.asn1.x509.X509Name.DefaultLookUp = r1
            java.util.Hashtable r2 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.x509.X509Name.OIDLookUp = r2
            org.bouncycastle.asn1.x509.X509Name.SymbolLookUp = r1
            java.lang.Boolean r1 = new java.lang.Boolean
            r2 = 1
            r1.<init>(r2)
            org.bouncycastle.asn1.x509.X509Name.TRUE = r1
            java.lang.Boolean r1 = new java.lang.Boolean
            r1.<init>(r0)
            org.bouncycastle.asn1.x509.X509Name.FALSE = r1
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.C
            java.lang.String r2 = "C"
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.O
            java.lang.String r3 = "O"
            r0.put(r1, r3)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.T
            java.lang.String r4 = "T"
            r0.put(r1, r4)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.OU
            java.lang.String r4 = "OU"
            r0.put(r1, r4)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.CN
            java.lang.String r5 = "CN"
            r0.put(r1, r5)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.L
            java.lang.String r6 = "L"
            r0.put(r1, r6)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.ST
            java.lang.String r7 = "ST"
            r0.put(r1, r7)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.SN
            java.lang.String r8 = "SERIALNUMBER"
            r0.put(r1, r8)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.EmailAddress
            java.lang.String r8 = "E"
            r0.put(r1, r8)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.DC
            java.lang.String r8 = "DC"
            r0.put(r1, r8)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.UID
            java.lang.String r9 = "UID"
            r0.put(r1, r9)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.STREET
            java.lang.String r10 = "STREET"
            r0.put(r1, r10)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.SURNAME
            java.lang.String r11 = "SURNAME"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.GIVENNAME
            java.lang.String r11 = "GIVENNAME"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.INITIALS
            java.lang.String r11 = "INITIALS"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.GENERATION
            java.lang.String r11 = "GENERATION"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.UnstructuredAddress
            java.lang.String r11 = "unstructuredAddress"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.UnstructuredName
            java.lang.String r11 = "unstructuredName"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.UNIQUE_IDENTIFIER
            java.lang.String r11 = "UniqueIdentifier"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.DN_QUALIFIER
            java.lang.String r11 = "DN"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.PSEUDONYM
            java.lang.String r11 = "Pseudonym"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.POSTAL_ADDRESS
            java.lang.String r11 = "PostalAddress"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.NAME_AT_BIRTH
            java.lang.String r11 = "NameAtBirth"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.COUNTRY_OF_CITIZENSHIP
            java.lang.String r11 = "CountryOfCitizenship"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.COUNTRY_OF_RESIDENCE
            java.lang.String r11 = "CountryOfResidence"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.GENDER
            java.lang.String r11 = "Gender"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.PLACE_OF_BIRTH
            java.lang.String r11 = "PlaceOfBirth"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.DATE_OF_BIRTH
            java.lang.String r11 = "DateOfBirth"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.POSTAL_CODE
            java.lang.String r11 = "PostalCode"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.BUSINESS_CATEGORY
            java.lang.String r11 = "BusinessCategory"
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC2253Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.C
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC2253Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.O
            r0.put(r1, r3)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC2253Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.OU
            r0.put(r1, r4)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC2253Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.CN
            r0.put(r1, r5)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC2253Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.L
            r0.put(r1, r6)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC2253Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.ST
            r0.put(r1, r7)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC2253Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.STREET
            r0.put(r1, r10)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC2253Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.DC
            r0.put(r1, r8)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC2253Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.UID
            r0.put(r1, r9)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC1779Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.C
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC1779Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.O
            r0.put(r1, r3)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC1779Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.OU
            r0.put(r1, r4)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC1779Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.CN
            r0.put(r1, r5)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC1779Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.L
            r0.put(r1, r6)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC1779Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.ST
            r0.put(r1, r7)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.RFC1779Symbols
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.STREET
            r0.put(r1, r10)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.C
            java.lang.String r2 = "c"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.O
            java.lang.String r2 = "o"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.T
            java.lang.String r2 = "t"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.OU
            java.lang.String r2 = "ou"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.CN
            java.lang.String r2 = "cn"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.L
            java.lang.String r2 = "l"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.ST
            java.lang.String r2 = "st"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.SN
            java.lang.String r2 = "sn"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.SN
            java.lang.String r2 = "serialnumber"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.STREET
            java.lang.String r2 = "street"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.E
            java.lang.String r2 = "emailaddress"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.DC
            java.lang.String r2 = "dc"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.E
            java.lang.String r2 = "e"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.UID
            java.lang.String r2 = "uid"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.SURNAME
            java.lang.String r2 = "surname"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.GIVENNAME
            java.lang.String r2 = "givenname"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.INITIALS
            java.lang.String r2 = "initials"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.GENERATION
            java.lang.String r2 = "generation"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.UnstructuredAddress
            java.lang.String r2 = "unstructuredaddress"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.UnstructuredName
            java.lang.String r2 = "unstructuredname"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.UNIQUE_IDENTIFIER
            java.lang.String r2 = "uniqueidentifier"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.DN_QUALIFIER
            java.lang.String r2 = "dn"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.PSEUDONYM
            java.lang.String r2 = "pseudonym"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.POSTAL_ADDRESS
            java.lang.String r2 = "postaladdress"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.NAME_AT_BIRTH
            java.lang.String r2 = "nameofbirth"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.COUNTRY_OF_CITIZENSHIP
            java.lang.String r2 = "countryofcitizenship"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.COUNTRY_OF_RESIDENCE
            java.lang.String r2 = "countryofresidence"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.GENDER
            java.lang.String r2 = "gender"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.PLACE_OF_BIRTH
            java.lang.String r2 = "placeofbirth"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.DATE_OF_BIRTH
            java.lang.String r2 = "dateofbirth"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.POSTAL_CODE
            java.lang.String r2 = "postalcode"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Name.BUSINESS_CATEGORY
            java.lang.String r2 = "businesscategory"
            r0.put(r2, r1)
            return
    }

    public X509Name(java.lang.String r3) {
            r2 = this;
            boolean r0 = org.bouncycastle.asn1.x509.X509Name.DefaultReverse
            java.util.Hashtable r1 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            r2.<init>(r0, r1, r3)
            return
    }

    public X509Name(java.lang.String r3, org.bouncycastle.asn1.x509.X509NameEntryConverter r4) {
            r2 = this;
            boolean r0 = org.bouncycastle.asn1.x509.X509Name.DefaultReverse
            java.util.Hashtable r1 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            r2.<init>(r0, r1, r3, r4)
            return
    }

    public X509Name(java.util.Hashtable r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    public X509Name(java.util.Vector r2, java.util.Hashtable r3) {
            r1 = this;
            org.bouncycastle.asn1.x509.X509DefaultEntryConverter r0 = new org.bouncycastle.asn1.x509.X509DefaultEntryConverter
            r0.<init>()
            r1.<init>(r2, r3, r0)
            return
    }

    public X509Name(java.util.Vector r4, java.util.Hashtable r5, org.bouncycastle.asn1.x509.X509NameEntryConverter r6) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.converter = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r3.ordering = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r3.values = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r3.added = r0
            r3.converter = r6
            r6 = 0
            if (r4 == 0) goto L3a
            r0 = 0
        L21:
            int r1 = r4.size()
            if (r0 == r1) goto L55
            java.util.Vector r1 = r3.ordering
            java.lang.Object r2 = r4.elementAt(r0)
            r1.addElement(r2)
            java.util.Vector r1 = r3.added
            java.lang.Boolean r2 = org.bouncycastle.asn1.x509.X509Name.FALSE
            r1.addElement(r2)
            int r0 = r0 + 1
            goto L21
        L3a:
            java.util.Enumeration r4 = r5.keys()
        L3e:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L55
            java.util.Vector r0 = r3.ordering
            java.lang.Object r1 = r4.nextElement()
            r0.addElement(r1)
            java.util.Vector r0 = r3.added
            java.lang.Boolean r1 = org.bouncycastle.asn1.x509.X509Name.FALSE
            r0.addElement(r1)
            goto L3e
        L55:
            java.util.Vector r4 = r3.ordering
            int r4 = r4.size()
            if (r6 == r4) goto L97
            java.util.Vector r4 = r3.ordering
            java.lang.Object r4 = r4.elementAt(r6)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = (org.bouncycastle.asn1.DERObjectIdentifier) r4
            java.lang.Object r0 = r5.get(r4)
            if (r0 == 0) goto L77
            java.util.Vector r0 = r3.values
            java.lang.Object r4 = r5.get(r4)
            r0.addElement(r4)
            int r6 = r6 + 1
            goto L55
        L77:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "No attribute for object id - "
            r6.append(r0)
            java.lang.String r4 = r4.getId()
            r6.append(r4)
            java.lang.String r4 = " - passed to distinguished name"
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r5.<init>(r4)
            throw r5
        L97:
            return
    }

    public X509Name(java.util.Vector r2, java.util.Vector r3) {
            r1 = this;
            org.bouncycastle.asn1.x509.X509DefaultEntryConverter r0 = new org.bouncycastle.asn1.x509.X509DefaultEntryConverter
            r0.<init>()
            r1.<init>(r2, r3, r0)
            return
    }

    public X509Name(java.util.Vector r3, java.util.Vector r4, org.bouncycastle.asn1.x509.X509NameEntryConverter r5) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.converter = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r2.ordering = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r2.values = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r2.added = r0
            r2.converter = r5
            int r5 = r3.size()
            int r0 = r4.size()
            if (r5 != r0) goto L4b
            r5 = 0
        L28:
            int r0 = r3.size()
            if (r5 >= r0) goto L4a
            java.util.Vector r0 = r2.ordering
            java.lang.Object r1 = r3.elementAt(r5)
            r0.addElement(r1)
            java.util.Vector r0 = r2.values
            java.lang.Object r1 = r4.elementAt(r5)
            r0.addElement(r1)
            java.util.Vector r0 = r2.added
            java.lang.Boolean r1 = org.bouncycastle.asn1.x509.X509Name.FALSE
            r0.addElement(r1)
            int r5 = r5 + 1
            goto L28
        L4a:
            return
        L4b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "oids vector must be same length as values."
            r3.<init>(r4)
            throw r3
    }

    public X509Name(org.bouncycastle.asn1.ASN1Sequence r8) {
            r7 = this;
            r7.<init>()
            r0 = 0
            r7.converter = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r7.ordering = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r7.values = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r7.added = r0
            r7.seq = r8
            java.util.Enumeration r8 = r8.getObjects()
        L21:
            boolean r0 = r8.hasMoreElements()
            if (r0 == 0) goto Lbc
            java.lang.Object r0 = r8.nextElement()
            org.bouncycastle.asn1.ASN1Set r0 = org.bouncycastle.asn1.ASN1Set.getInstance(r0)
            r1 = 0
            r2 = 0
        L31:
            int r3 = r0.size()
            if (r2 >= r3) goto L21
            org.bouncycastle.asn1.DEREncodable r3 = r0.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1Sequence r3 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r3)
            int r4 = r3.size()
            r5 = 2
            if (r4 != r5) goto Lb4
            java.util.Vector r4 = r7.ordering
            org.bouncycastle.asn1.DEREncodable r5 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r5 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r5)
            r4.addElement(r5)
            r4 = 1
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r4)
            boolean r4 = r3 instanceof org.bouncycastle.asn1.DERString
            if (r4 == 0) goto L7e
            boolean r4 = r3 instanceof org.bouncycastle.asn1.DERUniversalString
            if (r4 != 0) goto L7e
            org.bouncycastle.asn1.DERString r3 = (org.bouncycastle.asn1.DERString) r3
            java.lang.String r3 = r3.getString()
            char r4 = r3.charAt(r1)
            r5 = 35
            if (r4 != r5) goto L7b
            java.util.Vector r4 = r7.values
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "\\"
            r5.append(r6)
            goto L9a
        L7b:
            java.util.Vector r4 = r7.values
            goto La1
        L7e:
            java.util.Vector r4 = r7.values
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "#"
            r5.append(r6)
            org.bouncycastle.asn1.DERObject r3 = r3.getDERObject()
            byte[] r3 = r3.getDEREncoded()
            byte[] r3 = org.bouncycastle.util.encoders.Hex.encode(r3)
            java.lang.String r3 = r7.bytesToString(r3)
        L9a:
            r5.append(r3)
            java.lang.String r3 = r5.toString()
        La1:
            r4.addElement(r3)
            java.util.Vector r3 = r7.added
            if (r2 == 0) goto Lab
            java.lang.Boolean r4 = org.bouncycastle.asn1.x509.X509Name.TRUE
            goto Lad
        Lab:
            java.lang.Boolean r4 = org.bouncycastle.asn1.x509.X509Name.FALSE
        Lad:
            r3.addElement(r4)
            int r2 = r2 + 1
            goto L31
        Lb4:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "badly sized pair"
            r8.<init>(r0)
            throw r8
        Lbc:
            return
    }

    public X509Name(boolean r2, java.lang.String r3) {
            r1 = this;
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            r1.<init>(r2, r0, r3)
            return
    }

    public X509Name(boolean r2, java.lang.String r3, org.bouncycastle.asn1.x509.X509NameEntryConverter r4) {
            r1 = this;
            java.util.Hashtable r0 = org.bouncycastle.asn1.x509.X509Name.DefaultLookUp
            r1.<init>(r2, r0, r3, r4)
            return
    }

    public X509Name(boolean r2, java.util.Hashtable r3, java.lang.String r4) {
            r1 = this;
            org.bouncycastle.asn1.x509.X509DefaultEntryConverter r0 = new org.bouncycastle.asn1.x509.X509DefaultEntryConverter
            r0.<init>()
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public X509Name(boolean r7, java.util.Hashtable r8, java.lang.String r9, org.bouncycastle.asn1.x509.X509NameEntryConverter r10) {
            r6 = this;
            r6.<init>()
            r0 = 0
            r6.converter = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r6.ordering = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r6.values = r0
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r6.added = r0
            r6.converter = r10
            org.bouncycastle.asn1.x509.X509NameTokenizer r10 = new org.bouncycastle.asn1.x509.X509NameTokenizer
            r10.<init>(r9)
        L22:
            boolean r9 = r10.hasMoreTokens()
            r0 = 0
            r1 = 1
            if (r9 == 0) goto Lac
            java.lang.String r9 = r10.nextToken()
            r2 = 61
            int r3 = r9.indexOf(r2)
            r4 = -1
            if (r3 == r4) goto La4
            java.lang.String r4 = r9.substring(r0, r3)
            int r3 = r3 + 1
            java.lang.String r9 = r9.substring(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = r6.decodeOID(r4, r8)
            r4 = 43
            int r5 = r9.indexOf(r4)
            if (r5 <= 0) goto L91
            org.bouncycastle.asn1.x509.X509NameTokenizer r5 = new org.bouncycastle.asn1.x509.X509NameTokenizer
            r5.<init>(r9, r4)
            java.lang.String r9 = r5.nextToken()
            java.util.Vector r4 = r6.ordering
            r4.addElement(r3)
            java.util.Vector r3 = r6.values
            r3.addElement(r9)
            java.util.Vector r9 = r6.added
            java.lang.Boolean r3 = org.bouncycastle.asn1.x509.X509Name.FALSE
        L64:
            r9.addElement(r3)
            boolean r9 = r5.hasMoreTokens()
            if (r9 == 0) goto L22
            java.lang.String r9 = r5.nextToken()
            int r3 = r9.indexOf(r2)
            java.lang.String r4 = r9.substring(r0, r3)
            int r3 = r3 + r1
            java.lang.String r9 = r9.substring(r3)
            java.util.Vector r3 = r6.ordering
            org.bouncycastle.asn1.DERObjectIdentifier r4 = r6.decodeOID(r4, r8)
            r3.addElement(r4)
            java.util.Vector r3 = r6.values
            r3.addElement(r9)
            java.util.Vector r9 = r6.added
            java.lang.Boolean r3 = org.bouncycastle.asn1.x509.X509Name.TRUE
            goto L64
        L91:
            java.util.Vector r0 = r6.ordering
            r0.addElement(r3)
            java.util.Vector r0 = r6.values
            r0.addElement(r9)
            java.util.Vector r9 = r6.added
            java.lang.Boolean r0 = org.bouncycastle.asn1.x509.X509Name.FALSE
            r9.addElement(r0)
            goto L22
        La4:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "badly formated directory string"
            r7.<init>(r8)
            throw r7
        Lac:
            if (r7 == 0) goto L117
            java.util.Vector r7 = new java.util.Vector
            r7.<init>()
            java.util.Vector r8 = new java.util.Vector
            r8.<init>()
            java.util.Vector r9 = new java.util.Vector
            r9.<init>()
            r10 = 0
            r2 = 1
        Lbf:
            java.util.Vector r3 = r6.ordering
            int r3 = r3.size()
            if (r10 >= r3) goto L111
            java.util.Vector r3 = r6.added
            java.lang.Object r3 = r3.elementAt(r10)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto Lf2
            java.util.Vector r3 = r6.ordering
            java.lang.Object r3 = r3.elementAt(r10)
            r7.insertElementAt(r3, r2)
            java.util.Vector r3 = r6.values
            java.lang.Object r3 = r3.elementAt(r10)
            r8.insertElementAt(r3, r2)
            java.util.Vector r3 = r6.added
            java.lang.Object r3 = r3.elementAt(r10)
            r9.insertElementAt(r3, r2)
            int r2 = r2 + r1
            goto L10e
        Lf2:
            java.util.Vector r2 = r6.ordering
            java.lang.Object r2 = r2.elementAt(r10)
            r7.insertElementAt(r2, r0)
            java.util.Vector r2 = r6.values
            java.lang.Object r2 = r2.elementAt(r10)
            r8.insertElementAt(r2, r0)
            java.util.Vector r2 = r6.added
            java.lang.Object r2 = r2.elementAt(r10)
            r9.insertElementAt(r2, r0)
            r2 = 1
        L10e:
            int r10 = r10 + 1
            goto Lbf
        L111:
            r6.ordering = r7
            r6.values = r8
            r6.added = r9
        L117:
            return
    }

    private void appendValue(java.lang.StringBuffer r5, java.util.Hashtable r6, org.bouncycastle.asn1.DERObjectIdentifier r7, java.lang.String r8) {
            r4 = this;
            java.lang.Object r6 = r6.get(r7)
            java.lang.String r6 = (java.lang.String) r6
            if (r6 == 0) goto L9
            goto Ld
        L9:
            java.lang.String r6 = r7.getId()
        Ld:
            r5.append(r6)
            r6 = 61
            r5.append(r6)
            int r6 = r5.length()
            r5.append(r8)
            int r7 = r5.length()
            int r0 = r8.length()
            r1 = 92
            r2 = 2
            r3 = 1
            if (r0 < r2) goto L3b
            r0 = 0
            char r0 = r8.charAt(r0)
            if (r0 != r1) goto L3b
            char r8 = r8.charAt(r3)
            r0 = 35
            if (r8 != r0) goto L3b
            int r6 = r6 + 2
        L3b:
            if (r6 == r7) goto L7e
            char r8 = r5.charAt(r6)
            r0 = 44
            if (r8 == r0) goto L73
            char r8 = r5.charAt(r6)
            r0 = 34
            if (r8 == r0) goto L73
            char r8 = r5.charAt(r6)
            if (r8 == r1) goto L73
            char r8 = r5.charAt(r6)
            r0 = 43
            if (r8 == r0) goto L73
            char r8 = r5.charAt(r6)
            r0 = 60
            if (r8 == r0) goto L73
            char r8 = r5.charAt(r6)
            r0 = 62
            if (r8 == r0) goto L73
            char r8 = r5.charAt(r6)
            r0 = 59
            if (r8 != r0) goto L7c
        L73:
            java.lang.String r8 = "\\"
            r5.insert(r6, r8)
            int r6 = r6 + 1
            int r7 = r7 + 1
        L7c:
            int r6 = r6 + r3
            goto L3b
        L7e:
            return
    }

    private java.lang.String bytesToString(byte[] r5) {
            r4 = this;
            int r0 = r5.length
            char[] r1 = new char[r0]
            r2 = 0
        L4:
            if (r2 == r0) goto L10
            r3 = r5[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            char r3 = (char) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L4
        L10:
            java.lang.String r5 = new java.lang.String
            r5.<init>(r1)
            return r5
    }

    private org.bouncycastle.asn1.DERObjectIdentifier decodeOID(java.lang.String r4, java.util.Hashtable r5) {
            r3 = this;
            java.lang.String r0 = org.bouncycastle.util.Strings.toUpperCase(r4)
            java.lang.String r1 = "OID."
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.DERObjectIdentifier r5 = new org.bouncycastle.asn1.DERObjectIdentifier
            r0 = 4
            java.lang.String r4 = r4.substring(r0)
            r5.<init>(r4)
            return r5
        L17:
            r0 = 0
            char r1 = r4.charAt(r0)
            r2 = 48
            if (r1 < r2) goto L2e
            char r0 = r4.charAt(r0)
            r1 = 57
            if (r0 > r1) goto L2e
            org.bouncycastle.asn1.DERObjectIdentifier r5 = new org.bouncycastle.asn1.DERObjectIdentifier
            r5.<init>(r4)
            return r5
        L2e:
            java.lang.String r0 = org.bouncycastle.util.Strings.toLowerCase(r4)
            java.lang.Object r5 = r5.get(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r5 = (org.bouncycastle.asn1.DERObjectIdentifier) r5
            if (r5 == 0) goto L3b
            return r5
        L3b:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unknown object id - "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " - passed to distinguished name"
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
    }

    private boolean equivalentStrings(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r2 = r2.trim()
            java.lang.String r2 = org.bouncycastle.util.Strings.toLowerCase(r2)
            java.lang.String r3 = r3.trim()
            java.lang.String r3 = org.bouncycastle.util.Strings.toLowerCase(r3)
            boolean r0 = r2.equals(r3)
            if (r0 != 0) goto L26
            java.lang.String r2 = r1.stripInternalSpaces(r2)
            java.lang.String r3 = r1.stripInternalSpaces(r3)
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L26
            r2 = 0
            return r2
        L26:
            r2 = 1
            return r2
    }

    public static org.bouncycastle.asn1.x509.X509Name getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.X509Name
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.X509Name r0 = new org.bouncycastle.asn1.x509.X509Name
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.x509.X509Name r3 = (org.bouncycastle.asn1.x509.X509Name) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.X509Name getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.X509Name r0 = getInstance(r0)
            return r0
    }

    private java.lang.Boolean isEncoded(java.lang.String r2) {
            r1 = this;
            r0 = 0
            char r2 = r2.charAt(r0)
            r0 = 35
            if (r2 != r0) goto Lc
            java.lang.Boolean r2 = org.bouncycastle.asn1.x509.X509Name.TRUE
            return r2
        Lc:
            java.lang.Boolean r2 = org.bouncycastle.asn1.x509.X509Name.FALSE
            return r2
    }

    private java.lang.String stripInternalSpaces(java.lang.String r6) {
            r5 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            int r1 = r6.length()
            if (r1 == 0) goto L2b
            r1 = 0
            char r1 = r6.charAt(r1)
            r0.append(r1)
            r2 = 1
        L14:
            int r3 = r6.length()
            if (r2 >= r3) goto L2b
            char r3 = r6.charAt(r2)
            r4 = 32
            if (r1 != r4) goto L24
            if (r3 == r4) goto L27
        L24:
            r0.append(r3)
        L27:
            int r2 = r2 + 1
            r1 = r3
            goto L14
        L2b:
            java.lang.String r6 = r0.toString()
            return r6
    }

    @Override
    public boolean equals(java.lang.Object r12) {
            r11 = this;
            r0 = 1
            if (r12 != r11) goto L4
            return r0
        L4:
            boolean r1 = r12 instanceof org.bouncycastle.asn1.x509.X509Name
            r2 = 0
            if (r1 != 0) goto Le
            boolean r1 = r12 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r1 != 0) goto Le
            return r2
        Le:
            r1 = r12
            org.bouncycastle.asn1.DEREncodable r1 = (org.bouncycastle.asn1.DEREncodable) r1
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            org.bouncycastle.asn1.DERObject r3 = r11.getDERObject()
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L20
            return r0
        L20:
            org.bouncycastle.asn1.x509.X509Name r12 = getInstance(r12)     // Catch: java.lang.IllegalArgumentException -> L93
            java.util.Vector r1 = r11.ordering
            int r1 = r1.size()
            java.util.Vector r3 = r12.ordering
            int r3 = r3.size()
            if (r1 == r3) goto L33
            return r2
        L33:
            boolean[] r3 = new boolean[r1]
            java.util.Vector r4 = r11.ordering
            java.lang.Object r4 = r4.elementAt(r2)
            java.util.Vector r5 = r12.ordering
            java.lang.Object r5 = r5.elementAt(r2)
            boolean r4 = r4.equals(r5)
            r5 = -1
            if (r4 == 0) goto L4c
            r5 = r1
            r4 = 0
            r6 = 1
            goto L4f
        L4c:
            int r4 = r1 + (-1)
            r6 = -1
        L4f:
            if (r4 == r5) goto L92
            java.util.Vector r7 = r11.ordering
            java.lang.Object r7 = r7.elementAt(r4)
            org.bouncycastle.asn1.DERObjectIdentifier r7 = (org.bouncycastle.asn1.DERObjectIdentifier) r7
            java.util.Vector r8 = r11.values
            java.lang.Object r8 = r8.elementAt(r4)
            java.lang.String r8 = (java.lang.String) r8
            r9 = 0
        L62:
            if (r9 >= r1) goto L8c
            boolean r10 = r3[r9]
            if (r10 == 0) goto L69
            goto L89
        L69:
            java.util.Vector r10 = r12.ordering
            java.lang.Object r10 = r10.elementAt(r9)
            org.bouncycastle.asn1.DERObjectIdentifier r10 = (org.bouncycastle.asn1.DERObjectIdentifier) r10
            boolean r10 = r7.equals(r10)
            if (r10 == 0) goto L89
            java.util.Vector r10 = r12.values
            java.lang.Object r10 = r10.elementAt(r9)
            java.lang.String r10 = (java.lang.String) r10
            boolean r10 = r11.equivalentStrings(r8, r10)
            if (r10 == 0) goto L89
            r3[r9] = r0
            r7 = 1
            goto L8d
        L89:
            int r9 = r9 + 1
            goto L62
        L8c:
            r7 = 0
        L8d:
            if (r7 != 0) goto L90
            return r2
        L90:
            int r4 = r4 + r6
            goto L4f
        L92:
            return r0
        L93:
            return r2
    }

    public boolean equals(java.lang.Object r6, boolean r7) {
            r5 = this;
            if (r7 != 0) goto L7
            boolean r6 = r5.equals(r6)
            return r6
        L7:
            r7 = 1
            if (r6 != r5) goto Lb
            return r7
        Lb:
            boolean r0 = r6 instanceof org.bouncycastle.asn1.x509.X509Name
            r1 = 0
            if (r0 != 0) goto L15
            boolean r0 = r6 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 != 0) goto L15
            return r1
        L15:
            r0 = r6
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            org.bouncycastle.asn1.DERObject r2 = r5.getDERObject()
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L27
            return r7
        L27:
            org.bouncycastle.asn1.x509.X509Name r6 = getInstance(r6)     // Catch: java.lang.IllegalArgumentException -> L6f
            java.util.Vector r0 = r5.ordering
            int r0 = r0.size()
            java.util.Vector r2 = r6.ordering
            int r2 = r2.size()
            if (r0 == r2) goto L3a
            return r1
        L3a:
            r2 = 0
        L3b:
            if (r2 >= r0) goto L6e
            java.util.Vector r3 = r5.ordering
            java.lang.Object r3 = r3.elementAt(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            java.util.Vector r4 = r6.ordering
            java.lang.Object r4 = r4.elementAt(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = (org.bouncycastle.asn1.DERObjectIdentifier) r4
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L6d
            java.util.Vector r3 = r5.values
            java.lang.Object r3 = r3.elementAt(r2)
            java.lang.String r3 = (java.lang.String) r3
            java.util.Vector r4 = r6.values
            java.lang.Object r4 = r4.elementAt(r2)
            java.lang.String r4 = (java.lang.String) r4
            boolean r3 = r5.equivalentStrings(r3, r4)
            if (r3 != 0) goto L6a
            return r1
        L6a:
            int r2 = r2 + 1
            goto L3b
        L6d:
            return r1
        L6e:
            return r7
        L6f:
            return r1
    }

    public java.util.Vector getOIDs() {
            r3 = this;
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r1 = 0
        L6:
            java.util.Vector r2 = r3.ordering
            int r2 = r2.size()
            if (r1 == r2) goto L1a
            java.util.Vector r2 = r3.ordering
            java.lang.Object r2 = r2.elementAt(r1)
            r0.addElement(r2)
            int r1 = r1 + 1
            goto L6
        L1a:
            return r0
    }

    public java.util.Vector getValues() {
            r3 = this;
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r1 = 0
        L6:
            java.util.Vector r2 = r3.values
            int r2 = r2.size()
            if (r1 == r2) goto L1a
            java.util.Vector r2 = r3.values
            java.lang.Object r2 = r2.elementAt(r1)
            r0.addElement(r2)
            int r1 = r1 + 1
            goto L6
        L1a:
            return r0
    }

    public java.util.Vector getValues(org.bouncycastle.asn1.DERObjectIdentifier r8) {
            r7 = this;
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r1 = 0
            r2 = 0
        L7:
            java.util.Vector r3 = r7.values
            int r3 = r3.size()
            if (r2 == r3) goto L45
            java.util.Vector r3 = r7.ordering
            java.lang.Object r3 = r3.elementAt(r2)
            boolean r3 = r3.equals(r8)
            if (r3 == 0) goto L42
            java.util.Vector r3 = r7.values
            java.lang.Object r3 = r3.elementAt(r2)
            java.lang.String r3 = (java.lang.String) r3
            int r4 = r3.length()
            r5 = 2
            if (r4 <= r5) goto L3f
            char r4 = r3.charAt(r1)
            r5 = 92
            if (r4 != r5) goto L3f
            r4 = 1
            char r5 = r3.charAt(r4)
            r6 = 35
            if (r5 != r6) goto L3f
            java.lang.String r3 = r3.substring(r4)
        L3f:
            r0.addElement(r3)
        L42:
            int r2 = r2 + 1
            goto L7
        L45:
            return r0
    }

    @Override
    public int hashCode() {
            r3 = this;
            org.bouncycastle.asn1.DERObject r0 = r3.getDERObject()
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0
            java.util.Enumeration r0 = r0.getObjects()
            r1 = 0
        Lb:
            boolean r2 = r0.hasMoreElements()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r0.nextElement()
            int r2 = r2.hashCode()
            r1 = r1 ^ r2
            goto Lb
        L1b:
            return r1
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r8 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r8.seq
            if (r0 != 0) goto L78
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            r2 = 0
            r3 = 0
        L10:
            java.util.Vector r4 = r8.ordering
            int r4 = r4.size()
            if (r3 == r4) goto L69
            org.bouncycastle.asn1.ASN1EncodableVector r4 = new org.bouncycastle.asn1.ASN1EncodableVector
            r4.<init>()
            java.util.Vector r5 = r8.ordering
            java.lang.Object r5 = r5.elementAt(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r5 = (org.bouncycastle.asn1.DERObjectIdentifier) r5
            r4.add(r5)
            java.util.Vector r6 = r8.values
            java.lang.Object r6 = r6.elementAt(r3)
            java.lang.String r6 = (java.lang.String) r6
            org.bouncycastle.asn1.x509.X509NameEntryConverter r7 = r8.converter
            org.bouncycastle.asn1.DERObject r6 = r7.getConvertedValue(r5, r6)
            r4.add(r6)
            if (r2 == 0) goto L5d
            java.util.Vector r2 = r8.added
            java.lang.Object r2 = r2.elementAt(r3)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
            if (r2 == 0) goto L4a
            goto L5d
        L4a:
            org.bouncycastle.asn1.DERSet r2 = new org.bouncycastle.asn1.DERSet
            r2.<init>(r1)
            r0.add(r2)
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r4)
            goto L62
        L5d:
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r4)
        L62:
            r1.add(r2)
            int r3 = r3 + 1
            r2 = r5
            goto L10
        L69:
            org.bouncycastle.asn1.DERSet r2 = new org.bouncycastle.asn1.DERSet
            r2.<init>(r1)
            r0.add(r2)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            r8.seq = r1
        L78:
            org.bouncycastle.asn1.ASN1Sequence r0 = r8.seq
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            boolean r0 = org.bouncycastle.asn1.x509.X509Name.DefaultReverse
            java.util.Hashtable r1 = org.bouncycastle.asn1.x509.X509Name.DefaultSymbols
            java.lang.String r0 = r2.toString(r0, r1)
            return r0
    }

    public java.lang.String toString(boolean r8, java.util.Hashtable r9) {
            r7 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Vector r1 = new java.util.Vector
            r1.<init>()
            r2 = 0
            r3 = 0
            r4 = 0
        Ld:
            java.util.Vector r5 = r7.ordering
            int r5 = r5.size()
            if (r4 >= r5) goto L5a
            java.util.Vector r5 = r7.added
            java.lang.Object r5 = r5.elementAt(r4)
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            if (r5 == 0) goto L3c
            r5 = 43
            r3.append(r5)
            java.util.Vector r5 = r7.ordering
            java.lang.Object r5 = r5.elementAt(r4)
            org.bouncycastle.asn1.DERObjectIdentifier r5 = (org.bouncycastle.asn1.DERObjectIdentifier) r5
            java.util.Vector r6 = r7.values
            java.lang.Object r6 = r6.elementAt(r4)
            java.lang.String r6 = (java.lang.String) r6
            r7.appendValue(r3, r9, r5, r6)
            goto L57
        L3c:
            java.lang.StringBuffer r3 = new java.lang.StringBuffer
            r3.<init>()
            java.util.Vector r5 = r7.ordering
            java.lang.Object r5 = r5.elementAt(r4)
            org.bouncycastle.asn1.DERObjectIdentifier r5 = (org.bouncycastle.asn1.DERObjectIdentifier) r5
            java.util.Vector r6 = r7.values
            java.lang.Object r6 = r6.elementAt(r4)
            java.lang.String r6 = (java.lang.String) r6
            r7.appendValue(r3, r9, r5, r6)
            r1.addElement(r3)
        L57:
            int r4 = r4 + 1
            goto Ld
        L5a:
            r9 = 44
            r3 = 1
            if (r8 == 0) goto L7b
            int r8 = r1.size()
            int r8 = r8 - r3
        L64:
            if (r8 < 0) goto L97
            if (r3 == 0) goto L6a
            r3 = 0
            goto L6d
        L6a:
            r0.append(r9)
        L6d:
            java.lang.Object r4 = r1.elementAt(r8)
            java.lang.String r4 = r4.toString()
            r0.append(r4)
            int r8 = r8 + (-1)
            goto L64
        L7b:
            r8 = 0
        L7c:
            int r4 = r1.size()
            if (r8 >= r4) goto L97
            if (r3 == 0) goto L86
            r3 = 0
            goto L89
        L86:
            r0.append(r9)
        L89:
            java.lang.Object r4 = r1.elementAt(r8)
            java.lang.String r4 = r4.toString()
            r0.append(r4)
            int r8 = r8 + 1
            goto L7c
        L97:
            java.lang.String r8 = r0.toString()
            return r8
    }
}
