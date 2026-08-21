.class Lcom/sigmob/sdk/base/common/ag$3$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/ag$3;->a(Ljava/lang/String;Ljava/lang/Throwable;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/ag$3;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/ag$3;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/ag$3$3;->a:Lcom/sigmob/sdk/base/common/ag$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/ag$3$3;->a:Lcom/sigmob/sdk/base/common/ag$3;

    iget-object v0, v0, Lcom/sigmob/sdk/base/common/ag$3;->f:Lcom/sigmob/sdk/base/common/ag;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/ag;->b(Lcom/sigmob/sdk/base/common/ag;)Lcom/sigmob/sdk/base/common/ag$b;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ag$3$3;->a:Lcom/sigmob/sdk/base/common/ag$3;

    iget-object v1, v1, Lcom/sigmob/sdk/base/common/ag$3;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/ag$3$3;->a:Lcom/sigmob/sdk/base/common/ag$3;

    iget-object v2, v2, Lcom/sigmob/sdk/base/common/ag$3;->a:Lcom/sigmob/sdk/base/common/af;

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ag$b;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/common/af;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
