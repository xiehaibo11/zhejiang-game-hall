.class Lcom/sigmob/sdk/nativead/u$8;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/u;->q()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/u;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/u;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/u$8;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    invoke-static {}, Lcom/sigmob/sdk/nativead/u;->m()Lcom/sigmob/sdk/nativead/n;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/nativead/u;->m()Lcom/sigmob/sdk/nativead/n;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/nativead/f;->a:Lcom/sigmob/sdk/nativead/f;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/nativead/n;->setUIStyle(Lcom/sigmob/sdk/nativead/f;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$8;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->p(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/common/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->a()V

    return-void
.end method
