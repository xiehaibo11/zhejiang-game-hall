.class public Lcom/bytedance/pangle/FileProvider;
.super Landroid/content/ContentProvider;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bytedance/pangle/FileProvider$b;,
        Lcom/bytedance/pangle/FileProvider$a;
    }
.end annotation


# static fields
.field private static final a:[Ljava/lang/String;

.field private static final b:Ljava/io/File;

.field private static c:Lcom/bytedance/pangle/FileProvider$a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    const-string v0, "_display_name"

    const-string v1, "_size"

    .line 341
    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bytedance/pangle/FileProvider;->a:[Ljava/lang/String;

    .line 358
    new-instance v0, Ljava/io/File;

    const-string v1, "/"

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/bytedance/pangle/FileProvider;->b:Ljava/io/File;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 340
    invoke-direct {p0}, Landroid/content/ContentProvider;-><init>()V

    return-void
.end method

.method private static varargs a(Ljava/io/File;[Ljava/lang/String;)Ljava/io/File;
    .locals 4

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    if-gtz v1, :cond_1

    .line 789
    aget-object v2, p1, v0

    if-eqz v2, :cond_0

    .line 791
    new-instance v3, Ljava/io/File;

    invoke-direct {v3, p0, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    move-object p0, v3

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-object p0
.end method

.method public static a(Lcom/bytedance/pangle/plugin/Plugin;Landroid/content/res/XmlResourceParser;)V
    .locals 10

    .line 421
    :try_start_0
    iget-object v0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v1

    iget-object p0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-static {v1, p0}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p0

    sget-object v1, Lcom/bytedance/pangle/FileProvider;->c:Lcom/bytedance/pangle/FileProvider$a;

    check-cast v1, Lcom/bytedance/pangle/FileProvider$b;

    .line 1579
    :cond_0
    :goto_0
    invoke-interface {p1}, Landroid/content/res/XmlResourceParser;->next()I

    move-result v2

    const/4 v3, 0x1

    if-eq v2, v3, :cond_b

    const/4 v4, 0x2

    if-ne v2, v4, :cond_0

    .line 1581
    invoke-interface {p1}, Landroid/content/res/XmlResourceParser;->getName()Ljava/lang/String;

    move-result-object v2

    const-string v4, "name"

    const/4 v5, 0x0

    .line 1583
    invoke-interface {p1, v5, v4}, Landroid/content/res/XmlResourceParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v6, "path"

    .line 1584
    invoke-interface {p1, v5, v6}, Landroid/content/res/XmlResourceParser;->getAttributeValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v7, "root-path"

    .line 1587
    invoke-virtual {v7, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    const/4 v8, 0x0

    if-eqz v7, :cond_1

    .line 1588
    sget-object v5, Lcom/bytedance/pangle/FileProvider;->b:Ljava/io/File;

    goto/16 :goto_3

    :cond_1
    const-string v7, "files-path"

    .line 1589
    invoke-virtual {v7, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    .line 1590
    invoke-virtual {p0}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v5

    goto/16 :goto_3

    :cond_2
    const-string v7, "cache-path"

    .line 1591
    invoke-virtual {v7, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_3

    .line 1592
    invoke-virtual {p0}, Landroid/content/Context;->getCacheDir()Ljava/io/File;

    move-result-object v5

    goto :goto_3

    :cond_3
    const-string v7, "external-path"

    .line 1593
    invoke-virtual {v7, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_4

    .line 1594
    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v5

    goto :goto_3

    :cond_4
    const-string v7, "external-files-path"

    .line 1595
    invoke-virtual {v7, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    const/16 v9, 0x13

    if-eqz v7, :cond_6

    .line 1622
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v2, v9, :cond_5

    invoke-virtual {p0, v5}, Landroid/content/Context;->getExternalFilesDirs(Ljava/lang/String;)[Ljava/io/File;

    move-result-object v2

    goto :goto_1

    :cond_5
    new-array v2, v3, [Ljava/io/File;

    invoke-virtual {p0, v5}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object v7

    aput-object v7, v2, v8

    .line 1597
    :goto_1
    array-length v7, v2

    if-lez v7, :cond_9

    .line 1598
    aget-object v5, v2, v8

    goto :goto_3

    :cond_6
    const-string v7, "external-cache-path"

    .line 1600
    invoke-virtual {v7, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_8

    .line 1627
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v2, v9, :cond_7

    invoke-virtual {p0}, Landroid/content/Context;->getExternalCacheDirs()[Ljava/io/File;

    move-result-object v2

    goto :goto_2

    :cond_7
    new-array v2, v3, [Ljava/io/File;

    invoke-virtual {p0}, Landroid/content/Context;->getExternalCacheDir()Ljava/io/File;

    move-result-object v7

    aput-object v7, v2, v8

    .line 1602
    :goto_2
    array-length v7, v2

    if-lez v7, :cond_9

    .line 1603
    aget-object v5, v2, v8

    goto :goto_3

    .line 1605
    :cond_8
    sget v7, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v9, 0x15

    if-lt v7, v9, :cond_9

    const-string v7, "external-media-path"

    .line 1606
    invoke-virtual {v7, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_9

    .line 1607
    invoke-virtual {p0}, Landroid/content/Context;->getExternalMediaDirs()[Ljava/io/File;

    move-result-object v2

    .line 1608
    array-length v7, v2

    if-lez v7, :cond_9

    .line 1609
    aget-object v5, v2, v8

    :cond_9
    :goto_3
    if-eqz v5, :cond_0

    .line 1614
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "_"

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v3, [Ljava/lang/String;

    aput-object v6, v3, v8

    invoke-static {v5, v3}, Lcom/bytedance/pangle/FileProvider;->a(Ljava/io/File;[Ljava/lang/String;)Ljava/io/File;

    move-result-object v3

    .line 1678
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Lorg/xmlpull/v1/XmlPullParserException; {:try_start_0 .. :try_end_0} :catch_1

    if-nez v4, :cond_a

    .line 1684
    :try_start_1
    invoke-virtual {v3}, Ljava/io/File;->getCanonicalFile()Ljava/io/File;

    move-result-object v3
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catch Lorg/xmlpull/v1/XmlPullParserException; {:try_start_1 .. :try_end_1} :catch_1

    .line 1690
    :try_start_2
    iget-object v4, v1, Lcom/bytedance/pangle/FileProvider$b;->a:Ljava/util/HashMap;

    invoke-virtual {v4, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_0

    :catch_0
    move-exception p0

    .line 1686
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "Failed to resolve canonical path for "

    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0, p0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw p1

    .line 1679
    :cond_a
    new-instance p0, Ljava/lang/IllegalArgumentException;

    const-string p1, "Name must not be empty"

    invoke-direct {p0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_2
    .catch Lorg/xmlpull/v1/XmlPullParserException; {:try_start_2 .. :try_end_2} :catch_1

    :cond_b
    return-void

    :catch_1
    move-exception p0

    goto :goto_4

    :catch_2
    move-exception p0

    .line 423
    :goto_4
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public static getUriForFile(Ljava/io/File;)Landroid/net/Uri;
    .locals 1

    .line 415
    sget-object v0, Lcom/bytedance/pangle/FileProvider;->c:Lcom/bytedance/pangle/FileProvider$a;

    invoke-interface {v0, p0}, Lcom/bytedance/pangle/FileProvider$a;->a(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public attachInfo(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V
    .locals 0

    .line 380
    invoke-super {p0, p1, p2}, Landroid/content/ContentProvider;->attachInfo(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V

    .line 383
    iget-boolean p1, p2, Landroid/content/pm/ProviderInfo;->exported:Z

    if-nez p1, :cond_2

    .line 386
    iget-boolean p1, p2, Landroid/content/pm/ProviderInfo;->grantUriPermissions:Z

    if-eqz p1, :cond_1

    .line 390
    sget-object p1, Lcom/bytedance/pangle/FileProvider;->c:Lcom/bytedance/pangle/FileProvider$a;

    if-nez p1, :cond_0

    .line 393
    new-instance p1, Lcom/bytedance/pangle/FileProvider$b;

    iget-object p2, p2, Landroid/content/pm/ProviderInfo;->authority:Ljava/lang/String;

    invoke-direct {p1, p2}, Lcom/bytedance/pangle/FileProvider$b;-><init>(Ljava/lang/String;)V

    sput-object p1, Lcom/bytedance/pangle/FileProvider;->c:Lcom/bytedance/pangle/FileProvider$a;

    return-void

    .line 391
    :cond_0
    new-instance p1, Ljava/lang/SecurityException;

    const-string p2, "\u4ec5\u5141\u8bb8\u5b9a\u4e49\u4e00\u4e2aFileProvider"

    invoke-direct {p1, p2}, Ljava/lang/SecurityException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 387
    :cond_1
    new-instance p1, Ljava/lang/SecurityException;

    const-string p2, "Provider must grant uri permissions"

    invoke-direct {p1, p2}, Ljava/lang/SecurityException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 384
    :cond_2
    new-instance p1, Ljava/lang/SecurityException;

    const-string p2, "Provider must not be exported"

    invoke-direct {p1, p2}, Ljava/lang/SecurityException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public delete(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 0

    .line 546
    sget-object p2, Lcom/bytedance/pangle/FileProvider;->c:Lcom/bytedance/pangle/FileProvider$a;

    invoke-interface {p2, p1}, Lcom/bytedance/pangle/FileProvider$a;->a(Landroid/net/Uri;)Ljava/io/File;

    move-result-object p1

    .line 547
    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public getType(Landroid/net/Uri;)Ljava/lang/String;
    .locals 2

    .line 498
    sget-object v0, Lcom/bytedance/pangle/FileProvider;->c:Lcom/bytedance/pangle/FileProvider$a;

    invoke-interface {v0, p1}, Lcom/bytedance/pangle/FileProvider$a;->a(Landroid/net/Uri;)Ljava/io/File;

    move-result-object p1

    .line 500
    invoke-virtual {p1}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x2e

    invoke-virtual {v0, v1}, Ljava/lang/String;->lastIndexOf(I)I

    move-result v0

    if-ltz v0, :cond_0

    .line 502
    invoke-virtual {p1}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object p1

    add-int/lit8 v0, v0, 0x1

    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    .line 503
    invoke-static {}, Landroid/webkit/MimeTypeMap;->getSingleton()Landroid/webkit/MimeTypeMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/webkit/MimeTypeMap;->getMimeTypeFromExtension(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_0

    return-object p1

    :cond_0
    const-string p1, "application/octet-stream"

    return-object p1
.end method

.method public insert(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;
    .locals 0

    .line 518
    new-instance p1, Ljava/lang/UnsupportedOperationException;

    const-string p2, "No external inserts"

    invoke-direct {p1, p2}, Ljava/lang/UnsupportedOperationException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public onCreate()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public openFile(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;
    .locals 1

    .line 569
    sget-object v0, Lcom/bytedance/pangle/FileProvider;->c:Lcom/bytedance/pangle/FileProvider$a;

    invoke-interface {v0, p1}, Lcom/bytedance/pangle/FileProvider$a;->a(Landroid/net/Uri;)Ljava/io/File;

    move-result-object p1

    const-string v0, "r"

    .line 2764
    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/high16 p2, 0x10000000

    goto :goto_1

    :cond_0
    const-string v0, "w"

    .line 2766
    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "wt"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const-string v0, "wa"

    .line 2770
    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/high16 p2, 0x2a000000

    goto :goto_1

    :cond_2
    const-string v0, "rw"

    .line 2774
    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    const/high16 p2, 0x38000000

    goto :goto_1

    :cond_3
    const-string v0, "rwt"

    .line 2777
    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    const/high16 p2, 0x3c000000    # 0.0078125f

    goto :goto_1

    .line 2782
    :cond_4
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "Invalid mode: "

    invoke-virtual {v0, p2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_5
    :goto_0
    const/high16 p2, 0x2c000000

    .line 571
    :goto_1
    invoke-static {p1, p2}, Landroid/os/ParcelFileDescriptor;->open(Ljava/io/File;I)Landroid/os/ParcelFileDescriptor;

    move-result-object p1

    return-object p1
.end method

.method public query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;
    .locals 6

    .line 459
    sget-object p3, Lcom/bytedance/pangle/FileProvider;->c:Lcom/bytedance/pangle/FileProvider$a;

    invoke-interface {p3, p1}, Lcom/bytedance/pangle/FileProvider$a;->a(Landroid/net/Uri;)Ljava/io/File;

    move-result-object p1

    if-nez p2, :cond_0

    .line 462
    sget-object p2, Lcom/bytedance/pangle/FileProvider;->a:[Ljava/lang/String;

    .line 465
    :cond_0
    array-length p3, p2

    new-array p3, p3, [Ljava/lang/String;

    .line 466
    array-length p4, p2

    new-array p4, p4, [Ljava/lang/Object;

    .line 468
    array-length p5, p2

    const/4 v0, 0x0

    move v1, v0

    move v2, v1

    :goto_0
    if-ge v1, p5, :cond_3

    aget-object v3, p2, v1

    const-string v4, "_display_name"

    .line 469
    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 470
    aput-object v4, p3, v2

    add-int/lit8 v3, v2, 0x1

    .line 471
    invoke-virtual {p1}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v4

    aput-object v4, p4, v2

    :goto_1
    move v2, v3

    goto :goto_2

    :cond_1
    const-string v4, "_size"

    .line 472
    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 473
    aput-object v4, p3, v2

    add-int/lit8 v3, v2, 0x1

    .line 474
    invoke-virtual {p1}, Ljava/io/File;->length()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    aput-object v4, p4, v2

    goto :goto_1

    :cond_2
    :goto_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1798
    :cond_3
    new-array p1, v2, [Ljava/lang/String;

    .line 1799
    invoke-static {p3, v0, p1, v0, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 1804
    new-array p2, v2, [Ljava/lang/Object;

    .line 1805
    invoke-static {p4, v0, p2, v0, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 481
    new-instance p3, Landroid/database/MatrixCursor;

    const/4 p4, 0x1

    invoke-direct {p3, p1, p4}, Landroid/database/MatrixCursor;-><init>([Ljava/lang/String;I)V

    .line 482
    invoke-virtual {p3, p2}, Landroid/database/MatrixCursor;->addRow([Ljava/lang/Object;)V

    return-object p3
.end method

.method public update(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 0

    .line 528
    new-instance p1, Ljava/lang/UnsupportedOperationException;

    const-string p2, "No external updates"

    invoke-direct {p1, p2}, Ljava/lang/UnsupportedOperationException;-><init>(Ljava/lang/String;)V

    throw p1
.end method
