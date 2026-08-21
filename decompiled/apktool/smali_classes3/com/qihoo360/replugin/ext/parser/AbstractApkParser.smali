.class public abstract Lcom/qihoo360/replugin/ext/parser/AbstractApkParser;
.super Ljava/lang/Object;
.source "AbstractApkParser.java"

# interfaces
.implements Ljava/io/Closeable;


# static fields
.field private static final MANIFEST_FILE:Ljava/lang/String; = "AndroidManifest.xml"


# instance fields
.field private manifestXml:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private parseManifestXml()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 66
    new-instance v0, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;

    invoke-direct {v0}, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;-><init>()V

    const-string v1, "AndroidManifest.xml"

    .line 68
    invoke-virtual {p0, v1}, Lcom/qihoo360/replugin/ext/parser/AbstractApkParser;->getFileData(Ljava/lang/String;)[B

    move-result-object v1

    if-eqz v1, :cond_0

    .line 72
    invoke-direct {p0, v1, v0}, Lcom/qihoo360/replugin/ext/parser/AbstractApkParser;->transBinaryXml([BLcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;)V

    .line 73
    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/parser/XmlTranslator;->getXml()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/replugin/ext/parser/AbstractApkParser;->manifestXml:Ljava/lang/String;

    return-void

    .line 70
    :cond_0
    new-instance v0, Lcom/qihoo360/replugin/ext/parser/exception/ParserException;

    const-string v1, "Manifest file not found"

    invoke-direct {v0, v1}, Lcom/qihoo360/replugin/ext/parser/exception/ParserException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private transBinaryXml([BLcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 82
    invoke-static {p1}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object p1

    .line 83
    new-instance v0, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;

    invoke-direct {v0, p1}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;-><init>(Ljava/nio/ByteBuffer;)V

    .line 84
    invoke-virtual {v0, p2}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->setXmlStreamer(Lcom/qihoo360/replugin/ext/parser/parser/XmlStreamer;)V

    .line 85
    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/parser/BinaryXmlParser;->parse()V

    return-void
.end method


# virtual methods
.method public close()V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    return-void
.end method

.method public abstract getFileData(Ljava/lang/String;)[B
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method

.method public getManifestXml()Ljava/lang/String;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 56
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/AbstractApkParser;->manifestXml:Ljava/lang/String;

    if-nez v0, :cond_0

    .line 57
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/AbstractApkParser;->parseManifestXml()V

    .line 59
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/AbstractApkParser;->manifestXml:Ljava/lang/String;

    return-object v0
.end method
