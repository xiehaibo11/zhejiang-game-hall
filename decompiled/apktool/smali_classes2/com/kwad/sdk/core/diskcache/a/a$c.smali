.class public final Lcom/kwad/sdk/core/diskcache/a/a$c;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Closeable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/diskcache/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x11
    name = "c"
.end annotation


# instance fields
.field final synthetic ank:Lcom/kwad/sdk/core/diskcache/a/a;

.field private final anq:[J

.field private final ant:J

.field private anu:[Ljava/io/File;

.field private final anv:[Ljava/io/InputStream;

.field private final key:Ljava/lang/String;


# direct methods
.method private constructor <init>(Lcom/kwad/sdk/core/diskcache/a/a;Ljava/lang/String;J[Ljava/io/File;[Ljava/io/InputStream;[J)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/diskcache/a/a$c;->ank:Lcom/kwad/sdk/core/diskcache/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p2, p0, Lcom/kwad/sdk/core/diskcache/a/a$c;->key:Ljava/lang/String;

    iput-wide p3, p0, Lcom/kwad/sdk/core/diskcache/a/a$c;->ant:J

    iput-object p5, p0, Lcom/kwad/sdk/core/diskcache/a/a$c;->anu:[Ljava/io/File;

    iput-object p6, p0, Lcom/kwad/sdk/core/diskcache/a/a$c;->anv:[Ljava/io/InputStream;

    iput-object p7, p0, Lcom/kwad/sdk/core/diskcache/a/a$c;->anq:[J

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/sdk/core/diskcache/a/a;Ljava/lang/String;J[Ljava/io/File;[Ljava/io/InputStream;[JB)V
    .locals 0

    invoke-direct/range {p0 .. p7}, Lcom/kwad/sdk/core/diskcache/a/a$c;-><init>(Lcom/kwad/sdk/core/diskcache/a/a;Ljava/lang/String;J[Ljava/io/File;[Ljava/io/InputStream;[J)V

    return-void
.end method


# virtual methods
.method public final bW(I)Ljava/io/File;
    .locals 1

    iget-object p1, p0, Lcom/kwad/sdk/core/diskcache/a/a$c;->anu:[Ljava/io/File;

    const/4 v0, 0x0

    aget-object p1, p1, v0

    return-object p1
.end method

.method public final close()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/diskcache/a/a$c;->anv:[Ljava/io/InputStream;

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, v0, v2

    invoke-static {v3}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method
