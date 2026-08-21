.class Lcom/sigmob/sdk/Sigmob$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/Sigmob;->init()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/Sigmob;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/Sigmob;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/Sigmob$3;->a:Lcom/sigmob/sdk/Sigmob;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    const-string v0, "app"

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/Sigmob$3;->a:Lcom/sigmob/sdk/Sigmob;

    invoke-static {}, Lcom/sigmob/sdk/base/common/d;->a()Lcom/sigmob/windad/WindAdError;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/Sigmob;->a(Lcom/sigmob/sdk/Sigmob;Lcom/sigmob/windad/WindAdError;)Lcom/sigmob/windad/WindAdError;

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->d()V

    iget-object v0, p0, Lcom/sigmob/sdk/Sigmob$3;->a:Lcom/sigmob/sdk/Sigmob;

    invoke-static {v0}, Lcom/sigmob/sdk/Sigmob;->a(Lcom/sigmob/sdk/Sigmob;)V

    iget-object v0, p0, Lcom/sigmob/sdk/Sigmob$3;->a:Lcom/sigmob/sdk/Sigmob;

    invoke-static {v0}, Lcom/sigmob/sdk/Sigmob;->b(Lcom/sigmob/sdk/Sigmob;)V

    return-void
.end method
