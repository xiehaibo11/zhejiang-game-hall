.class final Lcom/kwad/sdk/core/report/i$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/report/n;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/report/i;->b(Lcom/kwad/sdk/core/report/r;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/report/n<",
        "Lcom/kwad/sdk/core/report/r;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic aqW:Lcom/kwad/sdk/core/report/r;

.field final synthetic aqX:Lcom/kwad/sdk/core/report/i;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/report/i;Lcom/kwad/sdk/core/report/r;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/i$1;->aqX:Lcom/kwad/sdk/core/report/i;

    iput-object p2, p0, Lcom/kwad/sdk/core/report/i$1;->aqW:Lcom/kwad/sdk/core/report/r;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private BZ()Lcom/kwad/sdk/core/report/r;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/i$1;->aqW:Lcom/kwad/sdk/core/report/r;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/r;->Ce()Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final synthetic BU()Lcom/kwad/sdk/core/report/g;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/report/i$1;->BZ()Lcom/kwad/sdk/core/report/r;

    move-result-object v0

    return-object v0
.end method
