.class Lcom/kuaishou/weapon/p0/cz$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kuaishou/weapon/p0/cz$2;->onActivityPaused(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/kuaishou/weapon/p0/cz$2;


# direct methods
.method constructor <init>(Lcom/kuaishou/weapon/p0/cz$2;)V
    .locals 0

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/cz$2$1;->a:Lcom/kuaishou/weapon/p0/cz$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/cz$2$1;->a:Lcom/kuaishou/weapon/p0/cz$2;

    iget-object v0, v0, Lcom/kuaishou/weapon/p0/cz$2;->a:[I

    const/4 v1, 0x0

    aget v0, v0, v1

    const/16 v2, 0x14

    if-ge v0, v2, :cond_0

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/cz$2$1;->a:Lcom/kuaishou/weapon/p0/cz$2;

    iget-object v0, v0, Lcom/kuaishou/weapon/p0/cz$2;->b:[I

    aget v0, v0, v1

    if-gtz v0, :cond_0

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/cz$2$1;->a:Lcom/kuaishou/weapon/p0/cz$2;

    iget-object v0, v0, Lcom/kuaishou/weapon/p0/cz$2;->c:Lcom/kuaishou/weapon/p0/cz;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cz;->a(Lcom/kuaishou/weapon/p0/cz;)Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Application;

    iget-object v1, p0, Lcom/kuaishou/weapon/p0/cz$2$1;->a:Lcom/kuaishou/weapon/p0/cz$2;

    iget-object v1, v1, Lcom/kuaishou/weapon/p0/cz$2;->c:Lcom/kuaishou/weapon/p0/cz;

    invoke-static {v1}, Lcom/kuaishou/weapon/p0/cz;->d(Lcom/kuaishou/weapon/p0/cz;)Landroid/app/Application$ActivityLifecycleCallbacks;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/Application;->unregisterActivityLifecycleCallbacks(Landroid/app/Application$ActivityLifecycleCallbacks;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kuaishou/weapon/p0/cz$2$1;->a:Lcom/kuaishou/weapon/p0/cz$2;

    iget-object v0, v0, Lcom/kuaishou/weapon/p0/cz$2;->b:[I

    aget v2, v0, v1

    add-int/lit8 v2, v2, -0x1

    aput v2, v0, v1

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/cz$2$1;->a:Lcom/kuaishou/weapon/p0/cz$2;

    iget-object v0, v0, Lcom/kuaishou/weapon/p0/cz$2;->c:Lcom/kuaishou/weapon/p0/cz;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cz;->a(Lcom/kuaishou/weapon/p0/cz;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cw;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/cw;

    move-result-object v0

    const/16 v2, 0x6a

    invoke-virtual {v0, v2}, Lcom/kuaishou/weapon/p0/cw;->a(I)V

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/cz$2$1;->a:Lcom/kuaishou/weapon/p0/cz$2;

    iget-object v0, v0, Lcom/kuaishou/weapon/p0/cz$2;->c:Lcom/kuaishou/weapon/p0/cz;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cz;->a(Lcom/kuaishou/weapon/p0/cz;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/dc;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/dc;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/kuaishou/weapon/p0/dc;->a(I)V

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/cz$2$1;->a:Lcom/kuaishou/weapon/p0/cz$2;

    iget-object v0, v0, Lcom/kuaishou/weapon/p0/cz$2;->c:Lcom/kuaishou/weapon/p0/cz;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cz;->a(Lcom/kuaishou/weapon/p0/cz;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/da;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/da;

    move-result-object v0

    invoke-virtual {v0, v2, v1}, Lcom/kuaishou/weapon/p0/da;->a(II)V

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/cz$2$1;->a:Lcom/kuaishou/weapon/p0/cz$2;

    iget-object v0, v0, Lcom/kuaishou/weapon/p0/cz$2;->c:Lcom/kuaishou/weapon/p0/cz;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cz;->a(Lcom/kuaishou/weapon/p0/cz;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cx;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/cx;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/kuaishou/weapon/p0/cx;->a(I)V

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/cz$2$1;->a:Lcom/kuaishou/weapon/p0/cz$2;

    iget-object v0, v0, Lcom/kuaishou/weapon/p0/cz$2;->c:Lcom/kuaishou/weapon/p0/cz;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cz;->a(Lcom/kuaishou/weapon/p0/cz;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cy;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/cy;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/kuaishou/weapon/p0/cy;->a(I)V

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/cz$2$1;->a:Lcom/kuaishou/weapon/p0/cz$2;

    iget-object v0, v0, Lcom/kuaishou/weapon/p0/cz$2;->c:Lcom/kuaishou/weapon/p0/cz;

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/cz;->a(Lcom/kuaishou/weapon/p0/cz;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kuaishou/weapon/p0/dd;->a(Landroid/content/Context;)Lcom/kuaishou/weapon/p0/dd;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/kuaishou/weapon/p0/dd;->a(I)V

    return-void
.end method
