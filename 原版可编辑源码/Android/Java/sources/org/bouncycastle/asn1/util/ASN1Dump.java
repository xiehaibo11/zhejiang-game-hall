package org.bouncycastle.asn1.util;

import java.util.Enumeration;
import org.bouncycastle.asn1.ASN1OctetString;
import org.bouncycastle.asn1.ASN1Sequence;
import org.bouncycastle.asn1.ASN1Set;
import org.bouncycastle.asn1.BERConstructedOctetString;
import org.bouncycastle.asn1.BERConstructedSequence;
import org.bouncycastle.asn1.BERSequence;
import org.bouncycastle.asn1.BERSet;
import org.bouncycastle.asn1.BERTaggedObject;
import org.bouncycastle.asn1.DERBMPString;
import org.bouncycastle.asn1.DERBitString;
import org.bouncycastle.asn1.DERBoolean;
import org.bouncycastle.asn1.DERConstructedSequence;
import org.bouncycastle.asn1.DERConstructedSet;
import org.bouncycastle.asn1.DEREncodable;
import org.bouncycastle.asn1.DERGeneralizedTime;
import org.bouncycastle.asn1.DERIA5String;
import org.bouncycastle.asn1.DERInteger;
import org.bouncycastle.asn1.DERNull;
import org.bouncycastle.asn1.DERObject;
import org.bouncycastle.asn1.DERObjectIdentifier;
import org.bouncycastle.asn1.DEROctetString;
import org.bouncycastle.asn1.DERPrintableString;
import org.bouncycastle.asn1.DERSequence;
import org.bouncycastle.asn1.DERSet;
import org.bouncycastle.asn1.DERT61String;
import org.bouncycastle.asn1.DERTaggedObject;
import org.bouncycastle.asn1.DERUTCTime;
import org.bouncycastle.asn1.DERUTF8String;
import org.bouncycastle.asn1.DERUnknownTag;
import org.bouncycastle.asn1.DERVisibleString;
import org.bouncycastle.util.encoders.Hex;

public class ASN1Dump {
    private static final String TAB = "    ";

    static String _dumpAsString(String str, DERObject dERObject) {
        StringBuilder sb;
        String string;
        String time;
        int padBits;
        String str_dumpAsString;
        if (dERObject instanceof ASN1Sequence) {
            StringBuffer stringBuffer = new StringBuffer();
            Enumeration objects = ((ASN1Sequence) dERObject).getObjects();
            String str2 = str + TAB;
            stringBuffer.append(str);
            stringBuffer.append(dERObject instanceof BERConstructedSequence ? "BER ConstructedSequence" : dERObject instanceof DERConstructedSequence ? "DER ConstructedSequence" : dERObject instanceof BERSequence ? "BER Sequence" : dERObject instanceof DERSequence ? "DER Sequence" : "Sequence");
            while (true) {
                String property = System.getProperty("line.separator");
                while (true) {
                    stringBuffer.append(property);
                    if (!objects.hasMoreElements()) {
                        return stringBuffer.toString();
                    }
                    Object objNextElement = objects.nextElement();
                    if (objNextElement == null || objNextElement.equals(new DERNull())) {
                        break;
                    }
                    property = _dumpAsString(str2, objNextElement instanceof DERObject ? (DERObject) objNextElement : ((DEREncodable) objNextElement).getDERObject());
                }
                stringBuffer.append(str2);
                stringBuffer.append("NULL");
            }
        } else {
            if (dERObject instanceof DERTaggedObject) {
                StringBuffer stringBuffer2 = new StringBuffer();
                String str3 = str + TAB;
                stringBuffer2.append(str);
                stringBuffer2.append(dERObject instanceof BERTaggedObject ? "BER Tagged [" : "Tagged [");
                DERTaggedObject dERTaggedObject = (DERTaggedObject) dERObject;
                stringBuffer2.append(Integer.toString(dERTaggedObject.getTagNo()));
                stringBuffer2.append(']');
                if (!dERTaggedObject.isExplicit()) {
                    stringBuffer2.append(" IMPLICIT ");
                }
                stringBuffer2.append(System.getProperty("line.separator"));
                if (dERTaggedObject.isEmpty()) {
                    stringBuffer2.append(str3);
                    stringBuffer2.append("EMPTY");
                    str_dumpAsString = System.getProperty("line.separator");
                } else {
                    str_dumpAsString = _dumpAsString(str3, dERTaggedObject.getObject());
                }
                stringBuffer2.append(str_dumpAsString);
                return stringBuffer2.toString();
            }
            if (dERObject instanceof DERConstructedSet) {
                StringBuffer stringBuffer3 = new StringBuffer();
                Enumeration objects2 = ((ASN1Set) dERObject).getObjects();
                String str4 = str + TAB;
                stringBuffer3.append(str);
                stringBuffer3.append("ConstructedSet");
                while (true) {
                    String property2 = System.getProperty("line.separator");
                    while (true) {
                        stringBuffer3.append(property2);
                        if (!objects2.hasMoreElements()) {
                            return stringBuffer3.toString();
                        }
                        Object objNextElement2 = objects2.nextElement();
                        if (objNextElement2 == null) {
                            break;
                        }
                        property2 = _dumpAsString(str4, objNextElement2 instanceof DERObject ? (DERObject) objNextElement2 : ((DEREncodable) objNextElement2).getDERObject());
                    }
                    stringBuffer3.append(str4);
                    stringBuffer3.append("NULL");
                }
            } else if (dERObject instanceof BERSet) {
                StringBuffer stringBuffer4 = new StringBuffer();
                Enumeration objects3 = ((ASN1Set) dERObject).getObjects();
                String str5 = str + TAB;
                stringBuffer4.append(str);
                stringBuffer4.append("BER Set");
                while (true) {
                    String property3 = System.getProperty("line.separator");
                    while (true) {
                        stringBuffer4.append(property3);
                        if (!objects3.hasMoreElements()) {
                            return stringBuffer4.toString();
                        }
                        Object objNextElement3 = objects3.nextElement();
                        if (objNextElement3 == null) {
                            break;
                        }
                        property3 = _dumpAsString(str5, objNextElement3 instanceof DERObject ? (DERObject) objNextElement3 : ((DEREncodable) objNextElement3).getDERObject());
                    }
                    stringBuffer4.append(str5);
                    stringBuffer4.append("NULL");
                }
            } else {
                if (!(dERObject instanceof DERSet)) {
                    String str6 = ")";
                    if (!(dERObject instanceof DERObjectIdentifier)) {
                        if (dERObject instanceof DERBoolean) {
                            sb = new StringBuilder();
                            sb.append(str);
                            sb.append("Boolean(");
                            sb.append(((DERBoolean) dERObject).isTrue());
                        } else if (dERObject instanceof DERInteger) {
                            sb = new StringBuilder();
                            sb.append(str);
                            sb.append("Integer(");
                            sb.append(((DERInteger) dERObject).getValue());
                        } else {
                            str6 = "] ";
                            if (dERObject instanceof BERConstructedOctetString) {
                                sb = new StringBuilder();
                                sb.append(str);
                                sb.append("BER Constructed Octet String");
                                sb.append("[");
                                padBits = ((ASN1OctetString) dERObject).getOctets().length;
                            } else if (dERObject instanceof DEROctetString) {
                                sb = new StringBuilder();
                                sb.append(str);
                                sb.append("DER Octet String");
                                sb.append("[");
                                padBits = ((ASN1OctetString) dERObject).getOctets().length;
                            } else if (dERObject instanceof DERBitString) {
                                sb = new StringBuilder();
                                sb.append(str);
                                sb.append("DER Bit String");
                                sb.append("[");
                                DERBitString dERBitString = (DERBitString) dERObject;
                                sb.append(dERBitString.getBytes().length);
                                sb.append(", ");
                                padBits = dERBitString.getPadBits();
                            } else {
                                str6 = ") ";
                                if (dERObject instanceof DERIA5String) {
                                    sb = new StringBuilder();
                                    sb.append(str);
                                    sb.append("IA5String(");
                                    time = ((DERIA5String) dERObject).getString();
                                } else if (dERObject instanceof DERUTF8String) {
                                    sb = new StringBuilder();
                                    sb.append(str);
                                    sb.append("UTF8String(");
                                    time = ((DERUTF8String) dERObject).getString();
                                } else if (dERObject instanceof DERPrintableString) {
                                    sb = new StringBuilder();
                                    sb.append(str);
                                    sb.append("PrintableString(");
                                    time = ((DERPrintableString) dERObject).getString();
                                } else if (dERObject instanceof DERVisibleString) {
                                    sb = new StringBuilder();
                                    sb.append(str);
                                    sb.append("VisibleString(");
                                    time = ((DERVisibleString) dERObject).getString();
                                } else if (dERObject instanceof DERBMPString) {
                                    sb = new StringBuilder();
                                    sb.append(str);
                                    sb.append("BMPString(");
                                    time = ((DERBMPString) dERObject).getString();
                                } else if (dERObject instanceof DERT61String) {
                                    sb = new StringBuilder();
                                    sb.append(str);
                                    sb.append("T61String(");
                                    time = ((DERT61String) dERObject).getString();
                                } else if (dERObject instanceof DERUTCTime) {
                                    sb = new StringBuilder();
                                    sb.append(str);
                                    sb.append("UTCTime(");
                                    time = ((DERUTCTime) dERObject).getTime();
                                } else {
                                    if (!(dERObject instanceof DERGeneralizedTime)) {
                                        if (dERObject instanceof DERUnknownTag) {
                                            sb = new StringBuilder();
                                            sb.append(str);
                                            sb.append("Unknown ");
                                            DERUnknownTag dERUnknownTag = (DERUnknownTag) dERObject;
                                            sb.append(Integer.toString(dERUnknownTag.getTag(), 16));
                                            sb.append(" ");
                                            string = new String(Hex.encode(dERUnknownTag.getData()));
                                        } else {
                                            sb = new StringBuilder();
                                            sb.append(str);
                                            string = dERObject.toString();
                                        }
                                        sb.append(string);
                                        sb.append(System.getProperty("line.separator"));
                                        return sb.toString();
                                    }
                                    sb = new StringBuilder();
                                    sb.append(str);
                                    sb.append("GeneralizedTime(");
                                    time = ((DERGeneralizedTime) dERObject).getTime();
                                }
                            }
                            sb.append(padBits);
                        }
                        sb.append(str6);
                        sb.append(System.getProperty("line.separator"));
                        return sb.toString();
                    }
                    sb = new StringBuilder();
                    sb.append(str);
                    sb.append("ObjectIdentifier(");
                    time = ((DERObjectIdentifier) dERObject).getId();
                    sb.append(time);
                    sb.append(str6);
                    sb.append(System.getProperty("line.separator"));
                    return sb.toString();
                }
                StringBuffer stringBuffer5 = new StringBuffer();
                Enumeration objects4 = ((ASN1Set) dERObject).getObjects();
                String str7 = str + TAB;
                stringBuffer5.append(str);
                stringBuffer5.append("DER Set");
                while (true) {
                    String property4 = System.getProperty("line.separator");
                    while (true) {
                        stringBuffer5.append(property4);
                        if (!objects4.hasMoreElements()) {
                            return stringBuffer5.toString();
                        }
                        Object objNextElement4 = objects4.nextElement();
                        if (objNextElement4 == null) {
                            break;
                        }
                        property4 = objNextElement4 instanceof DERObject ? _dumpAsString(str7, (DERObject) objNextElement4) : _dumpAsString(str7, ((DEREncodable) objNextElement4).getDERObject());
                    }
                    stringBuffer5.append(str7);
                    stringBuffer5.append("NULL");
                }
            }
        }
    }

    public static String dumpAsString(Object obj) {
        if (obj instanceof DERObject) {
            return _dumpAsString("", (DERObject) obj);
        }
        if (obj instanceof DEREncodable) {
            return _dumpAsString("", ((DEREncodable) obj).getDERObject());
        }
        return "unknown object type " + obj.toString();
    }
}
