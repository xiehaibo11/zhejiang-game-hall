.class final Lcom/kwad/components/core/e/a/h$1;
.super Lcom/kwad/sdk/core/c/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/e/a/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Jl:Lcom/kwad/components/core/e/a/h;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/e/a/h;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/a/h$1;->Jl:Lcom/kwad/components/core/e/a/h;

    invoke-direct {p0}, Lcom/kwad/sdk/core/c/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final synthetic d(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Landroid/app/Activity;

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/e/a/h$1;->onActivityDestroyed(Landroid/app/Activity;)V

    return-void
.end method

.method public final onActivityDestroyed(Landroid/app/Activity;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/c/d;->onActivityDestroyed(Landroid/app/Activity;)V

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {p0}, Lcom/kwad/sdk/core/c/b;->b(Lcom/kwad/sdk/core/c/c;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/h$1;->Jl:Lcom/kwad/components/core/e/a/h;

    invoke-static {v0}, Lcom/kwad/components/core/e/a/h;->a(Lcom/kwad/components/core/e/a/h;)Ljava/lang/ref/WeakReference;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/e/a/h$1;->Jl:Lcom/kwad/components/core/e/a/h;

    invoke-static {p1}, Lcom/kwad/components/core/e/a/h;->b(Lcom/kwad/components/core/e/a/h;)V

    :cond_0
    return-void
.end method
