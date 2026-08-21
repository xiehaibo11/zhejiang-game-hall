package org.bouncycastle.asn1;

import com.ss.android.download.api.constant.BaseConstants;
import com.xiaomi.mipush.sdk.Constants;
import java.io.IOException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.SimpleTimeZone;
import java.util.TimeZone;
import kotlin.UByte;

public class DERGeneralizedTime extends ASN1Object {
    String time;

    public DERGeneralizedTime(String str) {
        this.time = str;
        try {
            getDate();
        } catch (ParseException e) {
            throw new IllegalArgumentException("invalid date string: " + e.getMessage());
        }
    }

    public DERGeneralizedTime(Date date) {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyyMMddHHmmss'Z'");
        simpleDateFormat.setTimeZone(new SimpleTimeZone(0, "Z"));
        this.time = simpleDateFormat.format(date);
    }

    DERGeneralizedTime(byte[] bArr) {
        int length = bArr.length;
        char[] cArr = new char[length];
        for (int i = 0; i != length; i++) {
            cArr[i] = (char) (bArr[i] & UByte.MAX_VALUE);
        }
        this.time = new String(cArr);
    }

    private String calculateGMTOffset() {
        String str;
        TimeZone timeZone = TimeZone.getDefault();
        int rawOffset = timeZone.getRawOffset();
        if (rawOffset < 0) {
            rawOffset = -rawOffset;
            str = Constants.ACCEPT_TIME_SEPARATOR_SERVER;
        } else {
            str = "+";
        }
        int i = rawOffset / BaseConstants.Time.HOUR;
        int i2 = (rawOffset - (((i * 60) * 60) * 1000)) / BaseConstants.Time.MINUTE;
        try {
            if (timeZone.useDaylightTime() && timeZone.inDaylightTime(getDate())) {
                i += str.equals("+") ? 1 : -1;
            }
        } catch (ParseException unused) {
        }
        return "GMT" + str + convert(i) + Constants.COLON_SEPARATOR + convert(i2);
    }

    private String convert(int i) {
        if (i >= 10) {
            return Integer.toString(i);
        }
        return "0" + i;
    }

    public static DERGeneralizedTime getInstance(Object obj) {
        if (obj == null || (obj instanceof DERGeneralizedTime)) {
            return (DERGeneralizedTime) obj;
        }
        if (obj instanceof ASN1OctetString) {
            return new DERGeneralizedTime(((ASN1OctetString) obj).getOctets());
        }
        throw new IllegalArgumentException("illegal object in getInstance: " + obj.getClass().getName());
    }

    public static DERGeneralizedTime getInstance(ASN1TaggedObject aSN1TaggedObject, boolean z) {
        return getInstance(aSN1TaggedObject.getObject());
    }

    private byte[] getOctets() {
        char[] charArray = this.time.toCharArray();
        byte[] bArr = new byte[charArray.length];
        for (int i = 0; i != charArray.length; i++) {
            bArr[i] = (byte) charArray[i];
        }
        return bArr;
    }

    private boolean hasFractionalSeconds() {
        return this.time.indexOf(46) == 14;
    }

    @Override
    boolean asn1Equals(DERObject dERObject) {
        if (dERObject instanceof DERGeneralizedTime) {
            return this.time.equals(((DERGeneralizedTime) dERObject).time);
        }
        return false;
    }

    @Override
    void encode(DEROutputStream dEROutputStream) throws IOException {
        dEROutputStream.writeEncoded(24, getOctets());
    }

    public Date getDate() throws ParseException {
        SimpleDateFormat simpleDateFormat;
        SimpleTimeZone simpleTimeZone;
        String time = this.time;
        if (time.endsWith("Z")) {
            simpleDateFormat = hasFractionalSeconds() ? new SimpleDateFormat("yyyyMMddHHmmss.SSSS'Z'") : new SimpleDateFormat("yyyyMMddHHmmss'Z'");
            simpleTimeZone = new SimpleTimeZone(0, "Z");
        } else {
            if (this.time.indexOf(45) <= 0 && this.time.indexOf(43) <= 0) {
                simpleDateFormat = hasFractionalSeconds() ? new SimpleDateFormat("yyyyMMddHHmmss.SSSS") : new SimpleDateFormat("yyyyMMddHHmmss");
                simpleDateFormat.setTimeZone(new SimpleTimeZone(0, TimeZone.getDefault().getID()));
                return simpleDateFormat.parse(time);
            }
            time = getTime();
            simpleDateFormat = hasFractionalSeconds() ? new SimpleDateFormat("yyyyMMddHHmmss.SSSSz") : new SimpleDateFormat("yyyyMMddHHmmssz");
            simpleTimeZone = new SimpleTimeZone(0, "Z");
        }
        simpleDateFormat.setTimeZone(simpleTimeZone);
        return simpleDateFormat.parse(time);
    }

    public String getTime() {
        if (this.time.charAt(r0.length() - 1) == 'Z') {
            StringBuilder sb = new StringBuilder();
            sb.append(this.time.substring(0, r2.length() - 1));
            sb.append("GMT+00:00");
            return sb.toString();
        }
        int length = this.time.length() - 5;
        char cCharAt = this.time.charAt(length);
        if (cCharAt == '-' || cCharAt == '+') {
            StringBuilder sb2 = new StringBuilder();
            sb2.append(this.time.substring(0, length));
            sb2.append("GMT");
            int i = length + 3;
            sb2.append(this.time.substring(length, i));
            sb2.append(Constants.COLON_SEPARATOR);
            sb2.append(this.time.substring(i));
            return sb2.toString();
        }
        int length2 = this.time.length() - 3;
        char cCharAt2 = this.time.charAt(length2);
        if (cCharAt2 != '-' && cCharAt2 != '+') {
            return this.time + calculateGMTOffset();
        }
        return this.time.substring(0, length2) + "GMT" + this.time.substring(length2) + ":00";
    }

    public String getTimeString() {
        return this.time;
    }

    @Override
    public int hashCode() {
        return this.time.hashCode();
    }
}
