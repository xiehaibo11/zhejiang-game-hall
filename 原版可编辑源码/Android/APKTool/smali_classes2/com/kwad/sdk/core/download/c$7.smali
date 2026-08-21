.class final Lcom/kwad/sdk/core/download/c$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/download/c;->b(Ljava/lang/String;ILjava/lang/String;)V
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
.field final synthetic IA:Ljava/lang/String;

.field final synthetic Iz:I

.field final synthetic anK:Lcom/kwad/sdk/core/download/c;

.field final synthetic anL:Ljava/lang/String;

.field final synthetic anM:Lcom/kwad/sdk/core/download/f;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/download/c;Ljava/lang/String;ILjava/lang/String;Lcom/kwad/sdk/core/download/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/download/c$7;->anK:Lcom/kwad/sdk/core/download/c;

    iput-object p2, p0, Lcom/kwad/sdk/core/download/c$7;->anL:Ljava/lang/String;

    iput p3, p0, Lcom/kwad/sdk/core/download/c$7;->Iz:I

    iput-object p4, p0, Lcom/kwad/sdk/core/download/c$7;->IA:Ljava/lang/String;

    iput-object p5, p0, Lcom/kwad/sdk/core/download/c$7;->anM:Lcom/kwad/sdk/core/download/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private b(Lcom/kwad/sdk/core/download/d;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/download/c$7;->anL:Ljava/lang/String;

    iget v1, p0, Lcom/kwad/sdk/core/download/c$7;->Iz:I

    iget-object v2, p0, Lcom/kwad/sdk/core/download/c$7;->IA:Ljava/lang/String;

    iget-object v3, p0, Lcom/kwad/sdk/core/download/c$7;->anM:Lcom/kwad/sdk/core/download/f;

    invoke-interface {p1, v0, v1, v2, v3}, Lcom/kwad/sdk/core/download/d;->a(Ljava/lang/String;ILjava/lang/String;Lcom/kwad/sdk/core/download/f;)V

    return-void
.end method


# virtual methods
.method public final synthetic accept(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/download/d;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/download/c$7;->b(Lcom/kwad/sdk/core/download/d;)V

    return-void
.end method
