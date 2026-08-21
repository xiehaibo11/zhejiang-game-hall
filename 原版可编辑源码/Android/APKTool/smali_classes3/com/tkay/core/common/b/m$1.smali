.class final Lcom/tkay/core/common/b/m$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/m;->M()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/b/m;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/m;)V
    .locals 0

    .line 560
    iput-object p1, p0, Lcom/tkay/core/common/b/m$1;->a:Lcom/tkay/core/common/b/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 566
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m$1;->a:Lcom/tkay/core/common/b/m;

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/d;->a(Landroid/content/Context;)V

    .line 567
    iget-object v0, p0, Lcom/tkay/core/common/b/m$1;->a:Lcom/tkay/core/common/b/m;

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/d;->q(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 592
    :catch_0
    iget-object v0, p0, Lcom/tkay/core/common/b/m$1;->a:Lcom/tkay/core/common/b/m;

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 593
    iget-object v0, p0, Lcom/tkay/core/common/b/m$1;->a:Lcom/tkay/core/common/b/m;

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->a(Lcom/tkay/core/common/b/m;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    .line 594
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "********************************** "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Lcom/tkay/core/common/l/g;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " *************************************"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v4, "tkay"

    invoke-static {v4, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 595
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v5, "GAID(ADID): "

    invoke-direct {v1, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Lcom/tkay/core/common/l/d;->f()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " , AndroidID: "

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 596
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Lcom/tkay/core/common/l/g;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v4, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 597
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 598
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "You can use \"TYSDK.setDebuggerConfig(context, \""

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\",new ATDebuggerConfig.Builder(the NetworkFirmId you want to test).build());\" to open the debugger mode."

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method
