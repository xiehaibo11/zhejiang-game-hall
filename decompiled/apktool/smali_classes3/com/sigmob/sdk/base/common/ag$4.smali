.class Lcom/sigmob/sdk/base/common/ag$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/ag;->b(Landroid/content/Context;Ljava/lang/String;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/sigmob/sdk/base/common/af;

.field final synthetic c:Lcom/sigmob/sdk/base/common/ag;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/ag;Ljava/lang/String;Lcom/sigmob/sdk/base/common/af;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/ag$4;->c:Lcom/sigmob/sdk/base/common/ag;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/ag$4;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/base/common/ag$4;->b:Lcom/sigmob/sdk/base/common/af;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/ag$4;->c:Lcom/sigmob/sdk/base/common/ag;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/ag;->b(Lcom/sigmob/sdk/base/common/ag;)Lcom/sigmob/sdk/base/common/ag$b;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/ag$4;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/common/ag$4;->b:Lcom/sigmob/sdk/base/common/af;

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ag$b;->a(Ljava/lang/String;Lcom/sigmob/sdk/base/common/af;)V

    return-void
.end method
