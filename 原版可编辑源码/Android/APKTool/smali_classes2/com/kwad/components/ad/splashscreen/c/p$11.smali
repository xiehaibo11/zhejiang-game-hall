.class final Lcom/kwad/components/ad/splashscreen/c/p$11;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/splashscreen/h$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/p;->h(D)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic DO:Lcom/kwad/components/ad/splashscreen/c/p;

.field final synthetic fK:D


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/p;D)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$11;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    iput-wide p2, p0, Lcom/kwad/components/ad/splashscreen/c/p$11;->fK:D

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final b(Lcom/kwad/sdk/core/report/j;)V
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/p$11;->fK:D

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/report/j;->i(D)Lcom/kwad/sdk/core/report/j;

    return-void
.end method
