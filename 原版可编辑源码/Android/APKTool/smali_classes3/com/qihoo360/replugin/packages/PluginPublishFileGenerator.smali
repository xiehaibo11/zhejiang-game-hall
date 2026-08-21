.class Lcom/qihoo360/replugin/packages/PluginPublishFileGenerator;
.super Ljava/lang/Object;
.source "PluginPublishFileGenerator.java"


# direct methods
.method constructor <init>()V
    .locals 0

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static write(Ljava/lang/String;Ljava/lang/String;III)Z
    .locals 4

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 58
    :try_start_0
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v2}, Lcom/qihoo360/replugin/utils/FileUtils;->openInputStream(Ljava/io/File;)Ljava/io/FileInputStream;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    .line 59
    :try_start_1
    new-instance v3, Ljava/io/File;

    invoke-direct {v3, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v3}, Lcom/qihoo360/replugin/utils/FileUtils;->openOutputStream(Ljava/io/File;)Ljava/io/FileOutputStream;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 60
    :try_start_2
    new-instance v3, Ljava/io/DataOutputStream;

    invoke-direct {v3, p1}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 62
    :try_start_3
    invoke-virtual {v3, p2}, Ljava/io/DataOutputStream;->writeInt(I)V

    .line 63
    invoke-virtual {v3, p3}, Ljava/io/DataOutputStream;->writeInt(I)V

    .line 64
    invoke-virtual {v3, p4}, Ljava/io/DataOutputStream;->writeInt(I)V

    .line 66
    invoke-static {p0}, Lcom/qihoo360/replugin/utils/basic/SecurityUtil;->getFileMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 67
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz p3, :cond_0

    .line 81
    invoke-static {v3}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 82
    invoke-static {p1}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 83
    invoke-static {v2}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return v0

    .line 70
    :cond_0
    :try_start_4
    invoke-virtual {v3, p2}, Ljava/io/DataOutputStream;->writeUTF(Ljava/lang/String;)V

    .line 72
    invoke-virtual {v3, v0}, Ljava/io/DataOutputStream;->writeInt(I)V

    .line 74
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/io/File;->length()J

    move-result-wide p2

    long-to-int p0, p2

    invoke-virtual {v3, p0}, Ljava/io/DataOutputStream;->writeInt(I)V

    .line 76
    invoke-static {v2, v3}, Lcom/qihoo360/replugin/utils/IOUtils;->copy(Ljava/io/InputStream;Ljava/io/OutputStream;)I
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    const/4 p0, 0x1

    .line 81
    invoke-static {v3}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 82
    invoke-static {p1}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 83
    invoke-static {v2}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return p0

    :catchall_0
    move-exception p0

    move-object v1, v3

    goto :goto_0

    :catchall_1
    move-exception p0

    goto :goto_0

    :catchall_2
    move-exception p0

    move-object p1, v1

    goto :goto_0

    :catchall_3
    move-exception p0

    move-object p1, v1

    move-object v2, p1

    .line 79
    :goto_0
    :try_start_5
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    .line 81
    invoke-static {v1}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 82
    invoke-static {p1}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 83
    invoke-static {v2}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    return v0

    :catchall_4
    move-exception p0

    .line 81
    invoke-static {v1}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 82
    invoke-static {p1}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    .line 83
    invoke-static {v2}, Lcom/qihoo360/replugin/utils/CloseableUtils;->closeQuietly(Ljava/io/Closeable;)V

    throw p0
.end method
