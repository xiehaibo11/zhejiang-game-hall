package com.xiaomi.push;

import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.qihoo360.replugin.RePlugin;
import com.sigmob.sdk.base.mta.PointCategory;
import com.xiaomi.push.gl;
import com.xiaomi.push.gp;
import com.xiaomi.push.gr;
import com.xiaomi.push.service.bg;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlPullParserFactory;

public class gv {
    private static XmlPullParser a;

    public static gk a(String str, String str2, XmlPullParser xmlPullParser) {
        Object objA = gu.a().a("all", "xm:chat");
        if (objA == null || !(objA instanceof com.xiaomi.push.service.k)) {
            return null;
        }
        return ((com.xiaomi.push.service.k) objA).b(xmlPullParser);
    }

    public static gl a(XmlPullParser xmlPullParser, fw fwVar) throws XmlPullParserException, IOException {
        String attributeValue = xmlPullParser.getAttributeValue("", "id");
        String attributeValue2 = xmlPullParser.getAttributeValue("", RemoteMessageConst.TO);
        String attributeValue3 = xmlPullParser.getAttributeValue("", "from");
        String attributeValue4 = xmlPullParser.getAttributeValue("", "chid");
        gl.a aVarA = gl.a.a(xmlPullParser.getAttributeValue("", "type"));
        HashMap map = new HashMap();
        boolean z = false;
        for (int i = 0; i < xmlPullParser.getAttributeCount(); i++) {
            String attributeName = xmlPullParser.getAttributeName(i);
            map.put(attributeName, xmlPullParser.getAttributeValue("", attributeName));
        }
        gl gxVar = null;
        gr grVarA = null;
        while (!z) {
            int next = xmlPullParser.next();
            if (next == 2) {
                String name = xmlPullParser.getName();
                String namespace = xmlPullParser.getNamespace();
                if (name.equals("error")) {
                    grVarA = a(xmlPullParser);
                } else {
                    gxVar = new gl();
                    gxVar.a(a(name, namespace, xmlPullParser));
                }
            } else if (next == 3 && xmlPullParser.getName().equals("iq")) {
                z = true;
            }
        }
        if (gxVar == null) {
            if (gl.a.a == aVarA || gl.a.b == aVarA) {
                gw gwVar = new gw();
                gwVar.k(attributeValue);
                gwVar.m(attributeValue3);
                gwVar.n(attributeValue2);
                gwVar.a(gl.a.d);
                gwVar.l(attributeValue4);
                gwVar.a(new gr(gr.a.e));
                fwVar.a(gwVar);
                com.xiaomi.channel.commonutils.logger.b.d("iq usage error. send packet in packet parser.");
                return null;
            }
            gxVar = new gx();
        }
        gxVar.k(attributeValue);
        gxVar.m(attributeValue2);
        gxVar.l(attributeValue4);
        gxVar.n(attributeValue3);
        gxVar.a(aVarA);
        gxVar.a(grVarA);
        gxVar.a(map);
        return gxVar;
    }

    public static gn a(XmlPullParser xmlPullParser) throws XmlPullParserException, gh, IOException {
        String attributeValue;
        boolean z = false;
        String strNextText = null;
        if ("1".equals(xmlPullParser.getAttributeValue("", "s"))) {
            String attributeValue2 = xmlPullParser.getAttributeValue("", "chid");
            String attributeValue3 = xmlPullParser.getAttributeValue("", "id");
            String attributeValue4 = xmlPullParser.getAttributeValue("", "from");
            String attributeValue5 = xmlPullParser.getAttributeValue("", RemoteMessageConst.TO);
            String attributeValue6 = xmlPullParser.getAttributeValue("", "type");
            bg.b bVarA = com.xiaomi.push.service.bg.a().a(attributeValue2, attributeValue5);
            if (bVarA == null) {
                bVarA = com.xiaomi.push.service.bg.a().a(attributeValue2, attributeValue4);
            }
            if (bVarA == null) {
                throw new gh("the channel id is wrong while receiving a encrypted message");
            }
            gn gnVarA = null;
            while (!z) {
                int next = xmlPullParser.next();
                if (next == 2) {
                    if (!"s".equals(xmlPullParser.getName())) {
                        throw new gh("error while receiving a encrypted message with wrong format");
                    }
                    if (xmlPullParser.next() != 4) {
                        throw new gh("error while receiving a encrypted message with wrong format");
                    }
                    String text = xmlPullParser.getText();
                    if ("5".equals(attributeValue2) || "6".equals(attributeValue2)) {
                        gm gmVar = new gm();
                        gmVar.l(attributeValue2);
                        gmVar.b(true);
                        gmVar.n(attributeValue4);
                        gmVar.m(attributeValue5);
                        gmVar.k(attributeValue3);
                        gmVar.f(attributeValue6);
                        String[] strArr = (String[]) null;
                        gk gkVar = new gk("s", null, strArr, strArr);
                        gkVar.a(text);
                        gmVar.a(gkVar);
                        return gmVar;
                    }
                    a(com.xiaomi.push.service.bp.a(com.xiaomi.push.service.bp.a(bVarA.h, attributeValue3), text));
                    a.next();
                    gnVarA = a(a);
                } else if (next == 3 && xmlPullParser.getName().equals("message")) {
                    z = true;
                }
            }
            if (gnVarA != null) {
                return gnVarA;
            }
            throw new gh("error while receiving a encrypted message with wrong format");
        }
        gm gmVar2 = new gm();
        String attributeValue7 = xmlPullParser.getAttributeValue("", "id");
        if (attributeValue7 == null) {
            attributeValue7 = "ID_NOT_AVAILABLE";
        }
        gmVar2.k(attributeValue7);
        gmVar2.m(xmlPullParser.getAttributeValue("", RemoteMessageConst.TO));
        gmVar2.n(xmlPullParser.getAttributeValue("", "from"));
        gmVar2.l(xmlPullParser.getAttributeValue("", "chid"));
        gmVar2.a(xmlPullParser.getAttributeValue("", "appid"));
        try {
            attributeValue = xmlPullParser.getAttributeValue("", "transient");
        } catch (Exception unused) {
            attributeValue = null;
        }
        try {
            String attributeValue8 = xmlPullParser.getAttributeValue("", "seq");
            if (!TextUtils.isEmpty(attributeValue8)) {
                gmVar2.b(attributeValue8);
            }
        } catch (Exception unused2) {
        }
        try {
            String attributeValue9 = xmlPullParser.getAttributeValue("", "mseq");
            if (!TextUtils.isEmpty(attributeValue9)) {
                gmVar2.c(attributeValue9);
            }
        } catch (Exception unused3) {
        }
        try {
            String attributeValue10 = xmlPullParser.getAttributeValue("", "fseq");
            if (!TextUtils.isEmpty(attributeValue10)) {
                gmVar2.d(attributeValue10);
            }
        } catch (Exception unused4) {
        }
        try {
            String attributeValue11 = xmlPullParser.getAttributeValue("", "status");
            if (!TextUtils.isEmpty(attributeValue11)) {
                gmVar2.e(attributeValue11);
            }
        } catch (Exception unused5) {
        }
        gmVar2.a(!TextUtils.isEmpty(attributeValue) && attributeValue.equalsIgnoreCase("true"));
        gmVar2.f(xmlPullParser.getAttributeValue("", "type"));
        String strB = b(xmlPullParser);
        if (strB == null || "".equals(strB.trim())) {
            gn.q();
        } else {
            gmVar2.j(strB);
        }
        while (!z) {
            int next2 = xmlPullParser.next();
            if (next2 == 2) {
                String name = xmlPullParser.getName();
                String namespace = xmlPullParser.getNamespace();
                if (TextUtils.isEmpty(namespace)) {
                    namespace = "xm";
                }
                if (name.equals("subject")) {
                    b(xmlPullParser);
                    gmVar2.g(a(xmlPullParser));
                } else if (name.equals(TtmlNode.TAG_BODY)) {
                    String attributeValue12 = xmlPullParser.getAttributeValue("", "encode");
                    String strA = a(xmlPullParser);
                    if (TextUtils.isEmpty(attributeValue12)) {
                        gmVar2.h(strA);
                    } else {
                        gmVar2.a(strA, attributeValue12);
                    }
                } else if (name.equals("thread")) {
                    if (strNextText == null) {
                        strNextText = xmlPullParser.nextText();
                    }
                } else if (name.equals("error")) {
                    gmVar2.a(a(xmlPullParser));
                } else {
                    gmVar2.a(a(name, namespace, xmlPullParser));
                }
            } else if (next2 == 3 && xmlPullParser.getName().equals("message")) {
                z = true;
            }
        }
        gmVar2.i(strNextText);
        return gmVar2;
    }

    public static gp a(XmlPullParser xmlPullParser) throws XmlPullParserException, IOException {
        gp.b bVarValueOf = gp.b.a;
        String attributeValue = xmlPullParser.getAttributeValue("", "type");
        if (attributeValue != null && !attributeValue.equals("")) {
            try {
                bVarValueOf = gp.b.valueOf(attributeValue);
            } catch (IllegalArgumentException unused) {
                System.err.println("Found invalid presence type " + attributeValue);
            }
        }
        gp gpVar = new gp(bVarValueOf);
        gpVar.m(xmlPullParser.getAttributeValue("", RemoteMessageConst.TO));
        gpVar.n(xmlPullParser.getAttributeValue("", "from"));
        gpVar.l(xmlPullParser.getAttributeValue("", "chid"));
        String attributeValue2 = xmlPullParser.getAttributeValue("", "id");
        if (attributeValue2 == null) {
            attributeValue2 = "ID_NOT_AVAILABLE";
        }
        gpVar.k(attributeValue2);
        boolean z = false;
        while (!z) {
            int next = xmlPullParser.next();
            if (next == 2) {
                String name = xmlPullParser.getName();
                String namespace = xmlPullParser.getNamespace();
                if (name.equals("status")) {
                    gpVar.a(xmlPullParser.nextText());
                } else if (name.equals(RemoteMessageConst.Notification.PRIORITY)) {
                    try {
                        gpVar.a(Integer.parseInt(xmlPullParser.nextText()));
                    } catch (NumberFormatException unused2) {
                    } catch (IllegalArgumentException unused3) {
                        gpVar.a(0);
                    }
                } else if (name.equals(PointCategory.SHOW)) {
                    String strNextText = xmlPullParser.nextText();
                    try {
                        gpVar.a(gp.a.valueOf(strNextText));
                    } catch (IllegalArgumentException unused4) {
                        System.err.println("Found invalid presence mode " + strNextText);
                    }
                } else if (name.equals("error")) {
                    gpVar.a(a(xmlPullParser));
                } else {
                    gpVar.a(a(name, namespace, xmlPullParser));
                }
            } else if (next == 3 && xmlPullParser.getName().equals("presence")) {
                z = true;
            }
        }
        return gpVar;
    }

    public static gq a(XmlPullParser xmlPullParser) throws XmlPullParserException, IOException {
        gq gqVar = null;
        boolean z = false;
        while (!z) {
            int next = xmlPullParser.next();
            if (next == 2) {
                gqVar = new gq(xmlPullParser.getName());
            } else if (next == 3 && xmlPullParser.getName().equals("error")) {
                z = true;
            }
        }
        return gqVar;
    }

    public static gr a(XmlPullParser xmlPullParser) throws XmlPullParserException, IOException {
        ArrayList arrayList = new ArrayList();
        boolean z = false;
        String attributeValue = RePlugin.PROCESS_UI;
        String attributeValue2 = null;
        String attributeValue3 = null;
        for (int i = 0; i < xmlPullParser.getAttributeCount(); i++) {
            if (xmlPullParser.getAttributeName(i).equals("code")) {
                attributeValue = xmlPullParser.getAttributeValue("", "code");
            }
            if (xmlPullParser.getAttributeName(i).equals("type")) {
                attributeValue3 = xmlPullParser.getAttributeValue("", "type");
            }
            if (xmlPullParser.getAttributeName(i).equals(com.tkay.expressad.foundation.d.r.ac)) {
                attributeValue2 = xmlPullParser.getAttributeValue("", com.tkay.expressad.foundation.d.r.ac);
            }
        }
        String str = null;
        String strNextText = null;
        while (!z) {
            int next = xmlPullParser.next();
            if (next == 2) {
                if (xmlPullParser.getName().equals("text")) {
                    strNextText = xmlPullParser.nextText();
                } else {
                    String name = xmlPullParser.getName();
                    String namespace = xmlPullParser.getNamespace();
                    if ("urn:ietf:params:xml:ns:xmpp-stanzas".equals(namespace)) {
                        str = name;
                    } else {
                        arrayList.add(a(name, namespace, xmlPullParser));
                    }
                }
            } else if (next == 3) {
                if (xmlPullParser.getName().equals("error")) {
                    z = true;
                }
            } else if (next == 4) {
                strNextText = xmlPullParser.getText();
            }
        }
        return new gr(Integer.parseInt(attributeValue), attributeValue3 == null ? com.tkay.expressad.d.a.b.dO : attributeValue3, attributeValue2, str, strNextText, arrayList);
    }

    private static String a(XmlPullParser xmlPullParser) {
        int depth = xmlPullParser.getDepth();
        String str = "";
        while (true) {
            if (xmlPullParser.next() == 3 && xmlPullParser.getDepth() == depth) {
                return str;
            }
            str = str + xmlPullParser.getText();
        }
    }

    private static void a(byte[] bArr) throws XmlPullParserException {
        if (a == null) {
            try {
                XmlPullParser xmlPullParserNewPullParser = XmlPullParserFactory.newInstance().newPullParser();
                a = xmlPullParserNewPullParser;
                xmlPullParserNewPullParser.setFeature("http://xmlpull.org/v1/doc/features.html#process-namespaces", true);
            } catch (XmlPullParserException e) {
                e.printStackTrace();
            }
        }
        a.setInput(new InputStreamReader(new ByteArrayInputStream(bArr)));
    }

    private static String b(XmlPullParser xmlPullParser) {
        for (int i = 0; i < xmlPullParser.getAttributeCount(); i++) {
            String attributeName = xmlPullParser.getAttributeName(i);
            if ("xml:lang".equals(attributeName) || ("lang".equals(attributeName) && "xml".equals(xmlPullParser.getAttributePrefix(i)))) {
                return xmlPullParser.getAttributeValue(i);
            }
        }
        return null;
    }
}
