.class final Lcom/kwad/components/ad/splashscreen/c/p$13;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/p;->ls()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic DO:Lcom/kwad/components/ad/splashscreen/c/p;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/p;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$13;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p$13;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/l;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/l;-><init>()V

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/splashscreen/c/p;->a(Lcom/kwad/sdk/mvp/Presenter;Z)V

    return-void
.end method
