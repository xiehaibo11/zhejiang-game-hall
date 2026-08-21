.class public final Lcom/loc/ak;
.super Ljava/lang/Object;
.source "FileStorageModel.java"


# static fields
.field public static final a:Ljava/lang/String;

.field public static final b:Ljava/lang/String;

.field public static final c:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "SYmFja3Vwcw"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/ak;->a:Ljava/lang/String;

    const-string v0, "SLmFkaXU"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/ak;->b:Ljava/lang/String;

    const-string v0, "JIw"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/ak;->c:Ljava/lang/String;

    return-void
.end method

.method private static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 9

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1f

    if-ge v0, v1, :cond_4

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    const/16 v1, 0x1e

    if-lt v0, v1, :cond_0

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v1, :cond_0

    goto/16 :goto_3

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x9

    const/4 v2, 0x0

    if-lt v0, v1, :cond_1

    const-string v0, "storage"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/os/storage/StorageManager;

    goto :goto_0

    :cond_1
    move-object p0, v2

    :goto_0
    :try_start_0
    const-string v0, "SYW5kcm9pZC5vcy5zdG9yYWdlLlN0b3JhZ2VWb2x1bWU"

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    const-string v3, "FZ2V0Vm9sdW1lTGlzdA"

    invoke-static {v3}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    new-array v5, v4, [Ljava/lang/Class;

    invoke-virtual {v1, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    const-string v3, "ZZ2V0UGF0aA"

    invoke-static {v3}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    new-array v5, v4, [Ljava/lang/Class;

    invoke-virtual {v0, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    const-string v5, "AaXNSZW1vdmFibGUK"

    invoke-static {v5}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    new-array v6, v4, [Ljava/lang/Class;

    invoke-virtual {v0, v5, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v5, v4, [Ljava/lang/Object;

    invoke-virtual {v1, p0, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/reflect/Array;->getLength(Ljava/lang/Object;)I

    move-result v1

    const/4 v5, 0x0

    :goto_1
    if-ge v5, v1, :cond_3

    invoke-static {p0, v5}, Ljava/lang/reflect/Array;->get(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v6

    new-array v7, v4, [Ljava/lang/Object;

    invoke-virtual {v3, v6, v7}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    new-array v8, v4, [Ljava/lang/Object;

    invoke-virtual {v0, v6, v8}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Boolean;

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v6, :cond_2

    return-object v7

    :cond_2
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    :cond_3
    return-object v2

    :catchall_0
    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object p0

    :goto_2
    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    :goto_3
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const-string v0, ""

    invoke-virtual {p0, v0}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object p0

    goto :goto_2
.end method

.method public static declared-synchronized a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    const-class v0, Lcom/loc/ak;

    monitor-enter v0

    :try_start_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    if-lt v1, v2, :cond_1

    if-eqz p0, :cond_0

    const-string v1, "EYW5kcm9pZC5wZXJtaXNzaW9uLldSSVRFX0VYVEVSTkFMX1NUT1JBR0U="

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Landroid/content/Context;->checkCallingOrSelfPermission(Ljava/lang/String;)I

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "EYW5kcm9pZC5wZXJtaXNzaW9uLlJFQURfRVhURVJOQUxfU1RPUkFHRQ=="

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Landroid/content/Context;->checkCallingOrSelfPermission(Ljava/lang/String;)I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    if-eqz v1, :cond_1

    :cond_0
    monitor-exit v0

    return-void

    :cond_1
    :try_start_1
    invoke-static {p0}, Lcom/loc/ak;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    if-eqz v1, :cond_2

    monitor-exit v0

    return-void

    :cond_2
    :try_start_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Lcom/loc/ak;->c:Ljava/lang/String;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p0, Lcom/loc/ak;->a:Ljava/lang/String;

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    new-instance p0, Ljava/io/File;

    sget-object v1, Lcom/loc/ak;->b:Ljava/lang/String;

    invoke-direct {p0, p2, v1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    const/4 v1, 0x0

    :try_start_3
    invoke-virtual {p2}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-virtual {p2}, Ljava/io/File;->isDirectory()Z

    move-result v2

    if-eqz v2, :cond_4

    :cond_3
    invoke-virtual {p2}, Ljava/io/File;->mkdirs()Z

    :cond_4
    invoke-virtual {p0}, Ljava/io/File;->createNewFile()Z

    new-instance p2, Ljava/io/RandomAccessFile;

    const-string v2, "rws"

    invoke-direct {p2, p0, v2}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :try_start_4
    invoke-virtual {p2}, Ljava/io/RandomAccessFile;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object p0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :try_start_5
    invoke-virtual {p0}, Ljava/nio/channels/FileChannel;->tryLock()Ljava/nio/channels/FileLock;

    move-result-object v1

    if-eqz v1, :cond_5

    const-string v2, "UTF-8"

    invoke-virtual {p1, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p1

    invoke-static {p1}, Ljava/nio/ByteBuffer;->wrap([B)Ljava/nio/ByteBuffer;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/nio/channels/FileChannel;->write(Ljava/nio/ByteBuffer;)I
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    :cond_5
    if-eqz v1, :cond_6

    :try_start_6
    invoke-virtual {v1}, Ljava/nio/channels/FileLock;->release()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_0
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    goto :goto_0

    :catch_0
    nop

    :cond_6
    :goto_0
    if-eqz p0, :cond_7

    :try_start_7
    invoke-virtual {p0}, Ljava/nio/channels/FileChannel;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_1
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    :catch_1
    :cond_7
    :try_start_8
    invoke-static {p2}, Lcom/loc/ak;->a(Ljava/io/Closeable;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_3

    monitor-exit v0

    return-void

    :catchall_0
    nop

    goto :goto_1

    :catchall_1
    move-object p0, v1

    goto :goto_1

    :catchall_2
    move-object p0, v1

    move-object p2, p0

    :goto_1
    if-eqz v1, :cond_8

    :try_start_9
    invoke-virtual {v1}, Ljava/nio/channels/FileLock;->release()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_2
    .catchall {:try_start_9 .. :try_end_9} :catchall_3

    goto :goto_2

    :catch_2
    nop

    :cond_8
    :goto_2
    if-eqz p0, :cond_9

    :try_start_a
    invoke-virtual {p0}, Ljava/nio/channels/FileChannel;->close()V
    :try_end_a
    .catch Ljava/io/IOException; {:try_start_a .. :try_end_a} :catch_3
    .catchall {:try_start_a .. :try_end_a} :catchall_3

    :catch_3
    :cond_9
    :try_start_b
    invoke-static {p2}, Lcom/loc/ak;->a(Ljava/io/Closeable;)V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_3

    monitor-exit v0

    return-void

    :catchall_3
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static a(Ljava/io/Closeable;)V
    .locals 0

    if-eqz p0, :cond_0

    :try_start_0
    invoke-interface {p0}, Ljava/io/Closeable;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method
