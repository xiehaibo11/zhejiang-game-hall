.class public Lcom/kuaishou/weapon/p0/r;
.super Ljava/lang/Object;


# static fields
.field public static b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private static c:Lcom/kuaishou/weapon/p0/r;

.field private static d:Landroid/app/Application;

.field private static f:Ljava/util/Random;

.field private static g:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/kuaishou/weapon/p0/s;",
            ">;"
        }
    .end annotation
.end field

.field private static h:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/kuaishou/weapon/p0/s;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field public a:Z

.field private e:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    sput-object v0, Lcom/kuaishou/weapon/p0/r;->f:Ljava/util/Random;

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/kuaishou/weapon/p0/r;->g:Ljava/util/Map;

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/kuaishou/weapon/p0/r;->h:Ljava/util/Map;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/kuaishou/weapon/p0/r;->b:Ljava/util/List;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)Landroid/util/Pair;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Landroid/util/Pair<",
            "Ljava/lang/Boolean;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_4

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/dn;->a(Ljava/io/File;)Z

    move-result p2

    if-nez p2, :cond_1

    new-instance p1, Landroid/util/Pair;

    sget-object p2, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-direct {p1, p2, v1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1

    :cond_1
    invoke-static {v0}, Lcom/kuaishou/weapon/p0/f;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    new-instance p1, Landroid/util/Pair;

    sget-object p2, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-direct {p1, p2, v1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1

    :cond_2
    invoke-virtual {p2, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_3

    new-instance p1, Landroid/util/Pair;

    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-direct {p1, v0, p2}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1

    :cond_3
    new-instance p1, Landroid/util/Pair;

    sget-object p2, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-direct {p1, p2, v1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1

    :cond_4
    :goto_0
    new-instance p1, Landroid/util/Pair;

    sget-object p2, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-direct {p1, p2, v1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1
.end method

.method public static a()Lcom/kuaishou/weapon/p0/r;
    .locals 1

    sget-object v0, Lcom/kuaishou/weapon/p0/r;->c:Lcom/kuaishou/weapon/p0/r;

    return-object v0
.end method

.method public static a(Landroid/content/Context;Z)Lcom/kuaishou/weapon/p0/r;
    .locals 0

    :try_start_0
    sget-object p1, Lcom/kuaishou/weapon/p0/r;->c:Lcom/kuaishou/weapon/p0/r;

    if-nez p1, :cond_0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    check-cast p0, Landroid/app/Application;

    sput-object p0, Lcom/kuaishou/weapon/p0/r;->d:Landroid/app/Application;

    new-instance p0, Lcom/kuaishou/weapon/p0/r;

    invoke-direct {p0}, Lcom/kuaishou/weapon/p0/r;-><init>()V

    sput-object p0, Lcom/kuaishou/weapon/p0/r;->c:Lcom/kuaishou/weapon/p0/r;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    sget-object p0, Lcom/kuaishou/weapon/p0/r;->c:Lcom/kuaishou/weapon/p0/r;

    return-object p0
.end method

.method private a(Lcom/kuaishou/weapon/p0/s;Ljava/lang/String;Ljava/lang/String;Ljava/util/HashSet;[BLjava/lang/StringBuilder;Z)V
    .locals 16
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kuaishou/weapon/p0/s;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/HashSet<",
            "Ljava/lang/String;",
            ">;[B",
            "Ljava/lang/StringBuilder;",
            "Z)V"
        }
    .end annotation

    move-object/from16 v0, p1

    move-object/from16 v1, p5

    move-object/from16 v2, p6

    const-string v3, "armeabi-v7a"

    const-string v4, ".so"

    const-string v5, ".dex"

    new-instance v6, Ljava/util/zip/ZipInputStream;

    new-instance v7, Ljava/io/FileInputStream;

    iget-object v8, v0, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-direct {v7, v8}, Ljava/io/FileInputStream;-><init>(Ljava/lang/String;)V

    invoke-direct {v6, v7}, Ljava/util/zip/ZipInputStream;-><init>(Ljava/io/InputStream;)V

    const/4 v8, 0x0

    :goto_0
    :try_start_0
    invoke-virtual {v6}, Ljava/util/zip/ZipInputStream;->getNextEntry()Ljava/util/zip/ZipEntry;

    move-result-object v9

    if-eqz v9, :cond_9

    invoke-virtual {v9}, Ljava/util/zip/ZipEntry;->getName()Ljava/lang/String;

    move-result-object v10

    const-string v11, "../"

    invoke-virtual {v10, v11}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_8

    const-string v11, "lib/"

    invoke-virtual {v10, v11}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v11

    const/4 v12, 0x0

    if-eqz v11, :cond_4

    invoke-virtual {v9}, Ljava/util/zip/ZipEntry;->isDirectory()Z

    move-result v11

    if-nez v11, :cond_4

    sget-object v11, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_5

    :try_start_1
    sget v13, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v14, 0x8

    if-lt v13, v14, :cond_0

    sget-object v13, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    :cond_0
    const/4 v13, 0x0

    :goto_1
    :try_start_2
    invoke-virtual {v10, v11}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_2

    invoke-static {v13}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_1

    invoke-virtual {v10, v13}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_2

    :cond_1
    const-string v14, "armeabi"

    invoke-virtual {v10, v14}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v14

    if-eqz v14, :cond_8

    invoke-virtual {v3, v11}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v11

    if-nez v11, :cond_2

    invoke-static {v13}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_8

    invoke-virtual {v3, v13}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_8

    :cond_2
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v13, p2

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v14, 0x3

    invoke-virtual {v10, v14}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v14

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v7, p3

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v14, v4, v15}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    const/16 v14, 0x2f

    invoke-virtual {v11, v14}, Ljava/lang/String;->lastIndexOf(I)I

    move-result v15

    invoke-virtual {v11, v12, v15}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v15

    invoke-virtual {v15, v14}, Ljava/lang/String;->lastIndexOf(I)I

    move-result v14

    add-int/lit8 v14, v14, 0x1

    invoke-virtual {v15, v14}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v14

    move-object/from16 v12, p4

    invoke-virtual {v12, v14}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    invoke-static {v15}, Lcom/kuaishou/weapon/p0/r;->e(Ljava/lang/String;)Z

    new-instance v14, Ljava/io/File;

    invoke-direct {v14, v11}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v14}, Ljava/io/File;->delete()Z

    invoke-virtual {v14}, Ljava/io/File;->createNewFile()Z

    new-instance v14, Ljava/io/FileOutputStream;

    invoke-direct {v14, v11}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_5

    :goto_2
    :try_start_3
    invoke-virtual {v6, v1}, Ljava/util/zip/ZipInputStream;->read([B)I

    move-result v8

    if-lez v8, :cond_3

    const/4 v15, 0x0

    invoke-virtual {v14, v1, v15, v8}, Ljava/io/OutputStream;->write([BII)V

    goto :goto_2

    :cond_3
    invoke-virtual {v14}, Ljava/io/OutputStream;->close()V

    sget-object v8, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-static {v11, v8}, Lcom/kuaishou/weapon/p0/dn;->a(Ljava/lang/String;Ljava/lang/Boolean;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    move-object v8, v14

    goto :goto_3

    :catchall_1
    move-exception v0

    move-object v8, v14

    goto/16 :goto_7

    :cond_4
    move-object/from16 v13, p2

    move-object/from16 v7, p3

    move-object/from16 v12, p4

    :goto_3
    :try_start_4
    invoke-virtual {v10, v5}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v10

    if-eqz v10, :cond_7

    invoke-virtual {v9}, Ljava/util/zip/ZipEntry;->isDirectory()Z

    move-result v9

    if-nez v9, :cond_7

    if-eqz p7, :cond_7

    iget-object v9, v0, Lcom/kuaishou/weapon/p0/s;->m:Ljava/lang/String;

    invoke-static {v9}, Lcom/kuaishou/weapon/p0/r;->e(Ljava/lang/String;)Z

    new-instance v10, Ljava/io/File;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    iget v14, v0, Lcom/kuaishou/weapon/p0/s;->a:I

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v14, "-"

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v14, v0, Lcom/kuaishou/weapon/p0/s;->d:Ljava/lang/String;

    invoke-virtual {v11, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v10, v9, v11}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :try_start_5
    invoke-virtual {v10}, Ljava/io/File;->delete()Z

    invoke-virtual {v10}, Ljava/io/File;->createNewFile()Z

    new-instance v9, Ljava/io/FileOutputStream;

    invoke-direct {v9, v10}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    :goto_4
    :try_start_6
    invoke-virtual {v6, v1}, Ljava/util/zip/ZipInputStream;->read([B)I

    move-result v8

    const/4 v11, 0x0

    if-lez v8, :cond_5

    invoke-virtual {v9, v1, v11, v8}, Ljava/io/OutputStream;->write([BII)V

    goto :goto_4

    :cond_5
    invoke-virtual {v9}, Ljava/io/OutputStream;->close()V

    invoke-virtual/range {p6 .. p6}, Ljava/lang/StringBuilder;->length()I

    move-result v8

    if-lez v8, :cond_6

    invoke-virtual {v2, v11}, Ljava/lang/StringBuilder;->setLength(I)V

    :cond_6
    invoke-virtual {v10}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p6 .. p6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    sget-object v11, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-static {v8, v11}, Lcom/kuaishou/weapon/p0/dn;->a(Ljava/lang/String;Ljava/lang/Boolean;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    move-object v8, v9

    goto :goto_6

    :catchall_2
    move-object v8, v9

    goto :goto_5

    :catchall_3
    const/4 v10, 0x0

    :catchall_4
    :goto_5
    if-eqz v10, :cond_7

    :try_start_7
    invoke-virtual {v10}, Ljava/io/File;->exists()Z

    move-result v9

    if-eqz v9, :cond_7

    invoke-virtual {v10}, Ljava/io/File;->delete()Z

    :cond_7
    :goto_6
    invoke-virtual {v6}, Ljava/util/zip/ZipInputStream;->closeEntry()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_5

    goto/16 :goto_0

    :cond_8
    move-object/from16 v13, p2

    move-object/from16 v7, p3

    move-object/from16 v12, p4

    goto/16 :goto_0

    :cond_9
    invoke-virtual {v6}, Ljava/util/zip/ZipInputStream;->close()V

    if-eqz v8, :cond_a

    invoke-virtual {v8}, Ljava/io/OutputStream;->close()V

    :cond_a
    return-void

    :catchall_5
    move-exception v0

    :goto_7
    invoke-virtual {v6}, Ljava/util/zip/ZipInputStream;->close()V

    if-eqz v8, :cond_b

    invoke-virtual {v8}, Ljava/io/OutputStream;->close()V

    :cond_b
    throw v0
.end method

.method private a(Lcom/kuaishou/weapon/p0/s;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 18

    move-object/from16 v9, p1

    move-object/from16 v10, p2

    new-instance v11, Ljava/util/HashSet;

    invoke-direct {v11}, Ljava/util/HashSet;-><init>()V

    if-nez p4, :cond_1

    iget-object v2, v9, Lcom/kuaishou/weapon/p0/s;->n:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    new-instance v2, Ljava/io/File;

    iget-object v3, v9, Lcom/kuaishou/weapon/p0/s;->n:Ljava/lang/String;

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-virtual {v2}, Ljava/io/File;->isFile()Z

    move-result v2

    if-nez v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v8, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v8, 0x1

    :goto_1
    iget-object v2, v9, Lcom/kuaishou/weapon/p0/s;->d:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    iget-object v2, v9, Lcom/kuaishou/weapon/p0/s;->d:Ljava/lang/String;

    const-string v3, "."

    const-string v4, ""

    invoke-virtual {v2, v3, v4}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    goto :goto_2

    :cond_2
    const-string v2, ""

    :goto_2
    move-object v4, v2

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    if-nez v8, :cond_3

    iget-object v2, v9, Lcom/kuaishou/weapon/p0/s;->n:Ljava/lang/String;

    invoke-virtual {v12, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    const/16 v2, 0x1000

    new-array v6, v2, [B

    const/16 v13, 0x8

    :try_start_0
    new-instance v2, Ljava/util/zip/ZipFile;

    iget-object v3, v9, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-direct {v2, v3}, Ljava/util/zip/ZipFile;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_9
    .catch Ljava/util/zip/ZipException; {:try_start_0 .. :try_end_0} :catch_c
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_c
    .catch Ljava/io/EOFException; {:try_start_0 .. :try_end_0} :catch_b
    .catchall {:try_start_0 .. :try_end_0} :catchall_9

    :try_start_1
    invoke-virtual {v2}, Ljava/util/zip/ZipFile;->entries()Ljava/util/Enumeration;

    move-result-object v3
    :try_end_1
    .catch Ljava/util/zip/ZipException; {:try_start_1 .. :try_end_1} :catch_8
    .catch Ljava/io/FileNotFoundException; {:try_start_1 .. :try_end_1} :catch_8
    .catch Ljava/io/EOFException; {:try_start_1 .. :try_end_1} :catch_7
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_6
    .catchall {:try_start_1 .. :try_end_1} :catchall_8

    const/4 v5, 0x0

    const/4 v7, 0x0

    :goto_3
    :try_start_2
    invoke-interface {v3}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v15

    if-eqz v15, :cond_e

    invoke-interface {v3}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Ljava/util/zip/ZipEntry;

    invoke-virtual {v15}, Ljava/util/zip/ZipEntry;->getName()Ljava/lang/String;

    move-result-object v14

    const-string v0, "lib/"

    invoke-virtual {v14, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_8

    invoke-virtual {v15}, Ljava/util/zip/ZipEntry;->isDirectory()Z

    move-result v0

    if-nez v0, :cond_8

    sget-object v0, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;
    :try_end_2
    .catch Ljava/util/zip/ZipException; {:try_start_2 .. :try_end_2} :catch_5
    .catch Ljava/io/FileNotFoundException; {:try_start_2 .. :try_end_2} :catch_5
    .catch Ljava/io/EOFException; {:try_start_2 .. :try_end_2} :catch_4
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_3
    .catchall {:try_start_2 .. :try_end_2} :catchall_7

    :try_start_3
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v1, v13, :cond_4

    sget-object v1, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_4

    :catchall_0
    :cond_4
    const/4 v1, 0x0

    :goto_4
    :try_start_4
    invoke-virtual {v14, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_6

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_5

    invoke-virtual {v14, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_6

    :cond_5
    const-string v13, "armeabi"

    invoke-virtual {v14, v13}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v13

    if-eqz v13, :cond_d

    const-string v13, "armeabi-v7a"

    invoke-virtual {v13, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_d

    const-string v0, "armeabi-v7a"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_d

    :cond_6
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x3

    invoke-virtual {v14, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    const-string v13, ".so"

    move-object/from16 v17, v3

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v10, ".so"

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v13, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x2f

    invoke-virtual {v0, v1}, Ljava/lang/String;->lastIndexOf(I)I

    move-result v3

    const/4 v10, 0x0

    invoke-virtual {v0, v10, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v1}, Ljava/lang/String;->lastIndexOf(I)I

    move-result v1

    const/4 v10, 0x1

    add-int/2addr v1, v10

    invoke-virtual {v3, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v11, v1}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/r;->e(Ljava/lang/String;)Z

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->delete()Z

    invoke-virtual {v2, v15}, Ljava/util/zip/ZipFile;->getInputStream(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;

    move-result-object v5

    new-instance v1, Ljava/io/FileOutputStream;

    invoke-direct {v1, v0}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/util/zip/ZipException; {:try_start_4 .. :try_end_4} :catch_5
    .catch Ljava/io/FileNotFoundException; {:try_start_4 .. :try_end_4} :catch_5
    .catch Ljava/io/EOFException; {:try_start_4 .. :try_end_4} :catch_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_3
    .catchall {:try_start_4 .. :try_end_4} :catchall_7

    :goto_5
    :try_start_5
    invoke-virtual {v5, v6}, Ljava/io/InputStream;->read([B)I

    move-result v3

    if-lez v3, :cond_7

    const/4 v7, 0x0

    invoke-virtual {v1, v6, v7, v3}, Ljava/io/OutputStream;->write([BII)V

    goto :goto_5

    :cond_7
    sget-object v3, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-static {v0, v3}, Lcom/kuaishou/weapon/p0/dn;->a(Ljava/lang/String;Ljava/lang/Boolean;)V
    :try_end_5
    .catch Ljava/util/zip/ZipException; {:try_start_5 .. :try_end_5} :catch_2
    .catch Ljava/io/FileNotFoundException; {:try_start_5 .. :try_end_5} :catch_2
    .catch Ljava/io/EOFException; {:try_start_5 .. :try_end_5} :catch_1
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    move-object v7, v1

    goto :goto_6

    :catchall_1
    move-exception v0

    move-object v7, v1

    goto/16 :goto_a

    :catch_0
    move-object v14, v1

    move-object v10, v2

    move-object v13, v5

    goto/16 :goto_c

    :catch_1
    move-object v14, v1

    move-object v10, v2

    move-object v13, v5

    goto/16 :goto_e

    :catch_2
    move-object v14, v1

    move-object v10, v2

    move-object v13, v5

    goto/16 :goto_10

    :cond_8
    move-object/from16 v17, v3

    const/4 v10, 0x1

    :goto_6
    :try_start_6
    const-string v0, ".dex"

    invoke-virtual {v14, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_b

    invoke-virtual {v15}, Ljava/util/zip/ZipEntry;->isDirectory()Z

    move-result v0

    if-nez v0, :cond_b

    if-eqz v8, :cond_b

    iget-object v0, v9, Lcom/kuaishou/weapon/p0/s;->m:Ljava/lang/String;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/r;->e(Ljava/lang/String;)Z

    new-instance v1, Ljava/io/File;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget v13, v9, Lcom/kuaishou/weapon/p0/s;->a:I

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, "-"

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v13, v9, Lcom/kuaishou/weapon/p0/s;->d:Ljava/lang/String;

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, ".dex"

    invoke-virtual {v3, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v0, v3}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_6

    :try_start_7
    invoke-virtual {v2, v15}, Ljava/util/zip/ZipFile;->getInputStream(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;

    move-result-object v0
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_5

    :try_start_8
    new-instance v3, Ljava/io/FileOutputStream;

    invoke-direct {v3, v1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    :goto_7
    :try_start_9
    invoke-virtual {v0, v6}, Ljava/io/InputStream;->read([B)I

    move-result v5
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_2

    const/4 v13, 0x0

    if-lez v5, :cond_9

    :try_start_a
    invoke-virtual {v3, v6, v13, v5}, Ljava/io/OutputStream;->write([BII)V

    goto :goto_7

    :cond_9
    invoke-virtual {v3}, Ljava/io/OutputStream;->close()V

    if-eqz v0, :cond_a

    invoke-virtual {v0}, Ljava/io/InputStream;->close()V

    :cond_a
    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v12, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    sget-object v7, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-static {v5, v7}, Lcom/kuaishou/weapon/p0/dn;->a(Ljava/lang/String;Ljava/lang/Boolean;)V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_3

    move-object v5, v0

    move-object v7, v3

    goto :goto_9

    :catchall_2
    const/4 v13, 0x0

    :catchall_3
    move-object v5, v0

    move-object v7, v3

    goto :goto_8

    :catchall_4
    const/4 v13, 0x0

    move-object v5, v0

    goto :goto_8

    :catchall_5
    const/4 v13, 0x0

    goto :goto_8

    :cond_b
    const/4 v13, 0x0

    goto :goto_9

    :catchall_6
    const/4 v13, 0x0

    const/4 v1, 0x0

    :goto_8
    if-eqz v1, :cond_c

    :try_start_b
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_c

    invoke-virtual {v1}, Ljava/io/File;->delete()Z
    :try_end_b
    .catch Ljava/util/zip/ZipException; {:try_start_b .. :try_end_b} :catch_5
    .catch Ljava/io/FileNotFoundException; {:try_start_b .. :try_end_b} :catch_5
    .catch Ljava/io/EOFException; {:try_start_b .. :try_end_b} :catch_4
    .catch Ljava/io/IOException; {:try_start_b .. :try_end_b} :catch_3
    .catchall {:try_start_b .. :try_end_b} :catchall_7

    :cond_c
    :goto_9
    move-object/from16 v10, p2

    move-object/from16 v3, v17

    :cond_d
    const/16 v13, 0x8

    goto/16 :goto_3

    :cond_e
    invoke-virtual {v2}, Ljava/util/zip/ZipFile;->close()V

    if-eqz v5, :cond_f

    invoke-virtual {v5}, Ljava/io/InputStream;->close()V

    :cond_f
    if-eqz v7, :cond_16

    invoke-virtual {v7}, Ljava/io/OutputStream;->close()V

    goto/16 :goto_12

    :catchall_7
    move-exception v0

    :goto_a
    move-object v14, v2

    goto/16 :goto_16

    :catch_3
    move-object v10, v2

    move-object v13, v5

    move-object v14, v7

    goto :goto_c

    :catch_4
    move-object v10, v2

    move-object v13, v5

    move-object v14, v7

    goto :goto_e

    :catch_5
    move-object v10, v2

    move-object v13, v5

    move-object v14, v7

    goto/16 :goto_10

    :catchall_8
    move-exception v0

    move-object v14, v2

    const/4 v5, 0x0

    const/4 v7, 0x0

    goto/16 :goto_16

    :catch_6
    move-object v10, v2

    goto :goto_b

    :catch_7
    move-object v10, v2

    goto :goto_d

    :catch_8
    move-object v10, v2

    goto :goto_f

    :catchall_9
    move-exception v0

    const/4 v5, 0x0

    const/4 v7, 0x0

    const/4 v14, 0x0

    goto/16 :goto_16

    :catch_9
    move-exception v0

    :try_start_c
    invoke-virtual {v0}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "--backupFile not exists"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/io/FileNotFoundException;

    invoke-direct {v1, v0}, Ljava/io/FileNotFoundException;-><init>(Ljava/lang/String;)V

    throw v1
    :try_end_c
    .catch Ljava/util/zip/ZipException; {:try_start_c .. :try_end_c} :catch_c
    .catch Ljava/io/FileNotFoundException; {:try_start_c .. :try_end_c} :catch_c
    .catch Ljava/io/EOFException; {:try_start_c .. :try_end_c} :catch_b
    .catch Ljava/io/IOException; {:try_start_c .. :try_end_c} :catch_a
    .catchall {:try_start_c .. :try_end_c} :catchall_9

    :catch_a
    const/4 v10, 0x0

    :goto_b
    const/4 v13, 0x0

    const/4 v14, 0x0

    :goto_c
    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object v5, v11

    move-object v7, v12

    :try_start_d
    invoke-direct/range {v1 .. v8}, Lcom/kuaishou/weapon/p0/r;->a(Lcom/kuaishou/weapon/p0/s;Ljava/lang/String;Ljava/lang/String;Ljava/util/HashSet;[BLjava/lang/StringBuilder;Z)V
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_f

    if-eqz v10, :cond_10

    invoke-virtual {v10}, Ljava/util/zip/ZipFile;->close()V

    :cond_10
    if-eqz v13, :cond_11

    invoke-virtual {v13}, Ljava/io/InputStream;->close()V

    :cond_11
    if-eqz v14, :cond_16

    goto :goto_11

    :catch_b
    const/4 v10, 0x0

    :goto_d
    const/4 v13, 0x0

    const/4 v14, 0x0

    :goto_e
    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object v5, v11

    move-object v7, v12

    :try_start_e
    invoke-direct/range {v1 .. v8}, Lcom/kuaishou/weapon/p0/r;->a(Lcom/kuaishou/weapon/p0/s;Ljava/lang/String;Ljava/lang/String;Ljava/util/HashSet;[BLjava/lang/StringBuilder;Z)V
    :try_end_e
    .catchall {:try_start_e .. :try_end_e} :catchall_f

    if-eqz v10, :cond_12

    invoke-virtual {v10}, Ljava/util/zip/ZipFile;->close()V

    :cond_12
    if-eqz v13, :cond_13

    invoke-virtual {v13}, Ljava/io/InputStream;->close()V

    :cond_13
    if-eqz v14, :cond_16

    goto :goto_11

    :catch_c
    const/4 v10, 0x0

    :goto_f
    const/4 v13, 0x0

    const/4 v14, 0x0

    :goto_10
    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    move-object v5, v11

    move-object v7, v12

    :try_start_f
    invoke-direct/range {v1 .. v8}, Lcom/kuaishou/weapon/p0/r;->a(Lcom/kuaishou/weapon/p0/s;Ljava/lang/String;Ljava/lang/String;Ljava/util/HashSet;[BLjava/lang/StringBuilder;Z)V
    :try_end_f
    .catchall {:try_start_f .. :try_end_f} :catchall_f

    if-eqz v10, :cond_14

    invoke-virtual {v10}, Ljava/util/zip/ZipFile;->close()V

    :cond_14
    if-eqz v13, :cond_15

    invoke-virtual {v13}, Ljava/io/InputStream;->close()V

    :cond_15
    if-eqz v14, :cond_16

    :goto_11
    invoke-virtual {v14}, Ljava/io/OutputStream;->close()V

    :cond_16
    :goto_12
    const-string v0, ""

    sget-object v1, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;

    invoke-virtual {v11, v1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_19

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    move-object/from16 v1, p2

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :try_start_10
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x8

    if-lt v2, v3, :cond_17

    sget-object v2, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;

    invoke-virtual {v11, v2}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_17

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_a

    move-object v14, v2

    goto :goto_13

    :catchall_a
    :cond_17
    const/4 v14, 0x0

    :goto_13
    new-instance v2, Ljava/lang/StringBuilder;

    if-eqz v14, :cond_18

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ":"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_14

    :cond_18
    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :goto_14
    const-string v0, ":"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "java.library.path"

    invoke-static {v0}, Ljava/lang/System;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_15

    :cond_19
    move-object/from16 v1, p2

    :try_start_11
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x8

    if-lt v2, v3, :cond_1a

    sget-object v2, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;

    invoke-virtual {v11, v2}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1a

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ":"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "java.library.path"

    invoke-static {v3}, Ljava/lang/System;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_11
    .catchall {:try_start_11 .. :try_end_11} :catchall_b

    :catchall_b
    :cond_1a
    :goto_15
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1d

    sget-object v2, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;

    const-string v3, "armeabi-v7a"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1b

    const-string v2, "armeabi"

    invoke-virtual {v11, v2}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1c

    :cond_1b
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x8

    if-lt v2, v3, :cond_1d

    sget-object v2, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;

    const-string v3, "armeabi-v7a"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1d

    const-string v2, "armeabi"

    invoke-virtual {v11, v2}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1d

    :cond_1c
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/armeabi:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "java.library.path"

    invoke-static {v2}, Ljava/lang/System;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :cond_1d
    iput-object v0, v9, Lcom/kuaishou/weapon/p0/s;->h:Ljava/lang/String;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v9, Lcom/kuaishou/weapon/p0/s;->n:Ljava/lang/String;

    :try_start_12
    new-instance v0, Ljava/io/File;

    const-string v2, "apkDex"

    move-object/from16 v3, p3

    invoke-direct {v0, v3, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/dn;->c(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/r;->e(Ljava/lang/String;)Z

    sget-object v0, Lcom/kuaishou/weapon/p0/r;->d:Landroid/app/Application;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/dm;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iget-object v2, v9, Lcom/kuaishou/weapon/p0/s;->n:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1f

    iget-object v2, v9, Lcom/kuaishou/weapon/p0/s;->c:Ljava/lang/String;

    const-string v3, "v7"

    invoke-virtual {v2, v3}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1e

    iget-object v2, v9, Lcom/kuaishou/weapon/p0/s;->c:Ljava/lang/String;

    const-string v3, "v8"

    invoke-virtual {v2, v3}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1f

    :cond_1e
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v2

    monitor-enter v2
    :try_end_12
    .catchall {:try_start_12 .. :try_end_12} :catchall_e

    :try_start_13
    iget-object v3, v9, Lcom/kuaishou/weapon/p0/s;->d:Ljava/lang/String;

    sput-object v3, Lcom/kuaishou/weapon/p0/jni/Engine;->soVersion:Ljava/lang/String;

    invoke-virtual/range {p0 .. p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    new-instance v4, Ljava/io/File;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "/"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v4, v5}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v3, v4}, Lcom/kuaishou/weapon/p0/do;->a(Ljava/lang/ClassLoader;Ljava/io/File;)V

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/"

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kuaishou/weapon/p0/jni/Engine;->soPath:Ljava/lang/String;

    sget-object v0, Lcom/kuaishou/weapon/p0/r;->d:Landroid/app/Application;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/jni/Engine;->getInstance(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/jni/Engine;
    :try_end_13
    .catchall {:try_start_13 .. :try_end_13} :catchall_c

    :try_start_14
    monitor-exit v2

    return-void

    :catchall_c
    new-instance v0, Ljava/lang/RuntimeException;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "can\'t load WeaponEngineImpl by both dexFile:"

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " and ZipFile:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v9, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0

    :catchall_d
    move-exception v0

    monitor-exit v2
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_d

    :try_start_15
    throw v0

    :cond_1f
    iget v1, v9, Lcom/kuaishou/weapon/p0/s;->a:I

    if-nez v1, :cond_20

    sget-object v1, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_20

    sget-object v1, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_20

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const-string v2, "e"

    sget-object v3, Lcom/kuaishou/weapon/p0/cj;->v:Ljava/lang/String;

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "m"

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "m1"

    sget-object v2, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;

    invoke-interface {v1, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "m2"

    sget-object v2, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;

    invoke-interface {v1, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "l"

    const-string v2, "S"

    invoke-interface {v1, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kuaishou/weapon/p0/r;->d:Landroid/app/Application;

    const-string v2, "1002001"

    invoke-static {v0, v2, v1}, Lcom/kuaishou/weapon/p0/bg;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;)V
    :try_end_15
    .catchall {:try_start_15 .. :try_end_15} :catchall_e

    nop

    :catchall_e
    :cond_20
    return-void

    :catchall_f
    move-exception v0

    move-object v5, v13

    move-object v7, v14

    move-object v14, v10

    :goto_16
    if-eqz v14, :cond_21

    invoke-virtual {v14}, Ljava/util/zip/ZipFile;->close()V

    :cond_21
    if-eqz v5, :cond_22

    invoke-virtual {v5}, Ljava/io/InputStream;->close()V

    :cond_22
    if-eqz v7, :cond_23

    invoke-virtual {v7}, Ljava/io/OutputStream;->close()V

    :cond_23
    throw v0
.end method

.method private declared-synchronized a(Lcom/kuaishou/weapon/p0/s;)Z
    .locals 6

    monitor-enter p0

    const/4 v0, 0x0

    if-eqz p1, :cond_a

    :try_start_0
    iget-object v1, p1, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto/16 :goto_3

    :cond_0
    sget-object v1, Lcom/kuaishou/weapon/p0/r;->g:Ljava/util/Map;

    iget-object v2, p1, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kuaishou/weapon/p0/s;

    const/4 v2, 0x1

    if-eqz v1, :cond_2

    iget-object v3, v1, Lcom/kuaishou/weapon/p0/s;->d:Ljava/lang/String;

    iget-object v4, p1, Lcom/kuaishou/weapon/p0/s;->d:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    if-eqz v3, :cond_1

    monitor-exit p0

    return v2

    :cond_1
    :try_start_1
    iget-object v1, v1, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lcom/kuaishou/weapon/p0/r;->a(Ljava/lang/String;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    :cond_2
    :try_start_2
    sget-object v1, Lcom/kuaishou/weapon/p0/r;->d:Landroid/app/Application;

    iput-object v1, p1, Lcom/kuaishou/weapon/p0/s;->f:Landroid/content/Context;

    iget v1, p1, Lcom/kuaishou/weapon/p0/s;->p:I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    if-ne v1, v2, :cond_4

    :try_start_3
    iget-object v1, p1, Lcom/kuaishou/weapon/p0/s;->c:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    iget-object v1, p1, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    sget-object v1, Lcom/kuaishou/weapon/p0/r;->d:Landroid/app/Application;

    invoke-virtual {v1}, Landroid/app/Application;->getFilesDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getCanonicalPath()Ljava/lang/String;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/."

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Lcom/kuaishou/weapon/p0/s;->a:I

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p1, Lcom/kuaishou/weapon/p0/s;->m:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p1, Lcom/kuaishou/weapon/p0/s;->m:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/dex"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p1, Lcom/kuaishou/weapon/p0/s;->m:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "/lib/"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/kuaishou/weapon/p0/r;->e:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p1, Lcom/kuaishou/weapon/p0/s;->m:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "/lib"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/dn;->c(Ljava/lang/String;)V

    sget-object v4, Lcom/kuaishou/weapon/p0/r;->f:Ljava/util/Random;

    invoke-virtual {v4}, Ljava/util/Random;->nextInt()I

    move-result v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/"

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1}, Lcom/kuaishou/weapon/p0/r;->e(Ljava/lang/String;)Z

    sget-object v4, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-static {v1, v4}, Lcom/kuaishou/weapon/p0/dn;->a(Ljava/lang/String;Ljava/lang/Boolean;)V

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/r;->e(Ljava/lang/String;)Z

    invoke-direct {p0, p1, v3, v1, v0}, Lcom/kuaishou/weapon/p0/r;->a(Lcom/kuaishou/weapon/p0/s;Ljava/lang/String;Ljava/lang/String;Z)V

    sget-object v1, Lcom/kuaishou/weapon/p0/r;->h:Ljava/util/Map;

    iget-object v3, p1, Lcom/kuaishou/weapon/p0/s;->c:Ljava/lang/String;

    invoke-interface {v1, v3, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v1, Lcom/kuaishou/weapon/p0/r;->g:Ljava/util/Map;

    iget-object v3, p1, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-interface {v1, v3, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_3
    new-instance v1, Ljava/lang/RuntimeException;

    const-string v3, "apkPackageName or apkPkgPath is null"

    invoke-direct {v1, v3}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :catchall_0
    :try_start_4
    iget-object v1, p1, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-virtual {p0, v1}, Lcom/kuaishou/weapon/p0/r;->a(Ljava/lang/String;)Z

    move v1, v2

    goto :goto_1

    :cond_4
    :goto_0
    move v1, v0

    :goto_1
    iget v3, p1, Lcom/kuaishou/weapon/p0/s;->p:I

    if-ne v3, v2, :cond_5

    if-eqz v1, :cond_8

    :cond_5
    iget-object v1, p1, Lcom/kuaishou/weapon/p0/s;->r:Landroid/content/pm/PackageInfo;

    if-eqz v1, :cond_6

    iget-object v3, v1, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_6

    iget-object v3, v1, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_6

    goto :goto_2

    :cond_6
    sget-object v1, Lcom/kuaishou/weapon/p0/r;->d:Landroid/app/Application;

    invoke-virtual {v1}, Landroid/app/Application;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    iget-object v3, p1, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-virtual {v1, v3, v2}, Landroid/content/pm/PackageManager;->getPackageArchiveInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v1

    :goto_2
    iget-object v3, v1, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_9

    iget-object v3, v1, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    const-string v4, "com.kuaishou.weapon"

    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_9

    iget v3, p1, Lcom/kuaishou/weapon/p0/s;->p:I

    if-eq v3, v2, :cond_7

    iget v3, p1, Lcom/kuaishou/weapon/p0/s;->b:I

    if-eq v3, v2, :cond_7

    iget-object v3, p1, Lcom/kuaishou/weapon/p0/s;->j:Ljava/lang/String;

    iget-object v4, p1, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-direct {p0, v3, v4}, Lcom/kuaishou/weapon/p0/r;->a(Ljava/lang/String;Ljava/lang/String;)Landroid/util/Pair;

    move-result-object v3

    iget-object v3, v3, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-nez v3, :cond_7

    monitor-exit p0

    return v0

    :cond_7
    :try_start_5
    iget-object v3, v1, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    iput-object v3, p1, Lcom/kuaishou/weapon/p0/s;->c:Ljava/lang/String;

    iget-object v3, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v3, v3, Landroid/content/pm/ApplicationInfo;->className:Ljava/lang/String;

    iput-object v3, p1, Lcom/kuaishou/weapon/p0/s;->o:Ljava/lang/String;

    iget-object v3, v1, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    iput-object v3, p1, Lcom/kuaishou/weapon/p0/s;->d:Ljava/lang/String;

    iget-object v3, v1, Landroid/content/pm/PackageInfo;->activities:[Landroid/content/pm/ActivityInfo;

    iput-object v3, p1, Lcom/kuaishou/weapon/p0/s;->l:[Landroid/content/pm/ActivityInfo;

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget v1, v1, Landroid/content/pm/ApplicationInfo;->theme:I

    iput v1, p1, Lcom/kuaishou/weapon/p0/s;->q:I

    sget-object v1, Lcom/kuaishou/weapon/p0/r;->d:Landroid/app/Application;

    invoke-virtual {v1}, Landroid/app/Application;->getFilesDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getCanonicalPath()Ljava/lang/String;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/."

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Lcom/kuaishou/weapon/p0/s;->a:I

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p1, Lcom/kuaishou/weapon/p0/s;->m:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p1, Lcom/kuaishou/weapon/p0/s;->m:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/dex"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p1, Lcom/kuaishou/weapon/p0/s;->m:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "/lib/"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/kuaishou/weapon/p0/r;->e:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p1, Lcom/kuaishou/weapon/p0/s;->m:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "/lib"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/kuaishou/weapon/p0/dn;->c(Ljava/lang/String;)V

    sget-object v4, Lcom/kuaishou/weapon/p0/r;->f:Ljava/util/Random;

    invoke-virtual {v4}, Ljava/util/Random;->nextInt()I

    move-result v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/"

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1}, Lcom/kuaishou/weapon/p0/r;->e(Ljava/lang/String;)Z

    sget-object v4, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-static {v1, v4}, Lcom/kuaishou/weapon/p0/dn;->a(Ljava/lang/String;Ljava/lang/Boolean;)V

    invoke-static {v3}, Lcom/kuaishou/weapon/p0/r;->e(Ljava/lang/String;)Z

    invoke-direct {p0, p1, v3, v1, v2}, Lcom/kuaishou/weapon/p0/r;->a(Lcom/kuaishou/weapon/p0/s;Ljava/lang/String;Ljava/lang/String;Z)V

    sget-object v1, Lcom/kuaishou/weapon/p0/r;->h:Ljava/util/Map;

    iget-object v3, p1, Lcom/kuaishou/weapon/p0/s;->c:Ljava/lang/String;

    invoke-interface {v1, v3, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v1, Lcom/kuaishou/weapon/p0/r;->g:Ljava/util/Map;

    iget-object v3, p1, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-interface {v1, v3, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v1, Lcom/kuaishou/weapon/p0/r;->b:Ljava/util/List;

    iget v3, p1, Lcom/kuaishou/weapon/p0/s;->a:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-interface {v1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :cond_8
    monitor-exit p0

    return v2

    :cond_9
    :try_start_6
    new-instance v1, Ljava/lang/Exception;

    const-string v2, "weapon package name check failed"

    invoke-direct {v1, v2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw v1
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    :catchall_1
    :try_start_7
    iget-object p1, p1, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/kuaishou/weapon/p0/r;->a(Ljava/lang/String;)Z
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    :catchall_2
    monitor-exit p0

    return v0

    :catchall_3
    move-exception p1

    monitor-exit p0

    throw p1

    :cond_a
    :goto_3
    monitor-exit p0

    return v0
.end method

.method public static e(Ljava/lang/String;)Z
    .locals 1

    :try_start_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p0

    if-eqz p0, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result p0

    if-nez p0, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p0

    if-nez p0, :cond_1

    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    const/4 p0, 0x1

    return p0

    :catchall_0
    const/4 p0, 0x0

    return p0
.end method


# virtual methods
.method public a(Lcom/kuaishou/weapon/p0/s;Z)Z
    .locals 0

    iput-boolean p2, p0, Lcom/kuaishou/weapon/p0/r;->a:Z

    iget-object p2, p1, Lcom/kuaishou/weapon/p0/s;->d:Ljava/lang/String;

    iput-object p2, p0, Lcom/kuaishou/weapon/p0/r;->e:Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/kuaishou/weapon/p0/r;->a(Lcom/kuaishou/weapon/p0/s;)Z

    move-result p1

    return p1
.end method

.method public a(Ljava/lang/String;)Z
    .locals 2

    sget-object v0, Lcom/kuaishou/weapon/p0/r;->g:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kuaishou/weapon/p0/s;

    if-eqz v0, :cond_1

    sget-object v1, Lcom/kuaishou/weapon/p0/r;->g:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    sget-object p1, Lcom/kuaishou/weapon/p0/r;->h:Ljava/util/Map;

    iget-object v1, v0, Lcom/kuaishou/weapon/p0/s;->c:Ljava/lang/String;

    invoke-interface {p1, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    iget-object p1, v0, Lcom/kuaishou/weapon/p0/s;->m:Ljava/lang/String;

    invoke-static {p1}, Lcom/kuaishou/weapon/p0/dn;->c(Ljava/lang/String;)V

    sget-object p1, Lcom/kuaishou/weapon/p0/r;->d:Landroid/app/Application;

    if-eqz p1, :cond_0

    iget-object v0, v0, Lcom/kuaishou/weapon/p0/s;->c:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/app/Application;->getFileStreamPath(Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kuaishou/weapon/p0/dn;->c(Ljava/lang/String;)V

    :cond_0
    const/4 p1, 0x1

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method public b()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/kuaishou/weapon/p0/s;",
            ">;"
        }
    .end annotation

    sget-object v0, Lcom/kuaishou/weapon/p0/r;->h:Ljava/util/Map;

    return-object v0
.end method

.method public b(Ljava/lang/String;)Z
    .locals 3

    sget-object v0, Lcom/kuaishou/weapon/p0/r;->h:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kuaishou/weapon/p0/s;

    if-eqz v0, :cond_1

    sget-object v1, Lcom/kuaishou/weapon/p0/r;->g:Ljava/util/Map;

    iget-object v2, v0, Lcom/kuaishou/weapon/p0/s;->e:Ljava/lang/String;

    invoke-interface {v1, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v1, Lcom/kuaishou/weapon/p0/r;->h:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    iget-object p1, v0, Lcom/kuaishou/weapon/p0/s;->m:Ljava/lang/String;

    invoke-static {p1}, Lcom/kuaishou/weapon/p0/dn;->c(Ljava/lang/String;)V

    sget-object p1, Lcom/kuaishou/weapon/p0/r;->d:Landroid/app/Application;

    if-eqz p1, :cond_0

    iget-object v0, v0, Lcom/kuaishou/weapon/p0/s;->c:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/app/Application;->getFileStreamPath(Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kuaishou/weapon/p0/dn;->c(Ljava/lang/String;)V

    :cond_0
    const/4 p1, 0x1

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method public c(Ljava/lang/String;)Lcom/kuaishou/weapon/p0/s;
    .locals 1

    :try_start_0
    sget-object v0, Lcom/kuaishou/weapon/p0/r;->g:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kuaishou/weapon/p0/s;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public d(Ljava/lang/String;)Lcom/kuaishou/weapon/p0/s;
    .locals 1

    :try_start_0
    sget-object v0, Lcom/kuaishou/weapon/p0/r;->h:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kuaishou/weapon/p0/s;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    const/4 p1, 0x0

    return-object p1
.end method
