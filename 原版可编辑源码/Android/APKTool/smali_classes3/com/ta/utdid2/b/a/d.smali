.class public Lcom/ta/utdid2/b/a/d;
.super Ljava/lang/Object;
.source "SourceFile"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ta/utdid2/b/a/d$a;
    }
.end annotation


# static fields
.field private static final b:Ljava/lang/Object;


# instance fields
.field private a:Ljava/io/File;

.field private final a:Ljava/lang/Object;

.field private a:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/io/File;",
            "Lcom/ta/utdid2/b/a/d$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 22
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/ta/utdid2/b/a/d;->b:Ljava/lang/Object;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/ta/utdid2/b/a/d;->a:Ljava/lang/Object;

    .line 23
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/ta/utdid2/b/a/d;->a:Ljava/util/HashMap;

    if-eqz p1, :cond_0

    .line 26
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_0

    .line 27
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/ta/utdid2/b/a/d;->a:Ljava/io/File;

    return-void

    .line 29
    :cond_0
    new-instance p1, Ljava/lang/RuntimeException;

    const-string v0, "Directory can not be empty"

    invoke-direct {p1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private a()Ljava/io/File;
    .locals 2

    .line 42
    iget-object v0, p0, Lcom/ta/utdid2/b/a/d;->a:Ljava/lang/Object;

    monitor-enter v0

    .line 43
    :try_start_0
    iget-object v1, p0, Lcom/ta/utdid2/b/a/d;->a:Ljava/io/File;

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 44
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method private static a(Ljava/io/File;)Ljava/io/File;
    .locals 2

    .line 118
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ".bak"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    return-object v0
.end method

.method private a(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;
    .locals 2

    .line 34
    sget-char v0, Ljava/io/File;->separatorChar:C

    invoke-virtual {p2, v0}, Ljava/lang/String;->indexOf(I)I

    move-result v0

    if-gez v0, :cond_0

    .line 35
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1, p2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    return-object v0

    .line 37
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "File "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " contains a path separator"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method static synthetic a()Ljava/lang/Object;
    .locals 1

    .line 17
    sget-object v0, Lcom/ta/utdid2/b/a/d;->b:Ljava/lang/Object;

    return-object v0
.end method

.method static synthetic b(Ljava/io/File;)Ljava/io/File;
    .locals 0

    .line 17
    invoke-static {p0}, Lcom/ta/utdid2/b/a/d;->a(Ljava/io/File;)Ljava/io/File;

    move-result-object p0

    return-object p0
.end method

.method private b(Ljava/lang/String;)Ljava/io/File;
    .locals 2

    .line 48
    invoke-direct {p0}, Lcom/ta/utdid2/b/a/d;->a()Ljava/io/File;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".xml"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, v0, p1}, Lcom/ta/utdid2/b/a/d;->a(Ljava/io/File;Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public a(Ljava/lang/String;I)Lcom/ta/utdid2/b/a/b;
    .locals 4

    .line 53
    invoke-direct {p0, p1}, Lcom/ta/utdid2/b/a/d;->b(Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    .line 54
    sget-object v0, Lcom/ta/utdid2/b/a/d;->b:Ljava/lang/Object;

    monitor-enter v0

    .line 55
    :try_start_0
    iget-object v1, p0, Lcom/ta/utdid2/b/a/d;->a:Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ta/utdid2/b/a/d$a;

    if-eqz v1, :cond_0

    .line 56
    invoke-virtual {v1}, Lcom/ta/utdid2/b/a/d$a;->c()Z

    move-result v2

    if-nez v2, :cond_0

    .line 57
    monitor-exit v0

    return-object v1

    .line 59
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_9

    .line 62
    invoke-static {p1}, Lcom/ta/utdid2/b/a/d;->a(Ljava/io/File;)Ljava/io/File;

    move-result-object v0

    .line 63
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 64
    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    .line 65
    invoke-virtual {v0, p1}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    .line 69
    :cond_1
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    const/4 v2, 0x0

    if-eqz v0, :cond_5

    invoke-virtual {p1}, Ljava/io/File;->canRead()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 71
    :try_start_1
    new-instance v0, Ljava/io/FileInputStream;

    invoke-direct {v0, p1}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_1
    .catch Lorg/xmlpull/v1/XmlPullParserException; {:try_start_1 .. :try_end_1} :catch_2
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 72
    :try_start_2
    invoke-static {v0}, Lcom/ta/utdid2/b/a/e;->a(Ljava/io/InputStream;)Ljava/util/HashMap;

    move-result-object v2

    .line 73
    invoke-virtual {v0}, Ljava/io/FileInputStream;->close()V
    :try_end_2
    .catch Lorg/xmlpull/v1/XmlPullParserException; {:try_start_2 .. :try_end_2} :catch_3
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 95
    :goto_0
    :try_start_3
    invoke-virtual {v0}, Ljava/io/FileInputStream;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_7

    goto :goto_7

    :catchall_0
    move-exception p1

    move-object v2, v0

    goto :goto_4

    :catch_0
    nop

    goto :goto_1

    :catchall_1
    move-exception p1

    goto :goto_4

    :catch_1
    move-object v0, v2

    :goto_1
    if-eqz v0, :cond_5

    goto :goto_0

    :catch_2
    move-object v0, v2

    .line 76
    :catch_3
    :try_start_4
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, p1}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_5
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    .line 77
    :try_start_5
    invoke-virtual {v3}, Ljava/io/FileInputStream;->available()I

    move-result v0

    new-array v0, v0, [B

    .line 78
    invoke-virtual {v3, v0}, Ljava/io/FileInputStream;->read([B)I
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    .line 84
    :goto_2
    :try_start_6
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    goto :goto_6

    :catchall_2
    nop

    goto :goto_6

    :catchall_3
    move-exception p1

    move-object v2, v3

    goto :goto_3

    :catch_4
    nop

    goto :goto_5

    :catchall_4
    move-exception p1

    move-object v2, v0

    :goto_3
    if-eqz v2, :cond_2

    :try_start_7
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_5

    .line 87
    :catchall_5
    :cond_2
    :try_start_8
    throw p1
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_1

    :goto_4
    if-eqz v2, :cond_3

    .line 95
    :try_start_9
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_6

    .line 98
    :catchall_6
    :cond_3
    throw p1

    :catch_5
    move-object v3, v0

    :goto_5
    if-eqz v3, :cond_4

    goto :goto_2

    :cond_4
    :goto_6
    if-eqz v3, :cond_5

    .line 95
    :try_start_a
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_7

    .line 103
    :catchall_7
    :cond_5
    :goto_7
    sget-object v3, Lcom/ta/utdid2/b/a/d;->b:Ljava/lang/Object;

    monitor-enter v3

    if-eqz v1, :cond_6

    .line 105
    :try_start_b
    invoke-virtual {v1, v2}, Lcom/ta/utdid2/b/a/d$a;->a(Ljava/util/Map;)V

    goto :goto_8

    .line 107
    :cond_6
    iget-object v0, p0, Lcom/ta/utdid2/b/a/d;->a:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    move-object v1, v0

    check-cast v1, Lcom/ta/utdid2/b/a/d$a;

    if-nez v1, :cond_7

    .line 109
    new-instance v1, Lcom/ta/utdid2/b/a/d$a;

    invoke-direct {v1, p1, p2, v2}, Lcom/ta/utdid2/b/a/d$a;-><init>(Ljava/io/File;ILjava/util/Map;)V

    .line 110
    iget-object p2, p0, Lcom/ta/utdid2/b/a/d;->a:Ljava/util/HashMap;

    invoke-virtual {p2, p1, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 113
    :cond_7
    :goto_8
    monitor-exit v3

    return-object v1

    :catchall_8
    move-exception p1

    .line 114
    monitor-exit v3
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_8

    throw p1

    :catchall_9
    move-exception p1

    .line 59
    :try_start_c
    monitor-exit v0
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_9

    goto :goto_a

    :goto_9
    throw p1

    :goto_a
    goto :goto_9
.end method
