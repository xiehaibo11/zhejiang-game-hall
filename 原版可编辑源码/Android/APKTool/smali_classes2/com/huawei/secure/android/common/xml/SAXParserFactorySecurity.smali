.class public Lcom/huawei/secure/android/common/xml/SAXParserFactorySecurity;
.super Ljava/lang/Object;
.source "SourceFile"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Ljavax/xml/parsers/SAXParserFactory;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljavax/xml/parsers/ParserConfigurationException;,
            Lorg/xml/sax/SAXNotRecognizedException;,
            Lorg/xml/sax/SAXNotSupportedException;,
            Ljava/lang/NullPointerException;
        }
    .end annotation

    .line 1
    invoke-static {}, Ljavax/xml/parsers/SAXParserFactory;->newInstance()Ljavax/xml/parsers/SAXParserFactory;

    move-result-object v0

    const/4 v1, 0x1

    const-string v2, "http://xml.org/sax/features/namespaces"

    .line 4
    invoke-virtual {v0, v2, v1}, Ljavax/xml/parsers/SAXParserFactory;->setFeature(Ljava/lang/String;Z)V

    const/4 v2, 0x0

    const-string v3, "http://xml.org/sax/features/namespace-prefixes"

    .line 8
    invoke-virtual {v0, v3, v2}, Ljavax/xml/parsers/SAXParserFactory;->setFeature(Ljava/lang/String;Z)V

    const-string v3, "http://xml.org/sax/features/validation"

    .line 12
    invoke-virtual {v0, v3, v2}, Ljavax/xml/parsers/SAXParserFactory;->setFeature(Ljava/lang/String;Z)V

    const-string v3, "http://xml.org/sax/features/external-general-entities"

    .line 15
    invoke-virtual {v0, v3, v2}, Ljavax/xml/parsers/SAXParserFactory;->setFeature(Ljava/lang/String;Z)V

    const-string v3, "http://xml.org/sax/features/external-parameter-entities"

    .line 18
    invoke-virtual {v0, v3, v2}, Ljavax/xml/parsers/SAXParserFactory;->setFeature(Ljava/lang/String;Z)V

    const-string v2, "http://xml.org/sax/features/string-interning"

    .line 21
    invoke-virtual {v0, v2, v1}, Ljavax/xml/parsers/SAXParserFactory;->setFeature(Ljava/lang/String;Z)V

    return-object v0
.end method
