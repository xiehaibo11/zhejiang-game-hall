.class public Lcom/qihoo360/replugin/ext/parser/ApkParser;
.super Lcom/qihoo360/replugin/ext/parser/AbstractApkParser;
.source "ApkParser.java"

# interfaces
.implements Ljava/io/Closeable;


# instance fields
.field private final zf:Ljava/util/zip/ZipFile;


# direct methods
.method public constructor <init>(Ljava/io/File;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 48
    invoke-direct {p0}, Lcom/qihoo360/replugin/ext/parser/AbstractApkParser;-><init>()V

    .line 50
    new-instance v0, Ljava/util/zip/ZipFile;

    invoke-direct {v0, p1}, Ljava/util/zip/ZipFile;-><init>(Ljava/io/File;)V

    iput-object v0, p0, Lcom/qihoo360/replugin/ext/parser/ApkParser;->zf:Ljava/util/zip/ZipFile;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 54
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/ext/parser/ApkParser;-><init>(Ljava/io/File;)V

    return-void
.end method

.method private static toByteArray(Ljava/io/InputStream;)[B
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const/16 v0, 0x2000

    :try_start_0
    new-array v0, v0, [B
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 v1, 0x0

    .line 79
    :try_start_1
    new-instance v2, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v2}, Ljava/io/ByteArrayOutputStream;-><init>()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 81
    :goto_0
    :try_start_2
    invoke-virtual {p0, v0}, Ljava/io/InputStream;->read([B)I

    move-result v1

    const/4 v3, -0x1

    if-eq v1, v3, :cond_0

    const/4 v3, 0x0

    .line 82
    invoke-virtual {v2, v0, v3, v1}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_0

    .line 84
    :cond_0
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 87
    :try_start_3
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz p0, :cond_1

    .line 92
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V

    :cond_1
    return-object v0

    :catchall_0
    move-exception v0

    move-object v1, v2

    goto :goto_1

    :catchall_1
    move-exception v0

    :goto_1
    if-eqz v1, :cond_2

    .line 87
    :try_start_4
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V

    :cond_2
    throw v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :catchall_2
    move-exception v0

    if-eqz p0, :cond_3

    .line 92
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V

    :cond_3
    throw v0
.end method


# virtual methods
.method public close()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 70
    invoke-super {p0}, Lcom/qihoo360/replugin/ext/parser/AbstractApkParser;->close()V

    .line 71
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/ApkParser;->zf:Ljava/util/zip/ZipFile;

    invoke-virtual {v0}, Ljava/util/zip/ZipFile;->close()V

    return-void
.end method

.method public getFileData(Ljava/lang/String;)[B
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 59
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/ApkParser;->zf:Ljava/util/zip/ZipFile;

    invoke-virtual {v0, p1}, Ljava/util/zip/ZipFile;->getEntry(Ljava/lang/String;)Ljava/util/zip/ZipEntry;

    move-result-object p1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 64
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/ext/parser/ApkParser;->zf:Ljava/util/zip/ZipFile;

    invoke-virtual {v0, p1}, Ljava/util/zip/ZipFile;->getInputStream(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;

    move-result-object p1

    .line 65
    invoke-static {p1}, Lcom/qihoo360/replugin/ext/parser/ApkParser;->toByteArray(Ljava/io/InputStream;)[B

    move-result-object p1

    return-object p1
.end method
