.class final Lcom/kwad/sdk/m/i$1;
.super Lcom/kwad/sdk/core/c/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/m/i;->a(Landroid/content/Context;Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic jz:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/m/i$1;->jz:Landroid/content/Context;

    invoke-direct {p0}, Lcom/kwad/sdk/core/c/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final synthetic d(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Landroid/app/Activity;

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/m/i$1;->onActivityDestroyed(Landroid/app/Activity;)V

    return-void
.end method

.method public final onActivityDestroyed(Landroid/app/Activity;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/m/i$1;->jz:Landroid/content/Context;

    if-ne p1, v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {p0}, Lcom/kwad/sdk/core/c/b;->b(Lcom/kwad/sdk/core/c/c;)V

    iget-object p1, p0, Lcom/kwad/sdk/m/i$1;->jz:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/sdk/m/i;->onDestroy(Landroid/content/Context;)V

    :cond_0
    return-void
.end method
