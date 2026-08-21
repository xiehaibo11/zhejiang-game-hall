package org.bouncycastle.asn1.x509;

import com.alipay.sdk.m.n.a;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.meizu.cloud.pushsdk.notification.model.AdvanceSetting;
import com.tkay.core.api.TYCustomRuleKeys;
import java.util.Enumeration;
import java.util.Hashtable;
import java.util.Vector;
import kotlin.UByte;
import org.bouncycastle.asn1.ASN1Encodable;
import org.bouncycastle.asn1.ASN1EncodableVector;
import org.bouncycastle.asn1.ASN1Sequence;
import org.bouncycastle.asn1.ASN1Set;
import org.bouncycastle.asn1.ASN1TaggedObject;
import org.bouncycastle.asn1.DEREncodable;
import org.bouncycastle.asn1.DERObject;
import org.bouncycastle.asn1.DERObjectIdentifier;
import org.bouncycastle.asn1.DERSequence;
import org.bouncycastle.asn1.DERSet;
import org.bouncycastle.asn1.DERString;
import org.bouncycastle.asn1.DERUniversalString;
import org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers;
import org.bouncycastle.util.Strings;
import org.bouncycastle.util.encoders.Hex;

public class X509Name extends ASN1Encodable {
    public static final Hashtable DefaultLookUp;
    private static final Boolean FALSE;
    public static final Hashtable OIDLookUp;
    public static final Hashtable SymbolLookUp;
    private static final Boolean TRUE;
    private Vector added;
    private X509NameEntryConverter converter;
    private Vector ordering;
    private ASN1Sequence seq;
    private Vector values;
    public static final DERObjectIdentifier C = new DERObjectIdentifier("2.5.4.6");
    public static final DERObjectIdentifier O = new DERObjectIdentifier("2.5.4.10");
    public static final DERObjectIdentifier OU = new DERObjectIdentifier("2.5.4.11");
    public static final DERObjectIdentifier T = new DERObjectIdentifier("2.5.4.12");
    public static final DERObjectIdentifier CN = new DERObjectIdentifier("2.5.4.3");
    public static final DERObjectIdentifier SN = new DERObjectIdentifier("2.5.4.5");
    public static final DERObjectIdentifier STREET = new DERObjectIdentifier("2.5.4.9");
    public static final DERObjectIdentifier SERIALNUMBER = SN;
    public static final DERObjectIdentifier L = new DERObjectIdentifier("2.5.4.7");
    public static final DERObjectIdentifier ST = new DERObjectIdentifier("2.5.4.8");
    public static final DERObjectIdentifier SURNAME = new DERObjectIdentifier("2.5.4.4");
    public static final DERObjectIdentifier GIVENNAME = new DERObjectIdentifier("2.5.4.42");
    public static final DERObjectIdentifier INITIALS = new DERObjectIdentifier("2.5.4.43");
    public static final DERObjectIdentifier GENERATION = new DERObjectIdentifier("2.5.4.44");
    public static final DERObjectIdentifier UNIQUE_IDENTIFIER = new DERObjectIdentifier("2.5.4.45");
    public static final DERObjectIdentifier BUSINESS_CATEGORY = new DERObjectIdentifier("2.5.4.15");
    public static final DERObjectIdentifier POSTAL_CODE = new DERObjectIdentifier("2.5.4.17");
    public static final DERObjectIdentifier DN_QUALIFIER = new DERObjectIdentifier("2.5.4.46");
    public static final DERObjectIdentifier PSEUDONYM = new DERObjectIdentifier("2.5.4.65");
    public static final DERObjectIdentifier DATE_OF_BIRTH = new DERObjectIdentifier("1.3.6.1.5.5.7.9.1");
    public static final DERObjectIdentifier PLACE_OF_BIRTH = new DERObjectIdentifier("1.3.6.1.5.5.7.9.2");
    public static final DERObjectIdentifier GENDER = new DERObjectIdentifier("1.3.6.1.5.5.7.9.3");
    public static final DERObjectIdentifier COUNTRY_OF_CITIZENSHIP = new DERObjectIdentifier("1.3.6.1.5.5.7.9.4");
    public static final DERObjectIdentifier COUNTRY_OF_RESIDENCE = new DERObjectIdentifier("1.3.6.1.5.5.7.9.5");
    public static final DERObjectIdentifier NAME_AT_BIRTH = new DERObjectIdentifier("1.3.36.8.3.14");
    public static final DERObjectIdentifier POSTAL_ADDRESS = new DERObjectIdentifier("2.5.4.16");
    public static final DERObjectIdentifier EmailAddress = PKCSObjectIdentifiers.pkcs_9_at_emailAddress;
    public static final DERObjectIdentifier UnstructuredName = PKCSObjectIdentifiers.pkcs_9_at_unstructuredName;
    public static final DERObjectIdentifier UnstructuredAddress = PKCSObjectIdentifiers.pkcs_9_at_unstructuredAddress;
    public static final DERObjectIdentifier E = EmailAddress;
    public static final DERObjectIdentifier DC = new DERObjectIdentifier("0.9.2342.19200300.100.1.25");
    public static final DERObjectIdentifier UID = new DERObjectIdentifier("0.9.2342.19200300.100.1.1");
    public static boolean DefaultReverse = false;
    public static final Hashtable DefaultSymbols = new Hashtable();
    public static final Hashtable RFC2253Symbols = new Hashtable();
    public static final Hashtable RFC1779Symbols = new Hashtable();

    static {
        Hashtable hashtable = new Hashtable();
        DefaultLookUp = hashtable;
        OIDLookUp = DefaultSymbols;
        SymbolLookUp = hashtable;
        TRUE = new Boolean(true);
        FALSE = new Boolean(false);
        DefaultSymbols.put(C, "C");
        DefaultSymbols.put(O, "O");
        DefaultSymbols.put(T, "T");
        DefaultSymbols.put(OU, "OU");
        DefaultSymbols.put(CN, "CN");
        DefaultSymbols.put(L, "L");
        DefaultSymbols.put(ST, "ST");
        DefaultSymbols.put(SN, "SERIALNUMBER");
        DefaultSymbols.put(EmailAddress, "E");
        DefaultSymbols.put(DC, "DC");
        DefaultSymbols.put(UID, "UID");
        DefaultSymbols.put(STREET, "STREET");
        DefaultSymbols.put(SURNAME, "SURNAME");
        DefaultSymbols.put(GIVENNAME, "GIVENNAME");
        DefaultSymbols.put(INITIALS, "INITIALS");
        DefaultSymbols.put(GENERATION, "GENERATION");
        DefaultSymbols.put(UnstructuredAddress, "unstructuredAddress");
        DefaultSymbols.put(UnstructuredName, "unstructuredName");
        DefaultSymbols.put(UNIQUE_IDENTIFIER, "UniqueIdentifier");
        DefaultSymbols.put(DN_QUALIFIER, "DN");
        DefaultSymbols.put(PSEUDONYM, "Pseudonym");
        DefaultSymbols.put(POSTAL_ADDRESS, "PostalAddress");
        DefaultSymbols.put(NAME_AT_BIRTH, "NameAtBirth");
        DefaultSymbols.put(COUNTRY_OF_CITIZENSHIP, "CountryOfCitizenship");
        DefaultSymbols.put(COUNTRY_OF_RESIDENCE, "CountryOfResidence");
        DefaultSymbols.put(GENDER, "Gender");
        DefaultSymbols.put(PLACE_OF_BIRTH, "PlaceOfBirth");
        DefaultSymbols.put(DATE_OF_BIRTH, "DateOfBirth");
        DefaultSymbols.put(POSTAL_CODE, "PostalCode");
        DefaultSymbols.put(BUSINESS_CATEGORY, "BusinessCategory");
        RFC2253Symbols.put(C, "C");
        RFC2253Symbols.put(O, "O");
        RFC2253Symbols.put(OU, "OU");
        RFC2253Symbols.put(CN, "CN");
        RFC2253Symbols.put(L, "L");
        RFC2253Symbols.put(ST, "ST");
        RFC2253Symbols.put(STREET, "STREET");
        RFC2253Symbols.put(DC, "DC");
        RFC2253Symbols.put(UID, "UID");
        RFC1779Symbols.put(C, "C");
        RFC1779Symbols.put(O, "O");
        RFC1779Symbols.put(OU, "OU");
        RFC1779Symbols.put(CN, "CN");
        RFC1779Symbols.put(L, "L");
        RFC1779Symbols.put(ST, "ST");
        RFC1779Symbols.put(STREET, "STREET");
        DefaultLookUp.put("c", C);
        DefaultLookUp.put("o", O);
        DefaultLookUp.put("t", T);
        DefaultLookUp.put("ou", OU);
        DefaultLookUp.put(AdvanceSetting.CLEAR_NOTIFICATION, CN);
        DefaultLookUp.put("l", L);
        DefaultLookUp.put("st", ST);
        DefaultLookUp.put("sn", SN);
        DefaultLookUp.put("serialnumber", SN);
        DefaultLookUp.put("street", STREET);
        DefaultLookUp.put("emailaddress", E);
        DefaultLookUp.put("dc", DC);
        DefaultLookUp.put("e", E);
        DefaultLookUp.put(IUserFeature.LOGIN_SUC_RS_UID, UID);
        DefaultLookUp.put("surname", SURNAME);
        DefaultLookUp.put("givenname", GIVENNAME);
        DefaultLookUp.put("initials", INITIALS);
        DefaultLookUp.put("generation", GENERATION);
        DefaultLookUp.put("unstructuredaddress", UnstructuredAddress);
        DefaultLookUp.put("unstructuredname", UnstructuredName);
        DefaultLookUp.put("uniqueidentifier", UNIQUE_IDENTIFIER);
        DefaultLookUp.put("dn", DN_QUALIFIER);
        DefaultLookUp.put("pseudonym", PSEUDONYM);
        DefaultLookUp.put("postaladdress", POSTAL_ADDRESS);
        DefaultLookUp.put("nameofbirth", NAME_AT_BIRTH);
        DefaultLookUp.put("countryofcitizenship", COUNTRY_OF_CITIZENSHIP);
        DefaultLookUp.put("countryofresidence", COUNTRY_OF_RESIDENCE);
        DefaultLookUp.put(TYCustomRuleKeys.GENDER, GENDER);
        DefaultLookUp.put("placeofbirth", PLACE_OF_BIRTH);
        DefaultLookUp.put("dateofbirth", DATE_OF_BIRTH);
        DefaultLookUp.put("postalcode", POSTAL_CODE);
        DefaultLookUp.put("businesscategory", BUSINESS_CATEGORY);
    }

    public X509Name(String str) {
        this(DefaultReverse, DefaultLookUp, str);
    }

    public X509Name(String str, X509NameEntryConverter x509NameEntryConverter) {
        this(DefaultReverse, DefaultLookUp, str, x509NameEntryConverter);
    }

    public X509Name(Hashtable hashtable) {
        this((Vector) null, hashtable);
    }

    public X509Name(Vector vector, Hashtable hashtable) {
        this(vector, hashtable, new X509DefaultEntryConverter());
    }

    public X509Name(Vector vector, Hashtable hashtable, X509NameEntryConverter x509NameEntryConverter) {
        this.converter = null;
        this.ordering = new Vector();
        this.values = new Vector();
        this.added = new Vector();
        this.converter = x509NameEntryConverter;
        if (vector != null) {
            for (int i = 0; i != vector.size(); i++) {
                this.ordering.addElement(vector.elementAt(i));
                this.added.addElement(FALSE);
            }
        } else {
            Enumeration enumerationKeys = hashtable.keys();
            while (enumerationKeys.hasMoreElements()) {
                this.ordering.addElement(enumerationKeys.nextElement());
                this.added.addElement(FALSE);
            }
        }
        for (int i2 = 0; i2 != this.ordering.size(); i2++) {
            DERObjectIdentifier dERObjectIdentifier = (DERObjectIdentifier) this.ordering.elementAt(i2);
            if (hashtable.get(dERObjectIdentifier) == null) {
                throw new IllegalArgumentException("No attribute for object id - " + dERObjectIdentifier.getId() + " - passed to distinguished name");
            }
            this.values.addElement(hashtable.get(dERObjectIdentifier));
        }
    }

    public X509Name(Vector vector, Vector vector2) {
        this(vector, vector2, new X509DefaultEntryConverter());
    }

    public X509Name(Vector vector, Vector vector2, X509NameEntryConverter x509NameEntryConverter) {
        this.converter = null;
        this.ordering = new Vector();
        this.values = new Vector();
        this.added = new Vector();
        this.converter = x509NameEntryConverter;
        if (vector.size() != vector2.size()) {
            throw new IllegalArgumentException("oids vector must be same length as values.");
        }
        for (int i = 0; i < vector.size(); i++) {
            this.ordering.addElement(vector.elementAt(i));
            this.values.addElement(vector2.elementAt(i));
            this.added.addElement(FALSE);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x00a8  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x00ab  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public X509Name(ASN1Sequence aSN1Sequence) {
        Vector vector;
        StringBuilder sb;
        String strBytesToString;
        this.converter = null;
        this.ordering = new Vector();
        this.values = new Vector();
        this.added = new Vector();
        this.seq = aSN1Sequence;
        Enumeration objects = aSN1Sequence.getObjects();
        while (objects.hasMoreElements()) {
            ASN1Set aSN1Set = ASN1Set.getInstance(objects.nextElement());
            int i = 0;
            while (i < aSN1Set.size()) {
                ASN1Sequence aSN1Sequence2 = ASN1Sequence.getInstance(aSN1Set.getObjectAt(i));
                if (aSN1Sequence2.size() != 2) {
                    throw new IllegalArgumentException("badly sized pair");
                }
                this.ordering.addElement(DERObjectIdentifier.getInstance(aSN1Sequence2.getObjectAt(0)));
                DEREncodable objectAt = aSN1Sequence2.getObjectAt(1);
                if (!(objectAt instanceof DERString) || (objectAt instanceof DERUniversalString)) {
                    vector = this.values;
                    sb = new StringBuilder();
                    sb.append("#");
                    strBytesToString = bytesToString(Hex.encode(objectAt.getDERObject().getDEREncoded()));
                } else {
                    strBytesToString = ((DERString) objectAt).getString();
                    if (strBytesToString.charAt(0) == '#') {
                        vector = this.values;
                        sb = new StringBuilder();
                        sb.append("\\");
                    } else {
                        vector = this.values;
                        vector.addElement(strBytesToString);
                        this.added.addElement(i == 0 ? TRUE : FALSE);
                        i++;
                    }
                }
                sb.append(strBytesToString);
                strBytesToString = sb.toString();
                vector.addElement(strBytesToString);
                this.added.addElement(i == 0 ? TRUE : FALSE);
                i++;
            }
        }
    }

    public X509Name(boolean z, String str) {
        this(z, DefaultLookUp, str);
    }

    public X509Name(boolean z, String str, X509NameEntryConverter x509NameEntryConverter) {
        this(z, DefaultLookUp, str, x509NameEntryConverter);
    }

    public X509Name(boolean z, Hashtable hashtable, String str) {
        this(z, hashtable, str, new X509DefaultEntryConverter());
    }

    public X509Name(boolean z, Hashtable hashtable, String str, X509NameEntryConverter x509NameEntryConverter) {
        this.converter = null;
        this.ordering = new Vector();
        this.values = new Vector();
        this.added = new Vector();
        this.converter = x509NameEntryConverter;
        X509NameTokenizer x509NameTokenizer = new X509NameTokenizer(str);
        while (x509NameTokenizer.hasMoreTokens()) {
            String strNextToken = x509NameTokenizer.nextToken();
            int iIndexOf = strNextToken.indexOf(61);
            if (iIndexOf == -1) {
                throw new IllegalArgumentException("badly formated directory string");
            }
            String strSubstring = strNextToken.substring(0, iIndexOf);
            String strSubstring2 = strNextToken.substring(iIndexOf + 1);
            DERObjectIdentifier dERObjectIdentifierDecodeOID = decodeOID(strSubstring, hashtable);
            if (strSubstring2.indexOf(43) > 0) {
                X509NameTokenizer x509NameTokenizer2 = new X509NameTokenizer(strSubstring2, '+');
                String strNextToken2 = x509NameTokenizer2.nextToken();
                this.ordering.addElement(dERObjectIdentifierDecodeOID);
                this.values.addElement(strNextToken2);
                Vector vector = this.added;
                Boolean bool = FALSE;
                while (true) {
                    vector.addElement(bool);
                    if (x509NameTokenizer2.hasMoreTokens()) {
                        String strNextToken3 = x509NameTokenizer2.nextToken();
                        int iIndexOf2 = strNextToken3.indexOf(61);
                        String strSubstring3 = strNextToken3.substring(0, iIndexOf2);
                        String strSubstring4 = strNextToken3.substring(iIndexOf2 + 1);
                        this.ordering.addElement(decodeOID(strSubstring3, hashtable));
                        this.values.addElement(strSubstring4);
                        vector = this.added;
                        bool = TRUE;
                    }
                }
            } else {
                this.ordering.addElement(dERObjectIdentifierDecodeOID);
                this.values.addElement(strSubstring2);
                this.added.addElement(FALSE);
            }
        }
        if (z) {
            Vector vector2 = new Vector();
            Vector vector3 = new Vector();
            Vector vector4 = new Vector();
            int i = 1;
            for (int i2 = 0; i2 < this.ordering.size(); i2++) {
                if (((Boolean) this.added.elementAt(i2)).booleanValue()) {
                    vector2.insertElementAt(this.ordering.elementAt(i2), i);
                    vector3.insertElementAt(this.values.elementAt(i2), i);
                    vector4.insertElementAt(this.added.elementAt(i2), i);
                    i++;
                } else {
                    vector2.insertElementAt(this.ordering.elementAt(i2), 0);
                    vector3.insertElementAt(this.values.elementAt(i2), 0);
                    vector4.insertElementAt(this.added.elementAt(i2), 0);
                    i = 1;
                }
            }
            this.ordering = vector2;
            this.values = vector3;
            this.added = vector4;
        }
    }

    private void appendValue(StringBuffer stringBuffer, Hashtable hashtable, DERObjectIdentifier dERObjectIdentifier, String str) {
        String id = (String) hashtable.get(dERObjectIdentifier);
        if (id == null) {
            id = dERObjectIdentifier.getId();
        }
        stringBuffer.append(id);
        stringBuffer.append(a.h);
        int length = stringBuffer.length();
        stringBuffer.append(str);
        int length2 = stringBuffer.length();
        if (str.length() >= 2 && str.charAt(0) == '\\' && str.charAt(1) == '#') {
            length += 2;
        }
        while (length != length2) {
            if (stringBuffer.charAt(length) == ',' || stringBuffer.charAt(length) == '\"' || stringBuffer.charAt(length) == '\\' || stringBuffer.charAt(length) == '+' || stringBuffer.charAt(length) == '<' || stringBuffer.charAt(length) == '>' || stringBuffer.charAt(length) == ';') {
                stringBuffer.insert(length, "\\");
                length++;
                length2++;
            }
            length++;
        }
    }

    private String bytesToString(byte[] bArr) {
        int length = bArr.length;
        char[] cArr = new char[length];
        for (int i = 0; i != length; i++) {
            cArr[i] = (char) (bArr[i] & UByte.MAX_VALUE);
        }
        return new String(cArr);
    }

    private DERObjectIdentifier decodeOID(String str, Hashtable hashtable) {
        if (Strings.toUpperCase(str).startsWith("OID.")) {
            return new DERObjectIdentifier(str.substring(4));
        }
        if (str.charAt(0) >= '0' && str.charAt(0) <= '9') {
            return new DERObjectIdentifier(str);
        }
        DERObjectIdentifier dERObjectIdentifier = (DERObjectIdentifier) hashtable.get(Strings.toLowerCase(str));
        if (dERObjectIdentifier != null) {
            return dERObjectIdentifier;
        }
        throw new IllegalArgumentException("Unknown object id - " + str + " - passed to distinguished name");
    }

    private boolean equivalentStrings(String str, String str2) {
        String lowerCase = Strings.toLowerCase(str.trim());
        String lowerCase2 = Strings.toLowerCase(str2.trim());
        return lowerCase.equals(lowerCase2) || stripInternalSpaces(lowerCase).equals(stripInternalSpaces(lowerCase2));
    }

    public static X509Name getInstance(Object obj) {
        if (obj == null || (obj instanceof X509Name)) {
            return (X509Name) obj;
        }
        if (obj instanceof ASN1Sequence) {
            return new X509Name((ASN1Sequence) obj);
        }
        throw new IllegalArgumentException("unknown object in factory: " + obj.getClass().getName());
    }

    public static X509Name getInstance(ASN1TaggedObject aSN1TaggedObject, boolean z) {
        return getInstance(ASN1Sequence.getInstance(aSN1TaggedObject, z));
    }

    private Boolean isEncoded(String str) {
        return str.charAt(0) == '#' ? TRUE : FALSE;
    }

    private String stripInternalSpaces(String str) {
        StringBuffer stringBuffer = new StringBuffer();
        if (str.length() != 0) {
            char cCharAt = str.charAt(0);
            stringBuffer.append(cCharAt);
            int i = 1;
            while (i < str.length()) {
                char cCharAt2 = str.charAt(i);
                if (cCharAt != ' ' || cCharAt2 != ' ') {
                    stringBuffer.append(cCharAt2);
                }
                i++;
                cCharAt = cCharAt2;
            }
        }
        return stringBuffer.toString();
    }

    @Override
    public boolean equals(Object obj) {
        int i;
        int i2;
        boolean z;
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof X509Name) && !(obj instanceof ASN1Sequence)) {
            return false;
        }
        if (getDERObject().equals(((DEREncodable) obj).getDERObject())) {
            return true;
        }
        try {
            X509Name x509Name = getInstance(obj);
            int size = this.ordering.size();
            if (size != x509Name.ordering.size()) {
                return false;
            }
            boolean[] zArr = new boolean[size];
            int i3 = -1;
            if (this.ordering.elementAt(0).equals(x509Name.ordering.elementAt(0))) {
                i3 = size;
                i = 0;
                i2 = 1;
            } else {
                i = size - 1;
                i2 = -1;
            }
            while (i != i3) {
                DERObjectIdentifier dERObjectIdentifier = (DERObjectIdentifier) this.ordering.elementAt(i);
                String str = (String) this.values.elementAt(i);
                int i4 = 0;
                while (true) {
                    if (i4 >= size) {
                        z = false;
                        break;
                    }
                    if (!zArr[i4] && dERObjectIdentifier.equals((DERObjectIdentifier) x509Name.ordering.elementAt(i4)) && equivalentStrings(str, (String) x509Name.values.elementAt(i4))) {
                        zArr[i4] = true;
                        z = true;
                        break;
                    }
                    i4++;
                }
                if (!z) {
                    return false;
                }
                i += i2;
            }
            return true;
        } catch (IllegalArgumentException unused) {
            return false;
        }
    }

    public boolean equals(Object obj, boolean z) {
        if (!z) {
            return equals(obj);
        }
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof X509Name) && !(obj instanceof ASN1Sequence)) {
            return false;
        }
        if (getDERObject().equals(((DEREncodable) obj).getDERObject())) {
            return true;
        }
        try {
            X509Name x509Name = getInstance(obj);
            int size = this.ordering.size();
            if (size != x509Name.ordering.size()) {
                return false;
            }
            for (int i = 0; i < size; i++) {
                if (!((DERObjectIdentifier) this.ordering.elementAt(i)).equals((DERObjectIdentifier) x509Name.ordering.elementAt(i)) || !equivalentStrings((String) this.values.elementAt(i), (String) x509Name.values.elementAt(i))) {
                    return false;
                }
            }
            return true;
        } catch (IllegalArgumentException unused) {
            return false;
        }
    }

    public Vector getOIDs() {
        Vector vector = new Vector();
        for (int i = 0; i != this.ordering.size(); i++) {
            vector.addElement(this.ordering.elementAt(i));
        }
        return vector;
    }

    public Vector getValues() {
        Vector vector = new Vector();
        for (int i = 0; i != this.values.size(); i++) {
            vector.addElement(this.values.elementAt(i));
        }
        return vector;
    }

    public Vector getValues(DERObjectIdentifier dERObjectIdentifier) {
        Vector vector = new Vector();
        for (int i = 0; i != this.values.size(); i++) {
            if (this.ordering.elementAt(i).equals(dERObjectIdentifier)) {
                String strSubstring = (String) this.values.elementAt(i);
                if (strSubstring.length() > 2 && strSubstring.charAt(0) == '\\' && strSubstring.charAt(1) == '#') {
                    strSubstring = strSubstring.substring(1);
                }
                vector.addElement(strSubstring);
            }
        }
        return vector;
    }

    @Override
    public int hashCode() {
        Enumeration objects = ((ASN1Sequence) getDERObject()).getObjects();
        int iHashCode = 0;
        while (objects.hasMoreElements()) {
            iHashCode ^= objects.nextElement().hashCode();
        }
        return iHashCode;
    }

    @Override
    public DERObject toASN1Object() {
        DERSequence dERSequence;
        if (this.seq == null) {
            ASN1EncodableVector aSN1EncodableVector = new ASN1EncodableVector();
            ASN1EncodableVector aSN1EncodableVector2 = new ASN1EncodableVector();
            DERObjectIdentifier dERObjectIdentifier = null;
            int i = 0;
            while (i != this.ordering.size()) {
                ASN1EncodableVector aSN1EncodableVector3 = new ASN1EncodableVector();
                DERObjectIdentifier dERObjectIdentifier2 = (DERObjectIdentifier) this.ordering.elementAt(i);
                aSN1EncodableVector3.add(dERObjectIdentifier2);
                aSN1EncodableVector3.add(this.converter.getConvertedValue(dERObjectIdentifier2, (String) this.values.elementAt(i)));
                if (dERObjectIdentifier == null || ((Boolean) this.added.elementAt(i)).booleanValue()) {
                    dERSequence = new DERSequence(aSN1EncodableVector3);
                } else {
                    aSN1EncodableVector.add(new DERSet(aSN1EncodableVector2));
                    aSN1EncodableVector2 = new ASN1EncodableVector();
                    dERSequence = new DERSequence(aSN1EncodableVector3);
                }
                aSN1EncodableVector2.add(dERSequence);
                i++;
                dERObjectIdentifier = dERObjectIdentifier2;
            }
            aSN1EncodableVector.add(new DERSet(aSN1EncodableVector2));
            this.seq = new DERSequence(aSN1EncodableVector);
        }
        return this.seq;
    }

    public String toString() {
        return toString(DefaultReverse, DefaultSymbols);
    }

    public String toString(boolean z, Hashtable hashtable) {
        StringBuffer stringBuffer = new StringBuffer();
        Vector vector = new Vector();
        StringBuffer stringBuffer2 = null;
        for (int i = 0; i < this.ordering.size(); i++) {
            if (((Boolean) this.added.elementAt(i)).booleanValue()) {
                stringBuffer2.append('+');
                appendValue(stringBuffer2, hashtable, (DERObjectIdentifier) this.ordering.elementAt(i), (String) this.values.elementAt(i));
            } else {
                stringBuffer2 = new StringBuffer();
                appendValue(stringBuffer2, hashtable, (DERObjectIdentifier) this.ordering.elementAt(i), (String) this.values.elementAt(i));
                vector.addElement(stringBuffer2);
            }
        }
        boolean z2 = true;
        if (z) {
            for (int size = vector.size() - 1; size >= 0; size--) {
                if (z2) {
                    z2 = false;
                } else {
                    stringBuffer.append(',');
                }
                stringBuffer.append(vector.elementAt(size).toString());
            }
        } else {
            for (int i2 = 0; i2 < vector.size(); i2++) {
                if (z2) {
                    z2 = false;
                } else {
                    stringBuffer.append(',');
                }
                stringBuffer.append(vector.elementAt(i2).toString());
            }
        }
        return stringBuffer.toString();
    }
}
