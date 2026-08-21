.class Lcom/sigmob/sdk/splash/i$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/views/q$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/splash/i;->onAttachedToWindow()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/splash/i;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/splash/i;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/splash/i$2;->a:Lcom/sigmob/sdk/splash/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$2;->a:Lcom/sigmob/sdk/splash/i;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/splash/i;->a(Lcom/sigmob/sdk/splash/i;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$2;->a:Lcom/sigmob/sdk/splash/i;

    invoke-static {v0}, Lcom/sigmob/sdk/splash/i;->d(Lcom/sigmob/sdk/splash/i;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$2;->a:Lcom/sigmob/sdk/splash/i;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/splash/i;->a(Z)V

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public b()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/splash/i$2;->a:Lcom/sigmob/sdk/splash/i;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/splash/i;->a(Lcom/sigmob/sdk/splash/i;Z)Z

    return-void
.end method
