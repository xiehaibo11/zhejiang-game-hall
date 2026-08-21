.class public Lcom/igexin/push/extension/distribution/basic/c/c;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;

.field private static d:Lcom/igexin/push/extension/distribution/basic/c/c;


# instance fields
.field private b:Lcom/igexin/push/extension/distribution/basic/e/a;

.field private c:Landroid/content/Context;

.field private final e:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "EXT-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-class v1, Lcom/igexin/push/extension/distribution/basic/c/c;

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/c/c;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->c:Landroid/content/Context;

    const-string p1, "/sdcard/libs//com.getui.sdk.deviceId.db"

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->e:Ljava/lang/String;

    return-void
.end method

.method public static a()Lcom/igexin/push/extension/distribution/basic/c/c;
    .locals 2

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/c/c;->d:Lcom/igexin/push/extension/distribution/basic/c/c;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/extension/distribution/basic/c/c;

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/igexin/push/extension/distribution/basic/c/c;-><init>(Landroid/content/Context;)V

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/c/c;->d:Lcom/igexin/push/extension/distribution/basic/c/c;

    :cond_0
    sget-object v0, Lcom/igexin/push/extension/distribution/basic/c/c;->d:Lcom/igexin/push/extension/distribution/basic/c/c;

    return-object v0
.end method

.method private a(Ljava/io/File;)V
    .locals 5

    invoke-virtual {p1}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_3

    aget-object v3, v0, v2

    :cond_0
    :goto_1
    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-virtual {v3}, Ljava/io/File;->isFile()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-virtual {v3}, Ljava/io/File;->delete()Z

    goto :goto_1

    :cond_1
    invoke-virtual {v3}, Ljava/io/File;->delete()Z

    move-result v4

    if-nez v4, :cond_0

    invoke-direct {p0, v3}, Lcom/igexin/push/extension/distribution/basic/c/c;->a(Ljava/io/File;)V

    goto :goto_1

    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_3
    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 5

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/c/c;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|save deviceId = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " to "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance v0, Ljava/util/concurrent/locks/ReentrantReadWriteLock;

    invoke-direct {v0}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;-><init>()V

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;->writeLock()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;

    move-result-object v0

    const/4 v2, 0x0

    :try_start_0
    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;->tryLock()Z

    move-result v3

    if-eqz v3, :cond_1

    new-instance v3, Ljava/io/File;

    iget-object v4, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->e:Ljava/lang/String;

    invoke-direct {v3, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v4

    if-nez v4, :cond_0

    invoke-virtual {v3}, Ljava/io/File;->createNewFile()Z

    move-result v4

    if-nez v4, :cond_0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/igexin/push/extension/distribution/basic/c/c;->a:Ljava/lang/String;

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "|create file "

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/io/File;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " failed"

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {p1, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;->unlock()V

    return-void

    :cond_0
    :try_start_1
    new-instance v3, Ljava/io/FileOutputStream;

    iget-object v4, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->e:Ljava/lang/String;

    invoke-direct {v3, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "V1|"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v2, "utf-8"

    invoke-virtual {p1, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p1

    invoke-static {p1}, Lcom/igexin/b/b/a;->b([B)[B

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/io/FileOutputStream;->write([B)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    move-object v2, v3

    goto :goto_0

    :catchall_0
    move-exception p1

    move-object v2, v3

    goto :goto_4

    :catch_0
    move-exception p1

    move-object v2, v3

    goto :goto_2

    :cond_1
    :goto_0
    if-eqz v2, :cond_2

    :goto_1
    :try_start_3
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    :catch_1
    :cond_2
    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;->unlock()V

    goto :goto_3

    :catchall_1
    move-exception p1

    goto :goto_4

    :catch_2
    move-exception p1

    :goto_2
    :try_start_4
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/igexin/push/extension/distribution/basic/c/c;->a:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {p1, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v2, :cond_2

    goto :goto_1

    :goto_3
    return-void

    :goto_4
    if-eqz v2, :cond_3

    :try_start_5
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    :catch_3
    :cond_3
    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;->unlock()V

    throw p1
.end method

.method private c(Ljava/lang/String;)V
    .locals 3

    :try_start_0
    sget-object v0, Lcom/igexin/push/extension/distribution/basic/c/e;->l:Lcom/igexin/push/extension/distribution/basic/e/b;

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/e/b;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    const-string v1, "id"

    const/4 v2, 0x2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v1, "value"

    invoke-virtual {v0, v1, p1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    sget-object p1, Lcom/igexin/push/extension/distribution/basic/c/e;->l:Lcom/igexin/push/extension/distribution/basic/e/b;

    const-string v1, "runtime"

    const/4 v2, 0x0

    invoke-virtual {p1, v1, v2, v0}, Lcom/igexin/push/extension/distribution/basic/e/b;->a(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)V

    sget-object p1, Lcom/igexin/push/extension/distribution/basic/c/e;->l:Lcom/igexin/push/extension/distribution/basic/e/b;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/e/b;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method private g()Ljava/lang/String;
    .locals 7

    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->e:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_5

    const/16 v0, 0x400

    new-array v0, v0, [B

    :try_start_0
    new-instance v2, Ljava/io/FileInputStream;

    iget-object v3, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->e:Ljava/lang/String;

    invoke-direct {v2, v3}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :try_start_1
    new-instance v3, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v3}, Ljava/io/ByteArrayOutputStream;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :goto_0
    :try_start_2
    invoke-virtual {v2, v0}, Ljava/io/FileInputStream;->read([B)I

    move-result v4

    const/4 v5, -0x1

    const/4 v6, 0x0

    if-eq v4, v5, :cond_0

    invoke-virtual {v3, v0, v6, v4}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_0

    :cond_0
    invoke-virtual {v3}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v0

    new-instance v4, Ljava/lang/String;

    invoke-static {v0}, Lcom/igexin/b/b/a;->c([B)[B

    move-result-object v0

    const-string v5, "utf-8"

    invoke-direct {v4, v0, v5}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    const-string v0, "\\|"

    invoke-virtual {v4, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    array-length v4, v0

    const/4 v5, 0x1

    if-le v4, v5, :cond_1

    const-string v4, "V1"

    aget-object v6, v0, v6

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    aget-object v0, v0, v5
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_5
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    move-object v1, v0

    :cond_1
    :try_start_3
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    :catch_0
    :goto_1
    :try_start_4
    invoke-virtual {v3}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_7

    goto :goto_5

    :catchall_0
    move-exception v0

    goto :goto_2

    :catchall_1
    move-exception v0

    move-object v3, v1

    :goto_2
    move-object v1, v2

    goto :goto_3

    :catch_1
    move-object v3, v1

    goto :goto_4

    :catchall_2
    move-exception v0

    move-object v3, v1

    :goto_3
    if-eqz v1, :cond_2

    :try_start_5
    invoke-virtual {v1}, Ljava/io/FileInputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2

    :catch_2
    :cond_2
    if-eqz v3, :cond_3

    :try_start_6
    invoke-virtual {v3}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3

    :catch_3
    :cond_3
    throw v0

    :catch_4
    move-object v2, v1

    move-object v3, v2

    :catch_5
    :goto_4
    if-eqz v2, :cond_4

    :try_start_7
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_6

    :catch_6
    :cond_4
    if-eqz v3, :cond_5

    goto :goto_1

    :catch_7
    :cond_5
    :goto_5
    return-object v1
.end method


# virtual methods
.method public a(Ljava/lang/String;)Ljava/lang/String;
    .locals 11

    const-string v0, "imageurl"

    const-string v1, ""

    invoke-virtual {p0}, Lcom/igexin/push/extension/distribution/basic/c/c;->b()Lcom/igexin/push/extension/distribution/basic/e/a;

    move-result-object v2

    iput-object v2, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->b:Lcom/igexin/push/extension/distribution/basic/e/a;

    const/4 v8, 0x0

    :try_start_0
    const-string v3, "image"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v4

    const/4 v9, 0x1

    new-array v5, v9, [Ljava/lang/String;

    const/4 v10, 0x0

    aput-object p1, v5, v10

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-virtual/range {v2 .. v7}, Lcom/igexin/push/extension/distribution/basic/e/a;->a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v8
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v8, :cond_4

    :cond_0
    :goto_0
    move-object v2, v1

    :cond_1
    :try_start_1
    invoke-interface {v8}, Landroid/database/Cursor;->moveToNext()Z

    move-result v3

    if-eqz v3, :cond_3

    const-string v3, "imagesrc"

    invoke-interface {v8, v3}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v3

    invoke-interface {v8, v3}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/io/File;

    invoke-direct {v3, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-virtual {v3}, Ljava/io/File;->canRead()Z

    move-result v3
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v3, :cond_1

    :cond_2
    :try_start_2
    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->b:Lcom/igexin/push/extension/distribution/basic/e/a;

    const-string v3, "image"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v4

    new-array v5, v9, [Ljava/lang/String;

    aput-object p1, v5, v10

    invoke-virtual {v2, v3, v4, v5}, Lcom/igexin/push/extension/distribution/basic/e/a;->a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V

    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->c:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    const-string v3, "android.permission.WRITE_EXTERNAL_STORAGE"

    iget-object v4, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->c:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/pm/PackageManager;->checkPermission(Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    if-eqz v2, :cond_0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->c:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getCacheDir()Ljava/io/File;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, "/ImgCache/"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/igexin/push/extension/distribution/basic/c/e;->k:Ljava/lang/String;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :cond_3
    move-object v1, v2

    goto :goto_1

    :catch_0
    move-object v1, v2

    goto :goto_3

    :cond_4
    :goto_1
    if-eqz v8, :cond_6

    :goto_2
    invoke-interface {v8}, Landroid/database/Cursor;->close()V

    goto :goto_4

    :catchall_0
    move-exception p1

    if-eqz v8, :cond_5

    invoke-interface {v8}, Landroid/database/Cursor;->close()V

    :cond_5
    throw p1

    :catch_1
    :goto_3
    if-eqz v8, :cond_6

    goto :goto_2

    :cond_6
    :goto_4
    return-object v1
.end method

.method public b()Lcom/igexin/push/extension/distribution/basic/e/a;
    .locals 2

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->b:Lcom/igexin/push/extension/distribution/basic/e/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/extension/distribution/basic/e/a;

    iget-object v1, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->c:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/igexin/push/extension/distribution/basic/e/a;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->b:Lcom/igexin/push/extension/distribution/basic/e/a;

    :cond_0
    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/c/c;->b:Lcom/igexin/push/extension/distribution/basic/e/a;

    return-object v0
.end method

.method public c()V
    .locals 9

    const-string v0, "image"

    const-string v1, "taskid"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    const-wide/32 v4, 0x240c8400

    sub-long/2addr v2, v4

    const/4 v4, 0x0

    :try_start_0
    invoke-virtual {p0}, Lcom/igexin/push/extension/distribution/basic/c/c;->b()Lcom/igexin/push/extension/distribution/basic/e/a;

    move-result-object v5

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v6

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "createtime <= "

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v0, v6, v2}, Lcom/igexin/push/extension/distribution/basic/e/a;->a(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v4

    if-eqz v4, :cond_1

    :cond_0
    :goto_0
    invoke-interface {v4}, Landroid/database/Cursor;->moveToNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v4, v1}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v4, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0}, Lcom/igexin/push/extension/distribution/basic/c/c;->b()Lcom/igexin/push/extension/distribution/basic/e/a;

    move-result-object v3

    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/String;

    const/4 v7, 0x0

    aput-object v2, v6, v7

    invoke-virtual {v3, v0, v5, v6}, Lcom/igexin/push/extension/distribution/basic/e/a;->a(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v5, Lcom/igexin/push/extension/distribution/basic/c/e;->k:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/io/File;

    invoke-direct {v3, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-direct {p0, v3}, Lcom/igexin/push/extension/distribution/basic/c/c;->a(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_1
    if-eqz v4, :cond_3

    goto :goto_1

    :catchall_0
    move-exception v0

    if-eqz v4, :cond_2

    invoke-interface {v4}, Landroid/database/Cursor;->close()V

    :cond_2
    throw v0

    :catch_0
    if-eqz v4, :cond_3

    :goto_1
    invoke-interface {v4}, Landroid/database/Cursor;->close()V

    :cond_3
    return-void
.end method

.method public d()V
    .locals 5

    new-instance v0, Ljava/io/File;

    sget-object v1, Lcom/igexin/push/core/CoreConsts;->q:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_0

    return-void

    :cond_0
    new-instance v1, Lcom/igexin/push/extension/distribution/basic/c/d;

    invoke-direct {v1, p0}, Lcom/igexin/push/extension/distribution/basic/c/d;-><init>(Lcom/igexin/push/extension/distribution/basic/c/c;)V

    invoke-virtual {v0, v1}, Ljava/io/File;->listFiles(Ljava/io/FileFilter;)[Ljava/io/File;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_2

    aget-object v3, v0, v2

    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-direct {p0, v3}, Lcom/igexin/push/extension/distribution/basic/c/c;->a(Ljava/io/File;)V

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method public e()V
    .locals 4

    invoke-direct {p0}, Lcom/igexin/push/extension/distribution/basic/c/c;->g()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/extension/distribution/basic/c/c;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|read from com.getui.sdk.deviceId.db = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "; CoreRuntimeInfo.deviceId = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Object;

    invoke-static {v1, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz v0, :cond_0

    sget-object v1, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_2

    sput-object v0, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/igexin/push/extension/distribution/basic/c/c;->c(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/igexin/push/extension/distribution/basic/c/c;->b(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/c/c;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|updateDeviceId new file deviceId and CoreRuntimeInfo deviceId is null return"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v2, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public f()V
    .locals 0

    return-void
.end method
