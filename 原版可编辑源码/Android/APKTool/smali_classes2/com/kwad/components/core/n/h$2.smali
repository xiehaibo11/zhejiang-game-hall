.class final Lcom/kwad/components/core/n/h$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/n/h;->e(Lcom/kwad/components/core/n/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/g/a<",
        "Lcom/kwad/components/core/n/i;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic Pl:Lcom/kwad/components/core/n/c;

.field final synthetic Pn:Lcom/kwad/components/core/n/h;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/n/h;Lcom/kwad/components/core/n/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/n/h$2;->Pn:Lcom/kwad/components/core/n/h;

    iput-object p2, p0, Lcom/kwad/components/core/n/h$2;->Pl:Lcom/kwad/components/core/n/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private b(Lcom/kwad/components/core/n/i;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/n/h$2;->Pl:Lcom/kwad/components/core/n/c;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/n/i;->a(Lcom/kwad/components/core/n/c;)V

    return-void
.end method


# virtual methods
.method public final synthetic accept(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/n/i;

    invoke-direct {p0, p1}, Lcom/kwad/components/core/n/h$2;->b(Lcom/kwad/components/core/n/i;)V

    return-void
.end method
