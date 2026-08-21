.class final Lcom/kwad/components/ad/splashscreen/c/n$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/n;->initView()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic DB:Lcom/kwad/components/ad/splashscreen/c/n;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/n;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/n$3;->DB:Lcom/kwad/components/ad/splashscreen/c/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n$3;->DB:Lcom/kwad/components/ad/splashscreen/c/n;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/n;->h(Lcom/kwad/components/ad/splashscreen/c/n;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n$3;->DB:Lcom/kwad/components/ad/splashscreen/c/n;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/n;->i(Lcom/kwad/components/ad/splashscreen/c/n;)Lcom/kwad/components/ad/splashscreen/widget/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n$3;->DB:Lcom/kwad/components/ad/splashscreen/c/n;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/n;->i(Lcom/kwad/components/ad/splashscreen/c/n;)Lcom/kwad/components/ad/splashscreen/widget/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/widget/c;->start()V

    :cond_0
    return-void
.end method
