.class public Lcom/bytedance/android/openliveplugin/material/ZipFileUtil;
.super Ljava/lang/Object;


# static fields
.field private static final NUM_2048:I = 0x800


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static readTextFile(Ljava/io/File;)Ljava/lang/String;
    .locals 3

    .line 81
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 84
    :try_start_0
    new-instance v1, Ljava/io/FileInputStream;

    invoke-direct {v1, p0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    .line 86
    :goto_0
    invoke-virtual {v1}, Ljava/io/InputStream;->read()I

    move-result p0

    const/4 v2, -0x1

    if-eq p0, v2, :cond_0

    int-to-char p0, p0

    .line 87
    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 89
    :cond_0
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 91
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 93
    :goto_1
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static removeDir(Ljava/io/File;)Z
    .locals 5

    .line 62
    invoke-virtual {p0}, Ljava/io/File;->isDirectory()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 63
    invoke-virtual {p0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 64
    array-length v1, v0

    if-nez v1, :cond_0

    goto :goto_2

    .line 67
    :cond_0
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_2

    aget-object v3, v0, v2

    .line 68
    invoke-virtual {v3}, Ljava/io/File;->isDirectory()Z

    move-result v4

    if-eqz v4, :cond_1

    .line 69
    invoke-static {v3}, Lcom/bytedance/android/openliveplugin/material/ZipFileUtil;->removeDir(Ljava/io/File;)Z

    goto :goto_1

    .line 71
    :cond_1
    invoke-virtual {v3}, Ljava/io/File;->delete()Z

    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 74
    :cond_2
    invoke-virtual {p0}, Ljava/io/File;->delete()Z

    move-result p0

    return p0

    .line 65
    :cond_3
    :goto_2
    invoke-virtual {p0}, Ljava/io/File;->delete()Z

    move-result p0

    return p0

    .line 76
    :cond_4
    invoke-virtual {p0}, Ljava/io/File;->delete()Z

    move-result p0

    return p0
.end method

.method public static unZipFolder(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 26
    new-instance v0, Ljava/util/zip/ZipInputStream;

    new-instance v1, Ljava/io/BufferedInputStream;

    new-instance v2, Ljava/io/FileInputStream;

    invoke-direct {v2, p0}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V

    invoke-direct {v1, v2}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V

    invoke-direct {v0, v1}, Ljava/util/zip/ZipInputStream;-><init>(Ljava/io/InputStream;)V

    .line 28
    :goto_0
    invoke-virtual {v0}, Ljava/util/zip/ZipInputStream;->getNextEntry()Ljava/util/zip/ZipEntry;

    move-result-object p0

    if-eqz p0, :cond_4

    .line 29
    invoke-virtual {p0}, Ljava/util/zip/ZipEntry;->getName()Ljava/lang/String;

    move-result-object v1

    const-string v2, ".."

    .line 30
    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_0

    .line 33
    :cond_0
    invoke-virtual {p0}, Ljava/util/zip/ZipEntry;->isDirectory()Z

    move-result p0

    if-eqz p0, :cond_1

    .line 35
    new-instance p0, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 36
    invoke-virtual {p0}, Ljava/io/File;->mkdirs()Z

    goto :goto_0

    .line 38
    :cond_1
    new-instance p0, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 39
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 40
    invoke-virtual {p0}, Ljava/io/File;->delete()Z

    goto :goto_1

    .line 42
    :cond_2
    invoke-virtual {p0}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->mkdirs()Z

    .line 44
    :goto_1
    invoke-virtual {p0}, Ljava/io/File;->createNewFile()Z

    .line 46
    new-instance v1, Ljava/io/BufferedOutputStream;

    new-instance v2, Ljava/io/FileOutputStream;

    invoke-direct {v2, p0}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v1, v2}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    const/16 p0, 0x800

    new-array p0, p0, [B

    .line 50
    :goto_2
    invoke-virtual {v0, p0}, Ljava/util/zip/ZipInputStream;->read([B)I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_3

    const/4 v3, 0x0

    .line 52
    invoke-virtual {v1, p0, v3, v2}, Ljava/io/BufferedOutputStream;->write([BII)V

    goto :goto_2

    .line 54
    :cond_3
    invoke-virtual {v1}, Ljava/io/BufferedOutputStream;->flush()V

    .line 55
    invoke-virtual {v1}, Ljava/io/BufferedOutputStream;->close()V

    goto/16 :goto_0

    .line 58
    :cond_4
    invoke-virtual {v0}, Ljava/util/zip/ZipInputStream;->close()V

    return-void
.end method
