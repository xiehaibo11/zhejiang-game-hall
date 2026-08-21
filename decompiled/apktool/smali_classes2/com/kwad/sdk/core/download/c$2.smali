.class final Lcom/kwad/sdk/core/download/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/download/c;->cO(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/g/a<",
        "Lcom/kwad/sdk/core/download/d;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic anK:Lcom/kwad/sdk/core/download/c;

.field final synthetic anL:Ljava/lang/String;

.field final synthetic anM:Lcom/kwad/sdk/core/download/f;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/download/c;Ljava/lang/String;Lcom/kwad/sdk/core/download/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/download/c$2;->anK:Lcom/kwad/sdk/core/download/c;

    iput-object p2, p0, Lcom/kwad/sdk/core/download/c$2;->anL:Ljava/lang/String;

    iput-object p3, p0, Lcom/kwad/sdk/core/download/c$2;->anM:Lcom/kwad/sdk/core/download/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private b(Lcom/kwad/sdk/core/download/d;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/c$2;->anL:Ljava/lang/String;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/core/download/d;->am(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final synthetic accept(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/download/d;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/download/c$2;->b(Lcom/kwad/sdk/core/download/d;)V

    return-void
.end method
