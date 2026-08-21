.class final Lcom/kwad/sdk/utils/a/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/utils/a/c$b;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/utils/a/c$b<",
        "Ljava/util/Set<",
        "Ljava/lang/String;",
        ">;>;"
    }
.end annotation


# static fields
.field static final aLz:Lcom/kwad/sdk/utils/a/g;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/utils/a/g;

    invoke-direct {v0}, Lcom/kwad/sdk/utils/a/g;-><init>()V

    sput-object v0, Lcom/kwad/sdk/utils/a/g;->aLz:Lcom/kwad/sdk/utils/a/g;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static e(Ljava/util/Set;)[B
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;)[B"
        }
    .end annotation

    invoke-interface {p0}, Ljava/util/Set;->isEmpty()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    new-array p0, v1, [B

    return-object p0

    :cond_0
    invoke-interface {p0}, Ljava/util/Set;->size()I

    move-result v0

    new-array v2, v0, [I

    new-array v3, v0, [Ljava/lang/String;

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    move v4, v1

    move v5, v4

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    if-nez v6, :cond_1

    add-int/lit8 v4, v4, 0x5

    const/4 v6, -0x1

    aput v6, v2, v5

    goto :goto_1

    :cond_1
    invoke-static {v6}, Lcom/kwad/sdk/utils/a/b;->fS(Ljava/lang/String;)I

    move-result v7

    aput-object v6, v3, v5

    aput v7, v2, v5

    invoke-static {v7}, Lcom/kwad/sdk/utils/a/b;->dh(I)I

    move-result v6

    add-int/2addr v6, v7

    add-int/2addr v4, v6

    :goto_1
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_2
    new-instance p0, Lcom/kwad/sdk/utils/a/b;

    invoke-direct {p0, v4}, Lcom/kwad/sdk/utils/a/b;-><init>(I)V

    :goto_2
    if-ge v1, v0, :cond_4

    aget v4, v2, v1

    invoke-virtual {p0, v4}, Lcom/kwad/sdk/utils/a/b;->dg(I)V

    if-ltz v4, :cond_3

    aget-object v4, v3, v1

    invoke-virtual {p0, v4}, Lcom/kwad/sdk/utils/a/b;->fR(Ljava/lang/String;)V

    :cond_3
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    :cond_4
    iget-object p0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    return-object p0
.end method

.method private static h([BII)Ljava/util/Set;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([BII)",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/LinkedHashSet;

    invoke-direct {v0}, Ljava/util/LinkedHashSet;-><init>()V

    if-lez p2, :cond_2

    new-instance v1, Lcom/kwad/sdk/utils/a/b;

    invoke-direct {v1, p0, p1}, Lcom/kwad/sdk/utils/a/b;-><init>([BI)V

    add-int/2addr p1, p2

    :goto_0
    iget p0, v1, Lcom/kwad/sdk/utils/a/b;->position:I

    if-ge p0, p1, :cond_0

    invoke-virtual {v1}, Lcom/kwad/sdk/utils/a/b;->Kg()I

    move-result p0

    invoke-virtual {v1, p0}, Lcom/kwad/sdk/utils/a/b;->getString(I)Ljava/lang/String;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    iget p0, v1, Lcom/kwad/sdk/utils/a/b;->position:I

    if-ne p0, p1, :cond_1

    goto :goto_1

    :cond_1
    new-instance p0, Ljava/lang/IllegalArgumentException;

    const-string p1, "Invalid String set"

    invoke-direct {p0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_2
    :goto_1
    return-object v0
.end method


# virtual methods
.method public final KA()Ljava/lang/String;
    .locals 1

    const-string v0, "StringSet"

    return-object v0
.end method

.method public final synthetic g([BII)Ljava/lang/Object;
    .locals 0

    invoke-static {p1, p2, p3}, Lcom/kwad/sdk/utils/a/g;->h([BII)Ljava/util/Set;

    move-result-object p1

    return-object p1
.end method

.method public final synthetic o(Ljava/lang/Object;)[B
    .locals 0

    check-cast p1, Ljava/util/Set;

    invoke-static {p1}, Lcom/kwad/sdk/utils/a/g;->e(Ljava/util/Set;)[B

    move-result-object p1

    return-object p1
.end method
