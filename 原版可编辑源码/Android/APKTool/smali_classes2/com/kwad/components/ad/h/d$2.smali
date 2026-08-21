.class final Lcom/kwad/components/ad/h/d$2;
.super Lcom/kwad/sdk/core/c/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/h/d;->fm()Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic oi:Lcom/kwad/components/ad/h/d;

.field final synthetic ok:Landroid/app/Activity;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/h/d;Landroid/app/Activity;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/h/d$2;->oi:Lcom/kwad/components/ad/h/d;

    iput-object p2, p0, Lcom/kwad/components/ad/h/d$2;->ok:Landroid/app/Activity;

    invoke-direct {p0}, Lcom/kwad/sdk/core/c/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final synthetic d(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Landroid/app/Activity;

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/h/d$2;->onActivityDestroyed(Landroid/app/Activity;)V

    return-void
.end method

.method public final onActivityDestroyed(Landroid/app/Activity;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/c/d;->onActivityDestroyed(Landroid/app/Activity;)V

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {p0}, Lcom/kwad/sdk/core/c/b;->b(Lcom/kwad/sdk/core/c/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/h/d$2;->ok:Landroid/app/Activity;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/h/d$2;->oi:Lcom/kwad/components/ad/h/d;

    invoke-static {p1}, Lcom/kwad/components/ad/h/d;->a(Lcom/kwad/components/ad/h/d;)V

    :cond_0
    return-void
.end method
