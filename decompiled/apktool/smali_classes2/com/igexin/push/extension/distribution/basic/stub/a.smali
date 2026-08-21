.class Lcom/igexin/push/extension/distribution/basic/stub/a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;


# direct methods
.method constructor <init>(Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;Z)V
    .locals 0

    iput-object p1, p0, Lcom/igexin/push/extension/distribution/basic/stub/a;->b:Lcom/igexin/push/extension/distribution/basic/stub/PushExtension;

    iput-boolean p2, p0, Lcom/igexin/push/extension/distribution/basic/stub/a;->a:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/stub/a;->a:Z

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/c/c;->a()Lcom/igexin/push/extension/distribution/basic/c/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/c/c;->e()V

    :cond_0
    const-wide/16 v0, 0x1388

    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    sget-boolean v0, Lcom/igexin/push/core/d;->n:Z

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/a/d;->a()Lcom/igexin/push/extension/distribution/basic/a/d;

    move-result-object v0

    sget-boolean v1, Lcom/igexin/push/core/d;->n:Z

    invoke-virtual {v0, v1}, Lcom/igexin/push/extension/distribution/basic/a/d;->a(Z)V

    :cond_1
    return-void
.end method
