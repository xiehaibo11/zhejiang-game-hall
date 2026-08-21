.class final Lcom/kwad/components/ad/adbit/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/g/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/adbit/c;->a(Lcom/kwad/sdk/internal/api/SceneImpl;)Ljava/lang/String;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/g/c<",
        "Lcom/kwad/components/ad/adbit/b;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic bv:Lcom/kwad/components/core/p/a/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/p/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/adbit/c$1;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private O()Lcom/kwad/components/ad/adbit/b;
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/adbit/b;

    iget-object v1, p0, Lcom/kwad/components/ad/adbit/c$1;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/adbit/b;-><init>(Lcom/kwad/components/core/p/a/a;)V

    return-object v0
.end method


# virtual methods
.method public final synthetic get()Ljava/lang/Object;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/adbit/c$1;->O()Lcom/kwad/components/ad/adbit/b;

    move-result-object v0

    return-object v0
.end method
