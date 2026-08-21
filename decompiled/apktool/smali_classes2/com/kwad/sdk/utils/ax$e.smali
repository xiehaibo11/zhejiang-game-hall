.class final Lcom/kwad/sdk/utils/ax$e;
.super Lcom/kwad/sdk/utils/j;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/utils/ax;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "e"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/utils/j<",
        "Lcom/kwad/sdk/k/a/f;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>(Z)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/utils/j;-><init>(Z)V

    return-void
.end method

.method private static cU(Landroid/content/Context;)Lcom/kwad/sdk/k/a/f;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/k/a/f;

    invoke-direct {v0}, Lcom/kwad/sdk/k/a/f;-><init>()V

    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->cD(Landroid/content/Context;)I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/k/a/f;->aGx:I

    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->cB(Landroid/content/Context;)I

    move-result p0

    iput p0, v0, Lcom/kwad/sdk/k/a/f;->aGw:I

    return-object v0
.end method


# virtual methods
.method protected final synthetic bP(Landroid/content/Context;)Ljava/lang/Object;
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/utils/ax$e;->cU(Landroid/content/Context;)Lcom/kwad/sdk/k/a/f;

    move-result-object p1

    return-object p1
.end method
