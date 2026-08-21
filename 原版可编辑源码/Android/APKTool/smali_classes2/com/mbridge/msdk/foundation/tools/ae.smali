.class public final Lcom/mbridge/msdk/foundation/tools/ae;
.super Lcom/mbridge/msdk/foundation/tools/h;
.source "SameTool.java"


# static fields
.field private static a:[C

.field private static b:[C

.field private static c:I

.field private static d:I

.field private static e:I

.field private static f:I

.field private static g:I

.field private static h:I

.field private static i:I

.field private static j:I

.field private static k:I

.field private static l:I

.field private static m:Ljava/lang/String;

.field private static n:Ljava/util/regex/Pattern;

.field private static o:I

.field private static p:Z

.field private static q:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static r:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile s:Ljava/lang/Boolean;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const/16 v0, 0xf

    new-array v0, v0, [C

    .line 115
    fill-array-data v0, :array_0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->a:[C

    const/4 v0, 0x2

    new-array v1, v0, [C

    .line 116
    fill-array-data v1, :array_1

    sput-object v1, Lcom/mbridge/msdk/foundation/tools/ae;->b:[C

    const/4 v1, 0x0

    .line 117
    sput v1, Lcom/mbridge/msdk/foundation/tools/ae;->c:I

    const/4 v2, 0x1

    sput v2, Lcom/mbridge/msdk/foundation/tools/ae;->d:I

    sput v0, Lcom/mbridge/msdk/foundation/tools/ae;->e:I

    const/4 v0, 0x3

    sput v0, Lcom/mbridge/msdk/foundation/tools/ae;->f:I

    .line 118
    sput v1, Lcom/mbridge/msdk/foundation/tools/ae;->g:I

    const/4 v0, 0x7

    sput v0, Lcom/mbridge/msdk/foundation/tools/ae;->h:I

    const/16 v0, 0xe

    sput v0, Lcom/mbridge/msdk/foundation/tools/ae;->i:I

    const/16 v0, 0x13

    sput v0, Lcom/mbridge/msdk/foundation/tools/ae;->j:I

    const/16 v0, 0x10

    sput v0, Lcom/mbridge/msdk/foundation/tools/ae;->k:I

    const/16 v0, 0x1a

    sput v0, Lcom/mbridge/msdk/foundation/tools/ae;->l:I

    const-string v0, "[\u4e00-\u9fa5]"

    .line 583
    sput-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->m:Ljava/lang/String;

    .line 584
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->n:Ljava/util/regex/Pattern;

    .line 600
    sput v2, Lcom/mbridge/msdk/foundation/tools/ae;->o:I

    .line 720
    sput-boolean v2, Lcom/mbridge/msdk/foundation/tools/ae;->p:Z

    const/4 v0, 0x0

    .line 1537
    sput-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->s:Ljava/lang/Boolean;

    return-void

    nop

    :array_0
    .array-data 2
        0x41s
        0x70s
        0x70s
        0x6cs
        0x69s
        0x63s
        0x61s
        0x74s
        0x69s
        0x6fs
        0x6es
        0x49s
        0x6es
        0x66s
        0x6fs
    .end array-data

    nop

    :array_1
    .array-data 2
        0x2es
        0x58s
    .end array-data
.end method

.method public static a(Ljava/lang/Double;)D
    .locals 3

    .line 900
    :try_start_0
    sget-object v0, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-static {v0}, Ljava/text/DecimalFormatSymbols;->getInstance(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;

    move-result-object v0

    .line 901
    new-instance v1, Ljava/text/DecimalFormat;

    const-string v2, "0.00"

    invoke-direct {v1, v2, v0}, Ljava/text/DecimalFormat;-><init>(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V

    .line 902
    invoke-virtual {v1, p0}, Ljava/text/DecimalFormat;->format(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    .line 903
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 904
    invoke-static {p0}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-wide v0

    :catch_0
    move-exception p0

    .line 907
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public static a()I
    .locals 2

    .line 603
    sget v0, Lcom/mbridge/msdk/foundation/tools/ae;->o:I

    add-int/lit8 v1, v0, 0x1

    sput v1, Lcom/mbridge/msdk/foundation/tools/ae;->o:I

    return v0
.end method

.method public static a(Landroid/content/Context;F)I
    .locals 2

    const/high16 v0, 0x40200000    # 2.5f

    if-eqz p0, :cond_1

    .line 222
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x0

    cmpl-float v1, p0, v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    move v0, p0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 228
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    div-float/2addr p1, v0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0
.end method

.method public static a(Ljava/lang/Object;)I
    .locals 3

    const/4 v0, 0x0

    if-eqz p0, :cond_0

    .line 889
    :try_start_0
    instance-of v1, p0, Ljava/lang/String;

    if-eqz v1, :cond_0

    .line 890
    check-cast p0, Ljava/lang/String;

    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move v0, p0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 893
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SameTools"

    invoke-static {v2, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return v0
.end method

.method public static a(Ljava/io/File;)J
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    const-wide/16 v0, 0x0

    const/4 v2, 0x0

    .line 334
    :try_start_0
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 335
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, p0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 336
    :try_start_1
    invoke-virtual {v3}, Ljava/io/FileInputStream;->available()I

    move-result p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    int-to-long v0, p0

    move-object v2, v3

    goto :goto_0

    :catchall_0
    move-exception p0

    move-object v2, v3

    goto :goto_2

    :catch_0
    move-object v2, v3

    goto :goto_3

    .line 338
    :cond_0
    :try_start_2
    invoke-virtual {p0}, Ljava/io/File;->createNewFile()Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :goto_0
    if-eqz v2, :cond_2

    .line 345
    :goto_1
    :try_start_3
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_4

    :catchall_1
    move-exception p0

    :goto_2
    if-eqz v2, :cond_1

    :try_start_4
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    .line 350
    :catch_1
    :cond_1
    throw p0

    :catch_2
    :goto_3
    if-eqz v2, :cond_2

    goto :goto_1

    :catch_3
    :cond_2
    :goto_4
    return-wide v0
.end method

.method public static declared-synchronized a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-class v0, Lcom/mbridge/msdk/foundation/tools/ae;

    monitor-enter v0

    .line 1418
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1420
    :try_start_1
    invoke-static {p2, p0, p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1425
    :catch_0
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static declared-synchronized a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-class v0, Lcom/mbridge/msdk/foundation/tools/ae;

    monitor-enter v0

    .line 1393
    :try_start_0
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    .line 1394
    invoke-virtual {p0}, Landroid/net/Uri;->getQueryParameterNames()Ljava/util/Set;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 1395
    invoke-interface {p0}, Ljava/util/Set;->size()I

    move-result p0

    if-lez p0, :cond_0

    .line 1396
    new-instance p0, Ljava/lang/StringBuilder;

    const-string v1, "&rtins_type="

    invoke-direct {p0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    goto :goto_0

    .line 1398
    :cond_0
    new-instance p0, Ljava/lang/StringBuilder;

    const-string v1, "?rtins_type="

    invoke-direct {p0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    goto :goto_3

    .line 1401
    :catch_0
    :try_start_1
    new-instance p0, Ljava/lang/StringBuilder;

    const-string v1, "&rtins_type="

    invoke-direct {p0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :goto_0
    const/4 v1, 0x0

    .line 1405
    :try_start_2
    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Ljava/lang/String;Landroid/content/Context;)Ljava/lang/Object;

    move-result-object p1

    const/4 p2, 0x1

    if-eqz p1, :cond_1

    move p1, p2

    goto :goto_1

    :cond_1
    move p1, v1

    :goto_1
    if-eqz p1, :cond_2

    .line 1407
    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_2
    const/4 p1, 0x2

    .line 1409
    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    .line 1412
    :catch_1
    :try_start_3
    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 1414
    :goto_2
    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    monitor-exit v0

    return-object p0

    :goto_3
    monitor-exit v0

    throw p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 1908
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 1911
    :cond_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 1912
    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1913
    invoke-static {p0, v0}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    :goto_0
    return-object p0

    :catch_0
    move-exception p1

    .line 1915
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "SameTools"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object p0
.end method

.method private static a(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 1928
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    if-nez p1, :cond_0

    goto/16 :goto_1

    .line 1931
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, p0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 1933
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    if-eqz v1, :cond_1

    .line 1934
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/CharSequence;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/CharSequence;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    goto :goto_0

    .line 1938
    :cond_2
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 1939
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/CharSequence;

    invoke-virtual {p0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v4, "0"

    if-eqz v3, :cond_4

    .line 1941
    :try_start_1
    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    const-string v2, "[^&]*)"

    const-string v3, "("

    if-eqz v0, :cond_3

    .line 1942
    :try_start_2
    new-instance v0, Ljava/lang/StringBuilder;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, ""

    invoke-virtual {p0, v1, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    goto :goto_0

    .line 1944
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v2, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    goto/16 :goto_0

    .line 1948
    :cond_4
    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1949
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto/16 :goto_0

    .line 1953
    :cond_5
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :cond_6
    :goto_1
    return-object p0

    :catch_0
    move-exception p1

    .line 1955
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "SameTools"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object p0
.end method

.method public static a(Lorg/json/JSONArray;)Ljava/lang/String;
    .locals 4

    if-nez p0, :cond_0

    const-string p0, ""

    return-object p0

    .line 818
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    .line 819
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_1

    .line 821
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 823
    :cond_1
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->V()I

    move-result v0

    .line 825
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-le v1, v0, :cond_3

    .line 826
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_2

    .line 829
    :try_start_0
    invoke-virtual {p0, v2}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v1, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v3

    .line 831
    invoke-virtual {v3}, Lorg/json/JSONException;->printStackTrace()V

    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 834
    :cond_2
    invoke-virtual {v1}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_2

    .line 836
    :cond_3
    invoke-virtual {p0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object p0

    :goto_2
    return-object p0
.end method

.method private static a([Ljava/lang/StackTraceElement;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/lang/StackTraceElement;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1528
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p0, :cond_0

    .line 1529
    array-length v1, p0

    if-lez v1, :cond_0

    .line 1530
    array-length v1, p0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, p0, v2

    .line 1531
    invoke-virtual {v3}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Lorg/json/JSONArray;
    .locals 7

    const-string p1, "SameTools"

    .line 1211
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 1214
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v1

    if-nez v1, :cond_0

    .line 1216
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v1

    :cond_0
    if-eqz v1, :cond_1

    .line 1220
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->ai()I

    move-result v2

    const/4 v3, 0x1

    if-ne v2, v3, :cond_1

    .line 1221
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "fqci cfc:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->ai()I

    move-result v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1222
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object p0

    .line 1223
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/l;->a()[J

    move-result-object p0

    if-eqz p0, :cond_1

    .line 1226
    array-length v1, p0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-wide v3, p0, v2

    .line 1227
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "cfc campaignIds:"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {p1, v5}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1228
    invoke-virtual {v0, v3, v4}, Lorg/json/JSONArray;->put(J)Lorg/json/JSONArray;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :catch_0
    move-exception p0

    .line 1234
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-object v0
.end method

.method public static a(Landroid/view/View;)V
    .locals 2

    if-nez p0, :cond_0

    return-void

    .line 996
    :cond_0
    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xb

    if-lt v0, v1, :cond_1

    const/16 v0, 0x1006

    .line 998
    invoke-virtual {p0, v0}, Landroid/view/View;->setSystemUiVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 1001
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public static a(Landroid/widget/ImageView;)V
    .locals 1

    if-nez p0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 1074
    :try_start_0
    invoke-virtual {p0, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    const/4 v0, 0x0

    .line 1075
    invoke-virtual {p0, v0}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 1076
    invoke-virtual {p0, v0}, Landroid/widget/ImageView;->setImageURI(Landroid/net/Uri;)V

    .line 1077
    invoke-virtual {p0, v0}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 1079
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_1

    .line 1080
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 4

    .line 1259
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    if-eqz p1, :cond_0

    .line 1260
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1261
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/k;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/k;

    move-result-object v0

    .line 1262
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/g;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/entity/g;-><init>()V

    .line 1263
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/entity/g;->a(J)V

    .line 1264
    invoke-virtual {v1, p0}, Lcom/mbridge/msdk/foundation/entity/g;->b(Ljava/lang/String;)V

    .line 1265
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/mbridge/msdk/foundation/entity/g;->a(Ljava/lang/String;)V

    .line 1266
    invoke-virtual {v1, p2}, Lcom/mbridge/msdk/foundation/entity/g;->a(I)V

    .line 1267
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/k;->a(Lcom/mbridge/msdk/foundation/entity/g;)V

    :cond_0
    return-void
.end method

.method public static declared-synchronized a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    const-class v0, Lcom/mbridge/msdk/foundation/tools/ae;

    monitor-enter v0

    .line 1512
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/ae;->r:Ljava/util/Map;

    if-nez v1, :cond_0

    .line 1513
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/foundation/tools/ae;->r:Ljava/util/Map;

    .line 1515
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 1516
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/ae;->r:Ljava/util/Map;

    invoke-interface {v1, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1517
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 0

    if-eqz p0, :cond_0

    .line 180
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDeepLinkURL()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    xor-int/lit8 p0, p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static a(Ljava/lang/String;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/String;",
            ">(TT;)Z"
        }
    .end annotation

    if-eqz p0, :cond_1

    .line 92
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result p0

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p0, 0x1

    :goto_1
    return p0
.end method

.method public static a(Ljava/lang/String;Landroid/content/Context;)Z
    .locals 2

    const/4 v0, 0x0

    .line 846
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    .line 847
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p0, p1}, Landroid/content/pm/PackageManager;->checkPermission(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_0

    const/4 v0, 0x1

    :catch_0
    :cond_0
    return v0
.end method

.method public static a(Lorg/json/JSONObject;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 1816
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONObject;->length()I

    move-result v1

    if-nez v1, :cond_1

    return v0

    :cond_1
    const/4 v1, -0x1

    const-string v2, "v"

    .line 1820
    invoke-virtual {p0, v2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    if-eq p0, v1, :cond_2

    return v0

    :cond_2
    const/4 p0, 0x1

    return p0
.end method

.method public static b(Ljava/lang/String;)D
    .locals 3

    const-wide/16 v0, 0x0

    .line 877
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 878
    invoke-static {p0}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 881
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-wide v0
.end method

.method public static b(Landroid/content/Context;F)I
    .locals 1

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 237
    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    if-nez p0, :cond_1

    return v0

    .line 241
    :cond_1
    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F

    mul-float/2addr p1, p0

    const/high16 p0, 0x3f000000    # 0.5f

    add-float/2addr p1, p0

    float-to-int p0, p1

    return p0
.end method

.method public static b(Ljava/lang/String;Ljava/lang/String;)I
    .locals 2

    .line 1835
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 1839
    :cond_0
    :try_start_0
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    if-eqz p0, :cond_2

    .line 1841
    invoke-virtual {p0, p1}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 1842
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    return v1

    .line 1845
    :cond_1
    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 1848
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "SameTools"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return v1
.end method

.method private static b(Ljava/lang/String;Landroid/content/Context;)Ljava/lang/Object;
    .locals 8

    const/4 v0, 0x0

    .line 1349
    :try_start_0
    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->c:I

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->d(I)[C

    move-result-object v1

    invoke-static {v1}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 1350
    sget v2, Lcom/mbridge/msdk/foundation/tools/ae;->e:I

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->d(I)[C

    move-result-object v2

    invoke-static {v2}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Ljava/lang/String;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    sget-object v5, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v7, 0x1

    aput-object v5, v4, v7

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    .line 1351
    sget v2, Lcom/mbridge/msdk/foundation/tools/ae;->d:I

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->d(I)[C

    move-result-object v2

    invoke-static {v2}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    .line 1352
    sget v4, Lcom/mbridge/msdk/foundation/tools/ae;->f:I

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/ae;->d(I)[C

    move-result-object v4

    invoke-static {v4}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v4

    new-array v5, v6, [Ljava/lang/Class;

    invoke-virtual {v2, v4, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v4, v6, [Ljava/lang/Object;

    .line 1353
    invoke-virtual {v2, p1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    new-array v2, v3, [Ljava/lang/Object;

    aput-object p0, v2, v6

    const/16 p0, 0x2000

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v2, v7

    invoke-virtual {v1, p1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catch_0
    :catchall_0
    return-object v0
.end method

.method public static b(I)Ljava/lang/String;
    .locals 6

    const-string v0, ""

    .line 786
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v1

    if-nez v1, :cond_0

    .line 788
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v1

    .line 790
    :cond_0
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    if-eqz v1, :cond_3

    .line 792
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->ai()I

    move-result v1

    const/4 v3, 0x1

    if-ne v1, v3, :cond_3

    .line 793
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object v1

    .line 794
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/db/l;->a()[J

    move-result-object v1

    if-eqz v1, :cond_3

    .line 797
    array-length v3, v1

    if-le v3, p0, :cond_2

    if-nez p0, :cond_1

    goto :goto_0

    :cond_1
    sub-int p0, v3, p0

    goto :goto_1

    :cond_2
    :goto_0
    const/4 p0, 0x0

    :goto_1
    if-ge p0, v3, :cond_3

    .line 800
    aget-wide v4, v1, p0

    invoke-virtual {v2, v4, v5}, Lorg/json/JSONArray;->put(J)Lorg/json/JSONArray;

    add-int/lit8 p0, p0, 0x1

    goto :goto_1

    .line 804
    :cond_3
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result p0

    if-lez p0, :cond_4

    .line 805
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lorg/json/JSONArray;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p0

    .line 808
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_2
    return-object v0
.end method

.method public static b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    .line 1245
    :try_start_0
    invoke-static {p0, p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    .line 1247
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result p1

    if-lez p1, :cond_0

    .line 1248
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lorg/json/JSONArray;)Ljava/lang/String;

    move-result-object v0

    :cond_0
    const-string p0, "SameTools"

    .line 1250
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "get excludes:"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 1252
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method public static b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    .line 1969
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 1974
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v1, "device"

    .line 1975
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    if-nez v1, :cond_1

    return-object p0

    .line 1979
    :cond_1
    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, "0"

    if-eqz v2, :cond_3

    .line 1980
    :try_start_1
    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 1981
    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    goto :goto_0

    .line 1983
    :cond_2
    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 1986
    :cond_3
    invoke-virtual {p2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    return-object p0

    .line 1989
    :cond_4
    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    .line 1997
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :catch_0
    move-exception p1

    .line 1993
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "SameTools"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_1
    return-object p0
.end method

.method public static b(Lorg/json/JSONArray;)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lorg/json/JSONArray;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    .line 1088
    :try_start_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-lez v1, :cond_2

    .line 1089
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x0

    .line 1090
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge v2, v3, :cond_1

    .line 1091
    invoke-virtual {p0, v2}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v3

    .line 1092
    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 1093
    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    move-object v0, v1

    goto :goto_1

    :catchall_0
    move-exception p0

    .line 1099
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SameTools"

    invoke-static {v2, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    :goto_1
    return-object v0
.end method

.method public static b()Z
    .locals 2

    .line 1116
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/Looper;->getThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static b(Landroid/content/Context;)Z
    .locals 2

    :try_start_0
    const-string v0, "connectivity"

    .line 122
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    .line 123
    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0

    if-eqz p0, :cond_0

    const-string v0, "wifi"

    .line 125
    invoke-virtual {p0}, Landroid/net/NetworkInfo;->getTypeName()Ljava/lang/String;

    move-result-object p0

    sget-object v1, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {p0, v1}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception p0

    .line 130
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 860
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRetarget_offer()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x1

    if-ne p0, v1, :cond_0

    return v1

    :cond_0
    return v0

    :catch_0
    move-exception p0

    .line 868
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return v0
.end method

.method public static c(I)I
    .locals 2

    const/16 v0, 0x64

    if-le p0, v0, :cond_0

    const/16 v0, 0xc7

    if-lt p0, v0, :cond_1

    :cond_0
    const/4 v0, 0x2

    if-ne p0, v0, :cond_2

    :cond_1
    const/4 p0, 0x1

    return p0

    :cond_2
    const/16 v1, 0xc8

    if-le p0, v1, :cond_3

    const/16 v1, 0x12b

    if-lt p0, v1, :cond_4

    :cond_3
    const/4 v1, 0x4

    if-ne p0, v1, :cond_5

    :cond_4
    return v0

    :cond_5
    const/16 v0, 0x1f4

    if-le p0, v0, :cond_6

    const/16 v0, 0x257

    if-ge p0, v0, :cond_6

    const/4 p0, 0x5

    return p0

    :cond_6
    const/4 p0, -0x1

    return p0
.end method

.method public static c(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 1106
    :try_start_0
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "utf-8"

    .line 1107
    invoke-static {p0, v0}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 1110
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SameTools"

    invoke-static {v1, v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method public static c()Z
    .locals 3

    .line 1286
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->m()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    :try_start_0
    const-string v0, "com.tencent.mm.opensdk.openapi.WXAPIFactory"

    .line 1290
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    const-string v0, "com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram"

    .line 1291
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x1

    return v0

    :catch_0
    move-exception v0

    .line 1294
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, "SameTools"

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v1
.end method

.method public static c(Landroid/content/Context;)Z
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "connectivity"

    .line 137
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/ConnectivityManager;

    .line 138
    invoke-virtual {p0}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p0, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0

    :catch_0
    move-exception p0

    .line 141
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static declared-synchronized c(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 3

    const-class v0, Lcom/mbridge/msdk/foundation/tools/ae;

    monitor-enter v0

    const/4 v1, 0x0

    if-eqz p0, :cond_0

    .line 1275
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_0

    .line 1277
    :try_start_1
    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Ljava/lang/String;Landroid/content/Context;)Ljava/lang/Object;

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    move v1, p0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 1282
    :catch_0
    :cond_0
    :goto_0
    monitor-exit v0

    return v1
.end method

.method public static d(Landroid/content/Context;)F
    .locals 2

    const/high16 v0, 0x40200000    # 2.5f

    if-eqz p0, :cond_1

    .line 206
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    iget p0, p0, Landroid/util/DisplayMetrics;->density:F
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x0

    cmpl-float v1, p0, v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    move v0, p0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 212
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return v0
.end method

.method public static d()I
    .locals 2

    :try_start_0
    const-string v0, "com.tencent.mm.opensdk.constants.Build"

    .line 1323
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "SDK_INT"

    .line 1324
    invoke-virtual {v0, v1}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    const/4 v1, 0x0

    .line 1325
    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 1327
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SameTools"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static d(Ljava/lang/String;)Ljava/lang/Object;
    .locals 9

    const-string v0, "SameTools"

    .line 1300
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return-object v2

    :cond_0
    :try_start_0
    const-string v1, "com.tencent.mm.opensdk.openapi.WXAPIFactory"

    .line 1304
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v3, "createWXAPI"

    const/4 v4, 0x2

    new-array v5, v4, [Ljava/lang/Class;

    .line 1305
    const-class v6, Landroid/content/Context;

    const/4 v7, 0x0

    aput-object v6, v5, v7

    const-class v6, Ljava/lang/String;

    const/4 v8, 0x1

    aput-object v6, v5, v8

    invoke-virtual {v1, v3, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v3, v4, [Ljava/lang/Object;

    .line 1306
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    aput-object v4, v3, v7

    aput-object p0, v3, v8

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 1314
    invoke-virtual {p0}, Ljava/lang/reflect/InvocationTargetException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :catch_1
    move-exception p0

    .line 1312
    invoke-virtual {p0}, Ljava/lang/IllegalAccessException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :catch_2
    move-exception p0

    .line 1310
    invoke-virtual {p0}, Ljava/lang/NoSuchMethodException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :catch_3
    move-exception p0

    .line 1308
    invoke-virtual {p0}, Ljava/lang/ClassNotFoundException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-object v2
.end method

.method private static final d(I)[C
    .locals 3

    if-eqz p0, :cond_3

    const/4 v0, 0x1

    if-eq p0, v0, :cond_2

    const/4 v0, 0x2

    if-eq p0, v0, :cond_1

    const/4 v0, 0x3

    if-eq p0, v0, :cond_0

    const/4 p0, 0x0

    goto/16 :goto_0

    .line 1380
    :cond_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    .line 1381
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ad;->c:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->k:I

    sget v2, Lcom/mbridge/msdk/foundation/tools/ae;->j:I

    invoke-static {v0, v1, v2}, Ljava/util/Arrays;->copyOfRange([CII)[C

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ac;->c:[C

    invoke-static {v0}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto/16 :goto_0

    .line 1376
    :cond_1
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    .line 1377
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ad;->c:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->k:I

    sget v2, Lcom/mbridge/msdk/foundation/tools/ae;->j:I

    invoke-static {v0, v1, v2}, Ljava/util/Arrays;->copyOfRange([CII)[C

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->a:[C

    invoke-static {v0}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto/16 :goto_0

    .line 1372
    :cond_2
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    .line 1373
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ad;->c:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->h:I

    invoke-static {v0, v1}, Ljava/util/Arrays;->copyOf([CI)[C

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->b:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->g:I

    aget-char v0, v0, v1

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ad;->c:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->h:I

    sget v2, Lcom/mbridge/msdk/foundation/tools/ae;->i:I

    invoke-static {v0, v1, v2}, Ljava/util/Arrays;->copyOfRange([CII)[C

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->b:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->g:I

    aget-char v0, v0, v1

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ad;->c:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->j:I

    sget v2, Lcom/mbridge/msdk/foundation/tools/ae;->l:I

    invoke-static {v0, v1, v2}, Ljava/util/Arrays;->copyOfRange([CII)[C

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 1367
    :cond_3
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    .line 1369
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ad;->c:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->h:I

    invoke-static {v0, v1}, Ljava/util/Arrays;->copyOf([CI)[C

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->b:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->g:I

    aget-char v0, v0, v1

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ad;->c:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->h:I

    sget v2, Lcom/mbridge/msdk/foundation/tools/ae;->i:I

    invoke-static {v0, v1, v2}, Ljava/util/Arrays;->copyOfRange([CII)[C

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->b:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->g:I

    aget-char v0, v0, v1

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ad;->c:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->i:I

    sget v2, Lcom/mbridge/msdk/foundation/tools/ae;->k:I

    invoke-static {v0, v1, v2}, Ljava/util/Arrays;->copyOfRange([CII)[C

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->b:[C

    sget v1, Lcom/mbridge/msdk/foundation/tools/ae;->g:I

    aget-char v0, v0, v1

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ac;->c:[C

    invoke-static {v0}, Ljava/lang/String;->valueOf([C)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1386
    :goto_0
    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/String;->toCharArray()[C

    move-result-object p0

    return-object p0
.end method

.method public static final e()I
    .locals 2

    .line 1541
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->s:Ljava/lang/Boolean;

    if-nez v0, :cond_0

    .line 2056
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/o$a;->a()Lcom/mbridge/msdk/foundation/tools/o;

    move-result-object v0

    .line 1543
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/tools/o;->e()Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->s:Ljava/lang/Boolean;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1545
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SameTools"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1549
    :cond_0
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->s:Ljava/lang/Boolean;

    if-eqz v0, :cond_2

    .line 1550
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ae;->s:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    goto :goto_1

    :cond_1
    const/4 v0, 0x0

    goto :goto_1

    :cond_2
    const/4 v0, -0x1

    :goto_1
    return v0
.end method

.method public static e(Landroid/content/Context;)I
    .locals 3

    :try_start_0
    const-string v0, "com.android.internal.R$dimen"

    .line 357
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 358
    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v1

    const-string v2, "status_bar_height"

    .line 359
    invoke-virtual {v0, v2}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    .line 360
    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    .line 361
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 363
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static e(Ljava/lang/String;)I
    .locals 4

    const/4 v0, 0x0

    .line 1335
    :try_start_0
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/v;->f(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    const-string v1, "com.tencent.mm.opensdk.openapi.IWXAPI"

    .line 1336
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "getWXAppSupportAPI"

    new-array v3, v0, [Ljava/lang/Class;

    .line 1337
    invoke-virtual {v1, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v2, v0, [Ljava/lang/Object;

    .line 1338
    invoke-virtual {v1, p0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 1340
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v1, "SameTools"

    invoke-static {v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return v0
.end method

.method public static f(Landroid/content/Context;)F
    .locals 0

    .line 374
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    .line 375
    iget p0, p0, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float p0, p0

    return p0
.end method

.method public static final f()Ljava/lang/String;
    .locals 1

    .line 3056
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/o$a;->a()Lcom/mbridge/msdk/foundation/tools/o;

    move-result-object v0

    .line 1560
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/tools/o;->f()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static final declared-synchronized f(Ljava/lang/String;)Ljava/lang/String;
    .locals 10

    const-class v0, Lcom/mbridge/msdk/foundation/tools/ae;

    monitor-enter v0

    .line 1434
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 1435
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v1

    const/4 v2, 0x3

    const/4 v3, 0x0

    if-eqz v1, :cond_0

    .line 1442
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->aH()Z

    move-result v2

    .line 1443
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->aF()Z

    move-result v4

    .line 1444
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->aG()I

    move-result v1

    invoke-static {v3, v1}, Ljava/lang/Math;->max(II)I

    move-result v1

    move v9, v2

    move v2, v1

    move v1, v9

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    move v4, v3

    :goto_0
    if-eqz v4, :cond_b

    if-nez v2, :cond_1

    goto/16 :goto_3

    :cond_1
    if-eqz v1, :cond_2

    .line 1451
    sget-object v4, Lcom/mbridge/msdk/foundation/tools/ae;->q:Ljava/util/Map;

    if-eqz v4, :cond_2

    sget-object v4, Lcom/mbridge/msdk/foundation/tools/ae;->q:Ljava/util/Map;

    invoke-interface {v4, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 1452
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/ae;->q:Ljava/util/Map;

    invoke-interface {v1, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    .line 1455
    :cond_2
    :try_start_1
    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, ""

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 1456
    new-instance v5, Ljava/lang/Exception;

    invoke-direct {v5}, Ljava/lang/Exception;-><init>()V

    invoke-virtual {v5}, Ljava/lang/Exception;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v5

    if-eqz v5, :cond_c

    .line 1457
    array-length v6, v5

    if-lez v6, :cond_c

    .line 1458
    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/ae;->a([Ljava/lang/StackTraceElement;)Ljava/util/List;

    move-result-object v5

    .line 1459
    invoke-static {v5}, Ljava/util/Collections;->reverse(Ljava/util/List;)V

    .line 1460
    invoke-interface {v5}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v5

    .line 1462
    new-instance v6, Ljava/util/ArrayList;

    invoke-direct {v6}, Ljava/util/ArrayList;-><init>()V

    .line 1464
    :cond_3
    :goto_1
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_4

    .line 1465
    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    const-string v8, "com.android"

    .line 1466
    invoke-virtual {v7, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_3

    const-string v8, "android.os"

    invoke-virtual {v7, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_3

    const-string v8, "android.app"

    invoke-virtual {v7, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_3

    const-string v8, "java.lang.reflect.Method"

    invoke-virtual {v7, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_3

    const-string v8, "android.view"

    invoke-virtual {v7, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_3

    .line 1467
    invoke-interface {v6, v7}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_3

    .line 1468
    invoke-interface {v6, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 1473
    :cond_4
    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v5

    invoke-static {v5, v2}, Ljava/lang/Math;->min(II)I

    move-result v2

    if-lez v2, :cond_6

    :goto_2
    if-ge v3, v2, :cond_6

    .line 1477
    invoke-interface {v6, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v5, v2, -0x1

    if-ge v3, v5, :cond_5

    const-string v5, "|"

    .line 1479
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_5
    add-int/lit8 v3, v3, 0x1

    goto :goto_2

    :cond_6
    const/4 v2, 0x0

    .line 1485
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_7

    .line 1486
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "1"

    .line 1487
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_7
    if-eqz v2, :cond_a

    .line 1490
    invoke-virtual {v2}, Lorg/json/JSONObject;->length()I

    move-result v3

    if-lez v3, :cond_a

    .line 1491
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    if-eqz v1, :cond_9

    .line 1492
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_9

    .line 1493
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/ae;->q:Ljava/util/Map;

    if-nez v1, :cond_8

    .line 1494
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/foundation/tools/ae;->q:Ljava/util/Map;

    .line 1496
    :cond_8
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/ae;->q:Ljava/util/Map;

    invoke-interface {v1, p0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 1498
    :cond_9
    monitor-exit v0

    return-object v2

    :cond_a
    :try_start_2
    const-string p0, ""
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 1500
    monitor-exit v0

    return-object p0

    :cond_b
    :goto_3
    :try_start_3
    const-string p0, ""
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 1448
    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    goto :goto_4

    :catch_0
    move-exception p0

    :try_start_4
    const-string v1, "SameTools"

    .line 1504
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_c
    const-string p0, ""
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 1506
    monitor-exit v0

    return-object p0

    :goto_4
    monitor-exit v0

    throw p0
.end method

.method public static g(Landroid/content/Context;)I
    .locals 1

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 939
    :cond_0
    :try_start_0
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ae;->n(Landroid/content/Context;)Landroid/util/DisplayMetrics;

    move-result-object p0

    .line 940
    iget p0, p0, Landroid/util/DisplayMetrics;->heightPixels:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 942
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static declared-synchronized g(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    const-class v0, Lcom/mbridge/msdk/foundation/tools/ae;

    monitor-enter v0

    .line 1520
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 1521
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/ae;->r:Ljava/util/Map;

    if-eqz v1, :cond_0

    sget-object v1, Lcom/mbridge/msdk/foundation/tools/ae;->r:Ljava/util/Map;

    invoke-interface {v1, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1522
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/ae;->r:Ljava/util/Map;

    invoke-interface {v1, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    .line 1524
    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static g()Z
    .locals 3

    const/4 v0, 0x0

    .line 1856
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/q;->a()Landroid/net/ConnectivityManager;

    move-result-object v1

    if-nez v1, :cond_0

    return v0

    :cond_0
    const/16 v2, 0x11

    .line 1860
    invoke-virtual {v1, v2}, Landroid/net/ConnectivityManager;->getNetworkInfo(I)Landroid/net/NetworkInfo;

    move-result-object v1

    if-nez v1, :cond_1

    goto :goto_0

    .line 1861
    :cond_1
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->isConnected()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 1864
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SameTools"

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return v0
.end method

.method public static h(Landroid/content/Context;)I
    .locals 1

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 953
    :cond_0
    :try_start_0
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ae;->n(Landroid/content/Context;)Landroid/util/DisplayMetrics;

    move-result-object p0

    .line 954
    iget p0, p0, Landroid/util/DisplayMetrics;->widthPixels:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 956
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static h()Z
    .locals 7

    const-string v0, "~"

    const/4 v1, 0x0

    .line 1875
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    if-nez v2, :cond_0

    return v1

    .line 1878
    :cond_0
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0xe

    const/4 v4, 0x1

    if-lt v2, v3, :cond_1

    move v2, v4

    goto :goto_0

    :cond_1
    move v2, v1

    :goto_0
    if-eqz v2, :cond_3

    const-string v2, "http.proxyHost"

    .line 1882
    invoke-static {v2}, Ljava/lang/System;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "http.proxyPort"

    .line 1883
    invoke-static {v3}, Ljava/lang/System;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_2

    goto :goto_1

    :cond_2
    const-string v3, "-1"

    .line 1884
    :goto_1
    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    goto :goto_2

    .line 1886
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Landroid/net/Proxy;->getHost(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    .line 1887
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Landroid/net/Proxy;->getPort(Landroid/content/Context;)I

    move-result v3

    :goto_2
    const-string v5, "address = "

    .line 1889
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v5, "port = "

    .line 1890
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1891
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_4

    const/4 v0, -0x1

    if-eq v3, v0, :cond_4

    move v1, v4

    goto :goto_3

    :catchall_0
    move-exception v0

    .line 1893
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, "SameTools"

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_3
    return v1
.end method

.method public static h(Ljava/lang/String;)Z
    .locals 4

    .line 1564
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 1569
    :cond_0
    :try_start_0
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    const/4 v0, 0x1

    if-eqz p0, :cond_4

    const-string v2, "dyview"

    .line 1573
    invoke-virtual {p0, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1574
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    const-string v2, "view"

    .line 1576
    invoke-virtual {p0, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1578
    :cond_1
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v3, :cond_2

    const/4 v3, -0x1

    .line 1581
    :try_start_1
    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1585
    :catch_0
    :try_start_2
    rem-int/lit8 v3, v3, 0x2
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    if-nez v3, :cond_2

    move v2, v0

    goto :goto_0

    :cond_2
    move v2, v1

    :goto_0
    :try_start_3
    const-string v3, "natmp"

    .line 1590
    invoke-virtual {p0, v3}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 1591
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-nez p0, :cond_3

    move v1, v0

    goto :goto_1

    :cond_3
    move v1, v2

    goto :goto_1

    :catch_1
    move-exception p0

    goto :goto_2

    :cond_4
    :goto_1
    return v1

    :catch_2
    move-exception p0

    move v2, v1

    :goto_2
    :try_start_4
    const-string v0, "SameTools"

    .line 1596
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    return v1

    :catchall_0
    move v1, v2

    :catchall_1
    return v1
.end method

.method public static i(Landroid/content/Context;)I
    .locals 1

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 968
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    .line 969
    iget p0, p0, Landroid/util/DisplayMetrics;->widthPixels:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 971
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static i(Ljava/lang/String;)Z
    .locals 2

    .line 1605
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 1610
    :cond_0
    :try_start_0
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    if-eqz p0, :cond_1

    const-string v0, "dyview"

    .line 1614
    invoke-virtual {p0, v0}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 1615
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p0, :cond_1

    const/4 v1, 0x1

    :cond_1
    return v1

    :catch_0
    move-exception p0

    :try_start_1
    const-string v0, "SameTools"

    .line 1620
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    return v1
.end method

.method public static j(Landroid/content/Context;)I
    .locals 1

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 982
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p0

    .line 983
    iget p0, p0, Landroid/util/DisplayMetrics;->heightPixels:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 985
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static j(Ljava/lang/String;)Z
    .locals 2

    .line 1630
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 1635
    :cond_0
    :try_start_0
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    if-eqz p0, :cond_1

    const-string v0, "isplayableec"

    .line 1637
    invoke-virtual {p0, v0}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 1638
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "0"

    .line 1639
    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 1643
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "SameTools"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return v1
.end method

.method public static k(Landroid/content/Context;)I
    .locals 5

    const-string v0, "android"

    const/4 v1, 0x0

    if-eqz p0, :cond_0

    return v1

    .line 1011
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const-string v3, "config_showNavigationBar"

    const-string v4, "bool"

    invoke-virtual {v2, v3, v4, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    if-eqz v2, :cond_1

    .line 1013
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const-string v3, "navigation_bar_height"

    const-string v4, "dimen"

    invoke-virtual {v2, v3, v4, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 1014
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 1017
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return v1
.end method

.method public static k(Ljava/lang/String;)Z
    .locals 2

    .line 1651
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 1656
    :cond_0
    :try_start_0
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    if-eqz p0, :cond_1

    const-string v0, "nativecananim"

    .line 1658
    invoke-virtual {p0, v0}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 1659
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "1"

    .line 1660
    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 1664
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "SameTools"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return v1
.end method

.method public static l(Ljava/lang/String;)I
    .locals 3

    .line 1716
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, -0x1

    if-eqz v0, :cond_0

    return v1

    .line 1720
    :cond_0
    :try_start_0
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    if-eqz p0, :cond_2

    const-string v0, "dyview"

    .line 1724
    invoke-virtual {p0, v0}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1725
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string v0, "view"

    .line 1727
    invoke-virtual {p0, v0}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1729
    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-nez p0, :cond_2

    .line 1732
    :try_start_1
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_2
    return v1

    :catch_1
    move-exception p0

    .line 1744
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "SameTools"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v1
.end method

.method public static l(Landroid/content/Context;)Z
    .locals 1

    :try_start_0
    const-string v0, "power"

    .line 1125
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/os/PowerManager;

    .line 1126
    invoke-virtual {p0}, Landroid/os/PowerManager;->isScreenOn()Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    move-exception p0

    .line 1128
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method

.method public static m(Landroid/content/Context;)I
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 1172
    :cond_0
    :try_start_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1a

    if-lt v1, v2, :cond_1

    .line 1173
    invoke-static {}, Landroid/webkit/WebView;->getCurrentWebViewPackage()Landroid/content/pm/PackageInfo;

    move-result-object p0

    goto :goto_0

    .line 1175
    :cond_1
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const-string v1, "com.google.android.webview"

    const/4 v2, 0x1

    invoke-virtual {p0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    .line 1178
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v1

    if-nez v1, :cond_2

    .line 1180
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v1

    :cond_2
    if-eqz p0, :cond_3

    .line 1183
    iget-object v2, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    const-string v2, "77.0.3865.92"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_3

    const/4 p0, 0x5

    return p0

    .line 1187
    :cond_3
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->aX()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    return v0
.end method

.method public static m(Ljava/lang/String;)Ljava/lang/String;
    .locals 14

    .line 1764
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    .line 1767
    :cond_0
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/same/a/d;->c(Ljava/lang/String;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object p0

    if-eqz p0, :cond_6

    .line 1768
    invoke-virtual {p0}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v0

    if-lez v0, :cond_6

    .line 1769
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 1770
    invoke-virtual {p0}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/c;

    if-eqz v2, :cond_1

    .line 1772
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/c;->d()J

    move-result-wide v3

    .line 1773
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/c;->e()J

    move-result-wide v5

    .line 3792
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    const-wide/16 v9, 0x0

    cmp-long v9, v3, v9

    const/4 v10, 0x1

    const/4 v11, 0x0

    const-wide/16 v12, 0x3e8

    if-lez v9, :cond_2

    mul-long/2addr v3, v12

    add-long/2addr v5, v3

    cmp-long v3, v5, v7

    if-ltz v3, :cond_4

    goto :goto_1

    .line 3796
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v3

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v3

    if-nez v3, :cond_3

    .line 3798
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v3

    .line 3800
    :cond_3
    invoke-virtual {v3}, Lcom/mbridge/msdk/c/a;->W()J

    move-result-wide v3

    mul-long/2addr v3, v12

    add-long/2addr v5, v3

    cmp-long v3, v5, v7

    if-ltz v3, :cond_4

    goto :goto_1

    :cond_4
    move v10, v11

    :goto_1
    if-eqz v10, :cond_1

    .line 1774
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/c;->c()Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 1775
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_1

    .line 1776
    invoke-interface {v0, v2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    goto :goto_0

    .line 1781
    :cond_5
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p0

    if-lez p0, :cond_6

    .line 1782
    new-instance p0, Ljava/util/HashSet;

    invoke-direct {p0, v0}, Ljava/util/HashSet;-><init>(Ljava/util/Collection;)V

    .line 1783
    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 1784
    invoke-interface {v0, p0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 1785
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_6
    return-object v1
.end method

.method private static n(Landroid/content/Context;)Landroid/util/DisplayMetrics;
    .locals 4

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 916
    :cond_0
    new-instance v0, Landroid/util/DisplayMetrics;

    invoke-direct {v0}, Landroid/util/DisplayMetrics;-><init>()V

    :try_start_0
    const-string v1, "window"

    .line 918
    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/WindowManager;

    .line 919
    invoke-interface {v1}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v1

    .line 921
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x11

    if-lt v2, v3, :cond_1

    .line 922
    invoke-virtual {v1, v0}, Landroid/view/Display;->getRealMetrics(Landroid/util/DisplayMetrics;)V

    goto :goto_0

    .line 924
    :cond_1
    invoke-virtual {v1, v0}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 927
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 928
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    :goto_0
    return-object v0
.end method
