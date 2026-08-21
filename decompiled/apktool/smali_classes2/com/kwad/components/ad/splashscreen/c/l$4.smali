.class final Lcom/kwad/components/ad/splashscreen/c/l$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/splashscreen/c/l;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Dn:Lcom/kwad/components/ad/splashscreen/c/l;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/l;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/l$4;->Dn:Lcom/kwad/components/ad/splashscreen/c/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l$4;->Dn:Lcom/kwad/components/ad/splashscreen/c/l;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/l;->c(Lcom/kwad/components/ad/splashscreen/c/l;)Lcom/kwad/sdk/core/g/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/g/c;->CG()V

    return-void
.end method
