.class final Lcom/kwad/components/ad/adbit/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/g/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/adbit/c;->getBidRequestTokenV2(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/g/c<",
        "Lcom/kwad/components/ad/a/a;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic bv:Lcom/kwad/components/core/p/a/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/p/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/adbit/c$2;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private P()Lcom/kwad/components/ad/a/a;
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/a/a;

    iget-object v1, p0, Lcom/kwad/components/ad/adbit/c$2;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/a/a;-><init>(Lcom/kwad/components/core/p/a/a;)V

    return-object v0
.end method


# virtual methods
.method public final synthetic get()Ljava/lang/Object;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/adbit/c$2;->P()Lcom/kwad/components/ad/a/a;

    move-result-object v0

    return-object v0
.end method
